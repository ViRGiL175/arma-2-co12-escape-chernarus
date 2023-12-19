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
class VILAS_WWP_CO   {
units[] = {"vil_wwp"};
requiredAddons[] = {"CAWeapons_E", "CAWeapons", "CAWeapons_E_fnfal", "CAWeapons_E_MAAWS", "CAWeapons_E_M14"};
requiredVersion = 1.54;
author[] = {$STR_AUTHOR_VILAS};
fileName = "vilas_wwp_cfg.pbo";
};
};

class CfgMods {
class VILAS_WWP_CO {
//dir = "@Vilas";
name = $STR_VILAS_WESTERN_PACK;
//picture = "\ico\vil_logo.paa";
hidePicture = "true";
hideName = "true";
action = "http://www.createforum.com/vilas/";
};
};

class CfgAddons {
class VILAS_WWP_CO {
list[] = {$STR_VILAS_WESTERN_PACK};
};
};

class CfgFactionClasses {
class vil_rw_Army {
displayName = $STR_VIL_EASTERN; 
priority = 5; 
side = "TEast"; 
}; 
};

class CfgVehicleClasses {
class vil_rw { 
displayName = $STR_VIL_WEAPONS;
};
};

class cfgAmmo {
class BulletBase ;	// External class reference
class R_SMAW_HEAA;	// External class reference
class B_45ACP_Ball;	// External class reference

class VIL_CG48_HEAT : R_SMAW_HEAA {
hit = 400;
indirectHit = 10;
indirectHitRange = 1;
model = "\ca\weapons\AT1";
maxSpeed = 918;	// max speed on level road, km/h
//airFriction = -0.18;
//initSpeed = 255;
initTime = 0.0;
fuseDistance = 10;
thrust = 910;
timeToLive = 6;
thrustTime = 0.4;
cost = 600;
CraterEffects = "ATRocketCrater";
explosionEffects = "ATRocketExplosion";
effectsMissile = "missile2";
whistleDist = 2;
};
class VIL_CG48_HEDP : VIL_CG48_HEAT {
hit = 130;
indirectHit = 40;
indirectHitRange = 12;
maxSpeed = 828;	// max speed on level road, km/h
//sideAirFriction = 0.28;
//airFriction = 20.002751;
//initSpeed = 230;
initTime = 0.0;
fuseDistance = 20;
thrust = 900;
timeToLive = 6;
thrustTime = 0.4;
model = "\ca\weapons\AT1";
cost = 200;
whistleDist = 24;
};

class vil_B_45ACP_Ball_sd : B_45ACP_Ball {
visibleFire = 0.035;	
audibleFire = 0.035;
};
class VIL_PZF3_S_HEAT : R_SMAW_HEAA {
hit = 400;
indirectHit = 10;
indirectHitRange = 1;
model = "\ca\weapons\PG7_Rocket";
maxSpeed = 918;	
initTime = 0.0;
fuseDistance = 10;
thrust = 910;
timeToLive = 6;
thrustTime = 0.4;
cost = 600;
CraterEffects = "ATRocketCrater";
explosionEffects = "ATRocketExplosion";
effectsMissile = "missile2";
whistleDist = 2;
};
class VIL_PZF3_T_HEAT : R_SMAW_HEAA {
hit = 520;
indirectHit = 10;
indirectHitRange = 1;
model = "\ca\weapons\PG7_Rocket";
maxSpeed = 918;	
initTime = 0.0;
fuseDistance = 10;
thrust = 910;
timeToLive = 6;
thrustTime = 0.4;
cost = 600;
CraterEffects = "ATRocketCrater";
explosionEffects = "ATRocketExplosion";
effectsMissile = "missile2";
whistleDist = 2;
};
class VIL_PZF3_B_HEDP : R_SMAW_HEAA {
hit = 120;
indirectHit = 20;
indirectHitRange = 10;
model = "\ca\weapons\PG7_Rocket";
maxSpeed = 918;	
initTime = 0.0;
fuseDistance = 10;
thrust = 910;
timeToLive = 6;
thrustTime = 0.4;
cost = 600;
CraterEffects = "ATRocketCrater";
explosionEffects = "ATRocketExplosion";
effectsMissile = "missile2";
whistleDist = 2;
};
};

class CfgMagazines {
class Default;
class CA_Magazine : Default {};
class 15Rnd_9x19_M9;
class 30Rnd_9x19_UZI;
class 30Rnd_9x19_UZI_SD;
class 7Rnd_45ACP_1911;
class 17Rnd_9x19_glock17;
class 30Rnd_556x45_Stanag;
class VehicleMagazine : CA_Magazine {};
class CA_LauncherMagazine;
class PG7V;	// External class reference	

class Vil_CG_HEAT : PG7V {
model = "\vilas_wwp\vil_cg84t";
type = 2 * 		256;
modelSpecial = "\vilas_wwp\vil_cg84t";
displayName = $STR_VIL_MN_FFV551;
displayNameShort = $STR_VIL_SN_FFV551;
ammo =  VIL_CG48_HEAT;
picture = "\vilas_wwp\ico\m_FFV551_ca.paa";
initSpeed = 255;
descriptionShort = $STR_VIL_MS_FFV551;
};
class Vil_CG_84 : PG7V {
model = "\vilas_wwp\vil_cg84t";
type = 2 * 		256;
modelSpecial = "\vilas_wwp\vil_cg84t";
displayName = $STR_VIL_MN_FFV551;
displayNameShort = $STR_VIL_SN_FFV551;
ammo =  VIL_CG48_HEAT;
picture = "\vilas_wwp\ico\m_FFV551_ca.paa";
initSpeed = 255;
descriptionShort = $STR_VIL_MS_FFV551;
};
class Vil_CG_HEDP : Vil_CG_HEAT {
displayName = $STR_VIL_MN_FFV502;
displayNameShort = $STR_VIL_SN_FFV502;
ammo =  VIL_CG48_HEDP;
initSpeed = 230;
picture = "\vilas_wwp\ico\m_FFV502_ca.paa";
descriptionShort = $STR_VIL_MS_FFV502;
};
class Vil_PZF3_S_HEAT : PG7V {
model = "\vilas_wwp\vil_pzf3_e";
type = 2 * 		256;
modelSpecial = "\vilas_wwp\vil_pzf3_l";
displayName = "HEAT";
displayNameShort = "HEAT";
ammo =  VIL_PZF3_S_HEAT;
picture = "\ca\weapons2\smaw\data\equip\M_SMAW_CA.paa";
initSpeed = 255;
descriptionShort = "HEAT";
};
class Vil_PZF3_T_HEAT : PG7V {
model = "\vilas_wwp\vil_pzf3_e";
type = 2 * 		256;
modelSpecial = "\vilas_wwp\vil_pzf3_t";
displayName = "T600";
displayNameShort = "T600";
ammo =  VIL_PZF3_T_HEAT;
picture = "\ca\weapons2\smaw\data\equip\M_SMAW_CA.paa";
initSpeed = 255;
descriptionShort = "T600 HEAT";
};
class Vil_PZF3_B_HEDP : PG7V {
model = "\vilas_wwp\vil_pzf3_e";
type = 2 * 		256;
modelSpecial = "\vilas_wwp\vil_pzf3_b";
displayName = "Bunkerfaust";
displayNameShort = "Bunkerfaust";
ammo =  VIL_PZF3_B_HEDP;
picture = "\ca\weapons2\smaw\data\equip\M_SMAW_CA.paa";
initSpeed = 255;
descriptionShort = "Bunkerfaust";
};
class vil_bhp_mag : 15Rnd_9x19_M9 {
scope = public;
displayName = $STR_VIL_MN_BHP;
count = 12;
initSpeed = 398;
descriptionShort = $STR_VIL_MS_BHP;
};

class vil_usp45_mag : 7Rnd_45ACP_1911 {
scope = public;
displayName = $STR_VIL_MN_USP45;
ammo = "B_45ACP_Ball";
count = 12;
initSpeed = 270;
descriptionShort = $STR_VIL_MS_USP45;
};

class vil_usp45SD_mag : vil_usp45_mag {
displayName = $STR_VIL_MN_USP45SD;
ammo = "vil_B_45ACP_Ball_sd";
count = 12;
initSpeed = 270;
descriptionShort = $STR_VIL_MS_USP45SD;
};

class vil_32Rnd_uzi : 30Rnd_9x19_UZI {
scope = public;
type = 256;
displayName = $STR_VIL_MN_UZI;
picture = "\vilas_wwp\ico\m_vil_uzi_CA.paa";
initSpeed = 320;
count = 32;
ammo = "B_9x19_Ball";
descriptionShort = $STR_VIL_MS_UZI;
};	

class vil_32Rnd_uzi_sd : 30Rnd_9x19_UZI_SD {
scope = public;
type = 256;
displayName = $STR_VIL_MN_UZISD;
picture = "\vilas_wwp\ico\m_vil_uzi_CA.paa";
initSpeed = 320;
count = 32;
ammo = "B_9x19_SD";
descriptionShort = $STR_VIL_MS_UZI;
};

class Vil_35Rnd_556x45_G : 30Rnd_556x45_Stanag {
scope = public;
displayName = $STR_VIL_MN_GALIL;
ammo = "B_556x45_Ball";
picture = "\vilas_wwp\ico\m_vil_galil_35rnd_CA.paa";
count = 35;
descriptionShort = $STR_VIL_MS_GALIL;
};

class Vil_50Rnd_556x45_G : Vil_35Rnd_556x45_G {
scope = public;
displayName = "$STR_VIL_M_50Rnd_556x45_G";
picture = "\vilas_wwp\ico\m_vil_galil_50rnd_CA.paa";
count = 50;
tracersEvery = 3;
lastRoundsTracer = 3;
nameSound = "mgun";
descriptionShort = "$STR_VIL_M_50Rnd_556x45_G_SHORT";
};

class Vil_30Rnd_556x45_HK : CA_Magazine {
scope = public;
displayName = $STR_VIL_MN_30RND_HK33;
picture = "\vilas_wwp\ico\m_vil_hk33_30rnd_CA.paa";
ammo = "B_556x45_Ball";
count = 30;
initSpeed = 930;
tracersEvery = 0;
descriptionShort = $STR_VIL_MS_30RND_HK33;
};

class Vil_25Rnd_556x45_HK : Vil_30Rnd_556x45_HK {
scope = public;
displayName = $STR_VIL_MN_25RND_HK33;
picture = "\vilas_wwp\ico\m_vil_hk33_25rnd_CA.paa";
count = 25;
descriptionShort = $STR_VIL_MS_25RND_HK33;
};

class Vil_40Rnd_556x45_HK : Vil_30Rnd_556x45_HK {
scope = public;
displayName = $STR_VIL_MN_40RND_HK33;
picture = "\vilas_wwp\ico\m_vil_hk33_40rnd_CA.paa";
count = 40;
descriptionShort = $STR_VIL_MS_40RND_HK33;
};

class Vil_20Rnd_556x45_IN : 30Rnd_556x45_Stanag {
scope = public;
displayName = $STR_VIL_MN_20RN_IN;
picture = "\ca\weapons\data\equip\m_20stanag_CA.paa";
count = 20;
descriptionShort = $STR_VIL_MS_20RN_IN;
};

class Vil_30Rnd_556x45_IN : Vil_20Rnd_556x45_IN {
scope = public;
displayName = $STR_VIL_MN_30RN_IN;
picture = "\ca\weapons\data\equip\m_30stanag_CA.paa";
count = 30;
descriptionShort = $STR_VIL_MS_30RN_IN;
};

class Vil_20Rnd_556x45_SG : 30Rnd_556x45_Stanag {
scope = public;
displayName = $STR_VIL_MN_20RND_SG540;
descriptionShort = $STR_VIL_MS_20RND_SG540;
picture = "\vilas_wwp\ico\m_vil_sg_20rnd_CA.paa";
ammo = "B_556x45_Ball";
count = 20;
initSpeed = 930;
tracersEvery = 0;
};

class Vil_30Rnd_556x45_SG : Vil_20Rnd_556x45_SG {
scope = public;
displayName = $STR_VIL_MN_30RND_SG540;
descriptionShort = $STR_VIL_MS_30RND_SG540;
//picture = "\vilas_wwp\ico\m_vil_sg_30rnd_CA.paa";
picture = "\ca\weapons\data\equip\m_G36_CA.paa";
count = 30;
};

class 20Rnd_762x51_DMR;
class vil_20Rnd_762x51_SG : 20Rnd_762x51_DMR {
scope = public;
displayName = $STR_VIL_MN_20RND_SG542;
picture = "\vilas_wwp\ico\m_vil_sg_20rnd_CA.paa";
count = 20;
ammo = "B_762x51_noTracer";
initSpeed = 890;
descriptionShort = $STR_VIL_MS_20RND_SG542;
};

class 20Rnd_762x51_FNFAL;
class vil_20Rnd_762x51_FAL : 20Rnd_762x51_FNFAL {
scope = public;
ammo = "B_762x51_noTracer";
};

class vil_30Rnd_762x51_SG : vil_20Rnd_762x51_SG {
scope = public;
displayName = $STR_VIL_MN_30RND_SG542;
//picture = "\vilas_wwp\ico\m_vil_sg_30rnd_CA.paa";
picture = "\ca\weapons\data\equip\m_G36_CA.paa";
count = 30;
descriptionShort = $STR_VIL_MS_30RND_SG542;
};

class vil_20Rnd_762x51_G3 : 20Rnd_762x51_DMR {
scope = public;
displayName = $STR_VIL_MN_G3;
initSpeed = 900;
picture = "\vilas_wwp\ico\m_g3_ca.paa";
descriptionShort = $STR_VIL_MS_G3;
};
};

