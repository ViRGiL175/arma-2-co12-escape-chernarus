// heliDepartAction.sqf
// © OCTOBER 2011 - norrin
private ["_array","_unit","_heli"];
_array = _this select 3;
_unit = _array select 0;
_heli = _array select 1;
NORRN_allClear_4_takeOff  = true;
if (local _heli) then 
{	
	[_heli] spawn Nor_HT_S3
} else {
	Nor_HT_S = [_heli, Nor_HT_S3];	
	publicVariable "Nor_HT_S";
};

