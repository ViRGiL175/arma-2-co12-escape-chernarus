private ["_staticRaven"];
_staticRaven = _this select 0;


// _staticRaven removeAction disassembleRavenAct;
// _staticRaven removeAction launchRavenAct;

disassembleRavenAct = _staticRaven addAction ["Disassemble RQ-11 Raven","\raven\scripts\packupRaven.sqf",[],1,false,true,"","(isNil{_target getVariable ""batteryChargerIsRunning""}) and (_this == player)"];
launchRavenAct = _staticRaven addAction ["Pick Up RQ-11 Raven","\raven\scripts\startingopen.sqf",[],1,false,true,"","(isNil{_this getVariable 'nameOfMAV'}) and (isNil{_this getVariable 'staticRavenAttached'}) and (_this == player)"];
strobeRavenResetAct = _staticRaven addAction ["Strobe Reset","\raven\scripts\strobeOnOff.sqf",(0),1,false,true,"","(_this == player) and (!isNil{_target getVariable ""mavStrobeOn""})"];
strobeRavenTestAct = _staticRaven addAction ["Strobe Test","\raven\scripts\strobeOnOff.sqf",(1),1,false,true,"","(_this == player) and (isNil{_target getVariable ""mavStrobeOn""})"];
batteryLevelCheckRavenAct = _staticRaven addAction ["Battery Level","\raven\scripts\batteryLevelCheck.sqf",[],1,false,true,"","(isNil{_this getVariable 'nameOfMAV'}) and (_this == player)"];
batteryRechargeRavenAct = _staticRaven addAction ["Recharge Battery","\raven\scripts\batteryRecharge.sqf",[],1,false,true,"","((_target getVariable ""ravenBatteryLevel"") < 100) and (isNil{_target getVariable ""batteryChargerIsRunning""}) and (isNil{_this getVariable 'nameOfMAV'}) and (_this == player)"];
player reveal _staticRaven;

_staticRaven addMPEventHandler ["mpkilled", {Null = _this execVM "\raven\scripts\init_staticRavenDamaged.sqf";}]; 