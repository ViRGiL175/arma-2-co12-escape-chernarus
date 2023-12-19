// compileFunctions.sqf
// © OCTOBER 2011 - norrin
//replaced NORRN_FR_gotoHeli with NORRN_taxiHeli
//replaced NORRN_FR_destChosen with NORRN_H_destChosen
//NORRN_FR_commandingUnit with NORRN_H_commandingUnit
//NORRN_FR_exPos with NORRN_H_exPos
private ["_array","_unit","_message","_script","_commandingUnit","_heli"];
//Variables Norrn_HT
NORRN_extractMessage = "";
"Nor_HT_M" addPublicVariableEventHandler {_array = (_this select 1); _unit = _array select 0; _message = _array select 1; if (isNull _unit) then {hint _message} else {if (local _unit) then {hint _message}}};
Nor_HT_M0 = "Extraction helicopter inbound";
Nor_HT_M1 = "Deploying Smoke";
Nor_HT_M2 = NORRN_extractMessage;
Nor_HT_M3 = "Ready for take off";
Nor_HT_M4 = "Chopper refuelling at base";
Nor_HT_M5 = "Chopper awaiting orders";
Nor_HT_M6 = "Chopper returning to base";
Nor_HT_M7 = "Disembark the chopper";
Nor_HT_M8 = "Board the chopper";
"Nor_HT_TT"  addPublicVariableEventHandler {_array = (_this select 1); _unit = _array select 0; _message = _array select 1; if (local _unit) then {titleText [_message, "Plain Down", 0.3]}}; 
Nor_HT_TT0 = "Oh No! The evac chopper is down";
Nor_HT_TT1 = "New chopper is being prepared for extraction";
"Nor_HT_S" addPublicVariableEventHandler {_array = (_this select 1); _unit = _array select 0; _script = _array select 1; [_unit] spawn _script};
Nor_HT_S0 = Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\cancelGotoTaxi.sqf";
Nor_HT_S1 = Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\addHeliDepartAction.sqf";
Nor_HT_S2 = Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\extraction_destination.sqf";
Nor_HT_S3 = Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\extractliftOff.sqf";
Nor_HT_S5 = Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\addGotoAction.sqf";
Nor_HT_S6 = Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\removeAction.sqf";
Nor_HT_S7 = Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\addHeliDepartLandAction.sqf";
Nor_HT_S8 = Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\Land_destination.sqf";
Nor_HT_S11 =Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\RTB.sqf";
Nor_HT_S12 =Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\FR_destination.sqf";
Nor_HT_S13 =Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\addExAction.sqf";
Nor_HT_S14 =Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\rtbLink.sqf";
Nor_HT_S15 =Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\respawnHeli.sqf";
Nor_HT_S16 =Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\re_addExAction.sqf";
Nor_HT_S17 =Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\resetCommandingUnit.sqf";
Nor_HT_S18 =Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\initHeliTaxi.sqf";
"Nor_HT_SS" addPublicVariableEventHandler {_array = (_this select 1); 
										   _commandingUnit = _array select 0; 
										   _heli = _array select 1;
										   _script = _array select 2;
										   [_unit,_heli] spawn _script};

Nor_HT_SS0 =Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\redefineTaxi.sqf";