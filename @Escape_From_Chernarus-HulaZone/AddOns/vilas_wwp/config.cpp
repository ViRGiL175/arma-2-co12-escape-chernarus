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

#define NoSlot 0
#define PrimaryWeapon 1
#define HandGun 2
#define SecondaryWeapon 4
#define HandGunMagazines 16
#define MainMagazines 256
#define BinocularSlot 4096
#define HardMounted 65536

class CfgPatches {
	class VILAS_WWP   {
		units[] = {"vil_wwp"};
		requiredAddons[] = {"CAWeapons_E", "CAWeapons", "CAWeapons_E_fnfal"};
		requiredVersion = 1.54;
	
	};
};
	

};