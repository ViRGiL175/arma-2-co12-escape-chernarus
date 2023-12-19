// eject_unit_SR.sqf
// © JANUARY 2012 - norrin
 private ["_unit","_cargoPosP","_forceDis","_heli","_crewHeli","_ropes","_rope","_finalUnit","_crewCargo","_AICargo","_playCargo","_noCargo","_actZ","_distance","_offset","_c","_d","_message","_animPos","_cargoPos"];

_unit 		= _this select 0;
_cargoPosP	= _this select 1;
_forceDis	= _this select 2;
if (!local _unit) exitWith {};
_heli		= vehicle _unit;
_crewHeli	= crew _heli;
_ropes		= nearestObjects [_heli, ["dbo_rope_GA"],7.5];
_rope 		= objNull;
_finalUnit	= objNull;
_crewCargo  = [];
_AICargo	= [];
_playCargo  = [];
_noCargo	= 0;
_offset 	= 0;
_c 	 		= 0;
_d			= 0;
_cargoPos	= 0;
_actZ		= 1;
_message	= "";
_animPos 	= "";
_distance   = (_heli getVariable "NORRN_FR_unitDist"); // get variable for the distance a unit will move away after disembarking fast rope for AI insertions 10/10/11 

{if(_x != driver _heli) then {_crewCargo = _crewCargo + [_x]}}forEach _crewHeli;
sleep 2; // sleep required so that all units get same cargo array 10/10/11
{if (!isplayer _x && _forceDis == 1) then {_AICargo = _AICargo + [_x]} else {_playCargo = _playCargo + [_x]}} forEach _crewCargo;

if (_forceDis == 1) then
{ 	
	if (isplayer _unit) then 
	{
		while {!Nor_FR_AIcomplete} do {sleep 1};
		_noCargo = count _AICargo;
		while {_noCargo > 0} do
		{	
			_noCargo = 0;
			{if (vehicle _x != _x) then {_noCargo = _noCargo + 1}} forEach _AICargo;
			sleep 1;
		};
		sleep 0.1;
		// disembark players who have agreed to fast ropes
		_crewCargo = [];
		{if (_x getVariable "NORRN_FR_pD") then {_crewCargo = _crewCargo + [_x]}} forEach _playCargo;
		_c = 0;
		{if (_x == _unit) then {_cargoPosP = _c}; _c = _c + 1} forEach _crewCargo;
	} else {
		_crewCargo = _AICargo;
		_c = 0;
		{if (_x == _unit) then {_cargoPosP = _c}; _c = _c + 1} forEach _crewCargo;
	};
};
if (isplayer _unit && count _crewCargo == 0) exitWith {_heli setVariable ["NORRN_fastRopeComplete", true, true]};
_rope = _ropes select 0;

