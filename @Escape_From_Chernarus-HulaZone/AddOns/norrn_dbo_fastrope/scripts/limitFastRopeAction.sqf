// limitFastRopeAction.sqf
// SEPTEMBER 2011 - norrin
/*
  Group leaders (player) should be able to deploy the rope for fastroping if they are in cargo space.
  Group leaders entering the aircraft will always override the pilots ability to deploy the rope.
  It does not matter how many units the group holds (Planned: Group leader of the strongest group will override previous rope controller)
  A groupleader in a gunner seat will NOT be able to deploy the rope. He has to be in cargo space.
  Same applies for group members that choose a gunner seat instead of a cargo seat.
  */
 private ["_heli","_unit","_c","_cc","_pilot","_onboardHeli","_cargo","_leaderCargo","_leadersArray","_rankingLeader","_crewHeli"];
  _heli 				= _this select 0;
_unit				= _this select 1;
_c 					= 0;
_cc					= 0;
_heli setVariable ["NORRN_ropesDeployed", false, true];
if (!(player in (crew _heli)) || player != _unit) exitWith {};
_heli setVariable ["NORRN_fastRopeComplete", false, true];
while {canMove _heli && player in (crew _heli)} do
{	
	_pilot 			= driver _heli;
	_onboardHeli 	= crew _heli;
	_cargo 			= [];
	_leaderCargo 	= false;
	_leadersArray 	= [];
	_rankingLeader 	= objNull;
	_crewHeli		= [];
	
	if (count _onboardHeli > 0) then
	{	
		// Determine what units are in the cargo postion of chopper
		{if (_x == driver _heli || count (assignedVehicleRole _x) > 1) then {_crewHeli = _crewHeli + [_x]}} forEach _onboardHeli;
		_cargo = _onboardHeli - _crewHeli; 
		
		// Determine whether there is a player leader in the cargo position if so add the players name to leaders array
		{if (_x == (leader _x) && _x in _cargo && isplayer _x) then {_leaderCargo = true; _leadersArray = _leadersArray + [_x]}} forEach _cargo;
		
		// If no player leader in cargo but pilot is player give the pilot fastrope action 
		if (player == _pilot && !_leaderCargo) then 
		{
			//Add action if heli in correct position
			if (speed _heli < 2 && speed _heli > -2 && (getPos _heli select 2) >= 8 && (getPos _heli select 2) <= 35 && _c == 0 && (count _cargo) > 0 && !(_heli getVariable "NORRN_ropesDeployed")) then 
			{
				NORRN_fast_rope_act = _heli addAction ["Deploy fast ropes", "\norrn_dbo_fastrope\scripts\deploy_fastropes_player.sqf", [_heli, 0], 10, true, true, ""];
				_c = 1;
				//hintSilent "Deploy ropes added";
			};
		};
		// Remove action if heli is not in correct position/speed or a player leader joins the cargo position
		if (_c == 1) then
		{	
			if (speed _heli >= 2 || speed _heli <= -2 || (getPos _heli select 2) < 8 || (getPos _heli select 2) > 35 || (count _cargo) == 0 || (_heli getVariable "NORRN_fastRopeComplete") || _leaderCargo) then 
			{
				if (player == _pilot) then {_heli removeAction NORRN_fast_rope_act};
				_heli setVariable ["NORRN_fr_abort", false, true];
				_heli setVariable ["NORRN_fastRopeComplete", false, true];
				_heli setVariable ["NORRN_ropesDeployed", false, true];
				_c = 0;
				//hintSilent "Deploy ropes removed";
			};
		};
		// Check to see which of the player leaders onboard is the ranking leader
		_rank = 0;
		if (count _leadersArray > 0) then 
		{	
			{if (rankId _x >= _rank) then {_rankingLeader = _x; _rank = rankId _x}} forEach _leadersArray; // type string expected no.
			
			if (player == _rankingLeader) then 
			{
				//Add action if heli in correct position
				if (speed _Heli < 2 && speed _Heli > -2 && (getPos _heli select 2) >= 8 && (getPos _heli select 2) <= 35 && _cc == 0) then 
				{
					NORRN_fast_rope_act = _heli addAction ["Deploy fast ropes", "\norrn_dbo_fastrope\scripts\deploy_fastropes_player.sqf", [_heli, 0], 10, true, true, ""];
					_cc = 1;
				};
			};
		};	
		//Remove action if heli is not in correct position or speed
		if (_cc == 1) then 
		{
			if (speed _heli >= 2 || speed _heli <= -2 || (getPos _heli select 2) < 8 || (getPos _heli select 2) > 35 || (_heli getVariable "NORRN_fastRopeComplete") || player != _rankingLeader) then 
			{	
				_heli removeAction NORRN_fast_rope_act;
				_heli setVariable ["NORRN_fr_abort", false, true];
				_heli setVariable ["NORRN_fastRopeComplete", false, true];
				_cc = 0;
			};
		};
	};	
	sleep 1;	
};