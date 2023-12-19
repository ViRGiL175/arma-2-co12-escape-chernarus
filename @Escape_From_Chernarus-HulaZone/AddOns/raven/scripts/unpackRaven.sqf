private ["_ravenBackpack","_caller","_rq11_body","_rq11_tail","_rq11_paddle","_rq11_rotor","_rq11_wing_m","_rq11_wing_lr","_rq11_camera","_ravenStatic","_blanket","_rq11_rotor2","_rq11_paddle2","_rq11_camera2","_rq11_camera3","_backpackRavenBatteryLevel","_bodyRavenBatteryLevel"];
_ravenBackpack = _this select 0;
_caller = _this select 1;

_blanket = "carpet_empty" createVehicle position _ravenBackpack;
_blanket setPosASL [getPosASL _ravenBackpack select 0, getPosASL _ravenBackpack select 1, getPosASL _ravenBackpack select 2];


//====================CREATE ALL OF THE PARTS AND ATTACH THEM TO THE BLANKET

// CREATE RAVEN BODY AND ATTACH TO BLANKET
_rq11_body = "rq11_body" createVehicle position _blanket;
_rq11_body attachTo [_blanket, [-0.1,-0.1,0.1]];


// GET RAVEN BATTERY LEVEL FROM BACKPACK AND TRANSFER TO BODY
_backpackRavenBatteryLevel = _ravenBackpack getVariable "ravenBatteryLevel";
_rq11_body setVariable ["ravenBatteryLevel",_backpackRavenBatteryLevel,true];
sleep 0.2;


deleteVehicle _ravenBackpack;

// CREATE TAIL AND ATTACH
_rq11_tail = "rq11_tail" createVehicle position _blanket;
_rq11_tail attachTo [_blanket,[0,0.05,0.1]];

// CREATE PADDLE AND ATTACH
_rq11_paddle = "rq11_paddle" createVehicle position _blanket;
_rq11_paddle attachTo [_blanket,[0.4,-0.20,-0.01]];
_rq11_paddle setDir 45;

// CREATE PROP AND ATTACH
_rq11_rotor = "rq11_rotor" createVehicle position _blanket;
_rq11_rotor attachTo [_blanket,[0,0.20,0.1]];

//CREATE TOP MIDDLE WING AND ATTACH
_rq11_wing_m = "rq11_wing_m" createVehicle position _blanket;
_rq11_wing_m attachTo [_blanket,[-0.2,-0.25,0.02]];
_rq11_wing_m setDir 90;

// CREATE WING ENDS AND ATTACH
_rq11_wing_lr = "rq11_wing_lr" createVehicle position _blanket;
_rq11_wing_lr attachTo [_blanket,[0.00,0.15,0.05]];
_rq11_wing_lr setDir 90;

// CREATE CAMERA AND ATTACH
_rq11_camera = "rq11_camera" createVehicle position _blanket;
_rq11_camera attachTo [_blanket,[-0.5,-0.25,0.05]];


//==============EXTRA PARTS
// CREATE PROP AND ATTACH
_rq11_rotor2 = "rq11_rotor" createVehicle position _blanket;
_rq11_rotor2 attachTo [_blanket,[0,0.14,0.1]];
_rq11_rotor2 setDir 180;

// CREATE PADDLE AND ATTACH
_rq11_paddle2 = "rq11_paddle" createVehicle position _blanket;
_rq11_paddle2 attachTo [_blanket,[0.2,-0.20,-0.01]];
_rq11_paddle2 setDir 45;

// CREATE CAMERA AND ATTACH
_rq11_camera2 = "rq11_camera" createVehicle position _blanket;
_rq11_camera2 attachTo [_blanket,[-0.5,-0.05,0.05]];

// CREATE CAMERA AND ATTACH
_rq11_camera3 = "rq11_camera" createVehicle position _blanket;
_rq11_camera3 attachTo [_blanket,[-0.5,-0.15,0.05]];


//=====================ASSEMBLE THE RAVEN TOGETHER=====================

sleep 1.5;


// CREATE RAVEN BODY AND ATTACH TO BLANKET
_rq11_body attachTo [_blanket, [0,0,0.2]];
_rq11_body setDir getDir _blanket;
sleep 1.5;


// CREATE TAIL AND ATTACH
_rq11_tail attachTo [_rq11_body,[0.39,0,0.011]];
_rq11_body say ["addTime",1];
sleep 1.5;

// CREATE PADDLE AND ATTACH
_rq11_paddle attachTo [_rq11_body,[0.615,0,-0.07]];
_rq11_body say ["addTime",1];
sleep 1.5;

// CREATE PROP AND ATTACH
_rq11_rotor attachTo [_rq11_body,[0.01,0,0.080]];
_rq11_body say ["addTime",1];
sleep 1.5;

//CREATE TOP MIDDLE WING AND ATTACH
_rq11_wing_m attachTo [_rq11_body,[-0.020,0,0.1]];
_rq11_body say ["addTime",1];
sleep 1.5;

// CREATE WING ENDS AND ATTACH
_rq11_wing_lr attachTo [_rq11_body,[-0.020,0,0.132]];
_rq11_body say ["addTime",1];
sleep 1.5;

// CREATE CAMERA AND ATTACH
_rq11_camera attachTo [_rq11_body,[-0.262,0,-0.020]];
_rq11_body say ["addTime",1];
sleep 1.5;

deleteVehicle _rq11_tail;
deleteVehicle _rq11_paddle;
deleteVehicle _rq11_rotor;
deleteVehicle _rq11_wing_m;
deleteVehicle _rq11_wing_lr;
deleteVehicle _rq11_camera;
deleteVehicle _rq11_rotor2;
deleteVehicle _rq11_paddle2;
deleteVehicle _rq11_camera2;
deleteVehicle _rq11_camera3;

_ravenStatic = createVehicle ["MAV_RQ11RAVEN_STATIC",position _rq11_body, [],0,"NONE"];
_ravenStatic setPosASL [getPosASL _rq11_body select 0, getPosASL _rq11_body select 1, getPosASL _rq11_body select 2];
_ravenStatic setDir (getDir _rq11_body) - 90;

// GET RAVEN BATTERY LEVEL FROM BODY AND TRANSFER TO STATIC RAVEN
_bodyRavenBatteryLevel = _rq11_body getVariable "ravenBatteryLevel";
_ravenStatic setVariable ["ravenBatteryLevel",_bodyRavenBatteryLevel,true];



deleteVehicle _rq11_body;
deleteVehicle _blanket;

_caller sideChat "RQ-11 Raven assembled and ready to fly";

