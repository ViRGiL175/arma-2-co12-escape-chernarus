//RTBaction.sqf
// © OCTOBER 2011 - norrin
private ["_heli"];
_heli = _this select 3;
_heli removeAction NORRN_heliGoToRTB_action;
_heli setVariable ["NORRN_FR_destChosen", true, true];
if (local _heli) then 
{
	[_heli] spawn Nor_HT_S11
} else {
	Nor_HT_S = [_heli, Nor_HT_S11];
	publicVariable "Nor_HT_S";
};
_heli removeAction NORRN_heliGoTo_action;
_heli removeAction NORRN_heliGoToLand_action;
