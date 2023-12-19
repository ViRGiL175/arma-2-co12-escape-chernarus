
private ["_backpack"];
_backpack = _this select 0;
_backpack removeAction unpackRavenAct;
unpackRavenAct = _backpack addAction ["Assemble RQ-11 Raven","\raven\scripts\unpackRaven.sqf",[],1,false,true,"","_this == player"];
player reveal _backpack;
