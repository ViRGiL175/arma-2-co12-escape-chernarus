// dust.sqf

private ["_particle", "_unit"];

_unit 		= _this select 0;
_particle 	= "\ca\data\Cl_basic.p3d";
_Offset 	= _unit distance (getPos _unit);

drop [_particle,"","Billboard",100,1,[(getPos _unit) select 0,(getPos _unit) select 1,_Offset],[0,0,0],10,25.5,20,0.14,[0.4,1.0],[[0.8,0.6,0.3,1],[0.8,0.6,0.4,1],[0.9,0.7,0.4,1],[0.8,0.7,0,0]],[0,1,0,1],0,0,"","",""];