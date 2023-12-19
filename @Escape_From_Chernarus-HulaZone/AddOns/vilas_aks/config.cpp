#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define VSoft		0
#define VArmor		1
#define VAir		2

#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

class CfgPatches { 
	class VILAS_RW_Forces { 
		units[] = {"vil_rw"}; 
		requiredVersion = 1.54;
		requiredAddons[] = {"CAWeapons_E", "CAWeapons", "CAWeapons_E_AK"}; 
	
	};
};

};
