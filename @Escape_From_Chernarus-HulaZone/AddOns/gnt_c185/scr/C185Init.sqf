//----------------------------------------
//script by Gnat
//----------------------------------------
// if you use it, credit me as appropraite
//----------------------------------------
if !(isServer) exitWith {};
_plane = _this select 0;

sleep 0.05;
_plane animate ["RPod", 1];
if ((typeOf _plane) == "GNT_C185T") then
{
	_plane animate ["RPod", 0];
};