if (_heli getVariable "NORRN_fr_abort") exitWith {};
switch (_cargoPosP) do
{
		case 0 : {_cargoPos = 0; _animPos = "ropePos_01"};
		case 1 : {_cargoPos = 1; _animPos = "ropePos_02"; while {vehicle (_crewCargo select 0) == _heli} do {sleep 1}; while {(_rope AnimationPhase "ropePos_01") < 0.25} do {sleep 0.1}};  
		case 2 : {_cargoPos = 2; _animPos = "ropePos_03"; while {vehicle (_crewCargo select 1) == _heli} do {sleep 1}; while {(_rope AnimationPhase "ropePos_02") < 0.25} do {sleep 0.1}};
		case 3 : {_cargoPos = 0; _animPos = "ropePos_01"; while {vehicle (_crewCargo select 2) == _heli} do {sleep 1}; sleep 2; while {(_rope AnimationPhase "ropePos_01") > 0.1} do {sleep 0.1}};
		case 4 : {_cargoPos = 1; _animPos = "ropePos_02"; while {vehicle (_crewCargo select 3) == _heli} do {sleep 1}; sleep 2; while {(_rope AnimationPhase "ropePos_02") > 0.1} do {sleep 0.1}};
		case 5 : {_cargoPos = 2; _animPos = "ropePos_03"; while {vehicle (_crewCargo select 4) == _heli} do {sleep 1}; sleep 2; while {(_rope AnimationPhase "ropePos_03") > 0.1} do {sleep 0.1}};
		case 6 : {_cargoPos = 0; _animPos = "ropePos_01"; while {vehicle (_crewCargo select 5) == _heli} do {sleep 1}; sleep 2; while {(_rope AnimationPhase "ropePos_01") > 0.1} do {sleep 0.1}};
		case 7 : {_cargoPos = 1; _animPos = "ropePos_02"; while {vehicle (_crewCargo select 6) == _heli} do {sleep 1}; sleep 2; while {(_rope AnimationPhase "ropePos_02") > 0.1} do {sleep 0.1}};
		case 8 : {_cargoPos = 2; _animPos = "ropePos_03"; while {vehicle (_crewCargo select 7) == _heli} do {sleep 1}; sleep 2; while {(_rope AnimationPhase "ropePos_03") > 0.1} do {sleep 0.1}};		
		case 9 : {_cargoPos = 0; _animPos = "ropePos_01"; while {vehicle (_crewCargo select 8) == _heli} do {sleep 1}; sleep 2; while {(_rope AnimationPhase "ropePos_01") > 0.1} do {sleep 0.1}};
		case 10 : {_cargoPos = 1; _animPos = "ropePos_02"; while {vehicle (_crewCargo select 9) == _heli} do {sleep 1}; sleep 2; while {(_rope AnimationPhase "ropePos_02") > 0.1} do {sleep 0.1}};
		case 11 : {_cargoPos = 2; _animPos = "ropePos_03"; while {vehicle (_crewCargo select 10) == _heli} do {sleep 1}; sleep 2; while {(_rope AnimationPhase "ropePos_03") > 0.1} do {sleep 0.1}};		
		case 12 : {_cargoPos = 0; _animPos = "ropePos_01"; while {vehicle (_crewCargo select 11) == _heli} do {sleep 1}; sleep 2; while {(_rope AnimationPhase "ropePos_01") > 0.1} do {sleep 0.1}};
		case 13 : {_cargoPos = 1; _animPos = "ropePos_02"; while {vehicle (_crewCargo select 12) == _heli} do {sleep 1}; sleep 2; while {(_rope AnimationPhase "ropePos_02") > 0.1} do {sleep 0.1}};
		case 14 : {_cargoPos = 2; _animPos = "ropePos_03"; while {vehicle (_crewCargo select 13) == _heli} do {sleep 1}; sleep 2; while {(_rope AnimationPhase "ropePos_03") > 0.1} do {sleep 0.1}};		
};
if (_heli getVariable "NORRN_fr_abort") exitWith {};
_unit setUnitPos "Up";
_unit action ["GetOut", _heli];
while {vehicle _unit == _heli} do {sleep 0.01};
if (isplayer _unit) then {sleep 0.5} else {sleep 0.2};
_unit moveInCargo [_rope, _cargoPos];
if (typeOf _rope in ["dbo_rope1_GA", "dbo_rope_GA","dbo_rope_MH6_GA","dbo_rope1_MH6_GA"]) then {_c = 0.006}; 
if (typeOf _rope in ["dbo_rope_601_GA","dbo_rope_60_GA","dbo_rope_60_MH6_GA","dbo_rope_601_MH6_GA"]) then {_c = 0.0075};
if (typeOf _rope in ["dbo_rope_1201_GA","dbo_rope_120_GA","dbo_rope_120_MH6_GA","dbo_rope_1201_MH6_GA"]) then {_c = 0.0045};
_d = _c;
while {vehicle _unit != _rope} do {sleep 0.01};
_rope say3D ["NORRN_FR_slide", 10, 1];
_actZ = [_heli] call NORRN_FR_actZ;
while {_d < _actZ} do
{
	_rope animate [_animPos, _d];
	_d = (_d + _c + random _c);
	sleep 0.02 + random 0.2;
};
_unit setUnitPos "Up";
_unit action ["GetOut", vehicle _unit];
sleep 0.1;
[_unit] allowGetIn false;
// Create dust cloud at units feet
if (local unit) then {[_unit] spawn NORRN_FR_Dust};
Nor_FR_PV = [0,_unit,NORRN_FR_Dust];
publicVariable "Nor_FR_PV";
while {vehicle _unit != _unit} do {sleep 0.2};
_rope animate [_animPos, 0];
_ang = ceil(random 360);
_pos_unit = getPos _unit;
if (!isplayer _unit) then {(group _unit) setFormation "DIAMOND";(group _unit) setBehaviour "COMBAT"};

_finalUnit =  _crewCargo select (count _crewCargo - 1);  
if (count _playCargo > 0) then {
	if (!isplayer _unit) exitWith {};
	if (count _crewCargo > 0) then
	{	
		while {vehicle _finalUnit == _heli} do {sleep 1};
		sleep 2;
		while {vehicle _finalUnit == _rope} do {sleep 1};
		sleep 5;
		_heli setVariable ["NORRN_fastRopeComplete", true, true];
	};
};
	

