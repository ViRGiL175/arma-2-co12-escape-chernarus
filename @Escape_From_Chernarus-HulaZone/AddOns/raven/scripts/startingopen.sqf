//////////////////////////////////////////////////////////////////////////
//	Micro Air Vehicle Module STUFF					//
//	THIS SCRIPT SETS UP THE Micro Air Vehicle Module	//
//	CREATED BY: Jon Hillenbrand (FEINT)				//
//	VERSION 1.0							//
//////////////////////////////////////////////////////////////////////////

private ["_caller","_staticRaven","_groupLogic"];
_staticRaven = _this select 0;
_caller = _this select 1;
_groupLogic = createGroup West;

//--- Execute Functions
if (isnil "bis_fnc_init") then
{
        _groupLogic createunit ["FunctionsManager",position player,[],0,"none"];
};

_staticRaven attachTo [_caller, [-1,2,0],"head_axis"];
_caller setVariable ["nameOfAttachedStaticRaven",_staticRaven,true];

_caller setVariable ["staticRavenAttached",1,true];

null = _caller execVM "\raven\scripts\mavInit.sqf";

//========================INITIALIZE GLOBAL VARIABLES=====================

// INITIALIZES NVG GLOBAL VARIABLE TO FALSE
mavVisionMode = 0;

// INITIALIZES THE MAV CAMERA STATE TO OFF
mavCameraOn = 0;

// INITIALIZES CAMERA FOV -- The default zoom level is 0.7, 0.01 is the nearest and 2 the furthest zoom value
cameraFOVLevel = 1;

// INITIALIZES THE CURRENT TARGET AS NOTHING
mavCurrentTarget = 0;

// INITIALIZES STARTING HEIGHT AS 30
mavCurrentHeight = 30;

// INITIALIZES STARTING RADIUS MULTIPLIER AT 1.5
radiusMultiplier = 1.5;

// INITIALIZES ENGINE SOUND FOR MAV
mavSoundOn = 0;

// INITIALIZES THE SCANNER AS OFF - THIS CREATES MAP ICONS
mavScannerOn = 0;





