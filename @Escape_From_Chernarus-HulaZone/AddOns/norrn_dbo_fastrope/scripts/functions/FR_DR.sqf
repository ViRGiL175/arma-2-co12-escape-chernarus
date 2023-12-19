// FR_DR.sqf
// © SEPTEMBER 2011 - norrin
private ["_heli"];

_heli = _this select 0;
if (!local _heli) exitWith {};
[_heli] execVM "\norrn_dbo_fastrope\scripts\drawRopes.sqf"; 
