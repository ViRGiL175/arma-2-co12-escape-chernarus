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
	class VILAS_RW_Forces_CO { 
		units[] = {"vil_rw"}; 
		requiredVersion = 1.54;
		requiredAddons[] = {"CAWeapons_E", "CAWeapons", "CAWeapons_E_AK"}; 
		author[] = {$STR_AUTHOR_VILAS};
		fileName = "vilas_aks_x.pbo";
	};
};

class CfgMods {
	class VILAS_RW_Forces_CO {
		//dir = "@Vilas";
		name = "$STR_VILAS_EASTERN_PACK";
		//picture = "\ico\vil_logo.paa";
		hidePicture = "true";
		hideName = "true";
		action = "http://www.createforum.com/vilas/";
	};
};

class CfgAddons {
	class VILAS_RW_Forces_CO {
		list[] = {$STR_VILAS_EASTERN_PACK};
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
	class B_9x39_SP5;	// External class reference
	class B_762x54_noTracer;	// External class reference
	class R_SMAW_HEAA;	// External class reference
	class RocketBase;	// External class reference
	class R_PG7V_AT;	// External class reference
	class R_RPG18_AT;	// External class reference
	class R_PG7VL_AT;	// External class reference
	class B_9x19_Ball;	// External class reference
	
	
	class Vil_B_93x64_Ball : B_762x54_noTracer {
		hit = 16;
		typicalSpeed = 790;
	};
	
	class vil_TT_Ball : BulletBase {
		cartridge = "FxCartridge_Small";
		hit = 8;
		cost = 5;
		typicalspeed = 410;
	};
	
	class B_9x19_Ball_P : B_9x19_Ball {
		//typicalSpeed = 460;
		caliber = 0.4;
	};
	
	class Vil_B_9x39_SP6 : B_9x39_SP5 {
		hit = 11;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 280;
		visibleFireTime = 2;	// how long is it visible
		airFriction = -0.001;
	};
	
	class Vil_B_9x39_SP6NS : Vil_B_9x39_SP6 {
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 8;	// how much is visible when this weapon is fired
		audibleFire = 8;
	};
	
	class Vil_B_9x39_PAB9 : Vil_B_9x39_SP6NS {
		hit = 12;
		cost = 1;
		typicalSpeed = 320;
	};
	
	class vil_Shmel_FTB : RocketBase {
		hit = 120;
		indirectHit = 25;
		indirectHitRange = 8;
		model = "\ca\weapons\PG7_Rocket";
		timeToLive = 4.5;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		cost = 200;
		maxSpeed = 250;
		thrustTime = 1;
		thrust = 500;
	};
	
	class R_PG7VR_AT;
	class vil_Roc_PG29_AT : R_PG7VR_AT {
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		hit = 700;
		indirectHit = 25;
		indirectHitRange = 0.5;
		irLock = 1;
		initTime = 0;
		maxSpeed = 1008;	// max speed on level road, km/h
		thrust = 220;
		thrustTime = 0.06;
	};
	
	class VIL_R_RPG22_AT : R_RPG18_AT {
		model = "\ca\weapons\m136_Rocket";
		hit = 340;
		indirectHit = 8;
		indirectHitRange = 1;
		cost = 200;
		timeToLive = 6;
		initTime = 0;
		thrust = 80;
		thrustTime = 1;
		maxSpeed = 130;	// max speed on level road, km/h
		sideAirFriction = 0.5;
		fuseDistance = 5;
		visibleFire = 24;	// how much is visible when this weapon is fired
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 2;
	};
	
	class VIL_R_RPG26_AT : R_RPG18_AT {
		model = "\ca\weapons\m136_Rocket";
		hit = 380;
		indirectHit = 7.5;
		indirectHitRange = 1;
		cost = 200;
		timeToLive = 6;
		initTime = 0;
		thrust = 80;
		thrustTime = 1;
		maxSpeed = 140;	// max speed on level road, km/h
		sideAirFriction = 0.5;
		fuseDistance = 5;
		visibleFire = 24;	// how much is visible when this weapon is fired
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 2;
	};
	
	class VIL_R_PG7VL_AT : R_PG7VL_AT {
		hit = 370;
		indirectHit = 10;
		indirectHitRange = 1;
		model = "\ca\weapons\PG7VL_Rocket";
		cost = 200;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 2;
	};
	
	class B_762x39_SD : BulletBase {
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.15;
		cost = 1;
		typicalSpeed = 380;
		airFriction = -0.00195;
		caliber = 0.83;
	};
	
	//this is for the BS-1 launcher
	class G_40mm_HE;	// External class reference
	/*
	class vil_G_30mm_AP : G_40mm_HE {
		hit = 125;
		indirectHit = 10;
		indirectHitRange = 1;
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.15;
		visibleFireTime = 0.2;	// how long is it visible
		typicalSpeed = 175;
		maxSpeed = 630;	// max speed on level road, km/h
		timeToLive = 8;
	};
	*/
	//entries for Polish 40x47mm grenades
	class vil_G_40x47mm_HE : G_40mm_HE {
		hit = 15;
		indirectHit = 14;
		indirectHitRange = 6;
		fuseDistance = 40;
	};
};

class CfgMagazines {
	class Default;
	class CA_Magazine : Default {};
	class VehicleMagazine : CA_Magazine {};
	class CA_LauncherMagazine;
	class 30Rnd_762x39_AK47;
	
	class vil_8Rnd_TT : CA_Magazine {
		scope = 2;
		type = 16;
		ammo = "vil_tt_Ball";
		count = 8;
		initSpeed = 420;
		picture = "\vilas_aks\ico\m_vil_tt_ca.paa";
		displayName = $STR_VIL_MN_TT33;
		descriptionShort = "$STR_VIL_MS_TT33";
	};
		
	class vil_20Rnd_9x18_aps : CA_Magazine {
		scope = public;
		type = 16;
		picture = "\Ca\weapons\Data\Equip\m_makarov_CA.paa";
		ammo = "B_9x18_Ball";
		count = 20;
		initSpeed = 325;
		displayName = $STR_TGW_VIL_MN_APS;
		descriptionShort = $STR_TGW_VIL_MS_APS;
	};
	
	class vil_20Rnd_9x18_apsSD : vil_20Rnd_9x18_aps {
		scope = public;
		type = 16;
		picture = "\Ca\weapons\Data\Equip\m_makarov_CA.paa";
		ammo = "B_9x18_SD";
		initSpeed = 310;
		displayName = $STR_TGW_VIL_MN_APB;
		descriptionShort = $STR_TGW_VIL_MS_APB;
	};
	
	class vil_10Rnd_9x39_SP6_VSS : CA_Magazine {
		scope = public;
		ammo = "vil_B_9x39_SP6";
		count = 10;
		initSpeed = 300;
		picture = "\CA\weapons\data\equip\M_VSSx10_CA.paa";
		displayName = $STR_TGW_VIL_MN_SP6VSS;
		descriptionShort = $STR_TGW_VIL_MS_SP6VSS;
	};
	
	class vil_20Rnd_9x39_SP6_VAL : CA_Magazine {
		scope = public;
		ammo = "vil_B_9x39_SP6";
		count = 20;
		initSpeed = 300;
		picture = "\CA\weapons\data\equip\M_VSSx20_CA.paa";
		displayName = $STR_TGW_VIL_MN_SP6VAL;
		descriptionShort = $STR_TGW_VIL_MS_SP6VAL;
	};
	
	class vil_20Rnd_9x39_SP6_OC : CA_Magazine {
		scope = public;
		ammo = "vil_B_9x39_SP6";
		count = 20;
		initSpeed = 310;
		picture = "\CA\weapons\data\equip\M_VSSx20_CA.paa";
		displayName = $STR_TGW_VIL_MN_SP6OC;
		displayNameShort = $STR_EP1_SN_SD;
		descriptionShort = $STR_TGW_VIL_MS_SP6OC;
	};
	
	class vil_20Rnd_9x39_SP6ns_OC : CA_Magazine {
		scope = public;
		ammo = "vil_B_9x39_PAB9";
		count = 20;
		initSpeed = 310;
		picture = "\CA\weapons\data\equip\M_VSSx20_CA.paa";
		displayName = $STR_TGW_VIL_MN_PAB9;
		descriptionShort = $STR_TGW_VIL_MS_PAB9;
	};
	
	class vil_45Rnd_545x39_AK : CA_Magazine {
		scope = public;
		ammo = "B_545x39_Ball";
		count = 45;
		initSpeed = 900;
		picture = "\vilas_aks\ico\m_vil_rpk74_ca.paa";
		tracersEvery = 0;
		displayName = $STR_TGW_VIL_MN_RPK74;
		descriptionShort = $STR_TGW_VIL_MS_RPK74;
	};
	
	class VIL_30Rnd_556x45_AK : CA_Magazine {
		scope = public;
		ammo = "B_556x45_Ball";
		count = 30;
		initSpeed = 920;
		picture = "\ca\weapons\data\equip\m_30stanag_CA.paa";
		tracersEvery = 0;
		displayName = $STR_TGW_VIL_MN_AK101;
		descriptionShort = $STR_TGW_VIL_MS_AK101;
	};

	class vil_60Rnd_545x39_AK : CA_Magazine {
		scope = public;
		ammo = "B_545x39_Ball";
		type = 2 * 256;
		count = 60;
		initSpeed = 900;
		picture = "\vilas_aks\ico\m_ak74_60rnd_ca.paa";
		tracersEvery = 0;
		displayName = $STR_TGW_VIL_M_60Rnd_545x39_RPK74;
		descriptionShort = $STR_TGW_VIL_M_60Rnd_545x39_RPK74_SHORT;
	};
	
	class vil_75Rnd_762x39_AK47 : 30Rnd_762x39_AK47 {
		count = 75;
		type = 2*		256;
		picture = "\CA\weapons\AK\data\equip\M_RPK_74_CA.paa";
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		displayName = "$STR_TGW_VIL_M_75Rnd_762x39_RPK";
		descriptionShort = "$STR_VIL_M_75Rnd_762x39_AK47_SHORT";
	};
	
	class vil_100Rnd_762x39_RPD : vil_75Rnd_762x39_AK47 {
		scope = public;
		ammo = "B_762x39_Ball";
		count = 100;
		initSpeed = 710;
		picture = "\vilas_aks\ico\m_vil_rpd_ca.paa";
		displayName = $STR_VIL_M_100Rnd_762x39_RPD;
		descriptionShort = $STR_VIL_M_100Rnd_762x39_RPD_SHORT;
		magazineReloadTime = 8;
	};
	
	class 15Rnd_9x19_M9;
	class vil_17Rnd_9x19_PYA : 15Rnd_9x19_M9 {
		scope = public;
		type = 16;
		picture = "\vilas_aks\ico\m_vil_pya_CA.paa";
		ammo = "B_9x19_Ball_P";
		count = 17;
		initSpeed = 460;
		displayName = $STR_TGW_VIL_MN_PYA;
		descriptionShort = $STR_TGW_VIL_MS_PYA;
	};
	
	class 30Rnd_545x39_AKSD ;
	class vil_30Rnd_762x39_AKSD : 30Rnd_545x39_AKSD {
		displayName = $STR_TGW_VIL_MN_AKSD;
		displayNameShort = $STR_EP1_SN_SD;
		ammo = "B_762x39_SD";
		picture = "\CA\weapons\AK\data\equip\M_AK47_CA.paa";
		initSpeed = 320;
		descriptionShort = $STR_TGW_VIL_MS_AKSD;
	};
	
	class vil_40Rnd_762x39_AK47 : 30Rnd_762x39_AK47 {
		scope = public;
		ammo = "B_762x39_Ball";
		count = 40;
		initSpeed = 710;
		picture = "\vilas_aks\ico\m_vil_rpk_ca.paa";
		displayName = $STR_TGW_VIL_MN_RPK47;
		descriptionShort = $STR_TGW_VIL_MS_RPK47;
	};
	
	class vil_10Rnd_762x39_SKS : 30Rnd_762x39_AK47 {
		scope = public;
		ammo = "B_762x39_Ball";
		count = 10;
		initSpeed = 710;
		picture = "\vilas_aks\ico\M_SKS_CA.paa";
		displayName = $STR_TGW_VIL_MN_SKS;
		descriptionShort = $STR_TGW_VIL_MS_SKS;
	};
	
	class PG7V;
	class PG7VL;
	class Vil_PGO_PG16 : PG7V {
		model = "\ca\weapons\PG7VL_proxy";
		modelSpecial = "\vilas_aks\vil_rpg_16_l";
		ammo = R_PG7VL_AT;
		picture = "\CA\weapons\data\equip\m_PG7VL_ca.paa";
		displayName = "$STR_TGW_VIL_MN_PG16";
		displayNameShort = $STR_TGW_VIL_SN_PG16;
		descriptionShort = "$STR_TGW_VIL_MS_PG16";
	};
	
	class Vil_PGO_PG7VL : PG7VL{
		model = "\ca\weapons\PG7VL_proxy";
		modelSpecial = "\vilas_aks\vil_rpg7_pgo_vl";
		displayName = $STR_MN_PG7VL;
		ammo = R_PG7VL_AT;
		picture = "\CA\weapons\data\equip\m_PG7VL_ca.paa";
		descriptionShort = "$STR_DSS_1Rnd_PG7VL";
	};
	
	class Vil_PGOD_PG7VL : Vil_PGO_PG7VL {
		model = "\ca\weapons\PG7VL_proxy";
		modelSpecial = "\vilas_aks\vil_rpg7d_pgo_vl";
	};
	
	class Vil_PGO_PG7T : PG7V {
		model = "\ca\weapons\PG7VL_proxy";
		modelSpecial = "\vilas_aks\vil_rpg7_pgo_t";
		initSpeed = 70;
		ammo = vil_Shmel_FTB;
		picture = "\vilas_aks\Ico\m_vil_tbg7_ca.paa";
		displayName = "$STR_TGW_VIL_MN_PG7T";
		displayNameShort = $STR_TGW_VIL_SN_PG7T;
		descriptionShort = "$STR_TGW_VIL_MS_PG7T";
	};
	
	class Vil_PGOD_PG7T : Vil_PGO_PG7T {
		model = "\ca\weapons\PG7VL_proxy";
		modelSpecial = "\vilas_aks\vil_rpg7d_pgo_t";
	};
	
	class OG7;
	class Vil_PGO_PG7OG : OG7 {
		model = "\ca\weapons\OG7V_proxy";
		modelSpecial = "\vilas_aks\vil_rpg7_pgo_og";
		displayName = $STR_MN_OG7;
		ammo = R_OG7_AT;
		initSpeed = 115;
		descriptionShort = "$STR_DSS_1Rnd_OG7";
	};
	
	class Vil_PGOD_PG7OG : Vil_PGO_PG7OG {
		model = "\ca\weapons\OG7V_proxy";
		modelSpecial = "\vilas_aks\vil_rpg7d_pgo_og";
	};
	
	class PG7VR;
	class Vil_PGO_PG7VR : PG7VR {
		model = "\ca\weapons\PG7VR_proxy";
		modelSpecial = "\vilas_aks\vil_rpg7_pgo_vr";
		displayName = $STR_MN_PG7VR;
		ammo = R_PG7VR_AT;
		picture = "\CA\weapons\data\equip\M_PG7VR_ca.paa";
		initSpeed = 70;
		descriptionShort = "$STR_DSS_1Rnd_PG7VR";
		type = 3 * 256;
	};
	
	class Vil_PGOD_PG7VR : Vil_PGO_PG7VR {
		model = "\ca\weapons\PG7VR_proxy";
		modelSpecial = "\vilas_aks\vil_rpg7d_pgo_vr";
	};
	
	class Vil_PG29_HEAT : PG7VR {
		model = "\ca\weapons\AT1";
		modelSpecial = "\vilas_aks\vil_rpg29";
		displayName = $STR_TGW_VIL_MN_PG29;
		ammo = vil_Roc_PG29_AT;
		initSpeed = 280;
		picture = "\vilas_aks\ico\m_vil_pg29_ca.paa";
		displayNameShort = $STR_TGW_VIL_SN_PG29;
		descriptionShort = $STR_TGW_VIL_MS_PG29;
		type = 3 * 256;
	};
	
	class RPG18;
	class vil_RPG22 : RPG18 {
		scope = public;
		model = "\vilas_aks\vil_rpg_22_closed";
		modelSpecial = "\vilas_aks\vil_rpg_22";
		displayName = $STR_TGW_VIL_MN_PG22;
		displayNameShort = $STR_TGW_VIL_SN_PG22;
		ammo = vil_R_RPG22_AT;
		reloadAction = "ManActReloadAT";
		picture = "\Ca\weapons2\rpg18\data\equip\M_RPG18_CA.paa";
		initSpeed = 130;
		type = 4 * 256;
		descriptionShort = $STR_TGW_VIL_MS_PG22;
	};
	
