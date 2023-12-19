//extractionMapClick.sqf
// © OCTOBER 2011 - norrin
private ["_unit","_heli"];
_unit 		= _this select 3;
if (!local _unit) exitWith {};
NORRN_exPos = [];
sleep 1;
_heli = _unit getVariable "NORRN_FR_gotoHeli";
player removeAction NORRN_heliExtract_action;
_heli setVariable ["NORRN_FR_destChosen", true, true];
if (!canMove _heli) exitWith {hint "Chopper is too badly damaged to execute extraction!";NORRN_heloExtractMapClick = false}; 
NORRN_heloExtractMapClick = true;
titletext ["Click on the map to set chopper extraction point","plain down"];
onMapSingleClick "NORRN_exPos = _pos; NORRN_heloExtractMapClick = false";
while {NORRN_heloExtractMapClick} do {sleep 0.5};
hint "Extraction point set";
titletext ["","plain down"];
_heli setVariable ["NORRN_FR_exPos", NORRN_exPos, true];
Nor_HT_S = [_heli, Nor_HT_S2];	
publicVariable "Nor_HT_S";
if (local _heli) then {[_heli] spawn Nor_HT_S2};
while {!(player in (crew _heli)) || (getpos _heli select 2) < 20} do {sleep 0.5};
["","","",_heli] execVM "\norrn_dbo_fastrope\scripts\heloGoTo\cancelGotoAction.sqf";




