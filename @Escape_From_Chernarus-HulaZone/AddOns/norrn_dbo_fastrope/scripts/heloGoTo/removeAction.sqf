//removeAction.sqf
// © AUGUST 2011 - norrin
private ["_unit","_heli"];
_unit = _this select 0;
if (!local _unit) exitWith {};
_heli = vehicle _unit;
_heli removeAction NORRN_heliGoToCancel_action;
_heli removeAction NORRN_heliGoTo_action;
sleep 0.5;