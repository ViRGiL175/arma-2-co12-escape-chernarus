// cancelGotoFR.sqf
// © OCTOBER 2011 - norrin
private ["_heli"];
_heli = _this select 0;
_heli setVariable ["NORRN_heloGoto_cancel", true, true];
if (!local _heli) exitWith {};
_heli doMove getPos _heli;

