// extractLiftOff.sqf
// © OCTOBER 2011 - norrin
private ["_heli"];
_heli = _this select 0;
if (!local _heli) exitWith {};
if !(isEngineOn _heli) then {_heli engineOn true};
// Added for stayPut function
_heli setVariable ["NORRN_heliStayPut", false, true];
sleep 2;
_heli flyInHeight 50;
sleep 2;
_heli doMove getPos _heli;
//send take off message to players
hint Nor_HT_M3;
Nor_HT_M = [objNull, Nor_HT_M3];
publicVariable "Nor_HT_M";
