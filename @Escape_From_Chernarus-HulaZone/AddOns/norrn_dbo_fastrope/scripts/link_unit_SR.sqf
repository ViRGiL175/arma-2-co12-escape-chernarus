// link_unit_SR.sqf
// © OCTOBER 2011 - norrin

private ["_array","_unit","_cargoPos","_forceDis","_heli"];

_array		= _this  select 3;
_unit 		= _array select 0;
_cargoPos	= _array select 1;
_forceDis	= _array select 2;
_heli 		= vehicle _unit;

Nor_optFR = true;
_unit setVariable ["NORRN_FR_pD", true, true];
_heli removeAction NORRN_descend_rope_act;
[_unit,_cargoPos,_forceDis] spawn NORRN_FR_EUS;
TitleText ["You are awaiting free fast rope", "PLAIN DOWN", 0.3];

 
 
