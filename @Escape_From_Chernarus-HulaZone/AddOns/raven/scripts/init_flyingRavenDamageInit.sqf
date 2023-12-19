
private ["_flyingRaven"];
_flyingRaven = _this select 0;
_flyingRaven allowDamage true;
_flyingRaven addMPEventHandler ["MPHit", {Null = _this execVM "\raven\scripts\init_staticRavenDamaged.sqf";}]; 