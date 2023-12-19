// RTB.sqf
// © OCTOBER 2011 - norrin
private ["_heli","_group","_base","_pilot","_flightCrew","_gunners","_unit"];

_heli 		= _this select 0;
if (!local _heli) exitWith {};
_group 		= group _heli;
_base 		= _heli getVariable "NORRN_heloGoTo_basePos";
_pilot 		= driver _heli;
_flightCrew	= crew _heli;
_gunners	= [];
{if(count(assignedVehicleRole _x) == 2) then {_gunners = _gunners + [_x]}}forEach _flightcrew;
_unit 		= _heli getVariable "NORRN_FR_commandingUnit";
_heli flyInHeight 60;
_heli doMove (getPos _heli);
sleep 5;
{if(count(assignedVehicleRole _x) == 2 && _x == driver _heli) then {_flightCrew = _flightCrew + [_x]}}forEach crew _heli;
_flightCrew = _flightCrew - [_pilot];
_heli removeAction NORRN_heliGoToRTB_action;
_heli setCaptive false;
sleep 1;
_heli doMove (getPos _base);
if (local _unit) then 
{
	hint Nor_HT_M6
} else { 
	Nor_HT_M = [_unit, Nor_HT_M6];
	publicVariable "Nor_HT_M";
};
sleep 5;
while {_heli distance _base> 200} do {sleep 1};
_heli doMove (getPos _base);
_heli flyInHeight 40;
while {_heli distance _base > 100} do 
{	
	if (unitReady _heli) then {_heli doMove (getPos _base)};
	sleep 1;
};
_heli land "LAND";
while {_heli distance _base > 10 && (getPos _heli select 2 > 10)} do {sleep 0.5};	
while {(alive _heli) && !(unitReady _heli)} do {sleep 1};
if (alive _heli) then {_heli land "LAND"};
_heli engineOn false;	
sleep 2;
_heli setVelocity [0, 0, 0];
sleep 2;
_heli land "none";
//remove unecessary actions
if (local _unit) then 
{
	[_unit] spawn Nor_HT_S6
} else {
	Nor_HT_S = [_unit, Nor_HT_S6];
	publicVariable "Nor_HT_S";
};
if (isEngineOn _heli) then {_heli engineOn false};
if (local _unit) then 
{
	hint Nor_HT_M4
} else {
	Nor_HT_M = [_unit, Nor_HT_M4];
	publicVariable "Nor_HT_M";
};
sleep 10;
_heli setFuel 1;
sleep 5;
if (local _unit) then 
{
	hint Nor_HT_M5
} else {
	Nor_HT_M = [_unit, Nor_HT_M5];
	publicVariable "Nor_HT_M";
};
_c = 0;
if !(_pilot in crew _heli) then {_pilot moveInDriver _heli};
{if (_x == vehicle _x) then {_x moveInTurret [_heli, [_c]]; _c = _c + 1}} forEach _gunners;
_heli setVariable ["NORRN_FR_destChosen", false, true];
if (local _unit) then {
	[_unit] spawn Nor_HT_S13
} else {
	Nor_HT_S = [_unit, Nor_HT_S13];
	publicVariable "Nor_HT_S";
};







