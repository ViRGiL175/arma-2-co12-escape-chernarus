
private ["_caller","_staticRaven"];
_caller = _this select 1;
_staticRaven = _caller getVariable "nameOfAttachedStaticRaven";
detach _staticRaven;
_staticRaven setVelocity [0,0,-0.3];

_caller setVariable ["staticRavenAttached",nil,true];
_caller setVariable ["nameOfAttachedStaticRaven",nil,true];

_caller removeAction mavBaseStationActionName_00;
_caller removeAction mavBaseStationActionName_001;
_caller removeAction mavBaseStationActionName_01;
_caller removeAction mavBaseStationActionName_02;
_caller removeAction mavBaseStationActionName_03;
_caller removeAction mavBaseStationActionName_04;