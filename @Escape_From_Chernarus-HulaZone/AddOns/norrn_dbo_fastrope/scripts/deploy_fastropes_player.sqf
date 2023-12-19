// deploy_fastropes_player.sqf
// © SEPTEMBER 2011 - norrin
private ["_array ","_heli","_timer"];

//Variables
_array 		= _this Select 3;
_heli       = _array Select 0;
_timer      = _array Select 1;

_heli removeAction NORRN_fast_rope_act;
_heli setVariable ["NORRN_ropesDeployed", true, true];
_heli setVariable ["NORRN_deployRopeTimer", _timer, true];
if (!local _heli) then
{
	Nor_FR_PV = [0,_heli,NORRN_FR_DR];
	publicVariable "Nor_FR_PV";
} else {
	[_heli] spawn NORRN_FR_DR;
};
