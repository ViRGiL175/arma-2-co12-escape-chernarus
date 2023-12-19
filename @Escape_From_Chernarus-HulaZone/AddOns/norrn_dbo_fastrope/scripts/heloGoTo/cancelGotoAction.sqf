// cancelGotoAction.sqf
// OCTOBER 2011 - norrin
private ["_heli"];
_heli = _this select 3;
_heli removeAction NORRN_heliGoToCancel_action;
_heli setVariable ["NORRN_FR_destChosen", false, true];
Nor_HT_S = [_heli, Nor_HT_S0];
publicVariable "Nor_HT_S";
if (local _heli) then {[_heli] spawn Nor_HT_S0};
NORRN_heliGoToRTB_action = _heli addAction  ["Return to base", "\norrn_dbo_fastrope\scripts\heloGoTo\RTBaction.sqf", _heli];


