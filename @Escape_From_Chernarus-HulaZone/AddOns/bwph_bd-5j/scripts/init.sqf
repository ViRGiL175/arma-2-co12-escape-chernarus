
private ["_plane"];
_plane = _this select 0;
plane = _plane;

[_plane] ExecVM "\BWPH_BD-5J\scripts\warning.sqf";
[_plane] ExecVM "\BWPH_BD-5J\scripts\damage.sqf";
[_plane] ExecVM "\BWPH_BD-5J\scripts\fuel.sqf";
[_plane] ExecVM "\BWPH_BD-5J\scripts\gear.sqf";
[_plane] ExecVM "\BWPH_BD-5J\scripts\wepselect.sqf";
[_plane] ExecVM "\BWPH_BD-5J\scripts\enginestall.sqf";
[_plane] ExecVM "\BWPH_BD-5J\scripts\lowammo.sqf";
[_plane, 35] execVM "\BWPH_BD-5J\scripts\limit_speed.sqf";