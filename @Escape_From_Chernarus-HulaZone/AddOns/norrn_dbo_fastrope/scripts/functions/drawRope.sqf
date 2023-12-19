// drawRope.sqf
// © OCTOBER 2011 - norrin

private ["_unit","_heli","_driver","_crewHeli","_rope","_rope2","_rope3","_rope4","_crewCargo","_playCargo","_forceDis","_noCargo"];

_heli 	  			= _this select 0;
if (!local _heli) exitWith {};
_timer				= (_heli getVariable "NORRN_deployRopeTimer");
_driver 			= driver _heli;
_crewHeli 	  		= crew _heli;
_rope 				= objNull;
_crewCargo 			= [];
_playCargo  		= [];
_forceDis		    = (_heli getVariable "NORRN_forceDismount");
_heli setVariable ["NORRN_fr_abort", false, true];
_heli setVariable ["NORRN_ropesDeployed", true, true];

// Create rope
if (_heli isKindOf "BAF_Merlin_HC3_D") then
{ 	
	_heli animate ["dvere_p", 0];
	_heli animate ["dvere_p_pop", 0];
	if ((getpos _heli select 2) < 15) then {_rope  = "dbo_rope1_60_MH6_GA" createVehicle [0,0,0]};
	if ((getpos _heli select 2) >= 15 && (getpos _heli select 2) < 30) then {_rope  = "dbo_rope1_MH6_GA" createVehicle [0,0,0]};
	if ((getpos _heli select 2) >= 30) then {_rope  = "dbo_rope1_120_MH6_GA" createVehicle [0,0,0]};
};
sleep 1;
[_heli,_rope] call NORRN_FR_AR; // animate rope

// add abort fast rope action
if (player == _driver) then {NORRN_fast_rope_abort = _heli addAction ["Release rope", "\norrn_dbo_fastrope\scripts\abort_fastropes.sqf","", 10, true, true, ""]};
// identify _heli cargo
{if(count(assignedVehicleRole _x) != 2 && _x != _driver) then {_crewCargo = _crewCargo + [_x]}}forEach _crewHeli;
{if (isplayer _x) then {_playCargo = _playCargo + [_x]}} forEach _crewCargo;
//run pre-eject function on all units
for [{_loop = 0}, {_loop < (count _crewCargo)}, {_loop = _loop + 1}] do
{
	_unit = _crewCargo select _loop;
	if (!local _unit) then
	{
		Nor_FR_PV = [0,[_unit,_loop,_forceDis],NORRN_FR_PES];
		publicVariable "Nor_FR_PV";
	} else {
		[[_unit,_loop,_forceDis]] spawn NORRN_FR_PES;
	};
	sleep 0.005;
};
// Hold chopper in place while cargo is fast roping
if (_forceDis == 0 || (count _playCargo) < 1) then 
{
	_noCargo = count _crewCargo;
	while {_noCargo > 0} do
	{	
		_noCargo = 0;
		if (isplayer _driver || (_heli getVariable "NORRN_fr_abort")) exitWith {};
		{if (vehicle _x != _x) then {_noCargo = _noCargo + 1}} forEach _crewCargo;
		_heli setVectorUp [0.001, 0.001, 1];
		sleep 0.01;
	};
	_heli setVariable ["NORRN_fastRopeComplete", true, true]
};
while {!(_heli getVariable "NORRN_fastRopeComplete")} do
{	
	_heli setVectorUp [0.001, 0.001, 1];
	if (isplayer _driver && (_heli getVariable "NORRN_fr_abort")) exitWith {};
	sleep 0.01;
};
if (player == _driver) then 
{	
	while {!(_heli getVariable "NORRN_fr_abort")} do {sleep 1};
	_heli removeAction NORRN_fast_rope_abort;
};
// drop and delete fastropes
sleep 5;
[_rope,_heli] call NORRN_FR_DropR; 
sleep 1.5; 
_heli setVariable ["NORRN_ropesDeployed", false, true];