// heliStayPut.sqf
// © OCTOBER 2011 - norrin
private ["_heli"];
_heli = _this select 0;
while {(_heli getVariable "NORRN_heliStayPut")} do
{	
	_heli setVelocity [0,0,-0.1];
	sleep 0.1;
};