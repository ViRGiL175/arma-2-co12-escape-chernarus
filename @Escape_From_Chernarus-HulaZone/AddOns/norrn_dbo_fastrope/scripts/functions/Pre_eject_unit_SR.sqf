// pre_eject_unit_SR.sqf
// © OCTOBER 2011 - norrin

private ["_array","_unit","_cargoPos","_forceDis","_heli","_t"];

_array		= _this  select 0;
_unit 		= _array select 0;
if (!local _unit) exitWith {};
_cargoPos	= _array select 1;
_forceDis	= _array select 2;
_heli 		= vehicle _unit;
_t 			= 0;
if (_unit == player) then {Nor_optFR = false};
if (_forceDis == 0) then
{
	[_unit,_cargoPos,_forceDis] spawn NORRN_FR_EUS;
} else {
	if (isplayer _unit) then 
	{
		_unit setVariable ["NORRN_FR_pD", false, true]; //global variable - player agrees to descend fastrope 
		NORRN_descend_rope_act = _heli addAction ["Descend fast rope", "\norrn_dbo_fastrope\scripts\link_unit_SR.sqf", [_unit,_cargoPos,_forceDis], 10, true, true, ""];
		Nor_FR_AIcomplete = false;
		[_unit] spawn NORRN_FR_t;
		while {vehicle player != player && !(_heli getVariable "NORRN_fastRopeComplete")&& !Nor_FR_AIcomplete} do {sleep 1};
		if (Nor_FR_AIcomplete && !(_unit getVariable "NORRN_FR_pD") && !(_heli getVariable "NORRN_fastRopeComplete")) then {[_unit,_cargoPos,_forceDis] spawn NORRN_FR_EUS};
		_heli removeAction NORRN_descend_rope_act;
	} else {
		[_unit,_cargoPos,_forceDis] spawn NORRN_FR_EUS;
	};
 };