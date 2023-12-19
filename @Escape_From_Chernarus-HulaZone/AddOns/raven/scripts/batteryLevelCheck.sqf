

private ["_battlvl","_gen","_caller","_batteryLevelText"];
_gen = _this select 0;
_caller = _this select 1;

// GET BATTERY LEVEL
if (isNil{_gen getVariable "ravenBatteryLevel"}) then
{
        _gen setVariable ["ravenBatteryLevel",100,true];
};

_battlvl = _gen getVariable "ravenBatteryLevel";


_batteryLevelText = format ["BATTERY LEVEL = %1 PERCENT",_battlvl];
2020999 cutText [_batteryLevelText,"PLAIN DOWN",0];
_caller sideChat format ["BATTERY LEVEL = %1 PERCENT",_battlvl];