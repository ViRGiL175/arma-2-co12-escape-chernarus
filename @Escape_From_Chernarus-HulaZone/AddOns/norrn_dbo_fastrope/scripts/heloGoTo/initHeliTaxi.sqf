// initHeliTaxi.sqf (Nor_HT_S18)
// © OCTOBER 2011 - norrin
private ["_heli","_oldLeader","_newLeader","_gotoHeli","_heliBase","_crew_heli","_cargo_heli","_isplayer_cargo","_isplayer_groupLeader_cargo"];
_heli 		= _this select 0;
_oldLeader 	= [];
_newLeader 	= [];
_gotoHeli	= objNull;
if (player == leader group player) then
{	
	if ( format ["%1", (player getVariable "NORRN_FR_gotoHeli")] != "<null>") then {_gotoHeli = player getVariable "NORRN_FR_gotoHeli"};
	if (_heli != _gotoHeli) exitWith {}; 
	[player] spawn Nor_HT_S13; 
};
if (!isServer) exitWith {};
if (isplayer (driver _heli) || !local _heli) exitWith {};
while {canMove _heli && !isplayer (driver _heli) && !(_heli getVariable "NORRN_aerialTaxiDestroyed")} do
{	
	_crew_heli = crew _heli;
	_cargo_heli = [];
	{if(count(assignedVehicleRole _x) != 2 && _x != driver _heli) then {_cargo_heli = _cargo_heli + [_x]}}forEach _crew_heli;
	if (count _cargo_heli > 0 && !(_heli getVariable "NORRN_FR_destChosen")) then
	{	
		_isplayer_cargo = [];
		{if (isplayer _x) then {_isplayer_cargo = _isplayer_cargo + [_x]}} forEach _cargo_heli;
		if (count _isplayer_cargo > 0) then 
		{
			_isplayer_groupLeader_cargo = [];
			{if (_x == leader group _x) then {_isplayer_groupLeader_cargo = _isplayer_groupLeader_cargo + [_x]}}forEach _isplayer_cargo;
			if (count _isplayer_groupLeader_cargo > 0) then 
			{	
				_newLeader = _isplayer_groupLeader_cargo - _oldLeader;
				if (count _newLeader > 0) then 
				{
					{Nor_HT_S = [_x, Nor_HT_S5];	
					 publicVariable "Nor_HT_S";
					 if (local _x) then {[_x] spawn Nor_HT_S5};
					 sleep 1;} forEach _newLeader;
					_oldLeader = _oldLeader + _newLeader; 
				};
			};
		};
	};
	if (count _oldLeader > 0) then 
	{
		{if (!(_x in _crew_heli) || (_heli getVariable "NORRN_FR_destChosen")) then {_oldLeader = _oldLeader - [_x]}} forEach _oldLeader;
	};
	sleep 1;
};