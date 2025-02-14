if (!isServer) exitWith {};

private ["_referenceGroup", "_locationMarkerName", "_side", "_infantryClasses", "_minSkill", "_maxSkill", "_spawnRadius", "_debug"];
private ["_locationNo", "_locationFullName", "_locationExists", "_isFaction", "_location", "_soldierType", "_soldierCount", "_soldier", "_soldiers", "_i"];
private ["_locationPos", "_minSoldierCount", "_maxSoldierCount", "_maxGroupsCount", "_possibleInfantryTypes", "_instanceNo"];

_referenceGroup = _this select 0;
_locationMarkerName = _this select 1;
_side = _this select 2;
if (count _this > 3) then {_infantryClasses = _this select 3;} else {_infantryClasses = [];};
if (count _this > 4) then {_maxGroupsCount = _this select 4;} else {_maxGroupsCount = 10;};
if (count _this > 5) then {_minSoldierCount = _this select 5;} else {_minSoldierCount = 5;};
if (count _this > 6) then {_maxSoldierCount = _this select 6;} else {_maxSoldierCount = 10;};
if (count _this > 7) then {_minSkill = _this select 7;} else {_minSkill = 0.3;};
if (count _this > 8) then {_maxSkill = _this select 8;} else {_maxSkill = 0.6;};
if (count _this > 9) then {_spawnRadius = _this select 9;} else {_spawnRadius = 750;};
if (count _this > 10) then {_debug = _this select 10;} else {_debug = false;};

if (isNil "drn_var_commonLibInitialized") then {
    [] spawn {
        while {true} do { player sideChat "Script AmbientInfantry.sqf needs CommonLib version 1.02"; sleep 5; };
    };
};

_isFaction = false;
if (str _infantryClasses == """USMC""") then {
    _possibleInfantryTypes = ["USMC_Soldier_AA", "USMC_Soldier_HAT", "USMC_Soldier_AT", "USMC_Soldier_AR", "USMC_Soldier_Medic", "USMC_SoldierM_Marksman", "USMC_SoldierS_Engineer", "USMC_Soldier_TL", "USMC_Soldier_GL", "USMC_Soldier_MG", "USMC_Soldier_Officer", "USMC_Soldier", "USMC_Soldier2", "USMC_Soldier_LAT", "USMC_SoldierS_Sniper", "USMC_SoldierS_SniperH"];    
    _isFaction = true;
};
if (str _infantryClasses == """CDF""") then {
    _possibleInfantryTypes = ["CDF_Soldier_Strela", "CDF_Soldier_RPG", "CDF_Soldier_AR", "CDF_Soldier_GL", "CDF_Soldier_MG", "CDF_Soldier_Marksman", "CDF_Soldier_Medic", "CDF_Soldier_Militia", "CDF_Soldier_Officer", "CDF_Soldier", "CDF_Soldier_Sniper"];
    _isFaction = true;
};
if (str _infantryClasses == """RU""") then {
    _possibleInfantryTypes = ["RU_Soldier_AA", "RU_Soldier_HAT", "RU_Soldier_AR", "RU_Soldier_GL", "RU_Soldier_MG", "RU_Soldier_Marksman", "RU_Soldier_Medic", "RU_Soldier", "RU_Soldier_LAT", "RU_Soldier_AT", "RU_Soldier2", "RU_Soldier_Sniper", "RU_Soldier_SniperH"];
    _isFaction = true;
};
if (str _infantryClasses == """INS""") then {
    _possibleInfantryTypes = ["RU_Soldier_Officer", "RU_Soldier", "RU_Soldier2", "RU_Soldier_GL", "RU_Soldier_MG", "RU_Soldier_Marksman", "RU_Soldier_Medic"];
    _isFaction = true;
};
if (str _infantryClasses == """GUE""") then {
    _possibleInfantryTypes = ["RU_Soldier_Officer", "RU_Soldier", "RU_Soldier2", "RU_Soldier_GL", "RU_Soldier_MG", "RU_Soldier_Marksman", "RU_Soldier_Medic"];
    _isFaction = true;
};

if (!_isFaction) then {
    _possibleInfantryTypes =+ _infantryClasses;
};

// Initialize global variable
sleep random 0.1;
if (isNil "drn_var_guardedLocationsInstanceNo") then {
    drn_var_guardedLocationsInstanceNo = 0;
}
else {
    drn_var_guardedLocationsInstanceNo = drn_var_guardedLocationsInstanceNo + 1;
};

_instanceNo = drn_var_guardedLocationsInstanceNo;
call compile format ["drn_var_guardedLocations%1 = [];", _instanceNo];

_locationNo = 0;
_locationFullName = _locationMarkerName + str _locationNo;

if (((getMarkerPos _locationFullName) select 0) != 0 || ((getMarkerPos _locationFullName) select 1 != 0)) then {
	_locationExists = true;
}
else {
	_locationExists = false;
};

while {_locationExists} do {
	_locationPos = getMarkerPos _locationFullName;

	_soldierCount = _minSoldierCount + floor (random (_maxSoldierCount - _minSoldierCount + 1));
    
	_soldiers = [];
	for [{_i = 0}, {_i < _soldierCount}, {_i = _i + 1}] do {
		_soldierType = _possibleInfantryTypes select (floor (random (count _possibleInfantryTypes)));

		// soldier: [type, skill, spawned, damage, obj, scriptHandle, hasScript]
		_soldier = [_soldierType, (_minSkill + random (_maxSkill - _minSkill)), false, 0, objNull, objNull, false];
		_soldiers set [count _soldiers, _soldier];
	};

	_location = [_locationFullName, "", _soldiers, _locationPos];

    _location call compile format ["drn_var_guardedLocations%1 set [count drn_var_guardedLocations%2, _this];", _instanceNo, _instanceNo];
    //	drn_var_guardedLocations set [count drn_var_guardedLocations, _location];

    // Set ammo depot trigger
    private ["_marker", "_count", "_populated", "_trigger"];
    
    _trigger = createTrigger["EmptyDetector", getMarkerPos _locationFullName];
    _trigger triggerAttachVehicle [vehicle (units _referenceGroup select 0)];
    _trigger setTriggerArea[_spawnRadius, _spawnRadius, 0, false];
    _trigger setTriggerActivation["MEMBER", "PRESENT", true];
    _trigger setTriggerTimeout [1, 1, 1, true];
    _trigger setTriggerStatements["this", "_nil = [drn_var_guardedLocations" + str _instanceNo + " select " + str _locationNo + ", " + str _side + ", " + str _maxGroupsCount + ", " + str _debug + "] execVM ""Scripts\DRN\DynamicGuardedLocations\PopulateLocation.sqf"";", "_nil = [drn_var_guardedLocations" + str _instanceNo + " select " + str _locationNo + ", " + str _debug + "] execVM ""Scripts\DRN\DynamicGuardedLocations\DepopulateLocation.sqf"";"];
    
	// Get next guarded position
	_locationNo = _locationNo + 1;
	_locationFullName = _locationMarkerName + str _locationNo;

	if (((getMarkerPos _locationFullName) select 0) != 0 || ((getMarkerPos _locationFullName) select 1 != 0)) then {
		_locationExists = true;
	}
	else {
		_locationExists = false;
	};
};

