// addGotoAction.sqf
// © OCTOBER 2011 - norrin
private ["_unit","_heli"];
 _unit = _this select 0;
 _heli = vehicle _unit;
 if (!local _unit || !(player in crew _heli) || player != (leader group player) || isplayer (driver _heli)|| NORRN_noAerialTaxiAtStart && time < 5) exitWith {}; 
while {(_heli getVariable "NORRN_FR_destChosen") && (player in crew _heli)} do {sleep 1};
//added in case extraction chopper not defined in init.sqf 100210
_heli setVariable ["NORRN_FR_commandingUnit", _unit, true];
player setVariable ["NORRN_FR_gotoHeli", _heli, true];
NORRN_heliGoTo_action = _heli addAction  ["Set fast rope destination", "\norrn_dbo_fastrope\scripts\heloGoTo\mapclick.sqf", [_heli, _unit]];
NORRN_heliGoToLand_action = _heli addAction  ["Set chopper destination", "\norrn_dbo_fastrope\scripts\heloGoTo\mapclickLand.sqf", [_heli, _unit]];
// Activate remove fastrope action script
[_heli] execVm "\norrn_dbo_fastrope\scripts\heloGoto\removeFR_action.sqf";
while {(player in crew _heli)} do {sleep 0.5};
_heli removeAction NORRN_heliGoTo_action;
_heli removeAction NORRN_heliGoToLand_action;

