// addHeliDepartAction.sqf
// © OCTOBER 2011 - norrin
private ["_unit","_heli"];
_unit = _this select 0;
if(!local _unit) exitWith {};
NORRN_allClear_4_takeOff = false;
_heli = player getVariable "NORRN_FR_gotoHeli";
sleep 1;
while {!(player in crew _heli)} do {sleep 0.1;}; 
NORRN_getTheFoutOfDodge_action = _heli addAction ["Give chopper all clear for takeoff", "\norrn_dbo_fastrope\scripts\heloGoTo\heliDepartAction.sqf",[_unit, _heli],1, false];
hint "Give chopper all clear for takeoff";
while {(getPos _heli select 2) < 20 && !NORRN_allClear_4_takeOff} do {sleep 0.1}; 
_heli removeAction NORRN_getTheFoutOfDodge_action;