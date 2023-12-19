// MICRO AIR VEHICLES SCRIPT

private ["_caller","_microAirVehicle","_headPos","_headDir","_dir","_vel","_speed","_mavCurrentHeight","_randomNumber","_markerNameMAV","_markerNameMavTarget","_markerMAVTarget","_microAirVehicleStatic","_staticRaven","_ravenBatteryLevel","_staticRavenBatteryLevel","_callerLastKnownPos","_groupCaller"];
_caller = _this select 1;
_groupCaller = (group _caller);
_staticRaven = _caller getVariable "nameOfAttachedStaticRaven";

_caller addEventHandler ["killed", {null = player execVM "\raven\scripts\callerKilled.sqf"}];

if (isNil{_staticRaven getVariable "ravenBatteryLevel"}) then {_staticRaven setVariable ["ravenBatteryLevel",100,true]};
_staticRavenBatteryLevel = _staticRaven getVariable "ravenBatteryLevel";
_groupCaller setVariable ["ravenBatteryLevel",_staticRavenBatteryLevel,true];

if ((_staticRaven getVariable "ravenBatteryLevel") <= 0) then
{
        hint parseText "<t color='#FF0000' size='1.8' shadow='0' font='Zeppelin32'>-BATTERY ERROR-</t><br/>BATTERY LEVEL TOO LOW<br/>PLEASE RECHARGE";
}
else
{
        if (!isNil{_staticRaven getVariable 'batteryChargerIsRunning'}) then
        {
                hint parseText "<t color='#FF0000' size='1.8' shadow='0' font='Zeppelin32'>-BATTERY ERROR-</t><br/>RAVEN CHARGING<br/>PLEASE WAIT...";
        }
        else
        {
                
                // CREATE MAV
                _microAirVehicle = createVehicle ["MAV_RQ11RAVEN",(position _caller),[],0,"NONE"];
                _caller setVariable ["nameOfMAV",_microAirVehicle,true];
                // _microAirVehicle allowDamage true; --DOES NOT WORK
                // _microAirVehicle addEventHandler ["hit",hint "RQ-11 Hit"]; --DOES NOT WORK - WONT TAKE DAMAGE ENOUGH TO FIRE
                
                
                // DELETE STATIC RAVEN
                deleteVehicle _staticRaven;
                
                _caller setVariable ["staticRavenAttached",nil,true];
                _caller setVariable ["nameOfAttachedStaticRaven",nil,true];
                
                
                // CREATE MARKER NAME TO PASS TO MAV TRACKER
                _randomNumber = round (random 999999);
                _markerNameMAV = format ["%1_mavMarker",_randomNumber];
                null = [_microAirVehicle,_caller,_markerNameMAV] execVM "\raven\scripts\mav_markerTracker.sqf";
                
                
                
                // CREATE TARGET FOR MAV TO TRACK
                _randomNumber = round (random 999999);
                _markerNameMavTarget = format ["%1_mavMarkerTarget",_randomNumber];
                // _caller setVariable ["mavCurrentTarget",_markerNameMavTarget,true];
                mavCurrentTarget = _markerNameMavTarget;
                
                // _caller sideChat format ["name of markerNameMav is %1\nname of mavCurrentTarget is %2",_markerNameMav,_MarkerNameMavTarget];
                
                _markerMAVTarget = createMarker [_markerNameMavTarget, _caller];
                _markerMAVTarget setMarkerType 'selector_selectable';
                // _markerMAVTarget setMarkerText 'RQ-11 Target';
                _markerMAVTarget setMarkerColor "ColorBlack";
                
                _microAirVehicle camSetTarget getMarkerPos _markerNameMavTarget;
                _microAirVehicle camCommand "airborne";
                
                _microAirVehicle attachTo [_caller, [-1,2,0],"head_axis"];
                
                // [[player], "Alarm01"] call CBA_fnc_globalSay;
                // _microAirVehicle say ["prop_startup02",1];
                [[_microAirVehicle],"prop_startup02"] call CBA_fnc_globalSay;
                
                // FIGURE OUT HOW TO TEST FOR IF GETPOS RETURNS ANY - MABYE isNil or (isNull _caller) or locationNull
                _callerLastKnownPos = getPos _caller; 
                sleep 3;
                
                // TURNS ON ENGINE SOUND
                mavSoundOn = 1;
                null = _microAirVehicle execVM "\raven\scripts\mavSoundOn.sqf";
                
                // START/CONTINUE BURNING UP THE BATTERY LEVEL]
                null = [_microAirVehicle,_caller] execVM "\raven\scripts\mavBatteryCounter.sqf";
                
                detach _microAirVehicle;
                
                _headPos=screenToWorld [0.5,0.5];
                _headDir=[
                        (_headPos select 0)-(getPos _caller select 0),
                        (_headPos select 1)-(getPos _caller select 1),
                        (_headPos select 2)-(getPos _caller select 2)
                ];
                
                _dir = (_headDir select 0) atan2 (_headDir select 1);
                
                
                _microAirVehicle setDir _dir;
                
                _speed = 18;
                
                _vel = velocity _microAirVehicle;
                
                _microAirVehicle setVelocity
                [
                        (_vel select 0)+((sin _dir)*_speed),
                        (_vel select 1)+((cos _dir)*_speed),
                        2
                ];
                
                mavCurrentHeight = 30;        
                
                while {(alive _caller) and (alive _microAirVehicle)} do
                {
                        
                        
                        // NW
                        _mavCurrentHeight = mavCurrentHeight;
                        _microAirVehicle camSetTarget getMarkerPos mavCurrentTarget;
                        _microAirVehicle camSetRelPos [(39 * radiusMultiplier), (39 * radiusMultiplier), _mavCurrentHeight];
                        if ((!isNil{_caller getVariable "birdRecall"}) or (!alive _caller) or (_groupCaller getVariable "ravenBatteryLevel" <=0)) exitWith {};
                        sleep (3 * radiusMultiplier);
                        
                        // NORTH
                        _mavCurrentHeight = mavCurrentHeight;
                        _microAirVehicle camSetTarget getMarkerPos mavCurrentTarget;
                        _microAirVehicle camSetRelPos [0, (55 * radiusMultiplier), _mavCurrentHeight];
                        if ((!isNil{_caller getVariable "birdRecall"}) or (!alive _caller) or (_groupCaller getVariable "ravenBatteryLevel" <=0)) exitWith {};
                        sleep (3 * radiusMultiplier);
                        
                        // SW
                        _mavCurrentHeight = mavCurrentHeight;
                        _microAirVehicle camSetTarget getMarkerPos mavCurrentTarget;
                        _microAirVehicle camSetRelPos [(-39 * radiusMultiplier), (39 * radiusMultiplier), _mavCurrentHeight];
                        if ((!isNil{_caller getVariable "birdRecall"}) or (!alive _caller) or (_groupCaller getVariable "ravenBatteryLevel" <=0)) exitWith {};
                        sleep (3 * radiusMultiplier);
                        
                        // SOUTH
                        _mavCurrentHeight = mavCurrentHeight;
                        _microAirVehicle camSetTarget getMarkerPos mavCurrentTarget;
                        _microAirVehicle camSetRelPos [(-55 * radiusMultiplier), 0, _mavCurrentHeight];
                        if ((!isNil{_caller getVariable "birdRecall"}) or (!alive _caller) or (_groupCaller getVariable "ravenBatteryLevel" <=0)) exitWith {};
                        sleep (3 * radiusMultiplier);
                        
                        // SE
                        _mavCurrentHeight = mavCurrentHeight;
                        _microAirVehicle camSetTarget getMarkerPos mavCurrentTarget;
                        _microAirVehicle camSetRelPos [(-39 * radiusMultiplier), (-39 * radiusMultiplier), _mavCurrentHeight];
                        if ((!isNil{_caller getVariable "birdRecall"}) or (!alive _caller) or (_groupCaller getVariable "ravenBatteryLevel" <=0)) exitWith {};
                        sleep (3 * radiusMultiplier);
                        
                        // EAST
                        _mavCurrentHeight = mavCurrentHeight;
                        _microAirVehicle camSetTarget getMarkerPos mavCurrentTarget;
                        _microAirVehicle camSetRelPos [0, (-55 * radiusMultiplier), _mavCurrentHeight];
                        if ((!isNil{_caller getVariable "birdRecall"}) or (!alive _caller) or (_groupCaller getVariable "ravenBatteryLevel" <=0)) exitWith {};
                        sleep (3 * radiusMultiplier);
                        
                        // NE
                        _mavCurrentHeight = mavCurrentHeight;
                        _microAirVehicle camSetTarget getMarkerPos mavCurrentTarget;
                        _microAirVehicle camSetRelPos [(39 * radiusMultiplier), (-39 * radiusMultiplier), _mavCurrentHeight];
                        if ((!isNil{_caller getVariable "birdRecall"}) or (!alive _caller) or (_groupCaller getVariable "ravenBatteryLevel" <=0)) exitWith {};
                        sleep (3 * radiusMultiplier);
                        
                        // NORTH
                        _mavCurrentHeight = mavCurrentHeight;
                        _microAirVehicle camSetTarget getMarkerPos mavCurrentTarget;
                        _microAirVehicle camSetRelPos [(55 * radiusMultiplier), 0, _mavCurrentHeight];
                        if ((!isNil{_caller getVariable "birdRecall"}) or (!alive _caller) or (_groupCaller getVariable "ravenBatteryLevel" <=0)) exitWith {};
                        sleep (3 * radiusMultiplier);
                        
                        
                };
                
                
                
                if (!alive _caller) then
                {
                        _microAirVehicle camSetTarget _callerLastKnownPos;
                        _microAirVehicle camSetRelPos [0, 5, 2];
                        waitUntil {sleep 0.01; (_callerLastKnownPos distance _microAirVehicle) < 13};
                } else
                {
                        _callerLastKnownPos = getPos _caller;
                        _microAirVehicle camSetTarget _callerLastKnownPos;
                        _microAirVehicle camSetRelPos [0, 5, 2];
                        waitUntil {sleep 0.01; (_callerLastKnownPos distance _microAirVehicle) < 13};
                };
                
                
                
                // TURNS OFF ENGINE SOUND
                mavSoundOn = 0;
                
                // [[player], "Alarm01"] call CBA_fnc_globalSay;
                [[_microAirVehicle],"antiTamper"] call CBA_fnc_globalSay;
                
                sleep 0.8;
                
                /*
                waitUntil
                {
                        sleep 0.1;
                        _mavGetPosATL = getPosATL _microAirVehicle select 2;
                        // hintSilent format ["MAV POSITION ATL: %1",_mavGetPosATL];
                        (_mavGetPosATL) <= 0.1;
                };
                */
                
                _microAirVehicleStatic = createVehicle ["MAV_RQ11RAVEN_STATIC",position _microAirVehicle,[],0,"NONE"];
                _microAirVehicleStatic setPosASL [getPosASL _microAirVehicle select 0, getPosASL _microAirVehicle select 1, getPosASL _microAirVehicle select 2];
                _microAirVehicleStatic setDir getDir _microAirVehicle;
                _microAirVehicleStatic setVelocity (velocity _microAirVehicle);
                
                // DELETE FLYING RAVEN
                deleteVehicle _microAirVehicle;
                
                
                // ASSIGN BATTERY LEVEL TO STATIC RAVEN
                _ravenBatteryLevel = _groupCaller getVariable "ravenBatteryLevel";
                _microAirVehicleStatic setVariable ["ravenBatteryLevel",_ravenBatteryLevel,true];
                _groupCaller setVariable ["ravenBatteryLevel",nil,true];
                
                
                _caller sideChat format ["RQ-11 LANDED AT GRID %1",(position _microAirVehicleStatic) call BIS_fnc_PosToGrid];
                
                // [[player], "Alarm01"] call CBA_fnc_globalSay;
                [[_caller],"watchBeep_off"] call CBA_fnc_globalSay;
                
                
                _caller removeAction mavBaseStationActionName_00;
                _caller removeAction mavBaseStationActionName_001;
                _caller removeAction mavBaseStationActionName_01;
                _caller removeAction mavBaseStationActionName_02;
                _caller removeAction mavBaseStationActionName_03;
                _caller removeAction mavBaseStationActionName_04;
                
                // TURNS ON STROBE AFTER LANDING
                null = [_microAirVehicleStatic,_microAirVehicleStatic,_microAirVehicleStatic,1] execVM "\raven\scripts\strobeOnOff.sqf";
                
                _caller setVariable ["nameOfMAV",nil,true];
                _caller setVariable ["birdRecall",nil,true];
                _caller setVariable ["mavCurrentHeight",nil,true];
                _caller setVariable ["mavCurrentTarget",nil,true];
                
                deleteMarker mavCurrentTarget;
                
        };
};