	class vil_RPG26 : CA_LauncherMagazine {
		scope = public;
		model = "\vilas_aks\vil_rpg_26_closed";
		modelSpecial = "\vilas_aks\vil_rpg_26";
		displayName = $STR_TGW_VIL_MN_PG26;
		displayNameShort = $STR_TGW_VIL_SN_PG26;
		ammo = vil_R_RPG26_AT;
		reloadAction = "ManActReloadAT";
		picture = "\vilas_aks\ico\m_vil_pg26_ca.paa";
		initSpeed = 140;
		type = 4 * 256;
		descriptionShort = $STR_TGW_VIL_MS_PG26;
	};
	
	class Vil_SHMEL_FTW: CA_LauncherMagazine {
		scope = public;
		model = "\ca\weapons\AT1";
		displayName = $STR_TGW_VIL_MN_RPOA;
		displayNameShort = $STR_TGW_VIL_SN_RPOA;
		ammo = vil_Shmel_FTB;
		picture = "\vilas_aks\ico\m_vil_rpoa_ca.paa";
		initSpeed = 70;
		descriptionShort = $STR_TGW_VIL_MS_RPOA;
		type = 3 * 256;
	};
	
	class 10Rnd_762x54_SVD;
	class vil_10Rnd_SVDK : 10Rnd_762x54_SVD {
		scope = public;
		displayName = $STR_VIL_MN_SVDK;
		picture = "\CA\weapons\data\equip\m_svd_ca.paa";
		count = 10;
		ammo = "Vil_B_93x64_Ball";
		initSpeed = 800;
		descriptionShort = $STR_VIL_MS_SVDK;
	};
	
	class vil_10Rnd_762x54_SV : 10Rnd_762x54_SVD {
		scope = public;
		displayName = $STR_TGW_VIL_MN_SV98;
		picture = "\CA\weapons\data\equip\m_svd_ca.paa";
		count = 10;
		ammo = "B_762x54_noTracer";
		initSpeed = 870;
		descriptionShort = $STR_TGW_VIL_MS_SV98;
	};
	
	class vil_10Rnd_Mauser : 10Rnd_762x54_SVD {
		scope = public;
		displayName = $STR_VIL_MN_M76;
		picture = "\CA\weapons\data\equip\m_svd_ca.paa";
		count = 10;
		ammo = "B_762x54_noTracer";
		initSpeed = 870;
		descriptionShort = $STR_VIL_MS_M76;
	};
	
	class vil_10Rnd_PSL : 10Rnd_762x54_SVD {
		scope = public;
		displayName = $STR_VIL_MN_PSL;
		picture = "\vilas_aks\ico\m_vil_psl_ca.paa";
		count = 10;
		ammo = "B_762x54_noTracer";
		initSpeed = 870;
		descriptionShort = $STR_VIL_MS_PSL;
	};
	
	//START BS-1 entry
	/*
	class 1Rnd_HE_GP25;
	class vil_1Rnd_AP_BS1 : 1Rnd_HE_GP25 {
		displayName = $STR_VIL_DN_BS1;
		picture = "\vilas_aks\ico\m_vil_30mm_BS1_ca.paa";
		ammo = "vil_G_30mm_AP";
		initSpeed = 175;
		descriptionShort = "$STR_VIL_DSS_BS1";
	};
	*/
	//START 40x47mm magazines
	class 1Rnd_HE_M203;
	class vil_1Rnd_NGO74 : 1Rnd_HE_M203 {
		displayName = $STR_VIL_DN_NGO74;
		ammo = "vil_G_40x47mm_HE";
		initSpeed = 78;
		descriptionShort = "$STR_VIL_DSS_NGO74";
	};
	
	class FlareWhite_M203;
	class vil_FlareWhite_NGC74 : FlareWhite_M203 {
		displayName = $STR_VIL_DN_FLAREWHITE_NGC74;
		initSpeed = 78;
		descriptionShort = "$STR_VIL_DSS_FLARE_NGC74";
	};
	
	class FlareGreen_M203;
	class vil_FlareGreen_NGC74 : FlareGreen_M203 {
		displayName = $STR_VIL_DN_FLAREGREEN_NGC74;
		initSpeed = 78;
		descriptionShort = "$STR_VIL_DSS_FLARE_NGC74";
	};
	
	class FlareRed_M203;
	class vil_FlareRed_NGC74 : FlareRed_M203 {
		displayName = $STR_VIL_DN_FLARERED_NGC74;
		initSpeed = 78;
		descriptionShort = "$STR_VIL_DSS_FLARE_NGC74";
	};
	
	class FlareYellow_M203;
	class vil_FlareYellow_NGC74 : FlareYellow_M203 {
		displayName = $STR_VIL_DN_FLAREYELLOW_NGC74;
		initSpeed = 78;
		descriptionShort = "$STR_VIL_DSS_FLARE_NGC74";
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

class Mode_SemiAuto {};
class Mode_Burst : Mode_SemiAuto {};
class Mode_FullAuto : Mode_SemiAuto {};

class cfgWeapons {
	class Default;
	class PistolCore;
	class RifleCore;
	class MGunCore;
	class Rifle;
	
	class M16_base : Rifle {
		class Single;
		class Burst;
		class FullAuto;
		class M203Muzzle;
	};
	
	class AK_BASE : Rifle {
		class Single;
		class Burst;
		class FullAuto;
		class GP25Muzzle;
	};
	class AKS_BASE : AK_BASE {};
	class AK_47_M : AK_BASE {};
	class AK_107_BASE : AK_BASE {};
	class AK_107_kobra : AK_107_BASE {};
	class AK_74 : AK_BASE {};
	class SVD;
	class AKS_74_U : AKS_BASE {};
	class RPK_74;
	class AK_47_S : AK_47_M {};
	class Launcher;
	
	
	class AK_107_GL_kobra;
	class AKS_74_UN_kobra : AK_BASE {
		class Single;
		class Burst;
		class FullAuto;
		class GP25Muzzle;
	};
	class AK_74_GL;
	class VSS_vintorez : Rifle {
		class Single;
		class Full;
	};
	class PK : Rifle {
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class Pecheneg : PK {};
	class Makarov;
	
	class vil_AKM_BASE : AK_47_M {
		scope = private;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 1;
		magazines[] = {"30Rnd_762x39_AK47", "vil_40Rnd_762x39_AK47", "vil_75Rnd_762x39_AK47"};
	};
	
	class vil_AK47_BASE : AK_47_M {
		scope = private;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		magazines[] = {"30Rnd_762x39_AK47", "vil_40Rnd_762x39_AK47", "vil_75Rnd_762x39_AK47"};
	};
	
	class vil_AKS_BASE : AK_47_S {
		scope = private;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		modes[] = {"FullAuto", "Single"};
		magazines[] = {"30Rnd_762x39_AK47", "vil_40Rnd_762x39_AK47", "vil_75Rnd_762x39_AK47"};
	};
	
