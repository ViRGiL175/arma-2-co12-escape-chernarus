// addHeliDepartLandAction.sqf
// © OCTOBER 2011 - norrin 
private ["_unit","_heli","_heliBase","_heliBaseHeight","_pilot"];
_unit = _this select 0;
if(!local _unit) exitWith {};
NORRN_allClear_4_takeOff = false;
_heli = player getVariable "NORRN_FR_gotoHeli";
sleep 1;
_heliBase = _heli getVariable "NORRN_heloGoTo_basePos";
_heliBaseHeight = (getPos _heliBase select 2) + 0.5;
while {(player in crew _heli)} do {sleep 0.1;}; 
NORRN_getTheFoutOfDodge_action = player addAction ["Give chopper all clear for takeoff", "\norrn_dbo_fastrope\scripts\heloGoTo\heliDepartLandAction.sqf",[_unit, _heli],1, false];
_pilot = driver _heli;
hint "Give chopper all clear for takeoff";
while {(getPos _heli select 2) < 20 && !NORRN_allClear_4_takeOff} do {sleep 0.1}; 
player switchMove "c7a_bravo_dovadeni3";
player removeAction NORRN_getTheFoutOfDodge_action;
sleep 2;
player switchMove "";