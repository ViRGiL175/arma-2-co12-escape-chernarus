
private ["_vel","_vehspeed","_wing_up","_plane","_maxspeed","_dir","_speed"];
_plane = _this select 0;
_maxspeed = _this select 1;

while {(alive _plane)} do {

_vehspeed = speed _plane;
_wing_up=(_plane animationPhase "wing_fold")>0.9;

if ((_vehspeed > _maxspeed) and _wing_up) then {

_vel = velocity _plane;
_dir = direction _plane;
_speed = -1; 
_plane setVelocity [(_vel select 0)+(sin _dir*_speed),(_vel select 1)+(cos _dir*_speed),(_vel select 2)];
};
sleep 0.1;
};

