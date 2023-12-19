
private ["_staticRaven","_rq11_body","_rq11_tail","_rq11_paddle","_rq11_rotor","_rq11_wing_m","_rq11_wing_lr","_rq11_camera"];
_staticRaven = _this select 0;


hint format ["RQ-11 DAMAGED BEYOND REPAIR",_staticRaven];

//===============CREATE MAIN PARTS
// CREATE RAVEN BODY AND ATTACH TO BLANKET
_rq11_body = "rq11_body" createVehicle position _staticRaven;
_rq11_body attachTo [_staticRaven, [0,0,0]];
// _rq11_body setDir 90;

detach _rq11_body;
_rq11_body setPosASL [getPosASL _staticRaven select 0, getPosASL _staticRaven select 1, getPosASL _staticRaven select 2];
_rq11_body setDir getDir _staticRaven - 270;
_rq11_body setVelocity (velocity _staticRaven);

deleteVehicle _staticRaven;

// CREATE TAIL AND ATTACH
_rq11_tail = "rq11_tail" createVehicle position _rq11_body;
_rq11_tail attachTo [_rq11_body,[0.39,0,0.011]];

// CREATE PADDLE AND ATTACH
_rq11_paddle = "rq11_paddle" createVehicle position _rq11_body;
_rq11_paddle attachTo [_rq11_body,[0.615,0,-0.07]];

// CREATE PROP AND ATTACH
_rq11_rotor = "rq11_rotor" createVehicle position _rq11_body;
_rq11_rotor attachTo [_rq11_body,[0.01,0,0.080]];

//CREATE TOP MIDDLE WING AND ATTACH
_rq11_wing_m = "rq11_wing_m" createVehicle position _rq11_body;
_rq11_wing_m attachTo [_rq11_body,[-0.020,0,0.1]];

// CREATE WING ENDS AND ATTACH
_rq11_wing_lr = "rq11_wing_lr" createVehicle position _rq11_body;
_rq11_wing_lr attachTo [_rq11_body,[-0.020,0,0.132]];

// CREATE CAMERA AND ATTACH
_rq11_camera = "rq11_camera" createVehicle position _rq11_body;
_rq11_camera attachTo [_rq11_body,[-0.262,0,-0.020]];



sleep 0.1;

detach _rq11_tail;
detach _rq11_paddle;
detach _rq11_rotor;
detach _rq11_wing_m;
detach _rq11_wing_lr;
detach _rq11_camera;


_rq11_tail setVelocity (velocity _rq11_body);
_rq11_paddle setVelocity (velocity _rq11_body);
_rq11_rotor setVelocity (velocity _rq11_body);
_rq11_wing_m setVelocity (velocity _rq11_body);
_rq11_wing_lr setVelocity (velocity _rq11_body);
_rq11_camera setVelocity (velocity _rq11_body);




