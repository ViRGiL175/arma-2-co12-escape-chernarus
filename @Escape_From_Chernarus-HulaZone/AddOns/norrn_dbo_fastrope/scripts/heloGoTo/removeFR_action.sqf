// removeFR_action.sqf
// © OCTOBER 2011 - norrin
private ["_heli"];
_heli = _this select 0;
while {player distance _heli < 5} do 
{	
	if (speed _Heli < 2 && speed _Heli > -2 && (getPos _heli select 2) >= 10 && (getPos _heli select 2) <= 35) then
	{
		_heli removeAction NORRN_fast_rope_act;
	};
	sleep 1;
};