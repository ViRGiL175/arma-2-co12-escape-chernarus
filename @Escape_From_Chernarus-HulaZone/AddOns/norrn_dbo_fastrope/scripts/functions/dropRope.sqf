// dropRope.sqf
// © OCTOBER 2011 - norrin
private ["_rope","_heli","_ropeG","_dir","_ropeDropVel","_ropeDropT","_posH","_posR","_distG"];

_rope 		 = _this select 0;
_heli 		 = _this select 1;
_ropeG  	 = "dbo_rope_ground_GA" createVehicle [0,0,1000];
_dir 		 = getDir _heli;
_ropeDropVel = -10;
_ropeDropT	 = 0;
sleep 1;
detach _rope;
_rope setVelocity [0,0,_ropeDropVel];
_rope animate ["dborope3z",0];
_rope animate ["dborope4z",-0.2];
_rope animate ["dborope5z",0];
_rope animate ["dborope6z",0.2];
_rope animate ["dborope7z",0];
_rope animate ["dborope8z",-0.2];
_rope animate ["dborope9z",0];
_rope animate ["dborope10z",0.2];
_rope animate ["dborope11z",0];
_rope animate ["dborope12z",-0.2];
_rope animate ["dborope13z",0];
_rope animate ["dborope14z",0.2];
_rope animate ["dborope15z",0];
_rope animate ["dborope16z",-0.2];
_rope animate ["dborope17z",-1];
_rope animate ["dborope18z",-1.5];
_rope animate ["dborope19z",-2];
_posH = getPos _heli;
_posR = getPos _rope;
_distG = (_heli distance [_posH select 0, _posH select 1, 0]) - (_posH select 2);
//hintSilent format ["%1",_distG];
sleep 0.6;
if (_distG < 4) then {_distG = 0} else {_distG = _distG - 2.1};
_ropeG setPos [(_posR select 0) + (sin _dir),(_posR select 1) + (cos _dir),_distG]; // offset position of droped ropes slightly 11/10/11
_ropeG setDir (_dir + 180); // fixed dropped  rope direction 11/10/11
	
while {_ropeDropT < 4} do
{
	_rope  setVelocity [0,0,_ropeDropVel];
	sleep 0.8;
	_ropeDropVel = _ropeDropVel - 10;
	_ropeDropT = _ropeDropT + 1;
};

if (_heli isKindOf "Mi24_Base") then {_heli animate ["dvere_l_vrch",0];_heli animate ["dvere_l_spod",0]};
deleteVehicle _rope;
sleep 2;
if !(_heli getVariable "NORRN_fastRopeComplete") then {_heli setVariable ["NORRN_fastRopeComplete", true, true]};