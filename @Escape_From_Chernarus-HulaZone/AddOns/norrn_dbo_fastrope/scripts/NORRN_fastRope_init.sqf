// NORRN_fastRope_init.sqf
// © JANUARY 2012 - norrin
private ["_heli","_forceDismount","_timer","_script"];
if(!isServer) then {while {isNull player} do {sleep 0.1}}; 
_heli 			= _this select 0;
_forceDismount	= _this select 1;
_timer			= 0;
_distance		= 5;
_script			= "";
/////////////////////////////////////////Compile script functions for server and client///////////////////////////////////////////////
execVM "\norrn_dbo_fastrope\scripts\compileFunctions.sqf";
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if (count _this  == 2) then
{
	[_heli, _forceDismount] execVM "\norrn_dbo_fastrope\scripts\fastRope_playerPilotInit.sqf";
} else {
	_timer	= _this select 2;
	_script	= _this select 3;
	if (count _this  == 5) then {_distance = _this select 4};
	[_heli, _forceDismount, _timer, _script] execVM "\norrn_dbo_fastrope\scripts\fast_rope_AI_pilot.sqf";
};
_heli setVariable ["NORRN_FR_unitDist", _distance, true]; // added variable for the distance a unit will move away after disembarking fast rope for AI insertions 10/10/11
