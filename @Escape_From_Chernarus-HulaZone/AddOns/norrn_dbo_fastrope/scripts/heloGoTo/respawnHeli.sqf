// respawnHeli.sqf
// © OCTOBER 2011 - norrin
private ["_heli","_type","_name","_new_heli","_side","_group","_onboard","_crew","_type_crew","_assignedRole_crew","_commandingUnit","_base","_loop","_typeNew","_assignedNew","_guy"];
_heli 		= _this select 0;
if (!local _heli) exitWith {};
_type 		= typeOf _heli;
_name 		= format ["%1", _heli];
_new_heli	= objNull;
_side 		= side _heli;
_group 		= group _heli; 
sleep 2;
// Identify crew members
_onboard = crew _heli;
_crew = [];
//Define alive heli variable
_commandingUnit = _heli getVariable "NORRN_FR_commandingUnit";
_heli setVariable ["NORRN_heloGoto_cancel", true, true];
_base = _heli getVariable "NORRN_heloGoTo_basePos";
{if(count(assignedVehicleRole _x) == 2 || _x == driver _heli) then {_crew = _crew + [_x]}}forEach _onboard;
_type_crew = [];
{_type_crew = _type_crew + [typeOf _x]} forEach _crew;
_assignedRole_crew = [];
{_assignedRole_crew = _assignedRole_crew + [assignedVehicleRole _x]} forEach _crew;
// Sleep while heli is OK
while {canMove _heli && alive _heli} do {sleep 1};
while {(getPos _heli select 2) > 5} do {sleep 1};
_heli setVariable ["NORRN_aerialTaxiDestroyed", true, true];
sleep 1;
// Notify player of damage to chopper
if (local _commandingUnit) then 
{
	titleText [Nor_HT_TT0, "Plain Down", 0.3]
} else { 
	Nor_HT_TT = [_commandingUnit, Nor_HT_TT0];
	publicVariable "Nor_HT_TT";
};
sleep 5;
// Delete heli and crew once it reaches the ground unless specified
if (!NORRN_FR_keepOldCrew) then {{if (!isplayer _x) then {deleteVehicle _x}} forEach _crew};
sleep 1; 
if (!NORRN_FR_keepOldHeli) then {deleteVehicle _heli};  
deleteGroup _group;
_heli = objNull;
sleep 1; 
//Respawn new heli
_new_heli = _type createVehicle (getPos _base);
sleep 2;
_new_heli setPos getPos _base;
// Notify player that new chopper has respawned
if (local _commandingUnit) then 
{
	titleText [Nor_HT_TT1, "Plain Down", 0.3]
} else { 
	Nor_HT_TT = [_commandingUnit, Nor_HT_TT1];
	publicVariable "Nor_HT_TT";
};
// Name new heli
_new_heli setVehicleVarName _name;
_new_heli call compile format ["%1=_This ; PublicVariable '%1'",_name];
// Create crew
_group = createGroup _side;
for [{ _loop = 0 },{ _loop < count  _crew},{ _loop = _loop + 1}] do
{	
	_typeNew = _type_crew select _loop;
	_assignedNew = _assignedRole_crew select _loop;
	_unit = _typeNew createUnit [(getPos _base), _group];
	sleep 1;
};
sleep 2;
// Crew board new heli
_group reveal _new_heli;
_unitsGroup  = units _group;
for [{ _loop = 0 },{ _loop < count  _unitsGroup},{ _loop = _loop + 1}] do
{	
	_guy = _unitsGroup select _loop;
	_assignedNew = _assignedRole_crew select _loop;
	if (_loop == 0) then {_guy moveInDriver _new_heli} else
	{_guy moveInTurret [_new_heli, [(_loop - 1)]]};
	sleep 0.1;
};
// Reset  heli variables
_new_heli setVariable ["NORRN_heloGoTo_basePos", _base, true];
_new_heli setVariable ["NORRN_FR_commandingUnit", _commandingUnit, true];
_new_heli setVariable ["NORRN_FR_destChosen", false, true];
_new_heli setVariable ["NORRN_aerialTaxiDestroyed", false, true];
_commandingUnit setVariable ["NORRN_FR_gotoHeli", _new_heli, true];
sleep 1;
// Restart GoTo scripts
if (isServer) then {[_new_heli] spawn Nor_HT_S18};
if (!local _commandingUnit) then
{
	Nor_HT_S = [_new_heli, Nor_HT_S18];	
	publicVariable "Nor_HT_S";
};
//Added for respawning heli
[_heli] spawn Nor_HT_S15;





 




 
