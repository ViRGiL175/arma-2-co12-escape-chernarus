// redefineTaxi.sqf
// © OCTOBER 2011 - norrin
private ["_unit","_heli"];
_unit = _this select 0;
_heli = _this select 1;
if (!local _unit) exitWith {}; 
player setVariable ['NORRN_taxiHeli', _heli, true];