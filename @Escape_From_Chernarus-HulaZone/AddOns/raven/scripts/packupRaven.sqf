
private ["_ravenBackpack","_staticRaven","_blanket","_rq11_body","_rq11_tail","_rq11_paddle","_rq11_rotor","_rq11_wing_m","_rq11_wing_lr","_rq11_camera","_rq11_rotor2","_rq11_paddle2","_rq11_camera2","_rq11_camera3","_staticRavenBatteryLevel","_bodyRavenBatteryLevel"];
_staticRaven = _this select 0;

// CREATE EMPTY BLANKET
_blanket = "carpet_empty" createVehicle position _staticRaven;
_blanket setPosASL [getPosASL _staticRaven select 0, getPosASL _staticRaven select 1, getPosASL _staticRaven select 2];
_blanket setDir (getDir _staticRaven) - 90;

//==============CREATE EXTRA PARTS
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

//===============CREATE MAIN PARTS
// CREATE RAVEN BODY AND ATTACH TO BLANKET
_rq11_body = "rq11_body" createVehicle position _staticRaven;
_rq11_body attachTo [_blanket, [0,0,0.2]];
// _rq11_body setDir (getDir _staticRaven) - 90;

// GET STATIC RAVEN BATTERY LEVEL AND TRANSFER TO BODY
_staticRavenBatteryLevel = _staticRaven getVariable "ravenBatteryLevel";
_rq11_body setVariable ["ravenBatteryLevel",_staticRavenBatteryLevel,true];
sleep 0.2;

deleteVehicle _staticRaven;

// CREATE TAIL AND ATTACH
_rq11_tail = "rq11_tail" createVehicle position _blanket;
_rq11_tail attachTo [_rq11_body,[0.39,0,0.011]];

// CREATE PADDLE AND ATTACH
_rq11_paddle = "rq11_paddle" createVehicle position _blanket;
_rq11_paddle attachTo [_rq11_body,[0.615,0,-0.07]];

// CREATE PROP AND ATTACH
_rq11_rotor = "rq11_rotor" createVehicle position _blanket;
_rq11_rotor attachTo [_rq11_body,[0.01,0,0.080]];

//CREATE TOP MIDDLE WING AND ATTACH
_rq11_wing_m = "rq11_wing_m" createVehicle position _blanket;
_rq11_wing_m attachTo [_rq11_body,[-0.020,0,0.1]];

// CREATE WING ENDS AND ATTACH
_rq11_wing_lr = "rq11_wing_lr" createVehicle position _blanket;
_rq11_wing_lr attachTo [_rq11_body,[-0.020,0,0.132]];

// CREATE CAMERA AND ATTACH
_rq11_camera = "rq11_camera" createVehicle position _blanket;
_rq11_camera attachTo [_rq11_body,[-0.262,0,-0.020]];

sleep 1.5;
//===============DISASSEMBLE RAVEN

_rq11_body say ["addTime",1];
_rq11_camera attachTo [_blanket,[-0.5,-0.25,0.05]];
sleep 1.5;

_rq11_body say ["addTime",1];
_rq11_wing_lr attachTo [_blanket,[0.00,0.15,0.05]];
_rq11_wing_lr setDir 90;
sleep 1.5;

_rq11_body say ["addTime",1];
_rq11_wing_m attachTo [_blanket,[-0.2,-0.25,0.02]];
_rq11_wing_m setDir 90;
sleep 1.5;

_rq11_body say ["addTime",1];
_rq11_rotor attachTo [_blanket,[0,0.20,0.1]];
sleep 1.5;

_rq11_body say ["addTime",1];
_rq11_paddle attachTo [_blanket,[0.4,-0.20,-0.01]];
_rq11_paddle setDir 45;
sleep 1.5;

_rq11_body say ["addTime",1];
_rq11_tail attachTo [_blanket,[0,0.05,0.1]];
sleep 1.5;

_blanket say ["addTime",1];
_rq11_body attachTo [_blanket, [-0.1,-0.1,0.1]];
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



_ravenBackpack = createVehicle ["MAV_RAVEN_BACKPACK",position _blanket, [],0,"NONE"];
_ravenBackpack setPosASL [getPosASL _blanket select 0, getPosASL _blanket select 1, getPosASL _blanket select 2];


deleteVehicle _blanket;

// GET RAVEN BATTERY LEVEL FROM BODY AND TRANSFER TO BACKPACK
_bodyRavenBatteryLevel = _rq11_body getVariable "ravenBatteryLevel";
_ravenBackpack setVariable ["ravenBatteryLevel",_bodyRavenBatteryLevel,true];
sleep 0.2;

deleteVehicle _rq11_body;





