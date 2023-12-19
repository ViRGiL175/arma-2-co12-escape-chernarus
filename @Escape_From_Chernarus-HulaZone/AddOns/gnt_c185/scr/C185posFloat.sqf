//----------------------------------------
//script by Gnat
//----------------------------------------
// if you use it, credit me as appropraite
//----------------------------------------
_plane = _this select 0;
if !(local _plane) exitwith {};
_Float1 = "GNTXFloat1" createvehicle[0,0,0];
_Float2 = "GNTXFloat2" createvehicle[0,0,0];
_Float3 = "GNTXFloat2" createvehicle[0,0,0];

_Float2 attachto [_plane, [1.1,1,-1.7]];
_Float3 attachto [_plane, [-1.1,1,-1.7]];
_Float1 setVectorUp [0,0,1];

while {(alive _plane)} do {
	_xx = getpos _plane select 0;
	_yy = getpos _plane select 1;
	_zz = getpos _plane select 2;
	if(_zz < 7) then
	{
		if(surfaceIsWater [_xx, _yy]) then
		{
			_plane Animate ["LandContact", 1];
			_plane Animate ["GearFront", 1];
			_plane Animate ["GearRear", 1];
			_Float1 setvelocity velocity _plane;
			_Float1 setpos [getpos _plane select 0, getpos _plane select 1,0.4];
//			_Float1 setposasl [getpos _plane select 0, getpos _plane select 1,0.8];
		}
		else
		{
			_plane Animate ["LandContact", 0];
			_plane Animate ["GearFront", 0];
			_plane Animate ["GearRear", 0];
		};
	};
	if((_zz > 10) and ((_plane animationPhase "GearFront") == 0)) then
	{
			_plane Animate ["LandContact", 0.1];
			_plane Animate ["GearFront", 1];
			_plane Animate ["GearRear", 1];
	};
};
deleteVehicle _Float1;
deleteVehicle _Float2;
deleteVehicle _Float3;
