// fastRope_playerPilotInit.sqf
// © OCTOBER 2011 - norrin
private ["_heli","_forceDismount"];
if(!isServer) then {while {isNull player} do {sleep 0.1}};  
_heli 			= _this select 0;
_forceDismount  = _this select 1;
_heli setVariable ["NORRN_forceDismount", _forceDismount, true];
_heli addEventHandler ["GETIN",{[_this select 0, _this select 2] execVM "\norrn_dbo_fastrope\scripts\limitFastRopeAction.sqf"}]; 
if (player in (crew _heli)) then {[_heli, player] execVM "\norrn_dbo_fastrope\scripts\limitFastRopeAction.sqf"};
if (isServer) then 
{
	if ( format ["%1", (_heli getVariable "NORRN_fr_abort")] == "<null>") then {_heli setVariable ["NORRN_fr_abort", false, true]};
};
