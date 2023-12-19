// FR_actZ.sqf
// © SEPTEMBER 2011 - norrin

// > 8			add fastrope
// < 15		 	60 foot rope
// >= 15 && < 30 	90 foot rope
// > 30			120 foot rope
// < 35			remove fastrope	

private ["_heli","_maxZ","_pos","_alt","_actZ"];

_heli 	= _this select 0;
_maxZ	= 1.0;
_actZ 	= 0;
_pos 	= getPos _heli;
_alt 	= _pos select 2;

if (_alt < 15) then {_actZ = _maxZ * _alt/15};
if (_alt > 15 && _alt < 30) then {_actZ = _maxZ * _alt/30};
if (_alt > 30) then {_actZ = _maxZ * _alt/45};
_actZ;