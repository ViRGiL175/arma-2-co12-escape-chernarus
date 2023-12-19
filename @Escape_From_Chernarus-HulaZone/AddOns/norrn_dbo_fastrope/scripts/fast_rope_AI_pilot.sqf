// fast_rope_AI_pilot.sqf
// © JANUARY 2012 - norrin
private ["_heli","_forceDismount","_timer","_script","_driver","_c","_pos"];

_heli 			= _this select 0;
_forceDismount	= _this select 1;
_timer			= _this select 2;
_script			= _this select 3;
_driver 		= driver _heli;
_c 				= 0;
_heli setVariable ["NORRN_fastRopeComplete", false, true];
_heli setVariable ["NORRN_forceDismount", _forceDismount, true];

if (isplayer _driver || !local _heli) exitWith {};

while {canMove _heli} do 
{	
	_pos = getPos _heli;
	if (speed _Heli < 2 && speed _Heli > -2 && _pos select 2 >= 10 && _pos select 2 <= 40 && _c == 0) then  	
	{	
		[_heli,_timer] execVM "\norrn_dbo_fastrope\scripts\deploy_fastropes_AI.sqf";
		_c = 1;
		while {!(_heli getVariable "NORRN_ropesDeployed")} do {sleep 1};
	};	
	if !(_heli getVariable "NORRN_ropesDeployed") exitWith {};
	sleep 1;
};
		
if (_script != "") then {sleep 2; [_heli] execVM _script};

