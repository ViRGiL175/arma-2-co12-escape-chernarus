//----------------------------------------
//script by Gnat
//----------------------------------------
// if you use it, credit me as appropraite
//----------------------------------------
if (!isServer) exitWith {};
_plane = _this select 0;

_sxc = [_plane] execvm "\GNT_C185\scr\C185posFloat.sqf";
sleep 0.2;
_xx = getpos _plane select 0;
_yy = getpos _plane select 1;
_zz = getpos _plane select 2;
if ((_zz < 7) and (surfaceIsWater [_xx, _yy])) then
{
	_plane setposasl [_xx, _yy, 0.0];
};


