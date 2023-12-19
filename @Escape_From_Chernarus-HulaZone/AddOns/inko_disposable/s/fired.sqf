#define __config configFile >> "CfgWeapons" >> _weapon

_unit = _this select 0;
_weapon = _this select 1;

_magazines = getArray (__config >> "magazines");
_usedWeapon = getText (__config >> "inko_disposable_used");
_tubeModel = getText (__config >> "inko_disposable_tube");

_usedWeaponMagazines = getArray (configFile >> "CfgWeapons" >> _usedWeapon >> "magazines");
_usedMagazine = nil;

if (count _usedWeaponMagazines > 0) then
{
	_usedMagazine = _usedWeaponMagazines select 0;
	_unit addMagazine _usedMagazine;
	_unit addWeapon _usedWeapon;
	_unit removeWeapon _weapon;
	_unit selectWeapon _usedWeapon;
};

if (_unit == player) then
{
	while {toUpper (currentWeapon _unit) in [toUpper(_usedWeapon), toUpper (_weapon)]} do { sleep 0.3 };
} else { sleep 1.2 };

sleep 0.3;

if ((alive _unit) && !(isNil "_unit")) then
{
	if (_usedWeapon in weapons _unit) then { _unit removeWeapon _usedWeapon };
	if (_usedMagazine in magazines _unit) then { _unit removeMagazines _usedMagazine };

	_unit removeWeapon _weapon;

	if (_unit != player) then
	{
		_unit doTarget objNull;
		_primw = primaryWeapon _unit;
		if (_primw != "") then
		{
			_unit selectWeapon _primw;
			_muzzles  = getArray (configFile >> "cfgWeapons" >> _primw >> "muzzles");
			_unit selectWeapon (_muzzles select 0);
		};
	};

	inko_disp_throw = [_unit,_tubeModel];
	publicVariable "inko_disp_throw";
	if (!isDedicated) then { [_unit,_tubeModel] call inko_disposable_throw; };
};