class CfgOpticsEffect {
class dkv_nspu_color {
type = "ColorCorrections";
priority = 2550;
params[] = {1, 1, 0, [0.0, 0.0, 0.0, 0.0], [3.1, 4.9, 3.1, -1.7], [1.199, 0.587, 0.114, 0.0]};
};
class dkv_nspu_grain {
type = "FilmGrain";
priority = 2050;
params[] = {0.1, 1, 1, 0.1, 0.1, false};
};
class dkv_nspu_blur {
type = "radialBlur";
priority = 1550;
params[] = {0.02,0.02,0.40,0.40};
};
class MLB_NV1gen_grain {
type = "FilmGrain";
priority = 2050;
params[] = {0.5, 6, 2, 0.1, 0.1, false};
};

class MLB_NV1GEN_blur {
type = "radialBlur";
priority = 1550;
params[] = {0.1,0.1,0.50,0.50};
};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;


class cfgWeapons {
class Default;
class Pistol;
class Launcher;
class M16A2 ;
class M249;
class Rifle;	// External class reference	
class M40a3;	// External class reference	
class GrenadeLauncher;	// External class reference

class M16_base : Rifle {
class Single;
class Burst;
class FullAuto;
class M203Muzzle;
};

class M240 : Rifle {
class manual;
class close;
class short;
class medium;
class far;
};

class M60A4_EP1 : Rifle {
class manual;
class close;
class short;
class medium;
class far;
};

class M14_EP1 : Rifle {
class Single;
};

class M4A1 : M16_base {};
class M4A1_Aim : M4A1 {};
class M4A1_RCO_GL : M4A1 {};
class M4A1_HWS_GL : M4A1_RCO_GL {};

class M9;
class M9SD;
class glock17_EP1;
class Colt1911;

/*********************************************************
	Vilas Western Weapons Pistols
**********************************************************/

class vil_B_HP : M9 {
scope = public;
model = "\vilas_wwp\vil_bhp";
displayName = $STR_VIL_BHP;
magazines[] = {"vil_bhp_mag"};
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {50, 100, 200, 300, 400, 500};
discreteDistanceInitIndex = 0;
picture = "\vilas_wwp\ico\w_vil_bhp_ca.paa";
begin1[] = {"\vilas_wwp\sounds\bhp_fire1", 0.994328, 1, 700};
reloadMagazineSound[] = {"\vilas_wwp\sounds\bhp_reload", 0.4, 1, 20};
soundBegin[] = {"begin1", 1};
class Library {
	libTextDesc = $STR_VIL_BHP_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_BHP_SHORT;
};

class vil_Glock : glock17_EP1 {
scope = public;
picture = "\vilas_wwp\ico\w_vil_glock17_ca.paa";
model = "\vilas_wwp\vil_glock";
class Armory {
	disabled = 0;
	description = "$STR_EP1_LIB_glock17";
	author = $STR_AUTHOR_VILAS;
};
displayName = $STR_VIL_GLOCK;
magazines[] = {"17Rnd_9x19_glock17", "15Rnd_9x19_M9", "15Rnd_9x19_M9SD"};
descriptionShort = "$STR_EP1_DSS_glock17_EP1";
};

class vil_Glock_o : vil_glock {
scope = public;
model = "\vilas_wwp\vil_glock_o";
picture = "\vilas_wwp\ico\w_vil_glock17_o_ca.paa";
class Armory {
	disabled = 1;
	description = "$STR_EP1_LIB_glock17";
	author = $STR_AUTHOR_VILAS;
};
displayName = $STR_VIL_GLOCK_O;
magazines[] = {"17Rnd_9x19_glock17", "15Rnd_9x19_M9", "15Rnd_9x19_M9SD"};
descriptionShort = "$STR_EP1_DSS_glock17_EP1";
};

class vil_USP : M9 {
scope = public;
model = "\vilas_wwp\vil_usp";
displayName = $STR_VIL_USP;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {25, 50, 75, 100};
discreteDistanceInitIndex = 1;
picture = "\vilas_wwp\ico\w_vil_usp_ca.paa";
begin1[] = {"\vilas_wwp\sounds\usp9_fire1", 0.684328, 1, 700};
soundBegin[] = {"begin1", 1};
reloadMagazineSound[] = {"\vilas_wwp\sounds\usp_reload", 0.1, 1, 20};
class Library {
	libTextDesc = $STR_VIL_USP_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
//descriptionShort = $STR_VIL_USP_SHORT;
};

class vil_USPSD : M9sd {
scope = public;
model = "\vilas_wwp\vil_uspsd";
displayName = $STR_VIL_USPSD;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {25, 50, 75, 100};
discreteDistanceInitIndex = 1;
picture = "\vilas_wwp\ico\w_vil_uspsd_ca.paa";
begin1[] = {"\vilas_wwp\sounds\usp9sd_fire1", 0.316228, 1, 200};
soundBegin[] = {"begin1", 1};
reloadMagazineSound[] = {"\vilas_wwp\sounds\usp_reload", 0.1, 1, 20};
class Library {
	libTextDesc = $STR_VIL_USP_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
//descriptionShort = $STR_VIL_USPSD_SHORT;
};

class vil_USP45 : Colt1911 {
scope = public;
model = "\vilas_wwp\vil_usp";
displayName = $STR_VIL_USP45;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {25, 50, 75, 100};
discreteDistanceInitIndex = 1;
picture = "\vilas_wwp\ico\w_vil_usp45_ca.paa";
magazines[] = {"vil_usp45_mag", "vil_usp45sd_mag"};
begin1[] = {"\vilas_wwp\sounds\usp45_fire1", 0.714328, 1, 700};
soundBegin[] = {"begin1", 1};
reloadMagazineSound[] = {"\vilas_wwp\sounds\usp_reload", 0.1, 1, 20};
class Library {
	libTextDesc = $STR_VIL_USP_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_USP45_SHORT;
};

class vil_USP45SD : M9sd {
scope = public;
fireLightDuration = 0.0;
fireLightIntensity = 0.0;
model = "\vilas_wwp\vil_uspsd";
displayName = $STR_VIL_USP45SD;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {25, 50, 75, 100};
discreteDistanceInitIndex = 1;
picture = "\vilas_wwp\ico\w_vil_usp45sd_ca.paa";
magazines[] = {"vil_usp45sd_mag"};
begin1[] = {"\vilas_wwp\sounds\usp9sd_fire1", 0.316228, 1, 200};
soundBegin[] = {"begin1", 1};
reloadMagazineSound[] = {"\vilas_wwp\sounds\usp_reload", 0.1, 1, 20};
recoil = "recoil_single_pistol_3outof3";
recoilProne = "recoil_single_pistol_prone_3outof3";
class Library {
	libTextDesc = $STR_VIL_USP_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_USP45SD_SHORT;
};


/*********************************************************
	Vilas Western Weapons Submachine guns
**********************************************************/


class MP5A5;
class MP5SD;
class UZI_EP1 : Pistol {
class Single;
class FullAuto;
};

class UZI_SD_EP1 : UZI_EP1 {};

class vil_MP5_EOTech : MP5A5 {
scope = public;
model = "\vilas_wwp\vil_mp5_eot";
picture = "\vilas_wwp\ico\w_vil_mp5_eot_ca.paa";
displayName = $STR_VIL_MP5_EOT;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_MP5SD_EOTech : MP5SD {
scope = public;
model = "\vilas_wwp\vil_mp5sd_eot";
picture = "\vilas_wwp\ico\w_vil_mp5sd_eot_ca.paa";
displayName = $STR_VIL_MP5SD_EOT;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_uzi_c : UZI_EP1 {
scope = public;
model = "\vilas_wwp\vil_uzi";
type = PrimaryWeapon;
picture = "\vilas_wwp\ico\w_vil_uzi_folded_ca.paa";
displayName = $STR_VIL_UZI_FOLDED;
magazines[] = {"vil_32Rnd_uzi", "vil_32Rnd_UZI_SD", "30Rnd_9x19_UZI", "30Rnd_9x19_UZI_SD"};
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200};
discreteDistanceInitIndex = 0;
modes[] = {"Single","FullAuto"};
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};

class Single : Single {
	dispersion = 0.0035;
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 25;
	midRangeProbab = 0.7;
	maxRange = 90;
	maxRangeProbab = 0.015;
	recoil = "recoil_single_primary_2outof10";
	recoilProne = "recoil_single_primary_prone_2outof10";
};

class FullAuto : FullAuto {
	reloadTime = 0.1;
	minRange = 0;
	minRangeProbab = 0.2;
	midRange = 20;
	midRangeProbab = 0.7;
	maxRange = 40;
	maxRangeProbab = 0.05;
	recoil = "recoil_single_primary_2outof10";
	recoilProne = "recoil_single_primary_prone_2outof10";
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_uzi : vil_uzi_c {
model = "\vilas_wwp\vil_uzi_rozkl";
picture = "\vilas_wwp\ico\uzi_ico_ca.paa";
displayName = $STR_VIL_UZI_FULL;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};


class vil_uzi_SD : UZI_SD_EP1 {
scope = public;
type = PrimaryWeapon;
model = "\vilas_wwp\vil_uzi_sd";
picture = "\vilas_wwp\ico\w_vil_uzi_sd_ca.paa";
displayName = $STR_VIL_UZI_SD;
magazines[] = {"vil_32Rnd_UZI_SD", "vil_32Rnd_uzi", "30Rnd_9x19_UZI_SD", "30Rnd_9x19_UZI"};
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200};
discreteDistanceInitIndex = 0;
modes[] = {"Single","FullAuto"};
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};

class Single : Single {
	dispersion = 0.0035;
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 25;
	midRangeProbab = 0.7;
	maxRange = 70;
	maxRangeProbab = 0.015;
	recoil = "recoil_single_primary_2outof10";
	recoilProne = "recoil_single_primary_prone_2outof10";
};

class FullAuto : FullAuto {
	reloadTime = 0.09;
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 15;
	midRangeProbab = 0.7;
	maxRange = 40;
	maxRangeProbab = 0.015;
	recoil = "recoil_auto_primary_2outof10";
	recoilProne = "recoil_auto_primary_prone_2outof10";
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_uzimini : UZI_EP1 {
scope = public;
model = "\vilas_wwp\vil_uzimini";
picture = "\vilas_wwp\ico\muzi_ico_ca.paa";
displayName = $STR_VIL_UZI_MINI;
magazines[] = {"vil_32Rnd_UZI_SD", "vil_32Rnd_uzi", "30Rnd_9x19_UZI_SD", "30Rnd_9x19_UZI"};
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
type = PrimaryWeapon;

class Single : Single {
	reloadTime = 0.06316;
};

class FullAuto : FullAuto {
	reloadTime = 0.06316;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
class Library {
	libTextDesc = $STR_VIL_UZI_MINI_LIB;
};
};

class vil_uzimini_SD : UZI_SD_EP1 {
scope = public;
model = "\vilas_wwp\vil_uzimini_sd";
picture = "\vilas_wwp\ico\w_vil_muzi_sd_ca.paa";
displayName = $STR_VIL_UZI_MINI_SD;
magazines[] = {"vil_32Rnd_UZI_SD", "vil_32Rnd_uzi", "30Rnd_9x19_UZI", "30Rnd_9x19_UZI_SD"};
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
type = PrimaryWeapon;

class Single : Single {
	reloadTime = 0.06316;
};
class FullAuto : FullAuto {
	reloadTime = 0.06316;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
class Library {
	libTextDesc = $STR_VIL_UZI_MINI_LIB;
};
};


/*********************************************************
	Vilas Western Weapons G3 variants
**********************************************************/

class vil_G3a3 : Rifle {
htMin = 1;
htMax = 420;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
//opticsZoomInit = 0.375;
value = 0;
model = "\vilas_wwp\vil_g3a3";
optics = true;
dexterity = 1.64;
displayName = $STR_VIL_G3A3;
displayNameShort = $STR_VIL_SN_G3A3;
picture = "\vilas_wwp\ico\ico_g3a3.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
magazines[] = {"vil_20Rnd_762x51_G3", "20Rnd_762x51_DMR"};
modes[] = {"Single", "FullAuto"};
weaponInfoType = "RscWeaponZeroing";	
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
discreteDistanceInitIndex = 2;

class M203Muzzle;

class Single : Mode_SemiAuto {
	begin1[] = {"\vilas_wwp\sounds\g3_fire1", 1.77828, 1, 1000};
	begin2[] = {"\vilas_wwp\sounds\g3_fire2", 1.77828, 1, 1000};
	soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
	reloadTime = 0.09;
	recoil = "recoil_single_primary_5outof10";
	recoilProne = "recoil_single_primary_prone_5outof10";
	dispersion = 0.0011;
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 200;
	midRangeProbab = 0.75;
	maxRange = 400;
	maxRangeProbab = 0.05;
};

class FullAuto : Mode_FullAuto {
	begin1[] = {"\vilas_wwp\sounds\g3_fire1", 1.77828, 1, 1000};
	begin2[] = {"\vilas_wwp\sounds\g3_fire2", 1.77828, 1, 1000};
	soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
	reloadTime = 0.09;
	recoil = "recoil_auto_primary_6outof10";
	recoilProne = "recoil_auto_primary_prone_5outof10";
	dispersion = 0.004;
	aiRateOfFire = 12;
};

class Library {
	libTextDesc = "$STR_VIL_G3_LIB";
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_G3_SHORT;
};

class vil_G3a2 : Vil_G3a3 {
scope = public;
model = "\vilas_wwp\vil_g3a2";
displayName = $STR_VIL_G3A2;
displayNameShort = $STR_VIL_SN_G3A2;
picture = "\vilas_wwp\ico\ico_g3a2.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_G3a4 : Vil_G3a3 {
scope = public;
model = "\vilas_wwp\vil_g3a4";
displayName = $STR_VIL_G3A4;
displayNameShort = $STR_VIL_SN_G3A4;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
picture = "\vilas_wwp\ico\ico_g3a4.paa";
};

class vil_G3a4b : Vil_G3a3 {
scope = public;
model = "\vilas_wwp\vil_g3a4b";
displayName = $STR_VIL_G3A4_B;
displayNameShort = $STR_VIL_SN_G3A4;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
picture = "\vilas_wwp\ico\w_vil_g3a4_b_ca.paa";
};

class vil_G3an : Vil_G3a3 {
scope = public;
model = "\vilas_wwp\vil_g3n";
displayName = $STR_VIL_G3N;
displayNameShort = $STR_VIL_SN_G3N;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
picture = "\vilas_wwp\ico\ico_g3n.paa";
};

class vil_G3anb : Vil_G3a3 {
scope = public;
model = "\vilas_wwp\vil_g3nb";
displayName = $STR_VIL_G3N_B;
displayNameShort = $STR_VIL_SN_G3N;
picture = "\vilas_wwp\ico\w_vil_g3n_b_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_G3ZF : Vil_G3a3 {
scope = public;
displayName = $STR_VIL_G3ZF;
displayNameShort = $STR_VIL_SN_G3ZF;
picture = "\vilas_wwp\ico\w_vil_g3zf_ca.paa";
model = "\vilas_wwp\vil_g3zf";
visionMode[] = {"Normal"};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
modelOptics = "\vilas_wwp\optk\optika_zfg3";
class OpticsModes {
	class G3Leu {
		opticsID = 1;
		useModelOptics = 1;
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsZoomMin = 0.07;
		opticsZoomMax = 0.07;
		opticsZoomInit = 0.07;
		memoryPointCamera = "Konec hlavne";
		opticsFlare = true;
		opticsDisablePeripherialVision = true;
		distanceZoomMin = 200;
		distanceZoomMax = 200;
		cameraDir = "";
		visionMode[] = {"Normal"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
	};
};
	
descriptionShort = $STR_VIL_G3ZF_SHORT;
};

class vil_G3zfb : Vil_G3zf {
scope = public;
model = "\vilas_wwp\vil_g3zfb";
displayName = $STR_VIL_G3ZF_B;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
displayNameShort = $STR_VIL_SN_G3ZF;
picture = "\vilas_wwp\ico\w_vil_g3zf_b_ca.paa";
};

class vil_G3SG1 : Vil_G3a3 {
scope = public;
model = "\vilas_wwp\vil_g3sg1";
displayName = $STR_VIL_G3SG1;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
picture = "\vilas_wwp\ico\ico_g3sg1.paa";
modelOptics = "\vilas_wwp\optk\optika_zfg3";

class OpticsModes {
	class G3SB {
		opticsID = 1;
		useModelOptics = 1;
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsZoomMin = 0.05;
		opticsZoomMax = 0.1;
		opticsZoomInit = 0.0625;
		memoryPointCamera = "Konec hlavne";
		opticsFlare = true;
		opticsDisablePeripherialVision = true;
		distanceZoomMin = 400;
		distanceZoomMax = 150;
		cameraDir = "";
		visionMode[] = {"Normal"};
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
	};
};

class Single : Single {
	recoil = "recoil_single_primary_5outof10";
	recoilProne = "recoil_single_primary_prone_4outof10";
	dispersion = 0.001;
	minRange = 10;
	minRangeProbab = 0.1;
	midRange = 300;
	midRangeProbab = 0.75;
	maxRange = 500;
	maxRangeProbab = 0.1;
	aiRateOfFire = 10;
};

class FullAuto : FullAuto {
	recoil = "recoil_auto_primary_5outof10";
	recoilProne = "recoil_auto_primary_prone_4outof10";
	aiRateOfFire = 20;
};
};

class vil_G3sg1b : Vil_G3sg1 {
scope = public;
model = "\vilas_wwp\vil_g3sg1b";
displayName = $STR_VIL_G3SG1_B;
displayNameShort = $STR_VIL_SN_G3SG1;
picture = "\vilas_wwp\ico\w_vil_g3sg1_b_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_G3TGS : Vil_G3a3 {
displayName = $STR_VIL_G3TGS;
displayNameShort = $STR_VIL_SN_G3TGS;
model = "\vilas_wwp\vil_g3tgs";
dexterity = 1.46;
picture = "\vilas_wwp\ico\ico_g3tgs.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
muzzles[] = {this, "HK79Muzzle"};

class HK79Muzzle : M203Muzzle {
	displayName = $STR_VIL_HK79;
	begin1[] = {"\vilas_wwp\Sounds\hk79_fire1", 1.77828, 1, 100};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"\vilas_wwp\Sounds\hk79_reload", 0.000316228, 1, 20};
	weaponInfoType = "RscWeaponEmpty";
	//weaponInfoType = "RscWeaponZeroing";
	//discreteDistance[] = {50, 100, 150, 200, 250, 300, 350};
	//discreteDistanceInitIndex = 2;
	opticsZoomMin = 0.25;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.5;
};

class Library {
	libTextDesc = $STR_VIL_HK79_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_G3TGS_SHORT;
};

class vil_G3TGSb : vil_G3TGS {
scope = public;
model = "\vilas_wwp\vil_g3tgsb";
displayName = $STR_VIL_G3TGS_B;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
displayNameShort = $STR_VIL_SN_G3TGS;
picture = "\vilas_wwp\ico\w_vil_g3tgs_b_ca.paa";
};

class vil_AG3 : Vil_G3a3 {
scope = public;
model = "\vilas_wwp\vil_ag3";
displayName = $STR_VIL_AG3_AIM;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {100};
discreteDistanceInitIndex = 0;
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
picture = "\vilas_wwp\ico\w_vil_ag3k_aim_ca.paa";
class Library {
	libTextDesc = "$STR_VIL_AG3_LIB";
};
descriptionShort = $STR_VIL_AG3_SHORT;
};

class vil_AG3EOT : vil_AG3 {
scope = public;
model = "\vilas_wwp\vil_ag3eot";
displayName = $STR_VIL_AG3_EOT;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
picture = "\vilas_wwp\ico\w_vil_ag3k_holo_ca.paa";
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;
};

/*********************************************************
	Vilas Western Weapons Machineguns
**********************************************************/


class skavil_M60 : M60A4_EP1 {
scope = public;
model = "\vilas_wwp\ska_m60";
class Armory {
	description = $STR_VIL_M60_LIB;
	type = 7;
	author = $STR_AUTHOR_VILAS;
};
displayName = "$STR_VIL_M60";
picture = "\vilas_wwp\ico\ico_m60.paa";
UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
reloadMagazineSound[] = {"\vilas_wwp\sounds\mgunreload", db0, 1, 20};
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100};
discreteDistanceInitIndex = 1;

class manual : manual {
	sound[] = {"\vilas_wwp\sounds\M60", 1.77828, 1, 1000};
	reloadTime = 0.109;
};
};

class skavil_M60e3 : skavil_M60 {
scope = public;
model = "\vilas_wwp\vilska_m60e3";
class Armory {
	description = $STR_VIL_M60E3_LIB;
	type = 7;
	author = $STR_AUTHOR_VILAS;
};
displayName = "$STR_VIL_M60E3";
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
picture = "\vilas_wwp\ico\w_vil_m60e3_ca.paa";
};

class vil_Mg3 : M240 {
scope = public;
model = "\vilas_wwp\vil_mg3b";
displayName = $STR_VIL_MG3;
picture = "\vilas_wwp\ico\ico_mg3.paa";
UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {200, 300, 400, 500, 600, 800, 1000, 1200};
discreteDistanceInitIndex = 1;
reloadMagazineSound[] = {"\vilas_wwp\sounds\mg3_reload", 0.0562341, 1, 25};
magazineReloadTime = 4;
class Library {
	type = 7;
	libTextDesc = $STR_VIL_MG3_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_MG3_SHORT;

class manual : manual {
	displayName = $STR_VIL_MG3;
	recoil = "recoil_auto_machinegun_8outof10";
	recoilProne = "recoil_auto_machinegun_prone_5outof10";
	dispersion = 0.0012;
	reloadTime = 0.0545;
	begin1[] = {"\vilas_wwp\sounds\mg3_fire1", 1.77828, 1, 1300};
	soundBegin[] = {"begin1", 1};
	maxRange = 10;
	maxRangeProbab = 0.04;
	showToPlayer = true;
};

class close : close {
	begin1[] = {"\vilas_wwp\sounds\mg3_fire1", 1.77828, 1, 1300};
	soundBegin[] = {"begin1", 1};
};

class short : close {
	begin1[] = {"\vilas_wwp\sounds\mg3_fire1", 1.77828, 1, 1300};
	soundBegin[] = {"begin1", 1};
};

class medium : close {
	begin1[] = {"\vilas_wwp\sounds\mg3_fire1", 1.77828, 1, 1300};
	soundBegin[] = {"begin1", 1};
};

class far : close {
	begin1[] = {"\vilas_wwp\sounds\mg3_fire1", 1.77828, 1, 1300};
	soundBegin[] = {"begin1", 1};
};
};

class vil_M249_Para : M249 {
scope = public;
model = "\vilas_wwp\vil_m249_para";
picture = "\vilas_wwp\ico\saw_ico.paa";
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
discreteDistanceInitIndex = 2;
class Armory {
	type = 7;
	author = $STR_AUTHOR_VILAS;
};
displayName = $STR_VIL_M249_PARA;
};

class vil_Minimi : M249 {
scope = public;
model = "\vilas_wwp\vil_minimi";
displayName = $STR_VIL_MINIMI;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
discreteDistanceInitIndex = 2;
picture = "\vilas_wwp\ico\w_vil_fnmini_ca.paa";
class Library {
	libTextDesc = $STR_VIL_MINIMI_LIB;
};
class Armory {
	type = 7;
	author = $STR_AUTHOR_VILAS;
};
};

class vil_FnMag : M240 {
scope = public;
model = "\vilas_wwp\vil_fn_mag";
displayName = $STR_VIL_FNMAG;
picture = "\vilas_wwp\ico\w_vil_fnmag_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
discreteDistanceInitIndex = 2;

class manual : manual {
	begin1[] = {"\vilas_wwp\sounds\FN_MAG", 1.77828, 1, 1000};
	soundBegin[] = {"begin1", 1.0};
};

class Library {
	libTextDesc = $STR_VIL_FNMAG_LIB;
};
class Armory {
	type = 7;
	author = $STR_AUTHOR_VILAS;
};
};

class vil_M240_B : M240 {
scope = public;
model = "\vilas_wwp\vil_m240b";
displayName = $STR_VIL_M240B;
picture = "\CA\weapons\data\equip\w_m240_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
discreteDistanceInitIndex = 2;
class Library {
	libTextDesc = $STR_VIL_M240B_LIB;
};
class Armory {
	type = 7;
	author = $STR_AUTHOR_VILAS;
};
};

class vil_MG4 : m249 {
scope = public;
model = "\vilas_wwp\vil_mg4";
displayName = $STR_VIL_MG4;
picture = "\vilas_wwp\ico\w_vil_mg4_ca.paa";
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
discreteDistanceInitIndex = 2;
class Library {
	libTextDesc = $STR_VIL_MG4_LIB;
};
class Armory {
	type = 7;
	author = $STR_AUTHOR_VILAS;
};
};

class vil_MG4E : m249 {
scope = public;
model = "\vilas_wwp\vil_mg4e";
modelOptics = "\ca\weapons\G36\G36_optics";
opticsZoomMin = 0.125;
opticsZoomMax = 0.125;
displayName = $STR_VIL_MG4_SCOPE;
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {100};
discreteDistanceInitIndex = 0;
distanceZoomMin = 100;
distanceZoomMax = 100;
//discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
//discreteDistanceInitIndex = 2;
picture = "\vilas_wwp\ico\w_vil_mg4e_ca.paa";
class Library {
	libTextDesc = $STR_VIL_MG4_LIB;
};
class Armory {
	type = 7;
	author = $STR_AUTHOR_VILAS;
};
};



/*********************************************************
	Vilas Western Weapons Sniper/Marksman Rifles
**********************************************************/


class DMR;
class vil_DRM_BASE : DMR {
class Single;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
discreteDistanceInitIndex = 2;
};

class vil_SR25 : vil_DRM_BASE {
scope = public;
model = "\vilas_wwp\vil_sr25";
displayName = $STR_VIL_SR25;
picture = "\vilas_wwp\ico\w_vil_sr25_ca.paa";
visionMode[] = {"Normal"};
modelOptics = "\ca\weapons\2Dscope_MilDot_9";
class OpticsModes {
	class Leu9X {
		opticsID = 1;
		useModelOptics = 1;
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsZoomInit = 0.083;
		opticsZoomMin = 0.0277;
		opticsZoomMax = 0.083;
		distanceZoomMin = 400;
		distanceZoomMax = 120;
		memoryPointCamera = "Konec hlavne";
		opticsFlare = true;
		opticsDisablePeripherialVision = true;
		cameraDir = "";
		visionMode[] = {"Normal"};
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
	};
};

class Single : Single {
	begin1[] = {"\vilas_wwp\sounds\sr25_fire1", 1.77828, 1, 1000};
	soundBegin[] = {"begin1", 1.0};
	midRange = 300;
	maxRange = 500;
	aiRateOfFireDistance = 500;
};

class Library {
	libTextDesc = $STR_VIL_SR25_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_SR25_SHORT;
};

class vil_M110 : vil_SR25 {
scope = public;
model = "\vilas_wwp\vil_m110";
displayName = $STR_VIL_M110;
picture = "\vilas_wwp\ico\w_vil_m110_ca.paa";
class Library {
	libTextDesc = $STR_VIL_M110_LIB;
};
class Armory {
	description = $STR_VIL_M110_LIB;
	author = $STR_AUTHOR_VILAS;
};
//descriptionShort = $STR_VIL_M110;
};
class vil_HK417s : vil_SR25 {
scope = public;
model = "\vilas_wwp\vil_hk417s";
displayName = "HK 417S";
picture = "\vilas_wwp\ico\417_ca.paa";
class Library {
	libTextDesc = "HK 417S";
};
class Armory {
	description = "HK 417S";
	author = $STR_AUTHOR_VILAS;
};
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
};
class vil_SR25SD : vil_SR25 {
scope = public;
model = "\vilas_wwp\vil_sr25sd";
displayName = $STR_VIL_SR25_SD;
picture = "\vilas_wwp\ico\w_vil_sr25_sd_ca.paa";

class Single : Single {
	begin1[] = {"\vilas_wwp\sounds\sr25_silent", 1.77828, 1, 250};
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_M110sd : vil_SR25sd {
scope = public;
model = "\vilas_wwp\vil_m110sd";
displayName = $STR_VIL_M110_SD;
picture = "\vilas_wwp\ico\w_vil_m110_sd_ca.paa";
class Armory {
	description = $STR_VIL_M110_LIB;
	author = $STR_AUTHOR_VILAS;
};
};

class vil_M21 : vil_DRM_BASE {
scope = public;
model = "\vilas_wwp\pkw_m21w";
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M24.rtm"};
displayName = $STR_VIL_M21_WOOD;
picture = "\vilas_wwp\ico\w_vil_m21w_ca.paa";

modelOptics = "\vilas_wwp\optk\optika_m21";
class OpticsModes {
	class Leu10X {
		opticsID = 1;
		useModelOptics = 1;
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsZoomInit = 0.075;
		opticsZoomMin = 0.03;
		distanceZoomMin = 400;
		opticsZoomMax = 0.07;
		distanceZoomMax = 120;
		memoryPointCamera = "Konec hlavne";
		opticsFlare = true;
		opticsDisablePeripherialVision = true;
		cameraDir = "";
		visionMode[] = {"Normal"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
	};
};
class Library {
	libTextDesc = $STR_VIL_M21_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_M21_SHORT;
};

class vil_M21G : vil_M21 {
scope = public;
model = "\vilas_wwp\pkw_m21g";
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M24.rtm"};
modelOptics = "\ca\weapons\2Dscope_MilDot_10";
opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
displayName = $STR_VIL_M21_GREEN;
picture = "\vilas_wwp\ico\w_vil_m21g_ca.paa";
class OpticsModes : OpticsModes {
	class Leu10X : Leu10X {
		opticsZoomMin = 0.025;
		opticsZoomMax = 0.025;
		opticsZoomInit = 0.025;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
	};
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_m40a3 : M40a3 {
scope = public;
value = 0;
model = "\vilas_wwp\m40a3";
modelOptics = "\ca\weapons\2Dscope_MilDot_10";
displayName = $STR_VIL_M40A3;
picture = "\vilas_wwp\ico\w_vil_m40a3_ca.paa";
class OpticsModes {
	class Leu10X {
		opticsID = 1;
		useModelOptics = 1;
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsZoomMin = 0.0249;
		opticsZoomMax = 0.0249;
		opticsZoomInit = 0.0249;
		memoryPointCamera = "Konec hlavne";
		opticsFlare = true;
		opticsDisablePeripherialVision = true;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		cameraDir = "";
		visionMode[] = {"Normal"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 3;
		};
};
};

class M24;
class vil_M24b : M24 {
scope = public;
model = "\vilas_wwp\m24_black";
displayName = $STR_VIL_M24_BLACK;
picture = "\vilas_wwp\ico\w_vil_m24b_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};


/*********************************************************
	Vilas Western Weapons Battle Rifles
**********************************************************/

class vil_M14 : M14_EP1 {
scope = public;
model = "\vilas_wwp\pkw_m14w";
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M24.rtm"};
picture = "\vilas_wwp\ico\m14_ico.paa";
dexterity = 1.55;
displayName = $STR_VIL_M14_WOOD;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
discreteDistanceInitIndex = 2;
class Library {
	libTextDesc = $STR_EP1_LIB_M14_EP1;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
modes[] = {"Single", "FullAuto"};

class Single : Single {
	displayName = $STR_DN_MODE_SEMIAUTO;
};

class FullAuto : Single {
	displayName = $STR_DN_MODE_FULLAUTO;
	autoFire = true;
	reloadTime = 0.0857;
	recoil = "recoil_auto_primary_5outof10";
	recoilProne = "recoil_auto_primary_prone_5outof10";
	dispersion = 0.0027;
	aiRateOfFire = 20;
};
};

class vil_M14G : vil_m14 {
scope = public;
model = "\vilas_wwp\pkw_m14g";
displayName = $STR_VIL_M14_GREEN;
picture = "\vilas_wwp\ico\w_vil_m14g_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class FN_FAL : M16A2 {
class Single;
class Burst;
};

class vil_Fal : FN_FAL {
scope = public;
value = 0;
model = "\vilas_wwp\vil_falb";
optics = true;
displayName = $STR_VIL_FAL;
picture = "\vilas_wwp\ico\ico_fal.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";  
magazines[] = {"20Rnd_762x51_FNFAL", "vil_20Rnd_762x51_FAL"};
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {200, 300, 400, 500, 600};
discreteDistanceInitIndex = 1;
modes[] = {"Single", "FullAuto"};

class Single : Single {
	reloadTime = 0.09;
	//dispersion = 0.0017;
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 250;
	midRangeProbab = 0.75;
	maxRange = 400;
	maxRangeProbab = 0.05;
};

class FullAuto : Single {
	displayName = $STR_DN_MODE_FULLAUTO;
	autoFire = true;
	reloadTime = 0.09;
	//dispersion = 0.0017;
	recoil = "recoil_auto_primary_6outof10";
	recoilProne = "recoil_auto_primary_prone_5outof10";
	dispersion = 0.005;
	aiRateOfFire = 12;
	minRange = 0;
	minRangeProbab = 0.3;
	midRange = 80;
	midRangeProbab = 0.7;
	maxRange = 200;
	maxRangeProbab = 0.05;
};

class Library {
	libTextDesc = $STR_EP1_LIB_FN_FAL;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_Fal_Para : Vil_Fal {
scope = public;
model = "\vilas_wwp\vil_falpara";
displayName = $STR_VIL_FAL_PARA;
picture = "\vilas_wwp\ico\ico_para.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};




/*********************************************************
	Vilas Western Weapons Assault Rifles
**********************************************************/

class vil_sg540 : M16_base {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
value = 0;
model = "\vilas_wwp\vil_sg540";
dexterity = 1.64;
displayName = $STR_VIL_SG540;
picture = "\vilas_wwp\ico\w_vil_sg540_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
modes[] = {"Single", "Burst", "FullAuto"};
magazines[] = {"vil_20Rnd_556x45_SG", "vil_30Rnd_556x45_SG"};
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 300, 500};
discreteDistanceInitIndex = 1;
class Library {
	libTextDesc = $STR_VIL_SG540_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_SG540_SHORT;
};

class vil_sg542 : vil_sg540 {
scope = public;
model = "\vilas_wwp\vil_sg542";
displayName = $STR_VIL_SG542;
picture = "\vilas_wwp\ico\w_vil_sg542_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
magazines[] = {"vil_20Rnd_762x51_SG", "vil_30Rnd_762x51_SG"};
discreteDistance[] = {100, 300, 500, 600};

class Library {
	libTextDesc = $STR_VIL_SG542_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_SG542_SHORT;
};

class vil_sg542f : vil_sg542 {
scope = public;
model = "\vilas_wwp\vil_sg541";
displayName = $STR_VIL_SG542_FS;
picture = "\vilas_wwp\ico\w_vil_sg542fs_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_Insas : M16_base {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
value = 0;
model = "\vilas_wwp\vil_insas";
optics = true;
dexterity = 1.64;
displayName = $STR_VIL_INSAS;
picture = "\vilas_wwp\ico\ico_insas.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
discreteDistanceInitIndex = 2;

modes[] = {"Single", "FullAuto"};
magazines[] = {"vil_20Rnd_556x45_IN", "vil_30Rnd_556x45_IN"};

class Single : Single {
	reloadTime = 0.09;
	recoil = "recoil_single_primary_4outof10";
	recoilProne = "recoil_single_primary_prone_4outof10";
	dispersion = 0.001;
	minRange = 2;
	minRangeProbab = 0.3;
	midRange = 250;
	midRangeProbab = 0.7;
	maxRange = 400;
	maxRangeProbab = 0.05;
	aiRateOfFire = 5.0;
	aiRateOfFireDistance = 500;
};

class FullAuto : FullAuto {
	reloadTime = 0.09;
	recoil = "recoil_auto_primary_4outof10";
	recoilProne = "recoil_auto_primary_prone_4outof10";
	dispersion = 0.00175;
	minRange = 0;
	minRangeProbab = 0.1;
	midRange = 25;
	midRangeProbab = 0.7;
	maxRange = 50;
	maxRangeProbab = 0.05;
};
class Library {
	libTextDesc = $STR_VIL_INSAS_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_INSAS_SHORT;
};

class vil_Insas_lmg : vil_Insas {
scope = public;
model = "\vilas_wwp\vil_insas_lmg";
displayName = $STR_VIL_INSAS_LMG;
picture = "\vilas_wwp\ico\lmg_ico.paa";
class Library {
	libTextDesc = $STR_VIL_INSAS_LIB;
};

modes[] = {"Single", "Burst", "FullAuto"};
magazines[] = {"vil_20Rnd_556x45_IN", "vil_30Rnd_556x45_IN"};

class Burst : Mode_Burst {
	soundBurst = 0;
	recoil = "recoil_auto_primary_2outof10";
	recoilProne = "recoil_auto_primary_prone_2outof10";
	minRange = 0;
	minRangeProbab = 0.3;
	midRange = 80;
	midRangeProbab = 0.7;
	maxRange = 400;
	maxRangeProbab = 0.05;
	dispersion = 0.001;
	reloadTime = 0.09;
	showToPlayer = false;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_INSAS_LMG_SHORT;
};


class vil_M16A1 : M16_base {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
value = 0;
model = "\vilas_wwp\vil_m16a1";
optics = true;
dexterity = 1.64;
displayName = $STR_VIL_M16A1;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {25, 50, 75, 100, 150, 175, 200, 250, 300, 400, 500, 600, 700, 800};
discreteDistanceInitIndex = 8;
picture = "\vilas_wwp\ico\ico_m16a1.paa";
modes[] = {"Single", "FullAuto"};

class FullAuto : Single {
	displayName = $STR_DN_MODE_FULLAUTO;
	autoFire = true;
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	minRange = 0;
	minRangeProbab = 0.1;
	midRange = 25;
	midRangeProbab = 0.7;
	maxRange = 70;
	maxRangeProbab = 0.05;
};

class Library {
	libTextDesc = $STR_LIB_M16;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_DSS_M16A2;
};

class VIL_M4 : M4A1 {
scope = public;
displayName = $STR_VIL_M4;
modes[] = {"Single", "Burst"};
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {25, 50, 75, 100, 150, 175, 200, 250, 300, 400, 500, 600};
discreteDistanceInitIndex = 8;
//picture = "\vilas_wwp\ico\w_vil_m4_ca.paa";
picture = "\ca\weapons\data\equip\w_m4_ca.paa";

class Burst : FullAuto {
	displayName = $STR_DN_MODE_BURST;
	autoFire = false;
	burst = 3;
};
};

class vil_M4_EOT : M4A1_Aim {
displayName = $STR_VIL_M4EOT;
class Armory {
	disabled = 0;
	author = $STR_AUTHOR_VILAS;
};
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
modes[] = {"Single", "Burst"};
model = "\vilas_wwp\vil_m4_eot";
picture = "\vilas_wwp\ico\w_vil_m4_holo_ca.paa";
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {300};
discreteDistanceInitIndex = 0;
distanceZoomMin = 300;
distanceZoomMax = 300;
};

class VIL_M4_aim : M4A1_Aim {
displayName = $STR_VIL_M4_AIM;
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {100};
discreteDistanceInitIndex = 0;
modes[] = {"Single", "Burst"};

class Burst : FullAuto {
	displayName = $STR_DN_MODE_BURST;
	autoFire = false;
	burst = 3;
};
};

class vil_HK33 : M16_base {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
value = 0;
model = "\vilas_wwp\vil_hkg33n";
displayName = $STR_VIL_HK33;
picture = "\vilas_wwp\ico\ico_33.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
modes[] = {"Single", "FullAuto"};
magazines[] = {"Vil_30Rnd_556x45_HK", "Vil_25Rnd_556x45_HK", "Vil_40Rnd_556x45_HK"};
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 200, 300, 400};
discreteDistanceInitIndex = 1;

class Single : Single {
	reloadTime = 0.08;
	begin1[] = {"\vilas_wwp\sounds\hk53_fire1", 1.77828, 1, 1000};
	soundBegin[] = {"begin1", 1};
};

class FullAuto : FullAuto {
	reloadTime = 0.08;
	begin1[] = {"\vilas_wwp\sounds\hk53_fire1", 1.77828, 1, 1000};
	soundBegin[] = {"begin1", 1};
};

class Library {
	libTextDesc = $STR_VIL_HK33_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_HK33_SHORT;
};

class vil_Galil : M16_base {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
value = 0;
model = "\vilas_wwp\vil_galil_ar";
displayName = $STR_VIL_GALIL;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {300, 500};
discreteDistanceInitIndex = 0;
picture = "\vilas_wwp\ico\ico_galil.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
reloadMagazineSound[] = {"\vilas_wwp\sounds\galil_reload",db0, 1, 20};
modes[] = {"Single", "FullAuto"};
magazines[] = {"Vil_35Rnd_556x45_G", "Vil_50Rnd_556x45_G"};

class Single : Single {
	begin1[] = {"\vilas_wwp\sounds\galil_fire1", 1.04828, 1, 1000};
	soundBegin[] = {"begin1", 1};
};

class FullAuto : FullAuto {
	begin1[] = {"\vilas_wwp\sounds\galil_fire1", 1.04828, 1, 1000};
	soundBegin[] = {"begin1", 1};
};

class Library {
	libTextDesc = $STR_VIL_GALIL_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_GALIL_SHORT;
};

class vil_Galil_arm : vil_Galil {
scope = public;
model = "\vilas_wwp\vil_galil_arm";
displayName = $STR_VIL_GALIL_ARM;
picture = "\vilas_wwp\ico\w_vil_galil_arm_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
magazines[] = {"Vil_50Rnd_556x45_G", "Vil_35Rnd_556x45_G"};

class Library {
	libTextDesc = $STR_VIL_GALIL_LIB;
};
descriptionShort = $STR_VIL_GALIL_ARM_SHORT;

class Single : Single {
	reloadTime = 0.075;
	dispersion = 0.001;
	minRange = 2;
	minRangeProbab = 0.3;
	midRange = 250;
	midRangeProbab = 0.7;
	maxRange = 500;
	maxRangeProbab = 0.05;
};

class FullAuto : FullAuto {
	reloadTime = 0.0923;
	dispersion = 0.00175;
	minRange = 100;
	minRangeProbab = 0.1;
	midRange = 250;
	midRangeProbab = 0.7;
	maxRange = 300;
	maxRangeProbab = 0.05;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};




/*********************************************************
	Vilas Western Weapons G36 versions
**********************************************************/
class G36a : Rifle {
class MuzzleFar;
class Single;
class Burst;
class FullAuto;
class M203Muzzle;
};
class G36C : Rifle {
class Single;
class Burst;
class FullAuto;
class M203Muzzle;
};

class vil_G36KVA4 : G36c {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_g36kv_is";
displayName = "HK G36 KV (Latvian)";
displayNameShort = $STR_VIL_SN_G36KVA4;
weaponInfoType = "RscWeaponEmpty";
discreteDistance[] = {200};
discreteDistanceInitIndex = 0;
picture = "\vilas_wwp\ico\w_vil_g36ka4_ca.paa";
//descriptionShort = $STR_VIL_G36KVA4_SHORT;
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};
class vil_G36KA4 : G36c {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_g36k_rail";
displayName = "HK G36 K (ironsight)";
displayNameShort = $STR_VIL_SN_G36KA4;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {100, 300};
discreteDistanceInitIndex = 0;
picture = "\vilas_wwp\ico\w_vil_g36kv_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};

modes[] = {"Single", "Burst", "Fullauto"};

class Single : Single {
	dispersion = 0.002;
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 200;
	midRangeProbab = 0.7;
	maxRange = 400;
	maxRangeProbab = 0.05;
};

class Burst : Burst {
	ffCount = 3;
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_2outof10";
	minRange = 1;
	minRangeProbab = 0.1;
	midRange = 60;
	midRangeProbab = 0.7;
	maxRange = 100;
	maxRangeProbab = 0.05;
	dispersion = 0.0016;
};

class FullAuto : FullAuto {
	recoil = "recoil_auto_primary_4outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	minRange = 0;
	minRangeProbab = 0.1;
	midRange = 20;
	midRangeProbab = 0.7;
	maxRange = 60;
	maxRangeProbab = 0.05;
	dispersion = 0.0016;
};
};
class vil_G36E : G36a {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_g36e";
displayName = $STR_VIL_G36E;
weaponInfoType = "RscWeaponEmpty";
class MuzzleFar : G36C {
	displayName = $STR_VIL_SN_G36E;
	optics = true;
	opticsDisablePeripherialVision = true;
	opticsZoomMin = 0.166;
	opticsZoomMax = 0.166;
	OpticsZoomInit = 0.166;
	DistanceZoomMin = 200;
	DistanceZoomMax = 200;
	modelOptics = "\ca\weapons\G36\G36_optics";
	opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur2"};
	class OpticsModes {
		class Scope {
			OpticsID = 1;
			UseModelOptics = 1;
			MemoryPointCamera = "Eye";
			optics = true;
			OpticsFlare = false;
			opticsDisablePeripherialVision = true;
			opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur2"};
			opticsZoomMin = 0.166;
			opticsZoomMax = 0.166;
			OpticsZoomInit = 0.166;
			DistanceZoomMin = 200;
			DistanceZoomMax = 200;
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
			VisionMode[] = {"Normal"};
			CameraDir = "";
		};
	};
};

picture = "\vilas_wwp\ico\w_vil_g36e_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_G36a2 : G36a {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_g36a2";
displayName = $STR_VIL_G36A2;
class MuzzleFar : MuzzleFar {
	displayName = $STR_VIL_SN_G36A2;

	class OpticsModes {
		class Scope {
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit = 0.0623;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
			cameraDir = "";
		};
		  
		class Kolimator : Scope {
			opticsID = 2;
			useModelOptics = 0;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			discreteDistance[] = {300};
			discreteDistanceInitIndex = 0;
			memoryPointCamera = "opticView";
			visionMode[] = {};
		};
	};
};
weaponInfoType = "RscWeaponEmpty";
picture = "\vilas_wwp\ico\w_vil_g36a2_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};

class vil_AG36 : G36c {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_ag36du";
displayName = $STR_VIL_AG36;
weaponInfoType = "RscWeaponEmpty";
handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons2\Data\Anim\XM8GL.rtm"};
picture = "\vilas_wwp\ico\w_vil_ag36_ca.paa";
muzzles[] = {G36aMuzzle, "AG36Muzzle"};

class G36aMuzzle : G36c {
	optics = true;
	displayName = $STR_VIL_G36A;
	weaponInfoType = "RscWeaponEmpty";
	opticsDisablePeripherialVision = true;
	modelOptics = "\ca\weapons\G36\G36_optics";
	opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur2"};

	class OpticsModes {
		class Scope {
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit = 0.0623;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
			cameraDir = "";
		};

		class Kolimator : Scope {
			opticsID = 2;
			useModelOptics = 0;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			discreteDistance[] = {300};
			discreteDistanceInitIndex = 0;
			memoryPointCamera = "opticView";
			visionMode[] = {};
		};
	};
};

class AG36Muzzle : M203Muzzle {
	displayName = $STR_VIL_AG36GL;
	begin1[] = {"\vilas_wwp\Sounds\ag36_fire1", 1.77828, 1, 100};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"\vilas_wwp\Sounds\ag36_reload", 0.000316228, 1, 20};
	weaponInfoType = "RscWeaponEmpty";
	
};
class Library {
	libTextDesc = $STR_VIL_AG36_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_AG36_SHORT;
};

class vil_AG36A2 : G36c {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_ag36a2";
displayName = $STR_VIL_AG36A2;
weaponInfoType = "RscWeaponEmpty";
handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons2\Data\Anim\XM8GL.rtm"};
picture = "\vilas_wwp\ico\w_vil_g36a2_ag36_ca.paa";
muzzles[] = {G36aMuzzle, "AG36Muzzle"};
  
class G36aMuzzle : G36c {
	optics = true;
	displayName = $STR_VIL_G36A2;
	opticsZoomMin = 0.0623;
	opticsZoomMax = 0.0623;
	weaponInfoType = "RscWeaponEmpty";
	distanceZoomMin = 200;
	distanceZoomMax = 200;
	opticsDisablePeripherialVision = true;
	modelOptics = "\ca\weapons\G36\G36_optics";
	opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur2"};
   
	class OpticsModes {
		class Scope {
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit = 0.0623;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
			cameraDir = "";
		};

		class Kolimator : Scope {
			opticsID = 2;
			useModelOptics = 0;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			discreteDistance[] = {300};
			discreteDistanceInitIndex = 0;
			memoryPointCamera = "opticView";
			visionMode[] = {};
		};
	};
};
class AG36Muzzle : M203Muzzle {
	displayName = $STR_VIL_AG36GL;
	begin1[] = {"\vilas_wwp\Sounds\ag36_fire1", 1.77828, 1, 100};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"\vilas_wwp\Sounds\ag36_reload", 0.000316228, 1, 20};
	weaponInfoType = "RscWeaponEmpty";
	
};
};
class vil_AG36KV : G36c {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_ag36kv";
displayName = "HK AG36KV";
weaponInfoType = "RscWeaponEmpty";
handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons2\Data\Anim\XM8GL.rtm"};
picture = "\vilas_wwp\ico\ag36_is_ca.paa";
muzzles[] = {this, "AG36Muzzle"};
  

class AG36Muzzle : M203Muzzle {
	displayName = $STR_VIL_AG36GL;
	begin1[] = {"\vilas_wwp\Sounds\ag36_fire1", 1.77828, 1, 100};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"\vilas_wwp\Sounds\ag36_reload", 0.000316228, 1, 20};
	weaponInfoType = "RscWeaponEmpty";
};
class Library {
	libTextDesc = $STR_VIL_AG36_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_AG36_SHORT;
};
class vil_AG36KA4 : G36c {
htMin = 1;
htMax = 480;
afMax = 0;
mfMax = 0;
mFact = 1;
tBody = 100;
scope = public;
model = "\vilas_wwp\vil_ag36ka4";
displayName = "HK AG36KA4";
weaponInfoType = "RscWeaponEmpty";
handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons2\Data\Anim\XM8GL.rtm"};
picture = "\vilas_wwp\ico\ag36_is_ca.paa";
muzzles[] = {this, "AG36Muzzle"};
  

class AG36Muzzle : M203Muzzle {
	displayName = $STR_VIL_AG36GL;
	begin1[] = {"\vilas_wwp\Sounds\ag36_fire1", 1.77828, 1, 100};
	soundBegin[] = {"begin1", 1};
	reloadMagazineSound[] = {"\vilas_wwp\Sounds\ag36_reload", 0.000316228, 1, 20};
	weaponInfoType = "RscWeaponEmpty";
};
class Library {
	libTextDesc = $STR_VIL_AG36_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_AG36_SHORT;
};

class vil_G36VA4 : vil_G36KA4 {
scope = public;
model = "\vilas_wwp\vil_g36_lit_5";
displayName = "HK G36 KV (Lithuanian)";
displayNameShort = $STR_VIL_SN_G36KVA4;
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
picture = "\vilas_wwp\ico\w_vil_g36a4_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};
class vil_G36VA4Eot : vil_G36VA4 {
scope = public;
model = "\vilas_wwp\vil_g36_lit_5_eot";
displayName = "HK G36 KV (Eot, Lithuanian)";
displayNameShort = $STR_VIL_SN_G36KVA4;
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
picture = "\vilas_wwp\ico\g36_litwa_eot_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
};
class vil_G36KVZ : vil_G36KA4 {
scope = public;
model = "\vilas_wwp\vil_g36k_zeiss";
displayName = "HK G36 K (Zeiss, LLM01)";
displayNameShort = $STR_VIL_SN_G36KVA4;
picture = "\vilas_wwp\ico\w_vil_g36a4_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
class FlashLight { color[] = {0.9, 0.9, 0.7, 0.9}; ambient[] = {0.1, 0.1, 0.1, 1.0};
position = "flash"; direction = "flash dir"; angle = 30; scale[] = {1, 1, 0.5}; brightness = 0.1; };
};
class vil_G36KSK : vil_G36KA4 {
scope = public;
model = "\vilas_wwp\vil_g36ksk_eot";
displayName = "HK G36 KSK (Eot, LLM01)";
displayNameShort = "HK G36 K (Eot, LLM01)";
picture = "\vilas_wwp\ico\g36_ksk_eot_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
class FlashLight { color[] = {0.9, 0.9, 0.7, 0.9}; ambient[] = {0.1, 0.1, 0.1, 1.0};
position = "flash"; direction = "flash dir"; angle = 30; scale[] = {1, 1, 0.5}; brightness = 0.1; };
};
class vil_G36KSKdes : vil_G36KA4 {
scope = public;
model = "\vilas_wwp\vil_g36ksk_eot_des";
displayName = "HK G36 K (Eot, desert)";
displayNameShort = "HK G36 K (Eot)";
picture = "\vilas_wwp\ico\g36_ksk_eot_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
class FlashLight { color[] = {0.9, 0.9, 0.7, 0.9}; ambient[] = {0.1, 0.1, 0.1, 1.0};
position = "flash"; direction = "flash dir"; angle = 30; scale[] = {1, 1, 0.5}; brightness = 0.1; };
};
class vil_G36KSKdesES : vil_G36KA4 {
scope = public;
model = "\vilas_wwp\vil_g36ksk_dr_des";
displayName = "HK G36 K (RAS, Specter, desert)";
displayNameShort = "HK G36 K (RAS, Specter, des)";
picture = "\vilas_wwp\ico\g36_ksk_dr_ca.paa";
modelOptics = "\Ca\weapons_E\SCAR\SpecterDR_556_optic_4x.p3d";
class OpticsModes
{
class Specter
{
opticsID = 1;
useModelOptics = 1;
opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
opticsZoomMin = 0.071945;
opticsZoomInit = 0.071945;
opticsZoomMax = 0.31945;
memoryPointCamera = "opticView";
visionMode[] = {"Normal"};
opticsFlare = 1;
opticsDisablePeripherialVision = 1;
distanceZoomMin = 300;
distanceZoomMax = 300;
cameraDir = "";
};
class Ironsights: Specter
{
opticsID = 2;
useModelOptics = 0;
opticsPPEffects[] = {};
opticsFlare = 0;
opticsDisablePeripherialVision = 0;
opticsZoomMin = 0.25;
opticsZoomMax = 1.1;
opticsZoomInit = 0.5;
memoryPointCamera = "eye";
visionMode[] = {};
};
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
class FlashLight { color[] = {0.9, 0.9, 0.7, 0.9}; ambient[] = {0.1, 0.1, 0.1, 1.0};
position = "flash"; direction = "flash dir"; angle = 30; scale[] = {1, 1, 0.5}; brightness = 0.1; };
};
class vil_G36CC : vil_G36KA4 {
scope = public;
model = "\vilas_wwp\vil_g36_lit_3";
displayName = "HK G36C (customized)";
displayNameShort = "HK G36C (customized)";
picture = "\vilas_wwp\ico\w_vil_g36a4_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};

};
class vil_G36KSKES : vil_G36KSKdesES {
model = "\vilas_wwp\vil_g36ksk_dr";
displayName = "HK G36 K (RAS, Specter)";
};
class vil_G36KES : vil_G36KSKdesES {
model = "\vilas_wwp\vil_g36kg_dr";
picture = "\vilas_wwp\ico\g36_bw_dr_ca.paa";
displayName = "HK G36 K (Specter)";
};


class vil_G36KV3 : vil_G36KA4 {
scope = public;
model = "\vilas_wwp\vil_g36kv_aim";
displayName = "HK G36 KV (Latvian)";
displayNameShort = "HK G36 KV (Latvian)";
picture = "\vilas_wwp\ico\g36_lotwa_ca.paa";
class Armory {
	author = $STR_AUTHOR_VILAS;
};
irLaserPos = "laser pos";
irLaserEnd = "laser dir";
irDistance = 50;
};
class vil_G36KV3Des : vil_G36KV3 {
scope = public;
model = "\vilas_wwp\vil_g36kv_aim_des";
displayName = "HK G36 KV (Latvian, desert)";
};

/*********************************************************
	Vilas Western Weapons HK416 versions
**********************************************************/

class vil_HK416_Aim : M4A1_Aim {
displayName = $STR_VIL_HK416_AIM;
weaponInfoType = "RscWeaponEmpty";
descriptionShort = $STR_VIL_HK416_SHORT;
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
model = "\vilas_wwp\vil_hk416aim";
discreteDistance[] = {100};
discreteDistanceInitIndex = 0;
distanceZoomMin = 100;
distanceZoomMax = 100;
picture = "\vilas_wwp\ico\ico_416.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
class Armory {
	description = $STR_VIL_HK416_LIB;
	author = $STR_AUTHOR_VILAS;
};
modes[] = {"Single", "Burst", "FullAuto"};
};

class vil_HK416_IS : vil_HK416_Aim {
displayName = $STR_VIL_HK416_IS;
descriptionShort = $STR_VIL_HK416_SHORT;
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
model = "\vilas_wwp\vil_hk416is";
distanceZoomMin = 100;
distanceZoomMax = 100;
weaponInfoType = "RscWeaponZeroing";
discreteDistance[] = {25, 50, 75, 100, 150, 175, 200, 250, 300, 400, 500, 600, 700, 800};
discreteDistanceInitIndex = 8;

picture = "\vilas_wwp\ico\w_vil_hk416_is_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
class Armory {
	description = $STR_VIL_HK416_LIB;
	author = $STR_AUTHOR_VILAS;
};
};

class vil_HK416_EOT : vil_HK416_Aim {
displayName = $STR_VIL_HK416_EOT;
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
model = "\vilas_wwp\vil_hk416cq";
picture = "\vilas_wwp\ico\w_vil_hk416_eot_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
descriptionShort = $STR_VIL_HK416_SHORT;
class Armory {
	description = $STR_VIL_HK416_LIB;
	author = $STR_AUTHOR_VILAS;
};
};

class vil_HK416_GL : vil_HK416_Aim {
displayName = $STR_VIL_HK416_GL;
model = "\vilas_wwp\vil_hk416ag";
picture = "\vilas_wwp\ico\w_vil_hk416_gl_ca.paa";
handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons2\Data\Anim\XM8GL.rtm"};
distanceZoomMin = 200;
distanceZoomMax = 200;
class AGCMuzzle : M203Muzzle {
	displayName = $STR_VIL_AGC;
};
muzzles[] = {this, "AGCMuzzle"};
descriptionShort = $STR_VIL_HK416_GL_SHORT;
class Armory {
	description = $STR_VIL_HK416_LIB;
	author = $STR_AUTHOR_VILAS;
};
};

class VIL_HK416_EDR : vil_HK416_Aim {
displayName = $STR_VIL_HK416_EDR;
model = "\vilas_wwp\VIL_hk416e";
scope = public;
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
modelOptics = "\vilas_wwp\optk\optika_elcan";
opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
opticsDisablePeripherialVision = false;
opticsZoomMin = 0.065;
opticsZoomMax = 0.3;
opticsFlare = true;
descriptionShort = $STR_VIL_HK416_SHORT;
picture = "\vilas_wwp\ico\w_vil_hk416_edr_ca.paa";
class Armory {
	description = $STR_VIL_HK416_LIB;
	author = $STR_AUTHOR_VILAS;
};
};



/*********************************************************
	Vilas Western Weapons Launchers
**********************************************************/
class MAAWS;
class vil_CG84T : MAAWS {
scope = public;
displayName = $STR_VIL_CG;
model = "\vilas_wwp\vil_cg84t";
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons_E\Data\Anim\MAAWS.rtm"};  //\Ca\weapons\data\Anim\SMAW.rtm
modelOptics = "\vilas_wwp\optk\optika_cg";
opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur3"};
visionMode[] = {"Normal", NVG};

opticsZoomMin = 0.0625;
opticsZoomMax = 0.0625;
distanceZoomMin = 150;
distanceZoomMax = 150;

magazines[] = {"Vil_CG_HEAT", "Vil_CG_HEDP", "Vil_CG_84"};
magazineReloadTime = 3;

sound[] = {"\vilas_wwp\sounds\carlGustav", db20, 1, 1400};

picture = "\vilas_wwp\ico\ico_cg.paa";
UiPicture = "\CA\weapons\data\Ico\i_at_CA.paa";
aiRateOfFireDistance = 400;
minRangeProbab = 0.3;
midRangeProbab = 0.8;
maxRangeProbab = 0.1;

class Library {
	libTextDesc = $STR_VIL_CG_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_CG_SHORT;
weaponInfoType = "RscWeaponEmpty";
};
class vil_Panzerfaust3 : MAAWS {
scope = public;
displayName = "Panzerfaust 3";
model = "\vilas_wwp\vil_pzf3_e";
handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons_E\Data\Anim\MAAWS.rtm"}; 
modelOptics = "\vilas_wwp\optk\optika_pzf";
opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur3"};
visionMode[] = {"Normal", NVG};

opticsZoomMin = 0.0625;
opticsZoomMax = 0.0625;
distanceZoomMin = 150;
distanceZoomMax = 150;

magazines[] = {"Vil_PZF3_S_HEAT", "Vil_PZF3_T_HEAT", "Vil_PZF3_B_HEDP"};
magazineReloadTime = 3;

sound[] = {"\vilas_wwp\sounds\carlGustav", db20, 1, 1400};

picture = "\vilas_wwp\ico\pzf3_ca.paa";
UiPicture = "\CA\weapons\data\Ico\i_at_CA.paa";
aiRateOfFireDistance = 400;
minRangeProbab = 0.3;
midRangeProbab = 0.8;
maxRangeProbab = 0.1;

class Library {
	libTextDesc = $STR_VIL_CG_LIB;
};
class Armory {
	author = $STR_AUTHOR_VILAS;
};
descriptionShort = $STR_VIL_CG_SHORT;
weaponInfoType = "RscWeaponEmpty";
};
};


class CfgVehicles {
class ReammoBox; //Extended

class vil_mix_weaponsbox  : ReammoBox {
scope = 2;
accuracy = 1000;
displayName = "VIL Guerilla weapons";
model = "\ca\weapons\AmmoBoxes\RUBasicAmmo.p3d";

class TransportMagazines  {
	class _xx_vil_G3m  {
		magazine = "vil_20Rnd_762x51_G3";
		count = 80;
	};
	class _xx_vil_FALm  {
		magazine = "20Rnd_762x51_FNFAL";
		count = 60;
	};
	class _xx_Stanag  {
		magazine = "20Rnd_556x45_Stanag";
		count = 80;
	};
	class _xx_SG  {
		magazine = "Vil_20Rnd_556x45_SG";
		count = 80;
	};
	class _xx_vil_galm  {
		magazine = "Vil_35Rnd_556x45_G";
		count = 80;
	};
	class _xx_vil_galm50  {
		magazine = "Vil_50Rnd_556x45_G";
		count = 50;
	};
	class _xx_vil_hk33  {
		magazine = "Vil_30Rnd_556x45_HK";
		count = 80;
	};
	class _xx_vil_m14m  {
		magazine = "20Rnd_762x51_DMR";
		count = 50;
	};
	class _xx_vil_magm  {
		magazine = "100Rnd_762x51_M240";
		count = 20;
	};
	class _xx_vil_pkmm  {
		magazine = "100Rnd_762x54_PK";
		count = 20;
	};
	class _xx_vil_akm  {
		magazine = "30Rnd_762x39_AK47";
		count = 60;
	};
};

class TransportWeapons  {
	class _xx_VIL_fal  {
		weapon = "VIL_fal";
		count = 1;
	};
	class _xx_VIL_g3  {
		weapon = "VIL_g3an";
		count = 1;
	};
	class _xx_VIL_gal  {
		weapon = "VIL_galil";
		count = 1;
	};
	class _xx_VIL_g33  {
		weapon = "VIL_hk33";
		count = 1;
	};
	class _xx_VIL_falp  {
		weapon = "VIL_Fal_Para";
		count = 1;
	};
	class _xx_VIL_g3b  {
		weapon = "VIL_g3anb";
		count = 1;
	};
	class _xx_VIL_gala  {
		weapon = "VIL_galil_arm";
		count = 1;
	};
	class _xx_VIL_g3a3  {
		weapon = "VIL_G3A4b";
		count = 1;
	};
	class _xx_VIL_sig  {
		weapon = "VIL_SG540";
		count = 1;
	};
};
};

class vil_US_weaponsboxold  : ReammoBox {
scope = 2;
accuracy = 1000;
displayName = "VIL US weapons 90s";
model = "\ca\weapons\AmmoBoxes\RUBasicAmmo.p3d";

class TransportMagazines  {
	class _xx_vil_G3m  {
		magazine = "vil_20Rnd_762x51_G3";
		count = 50;
	};
	class _xx_vil_FALm  {
		magazine = "HandGrenade_West";
		count = 10;
	};
	class _xx_Stanag  {
		magazine = "30Rnd_556x45_Stanag";
		count = 100;
	};
	class _xx_vil_galm  {
		magazine = "100Rnd_762x51_M240";
		count = 20;
	};
	class _xx_vil_hk33  {
		magazine = "200Rnd_556x45_M249";
		count = 20;
	};
};

class TransportWeapons  {
	class _xx_VIL_fal  {
		weapon = "VIL_m4";
		count = 5;
	};
	class _xx_VIL_g3  {
		weapon = "VIL_m21";
		count = 1;
	};
	class _xx_VIL_gal  {
		weapon = "m16a2";
		count = 5;
	};
	class _xx_VIL_g33  {
		weapon = "VIL_m16a1";
		count = 5;
	};
	class _xx_VIL_ghhal  {
		weapon = "skavil_m60";
		count = 1;
	};
	class _xx_VIL_ghh33  {
		weapon = "VIL_M14";
		count = 1;
	};
};
};

class vil_US_weaponsboxnew  : ReammoBox {
scope = public;
accuracy = 1000;
displayName = "VIL US Army weapons";
model = "\ca\weapons\AmmoBoxes\RUBasicAmmo.p3d";

class TransportMagazines  {
	class _xx_vil_G3m  {
		magazine = "20Rnd_762x51_DMR";
		count = 50;
	};
	class _xx_vil_FALm  {
		magazine = "10Rnd_127x99_m107";
		count = 10;
	};
	class _xx_Stanag  {
		magazine = "30Rnd_556x45_Stanag";
		count = 100;
	};
	class _xx_vil_galm  {
		magazine = "100Rnd_762x51_M240";
		count = 20;
	};
	class _xx_vil_hk33  {
		magazine = "200Rnd_556x45_M249";
		count = 20;
	};
	class _xx_vil_hm24  {
		magazine = "5Rnd_762x51_M24";
		count = 20;
	};
};

class TransportWeapons  {
	class _xx_VIL_fal  {
		weapon = "VIL_m4";
		count = 3;
	};
	class _xx_VIL_g3  {
		weapon = "VIL_m110";
		count = 1;
	};
	class _xx_VIL_gal  {
		weapon = "VIL_M24B";
		count = 1;
	};
	class _xx_VIL_g33  {
		weapon = "VIL_m4_eot";
		count = 3;
	};
	class _xx_VIL_ghhal  {
		weapon = "VIL_M240_B";
		count = 1;
	};
	class _xx_VIL_ghh33  {
		weapon = "VIL_M4_aim";
		count = 3;
	};
	class _xx_VIL_saw  {
		weapon = "m249";
		count = 2;
	};
};
};

class vil_USMC_weaponsboxnew  : ReammoBox {
scope = public;
accuracy = 1000;
displayName = "VIL USMC weapons";
model = "\ca\weapons\AmmoBoxes\RUBasicAmmo.p3d";
class TransportMagazines  {
	class _xx_vil_G3m  {
		magazine = "20Rnd_762x51_DMR";
		count = 50;
	};
	class _xx_vil_FALm  {
		magazine = "10Rnd_127x99_m107";
		count = 10;
	};
	class _xx_Stanag  {
		magazine = "30Rnd_556x45_Stanag";
		count = 100;
	};
	class _xx_vil_galm  {
		magazine = "100Rnd_762x51_M240";
		count = 20;
	};
	class _xx_vil_hk33  {
		magazine = "200Rnd_556x45_M249";
		count = 20;
	};
	class _xx_vil_hm24  {
		magazine = "5Rnd_762x51_M24";
		count = 20;
	};
};

class TransportWeapons  {
	class _xx_VIL_fal  {
		weapon = "M16A4";
		count = 5;
	};
	class _xx_VIL_g3  {
		weapon = "VIL_sr25";
		count = 1;
	};
	class _xx_VIL_gal  {
		weapon = "M40A3";
		count = 1;
	};
	class _xx_VIL_g33  {
		weapon = "vil_M4_eot";
		count = 5;
	};
	class _xx_VIL_ghhal  {
		weapon = "M240";
		count = 1;
	};
	class _xx_VIL_ghh33  {
	weapon = "VIL_M14g";
	count = 1;
	};
	class _xx_VIL_saw  {
		weapon = "M249";
		count = 1;
	};
	class _xx_VIL_sawp  {
		weapon = "VIL_M249_Para";
		count = 1;
	};
};
};

class vil_BW_weaponsbox  : ReammoBox {
scope = public;
accuracy = 1000;
displayName = "VIL German weapons";
model = "\ca\weapons\AmmoBoxes\RUBasicAmmo.p3d";

class TransportMagazines  {
	class _xx_vil_G3m  {
		magazine = "vil_20Rnd_762x51_G3";
		count = 100;
	};
	class _xx_vil_FALm  {
		magazine = "30Rnd_556x45_G36";
		count = 100;
	};
	class _xx_Stanag  {
		magazine = "200Rnd_556x45_M249";
		count = 20;
	};
	class _xx_vil_galm  {
		magazine = "100Rnd_762x51_M240";
		count = 20;
	};
	class _xx_vil_hk33  {
		magazine = "30Rnd_556x45_Stanag";
		count = 80;
	};
	class _xx_vil_ag36rnd  {
		magazine = "1Rnd_HE_M203";
		count = 20;
	};
};

class TransportWeapons  {
	class _xx_VIL_fal  {
		weapon = "G36A";
		count = 3;
	};
	class _xx_VIL_g3a3  {
		weapon = "VIL_g3a3";
		count = 3;
	};
	class _xx_VIL_gal  {
		weapon = "VIL_G3SG1";
		count = 1;
	};
	class _xx_VIL_g33  {
		weapon = "VIL_G3ZF";
		count = 1;
	};
	class _xx_VIL_falp  {
		weapon = "VIL_MG4";
		count = 1;
	};
	class _xx_VIL_gala  {
		weapon = "vil_mg3";
		count = 1;
	};
	class _xx_VIL_g3a4  {
		weapon = "VIL_G3A4b";
		count = 1;
	};
	class _xx_VIL_g36a2  {
		weapon = "vil_g36a2";
		count = 1;
	};
	class _xx_VIL_g36kva4  {
		weapon = "vil_G36KVA4";
		count = 1;
	};
	class _xx_VIL_ag36  {
		weapon = "VIL_AG36";
		count = 1;
	};
	class _xx_VIL_g36kv  {
		weapon = "vil_G36KA4";
		count = 1;
	};
};
};

class vil_eu_weaponsbox  : ReammoBox {
scope = public;
accuracy = 1000;
displayName = "VIL European weapons";
model = "\ca\weapons\AmmoBoxes\RUBasicAmmo.p3d";

class TransportMagazines  {
	class _xx_vil_G3m  {
		magazine = "vil_20Rnd_762x51_G3";
		count = 80;
	};
	class _xx_vil_FALm  {
		magazine = "20Rnd_762x51_FNFAL";
		count = 60;
	};
	class _xx_Stanag  {
		magazine = "30Rnd_556x45_Stanag";
		count = 80;
	};
	class _xx_vil_galm  {
		magazine = "200Rnd_556x45_M249";
		count = 20;
	};
	class _xx_vil_hk33  {
		magazine = "30Rnd_556x45_Stanag";
		count = 80;
	};
	class _xx_vil_m14m  {
		magazine = "20Rnd_762x51_DMR";
		count = 50;
	};
	class _xx_vil_magm  {
		magazine = "100Rnd_762x51_M240";
		count = 20;
	};
};

class TransportWeapons  {
	class _xx_VIL_fal  {
		weapon = "VIL_fal";
		count = 1;
	};
	class _xx_VIL_g3  {
		weapon = "VIL_g3anb";
		count = 1;
	};
	class _xx_VIL_gal  {
		weapon = "VIL_minimi";
		count = 1;
	};
	class _xx_VIL_g33  {
		weapon = "VIL_hk33";
		count = 1;
	};
	class _xx_VIL_falp  {
		weapon = "VIL_Fal_Para";
		count = 1;
	};
	class _xx_VIL_ag3  {
		weapon = "VIL_ag3";
		count = 1;
	};
	class _xx_VIL_gala  {
		weapon = "VIL_FnMag";
		count = 1;
	};
	class _xx_VIL_g3a3  {
		weapon = "vil_g36e";
		count = 1;
	};
	class _xx_VIL_sig  {
		weapon = "VIL_HK416_Eot";
		count = 1;
	};
};
};
};