	class vil_NATO_AK : M16_base {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = private;
		drySound[] = {"ca\sounds\weapons\rifles\dry", 0.000316228, 1, 10};
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\Data\Anim\AK.rtm"};
		magazines[] = {"VIL_30Rnd_556x45_AK"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		modes[] = {"FullAuto", "Single"};
		
		class Single : Single {
			begin1[] = {"\vilas_aks\sounds\AK74n", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
			dispersion = 0.00125;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};

		class Burst : Burst {
			begin1[] = {"\vilas_aks\sounds\AK74n", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			soundBurst = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.00125;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
			showToPlayer = false;
		};

		class FullAuto : FullAuto {
			begin1[] = {"\vilas_aks\sounds\AK74n", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.00125;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			showToPlayer = true;
		};
	};
	
	
	class vil_SKS : AK_BASE {
		scope = public;
		model = "\vilas_aks\vil_sks";
		picture = "\vilas_aks\ico\sks.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"vil_10Rnd_762x39_SKS"};
		displayName = $STR_TGW_VIL_SKS;
		dexterity = 1.57;
		reloadMagazineSound[] = {"\vilas_aks\sounds\sks_reload", 0.0562341, 1, 10};
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M24.rtm"};
		modes[] = {"Single"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		class Single : Single {
			displayName = "";
			begin1[] = {"\vilas_aks\sounds\sks_fire1", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			dispersion = 0.0018;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
			aiRateOfFire = 10;	// delay between shots at given distance
			aiRateOfFireDistance = 500;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_SKS_LIB;
		};
		descriptionShort = $STR_TGW_VIL_SKS_SHORT;
	};
	
	/*********************************************************
			Vilas Eastern Weapons Handguns
	**********************************************************/
	
	class vil_Tt33 : Makarov {
		scope = public;
		model = "\vilas_aks\vil_tetetka";
		picture = "\vilas_aks\ico\w_vil_tt33_ca.paa";
		displayName = $STR_VIL_TT33;
		dispersion = 0.015;
		magazines[] = {"vil_8Rnd_TT"};
		begin1[] = {"\vilas_aks\sounds\tt33_fire1", 0.794328, 1, 700};
		begin2[] = {"\vilas_aks\sounds\tt33_fire2", 0.794328, 1, 700};
		soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
		reloadMagazineSound[] = {"\vilas_aks\sounds\tt33_reload", 0.1, 1, 20};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		
		class Library {
			libTextDesc = $STR_VIL_TT33_LIB;
		};
		descriptionShort = $STR_VIL_TT33_SHORT;
	};
	
	class vil_APS : Makarov  {
		scope = public;
		model = "\vilas_aks\vil_aps";
		modelOptics = "-";
		picture = "\vilas_aks\ico\w_vil_aps_ca.paa";
		optics = true;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 100, 200};
		discreteDistanceInitIndex = 1;
		displayName = $STR_TGW_VIL_APS;
		begin1[] = {"\vilas_aks\sounds\APSs", 0.794328, 1, 700};
		reloadMagazineSound[] = {"\vilas_aks\sounds\APSReload", 0.0316228, 1, 20};
		magazines[] = {"vil_20Rnd_9x18_aps", "vil_20Rnd_9x18_apsSD"};
		ffCount = 1;
		aiRateOfFire = 0.1;	// delay between shots at given distance
		aiRateOfFireDistance = 50;
		modes[] = {"Single", "AI_single", "FullAuto"};
		
		class Single : Mode_SemiAuto {
			autoFire = false;
			begin1[] = {"\vilas_aks\sounds\APSs", 0.794328, 1, 700};
			soundBegin[] = {"begin1", 1};
			recoil = "recoil_single_pistol_2outof3";
			recoilProne = "recoil_single_pistol_2outof3";
			reloadTime = 0.1;
			dispersion = 0.0025;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.015;
		};

		class AI_Single : Single {
			dispersion = 0.004;
			midRange = 30;
			midRangeProbab = 0.6;
			maxRange = 70;
			maxRangeProbab = 0.001;
			showtoplayer = false;
		};

		class FullAuto : Mode_FullAuto {
			begin1[] = {"\vilas_aks\sounds\APSs", 0.794328, 1, 700};
			soundBegin[] = {"begin1", 1};
			recoil = "subMachineGunBase";
			recoilProne = "subMachineGunBase";
			reloadTime = 0.09;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 20;
			midRangeProbab = 0.1;
			maxRange = 40;
			maxRangeProbab = 0.001;
		};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_APS_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_APS_SHORT;
	};
	
	class vil_apssd : vil_aps {
		model = "\vilas_aks\vil_apssd";
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		displayName = $STR_TGW_VIL_APB;
		magazines[] = {"vil_20Rnd_9x18_apsSD", "vil_20Rnd_9x18_aps"};
		picture = "\vilas_aks\ico\w_vil_apb_ca.paa";
		begin1[] = {"\vilas_aks\sounds\APSsds", 0.316228, 1, 200};
		reloadMagazineSound[] = {"\vilas_aks\sounds\APSReload", 0.0316228, 1, 20};
		modes[] = {"Single", "AI_single", "FullAuto"};
		
		class Single : Single {
			fireLightDuration = 0.0;
			fireLightIntensity = 0.0;
			begin1[] = {"\vilas_aks\sounds\APSsds", 0.316228, 1, 200};
			soundBegin[] = {"begin1", 1};
		};
		class AI_Single : AI_Single {
			fireLightDuration = 0.0;
			fireLightIntensity = 0.0;
			begin1[] = {"\vilas_aks\sounds\APSsds", 0.316228, 1, 200};
			soundBegin[] = {"begin1", 1};
			showtoplayer = 0;
		};
		class FullAuto : FullAuto {
			fireLightDuration = 0.0;
			fireLightIntensity = 0.0;
			begin1[] = {"\vilas_aks\sounds\APSsds", 0.316228, 1, 200};
			soundBegin[] = {"begin1", 1};
		};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_APB_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		
		descriptionShort = $STR_TGW_VIL_APB_SHORT;
	};
	
	class Vil_PYA : Makarov {
		scope = public;
		model = "\vilas_aks\vil_pya";
		picture = "\vilas_aks\ico\w_vil_pya_ca.paa";
		midRange = 20;
		maxRangeProbab = 0.01;
		optics = true;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		displayName = $STR_TGW_VIL_PYA;
		magazines[] = {"vil_17Rnd_9x19_PYA", "15Rnd_9x19_M9", "15Rnd_9x19_M9SD"};
		begin1[] = {"\vilas_aks\sounds\pya_fire1", 0.794328, 1, 700};
		soundBegin[] = {"begin1", 1};
		reloadMagazineSound[] = {"\vilas_aks\sounds\pya_reload", 0.1, 1, 20};
		class Library {
			libTextDesc = $STR_TGW_VIL_PYA_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_PYA_SHORT;
	};
	
	
	/*********************************************************
			Vilas Eastern Weapons Launchers
	**********************************************************/
	
	class RPG7V;
	
	class Vil_RPG16 : RPG7V {
		scope = public;
		displayName = "$STR_TGW_VIL_RPG16";
		model = "\vilas_aks\vil_rpg_16";
		picture = "\vilas_aks\ico\w_vil_rpg16_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Strela.rtm"};
		magazines[] = {Vil_PGO_PG16};
		modelOptics = "\vilas_aks\opt\optika_pgo";
		
		class OpticsModes {
			class PGO {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur3"};
				opticsZoomInit = 0.175;
				opticsZoomMin = 0.175;
				opticsZoomMax = 0.175;
				distanceZoomMin = 400;
				distanceZoomMax = 400;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				cameraDir = "";
				};
		};
		class Library {
			libTextDesc = "$STR_TGW_VIL_RPG16_LIB";
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = "$STR_TGW_VIL_RPG16_SHORT";
	};
	
	class Vil_RPG7V_PGO : RPG7V {
		scope = public;
		displayName = $STR_TGW_VIL_RPG7V;
		model = "\vilas_aks\vil_rpg7_pgo";
		picture = "\vilas_aks\ico\w_vil_rpg7_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\RPG7.rtm"};
		magazines[] = {Vil_PGO_PG7VL, Vil_PGO_PG7VR, Vil_PGO_PG7T, Vil_PGO_PG7og};
		modelOptics = "\vilas_aks\opt\optika_pgo";
		
		class OpticsModes {
			class PGO {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsZoomInit = 0.175;
				opticsZoomMin = 0.175;
				opticsZoomMax = 0.175;
				distanceZoomMin = 400;
				distanceZoomMax = 400;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				cameraDir = "";
			};
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_RPG7V_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class Vil_RPG7d_PGO : Vil_RPG7V_PGO {
		scope = public;
		displayName = $STR_TGW_VIL_RPG7D;
		model = "\vilas_aks\vil_RPG7D_pgo";
		picture = "\vilas_aks\ico\w_vil_rpg7d_ca.paa";
		magazines[] = {Vil_PGOd_PG7VL, Vil_PGOd_PG7VR, Vil_PGOd_PG7T, Vil_PGOd_PG7og};
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\RPG7.rtm"};
		class Library {
			libTextDesc = $STR_TGW_VIL_RPG7D_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class Vil_RPG29 : RPG7V {
		scope = public;
		picture = "\vilas_aks\ico\w_vil_rpg29_ca.paa";
		displayName = "$STR_TGW_VIL_RPG29";
		model = "\vilas_aks\vil_rpg29";
		handAnim[] = {"OFP2_ManSkeleton", "\vilas_aks\Anim\rpg29.rtm"};
		magazines[] = {Vil_PG29_HEAT};
		modelOptics = "\vilas_aks\opt\optika_pgo";

		class OpticsModes {
			class PGO {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"}; //"OpticsCHAbera2", "OpticsBlur3"
				opticsZoomInit = 0.175;
				opticsZoomMin = 0.175;
				opticsZoomMax = 0.175;
				distanceZoomMin = 400;
				distanceZoomMax = 400;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				cameraDir = "";
			};
		};
		sound[] = {"\vilas_aks\sounds\rpg29_fire1", db35, 1, 1400};
		class Library {
			libTextDesc = $STR_TGW_VIL_RPG29_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_RPG29_SHORT;
	};
	
	class Vil_RPO_A : RPG7V {
		scope = public;
		picture = "\vilas_aks\ico\rpo.paa";
		displayName = $STR_TGW_VIL_RPOA;
		model = "\vilas_aks\vil_rpo_a";
		handAnim[] = {"OFP2_ManSkeleton", "\vilas_aks\Anim\rpo.rtm"};
		modelOptics = "-";
		magazines[] = {Vil_SHMEL_FTW};
		class Library {
			libTextDesc = $STR_TGW_VIL_RPOA_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_RPOA_SHORT;
	};
	
	class m136;
	class vilas_rpg22 : m136 {
		scope = public;
		displayName = $STR_TGW_VIL_RPG22;
		model = "\vilas_aks\vil_rpg_22";
		modelSpecial = 	"\vilas_aks\vil_rpg_22_closed";
		modelOptics = "-";
		magazines[] = {"vil_RPG22"};
		picture = "\vilas_aks\ico\w_vil_rpg22_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_at_CA.paa";
		minRange = 20;
		midRange = 100;
		maxRange = 200;
		aiRateOfFire = 10.0;	// delay between shots at given distance
		aiRateOfFireDistance = 150;
		sound[] = {"\vilas_aks\sounds\RPG22fire", db20, 1, 1300};
		reloadMagazineSound[] = {"\vilas_aks\sounds\RPG22Reload", 0.000316228, 1, 20};

		class Library {
			libTextDesc = $STR_TGW_VIL_RPG22_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_RPG22_SHORT;
	};
	
	class vilas_rpg26 : m136 {
		scope = public;
		displayName = $STR_TGW_VIL_RPG26;
		model = "\vilas_aks\vil_rpg_26";
		modelSpecial = "\vilas_aks\vil_rpg_26_closed";
		modelOptics = "-";
		magazines[] = {"vil_RPG26"};
		picture = "\vilas_aks\ico\w_vil_rpg26_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_at_CA.paa";
		minRange = 20;
		midRange = 100;
		maxRange = 200;
		aiRateOfFire = 10.0;	// delay between shots at given distance
		aiRateOfFireDistance = 150;
		sound[] = {"\vilas_aks\sounds\RPG26fire", db20, 1, 1300};
		class Library {
			libTextDesc = $STR_TGW_VIL_RPG26_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_RPG26_SHORT;
	};
	
	
	/*********************************************************
			Vilas Eastern Weapons Machine Guns
	**********************************************************/
	
	
	class vil_PKP : Pecheneg {
		scope = public;
		model = "\vilas_aks\vil_pkp";
		displayName = $STR_VIL_PKP;
		modelOptics = "-";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.5;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
		discreteDistanceInitIndex = 2;
		picture = "\vilas_aks\ico\w_vil_pkp_mg_ca.paa";
		
		class short : short {
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		
		class far : far {
			maxRange = 1000;
		};
		
		class Library {
			libTextDesc = $STR_LIB_PECHENEG;
		};
		class Armory {
			type = 7;
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_PKP_EOT : vil_PKP {
		scope = public;
		class Armory {
			type = 7;
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_pkp_eot";
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		displayName = $STR_VIL_PKP_EOT;
		picture = "\vilas_aks\ico\w_vil_pkp_mg_eot_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_PK : PK {
		scope = public;
		model = "\vilas_aks\vil_pk";
		displayName = $STR_TGW_VIL_PK;
		picture = "\vilas_aks\ico\pk.paa";
		weaponInfoType = "RscWeaponZeroing";
		reloadMagazineSound[] = {"\vilas_aks\sounds\PKReload", 0.0562341, 1, 40};
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
		discreteDistanceInitIndex = 2;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Armory {
			type = 7;
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_zastava_m84 : PK {
		scope = public;
		model = "\vilas_aks\vil_m84";
		displayName = $STR_VIL_M84;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		picture = "\vilas_aks\ico\m84_pk.paa";
		class Armory {
			type = 7;
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		class Library {
			libTextDesc = $STR_VIL_M84_LIB;
		};
	};
	
	class vil_PKM_N : PK {
		scope = public;
		model = "\vilas_aks\vil_pkm_n";
		displayName = $STR_TGW_VIL_PKMNSPU;
		picture = "\vilas_aks\ico\w_vil_pknspu_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\vilas_aks\opt\optika_nspu2";
			class OpticsModes {
				class NSPU2 {
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"MLB_NV1gen_grain","MLB_NV1GEN_blur"}; //"OpticsCHAbera2", "OpticsBlur3","dkv_nspu_color", "dkv_nspu_grain","dkv_nspu_blur"	
					opticsZoomInit = 0.0623;
					opticsZoomMin = 0.0623;
					opticsZoomMax = 0.0623;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					memoryPointCamera = "opticView";
					visionMode[] = {"NVG"};
					opticsFlare = true;
					opticsDisablePeripherialVision = true;
					weaponInfoType = "RscWeaponZeroing";
					discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
					discreteDistanceInitIndex = 2;
					cameraDir = "";
					};
			};

		reloadMagazineSound[] = {"\vilas_aks\sounds\PKReload", 0.0562341, 1, 40};
		class Armory {
			type = 7;
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_PKM : vil_PK {
		scope = public;
		model = "\vilas_aks\vil_pkm";
		displayName = $STR_TGW_VIL_PKM;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		reloadMagazineSound[] = {"\vilas_aks\sounds\PKReload", 0.0562341, 1, 40};
		class Armory {
			type = 7;
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_RPK : AK_47_M {
		scope = public;
		model = "\vilas_aks\vil_rpk";
		displayName = $STR_TGW_VIL_RPK47;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		picture = "\vilas_aks\ico\rpk.paa";
		aiDispersionCoefY = 14.0;
		aiDispersionCoefX = 14.0;
		dexterity = 1.21;
		magazines[] = {"vil_40Rnd_762x39_AK47" , "30Rnd_762x39_AK47", "vil_75Rnd_762x39_AK47"};
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\Data\Anim\AK.rtm"};
		modes[] = {"manual", "close", "short", "medium", "Single"};

		class manual : FullAuto {
			begin1[] = {"\vilas_aks\sounds\rpk_fire2", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			reloadTime = 0.1;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_machinegun_prone_3outof10";
			dispersion = 0.0012;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = true;
		};

		class close : manual {
			burst = 10;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = false;
		};

		class short : close {
			burst = 8;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};

		class medium : close {
			burst = 12;
			aiRateOfFire = 2.5;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};

		class Single : Single {
			begin1[] = {"\vilas_aks\sounds\rpk_fire2", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
			dispersion = 0.00125;
			aiRateOfFireDistance = 400;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_RPK47_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_RPK47_SHORT;
	};
	
	class vil_RPK75 : vil_RPK {
		scope = public;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		displayName = $STR_TGW_VIL_RPK75;
		model = "\vilas_aks\vil_rpk75";
		picture = "\CA\weapons\AK\data\Equip\w_RPK_74_CA.paa";
		magazines[] = {"vil_75Rnd_762x39_AK47", "vil_40Rnd_762x39_AK47" , "30Rnd_762x39_AK47"};
	};
	
	class vil_RPK75_Romania : vil_RPK {
		scope = public;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		displayName = $STR_VIL_AES10;
		magazines[] = {"vil_75Rnd_762x39_AK47", "vil_40Rnd_762x39_AK47" , "30Rnd_762x39_AK47"};
		picture = "\vilas_aks\ico\rom_rpk.paa";
		model = "\vilas_aks\vil_rpk75rom";
		class Library {
			libTextDesc = $STR_VIL_AES10_LIB;
		};
	};
	
	class vil_RPK75_M72 : vil_RPK {
		scope = public;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		displayName = $STR_VIL_M72;
		magazines[] = {"vil_75Rnd_762x39_AK47", "vil_40Rnd_762x39_AK47" , "30Rnd_762x39_AK47"};
		model = "\vilas_aks\vil_m72";
		picture = "\vilas_aks\ico\m72_rpk.paa";
		class Library {
			libTextDesc = $STR_VIL_M72_LIB;
		};
	};
	
	class vil_RPD : vil_RPK {
		scope = public;
		model = "\vilas_aks\vil_rpd";
		displayName = $STR_VIL_RPD;
		picture = "\vilas_aks\ico\w_vil_rpd_ca.paa";
		reloadMagazineSound[] = {"\vilas_aks\sounds\rpd_reload", 0.0562341, 1, 25};
		magazines[] = { "vil_100Rnd_762x39_RPD"};
		magazineReloadTime = 8;
		modes[] = {"manual", "close", "short", "medium"};

		class manual : manual {
			displayName = "";
			dispersion = 0.00125;
			begin1[] = {"\vilas_aks\sounds\rpd_fire1", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
		};

		class close : manual {
			burst = 10;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = false;
		};

		class short : close {
			burst = 8;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};

		class medium : close {
			burst = 12;
			aiRateOfFire = 2.5;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 620;
			maxRangeProbab = 0.04;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		class Library {
			libTextDesc = $STR_VIL_RPD_LIB;
		};
		descriptionShort = $STR_VIL_RPD_SHORT;
	};
	
	class vil_RPK74 : RPK_74 {
		scope = public;
		model = "\vilas_aks\vil_rpk74";
		displayName = $STR_TGW_VIL_RPK74;
		picture = "\vilas_aks\ico\rpk74.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		modes[] = {"manual", "close", "short", "medium", "Single"};
		magazines[] = {"vil_45Rnd_545x39_AK", "30Rnd_545x39_AK", "vil_60Rnd_545x39_AK"};

		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};

	class vil_RPK74M_P29 : vil_RPK74 {
		scope = public;
		model = "\vilas_aks\vil_rpk74m_p29";
		picture = "\vilas_aks\ico\w_vil_rpkm_p29_ca.paa";
		displayName = $STR_TGW_VIL_RPK74MP29;
		modelOptics = "\vilas_aks\opt\optika_1p29";
		class OpticsModes {
			class 1P29 {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				cameraDir = "";
			};
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_RPK74M : vil_RPK74 {
		scope = public;
		model = "\vilas_aks\vil_rpk74m";
		picture = "\vilas_aks\ico\rpk74m.paa";
		displayName = $STR_TGW_VIL_RPK74M;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		class Library {
			libTextDesc = $STR_TGW_VIL_RPK74M_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_RPK74M;
	};
	
	class vil_RPK74M_N : vil_RPK74 {
		scope = public;
		model = "\vilas_aks\vil_rpk74m_pn58";
		displayName = $STR_TGW_VIL_RPK74MN;
		picture = "\vilas_aks\ico\w_vil_rpkm_nspu_ca.paa";
		modelOptics = "\vilas_aks\opt\optika_nspu2";
		class OpticsModes {
			class NSPU2 {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"MLB_NV1gen_grain","MLB_NV1GEN_blur"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				memoryPointCamera = "opticView";
				visionMode[] = {"NVG"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				cameraDir = "";
			};
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	
	/*********************************************************
			Vilas Eastern Weapons Special Purpose
	**********************************************************/
	
	
	class vil_VSS_PSO : VSS_vintorez {
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_vss";
		modelOptics = "\vilas_aks\opt\optika_psom";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		
		class OpticsModes {
			class PSOM {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur3"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 1;
				cameraDir = "";
			};
		};
			
		displayName = $STR_TGW_VIL_VSS_PSO;
		modes[] = {"Single","Full"};
		magazines[] = {"10Rnd_9x39_SP5_VSS", "20Rnd_9x39_SP5_VSS", "vil_10Rnd_9x39_SP6_VSS","vil_20Rnd_9x39_SP6_VAL"};
		
		class Single : Single {
			midRange = 200;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		
		class Full : Full {
			maxRange = 100;
			maxRangeProbab = 0.01;
		};
	};
	
	class vil_VSS_N : vil_VSS_PSO {
		scope = public;
		model = "\vilas_aks\vil_vss_n";
		displayName = $STR_TGW_VIL_VSS_NSPU;
		picture = "\vilas_aks\ico\vss_n.paa";
		modelOptics = "\vilas_aks\opt\optika_nspu3";
		
		class OpticsModes :OpticsModes {
			class NSPU3 : PSOM {
				opticsPPEffects[] = {"dkv_nspu_grain","dkv_nspu_blur"};
				visionMode[] = {"NVG"};
				discreteDistance[] = {100, 200, 300, 400, 500, 600};
				discreteDistanceInitIndex = 2;
			};
		};
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
	};
		
	class vil_VAL : vil_VSS_PSO {
		scope = public;
		picture = "\vilas_aks\ico\val.paa";
		model = "\vilas_aks\vil_val";
		displayName = $STR_TGW_VIL_VAL;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "-";
		optics = false;
		class OpticsModes :OpticsModes {
			class IronSights : PSOM {
				visionMode[] = {};
				memoryPointCamera = "eye";
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.5;
				discreteDistance[] = {25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400};
				discreteDistanceInitIndex = 7;
				opticsFlare = false;
				opticsDisablePeripherialVision = false;
			};
		};
		modes[] = {"Single","Full"};
		magazines[] = {"vil_20Rnd_9x39_SP6_VAL", "10Rnd_9x39_SP5_VSS", "20Rnd_9x39_SP5_VSS", "vil_10Rnd_9x39_SP6_VSS"};
		class Single : Single {
			dispersion = 0.0018;
			begin1[] = {"\vilas_aks\sounds\vintorez_fire1", db10, 1, 50};
			soundBegin[] = {"begin1", 1.0};
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.01;
		};
		
		class Full : Full {
			dispersion = 0.0018;
			begin1[] = {"\vilas_aks\sounds\vintorez_fire1", db10, 1, 50};
			soundBegin[] = {"begin1", 1.0};
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_VAL_LIB;
		};
		class Armory {
			description = "$STR_TGW_VIL_VAL_LIB";
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_VAL_SHORT;
	};
	
	class vil_VAL_C : vil_VAL {
		scope = public;
		model = "\vilas_aks\vil_val_c";
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		displayName = $STR_TGW_VIL_VAL_KOBRA;
		picture = "\vilas_aks\ico\w_vil_val_kob_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_VAL_N : vil_VSS_N {
		scope = public;
		model = "\vilas_aks\vil_val_n";
		displayName = $STR_TGW_VIL_VAL_NSPU;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\vilas_aks\opt\optika_nspu3";
		class OpticsModes :OpticsModes {
			class NSPU3 : NSPU3 {
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
			};
		};
		picture = "\vilas_aks\ico\w_vil_val_nspu_ca.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class bizon : Rifle {
		class Single;
		class Burst;
		class FullAuto;
		class M203Muzzle;
	};
	
	class vil_Vikhr : bizon {
		scope = public;
		reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-ak-2ivan", 0.0707946, 1, 20};
		model = "\vilas_aks\vil_vikr";
		displayName = $STR_TGW_VIL_SR3;
		picture = "\vilas_aks\ico\vikhr.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"vil_20Rnd_9x39_SP6ns_OC", "vil_20Rnd_9x39_SP6_OC", "10Rnd_9x39_SP5_VSS", "20Rnd_9x39_SP5_VSS"};
		descriptionShort = $STR_TGW_VIL_SR3_SHORT;
		dexterity = 1.57;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\Data\Anim\AK.rtm"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200};
		discreteDistanceInitIndex = 0;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modes[] = {"Single", "FullAuto"};
		
		class Single : Single {
			reloadTime = 0.1;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			dispersion = 0.0028;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
		};
		class FullAuto : FullAuto {
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
			dispersion = 0.003;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_SR3_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_9a91 : vil_Vikhr {
		scope = public;
		picture = "\vilas_aks\ico\9a91.paa";
		model = "\vilas_aks\vil_9a91";
		displayName = $STR_TGW_VIL_9A91;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
		class Library {
			libTextDesc = $STR_TGW_VIL_9A91_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_9A91_SHORT;
	};
	
	class vil_9a91_c : vil_9a91 {
		scope = public;
		model = "\vilas_aks\vil_9a91_c";
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		displayName = $STR_TGW_VIL_9A91_KOBRA;
		picture = "\vilas_aks\ico\w_vil_9a91_kobra_ca.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_9A91_SHORT;
	};
	
	class vil_9a91_csd : vil_9a91 {
		scope = public;
		picture = "\vilas_aks\ico\w_vil_9a91sd_kobra_ca.paa";
		model = "\vilas_aks\vil_9a91_sd";
		displayName = $STR_TGW_VIL_9A91_SD;
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		magazines[] = {"vil_20Rnd_9x39_SP6_OC"};
		descriptionShort = $STR_TGW_VIL_9A91_SHORT;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		
		class Single : Single {
			begin1[] = {"\vilas_aks\sounds\val_fire1", db8, 1, 125};
			soundBegin[] = {"begin1", 1.0};
		};
		class FullAuto : FullAuto {
			begin1[] = {"\vilas_aks\sounds\val_fire1", db8, 1, 125};
			soundBegin[] = {"begin1", 1.0};
		};
};
	
	class vil_vsk94 : vil_VAL {
		scope = public;
		picture = "\vilas_aks\ico\w_vil_vsk94_ca.paa";
		model = "\vilas_aks\vil_vsk94";
		displayName = VSK94;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		magazines[] = {"vil_20Rnd_9x39_SP6_OC"};
		descriptionShort = $STR_TGW_VIL_9A91_SHORT;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modelOptics = "\ca\weapons\AK\pso_optics";
		class OpticsModes {
			class PSO {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur3"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 1;
				cameraDir = "";
			};
			class Ironsights {
				OpticsID = 2;
				UseModelOptics = 0;
				MemoryPointCamera = "Eye";
				OpticsPPEffects[] = {};
				OpticsFlare = false;
				OpticsDisablePeripherialVision = false;
				OpticsZoomMin = 0.25;
				OpticsZoomMax = 1.1;
				OpticsZoomInit = 0.5;
				DistanceZoomMin = 200;
				DistanceZoomMax = 200;
				VisionMode[] = {};
				CameraDir = "";
		};
};
};

	class vil_Groza_HG : AKS_BASE {
		scope = public;
		model = "\vilas_aks\vil_groza_hg";
		displayName = $STR_TGW_VIL_OC14;
		picture = "\vilas_aks\ico\oc_base.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"vil_20Rnd_9x39_SP6ns_OC", "vil_20Rnd_9x39_SP6_OC"};
		handAnim[] = {"OFP2_ManSkeleton", "\vilas_aks\Anim\groza_hg.rtm"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modes[] = {"Single", "FullAuto"};
		
		class Single : Single {
			begin1[] = {"\vilas_aks\sounds\groza_fire1", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			dispersion = 0.0018;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class FullAuto : FullAuto {
			begin1[] = {"\vilas_aks\sounds\groza_fire1", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
			ffCount = 30;
			dispersion = 0.0018;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_OC14_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_OC14_SHORT;
	};
	
	class vil_Groza_SC : vil_Groza_HG {
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		scope = public;
		model = "\vilas_aks\vil_groza_sc";
		displayName = $STR_TGW_VIL_OC14_SCOPE;
		picture = "\vilas_aks\ico\oc_sc.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"vil_20Rnd_9x39_SP6_OC"};
		handAnim[] = {"OFP2_ManSkeleton", "\vilas_aks\Anim\groza_sc.rtm"};
		modelOptics = "\vilas_aks\opt\optika_psom";
		class OpticsModes {
			class PSOM {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur3"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 1;
				cameraDir = "";
			};
		};

		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_OC14_SHORT;
		
		class Single : Single {
			begin1[] = {"\vilas_aks\sounds\groza_sd_fire1", db8, 1, 150};
			soundBegin[] = {"begin1", 1.0};
		};
		class FullAuto : FullAuto {
			begin1[] = {"\vilas_aks\sounds\groza_sd_fire1", db8, 1, 150};
			soundBegin[] = {"begin1", 1.0};
		};
	};

	class vil_Groza_GL : vil_Groza_HG {
		scope = public;
		model = "\vilas_aks\vil_groza_gl";
		displayName = $STR_TGW_VIL_OC14_GL;
		picture = "\vilas_aks\ico\oc_gl.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\vilas_aks\Anim\groza_sd.rtm"};
		muzzles[] = {this, "GP25Muzzle"};
		
		class GP25Muzzle : GP25Muzzle {};
		
		dexterity = 1.5;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_OC14_GL_SHORT;
	};
	
	class vil_Groza_SD : vil_Groza_HG {
		scope = public;
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		model = "\vilas_aks\vil_groza_sd";
		displayName = $STR_TGW_VIL_OC14_SD;
		magazines[] = {"vil_20Rnd_9x39_SP6_OC"};
		handAnim[] = {"OFP2_ManSkeleton", "\vilas_aks\Anim\groza_sd.rtm"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		picture = "\vilas_aks\ico\w_vil_oc_sd_ca.paa";
		visionMode[] = {"Normal"};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_OC14_SHORT;
		
		class Single : Single {
			begin1[] = {"\vilas_aks\sounds\groza_sd_fire1", db8, 1, 150};
			soundBegin[] = {"begin1", 1.0};
		};
		
		class FullAuto : FullAuto {
			begin1[] = {"\vilas_aks\sounds\groza_sd_fire1", db8, 1, 150};
			soundBegin[] = {"begin1", 1.0};
		};
	};
	
	
	/*********************************************************
			Vilas Eastern Weapons AK47 variants
	**********************************************************/
	
	class vil_AKS_47 : vil_AKS_BASE {
		scope = public;
		model = "\vilas_aks\ak47s";
		picture = "\vilas_aks\ico\w_vil_ak47s_ca.paa";
		displayName = $STR_TGW_VIL_AKS47;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_AKS47_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AKS47_SHORT;
	};
	
	class vil_AK_47_49 : vil_AK47_BASE {
		scope = public;
		picture = "\vilas_aks\ico\w_vil_ak4749_ca.paa";
		model = "\vilas_aks\vil_ak_4749";
		displayName = $STR_TGW_VIL_AK4749;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_AK4749_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AK4749_SHORT;
	};
	
	class vil_AK_47 : vil_AK47_BASE {
		scope = public;
		model = "\vilas_aks\vil_ak_47";
		picture = "\vilas_aks\ico\w_vil_ak47_ca.paa";
		displayName = $STR_TGW_VIL_AK47;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_AK47_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AK47_SHORT;
	};
	
	class vil_AKMSB : AKS_74_UN_kobra {
		scope = public;
		model = "\vilas_aks\vil_akmsb";
		displayName = $STR_TGW_VIL_AKMSB;
		picture = "\vilas_aks\ico\akmsb.paa";
		magazines[] = {"vil_30Rnd_762x39_AKSD"};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		distanceZoomMin = 100;
		distanceZoomMax = 100;

		class Single : Single {
			begin1[] = {"\vilas_aks\sounds\ak47sd_fire1", db10, 1, 150};
			soundBegin[] = {"begin1", 1.0};
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.04;
		};
		class FullAuto : FullAuto {
			begin1[] = {"\vilas_aks\sounds\ak47sd_fire1", db10, 1, 150};
			soundBegin[] = {"begin1", 1.0};
			reloadTime = 0.1;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.0025;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_AKMSB_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AKMSB_SHORT;
	};
	
	class vil_AKM : vil_AKM_BASE {
		scope = public;
		model = "\vilas_aks\vil_akm";
		picture = "\vilas_aks\ico\w_vil_akm_ca.paa";
		displayName = $STR_VIL_AKM;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_AKM_GL : vil_AKM_BASE {
		scope = public;
		model = "\vilas_aks\vil_akm_gp";
		displayName = $STR_VIL_AKMGP25;
		picture = "\vilas_aks\ico\w_vil_akmgp25_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		muzzles[] = {this, "GP25Muzzle"};
		dexterity = 1.5;
		class Library {
			libTextDesc = $STR_VIL_AKMGP25_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_AKMS : vil_AK47_BASE {
		scope = public;
		model = "\vilas_aks\vil_akms";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		displayName = $STR_VIL_AKMS;
		picture = "\vilas_aks\ico\w_vil_akms_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_AKMS_GP25 : vil_AKMS {
		scope = public;
		model = "\vilas_aks\vil_akms_gp";
		displayName = $STR_TGW_VIL_AKMSGL;
		picture = "\vilas_aks\ico\w_vil_akmsgl_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		muzzles[] = {this, "GP25Muzzle"};
		dexterity = 1.5;
		class Library {
			libTextDesc = $STR_TGW_VIL_AKMSGL_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AKMSGL_SHORT;
	};
	
	
	
	/*********************************************************
			Vilas Eastern Weapons AK-47 knockoffs
	**********************************************************/
	
	
	class vil_AK_47_m1 : vil_AK47_BASE {
		scope = public;
		model = "\vilas_aks\vil_ak_47_m1";
		picture = "\vilas_aks\ico\ak.paa";
		displayName = $STR_TGW_VIL_AK47M1;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_AK47M1_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AK47M1_SHORT;
	};
	
	class vil_AK_nato_m1 : vil_NATO_AK {
		scope = public;
		model = "\vilas_aks\vil_ak_47_m1nato";
		picture = "\vilas_aks\ico\w_vil_arm1_ca.paa";
		displayName = $STR_VIL_ARM1;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_VIL_ARM1_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_VIL_ARM1_SHORT;
	};
	
	class vil_M70 : vil_AKS_BASE {
		scope = public;
		picture = "\vilas_aks\ico\m70.paa";
		model = "\vilas_aks\vil_m70";
		displayName = $STR_TGW_VIL_M70;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_M70_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_M70_SHORT;
	};
	
	class vil_M70B : vil_AKM_BASE  {
		scope = public;
		picture = "\vilas_aks\ico\w_vil_m70b_ca.paa";
		model = "\vilas_aks\vil_m70b";
		displayName = $STR_VIL_M70B;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	//needs pic
	class vil_M64 : vil_AK47_BASE {
		scope = public;
		picture = "\vilas_aks\ico\w_vil_m64_ca.paa";	//placeholder
		model = "\vilas_aks\vil_m64";
		displayName = $STR_VIL_M64;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_VIL_M64_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_M70_SHORT;
	};
	
	class vil_ASH82 : vil_AKM_BASE {
		scope = public;
		model = "\vilas_aks\ash82";
		picture = "\vilas_aks\ico\w_vil_ak47s_ca.paa";
		displayName = $STR_VIL_ASH82;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		class Library {
			libTextDesc = $STR_VIL_ASH82_LIB;
		};
	};
	
	class vil_AMD : vil_AKS_BASE {
		scope = public;
		picture = "\vilas_aks\ico\w_vil_amd65_ca.paa";
		model = "\vilas_aks\vil_amd";
		displayName = $STR_TGW_VIL_AMD;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_AMD_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AMD_SHORT;
	};
	
	class vil_AMD63 : vil_AKM_BASE {
		scope = public;
		picture = "\vilas_aks\ico\w_vil_amd63_ca.paa";
		model = "\vilas_aks\vil_amd63";
		displayName = $STR_VIL_AMD63;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_VIL_AMD63_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AMD_SHORT;
	};

	class vil_PMI : vil_AK47_BASE {
		scope = public;
		model = "\vilas_aks\vil_rakm";
		picture = "\vilas_aks\ico\roman.paa";
		displayName = $STR_TGW_VIL_PMI;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_PMI_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_PMI_SHORT;
	};
	
	class vil_PMIS : vil_AKS_BASE {
		scope = public;
		model = "\vilas_aks\vil_rakms";
		picture = "\vilas_aks\ico\rom_ak.paa";
		displayName = $STR_VIL_PMI65;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_PMI_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_PMI_SHORT;
	};
	
	class vil_MPi : vil_AKS_BASE {
		scope = public;
		model = "\vilas_aks\vil_ddr";
		picture = "\vilas_aks\ico\ddr.paa";
		displayName = $STR_TGW_VIL_MPI;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_MPI_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_MPI_SHORT;
	};

	class vil_AK_nato_m80 : vil_NATO_AK {
		scope = public;
		model = "\vilas_aks\vil_m80";
		picture = "\vilas_aks\ico\w_vil_zastm80_ca.paa";
		displayName = $STR_VIL_ZASTAVA_M80;
		magazines[] = {"VIL_30Rnd_556x45_AK"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_VIL_ZASTAVA_M80_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_VIL_ZASTAVA_M80_SHORT;
	};
	
	
	
	/*********************************************************
			Vilas Eastern Weapons AK-74 versions
	**********************************************************/
	
	class vil_AKs_74_u : AKS_74_U {
		scope = public;
		model = "\vilas_aks\vil_aks_74u";
		displayName = $STR_DN_AKS74_U;
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {350, 500};
		discreteDistanceInitIndex = 0;

		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		
		class Single : Single {
			dispersion = 0.00125;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.01;
		};
		class FullAuto : FullAuto {
			ffCount = 30;
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
			dispersion = 0.00125;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
		};
	}; 

	class vil_AKs_74_u45 : AKS_74_U {
		scope = public;
		model = "\vilas_aks\vil_aks_74u_45";
		displayName = $STR_DN_AKS74_U;
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {350, 500};
		discreteDistanceInitIndex = 0;
		magazines[] = {"vil_45Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AKSD"};
	  
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	  
		class Single : Single {
			dispersion = 0.00125;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.01;
		};
		class FullAuto : FullAuto {
			ffCount = 30;
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
			dispersion = 0.00125;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
		};
	};
	
	class Vil_AKS_74_UN_kobra : AKS_74_UN_kobra {
		model = "\vilas_aks\vil_aks_74u_b";
		displayName = $STR_TGW_VIL_AKS74UN;
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {350, 500};
		discreteDistanceInitIndex = 0;
	};
	
	class Vil_AKS_74_UB : AKS_74_UN_kobra {
		model = "\vilas_aks\vil_aks_74u_b";
		displayName = $STR_TGW_VIL_AKS74UB;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {350, 500};
		discreteDistanceInitIndex = 0;
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		class Library {
			libTextDesc = $STR_TGW_VIL_AKS74UB_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AKS74UB_SHORT;
		picture = "\ca\weapons\AK\Data\Equip\w_aks74un_ca.paa";
	};
	/*
	class Vil_AKS_74_UB_BS1 : Vil_AKS_74_UB {
		model = "\vilas_aks\vil_aks_74u_b_bs1";
		displayName = $STR_VIL_AKS74UB_BS1;
		picture = "\vilas_aks\ico\w_vil_aks74u_bs1_ca.paa";
		
		class BS1Muzzle : GP25Muzzle {
			displayName = $STR_VIL_DN_BS1;
			begin1[] = {"\vilas_aks\sounds\bs1_fire", db8, 1, 20};
			soundBegin[] = {"begin1", 1.0};
			reloadMagazineSound[] = {"\vilas_aks\sounds\bs1_reload", db5, 1, 10};
			magazines[] = {"vil_1Rnd_AP_BS1"};
		};
		
		muzzles[] = {this, "BS1Muzzle"};
		
		class Library {
			libTextDesc = $STR_VIL_BS1_LIB;
		};
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_VIL_AKS74UB_BS1_SHORT;
	};
	*/
	class vil_AK_74 : AK_74 {
		scope = public;
		model = "\vilas_aks\vil_ak_74";
		displayName = $STR_DN_AK74;
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AKSD", "vil_60Rnd_545x39_AK", "vil_45Rnd_545x39_AK"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		class GP30Muzzle : GP25Muzzle {
			displayName = $STR_TGW_VIL_GP30;
			weaponInfoType = "RscWeaponEmpty";
			//weaponInfoType = "RscWeaponZeroing";
			//discreteDistance[] = {50, 100, 150, 200, 250, 300, 350, 400;
			//discreteDistanceInitIndex = 3;
			begin1[] = {"\vilas_aks\sounds\gp30_fire1", 1.77828, 1, 100};
			soundBegin[] = {"begin1", 1};
		};
	};
	
	class vil_AK_74_gp : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_74_gp";
		displayName = $STR_TGW_VIL_AK74_GP25;
		muzzles[] = {"this", "GP25Muzzle"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		descriptionShort = $STR_TGW_VIL_AKS74GP25_SHORT;
	};
	
	class vil_AK_74_N : vil_AK_74 {
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		scope = public;
		model = "\vilas_aks\vil_ak_74_pn58";
		displayName = $STR_TGW_VIL_AK74NSPU;
		picture = "\vilas_aks\ico\ak74_n.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\vilas_aks\opt\optika_nspu2";
		class OpticsModes {
			class NSPU2 {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"MLB_NV1gen_grain","MLB_NV1GEN_blur"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				memoryPointCamera = "opticView";
				visionMode[] = {"NVG"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				cameraDir = "";
			};
		};
			
	};
	
	class vil_AKS_74 : vil_AK_74 {
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		dexterity = 1.78;
		scope = public;
		model = "\vilas_aks\vil_aks_74";
		picture = "\ca\weapons\AK\Data\Equip\w_aks74_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName = $STR_TGW_VIL_AKS74;
		class Library {
			libTextDesc = $STR_TGW_VIL_AKS74_LIB;
		};
	};
	
	class vil_AKS_74_gp : vil_AKS_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_aks_74_gp";
		picture = "\vilas_aks\ico\w_vil_aks74gp25_ca.paa";
		displayName = $STR_TGW_VIL_AKS74GP25;
		descriptionShort = $STR_TGW_VIL_AKS74GP25_SHORT;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		muzzles[] = {this, "GP25Muzzle"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			disabled = 0;
			libTextDesc = $STR_LIB_AK74_GL;
		};
	};
	
	class vil_AKS_74p : vil_AKS_74 {
		scope = public;
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_aks_74p";
		picture = "\vilas_aks\ico\aksp.paa";
		displayName = $STR_TGW_VIL_AKS74P;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};	 

	class vil_AKS_74p_45 : vil_AKS_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_aks_74p_45";
		picture = "\vilas_aks\ico\aksp.paa";
		displayName = $STR_TGW_VIL_AKS74P;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"vil_45Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AKSD"};
	};	 

	class vil_AK_74P : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_74p";
		picture = "\vilas_aks\ico\w_vil_ak74p_ca.paa";
		displayName = $STR_TGW_VIL_AK74P;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_AKS_74p_gp : vil_AKS_74_gp {
		scope = public;
		model = "\vilas_aks\vil_aks_74p_gp";
		picture = "\vilas_aks\ico\aksp_gl.paa";
		displayName = $STR_TGW_VIL_AKS74PGP25;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		displayNameShort = $STR_TGW_VIL_SN_AKS74PGP25;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_AK_74m : vil_AK_74 {
		scope = public;
		model = "\vilas_aks\vil_ak_74m";
		picture = "\vilas_aks\ico\ak74m.paa";
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		displayName = $STR_TGW_VIL_AK74M;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_AK_74M_N : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_74m_n";
		picture = "\vilas_aks\ico\w_vil_ak74m_nspu_ca.paa";
		displayName = $STR_TGW_VIL_AK74MNSPU;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\vilas_aks\opt\optika_nspu3";
		class OpticsModes {
			class NSPU3 {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"dkv_nspu_grain","dkv_nspu_blur"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				memoryPointCamera = "opticView";
				visionMode[] = {"NVG"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				cameraDir = "";
			};
   				class Ironsigts {
    				opticsID = 2;
    				useModelOptics = 0;
				opticsPPEffects[] = {};
    				opticsFlare = 0;
    				opticsDisablePeripherialVision = 0;
    				opticsZoomMin = 0.3;
    				opticsZoomMax = 0.9;
    				opticsZoomInit = 0.9;
    				memoryPointCamera = "eye";
    				distanceZoomMin = 300;
    				distanceZoomMax = 300;
    				discreteDistance[] = {100};
    				discreteDistanceInitIndex = 0;
    				visionMode[] = {};
			};
		};
};
	
	class vil_AK_74M_PSO : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_74m_pso";
		displayName = $STR_TGW_VIL_AK74M_PSO;
		picture = "\vilas_aks\ico\w_vil_ak74m_pso_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\ca\weapons\AK\pso_optics";
		class OpticsModes {
			class PSO {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur3"};
				opticsZoomInit = 0.063;
				opticsZoomMin = 0.063;
				opticsZoomMax = 0.063;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				cameraDir = "";
			};
   				class Ironsigts: PSO
   				{
    				opticsID = 2;
    				opticsPPEffects[] = {};
				useModelOptics = 0;
    				opticsFlare = 0;
    				opticsDisablePeripherialVision = 0;
    				opticsZoomMin = 0.3;
    				opticsZoomMax = 0.9;
    				opticsZoomInit = 0.9;
    				memoryPointCamera = "eye";
    				distanceZoomMin = 300;
    				distanceZoomMax = 300;
    				discreteDistance[] = {100};
    				discreteDistanceInitIndex = 0;
    				visionMode[] = {};
			};
		};
	};
	
	class vil_AK_74m_k : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_74m_k";
		picture = "\vilas_aks\ico\w_vil_ak74m_col_ca.paa";
		displayName = $STR_TGW_VIL_AK74MK;
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 0;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_AK_74m_EOT : vil_AK_74m {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		model = "\vilas_aks\vil_ak_74m_eot";
		picture = "\vilas_aks\ico\w_vil_ak74m_eot_ca.paa";
		displayName = $STR_VIL_AK74M_EOT;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	//needs pic
	class vil_AK_74m_EOT_Alfa : vil_AK_74m {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		model = "\vilas_aks\vil_ak_74m_eot_Alfa";
		picture = "\vilas_aks\ico\w_vil_ak74m_eot_alfa_ca.paa";
		displayName = $STR_VIL_AK74M_EOT_GRIP;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		
	};
	
	//needs pic
	class vil_AK_74m_EOT_FSB : vil_AK_74m {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		model = "\vilas_aks\vil_ak_74m_eot_FSB";
		picture = "\vilas_aks\ico\w_vil_ak74m_eot_ca.paa";
		displayName = $STR_VIL_AK74M_FSB;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AKSD", "vil_60Rnd_545x39_AK", "vil_45Rnd_545x39_AK"};	
		class Library {
			libTextDesc = $STR_VIL_AK74M_FSB_LIB;
		};
	};
	
	//needs pic
	class vil_AK_74m_EOT_FSB_45 : vil_AK_74m_EOT_FSB {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		model = "\vilas_aks\vil_ak_74m_eot_FSB_45";
		picture = "\vilas_aks\ico\w_vil_ak74m_eot_45_ca.paa";
		displayName = $STR_VIL_AK74M_FSB_RPK;
		magazines[] = {"vil_45Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AKSD", "vil_60Rnd_545x39_AK"};	
		class Library {
			libTextDesc = $STR_VIL_AK74M_RPK_LIB;
		};
	};
	
	//needs pic
	class vil_AK_74m_EOT_FSB_60 : vil_AK_74m_EOT_FSB {
		scope = public;
		model = "\vilas_aks\vil_ak_74m_eot_FSB_60";
		picture = "\vilas_aks\ico\w_vil_ak74m_eot_60_ca.paa";
		displayName = $STR_VIL_AK74M_FSB_QUAD;
		magazines[] = {"vil_60Rnd_545x39_AK", "30Rnd_545x39_AK", "30Rnd_545x39_AKSD", "vil_45Rnd_545x39_AK"};
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		class Library {
			libTextDesc = $STR_VIL_AK74M_HC_LIB;
		};
	};
	
	class vil_AK_74m_c : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_74m_c";
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 0;
		picture = "\vilas_aks\ico\w_vil_ak74m_kobra_ca.paa";
		displayName = $STR_TGW_VIL_AK74M_KOB;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_AK_74m_p29 : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_74m_p29";
		displayName = $STR_TGW_VIL_AK74M_P29;
		picture = "\vilas_aks\ico\w_vil_ak74m_1p29_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "\vilas_aks\opt\optika_1p29";
		class OpticsModes {
			class 1P29 {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				cameraDir = "";
			};
		};
	};
	
	class vil_AK_74m_gp_29 : vil_AK_74m_p29 {
		scope = public;
		model = "\vilas_aks\vil_ak_74m_gp_p29";
		displayName = $STR_TGW_VIL_AK74M_GL_P29;
		displayNameShort = $STR_TGW_VIL_SN_AK74M_GL_P29;
		muzzles[] = {this, "GP30Muzzle"};
		picture = "\vilas_aks\ico\w_vil_ak74mp29gl_ca.paa";
		descriptionShort = $STR_TGW_VIL_AKS74GP25_SHORT;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_AK_74m_gp : vil_AK_74m {
		scope = public;
		model = "\vilas_aks\vil_ak_74m_gp";
		displayName = $STR_TGW_VIL_AK74MGP30;
		muzzles[] = {this, "GP30Muzzle"};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		picture = "\vilas_aks\ico\ak74mgp30.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		descriptionShort = $STR_TGW_VIL_AKS74GP25_SHORT;
	};

	
	/*********************************************************
			Vilas Eastern Weapons AK-74 derrivatives
	**********************************************************/
	
	//needs pic
	class vil_type88_1 : vil_AK_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_type_881";
		picture = "\vilas_aks\ico\w_vil_type88_ca.paa";		//placeholder NK AK-74 pic
		displayName = $STR_VIL_NK_TYPE88;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_VIL_NK_TYPE88_LIB;
		};
		descriptionShort = $STR_TGW_VIL_AKS74GP25_SHORT;
	};
	
	class vil_PMI74S : vil_AKS_74 {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_rak74s";
		picture = "\vilas_aks\ico\rom_ak.paa";
		modes[] = {"FullAuto", "Burst", "Single"};
		displayName = $STR_VIL_PMI74S;
		class Burst : Burst {
			reloadTime = 0.0923;
			showToPlayer = true;
		};
		
		class Library {
			libTextDesc = $STR_VIL_PMI74_LIB;
		};
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_Rak74sgl : vil_PMI74S {
		scope = public;
		class Armory {
			disabled = 0;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_rak74sgl";
		displayName = $STR_VIL_PMI74AG40;
		class AG40Muzzle : GP25Muzzle {
			displayName = $STR_VIL_AG40;
			weaponInfoType = "RscWeaponEmpty";
			//weaponInfoType = "RscWeaponZeroing";
			//discreteDistance[] = {50, 100, 150, 200, 250, 300, 350, 400, 450};
			//discreteDistanceInitIndex = 5;
			magazines[] = {"vil_1Rnd_NGO74", "vil_FlareWhite_NGC74", "vil_FlareGreen_NGC74", "vil_FlareRed_NGC74", "vil_FlareYellow_NGC74"};
			reloadMagazineSound[] = {"\vilas_aks\sounds\ag40_reload", 0.0562341, 1, 10};
		};
		muzzles[] = {this, "AG40Muzzle"};
		
		picture = "\vilas_aks\ico\w_vil_pmigl_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		descriptionShort = $STR_DSS_AK74_GL;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
	};

	
	/*********************************************************
			Vilas Eastern Weapons AK-100 series
	**********************************************************/
	
	class vil_AK_101 : vil_NATO_AK {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = public;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\Data\Anim\AK.rtm"};
		model = "\vilas_aks\vil_ak_101";
		picture = "\vilas_aks\ico\w_vil_ak101_ca.paa";
		displayName = $STR_TGW_VIL_AK101;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		class Library {
			libTextDesc = $STR_TGW_VIL_AK101_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AK101_SHORT;
	};
	
	class vil_AK_103 : AK_47_M {
		scope = public;
		model = "\vilas_aks\vil_ak_103";
		displayName = $STR_TGW_VIL_AK103;
		picture = "\vilas_aks\ico\w_vil_ak103_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"30Rnd_762x39_AK47", "vil_40Rnd_762x39_AK47", "vil_30Rnd_762x39_AKSD", "vil_75Rnd_762x39_AK47"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;

		class Single : Single {
			dispersion = 0.00125;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
		};
		
		class Burst : Burst {
			dispersion = 0.00125;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
			showToPlayer = false;
		};
		
		class FullAuto : FullAuto {
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.00125;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
		};
	};
	
	class vil_AK_105 : AKS_74_U {
		scope = public;
		model = "\vilas_aks\vil_ak_105";
		displayName = $STR_TGW_VIL_AK105;
		picture = "\vilas_aks\ico\ak105.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AKSD", "vil_60Rnd_545x39_AK", "vil_45Rnd_545x39_AK"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		
		class Single : Single {
			dispersion = 0.00125;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class Burst : Burst {
			dispersion = 0.0025;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.05;
			showToPlayer = false;
		};
		class FullAuto : FullAuto {
			dispersion = 0.0025;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_AK102104105;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AK105_SHORT;
	};
	
	class Vil_AK_105_c : Vil_AK_105 {
		model = "\vilas_aks\vil_ak_105_c";
		displayName = $STR_TGW_VIL_AK105_KOBRA;
		picture = "\vilas_aks\ico\w_vil_ak105_kobra_ca.paa";
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_AK_107 : AK_107_kobra {
		scope = public;
		model = "\vilas_aks\vil_ak_107";
		displayName = $STR_TGW_VIL_AK107;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		picture = "\vilas_aks\ico\ak107.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AKSD", "vil_60Rnd_545x39_AK", "vil_45Rnd_545x39_AK"};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class Vil_AK_107_c : Vil_AK_107 {
		class Armory {
			disabled = 1;
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_ak_107_c";
		displayName = $STR_DN_AK_107_KOBRA;
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 0;
		picture = "\vilas_aks\ico\w_vil_ak107_kob_ca.paa";
	};
	
	
	/*********************************************************
			Vilas Eastern Weapons Marksman and Sniper Rifles
	**********************************************************/
	
	class vil_SVD_BASE : SVD {
		scope = private;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 800;
		maxRangeProbab = 0.01;
		weaponInfoType = "RscWeaponZeroing";
		class OpticsModes {
			class Scope {
				OpticsID = 1;
				UseModelOptics = 1;
				MemoryPointCamera = "opticView";
				opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur3"};
				OpticsFlare = true;
				OpticsDisablePeripherialVision = true;
				opticsZoomInit = 0.0623;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				VisionMode[] = {"Normal"};
				CameraDir = "";
			};
			
			class Ironsights {
				OpticsID = 2;
				UseModelOptics = 0;
				MemoryPointCamera = "Eye";
				OpticsPPEffects[] = {};
				OpticsFlare = false;
				OpticsDisablePeripherialVision = false;
				OpticsZoomMin = 0.25;
				OpticsZoomMax = 1.1;
				OpticsZoomInit = 0.5;
				DistanceZoomMin = 200;
				DistanceZoomMax = 200;
				VisionMode[] = {};
				CameraDir = "";
			};
		};
		class Library {
			libTextDesc = $STR_LIB_SVD;
		};
	};
	
	
	class vil_SVU_A : vil_SVD_BASE {
		scope = public;
		model = "\vilas_aks\vil_svu";
		picture = "\vilas_aks\ico\svu.paa";
		displayName = $STR_TGW_VIL_SVUA;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Bizon.rtm"};
		modes[] = { "Single", "FullAuto" };
		
		class Single :  SVD {
			displayName = $STR_DN_MODE_SEMIAUTO;
			begin1[] = {"\vilas_aks\sounds\svu_fire1", 1.77828, 1, 1000};
			reloadTime = 0.09;
			recoil = "recoil_single_primary_7outof10";
			recoilProne = "recoil_single_primary_prone_6outof10";
			dispersion = 0.00025;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		class FullAuto : Single {
			displayName = $STR_DN_MODE_FULLAUTO;
			autoFire=true;
			reloadTime = 0.09;
			ffCount = 30;
			recoil = "recoil_single_primary_7outof10";
			recoilProne = "recoil_single_primary_prone_6outof10";
			dispersion = 0.0005;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 30.0;
			aiRateOfFireDistance = 100;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_SVU_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_SVUA_SHORT;
	};
	
	class vil_SVU : vil_SVU_A {
		scope = public;
		model = "\vilas_aks\vil_svu";
		picture = "\vilas_aks\ico\svu.paa";
		displayName = $STR_TGW_VIL_SVU;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Bizon.rtm"};
		modes[] = { "Single"};
		class Single :  Single {
			displayName = "";
		};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_SVU_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_SVUA_SHORT;
	};

	class vil_PSL1 : vil_SVD_BASE {
		scope = public;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_psl";
		picture = "\vilas_aks\ico\psl_svd.paa";
		displayName = $STR_VIL_PSL;
		descriptionShort = $STR_VIL_PSL_SHORT;
		magazines[] = {"vil_10Rnd_PSL"};
		class Library {
			libTextDesc = $STR_VIL_PSL_LIB;
		};
	};
	
	class vil_M76 : vil_SVD_BASE {
		scope = public;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_m76";
		displayName = $STR_VIL_M76;
		descriptionShort = $STR_VIL_M76_SHORT;
		picture = "\vilas_aks\ico\m76_svd.paa";
		magazines[] = {"vil_10Rnd_Mauser"};
		class Library {
			libTextDesc = $STR_VIL_M76_LIB;
		};
	};
	
	class vil_M91 : vil_SVD_BASE {
		scope = public;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		model = "\vilas_aks\vil_m76";
		displayName = $STR_VIL_M91;
		descriptionShort = $STR_VIL_M76_SHORT;
		picture = "\vilas_aks\ico\w_vil_m91_ca.paa";
		class Library {
			libTextDesc = $STR_VIL_M91_LIB;
		};
	};
	
	class vil_SVD_63 : vil_SVD_BASE {
		scope = public;
		model = "\vilas_aks\vil_svd";
		displayName = $STR_TGW_VIL_SVD;
		displayNameShort = $STR_TGW_VIL_SN_SVD;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_SVD_N : vil_SVD_BASE {
		scope = public;
		model = "\vilas_aks\vil_svd_pn58";
		displayName = $STR_TGW_VIL_SVD_NSPU;
		displayNameShort = $STR_TGW_VIL_SN_SVD_NSPU;
		modelOptics = "\vilas_aks\opt\optika_nspu2";
		
		class OpticsModes : OpticsModes {
			class NSPU : Scope {
				opticsPPEffects[] = {"MLB_NV1gen_grain","MLB_NV1GEN_blur"};
				visionMode[] = {"NVG"};
				memoryPointCamera = "opticView";
				discreteDistance[] = {100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
				discreteDistanceInitIndex = 3;
				opticsZoomInit = 0.1;
				opticsZoomMin = 0.1;
				opticsZoomMax = 0.1;
			};
   			class Ironsigts{
    				opticsID = 2;
				opticsPPEffects[] = {};
    				useModelOptics = 0;
    				opticsFlare = 0;
    				opticsDisablePeripherialVision = 0;
    				opticsZoomMin = 0.3;
    				opticsZoomMax = 0.9;
    				opticsZoomInit = 0.9;
    				memoryPointCamera = "eye";
    				distanceZoomMin = 300;
    				distanceZoomMax = 300;
    				discreteDistance[] = {100};
    				discreteDistanceInitIndex = 0;
    				visionMode[] = {};
			};
		};
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 600;
		maxRangeProbab = 0.02;
		picture = "\vilas_aks\ico\svd_n.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_SVD_S : vil_SVD_63 {
		scope = public;
		model = "\vilas_aks\vil_svds";
		displayName = $STR_TGW_VIL_SVD_S;
		picture = "\vilas_aks\ico\svds.paa";
		displayNameShort = $STR_TGW_VIL_SN_SVD_S;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_SVD_M : vil_SVD_63 {
		scope = public;
		model = "\vilas_aks\vil_svdm";
		displayName = $STR_TGW_VIL_SVDM;
		picture = "\vilas_aks\ico\svdm.paa";
		displayNameShort = $STR_TGW_VIL_SN_SVDM;
		class Library {
			libTextDesc = $STR_TGW_VIL_SVDM_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_SVD_P21 : vil_SVD_M {
		scope = public;
		model = "\vilas_aks\vil_svdm_p21";
		displayName = $STR_TGW_VIL_SVDM_P21;
		displayNameShort = $STR_TGW_VIL_SN_SVDM_P21;
		picture = "\vilas_aks\ico\svdm21.paa";
		modelOptics = "\vilas_aks\opt\optika_1p21";
		class OpticsModes : OpticsModes {
			class 1P21 : Scope {
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
				discreteDistanceInitIndex = 2;
				opticsZoomInit = 0.1;
				opticsZoomMin = 0.033;
				opticsZoomMax = 0.1;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
		};
   			class Ironsigts: 1P21
   				{
    				opticsID = 2;
    				useModelOptics = 0;
    				opticsPPEffects[] = {};
				opticsFlare = 0;
    				opticsDisablePeripherialVision = 0;
    				opticsZoomMin = 0.3;
    				opticsZoomMax = 0.9;
    				opticsZoomInit = 0.9;
    				memoryPointCamera = "eye";
    				distanceZoomMin = 300;
    				distanceZoomMax = 300;
    				discreteDistance[] = {100};
    				discreteDistanceInitIndex = 0;
    				visionMode[] = {};
			};
		};
		
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 600;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.05;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_SVDK : vil_SVD_BASE {
		scope = public;
		model = "\vilas_aks\vil_svdk";
		displayName = $STR_VIL_SVDK;
		displayNameShort = $STR_VIL_SVDK;
		picture = "\vilas_aks\ico\w_vil_svdk_ca.paa";
		modelOptics = "\vilas_aks\opt\optika_1p69";
		class OpticsModes : OpticsModes {
			class Scope : Scope {
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				discreteDistance[] = {100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
				discreteDistanceInitIndex = 3;
				opticsZoomInit = 0.1;
				opticsZoomMin = 0.033;
				opticsZoomMax = 0.1;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
		};
   			class Ironsigts: Scope
   				{
    				opticsID = 2;
    				useModelOptics = 0;
    				opticsPPEffects[] = {};
				opticsFlare = 0;
    				opticsDisablePeripherialVision = 0;
    				opticsZoomMin = 0.3;
    				opticsZoomMax = 0.9;
    				opticsZoomInit = 0.9;
    				memoryPointCamera = "eye";
    				distanceZoomMin = 300;
    				distanceZoomMax = 300;
    				discreteDistance[] = {100};
    				discreteDistanceInitIndex = 0;
    				visionMode[] = {};
			};
		};
		minRange = 10;
		minRangeProbab = 0.1;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 700;
		maxRangeProbab = 0.01;
		begin1[] = {"\vilas_aks\sounds\svdk_fire1", 2.37828, 1.1, 1200};
		magazines[] = {"vil_10Rnd_SVDK"};
		class Library {
			libTextDesc = $STR_VIL_SVDK_LIB;
		};
		descriptionShort = $STR_VIL_SVDK_SHORT;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_SV_98 : vil_SVD_BASE {
		scope = public;
		model = "\vilas_aks\vil_sv98";
		displayName = $STR_TGW_VIL_SV98;
		picture = "\vilas_aks\ico\sv98_7.paa";
		modelOptics = "\vilas_aks\opt\optika_sv7";
		class OpticsModes : OpticsModes {
			class PKS7 : Scope {
				opticsDisablePeripherialVision = true;
				opticsZoomInit = 0.03557;
				opticsZoomMin = 0.03557;
				opticsZoomMax = 0.03557;
				distanceZoomMin = 250;
				distanceZoomMax = 250;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				discreteDistance[] = {100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
				discreteDistanceInitIndex = 3;	
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
			};
   				class Ironsigts: PKS7
   				{
    				opticsID = 2;
    				useModelOptics = 0;
    				opticsPPEffects[] = {};
				opticsFlare = 0;
    				opticsDisablePeripherialVision = 0;
    				opticsZoomMin = 0.3;
    				opticsZoomMax = 0.9;
    				opticsZoomInit = 0.9;
    				memoryPointCamera = "eye";
    				distanceZoomMin = 300;
    				distanceZoomMax = 300;
    				discreteDistance[] = {100};
    				discreteDistanceInitIndex = 0;
    				visionMode[] = {};
			};
		};
		magazines[] = {"vil_10Rnd_762x54_SV"};
		reloadSound[] = {"\vilas_aks\sounds\SV98_Bolt", db10, 1, 20};	
		begin1[] = {"\vilas_aks\sounds\sv98_fire1", 1.77828, 1, 1000};
		reloadTime = 1.778;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M24.rtm"};
		class Library {
			libTextDesc = $STR_TGW_VIL_SV98_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_SV98_SHORT;
	};
	
	class vil_SV_98_69 : vil_SV_98 {
		scope = public;
		model = "\vilas_aks\vil_sv98_69";
		displayName = $STR_TGW_VIL_SV98_P69;
		descriptionShort = $STR_TGW_VIL_SV98_SHORT;
		picture = "\vilas_aks\ico\sv98_69.paa";
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.02;
		modelOptics = "\vilas_aks\opt\optika_1p69";
		class OpticsModes : OpticsModes {
			class 1P69 : PKS7 {
				maxRangeProbab = 0.02;
				opticsZoomInit = 0.083;
				opticsZoomMin = 0.0249;
				opticsZoomMax = 0.083;
				distanceZoomMin = 200;
				distanceZoomMax = 600;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
			};
   			class Ironsigts: 1P69
   				{
    				opticsID = 2;
    				useModelOptics = 0;
    				opticsPPEffects[] = {};
				opticsFlare = 0;
    				opticsDisablePeripherialVision = 0;
    				opticsZoomMin = 0.3;
    				opticsZoomMax = 0.9;
    				opticsZoomInit = 0.9;
    				memoryPointCamera = "eye";
    				distanceZoomMin = 300;
    				distanceZoomMax = 300;
    				discreteDistance[] = {100};
    				discreteDistanceInitIndex = 0;
    				visionMode[] = {};
			};
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_SV_98_SD : vil_SV_98 {
		scope = public;
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		model = "\vilas_aks\vil_sv98sd";
		displayName = $STR_TGW_VIL_SV98_SD;
		minRange = 10;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 500;
		maxRangeProbab = 0.05;
		picture = "\vilas_aks\ico\w_vil_sv98_sd_ca.paa";
		begin1[] = {"\vilas_aks\sounds\sv98_sd_fire1", db18, 1, 250};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_SV98_SHORT;
	};
	
	
	
	/*********************************************************
			Vilas Eastern Weapons new assault rifles
	**********************************************************/
	
	class vil_Abakan : AK_107_kobra {
		scope = public;
		model = "\vilas_aks\vil_abakan";
		displayName = $STR_TGW_VIL_AN94;
		picture = "\vilas_aks\ico\an.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		descriptionShort = $STR_TGW_VIL_AN94_SHORT;
		modes[] = {"FullAuto", "Burst", "Single"};
		magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AKSD", "vil_45Rnd_545x39_AK", "vil_60Rnd_545x39_AK"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;

		class Single :  Mode_SemiAuto {
			begin1[] = {"\vilas_aks\sounds\abakan_shoot1", 1.77828, 1, 1000};
			begin2[] = {"\vilas_aks\sounds\abakan_shoot2", 1.77828, 1, 1000};
			begin3[] = {"\vilas_aks\sounds\abakan_shoot3", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 0.333, "begin2", 0.333, "begin3", 0.333};
			reloadTime = 0.09;
			recoil = "recoil_single_primary_2outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			dispersion = 0.001;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		
		class Burst : Mode_Burst {
			begin1[] = {"\vilas_aks\sounds\abakan_shoot1", 1.77828, 1, 1000};
			begin2[] = {"\vilas_aks\sounds\abakan_shoot2", 1.77828, 1, 1000};
			begin3[] = {"\vilas_aks\sounds\abakan_shoot3", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 0.333, "begin2", 0.333, "begin3", 0.333};
			soundBurst = 0;
			reloadTime = 0.04;
			ffCount = 2;
			burst=2;
			recoil = "recoil_single_primary_2outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.001;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\vilas_aks\sounds\abakan_shoot1", 1.77828, 1, 1000};
			begin2[] = {"\vilas_aks\sounds\abakan_shoot2", 1.77828, 1, 1000};
			begin3[] = {"\vilas_aks\sounds\abakan_shoot3", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 0.333, "begin2", 0.333, "begin3", 0.333};
			reloadTime = 0.09;
			ffCount = 30;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.001;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_AN94_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	
	class vil_Abakan_gp : vil_Abakan {
		scope = public;
		model = "\vilas_aks\vil_abakan_gp";
		displayName = $STR_TGW_VIL_AN94_GL;
		picture = "\vilas_aks\ico\an_gl.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AN94_GL_SHORT;
		muzzles[] = {this, "GP25Muzzle"};
	};
	
	class vil_Abakan_P29 : vil_Abakan {
		scope = public;
		model = "\vilas_aks\vil_abakan_p29";
		displayName = $STR_TGW_VIL_AN94_P29;
		modelOptics = "\vilas_aks\opt\optika_1p29";
		
		class OpticsModes {
			class 1P29 {
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsZoomInit = 0.1;
				opticsZoomMin = 0.1;
				opticsZoomMax = 0.1;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				weaponInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				cameraDir = "";
			};
		};
			
		picture = "\vilas_aks\ico\w_vil_an94_p29_ca.paa";
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
	};
	class vil_ak12 : AK_107_kobra{
		scope = 2;
		model = "\vilas_aks\vil_ak12.p3d";
		displayName = "AK-12";
		descriptionShort = $STR_TGW_VIL_AN94_SHORT;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\Mk48.rtm"};
		picture = "\vilas_aks\ico\w_vil_ak12_ca.paa";
		class Library {
			libTextDesc = "The AK-12 has external modifications, most of which are consistent with the modifications favoured by Russia’s specialist, professional military units: Picatinny rails—allowing the attachment of modular accessories, including advanced optical sight combinations, laser illuminators, flashlights, vertical foregrips, bipods and grenade launchers. An improved adjustable telescoping buttstock is also fitted. The rear sight has been moved from the front of the receiver to the rear, the combination selector lever/dust cover on the right side of the receiver has been replaced by a thumb-activated ambidextrous selector lever above both sides of the pistol grip, ambidextrous push-button magazine release, ambidextrous ejection port and reversible cocking handle above vertical foregrip. Firing modes include safe, semi, 3 round burst, and full auto. To improve accuracy, the rifle has a new muzzle brake and the barrel has improved rifling.";
	};
		};
	class vil_ak12_ap : vil_ak12{
	scope = public;
	model = "\vilas_aks\vil_ak12_ap.p3d";
	displayName = "AK-12 Aimpoint";
	picture = "\vilas_aks\ico\w_vil_ak12ap_ca.paa";
	class FlashLight
		{
			color[] = {0.9,0.9,0.7,0.9};
			ambient[] = {0.1,0.1,0.1,1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1,1,0.5};
			brightness = 0.1;
		};
};
	class vil_ak12_gp : vil_ak12{
	scope = public;
	model = "\vilas_aks\vil_ak12_gp.p3d";
	displayName = "AK-12 GL";
	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
	picture = "\vilas_aks\ico\w_vil_ak12gl_ca.paa";
	descriptionShort = $STR_TGW_VIL_AN94_GL_SHORT;
	muzzles[] = {this, "GP25Muzzle"};
	dexterity = 1.5;
		};

	class vil_AEK1 : AK_107_kobra {
		scope = public;
		model = "\vilas_aks\vil_aek";
		displayName = $STR_TGW_VIL_AEK971_EARLY;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		picture = "\vilas_aks\ico\aek.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modes[] = {"FullAuto", "Single"};

		class Single :  Single {
			reloadTime = 0.07;
			recoil = "recoil_single_primary_2outof10";
			recoilProne = "recoil_single_primary_prone_2outof10";
			dispersion = 0.002;
		};
		class Burst : Burst {
			soundBurst = 0;
			reloadTime = 0.07;
			ffCount = 3;
			recoil = "recoil_auto_primary_1outof10";
			recoilProne = "recoil_auto_primary_prone_1outof10";
			dispersion = 0.002;
		};
		class FullAuto : FullAuto {
			reloadTime = 0.07;
			ffCount = 30;
			recoil = "recoil_auto_primary_2outof10";
			recoilProne = "recoil_auto_primary_prone_1outof10";
			dispersion = 0.002;
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_AEK971_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AEK971_SHORT;
	};
	
	class vil_AEK2 : vil_AEK1 {
		scope = public;
		model = "\vilas_aks\vil_aek2";
		picture = "\vilas_aks\ico\w_vil_aek2_ca.paa";
		displayName = $STR_TGW_VIL_AEK971_LATE;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	
	class vil_AEK_GL : vil_AEK1 {
		scope = public;
		model = "\vilas_aks\vil_aek2_gp";
		displayName = $STR_TGW_VIL_AEK971_GL;
		descriptionShort = $STR_TGW_VIL_AEK971_GL_SHORT;
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		class Library {
			libTextDesc = $STR_LIB_AK74_GL;
		};
		picture = "\vilas_aks\ico\aek_gl.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		muzzles[] = {this, "GP25Muzzle"};
		dexterity = 1.5;
	};
	
	class vil_AeK_3 : vil_AKM_BASE {
		scope = public;
		model = "\vilas_aks\vil_aek973";
		picture = "\vilas_aks\ico\w_vil_aek973_ca.paa";
		displayName = $STR_TGW_VIL_AEK973_EARLY;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		
		class Single :  Single {
			reloadTime = 0.09;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion = 0.008;
		};
		class Burst : Burst {
			reloadTime = 0.09;
			recoil = "recoil_auto_primary_2outof10";
			recoilProne = "recoil_auto_primary_prone_2outof10";
			dispersion = 0.008;
		};
		class FullAuto : FullAuto {
			reloadTime = 0.09;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_2outof10";
			dispersion = 0.008;
		};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_AEK973_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AEK973_SHORT;
	};
	
	class vil_AeK_23 : vil_AeK_3 {
		scope = public;
		model = "\vilas_aks\vil_aek2973";
		displayName = $STR_TGW_VIL_AEK973_LATE;
		picture = "\vilas_aks\ico\w_vil_aek2973_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_AEK973_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AEK973_SHORT;
	};
	
	class vil_AeK_3_K : vil_AeK_3 {
		scope = public;
		model = "\vilas_aks\vil_aek973_k";
		weaponInfoType = "RscWeaponEmpty";
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 0;
		picture = "\vilas_aks\ico\w_vil_aek2_col_ca.paa";
		displayName = $STR_TGW_VIL_AEK973_COL;
		class Library {
			libTextDesc = $STR_TGW_VIL_AEK973_LIB;
		};
		class Armory {
			author = $STR_AUTHOR_VILAS;
		};
		descriptionShort = $STR_TGW_VIL_AEK973_SHORT;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
};


class CfgVehicles {

	class ReammoBox; //Extended

	class vil_RUammoBoxBasic70s  : ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "VIL RU/SOV basic weapons 70s";
		model = "\ca\weapons\AmmoBoxes\RUBasicAmmo.p3d";
		
		class TransportMagazines  {
			class _xx_VIL_20Rnd_9x18_aps  {
				magazine = "VIL_20Rnd_9x18_aps";
				count = 100;
			};
			class _xx_VIL_20Rnd_9x18_apsSD  {
				magazine = "VIL_20Rnd_9x18_apsSD";
				count = 50;
			};
			class _xx_8Rnd_9x18_Makarov  {
				magazine = "8Rnd_9x18_Makarov";
				count = 100;
			};
			class _xx_8Rnd_9x18_MakarovSD  {
				magazine = "8Rnd_9x18_MakarovSD";
				count = 50;
			};
			class _xx_30Rnd_545x39_AK  {
				magazine = "30Rnd_545x39_AK";
				count = 400;
			};
			class _xx_30Rnd_545x39_AKSD  {
				magazine = "30Rnd_545x39_AKSD";
				count = 100;
			};
			class _xx_vil_30Rnd_762x39_AKSD  {
				magazine = "vil_30Rnd_762x39_AKSD";
				count = 50;
			};
			class _xx_1Rnd_HE_GP25  {
				magazine = "1Rnd_HE_GP25";
				count = 80;
			};
			class _xx_FlareWhite_GP25  {
				magazine = "FlareWhite_GP25";
				count = 2;
			};
			class _xx_FlareGreen_GP25  {
				magazine = "FlareGreen_GP25";
				count = 2;
			};
			class _xx_FlareRed_GP25  {
				magazine = "FlareRed_GP25";
				count = 2;
			};
			class _xx_FlareYellow_GP25  {
				magazine = "FlareYellow_GP25";
				count = 2;
			};
			class _xx_30Rnd_762x39_AK47  {
				magazine = "30Rnd_762x39_AK47";
				count = 200;
			};
			class _xx_vil_10Rnd_762x39_SKS  {
				magazine = "vil_10Rnd_762x39_SKS";
				count = 50;
			};
			class _xx_HandGrenade_East  {
				magazine = "HandGrenade_East";
				count = 50;
			};
			class _xx_1Rnd_SmokeRed_GP25  {
				magazine = "1Rnd_SmokeRed_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeGreen_GP25  {
				magazine = "1Rnd_SmokeGreen_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeYellow_GP25  {
				magazine = "1Rnd_SmokeYellow_GP25";
				count = 2;
			};
			class _xx_1Rnd_Smoke_GP25  {
				magazine = "1Rnd_Smoke_GP25";
				count = 2;
			};
			class _xx_SmokeShellRed  {
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_SmokeShellGreen  {
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShellYellow  {
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_SmokeShell  {
				magazine = "SmokeShell";
				count = 5;
			};
		};
		
		class TransportWeapons  {
			class _xx_VIL_AKM  {
				weapon = "VIL_AKM";
				count = 4;
			};
			class _xx_VIL_AKM_GL  {
				weapon = "VIL_AKM_GL";
				count = 4;
			};
			class _xx_VIL_AKMS  {
				weapon = "VIL_AKMS";
				count = 4;
			};
			class _xx_VIL_AKMSB  {
				weapon = "VIL_AKMSB";
				count = 4;
			};
			class _xx_VIL_APS  {
				weapon = "VIL_APS";
				count = 4;
			};
			class _xx_VIL_APSSD  {
				weapon = "VIL_APSSD";
				count = 4;
			};
			class _xx_VIL_AKS_47  {
				weapon = "VIL_AKS_47";
				count = 4;
			};
			class _xx_VIL_AK_47  {
				weapon = "VIL_AK_47";
				count = 4;
			};
			class _xx_VIL_AK_47_49  {
				weapon = "VIL_AK_47_49";
				count = 4;
			};
			class _xx_VIL_SKS  {
				weapon = "VIL_SKS";
				count = 4;
			};
			class _xx_Makarov  {
				weapon = "Makarov";
				count = 4;
			};
			class _xx_MakarovSD  {
				weapon = "MakarovSD";
				count = 4;
			};
		};
	};

	class vil_RUweaponBoxSupport70s  : vil_RUammoBoxBasic70s {
		displayName = "VIL RU/SOV support weapons 70s";
		model = "\ca\weapons\AmmoBoxes\RUBasicWeapons.p3d";
		
		class TransportMagazines  {
			class _xx_75Rnd_762x39_AK47  {
				magazine = "vil_75Rnd_762x39_AK47";
				count = 80;
			};
			class _xx_VIL_PGO_PG7VL  {
				magazine = "VIL_PGO_PG7VL";
				count = 30;
			};
			class _xx_VIL_PGO_PG7VR  {
				magazine = "VIL_PGO_PG7VR";
				count = 10;
			};
			class _xx_PG7V  {
				magazine = "PG7V";
				count = 15;
			};
			class _xx_PG7VR  {
				magazine = "PG7VR";
				count = 5;
			};
			class _xx_PG7VL  {
				magazine = "PG7VL";
				count = 10;
			};
			class _xx_OG7  {
				magazine = "OG7";
				count = 10;
			};
			class _xx_VIL_SHMEL_FTW  {
				magazine = "VIL_SHMEL_FTW";
				count = 20;
			};
			class _xx_100Rnd_762x54_PK  {
				magazine = "100Rnd_762x54_PK";
				count = 100;
			};
			class _xx_vil_40Rnd_762x39_AK47  {
				magazine = "vil_40Rnd_762x39_AK47";
				count = 100;
			};
			class _xx_vil_45Rnd_545x39_AK  {
				magazine = "vil_45Rnd_545x39_AK";
				count = 100;
			};
			class _xx_10Rnd_762x54_SVD  {
				magazine = "10Rnd_762x54_SVD";
				count = 50;
			};
			class _xx_RPG18  {
				magazine = "RPG18";
				count = 20;
			};
			class _xx_Strela  {
				magazine = "Strela";
				count = 3;
			};
			class _xx_Mine  {
				magazine = "Mine";
				count = 10;
			};
			class _xx_PipeBomb  {
				magazine = "PipeBomb";
				count = 20;
			};
		};
		
		class TransportWeapons  {
			class _xx_VIL_RPG7V_PGO  {
				weapon = "VIL_RPG7V_PGO";
				count = 4;
			};
			class _xx_RPG7V  {
				weapon = "RPG7V";
				count = 3;
			};
			class _xx_VIL_PK  {
				weapon = "VIL_PK";
				count = 2;
			};
			class _xx_VIL_PKM  {
				weapon = "PK";
				count = 2;
			};
			class _xx_VIL_RPK  {
				weapon = "VIL_RPK";
				count = 4;
			};
			class _xx_VIL_SVD_63  {
				weapon = "VIL_SVD_63";
				count = 4;
			};
			class _xx_RPG18  {
				weapon = "RPG18";
				count = 4;
			};
			class _xx_Strela  {
				weapon = "Strela";
				count = 3;
			};
		};
	};
	
	class vil_RUammoBoxBasic80s90s  : ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "VIL RU/SOV basic weapons 80s and 90s";
		model = "\ca\weapons\AmmoBoxes\RUBasicAmmo.p3d";
		
		class TransportMagazines  {
			class _xx_75Rnd_762x39_AK47  {
				magazine = "vil_75Rnd_762x39_AK47";
				count = 80;
			};
			class _xx_8Rnd_9x18_Makarov  {
				magazine = "8Rnd_9x18_Makarov";
				count = 100;
			};
			class _xx_8Rnd_9x18_MakarovSD  {
				magazine = "8Rnd_9x18_MakarovSD";
				count = 50;
			};
			class _xx_30Rnd_545x39_AK  {
				magazine = "30Rnd_545x39_AK";
				count = 400;
			};
			class _xx_30Rnd_545x39_AKSD  {
				magazine = "30Rnd_545x39_AKSD";
				count = 100;
			};
			class _xx_1Rnd_HE_GP25  {
				magazine = "1Rnd_HE_GP25";
				count = 80;
			};
			class _xx_FlareWhite_GP25  {
				magazine = "FlareWhite_GP25";
				count = 2;
			};
			class _xx_FlareGreen_GP25  {
				magazine = "FlareGreen_GP25";
				count = 2;
			};
			class _xx_FlareRed_GP25  {
				magazine = "FlareRed_GP25";
				count = 2;
			};
			class _xx_FlareYellow_GP25  {
				magazine = "FlareYellow_GP25";
				count = 2;
			};
			class _xx_HandGrenade_East  {
				magazine = "HandGrenade_East";
				count = 50;
			};
			class _xx_1Rnd_SmokeRed_GP25  {
				magazine = "1Rnd_SmokeRed_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeGreen_GP25  {
				magazine = "1Rnd_SmokeGreen_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeYellow_GP25  {
				magazine = "1Rnd_SmokeYellow_GP25";
				count = 2;
			};
			class _xx_1Rnd_Smoke_GP25  {
				magazine = "1Rnd_Smoke_GP25";
				count = 2;
			};
			class _xx_SmokeShellRed  {
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_SmokeShellGreen  {
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShellYellow  {
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_SmokeShell  {
				magazine = "SmokeShell";
				count = 5;
			};
			class _xx_30Rnd_762x39_AK47  {
				magazine = "30Rnd_762x39_AK47";
				count = 200;
			};
			class _xx_vil_30Rnd_762x39_AKSD  {
				magazine = "vil_30Rnd_762x39_AKSD";
				count = 50;
			};
		};
		
		class TransportWeapons  {
			class _xx_VIL_AKM  {
				weapon = "VIL_AKM";
				count = 4;
			};
			class _xx_VIL_AKM_GL  {
				weapon = "VIL_AKM_GL";
				count = 4;
			};
			class _xx_VIL_AKMS  {
				weapon = "VIL_AKMS";
				count = 4;
			};
			class _xx_VIL_AKMSB  {
				weapon = "VIL_AKMSB";
				count = 4;
			};
			class _xx_VIL_AKS_74_U  {
				weapon = "VIL_AKS_74_U";
				count = 4;
			};
			class _xx_VIL_AKS_74_UN_kobra  {
				weapon = "VIL_AKS_74_UN_kobra";
				count = 4;
			};
			class _xx_VIL_AK_74  {
				weapon = "VIL_AK_74";
				count = 4;
			};
			class _xx_VIL_AK_74_N  {
				weapon = "VIL_AK_74_N";
				count = 4;
			};
			class _xx_VIL_AKS_74  {
				weapon = "VIL_AKS_74";
				count = 4;
			};
			class _xx_VIL_AKS_74_GP  {
				weapon = "VIL_AKS_74_GP";
				count = 4;
			};
			class _xx_VIL_AK_74P  {
				weapon = "VIL_AK_74P";
				count = 4;
			};
			class _xx_VIL_AKS_74P  {
				weapon = "VIL_AKS_74P";
				count = 4;
			};
			class _xx_VIL_AKS_74P_GP  {
				weapon = "VIL_AKS_74P_GP";
				count = 4;
			};
			class _xx_Makarov  {
				weapon = "Makarov";
				count = 4;
			};
			class _xx_MakarovSD  {
				weapon = "MakarovSD";
				count = 4;
			};
		};
	};
	
	class vil_RUweaponBoxSupport80s90s  : vil_RUammoBoxBasic70s {
		displayName = "VIL RU/SOV support weapons 80s and 90s";
		model = "\ca\weapons\AmmoBoxes\RUBasicWeapons.p3d";
	
		class TransportMagazines  {
			class _xx_VIL_PGO_PG7VL  {
				magazine = "VIL_PGO_PG7VL";
				count = 30;
			};
			class _xx_VIL_PGO_PG7VR  {
				magazine = "VIL_PGO_PG7VR";
				count = 10;
			};
			class _xx_PG7V  {
				magazine = "PG7V";
				count = 15;
			};
			class _xx_PG7VR  {
				magazine = "PG7VR";
				count = 5;
			};
			class _xx_PG7VL  {
				magazine = "PG7VL";
				count = 10;
			};
			class _xx_OG7  {
				magazine = "OG7";
				count = 10;
			};
			class _xx_VIL_SHMEL_FTW  {
				magazine = "VIL_SHMEL_FTW";
				count = 20;
			};
			class _xx_100Rnd_762x54_PK  {
				magazine = "100Rnd_762x54_PK";
				count = 100;
			};
			class _xx_vil_45Rnd_545x39_AK  {
				magazine = "vil_45Rnd_545x39_AK";
				count = 100;
			};
			class _xx_10Rnd_762x54_SVD  {
				magazine = "10Rnd_762x54_SVD";
				count = 50;
			};
			class _xx_VIL_PG29_HEAT  {
				magazine = "VIL_PG29_HEAT";
				count = 30;
			};
			class _xx_RPG18  {
				magazine = "RPG18";
				count = 20;
			};
			class _xx_Strela  {
				magazine = "Strela";
				count = 3;
			};
			class _xx_Mine  {
				magazine = "Mine";
				count = 10;
			};
			class _xx_PipeBomb  {
				magazine = "PipeBomb";
				count = 20;
			};
		};
		
		class TransportWeapons  {
			class _xx_VIL_RPG7V_PGO  {
				weapon = "VIL_RPG7V_PGO";
				count = 4;
			};
			class _xx_RPG7V  {
				weapon = "RPG7V";
				count = 3;
			};
			class _xx_VIL_RPO_A  {
				weapon = "VIL_RPO_A";
				count = 4;
			};
			class _xx_VIL_PKM_N  {
				weapon = "VIL_PKM_N";
				count = 1;
			};
			class _xx_VIL_PKM  {
				weapon = "PK";
				count = 2;
			};
			class _xx_VIL_RPK74  {
				weapon = "VIL_RPK74";
				count = 4;
			};
			class _xx_VIL_SVD_63  {
				weapon = "VIL_SVD_63";
				count = 4;
			};
			class _xx_VIL_SVD_N  {
				weapon = "VIL_SVD_N";
				count = 4;
			};
			class _xx_VIL_RPG29  {
				weapon = "VIL_RPG29";
				count = 4;
			};
			class _xx_RPG18  {
				weapon = "RPG18";
				count = 4;
			};
			class _xx_Strela  {
				weapon = "Strela";
				count = 3;
			};
		};
	};
	
	class vil_RUammoBoxBasic2000s  : ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "VIL RU modern basic weapons";
		model = "\ca\weapons\AmmoBoxes\RUBasicAmmo.p3d";
		
		class TransportMagazines  {
			class _xx_VIL_10Rnd_SVDK  {
				magazine = "vil_10Rnd_SVDK";
				count = 50;
			};
			class _xx_75Rnd_762x39_AK47  {
				magazine = "vil_75Rnd_762x39_AK47";
				count = 20;
			};
			class _xx_Vil_17rnd_9x19_pya  {
				magazine = "Vil_17rnd_9x19_pya";
				count = 100;
			};
			class _xx_8Rnd_9x18_Makarov  {
				magazine = "8Rnd_9x18_Makarov";
				count = 100;
			};
			class _xx_8Rnd_9x18_MakarovSD  {
				magazine = "8Rnd_9x18_MakarovSD";
				count = 50;
			};
			class _xx_30Rnd_545x39_AK  {
				magazine = "30Rnd_545x39_AK";
				count = 400;
			};
			class _xx_30Rnd_545x39_AKSD  {
				magazine = "30Rnd_545x39_AKSD";
				count = 100;
			};
			class _xx_60Rnd_545x39_AK  {
				magazine = "vil_60Rnd_545x39_AK";
				count = 80;
			};
			class _xx_8Rnd_B_Saiga12_74Slug  {
				magazine = "8Rnd_B_Saiga12_74Slug";
				count = 40;
			};
			class _xx_1Rnd_HE_GP25  {
				magazine = "1Rnd_HE_GP25";
				count = 80;
			};
			class _xx_FlareWhite_GP25  {
				magazine = "FlareWhite_GP25";
				count = 2;
			};
			class _xx_FlareGreen_GP25  {
				magazine = "FlareGreen_GP25";
				count = 2;
			};
			class _xx_FlareRed_GP25  {
				magazine = "FlareRed_GP25";
				count = 2;
			};
			class _xx_FlareYellow_GP25  {
				magazine = "FlareYellow_GP25";
				count = 2;
			};
			class _xx_HandGrenade_East  {
				magazine = "HandGrenade_East";
				count = 50;
			};
			class _xx_1Rnd_SmokeRed_GP25  {
				magazine = "1Rnd_SmokeRed_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeGreen_GP25  {
				magazine = "1Rnd_SmokeGreen_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeYellow_GP25  {
				magazine = "1Rnd_SmokeYellow_GP25";
				count = 2;
			};
			class _xx_1Rnd_Smoke_GP25  {
				magazine = "1Rnd_Smoke_GP25";
				count = 2;
			};
			class _xx_SmokeShellRed  {
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_SmokeShellGreen  {
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShellYellow  {
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_SmokeShell  {
				magazine = "SmokeShell";
				count = 5;
			};
		};
		
		class TransportWeapons  {
			class _xx_VIL_AK_74M  {
				weapon = "VIL_AK_74M";
				count = 4;
			};
			class _xx_VIL_AK_74M_C  {
				weapon = "VIL_AK_74M_C";
				count = 4;
			};
			class _xx_VIL_AK_74M_P29  {
				weapon = "VIL_AK_74M_P29";
				count = 4;
			};
			class _xx_VIL_AK_74M_GP  {
				weapon = "VIL_AK_74M_GP";
				count = 4;
			};
			class _xx_VIL_AK_105  {
				weapon = "VIL_AK_105";
				count = 4;
			};
			class _xx_VIL_AK_105_C  {
				weapon = "VIL_AK_105_C";
				count = 4;
			};
			class _xx_VIL_AK_107  {
				weapon = "VIL_AK_107";
				count = 4;
			};
			class _xx_VIL_AK_107_C  {
				weapon = "VIL_AK_107_C";
				count = 4;
			};
			class _xx_VIL_AEK1  {
				weapon = "VIL_AEK1";
				count = 4;
			};
			class _xx_VIL_AEK2  {
				weapon = "VIL_AEK2";
				count = 4;
			};
			class _xx_VIL_AEK_GL  {
				weapon = "VIL_AEK_GL";
				count = 4;
			};
			class _xx_Saiga12K  {
				weapon = "Saiga12K";
				count = 4;
			};
			class _xx_VIL_PYA  {
				weapon = "VIL_PYA";
				count = 4;
			};
			class _xx_Makarov  {
				weapon = "Makarov";
				count = 4;
			};
			class _xx_MakarovSD  {
				weapon = "MakarovSD";
				count = 4;
			};
			class _xx_VIL_SVDK  {
				weapon = "vil_SVDK";
				count = 4;
			};
		};
	};
	
	class vil_RUweaponBoxSupport2000s  : vil_RUammoBoxBasic70s {
		displayName = "VIL RU modern support weapons";
		model = "\ca\weapons\AmmoBoxes\RUBasicWeapons.p3d";
	
		class TransportMagazines  {
			class _xx_VIL_PGO_PG7VL  {
				magazine = "VIL_PGO_PG7VL";
				count = 30;
			};
			class _xx_VIL_PGO_PG7VR  {
				magazine = "VIL_PGO_PG7VR";
				count = 10;
			};
			class _xx_PG7V  {
				magazine = "PG7V";
				count = 15;
			};
			class _xx_PG7VR  {
				magazine = "PG7VR";
				count = 5;
			};
			class _xx_PG7VL  {
				magazine = "PG7VL";
				count = 10;
			};
			class _xx_OG7  {
				magazine = "OG7";
				count = 10;
			};
			class _xx_VIL_SHMEL_FTW  {
				magazine = "VIL_SHMEL_FTW";
				count = 20;
			};
			class _xx_100Rnd_762x54_PK  {
				magazine = "100Rnd_762x54_PK";
				count = 100;
			};
			class _xx_vil_45Rnd_545x39_AK  {
				magazine = "vil_45Rnd_545x39_AK";
				count = 100;
			};
			class _xx_10Rnd_762x54_SVD  {
				magazine = "10Rnd_762x54_SVD";
				count = 50;
			};
			class _xx_VIL_PG29_HEAT  {
				magazine = "VIL_PG29_HEAT";
				count = 30;
			};
			class _xx_RPG18  {
				magazine = "RPG18";
				count = 20;
			};
			class _xx_AT13  {
				magazine = "AT13";
				count = 1;
			};
			class _xx_Strela  {
				magazine = "Strela";
				count = 3;
			};
			class _xx_Igla  {
				magazine = "Igla";
				count = 1;
			};
			class _xx_Mine  {
				magazine = "Mine";
				count = 10;
			};
			class _xx_PipeBomb  {
				magazine = "PipeBomb";
				count = 20;
			};
		};
		
		class TransportWeapons  {
			class _xx_MetisLauncher  {
				weapon = "MetisLauncher";
				count = 2;
			};
			class _xx_VIL_RPG7V_PGO  {
				weapon = "VIL_RPG7V_PGO";
				count = 4;
			};
			class _xx_RPG7V  {
				weapon = "RPG7V";
				count = 3;
			};
			class _xx_VIL_RPO_A  {
				weapon = "VIL_RPO_A";
				count = 4;
			};
			class _xx_VIL_PKM_N  {
				weapon = "VIL_PKM_N";
				count = 1;
			};
			class _xx_VIL_PKM  {
				weapon = "PK";
				count = 2;
			};
			class _xx_VIL_PKP  {
				weapon = "VIL_PKP";
				count = 4;
			};
			class _xx_Pecheneg  {
				weapon = "Pecheneg";
				count = 4;
			};
			class _xx_VIL_RPK74M  {
				weapon = "VIL_RPK74M";
				count = 4;
			};
			class _xx_VIL_RPK74M_N  {
				weapon = "VIL_RPK74M_N";
				count = 4;
			};
			class _xx_VIL_SVD_N  {
				weapon = "VIL_SVD_N";
				count = 4;
			};
			class _xx_VIL_SVD_M  {
				weapon = "VIL_SVD_M";
				count = 4;
			};
			class _xx_VIL_SVU  {
				weapon = "VIL_SVU";
				count = 4;
			};
			class _xx_VIL_SVD_P21  {
				weapon = "VIL_SVD_P21";
				count = 4;
			};
			class _xx_VIL_RPG29  {
				weapon = "VIL_RPG29";
				count = 4;
			};
			class _xx_Igla  {
				weapon = "Igla";
				count = 1;
			};
		};
	};
	
	class vil_RUweaponBoxSpeznas  : vil_RUammoBoxBasic70s {
		displayName = "VIL RU/SOV Speznas weapons";
		model = "\ca\weapons\AmmoBoxes\RUSpecialWeapons.p3d";
		
		class TransportMagazines  {
			class _xx_8Rnd_9x18_MakarovSD  {
				magazine = "8Rnd_9x18_MakarovSD";
				count = 50;
			};
			class _xx_Vil_17rnd_9x19_pya  {
				magazine = "Vil_17rnd_9x19_pya";
				count = 50;
			};
			class _xx_10Rnd_9x39_SP5_VSS  {
				magazine = "10Rnd_9x39_SP5_VSS";
				count = 50;
			};
			class _xx_20Rnd_9x39_SP5_VSS  {
				magazine = "20Rnd_9x39_SP5_VSS";
				count = 50;
			};
			class _xx_VIL_10Rnd_9x39_SP6_VSS  {
				magazine = "VIL_10Rnd_9x39_SP6_VSS";
				count = 50;
			};
			class _xx_VIL_20Rnd_9x39_SP6_VAL  {
				magazine = "VIL_20Rnd_9x39_SP6_VAL";
				count = 50;
			};
			class _xx_VIL_20Rnd_9x39_SP6_OC  {
				magazine = "VIL_20Rnd_9x39_SP6_OC";
				count = 50;
			};
			class _xx_30Rnd_545x39_AK  {
				magazine = "30Rnd_545x39_AK";
				count = 200;
			};
			class _xx_60Rnd_545x39_AK  {
				magazine = "vil_60Rnd_545x39_AK";
				count = 80;
			};
			class _xx_30Rnd_545x39_AKSD  {
				magazine = "30Rnd_545x39_AKSD";
				count = 50;
			};
			class _xx_VIL_10Rnd_762x54_SV  {
				magazine = "VIL_10Rnd_762x54_SV";
				count = 50;
			};
			class _xx_64Rnd_9x19_SD_Bizon  {
				magazine = "64Rnd_9x19_SD_Bizon";
				count = 40;
			};
			class _xx_5Rnd_127x108_KSVK  {
				magazine = "5Rnd_127x108_KSVK";
				count = 20;
			};
			class _xx_1Rnd_HE_GP25  {
				magazine = "1Rnd_HE_GP25";
				count = 80;
			};
			class _xx_FlareWhite_GP25  {
				magazine = "FlareWhite_GP25";
				count = 2;
			};
			class _xx_FlareGreen_GP25  {
				magazine = "FlareGreen_GP25";
				count = 2;
			};
			class _xx_FlareRed_GP25  {
				magazine = "FlareRed_GP25";
				count = 2;
			};
			class _xx_FlareYellow_GP25  {
				magazine = "FlareYellow_GP25";
				count = 2;
			};
			class _xx_HandGrenade_East  {
				magazine = "HandGrenade_East";
				count = 50;
			};
			class _xx_1Rnd_SmokeRed_GP25  {
				magazine = "1Rnd_SmokeRed_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeGreen_GP25  {
				magazine = "1Rnd_SmokeGreen_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeYellow_GP25  {
				magazine = "1Rnd_SmokeYellow_GP25";
				count = 2;
			};
			class _xx_1Rnd_Smoke_GP25  {
				magazine = "1Rnd_Smoke_GP25";
				count = 2;
			};
			class _xx_SmokeShellRed  {
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_SmokeShellGreen  {
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShellYellow  {
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_SmokeShell  {
				magazine = "SmokeShell";
				count = 5;
			};
			class _xx_Mine  {
				magazine = "Mine";
				count = 10;
			};
			class _xx_PipeBomb  {
				magazine = "PipeBomb";
				count = 20;
			};
			class _xx_VIL_10Rnd_SVDK  {
				magazine = "vil_10Rnd_SVDK";
				count = 50;
			};
		};
		
		class TransportWeapons  {
			class _xx_VIL_SVDK  {
				weapon = "vil_SVDK";
				count = 4;
			};
			class _xx_VIL_VSS_PSO  {
				weapon = "VIL_VSS_PSO";
				count = 4;
			};
			class _xx_VIL_VSS_N  {
				weapon = "VIL_VSS_N";
				count = 4;
			};
			class _xx_VIL_VAL  {
				weapon = "VIL_VAL";
				count = 2;
			};
			class _xx_VIL_VAL_C  {
				weapon = "VIL_VAL_C";
				count = 4;
			};
			class _xx_VIL_VAL_N  {
				weapon = "VIL_VAL_N";
				count = 4;
			};
			class _xx_VIL_Groza_HG  {
				weapon = "VIL_Groza_HG";
				count = 4;
			};
			class _xx_VIL_Groza_SC  {
				weapon = "VIL_Groza_SC";
				count = 4;
			};
			class _xx_VIL_Groza_GL  {
				weapon = "VIL_Groza_GL";
				count = 4;
			};
			class _xx_VIL_Groza_SD  {
				weapon = "VIL_Groza_SD";
				count = 4;
			};
			class _xx_VIL_Vikhr  {
				weapon = "VIL_Vikhr";
				count = 4;
			};
			class _xx_VIL_9a91  {
				weapon = "VIL_9a91";
				count = 4;
			};
			class _xx_VIL_Abakan  {
				weapon = "VIL_Abakan";
				count = 4;
			};
			class _xx_VIL_Abakan_GP  {
				weapon = "VIL_Abakan_GP";
				count = 4;
			};
			class _xx_VIL_SV_98  {
				weapon = "VIL_SV_98";
				count = 4;
			};
			class _xx_VIL_SV_98_69  {
				weapon = "VIL_SV_98_69";
				count = 4;
			};
			class _xx_bizon_silenced  {
				weapon = "bizon_silenced";
				count = 4;
			};
			class _xx_ksvk  {
				weapon = "ksvk";
				count = 2;
			};
			class _xx_VIL_PYA  {
				weapon = "VIL_PYA";
				count = 4;
			};
			class _xx_MakarovSD  {
				weapon = "MakarovSD";
				count = 4;
			};
		};
	};
	
	class vil_MiddleEastweaponBox  : vil_RUammoBoxBasic70s {
		displayName = "VIL Middle East weapons";
		model = "\ca\weapons\AmmoBoxes\LocalBasicAmmo.p3d";
		
		class TransportMagazines  {
			class _xx_8Rnd_9x18_Makarov  {
				magazine = "8Rnd_9x18_Makarov";
				count = 100;
			};
			class _xx_1Rnd_HE_GP25  {
				magazine = "1Rnd_HE_GP25";
				count = 80;
			};
			class _xx_FlareWhite_GP25  {
				magazine = "FlareWhite_GP25";
				count = 2;
			};
			class _xx_FlareGreen_GP25  {
				magazine = "FlareGreen_GP25";
				count = 2;
			};
			class _xx_FlareRed_GP25  {
				magazine = "FlareRed_GP25";
				count = 2;
			};
			class _xx_FlareYellow_GP25  {
				magazine = "FlareYellow_GP25";
				count = 2;
			};
			class _xx_30Rnd_762x39_AK47  {
				magazine = "30Rnd_762x39_AK47";
				count = 200;
			};
			class _xx_vil_10Rnd_762x39_SKS  {
				magazine = "vil_10Rnd_762x39_SKS";
				count = 50;
			};
			class _xx_HandGrenade_East  {
				magazine = "HandGrenade_East";
				count = 50;
			};
			class _xx_1Rnd_SmokeRed_GP25  {
				magazine = "1Rnd_SmokeRed_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeGreen_GP25  {
				magazine = "1Rnd_SmokeGreen_GP25";
				count = 2;
			};
			class _xx_1Rnd_SmokeYellow_GP25  {
				magazine = "1Rnd_SmokeYellow_GP25";
				count = 2;
			};
			class _xx_1Rnd_Smoke_GP25  {
				magazine = "1Rnd_Smoke_GP25";
				count = 2;
			};
			class _xx_SmokeShellRed  {
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_SmokeShellGreen  {
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShellYellow  {
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_SmokeShell  {
				magazine = "SmokeShell";
				count = 5;
			};
		};
		
		class TransportWeapons  {
			class _xx_VIL_AKM  {
				weapon = "VIL_AKM";
				count = 4;
			};
			class _xx_VIL_AKM_GL  {
				weapon = "VIL_AKM_GL";
				count = 4;
			};
			class _xx_VIL_AKMS  {
				weapon = "VIL_AKMS";
				count = 4;
			};
			class _xx_VIL_AKS_47  {
				weapon = "VIL_AKS_47";
				count = 4;
			};
			class _xx_VIL_AK_47  {
				weapon = "VIL_AK_47";
				count = 4;
			};
			class _xx_VIL_AK_47_49  {
				weapon = "VIL_AK_47_49";
				count = 4;
			};
			class _xx_VIL_SKS  {
				weapon = "VIL_SKS";
				count = 4;
			};
			class _xx_Makarov  {
				weapon = "Makarov";
				count = 4;
			};
			class _xx_VIL_M70  {
				weapon = "VIL_M70";
				count = 4;
			};
			class _xx_VIL_AMD  {
				weapon = "VIL_AMD";
				count = 4;
			};
			class _xx_VIL_PMI  {
				weapon = "VIL_PMI";
				count = 4;
			};
			class _xx_VIL_MPi  {
				weapon = "VIL_MPi";
				count = 4;
			};
		};
	};
};
