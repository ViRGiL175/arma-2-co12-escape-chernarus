//----------------------------------------
//script by Gnat
//----------------------------------------
// if you use it, credit me as appropraite
//----------------------------------------
private ["_plane","_alt","_a1", "_a2", "_a3", "_particle","_zloop"];
_plane = _this select 0;
if !(local _plane) exitwith {};
if ((getpos _plane select 2) > 2.0) exitwith {};

_a1 = random 3;
_a2 = random 10;
_a3 = fuel _plane;
if !((driver _plane) == player) exitwith {};
if ((isengineon _plane) and (_a2 > 7.5)) then 
{
	sleep _a1;
	(driver _plane) action ["engineOff", _plane];
	sleep 2;
};
