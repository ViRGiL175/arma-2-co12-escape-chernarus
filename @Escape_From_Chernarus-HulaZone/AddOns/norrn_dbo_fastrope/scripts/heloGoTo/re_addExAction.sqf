// re_addExAction.sqf
// © OCTOBER 2011 - norrin
private ["_heli"];
NORRN_heloExtractMapClick = true;
_heli = player getVariable "NORRN_FR_gotoHeli";
sleep 1;
while {alive player && NORRN_heloExtractMapClick && NORRN_heloGotoMapClick && !(_heli getVariable "NORRN_FR_destChosen")} do {sleep 0.5};
if (alive player) exitWith {};
if (!alive player) then 
{
	while {!alive player} do {sleep 0.5};
	[player] spawn Nor_HT_S13;
};	