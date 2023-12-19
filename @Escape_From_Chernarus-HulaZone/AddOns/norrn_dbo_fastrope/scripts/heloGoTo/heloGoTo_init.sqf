// heloGoTo_init.sqf
// © JANUARY 2012 - norrin
private ["_heli","_heliBase"];
_heli = _this select 0;
//////////////Compile script functions for server and client//////////////
execVM "\norrn_dbo_fastrope\scripts\compileFunctions.sqf";
execVM "\norrn_dbo_fastrope\scripts\heloGoTo\compileFunctions.sqf";
/////////////////////////////////////////////////////////////////
sleep 1;
[_heli] spawn Nor_HT_S18;
if (!isServer) exitWith {};
// Define heli start-up variables
if (isNil "NORRN_aerialTaxiRespawnOff") then {NORRN_aerialTaxiRespawnOff = false};
if (isNil "NORRN_FR_keepOldCrew") then {NORRN_FR_keepOldCrew = false};
if (isNil "NORRN_FR_keepOldHeli") then {NORRN_FR_keepOldHeli = false};
_heli setVariable ["NORRN_FR_destChosen", false, true];
_heli setVariable ["NORRN_aerialTaxiDestroyed", false, true];
// Compile server only chopper functions
Norrn_heliStayPut_Func = Compile PreprocessFile "\norrn_dbo_fastrope\scripts\heloGoTo\heliStayPut.sqf";
// Identify the base position of the helicopter - modified for respawn
if ( format ["%1", (_heli getVariable "NORRN_heloGoTo_basePos")] == "<null>") then 
{
	_heliBase = "HeliH" createVehicle getPos _heli;
	_heliBase setDir (getDir _heli); 
	_heliBase setPos [(getPos _heli) select 0,(getPos _heli) select 1, 0];
	sleep 2;
	_heli setVariable ["NORRN_heloGoTo_basePos", _heliBase, true];
};
sleep 2;
// Start taxi respawn script
if (!NORRN_aerialTaxiRespawnOff) exitWith {[_heli] spawn Nor_HT_S15};