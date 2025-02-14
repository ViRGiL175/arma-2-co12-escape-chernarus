if (!isServer) exitWith {};

private ["_spawnPos", "_searchAreaMarker", "_enemyFrequency", "_minSkill", "_maxSkill", "_debug"];
private ["_group","_vehicle","_insurgentSoldier","_insurgentSoldiers", "_index", "_vehicleClass", "_vehicleMaxCargo", "_result", "_crew", "_soldiersCount", "_infantryTypes", "_infantryType"];

_spawnPos = _this select 0;
_searchAreaMarker = _this select 1;
_enemyFrequency = _this select 2;
if (count _this > 3) then {_minSkill = _this select 3;} else {_minSkill = 0.3;};
if (count _this > 4) then {_maxSkill = _this select 4;} else {_maxSkill = 0.6;};
if (count _this > 5) then {_debug = _this select 5;} else {_debug = false;};

// Vehicle classes have following cargo capacity [7, 5, 7, 10]
_index = floor random count drn_arr_Escape_MotorizedSearchGroup_vehicleClasses;
_vehicleClass = drn_arr_Escape_MotorizedSearchGroup_vehicleClasses select _index;

_vehicleMaxCargo = drn_arr_Escape_MotorizedSearchGroup_vehicleClassesMaxCargo select _index;

_result = [_spawnPos, 0, _vehicleClass, east] call BIS_fnc_spawnVehicle;
_vehicle = _result select 0;
_crew = _result select 1;
_group = _result select 2;

{
    _x setRank "PRIVATE";
} foreach _crew;

if (_debug) then {
    ["Spawned motorized search group of class type '" + _vehicleClass + "'."] call drn_fnc_CL_ShowDebugTextAllClients;
};

// Create cargo

_insurgentSoldiers = [];
_soldiersCount = _vehicleMaxCargo;
if (_enemyFrequency == 1) then {
    _soldiersCount = 2 + floor random (_vehicleMaxCargo - 3);
};
if (_enemyFrequency == 2) then {
    _soldiersCount = 4 + floor random (_vehicleMaxCargo - 3);
};

_infantryTypes = drn_arr_Escape_SpetzInfantryTypes;
for "_i" from 1 to _soldiersCount do {
    _infantryType = _infantryTypes select floor random count _infantryTypes;
    _insurgentSoldier = _group createUnit [_infantryType, [0,0,30], [], 0, "FORM"];
    _insurgentSoldier setSkill (_minSkill + random (_maxSkill - _minSkill));
    _insurgentSoldier setRank "LIEUTNANT";
    _insurgentSoldier moveInCargo _vehicle;
    _insurgentSoldier assignAsCargo _vehicle;
    _insurgentSoldiers set [count _insurgentSoldiers, _insurgentSoldier];
};

_group selectLeader (_insurgentSoldiers select 0);

{
    _x call drn_fnc_Escape_OnSpawnGeneralSoldierUnit;
    _x setSkill (_minSkill + random (_maxSkill - _minSkill));
} foreach units _group;

[_vehicle, _searchAreaMarker, _debug] execVM "Scripts\DRN\MotorizedSearchGroup\MotorizedSearchGroup.sqf";

