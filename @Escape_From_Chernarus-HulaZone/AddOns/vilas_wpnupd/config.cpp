#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

class CfgPatches {
	class Vilas_Weapons_Update {
		units[] = {Vil_RPO_A_USED_TUBE_XENO, Vil_RPG22_USED_TUBE_XENO, Vil_RPG26_USED_TUBE_XENO};
		weapons[] = {Vil_RPO_A_USED_XENO,Vil_RPG22_USED_XENO,Vil_RPG26_USED_XENO};
		requiredVersion = 1.54;
		requiredAddons[] = {"VILAS_RW_Forces", "VILAS_WWP", "inko_disposable_oa", "CAWeapons_E", "CAWeapons", "CAWeapons_E_AK", "CAWeapons_E_fnfal"};
		version = 2010-09-21;
		author[] = {"Xeno426"};
		authorUrl = "http://thegamewardens.com/";
		fileName = "Vilas_WpnUpd.pbo";		
	};
};

class CfgAddons {
	class Vilas_Weapons_Update {
		list[] = {"Vilas Weapons Mod Update"};
	};
};

class cfgAmmo {
	class BulletBase;	// External class reference
	class Vil_B_9x39_SP6NS;	// External class reference
	class R_SMAW_HEAA;	// External class reference

	class VIL_FFV551_AT : R_SMAW_HEAA {
		hit = 400;
		indirectHit = 10;
		indirectHitRange = 1;
		model = "\ca\weapons\AT1";
		maxSpeed = 918;	// max speed on level road, km/h
		//sideAirFriction = 0.18;
		//initSpeed = 255;
		initTime = 0.0;
		fuseDistance = 10;
		thrust = 510;
		timeToLive = 6;
		thrustTime = 1.0;
		cost = 600;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 2;
	};
	
	class VIL_FFV502_HEDP : VIL_FFV551_AT {
		hit = 130;
		indirectHit = 40;
		indirectHitRange = 12;
		maxSpeed = 828;	// max speed on level road, km/h
		//sideAirFriction = 20.28;
		//airFriction = 20.002751;
		//initSpeed = 230;
		initTime = 0.0;
		fuseDistance = 20;
		thrust = 910;
		timeToLive = 6;
		thrustTime = 0.5;
		model = "\ca\weapons\AT1";
		cost = 200;
		whistleDist = 24;
	};
	
	class Vil_B_9x39_PAB9 : Vil_B_9x39_SP6NS {
		//hit = 12;
		typicalSpeed = 300;
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
};

class CfgMagazines {

	class CA_Magazine;	// External class reference
	class vil_RPG22;	// External class reference
	class vil_RPG26;	// External class reference
	class Vil_SHMEL_FTW;	// External class reference	

	class PG7V;	// External class reference	
	class 30Rnd_545x39_AK;	// External class reference
	
	class Vil_CG_84 : PG7V {   //Vil_CG_FFV551
		model = "\vilas_wwp\vil_cg84t";
		type = 2 * 		256;
		modelSpecial = "\vilas_wwp\vil_cg84t";
		displayName = $STR_TGW_VIL_MN_FFV551;
		displayNameShort = $STR_TGW_VIL_SN_FFV551;
		ammo =  VIL_FFV551_AT;
		picture = "\Vilas_WpnUpd\icon\m_FFV551_ca.paa";
		initSpeed = 255;
		descriptionShort = $STR_TGW_VIL_MS_FFV551;
	};
	
	class Vil_CG_FFV502 : Vil_CG_84 {
		displayName = $STR_TGW_VIL_MN_FFV502;
		displayNameShort = $STR_TGW_VIL_SN_FFV502;
		ammo =  VIL_FFV502_HEDP;
		initSpeed = 230;
		picture = "\Vilas_WpnUpd\icon\m_FFV502_ca.paa";
		descriptionShort = $STR_TGW_VIL_MS_FFV502;
	};
	
	class Vil_PGO_PG16 : PG7V {
		displayName = "$STR_TGW_VIL_MN_PG16";
		displayNameShort = $STR_TGW_VIL_SN_PG16;
		descriptionShort = "$STR_TGW_VIL_MS_PG16";
	};
	
	class Vil_RPG22_XENO: vil_RPG22 {
		inko_disposable = 1;
		model = "";
		displayName = $STR_TGW_VIL_MN_PG22;
		displayNameShort = $STR_TGW_VIL_SN_PG22;
		descriptionShort = $STR_TGW_VIL_MS_PG22;
	};
	class Vil_RPG26_XENO : vil_RPG26 {
		inko_disposable = 1;
		model = "";
		displayName = $STR_TGW_VIL_MN_PG26;
		displayNameShort = $STR_TGW_VIL_SN_PG26;
		descriptionShort = $STR_TGW_VIL_MS_PG26;
	};
	class Vil_PG29_HEAT: PG7V {
		displayName = $STR_TGW_VIL_MN_PG29;
		displayNameShort = $STR_TGW_VIL_SN_PG29;
		descriptionShort = $STR_TGW_VIL_MS_PG29;
	};
	class Vil_RPO_A_XENO : Vil_SHMEL_FTW {
		inko_disposable = 1;
		model = "";
		displayName = $STR_TGW_VIL_MN_RPOA;
		displayNameShort = $STR_TGW_VIL_SN_RPOA;
		descriptionShort = $STR_TGW_VIL_MS_RPOA;
	};
	
	class Vil_PGO_PG7T : PG7V {
		displayName = "$STR_TGW_VIL_MN_PG7T";
		picture = "\Vilas_WpnUpd\Icon\m_tbg7_ca.paa";
		displayNameShort = $STR_TGW_VIL_SN_PG7T;
		descriptionShort = "$STR_TGW_VIL_MS_PG7T";
	};
	
	class Vil_PGOD_PG7T : PG7V {
		displayName = $STR_TGW_VIL_MN_PG7T;
		picture = "\Vilas_WpnUpd\Icon\m_tbg7_ca.paa";
		displayNameShort = $STR_TGW_VIL_SN_PG7T;
		descriptionShort = $STR_TGW_VIL_MS_PG7T;
	};
	
	
  	class INKO_RPG18_USED;	// External class reference	
	class Vil_RPO_A_USED_XENO : INKO_RPG18_USED  { 
		 scope = protected;
		 count = 0;
		 type = VSoft;
		 inko_disposable = 0;
		 displayName = $STR_TGW_VIL_RPOA_USED;
	};
	class Vil_RPG22_USED_XENO : INKO_RPG18_USED  {
		scope = protected;
		count = 0;
		type = VSoft;
		inko_disposable = 0;
		displayName = $STR_TGW_VIL_RPG22_USED;
	};
	class Vil_RPG26_USED_XENO : INKO_RPG18_USED  {
		scope = protected;
		count = 0;
		type = VSoft;
		inko_disposable = 0;
		displayName = $STR_TGW_VIL_RPG26_USED;
	};
	
	class 30Rnd_762x39_AK47;	// External class reference	
	class vil_75Rnd_762x39_RPK : 30Rnd_762x39_AK47 {
		count = 75;
		type = 2*		256;
		picture = "\CA\weapons\AK\data\equip\M_RPK_74_CA.paa";
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		displayName = "$STR_TGW_VIL_M_75Rnd_762x39_RPK";
		descriptionShort = "$STR_TGW_VIL_M_75Rnd_762x39_RPK_SHORT";
	};
	
	class vil_20Rnd_762x51_G3 : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_G3;
		picture = "\Vilas_WpnUpd\icon\m_g3_ca.paa";
		descriptionShort = $STR_TGW_VIL_MS_G3;
	};
	
	class vil_bhp_mag : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_BHP;
		count = 12;
		descriptionShort = $STR_TGW_VIL_MS_BHP;
	};
	
	class vil_usp45_mag : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_USP45;
		descriptionShort = $STR_TGW_VIL_MS_USP45;
	};
	class vil_usp45SD_mag : vil_usp45_mag {
		displayName = $STR_TGW_VIL_MN_USP45SD;
		descriptionShort = $STR_TGW_VIL_MS_USP45SD;
	};
	
	class Vil_35Rnd_556x45_G : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_GALIL;
		descriptionShort = $STR_TGW_VIL_MS_GALIL;
	};
	
	class Vil_50Rnd_556x45_G : Vil_35Rnd_556x45_G {
		displayName = "$STR_TGW_VIL_M_50Rnd_556x45_G";
		count = 50;
		tracersEvery = 3;
		lastRoundsTracer = 3;
		nameSound = "mgun";
		descriptionShort = "$STR_TGW_VIL_M_50Rnd_556x45_G_SHORT";
	};
		
	class Vil_30Rnd_556x45_HK : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_HK33;
		descriptionShort = $STR_TGW_VIL_MS_HK33;
	};
	
	class Vil_20Rnd_556x45_IN : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_20RN_IN;
		descriptionShort = $STR_TGW_VIL_MS_20RN_IN;
	};

	class Vil_30Rnd_556x45_IN : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_30RN_IN;
		descriptionShort = $STR_TGW_VIL_MS_30RN_IN;
	};
	
	class Vil_20Rnd_556x45_SG : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_SG540;
		descriptionShort = $STR_TGW_VIL_MS_SG540;
	};
	
	class vil_20Rnd_762x51_SG : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_SG542;
		descriptionShort = $STR_TGW_VIL_MS_SG542;
	};
	
	class vil_20Rnd_9x18_aps : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_APS;
		descriptionShort = $STR_TGW_VIL_MS_APS;
	};
	
	class vil_20Rnd_9x18_apsSD : vil_20Rnd_9x18_aps {
		displayName = $STR_TGW_VIL_MN_APB;
		descriptionShort = $STR_TGW_VIL_MS_APB;
	};
	
	class vil_10Rnd_9x39_SP6_VSS : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_SP6VSS;
		descriptionShort = $STR_TGW_VIL_MS_SP6VSS;
	};

	class vil_20Rnd_9x39_SP6_VAL : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_SP6VAL;
		descriptionShort = $STR_TGW_VIL_MS_SP6VAL;
	};

	class vil_20Rnd_9x39_SP6ns_OC : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_PAB9;
		descriptionShort = $STR_TGW_VIL_MS_PAB9;
		ammo = "vil_B_9x39_PAB9";
	};
	
	class vil_20Rnd_9x39_SP6_OC : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_SP6OC;
		displayNameShort = $STR_EP1_SN_SD;
		descriptionShort = $STR_TGW_VIL_MS_SP6OC;
	};
	
	class vil_45Rnd_545x39_AK : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_RPK74;
		descriptionShort = $STR_TGW_VIL_MS_RPK74;
	};
	
	class VIL_30Rnd_556x45_AK : CA_Magazine {
		//displayName = $STR_DN_30RND_AK;
		displayName = $STR_TGW_VIL_MN_AK101;
		descriptionShort = $STR_TGW_VIL_MS_AK101;
	};
	
	class vil_60Rnd_545x39_AK : CA_Magazine {
		displayName = $STR_TGW_VIL_M_60Rnd_545x39_RPK74;
		descriptionShort = $STR_TGW_VIL_M_60Rnd_545x39_RPK74_SHORT;
	};
	
	class vil_17Rnd_9x19_PYA : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_PYA;
		initSpeed = 460;
		descriptionShort = $STR_TGW_VIL_MS_PYA;
	};
	
	class vil_30Rnd_762x39_AKSD : 30Rnd_545x39_AK {
		displayName = $STR_TGW_VIL_MN_AKSD;
		displayNameShort = $STR_EP1_SN_SD;
		ammo = "B_762x39_SD";
		descriptionShort = $STR_TGW_VIL_MS_AKSD;
	};
	
	class vil_40Rnd_762x39_AK47 : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_RPK47;
		descriptionShort = $STR_TGW_VIL_MS_RPK47;
	};
	
	class vil_10Rnd_762x39_SKS : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_SKS;
		picture = "\Vilas_WpnUpd\icon\M_SKS_CA.paa";
		descriptionShort = $STR_TGW_VIL_MS_SKS;
	};
	
	class vil_10Rnd_762x54_SV : CA_Magazine {
		displayName = $STR_TGW_VIL_MN_SV98;
		descriptionShort = $STR_TGW_VIL_MS_SV98;
	};
	
};

class Mode_SemiAuto;	// External class reference	
class Mode_Burst;	// External class reference	
class Mode_FullAuto;	// External class reference	

class CfgWeapons {

	class Rifle;	// External class reference	
	class GrenadeLauncher;	// External class reference
	class RPG7V;	// External class reference	
	class M136;	// External class reference	
	
	class M16_base : Rifle {
		class M203Muzzle;	// External class reference	
		class Burst;	// External class reference	
	};
	
	class M4A1 : M16_base {
		class Burst : Burst {
			begin1[] = {"ca\sounds\weapons\rifles\M4A_single1", 1.77828, 1, 1000};
			begin2[] = {"ca\sounds\weapons\rifles\M4A_single2", 1.77828, 1, 1000};
		};
	};	// External class reference	
	class M4A1_Aim;	// External class reference	
	class M4A1_HWS_GL;	// External class reference	
	class G36a;	// External class reference	
	class G36c;	// External class reference	
	class INKO_RPG18_USED;	// External class reference	

	// INKO Disposable Launcher START	
	class Vil_RPO_A : RPG7V {
		displayName = $STR_TGW_VIL_RPOA;
		model = "\vilas_aks\vil_rpo_a";
		modelSpecial = "\vilas_aks\vil_rpo_a";
		inko_disposable = 1;
		inko_disposable_used = Vil_RPO_A_USED_XENO;
		inko_disposable_tube = Vil_RPO_A_USED_TUBE_XENO;
		magazines[] = {"Vil_RPO_A_XENO"};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_RPOA_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_RPOA_SHORT;
	};
	class vilas_rpg22 : m136 {
		picture = "\Vilas_WpnUpd\icon\w_vil_rpg22_ca.paa";
		displayName = $STR_TGW_VIL_RPG22;
		model = "\vilas_aks\vil_rpg_22_closed";
		modelSpecial = "\vilas_aks\vil_rpg_22";
		inko_disposable = 1;
		inko_disposable_used = Vil_RPG22_USED_XENO;
		inko_disposable_tube = Vil_RPG22_USED_TUBE_XENO;
		sound[] = {"\Vilas_WpnUpd\sounds\RPG22s", db20, 1, 1300};
		reloadMagazineSound[] = {"\Vilas_WpnUpd\sounds\RPG18Reload", 0.000316228, 1, 20};
		magazines[] = {"Vil_RPG22_XENO"};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_RPG22_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_RPG22_SHORT;
	};
	class vilas_rpg26 : m136 {
		picture = "\Vilas_WpnUpd\icon\w_vil_rpg26_ca.paa";
		displayName = $STR_TGW_VIL_RPG26;
		model = "\vilas_aks\vil_rpg_26";
		modelSpecial = "\vilas_aks\vil_rpg_26_closed";
		inko_disposable = 1;
		inko_disposable_used = Vil_RPG26_USED_XENO;
		inko_disposable_tube = Vil_RPG26_USED_TUBE_XENO;
		sound[] = {"\Vilas_WpnUpd\sounds\RPG27s", db20, 1, 1300};
		reloadMagazineSound[] = {"\Vilas_WpnUpd\sounds\RPG18Reload", 0.000316228, 1, 20};
		magazines[] = {"Vil_RPG26_XENO"};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_RPG26_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_RPG26_SHORT;
	};
	
	class Vil_RPO_A_USED_XENO : INKO_RPG18_USED {
		scope = protected;
		displayName = "$STR_TGW_VIL_RPOA_USED";
		inko_disposable = 0;
		magazines[] = {Vil_RPO_A_USED_XENO};
		model = "\vilas_aks\vil_rpo_a";
	};
	class Vil_RPG22_USED_XENO : INKO_RPG18_USED {
		scope = protected;
		displayName = "$STR_TGW_VIL_RPG22_USED";
		inko_disposable = 0;
		magazines[] = {Vil_RPG22_USED_XENO};
		model = "\vilas_aks\vil_rpg_22";
	};
	class Vil_RPG26_USED_XENO : INKO_RPG18_USED {
		scope = protected;
		displayName = "$STR_TGW_VIL_RPG26_USED";
		inko_disposable = 0;
		magazines[] = {Vil_RPG26_USED_XENO};
		model = "\vilas_aks\vil_rpg_26";
	};
	// INKO Disposable Launcher END

	
	class Vil_RPG29 : RPG7V {
		displayName = "$STR_TGW_VIL_RPG29";
		class Library {
			libTextDesc = $STR_TGW_VIL_RPG29_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_RPG29_SHORT;
	};
	
	/*********************************************************
			Vilas Eastern Weapons START
	**********************************************************/
	
	class Makarov;	// External class reference
	class AKS_74_U;	// External class reference
	class AK_BASE : Rifle {
		class GP25Muzzle;
	};
	
	class AK_74 : AK_BASE {};

	class vil_SKS : AK_BASE {
		displayName = $STR_TGW_VIL_SKS;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		class Single : Mode_SemiAuto {
			begin1[] = {"\Vilas_WpnUpd\sounds\SKS", 1.77828, 1, 1000};
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_SKS_LIB;
		};
		descriptionShort = $STR_TGW_VIL_SKS_SHORT;
	};
	
	class vil_APS : Makarov {
		displayName = $STR_TGW_VIL_APS;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 100, 200};
		discreteDistanceInitIndex = 1;
		picture = "\Vilas_WpnUpd\icon\w_vil_aps_ca.paa";
		begin1[] = {"ca\sounds\weapons\pistols\makarov_single1", db10, 1, 700};
		reloadMagazineSound[] = {"\Vilas_WpnUpd\sounds\APSReload", 0.0316228, 1, 20};
		modes[] = {"Single", "AI_single", "FullAuto"};

		class Single : Mode_SemiAuto {
			autoFire = false;
			recoil = "recoil_single_pistol_2outof3";
			recoilProne = "recoil_single_pistol_2outof3";
			dispersion = 0.0025;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.015;
			sound[] = {"\Vilas_WpnUpd\sounds\APSs", 1, 1};
		};

		class ai_Single : Mode_SemiAuto {
			autoFire = false;
			dispersion = 0.004;
			minRange = 2;
			recoil = "recoil_single_pistol_2outof3";
			recoilProne = "recoil_single_pistol_2outof3";
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.6;
			maxRange = 70;
			maxRangeProbab = 0.001;
			sound[] = {"\Vilas_WpnUpd\sounds\APSs", 1, 1};
			showtoplayer = 0;
		};

		class FullAuto : Mode_FullAuto {
			recoil = "subMachineGunBase";
			recoilProne = "subMachineGunBase";
			reloadTime = 0.09;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 20;
			midRangeProbab = 0.1;
			maxRange = 40;
			maxRangeProbab = 0.001;
			sound[] = {"\Vilas_WpnUpd\sounds\APSs", 1, 1};
			};
		class Library {
			libTextDesc = $STR_TGW_VIL_APS_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_APS_SHORT;
	};
	
	class vil_apssd : vil_aps {
		displayName = $STR_TGW_VIL_APB;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 100, 200};
		discreteDistanceInitIndex = 1;
		picture = "\Vilas_WpnUpd\icon\w_vil_apb_ca.paa";
		begin1[] = {"ca\sounds\weapons\pistols\makarovSD_single1", db8, 1, 200};
		reloadMagazineSound[] = {"\Vilas_WpnUpd\sounds\APSReload", 0.0316228, 1, 20};
		modes[] = {"Single", "AI_single", "FullAuto"};

		class Single : Mode_SemiAuto {
			autoFire = false;
			recoil = "recoil_single_pistol_2outof3";
			recoilProne = "recoil_single_pistol_2outof3";
			dispersion = 0.0025;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.015;
			sound[] = {"\Vilas_WpnUpd\sounds\APSsds", 1, 1};
		};

		class ai_Single : Mode_SemiAuto {
			autoFire = false;
			dispersion = 0.004;
			minRange = 2;
			recoil = "recoil_single_pistol_2outof3";
			recoilProne = "recoil_single_pistol_2outof3";
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.6;
			maxRange = 70;
			maxRangeProbab = 0.001;
			sound[] = {"\Vilas_WpnUpd\sounds\APSsds", 1, 1};
			showtoplayer = 0;
		};

		class FullAuto : Mode_FullAuto {
			recoil = "subMachineGunBase";
			recoilProne = "subMachineGunBase";
			reloadTime = 0.09;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 20;
			midRangeProbab = 0.1;
			maxRange = 40;
			maxRangeProbab = 0.001;
			sound[] = {"\Vilas_WpnUpd\sounds\APSsds", 1, 1};
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_APB_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_APB_SHORT;
	};

	class Vil_PYA : Makarov {
		displayName = $STR_TGW_VIL_PYA;
		picture = "\Vilas_WpnUpd\icon\w_vil_pya_ca.paa";
		magazines[] = {"vil_17Rnd_9x19_PYA", "15Rnd_9x19_M9", "15Rnd_9x19_M9SD"};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_PYA_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_PYA_SHORT;
	};

	class Vil_RPG16 : RPG7V {
		displayName = "$STR_TGW_VIL_RPG16";
		picture = "\Vilas_WpnUpd\icon\w_vil_rpg16_ca.paa";
		class Library {
			libTextDesc = "$STR_TGW_VIL_RPG16_LIB";
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = "$STR_TGW_VIL_RPG16_SHORT";
	};

	class Vil_RPG7V_PGO : RPG7V {
		displayName = $STR_TGW_VIL_RPG7V;
		picture = "\Vilas_WpnUpd\icon\w_vil_rpg7_ca.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_RPG7V_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class Vil_RPG7d_PGO : Vil_RPG7V_PGO {
		displayName = $STR_TGW_VIL_RPG7D;
		picture = "\Vilas_WpnUpd\icon\w_vil_rpg7d_ca.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_RPG7D_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class PK;	// External class reference
	class vil_PK : PK {
		class Armory {
			type = 7;
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_PK;
		picture = "\vilas_aks\ico\pk.paa";
		weaponInfoType = "RscWeaponZeroing";
		reloadMagazineSound[] = {"\Vilas_WpnUpd\sounds\PKReload", 0.0562341, 1, 40};
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
		discreteDistanceInitIndex = 2;
	};
	
	class vil_PKM_N : PK {
		class Armory {
			type = 7;
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_PKMNSPU;
		opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur3"}; //{"OpticsCHAbera2", "OpticsBlur3","dkv_nspu_color", "dkv_nspu_grain","dkv_nspu_blur"};		
		visionMode[] = {NVG};
		picture = "\Vilas_WpnUpd\icon\w_vil_pknspu_ca.paa";
		reloadMagazineSound[] = {"\Vilas_WpnUpd\sounds\PKReload", 0.0562341, 1, 40};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
	};
	
	class vil_PKM : PK {
		class Armory {
			type = 7;
			disabled = 1;
			author = $STR_VILAS_AUTHOR;
		};
		reloadMagazineSound[] = {"\Vilas_WpnUpd\sounds\PKReload", 0.0562341, 1, 40};
		displayName = $STR_TGW_VIL_PKM;
	};

	class vil_PKP : PK {
		class Armory {
			type = 7;
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_PKP;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
		discreteDistanceInitIndex = 2;
		picture = "\Vilas_WpnUpd\icon\w_vil_pkp_mg_ca.paa";
		class Library {
			libTextDesc = $STR_LIB_PECHENEG;
		};
	};
	
	class VSS_vintorez;
	class vil_VSS_PSO : VSS_vintorez {
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class Armory {
			disabled = 1;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_VSS_PSO;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		visionMode[] = {"Normal"};
	};
	
	class vil_VSS_N : vil_VSS_PSO {
		class Armory {
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		scope = public;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600};
		discreteDistanceInitIndex = 2;
		displayName = $STR_TGW_VIL_VSS_NSPU;
		visionMode[] = {"Normal"};
	};
	
	class vil_VAL : vil_VSS_PSO {
		displayName = $STR_TGW_VIL_VAL;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400};
		discreteDistanceInitIndex = 7;
		class Single : Mode_SemiAuto {
			begin1[] = {"\Vilas_WpnUpd\sounds\VALs", db3, 1, 75};
			soundBegin[] = {"begin1", 1.0};
		};
		
		class Full : Mode_FullAuto {
			begin1[] = {"\Vilas_WpnUpd\sounds\VALs", db3, 1, 75};
			soundBegin[] = {"begin1", 1.0};
		};
		class Library {
			libTextDesc = $STR_TGW_VIL_VAL_LIB;
		};
		class Armory {
			description = "$STR_TGW_VIL_VAL_LIB";
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_VAL_SHORT;
	};
		
	class vil_VAL_C : vil_VAL {
		weaponInfoType = "RscWeaponEmpty";
		displayName = $STR_TGW_VIL_VAL_KOBRA;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		picture = "\Vilas_WpnUpd\icon\w_vil_val_kob_ca.paa";
	};

	class vil_VAL_N : vil_VAL {
		displayName = $STR_TGW_VIL_VAL_NSPU;
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		visionMode[] = {"Normal"};
		picture = "\Vilas_WpnUpd\icon\w_vil_val_nspu_ca.paa";
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};

	class AKS_74_UN_kobra;	// External class reference
	class vil_AKMSB : AKS_74_UN_kobra {
		displayName = $STR_TGW_VIL_AKMSB;
		magazines[] = {"vil_30Rnd_762x39_AKSD"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		class Library {
			libTextDesc = $STR_TGW_VIL_AKMSB_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AKMSB_SHORT;
	};
	
	class AK_47_S;	// External class reference
	class vil_AK47_BASE : AK_47_S {
		scope = private;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
	};
	
	class vil_M70 : vil_AK47_BASE {
		scope = public;
		displayName = $STR_TGW_VIL_M70;
		class Library {
			libTextDesc = $STR_TGW_VIL_M70_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_M70_SHORT;
	};
	
	class vil_AMD : vil_AK47_BASE {
		scope = public;
		displayName = $STR_TGW_VIL_AMD;
		class Library {
			libTextDesc = $STR_TGW_VIL_AMD_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AMD_SHORT;
	};
	
	class vil_AKS_47 : vil_AK47_BASE {
		scope = public;
		displayName = $STR_TGW_VIL_AKS47;
		class Library {
			libTextDesc = $STR_TGW_VIL_AKS47_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AKS47_SHORT;
	};
	
	class AK_47_M;	// External class reference
	class vil_AKM_BASE : AK_47_M {
		scope = private;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 1;
	};
	
	class vil_AKM : vil_AKM_BASE {
		class Armory {
			disabled = 1;
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_PMI : vil_AKM_BASE {
		scope = public;
		displayName = $STR_TGW_VIL_PMI;
		class Library {
			libTextDesc = $STR_TGW_VIL_PMI_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_PMI_SHORT;
	};
	
	class vil_MPI : vil_AKM_BASE {
		scope = public;
		displayName = $STR_TGW_VIL_MPI;
		class Library {
			libTextDesc = $STR_TGW_VIL_MPI_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_MPI_SHORT;
	};
	
	class vil_AK_47_49 : vil_AKM_BASE {
		scope = public;
		displayName = $STR_TGW_VIL_AK4749;
		class Library {
			libTextDesc = $STR_TGW_VIL_AK4749_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AK4749_SHORT;
	};
	
	class vil_AK_47 : vil_AKM_BASE {
		scope = public;
		displayName = $STR_TGW_VIL_AK47;
		class Library {
			libTextDesc = $STR_TGW_VIL_AK47_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AK47_SHORT;
	};
	
	class vil_AK_47_m1 : vil_AKM_BASE {
		scope = public;
		displayName = $STR_TGW_VIL_AK47M1;
		class Library {
			libTextDesc = $STR_TGW_VIL_AK47M1_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AK47M1_SHORT;
	};

	class vil_AKMS_GP25 : vil_AKM_BASE {
		scope = public;
		displayName = $STR_TGW_VIL_AKMSGL;
		picture = "\Vilas_WpnUpd\icon\w_vil_akmsgl_ca.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_AKMSGL_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AKMSGL_SHORT;
	};

	class vil_Vikhr : vil_AKM_BASE {
		scope = public;
		displayName = $STR_TGW_VIL_SR3;
		magazines[] = {"vil_20Rnd_9x39_SP6ns_OC", "vil_20Rnd_9x39_SP6_OC", "10Rnd_9x39_SP5_VSS", "20Rnd_9x39_SP5_VSS"};
		discreteDistance[] = {100, 200};
		discreteDistanceInitIndex = 0;
		//begin1[] = {"ca\sounds\weapons\rifles\Bizon_single1", 1.77828, 1, 1000};
		//begin2[] = {"ca\sounds\weapons\rifles\Bizon_single2", 1.77828, 1, 1000};
		class Library {
			libTextDesc = $STR_TGW_VIL_SR3_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_SR3_SHORT;
	};
	
	class vil_9a91 : vil_Vikhr {
		displayName = $STR_TGW_VIL_9A91;
		class Library {
			libTextDesc = $STR_TGW_VIL_9A91_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_9A91_SHORT;
	};
	
	class vil_9a91_c : vil_9a91 {
		weaponInfoType = "RscWeaponEmpty";
		displayName = $STR_TGW_VIL_9A91_KOBRA;
		picture = "\Vilas_WpnUpd\icon\w_vil_9a91_kobra_ca.paa";
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_9A91_SHORT;
	};
	
	class vil_9a91_csd : vil_9a91 {
		displayName = $STR_TGW_VIL_9A91_SD;
		weaponInfoType = "RscWeaponEmpty";
		picture = "\Vilas_WpnUpd\icon\w_vil_9a91sd_kobra_ca.paa";
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\Vilas_WpnUpd\sounds\VALs", db3, 1, 75};
			soundBegin[] = {"begin1", 1.0};
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\Vilas_WpnUpd\sounds\VALs", db3, 1, 75};
			soundBegin[] = {"begin1", 1.0};
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_9A91_SHORT;
	};
	
	class vil_Groza_HG : vil_AKM_BASE {
		displayName = $STR_TGW_VIL_OC14;
		class Library {
			libTextDesc = $STR_TGW_VIL_OC14_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_OC14_SHORT;
	};
	
	class vil_Groza_SC : vil_Groza_HG {
		visionMode[] = {"Normal"};
		displayName = $STR_TGW_VIL_OC14_SCOPE;
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\Vilas_WpnUpd\sounds\VALs", db3, 1, 75};
			soundBegin[] = {"begin1", 1.0};
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\Vilas_WpnUpd\sounds\VALs", db3, 1, 75};
			soundBegin[] = {"begin1", 1.0};
		};
		
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_OC14_SHORT;
	};
	
	class vil_Groza_GL : vil_Groza_HG {
		displayName = $STR_TGW_VIL_OC14_GL;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_OC14_GL_SHORT;
	};

	class vil_Groza_SD : vil_Groza_HG {
		displayName = $STR_TGW_VIL_OC14_SD;
		picture = "\Vilas_WpnUpd\icon\w_vil_oc_sd_ca.paa";
		visionMode[] = {"Normal"};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\Vilas_WpnUpd\sounds\VALs", db3, 1, 75};
			soundBegin[] = {"begin1", 1.0};
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"\Vilas_WpnUpd\sounds\VALs", db3, 1, 75};
			soundBegin[] = {"begin1", 1.0};
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_OC14_SHORT;
	};
	
	class SVD;	// External class reference	
	class vil_SVD_BASE : SVD {
		scope = private;
		weaponInfoType = "RscWeaponZeroing";
		class OpticsModes {
			class Scope {
				OpticsID = 1;
				UseModelOptics = 1;
				MemoryPointCamera = "Eye";
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
		};
		class Library {
			libTextDesc = $STR_LIB_SVD;
		};
	};
	
	class vil_SVU_A : vil_SVD_BASE {
		displayName = $STR_TGW_VIL_SVUA;
		class Library {
			libTextDesc = $STR_TGW_VIL_SVU_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_SVUA_SHORT;
	};
	
	class vil_SVU : vil_SVD_BASE {
		displayName = $STR_TGW_VIL_SVU;
		class Library {
			libTextDesc = $STR_TGW_VIL_SVU_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_SVUA_SHORT;
	};
	
	class vil_SVD_63 : vil_SVD_BASE {
		displayName = $STR_TGW_VIL_SVD;
		displayNameShort = $STR_TGW_VIL_SN_SVD;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_SVD_N : vil_SVD_BASE {
		displayName = $STR_TGW_VIL_SVD_NSPU;
		displayNameShort = $STR_TGW_VIL_SN_SVD_NSPU;
		class OpticsModes : OpticsModes {
			class Scope : Scope {
				opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur3","dkv_nspu_color", "dkv_nspu_grain","dkv_nspu_blur"};
			};
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//picture = "\CA\weapons_E\Data\icons\w_svd_nspu_CA.paa";
	};

	class vil_SVD_S : vil_SVD_63 {
		displayName = $STR_TGW_VIL_SVD_S;
		displayNameShort = $STR_TGW_VIL_SN_SVD_S;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_SVD_M : vil_SVD_63 {
		displayName = $STR_TGW_VIL_SVDM;
		displayNameShort = $STR_TGW_VIL_SN_SVDM;
		class Library {
			libTextDesc = $STR_TGW_VIL_SVDM_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_SVD_P21 : vil_SVD_M {
		displayName = $STR_TGW_VIL_SVDM_P21;
		displayNameShort = $STR_TGW_VIL_SN_SVDM_P21;
		class OpticsModes : OpticsModes {
			class Scope : Scope {
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
				discreteDistanceInitIndex = 2;
			};
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};

	class vil_SV_98 : vil_SVD_BASE {
		displayName = $STR_TGW_VIL_SV98;
		class OpticsModes : OpticsModes {
			class Scope : Scope {
				opticsZoomInit = 0.05;
				opticsZoomMin = 0.05;
				opticsZoomMax = 0.05;
				distanceZoomMin = 250;
				distanceZoomMax = 250;
				modelOptics = "\vilas_aks\opt\optika_sv7";
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				discreteDistance[] = {100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
				discreteDistanceInitIndex = 3;
			};
		};
		reloadSound[] = {"\Vilas_WpnUpd\sounds\SV98_Bolt",0.0562341,1,10};		
		visionMode[] = {"Normal"};
		class Library {
			libTextDesc = $STR_TGW_VIL_SV98_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_SV98_SHORT;
	};
	
	class vil_SV_98_69 : vil_SV_98 {
		displayName = $STR_TGW_VIL_SV98_P69;
		descriptionShort = $STR_TGW_VIL_SV98_SHORT;
		class OpticsModes : OpticsModes {
			class Scope : Scope {
				maxRangeProbab = 0.02;
				opticsZoomInit = 0.1;
				opticsZoomMin = 0.03;
				opticsZoomMax = 0.1;
				distanceZoomMin = 200;
				distanceZoomMax = 500;
				modelOptics = "\vilas_aks\opt\optika_1p69";
			};
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_SV_98_SD : vil_SV_98 {
		displayName = $STR_TGW_VIL_SV98_SD;
		picture = "\Vilas_WpnUpd\icon\w_vil_sv98_sd_ca.paa";
		begin1[] = {"\vilas_aks\Ak47sd", 1.77828, 1, 250};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_SV98_SHORT;
	};
	
	class AK_107_kobra;	// External class reference	
	class vil_Abakan : AK_107_kobra {
		displayName = $STR_TGW_VIL_AN94;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		class Burst : Mode_Burst {
			recoil = "recoil_single_primary_1outof20";
			recoilProne = "recoil_single_primary_prone_1outof20";
		};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_AN94_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AN94_SHORT;
	};
	
	class vil_Abakan_gp : vil_Abakan {
		displayName = $STR_TGW_VIL_AN94_GL;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AN94_GL_SHORT;
	};
	
	class vil_Abakan_P29 : vil_Abakan {
		picture = "\Vilas_WpnUpd\icon\w_vil_an94_p29_ca.paa";
		displayName = $STR_TGW_VIL_AN94_P29;
		visionMode[] = {"Normal"};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_AK_105 : AKS_74_U {
		displayName = $STR_TGW_VIL_AK105;
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		class Library {
			libTextDesc = $STR_TGW_VIL_AK102104105;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AK105_SHORT;
	};
	
	class Vil_AK_105_c : Vil_AK_105 {
		displayName = $STR_TGW_VIL_AK105_KOBRA;
		picture = "\Vilas_WpnUpd\icon\w_vil_ak105_kobra_ca.paa";
		weaponInfoType = "RscWeaponEmpty";
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_AKs_74_u : AKS_74_U {
		class Armory {
			disabled = 1;
			author = $STR_VILAS_AUTHOR;
		};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {350, 500};
		discreteDistanceInitIndex = 0;
	};
	
	class Vil_AKS_74_UN_kobra : AKS_74_UN_kobra {
		class Armory {
			disabled = 1;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_AKS74UN;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {350, 500};
		discreteDistanceInitIndex = 0;
	};
	
	class Vil_AKS_74_UB : AKS_74_UN_kobra {
		displayName = $STR_TGW_VIL_AKS74UB;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {350, 500};
		discreteDistanceInitIndex = 0;
		class Library {
			libTextDesc = $STR_TGW_VIL_AKS74UB_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AKS74UB_SHORT;
		picture = "\ca\weapons\AK\Data\Equip\w_aks74un_ca.paa";
	};
		
	class vil_AK_74 : AK_74 {
		class Armory {
			disabled = 1;
			author = $STR_VILAS_AUTHOR;
		};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		class GP30Muzzle : GP25Muzzle {
			displayName = $STR_TGW_VIL_GP30;
		};
	};
	
	class vil_AK_74_N : vil_AK_74 {
		class Armory {
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		picture = "\vilas_aks\ico\ak74_n.paa";
		visionMode[] = {"Normal"};
		displayName = $STR_TGW_VIL_AK74NSPU;
	};
	
	class vil_AK_74m : vil_AK_74 {
		class Armory {
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_AK74M;
	};
	
	class vil_AK_74M_N : vil_AK_74 {
		class Armory {
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		picture = "\Vilas_WpnUpd\icon\w_vil_ak74m_nspu_ca.paa";
		visionMode[] = {"Normal"};
		displayName = $STR_TGW_VIL_AK74MNSPU;
		//descriptionShort = $STR_TGW_VIL_AK74MNSPU_SHORT;
	};
	
	class vil_AK_74M_PSO : vil_AK_74 {
		class Armory {
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_AK74M_PSO;
		picture = "\Vilas_WpnUpd\icon\w_vil_ak74m_pso_ca.paa";
		visionMode[] = {"Normal"};
	};
	
	class vil_AK_74P : vil_AK_74 {
		class Armory {
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_AK74P;
		//descriptionShort = $STR_TGW_VIL_AK74P_SHORT;
	};
	
	class vil_AKS_74 : vil_AK_74 {
		class Armory {
			disabled = 1;
			author = $STR_VILAS_AUTHOR;
		};
		picture = "\ca\weapons\AK\Data\Equip\w_aks74_ca.paa";
		displayName = $STR_TGW_VIL_AKS74;
		class Library {
			libTextDesc = $STR_TGW_VIL_AKS74_LIB;
		};
		//descriptionShort = $STR_TGW_VIL_AKS74_SHORT;
	};

	class vil_AKS_74p : vil_AK_74 {
		class Armory {
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_AKS74P;
		//descriptionShort = $STR_TGW_VIL_AKS74P_SHORT;
	};
	
	class vil_AKS_74_gp : vil_AKS_74 {
		class Armory {
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_AKS74GP25;
		descriptionShort = $STR_TGW_VIL_AKS74GP25_SHORT;
	};
	
	class vil_AKS_74p_gp : vil_AKS_74_gp {
		displayName = $STR_TGW_VIL_AKS74PGP25;
		displayNameShort = $STR_TGW_VIL_SN_AKS74PGP25;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_AKS74PGP25_SHORT;
	};

	class vil_AK_74m_k : vil_AK_74 {
		class Armory {
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_AK74MK;
		weaponInfoType = "RscWeaponEmpty";
		picture = "\Vilas_WpnUpd\icon\w_vil_ak74m_col_ca.paa";
	};

	class vil_AK_74m_c : vil_AK_74 {
		class Armory {
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_AK74M_KOB;
		weaponInfoType = "RscWeaponEmpty";
		picture = "\Vilas_WpnUpd\icon\w_vil_ak74m_kobra_ca.paa";
	};

	class vil_AK_74m_p29 : vil_AK_74 {
		class Armory {
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_AK74M_P29;
		visionMode[] = {"Normal"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
	};
	
	class vil_AK_74m_gp_29 : vil_AK_74m_p29 {
		displayName = $STR_TGW_VIL_AK74M_GL_P29;
		displayNameShort = $STR_TGW_VIL_SN_AK74M_GL_P29;
		muzzles[] = {this, "GP30Muzzle"};
		picture = "\Vilas_WpnUpd\icon\w_vil_ak74mp29gl_ca.paa";
		visionMode[] = {"Normal"};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AKS74GP25_SHORT;
	};

	class vil_AK_74m_gp : vil_AK_74m {
		displayName = $STR_TGW_VIL_AK74MGP30;
		muzzles[] = {this, "GP30Muzzle"};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AKS74GP25_SHORT;
	};
	
	class vil_AK_74_gp : vil_AK_74 {
		class Armory {
			disabled = 0;
			author = $STR_VILAS_AUTHOR;
		};
		scope = private;
		displayName = $STR_TGW_VIL_AK74_GP25;
		descriptionShort = $STR_TGW_VIL_AKS74GP25_SHORT;
	};

	class vil_AK_101 : AK_BASE {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = public;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\Data\Anim\AK.rtm"};
		displayName = $STR_TGW_VIL_AK101;
		model = "\vilas_aks\vil_ak_101";
		picture = "\vilas_aks\ico\ak74m.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"VIL_30Rnd_556x45_AK"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		class Library {
			libTextDesc = $STR_TGW_VIL_AK101_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AK101_SHORT;
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\vilas_aks\AK74n", 1.77828, 1, 1000};
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

		class Burst : Mode_Burst {
			begin1[] = {"\vilas_aks\AK74n", 1.77828, 1, 1000};
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

		class FullAuto : Mode_FullAuto {
			begin1[] = {"\vilas_aks\AK74n", 1.77828, 1, 1000};
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
		};
	};
	
	class vil_AK_103 : AK_47_M {
		displayName = $STR_TGW_VIL_AK103;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		class Library {
			libTextDesc = $STR_TGW_VIL_AK103_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_AK_107 : AK_107_kobra {
		displayName = $STR_TGW_VIL_AK107;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class Vil_AK_107_c : Vil_AK_107 {
		class Armory {
			disabled = 1;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_AK107_KOB;
		weaponInfoType = "RscWeaponEmpty";
		picture = "\Vilas_WpnUpd\icon\w_vil_ak107_kob_ca.paa";
	};

	class vil_AEK1 : AK_107_kobra {
		displayName = $STR_TGW_VIL_AEK971_EARLY;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		class Library {
			libTextDesc = $STR_TGW_VIL_AEK971_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AEK971_SHORT;
	};
	
	class vil_AEK2 : vil_AEK1 {
		displayName = $STR_TGW_VIL_AEK971_LATE;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_AEK_GL : vil_AEK1 {
		displayName = $STR_TGW_VIL_AEK971_GL;
		descriptionShort = $STR_TGW_VIL_AEK971_GL_SHORT;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_AeK_3 : vil_AEK1 {
		displayName = $STR_TGW_VIL_AEK973_EARLY;
		class Library {
			libTextDesc = $STR_TGW_VIL_AEK973_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AEK973_SHORT;
	};
	
	class vil_AeK_23 : vil_AEK1 {
		displayName = $STR_TGW_VIL_AEK973_LATE;
		picture = "\vilas_aks\ico\aek2.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_AEK973_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AEK973_SHORT;
	};

	class vil_AeK_3_K : vil_AEK1 {
		weaponInfoType = "RscWeaponEmpty";
		picture = "\Vilas_WpnUpd\icon\w_vil_aek2_col_ca.paa";
		displayName = $STR_TGW_VIL_AEK973_COL;
		class Library {
			libTextDesc = $STR_TGW_VIL_AEK973_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AEK973_SHORT;
	};

	class RPK_74;	// External class reference	
	class vil_RPK : RPK_74 {
		displayName = $STR_TGW_VIL_RPK47;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		magazines[] = { "vil_40Rnd_762x39_AK47" , "30Rnd_762x39_AK47", "vil_75Rnd_762x39_RPK"};
		class Library {
			libTextDesc = $STR_TGW_VIL_RPK47_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_RPK47_SHORT;
	};
	
	class vil_RPK74 : RPK_74 {
		displayName = $STR_TGW_VIL_RPK74;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		magazines[] = {"vil_45Rnd_545x39_AK", "75Rnd_545x39_RPK", "30Rnd_545x39_AK"};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_RPK74M : vil_RPK74 {
		displayName = $STR_TGW_VIL_RPK74M;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		class Library {
			libTextDesc = $STR_TGW_VIL_RPK74M_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_RPK74M;
	};
	
	class vil_RPK74M_P29 : vil_RPK74M {
		displayName = $STR_TGW_VIL_RPK74MP29;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		picture = "\Vilas_WpnUpd\icon\w_vil_rpkm_p29_ca.paa";
		visionMode[] = {"Normal"};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_RPK74M_N : vil_RPK74 {
		displayName = $STR_TGW_VIL_RPK74MN;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		picture = "\Vilas_WpnUpd\icon\w_vil_rpkm_nspu_ca.paa";
		visionMode[] = {"Normal"};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	/*********************************************************
			Vilas Eastern Weapons END
	**********************************************************/
	
	/*********************************************************
			Vilas Western/NATO Weapons START
	**********************************************************/

	class M9;	// External class reference	
	class vil_B_HP : M9 {
		displayName = $STR_TGW_VIL_BHP;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {50, 100, 200, 300, 400, 500};
		discreteDistanceInitIndex = 0;
		picture = "\Vilas_WpnUpd\icon\w_vil_bhp_ca.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_BHP_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_BHP_SHORT;
	};

	class vil_Glock : M9 {
		class Armory {
			disabled = 1;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_GLOCK;
	};

	class vil_Glock_o : vil_glock {
		class Armory {
			disabled = 1;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_GLOCK_O;
	};

	class vil_USP : M9 {
		displayName = $STR_TGW_VIL_USP;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 75, 100};
		discreteDistanceInitIndex = 1;
		picture = "\Vilas_WpnUpd\icon\w_vil_usp_ca.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_USP_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_USP_SHORT;
	};
	
	class vil_USP45 : M9 {
		displayName = $STR_TGW_VIL_USP45;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 75, 100};
		discreteDistanceInitIndex = 1;
		picture = "\Vilas_WpnUpd\icon\w_vil_usp45_ca.paa";
		magazines[] = {"vil_usp45_mag", "vil_usp45sd_mag"};
		class Library {
			libTextDesc = $STR_TGW_VIL_USP_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_USP45_SHORT;
	};

	class M9SD;	// External class reference	
	class vil_USPSD : M9sd {
		displayName = $STR_TGW_VIL_USPSD;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 75, 100};
		discreteDistanceInitIndex = 1;
		picture = "\Vilas_WpnUpd\icon\w_vil_uspsd_ca.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_USP_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_USPSD_SHORT;
	};
	
	class vil_USP45SD : M9sd {
		displayName = $STR_TGW_VIL_USP45SD;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 75, 100};
		discreteDistanceInitIndex = 1;
		picture = "\Vilas_WpnUpd\icon\w_vil_usp45sd_ca.paa";
		magazines[] = {"vil_usp45sd_mag"};
		class Library {
			libTextDesc = $STR_TGW_VIL_USP_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_USP45SD_SHORT;
	};

	class vil_G3a3 : Rifle {
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		optics = true;
		dexterity = 1.64;
		value = 0;
		displayName = $STR_TGW_VIL_G3A3;
		displayNameShort = $STR_TGW_VIL_SN_G3A3;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"vil_20Rnd_762x51_G3"};
		modes[] = {"Single", "full"};
		weaponInfoType = "RscWeaponZeroing";	
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		class Single : Mode_SemiAuto {
			begin1[] = {"\Vilas_WpnUpd\sounds\G3fire", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
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
		
		class full : Mode_FullAuto {
			begin1[] = {"\Vilas_WpnUpd\sounds\G3fire", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};			
			reloadTime = 0.09;
			recoil = "recoil_auto_primary_6outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
			dispersion = 0.004;
			aiRateOfFire = 12;
		};
		class Library {
			libTextDesc = "$STR_TGW_VIL_G3_LIB";
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_G3_SHORT;
	};
	
	class vil_G3a2 : Vil_G3a3 {
		displayName = $STR_TGW_VIL_G3A2;
		displayNameShort = $STR_TGW_VIL_SN_G3A2;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_G3_SHORT;
	};
	
	class vil_G3a4 : Vil_G3a3 {
		displayName = $STR_TGW_VIL_G3A4;
		displayNameShort = $STR_TGW_VIL_SN_G3A4;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_G3A4_SHORT;
	};
	
	class vil_G3a4b : Vil_G3a3 {
		displayName = $STR_TGW_VIL_G3A4_B;
		displayNameShort = $STR_TGW_VIL_SN_G3A4;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		picture = "\Vilas_WpnUpd\icon\w_vil_g3a4_b_ca.paa";
		//descriptionShort = $STR_TGW_VIL_G3A4_SHORT;
	};

	class vil_G3an : Vil_G3a3 {
		displayName = $STR_TGW_VIL_G3N;
		displayNameShort = $STR_TGW_VIL_SN_G3N;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_G3A3_SHORT;
	};
	
	class vil_G3anb : Vil_G3a3 {
		displayName = $STR_TGW_VIL_G3N_B;
		displayNameShort = $STR_TGW_VIL_SN_G3N;
		picture = "\Vilas_WpnUpd\icon\w_vil_g3n_b_ca.paa";
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_G3A3_SHORT;
	};
	
	class vil_G3ZF : Vil_G3a3 {
		displayName = $STR_TGW_VIL_G3ZF;
		displayNameShort = $STR_TGW_VIL_SN_G3ZF;
		picture = "\Vilas_WpnUpd\icon\w_vil_g3zf_ca.paa";
		visionMode[] = {"Normal"};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_G3ZF_SHORT;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
	};
	
	class vil_G3zfb : Vil_G3zf {
		displayName = $STR_TGW_VIL_G3ZF_B;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		displayNameShort = $STR_TGW_VIL_SN_G3ZF;
		picture = "\Vilas_WpnUpd\icon\w_vil_g3zf_b_ca.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
	};
	
	class vil_G3SG1 : Vil_G3a3 {
		displayName = $STR_TGW_VIL_G3SG1;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		displayNameShort = $STR_TGW_VIL_SN_G3SG1;
		visionMode[] = {"Normal"};
		descriptionShort = $STR_TGW_VIL_G3SG1_SHORT;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		
		class Single : Mode_SemiAuto {
			begin1[] = {"\Vilas_WpnUpd\sounds\g3_fire", 1.77828, 1, 1000};
		};
		
		class AUTO : Mode_FullAuto {
			begin1[] = {"\Vilas_WpnUpd\sounds\g3_fire", 1.77828, 1, 1000};
		};
	};

	class vil_G3sg1b : Vil_G3sg1 {
		displayName = $STR_TGW_VIL_G3SG1_B;
		displayNameShort = $STR_TGW_VIL_SN_G3SG1;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		picture = "\Vilas_WpnUpd\icon\w_vil_g3sg1_b_ca.paa";
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_G3TGS : Vil_G3a3 {
		displayName = $STR_TGW_VIL_G3TGS;
		displayNameShort = $STR_TGW_VIL_SN_G3TGS;
		class Single : Mode_SemiAuto {
			displayName = $STR_TGW_VIL_SN_G3TGS;
		};
		class full : Mode_FullAuto {
			displayName = $STR_TGW_VIL_SN_G3TGS;
		};
		class HK79Muzzle : GrenadeLauncher {
			displayName = $STR_TGW_VIL_HK79;
			magazines[] = {"1Rnd_HE_M203", "FlareWhite_M203", "FlareGreen_M203", "FlareRed_M203", "FlareYellow_M203", "1Rnd_Smoke_M203", "1Rnd_SmokeRed_M203", "1Rnd_SmokeGreen_M203", "1Rnd_SmokeYellow_M203"};
			sound[] = {"\ca\Weapons\Data\Sound\grenadelauncher_1", 0.1, 1, 400};
			reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\flare_reload", 0.000316228, 1, 20};
			magazineReloadTime = 0;
			reloadTime = 0.1;
			optics = true;
			modelOptics = "-";
			cameraDir = "GL look";
			memoryPointCamera = "GL eye";
			//weaponInfoType = "RscWeaponZeroing";
			//discreteDistance[] = {50, 100, 150, 200, 250, 300, 350};
			//discreteDistanceInitIndex = 1;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
		};
		
		muzzles[] = {this, "HK79Muzzle"};
		class Library {
			libTextDesc = $STR_TGW_VIL_HK79_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_G3TGS_SHORT;
	};

	class vil_G3TGSb : vil_G3TGS {
		displayName = $STR_TGW_VIL_G3TGS_B;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		displayNameShort = $STR_TGW_VIL_SN_G3TGS;
		picture = "\Vilas_WpnUpd\icon\w_vil_g3tgs_b_ca.paa";
	};
		
	class vil_AG3 : Vil_G3a3 {
		displayName = $STR_TGW_VIL_AG3;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		weaponInfoType = "RscWeaponEmpty";
		picture = "\Vilas_WpnUpd\icon\w_vil_ag3_ca.paa";
		class Library {
			libTextDesc = "$STR_TGW_VIL_AG3_LIB";
		};
		descriptionShort = $STR_TGW_VIL_AG3_SHORT;
	};
	
	class M240;	// External class reference	
	class skavil_M60 : M240 {
		displayName = "$STR_TGW_VIL_M60";
		reloadMagazineSound[] = {"\Vilas_WpnUpd\sounds\mgunreload", 1, 1};
		sound[] = {"\Vilas_WpnUpd\sounds\M60", 10, 1, 1000};
		class Library {
			libTextDesc = $STR_TGW_VIL_M60_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_M60;
	};
	
	class skavil_M60e3 : skavil_M60 {
		displayName = "$STR_TGW_VIL_M60E3";
		picture = "\Vilas_WpnUpd\icon\w_vil_m60e3_ca.paa";
		reloadMagazineSound[] = {"\Vilas_WpnUpd\sounds\mgunreload", 1, 1};
		sound[] = {"\Vilas_WpnUpd\sounds\M60", 1.77828, 1, 1000};
		class Library {
			libTextDesc = $STR_TGW_VIL_M60E3_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_M60E3;
	};
	
	class DMR;	// External class reference	
	class vil_SR25 : DMR {
		displayName = $STR_TGW_VIL_SR25;
		picture = "\Vilas_WpnUpd\icon\w_vil_sr25_ca.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		visionMode[] = {"Normal"};
		class Library {
			libTextDesc = $STR_TGW_VIL_SR25_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_SR25_SHORT;
	};
	
	class vil_SR25SD : vil_SR25 {
		displayName = $STR_TGW_VIL_SR25_SD;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		picture = "\Vilas_WpnUpd\icon\w_vil_sr25_sd_ca.paa";
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_SR25_SHORT;
	};
	
	class vil_M110 : vil_SR25 {
		displayName = $STR_TGW_VIL_M110;
		picture = "\Vilas_WpnUpd\icon\w_vil_m110_ca.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		class Library {
			libTextDesc = $STR_TGW_VIL_M110_LIB;
		};
		class Armory {
			description = $STR_TGW_VIL_M110_LIB;
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_M110;
	};
	
	class vil_M110sd : vil_SR25sd {
		displayName = $STR_TGW_VIL_M110_SD;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		picture = "\Vilas_WpnUpd\icon\w_vil_m110_sd_ca.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_M110_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_M110_SD_SHORT;
	};
	
	class vil_M21 : DMR {
		displayName = $STR_TGW_VIL_M21_WOOD;
		picture = "\Vilas_WpnUpd\icon\w_vil_m21w_ca.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		visionMode[] = {"Normal"};
		class Library {
			libTextDesc = $STR_TGW_VIL_M21_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_M21_SHORT;
	};
	
	class vil_M21G : DMR {
		displayName = $STR_TGW_VIL_M21_GREEN;
		picture = "\Vilas_WpnUpd\icon\w_vil_m21g_ca.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		visionMode[] = {"Normal"};
		class Library {
			libTextDesc = $STR_TGW_VIL_M21_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_M21_SHORT;
	};
	
	class M24;
	class vil_M24b : M24 {
		displayName = $STR_TGW_VIL_M24_BLACK;
		picture = "\Vilas_WpnUpd\icon\w_vil_m24b_ca.paa";
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class M14_EP1;
	class vil_M14 : M14_EP1 {
		//scope = private;
		displayName = $STR_TGW_VIL_M14_WOOD;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		class Library {
			libTextDesc = $STR_EP1_LIB_M14_EP1;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_M14_SHORT;
	};
	
	class vil_M14G : vil_m14 {
		displayName = $STR_TGW_VIL_M14_GREEN;
		picture = "\Vilas_WpnUpd\icon\w_vil_m14g_ca.paa";
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};

	class vil_Mg3 : M240 {
		displayName = $STR_TGW_VIL_MG3;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {200, 300, 400, 500, 600, 800, 1000, 1200};
		discreteDistanceInitIndex = 1;
		class Library {
			type = 7;
			libTextDesc = $STR_TGW_VIL_MG3_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_MG3_SHORT;
	};
	
	class M249;
	class vil_M249_Para : M249 {
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		class Armory {
			type = 7;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_M249_PARA;
	};
	
	class vil_Minimi : M249 {
		displayName = $STR_TGW_VIL_MINIMI;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		picture = "\Vilas_WpnUpd\icon\w_vil_fnmini_ca.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_MINIMI_LIB;
		};
		class Armory {
			type = 7;
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_MINIMI;
	};
	
	class vil_FnMag : M240 {
		//scope = private;
		displayName = $STR_TGW_VIL_FNMAG;
		picture = "\Vilas_WpnUpd\icon\w_vil_fnmag_ca.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		
		class manual : Mode_FullAuto {
			begin1[] = {"\Vilas_WpnUpd\sounds\FN_MAG", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1.0};
		};
		
		class Library {
			libTextDesc = $STR_TGW_VIL_FNMAG_LIB;
		};
		class Armory {
			type = 7;
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_FNMAG;
	};
	
	class vil_M240_B : M240 {
		displayName = $STR_TGW_VIL_M240B;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		class Library {
			libTextDesc = $STR_TGW_VIL_M240B_LIB;
		};
		class Armory {
			type = 7;
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_M240B;
	};
	
	class FN_FAL;
	class vil_Fal : FN_FAL {
		displayName = $STR_TGW_VIL_FAL;
		scope = public;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {200, 300, 400, 500, 600};
		discreteDistanceInitIndex = 1;
		magazines[] = {"20Rnd_762x51_FNFAL"};
		class Library {
			libTextDesc = $STR_EP1_LIB_FN_FAL;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_EP1_DSS_FN_FAL;
	};
	
	class vil_Fal_Para : Vil_Fal {
		displayName = $STR_TGW_VIL_FAL_PARA;
		//picture = "\Vilas_WpnUpd\icon\w_vil_fal_para_ca.paa";
		magazines[] = {"20Rnd_762x51_FNFAL"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {200, 300, 400, 500, 600};
		discreteDistanceInitIndex = 1;
		class Library {
			libTextDesc = $STR_EP1_LIB_FN_FAL;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_FAL_PARA;
	};
	
	class vil_sg540 : M16_base {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		displayName = $STR_TGW_VIL_SG540;
		picture = "\Vilas_WpnUpd\icon\w_vil_sg540_ca.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 300, 500};
		discreteDistanceInitIndex = 1;
		class Library {
			libTextDesc = $STR_TGW_VIL_SG540_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_SG540_SHORT;
	};
	
	class vil_sg542 : vil_sg540 {
		displayName = $STR_TGW_VIL_SG542;
		picture = "\Vilas_WpnUpd\icon\w_vil_sg542_ca.paa";
		discreteDistance[] = {100, 300, 500, 600};
		class Library {
			libTextDesc = $STR_TGW_VIL_SG542_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_SG542_SHORT;
	};
	
	class vil_sg542f : vil_sg542 {
		displayName = $STR_TGW_VIL_SG542_FS;
		picture = "\Vilas_WpnUpd\icon\w_vil_sg542fs_ca.paa";
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_SG542_SHORT;
	};
	
	class vil_Insas : ak_base {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		displayName = $STR_TGW_VIL_INSAS;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		class Library {
			libTextDesc = $STR_TGW_VIL_INSAS_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_INSAS_SHORT;
	};
	
	class vil_Insas_lmg : vil_Insas {
		displayName = $STR_TGW_VIL_INSAS_LMG;
		class Library {
			libTextDesc = $STR_TGW_VIL_INSAS_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_INSAS_LMG_SHORT;
	};

	class vil_HK33 : M16_base {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		displayName = $STR_TGW_VIL_HK33;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400};
		discreteDistanceInitIndex = 1;
		class Library {
			libTextDesc = $STR_TGW_VIL_HK33_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_HK33_SHORT;
	};

	class vil_Galil : M16_base {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		displayName = $STR_TGW_VIL_GALIL;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 300, 500};
		discreteDistanceInitIndex = 1;
		class Library {
			libTextDesc = $STR_TGW_VIL_GALIL_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_GALIL_SHORT;
	};
	
	class vil_Galil_arm : vil_Galil {
		displayName = $STR_TGW_VIL_GALIL_ARM;
		model = "\Vilas_WpnUpd\vil_galil_arm";
		magazines[] = {"Vil_50Rnd_556x45_G", "Vil_35Rnd_556x45_G"};
		picture = "\Vilas_WpnUpd\icon\w_vil_galil_arm_ca.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_GALIL_LIB;
		};
		descriptionShort = $STR_TGW_VIL_GALIL_ARM_SHORT;
		class FullAuto : Mode_FullAuto {
			reloadTime = 0.092;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
		
	class vil_M16A1 : M16_base {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		displayName = $STR_TGW_VIL_M16A1;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 75, 100, 150, 175, 200, 250, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 8;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_DSS_M16A2;
	};

	class VIL_M4 : M4A1 {
		displayName = $STR_TGW_VIL_M4;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 75, 100, 150, 175, 200, 250, 300, 400, 500, 600};
		discreteDistanceInitIndex = 8;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_M4_SHORT;
	};
	
	class VIL_M4_aim : M4A1_Aim {
		displayName = $STR_TGW_VIL_M4_AIM;
		weaponInfoType = "RscWeaponEmpty";
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_M4_AIM_SHORT;
	};
	
	class vil_M4_EOT : M4A1_Aim {
		class Armory {
			disabled = 1;
			author = $STR_VILAS_AUTHOR;
		};
		displayName = $STR_TGW_VIL_M4EOT;
		weaponInfoType = "RscWeaponEmpty";
		//descriptionShort = $STR_TGW_VIL_M4EOT_SHORT;
	};
	
	class vil_AG36 : G36c {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		displayName = $STR_TGW_VIL_AG36;
		weaponInfoType = "RscWeaponEmpty";
		picture = "\Vilas_WpnUpd\icon\w_vil_ag36_ca.paa";
		class G36aMuzzle : G36c {
			displayName = $STR_TGW_VIL_G36A;
			DistanceZoomMin = 200;
			DistanceZoomMax = 200;
		};
		class AG36Muzzle : GrenadeLauncher {
			displayName = $STR_TGW_VIL_AG36GL;
			magazines[] = {"1Rnd_HE_M203", "FlareWhite_M203", "FlareGreen_M203", "FlareRed_M203", "FlareYellow_M203", "1Rnd_Smoke_M203", "1Rnd_SmokeRed_M203", "1Rnd_SmokeGreen_M203", "1Rnd_SmokeYellow_M203"};
			sound[] = {"\ca\Weapons\Data\Sound\grenadelauncher_1", 0.1, 1, 400};
			reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\flare_reload", 0.000316228, 1, 20};
			magazineReloadTime = 0;
			reloadTime = 0.1;
			optics = true;
			modelOptics = "-";
			cameraDir = "GL look";
			memoryPointCamera = "GL eye";
			//weaponInfoType = "RscWeaponZeroing";
			//discreteDistance[] = {50, 100, 150, 200, 250, 300, 350, 400};
			//discreteDistanceInitIndex = 1;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
		};
		muzzles[] = {G36aMuzzle, "AG36Muzzle"};
		class Library {
			libTextDesc = $STR_TGW_VIL_AG36_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_AG36_SHORT;
	};
	
	class vil_G36KVA4 : G36c {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		displayName = $STR_TGW_VIL_G36KVA4;
		displayNameShort = $STR_TGW_VIL_SN_G36KVA4;
		weaponInfoType = "RscWeaponEmpty";
		picture = "\Vilas_WpnUpd\icon\w_vil_g36ka4_ca.paa";
		//descriptionShort = $STR_TGW_VIL_G36KVA4_SHORT;
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_G36E : G36a {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		displayName = $STR_TGW_VIL_G36E;
		weaponInfoType = "RscWeaponEmpty";
		class MuzzleFar : G36C {
			displayName = $STR_TGW_VIL_SN_G36E;
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
					modelOptics = "\ca\weapons\G36\G36_optics";
					opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur2"};
					opticsZoomMin = 0.166;
					opticsZoomMax = 0.166;
					OpticsZoomInit = 0.166;
					DistanceZoomMin = 200;
					DistanceZoomMax = 200;
					VisionMode[] = {"Normal"};
					CameraDir = "";
				};
			};
		};
		
		picture = "\Vilas_WpnUpd\icon\w_vil_g36e_ca.paa";
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_G36E_SHORT;
	};

	class vil_G36a2 : G36a {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		displayName = $STR_TGW_VIL_G36A2;
		class MuzzleFar : G36C {
			displayName = $STR_TGW_VIL_SN_G36A2;
		};
		weaponInfoType = "RscWeaponEmpty";
		picture = "\Vilas_WpnUpd\icon\w_vil_g36a2_ca.paa";
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_G36A2_SHORT;
	};
	
	class vil_G36KA4 : G36c {
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		displayName = $STR_TGW_VIL_G36KA4;
		displayNameShort = $STR_TGW_VIL_SN_G36KA4;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 300};
		discreteDistanceInitIndex = 0;
		picture = "\Vilas_WpnUpd\icon\w_vil_g36kv_ca.paa";
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_G36KA4_SHORT;
	};
	
	class vil_G36VA4 : vil_G36KA4 {
		displayName = $STR_TGW_VIL_G36VA4;
		displayNameShort = "$STR_TGW_VIL_SN_G36VA4";
		picture = "\Vilas_WpnUpd\icon\w_vil_g36a4_ca.paa";
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_G36VA4;
	};
	
	class vil_MG4 : m249 {
		//scope = private;
		displayName = $STR_TGW_VIL_MG4;
		picture = "\Vilas_WpnUpd\icon\w_vil_mg4_ca.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		class Library {
			libTextDesc = $STR_TGW_VIL_MG4_LIB;
		};
		class Armory {
			type = 7;
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_MG4_SHORT;
	};
	
	class vil_MG4E : m249 {
		scope = public;
		displayName = $STR_TGW_VIL_MG4_SCOPE;
		weaponInfoType = "RscWeaponEmpty";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		//discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		//discreteDistanceInitIndex = 2;
		picture = "\Vilas_WpnUpd\icon\w_vil_mg4e_ca.paa";
		class Library {
			libTextDesc = $STR_TGW_VIL_MG4_LIB;
		};
		class Armory {
			type = 7;
			author = $STR_VILAS_AUTHOR;
		};
		//descriptionShort = $STR_TGW_VIL_MG4_SCOPE_SHORT;
	};
	
	class Launcher;
	class vil_CG84T : Launcher {
		htMin = 1;
		htMax = 460;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		//scope = private;
		displayName = $STR_TGW_VIL_CG;
		magazines[] = {"Vil_CG_84", "Vil_CG_FFV502"};
		sound[] = {"\Vilas_WpnUpd\sounds\carlGustav", db20, 1, 1400};
		drySound[] = {"Ca\Sounds_E\Weapons_E\M47\dry", 0.0001, 1, 10};
		reloadMagazineSound[] = {"Ca\Sounds_E\Weapons_E\M47\rocket_reload", 1.0, 1, 30};
		soundFly[] = {"Ca\Sounds_E\Weapons_E\M47\rocket_fly", db10, 1, 500};
		visionMode[] = {"Normal", NVG};
		minRange = 20;
		midRange = 250;
		maxRange = 1000;
		class Library {
			libTextDesc = $STR_TGW_VIL_CG_LIB;
		};
		class Armory {
			author = $STR_VILAS_AUTHOR;
		};
		descriptionShort = $STR_TGW_VIL_CG_SHORT;
		weaponInfoType = "RscWeaponRangeFinder";
	};
	
	class vil_HK416_Aim : M4A1 {
		displayName = $STR_TGW_VIL_HK416_AIM;
		weaponInfoType = "RscWeaponEmpty";
		descriptionShort = $STR_TGW_VIL_HK416_SHORT;
		class Armory {
			description = $STR_TGW_VIL_HK416_LIB;
			author = $STR_VILAS_AUTHOR;
		};
		modes[] = {"Single", "Burst", "FullAuto"};
	};
	
	class vil_HK416_IS : vil_HK416_Aim {
		displayName = $STR_TGW_VIL_HK416_IS;
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {25, 50, 75, 100, 150, 175, 200, 250, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 8;
		descriptionShort = $STR_TGW_VIL_HK416_SHORT;
		picture = "\Vilas_WpnUpd\icon\w_vil_hk416_is_ca.paa";
		class Armory {
			description = $STR_TGW_VIL_HK416_LIB;
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_HK416_EOT : vil_HK416_Aim {
		displayName = $STR_TGW_VIL_HK416_EOT;
		weaponInfoType = "RscWeaponEmpty";
		picture = "\Vilas_WpnUpd\icon\w_vil_hk416_eot_ca.paa";
		descriptionShort = $STR_TGW_VIL_HK416_SHORT;
		class Armory {
			description = $STR_TGW_VIL_HK416_LIB;
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class vil_HK416_GL : vil_HK416_Aim {
		displayName = $STR_TGW_VIL_HK416_GL;
		picture = "\Vilas_WpnUpd\icon\w_vil_hk416_gl_ca.paa";
		weaponInfoType = "RscWeaponEmpty";
		distanceZoomMin = 200;
		distanceZoomMax = 200;
		class AGCMuzzle : M203Muzzle {
			displayName = $STR_TGW_VIL_AGC;
		};
		muzzles[] = {this, "AGCMuzzle"};
		descriptionShort = $STR_TGW_VIL_HK416_GL_SHORT;
		class Armory {
			description = $STR_TGW_VIL_HK416_LIB;
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	class VIL_HK416_EDR : vil_HK416_Aim {
		displayName = $STR_TGW_VIL_HK416_EDR;
		weaponInfoType = "RscWeaponEmpty";
		descriptionShort = $STR_TGW_VIL_HK416_SHORT;
		picture = "\Vilas_WpnUpd\icon\w_vil_hk416_edr_ca.paa";
		class Armory {
			description = $STR_TGW_VIL_HK416_LIB;
			author = $STR_VILAS_AUTHOR;
		};
	};
	
	/*********************************************************
			Vilas Western/NATO Weapons END
	**********************************************************/
	
};

class CfgVehicles {
	class ReammoBox; //Extended
	
	class vil_mix_weaponsbox  : ReammoBox {
		class TransportMagazines  {
			class _xx_vil_FALm  {
				magazine = "20Rnd_762x51_FNFAL";
				count = 60;
			};
			class _xx_vil_galmarm  {
				magazine = "Vil_50Rnd_556x45_G";
				count = 40;
			};
		};
	};
	
	class vil_RUammoBoxBasic70s  : ReammoBox {
		class TransportMagazines  {
			class _xx_75Rnd_762x39_RPK  {
				magazine = "vil_75Rnd_762x39_RPK";
				count = 80;
			};
		};
		//class TransportWeapons  {};
	};
	
	class vil_RUweaponBoxSupport70s  : vil_RUammoBoxBasic70s {
		class TransportMagazines  {
			class _xx_VIL_SHMEL_FTW  {
				magazine = "VIL_SHMEL_FTW";
				count = 0;
			};
			class _xx_RPG18  {
				magazine = "RPG18";
				count = 0;
			};
		};
		class TransportWeapons  {
			class _xx_RPG18  {
			weapon = "RPG18";
			count = 20;
			};
		};
	};
	
	class vil_RUammoBoxBasic80s90s  : ReammoBox {
		class TransportMagazines  {
			class _xx_75Rnd_762x39_RPK  {
				magazine = "vil_75Rnd_762x39_RPK";
				count = 40;
			};
		};
		class TransportWeapons  {
			class _xx_VIL_AKS_74_U  {
				weapon = "AKS_74_U";
				count = 4;
			};
			class _xx_VIL_AKS_74_UN_kobra  {
				weapon = "AKS_74_UN_kobra";
				count = 4;
			};
			class _xx_VIL_AK_74  {
				weapon = "AK_74";
				count = 4;
			};
		};
	};
	
	class vil_RUweaponBoxSupport80s90s  : vil_RUammoBoxBasic70s {
		class TransportMagazines  {
			class _xx_VIL_SHMEL_FTW  {
				magazine = "VIL_SHMEL_FTW";
				count = 0;
			};
			class _xx_RPG18  {
				magazine = "RPG18";
				count = 0;
			};
		};
		class TransportWeapons  {
			class _xx_VIL_RPO_A  {
				weapon = "VIL_RPO_A";
				count = 20;
			};
			class _xx_RPG22  {
				weapon = "vilas_rpg22";
				count = 20;
			};
		};
	};


	class vil_RUweaponBoxSupport2000s  : vil_RUammoBoxBasic70s {
		class TransportMagazines  {
			class _xx_75Rnd_545x39_AK  {
			magazine = "75Rnd_545x39_RPK";
			count = 20;
			};
			class _xx_VIL_SHMEL_FTW  {
			magazine = "VIL_SHMEL_FTW";
			count = 0;
			};
			class _xx_RPG18  {
			magazine = "RPG18";
			count = 0;
			};
			class _xx_AT13  {
			magazine = "AT13";
			count = 6;
			};
		};
		class TransportWeapons  {
			class _xx_VIL_RPO_A  {
				weapon = "VIL_RPO_A";
				count = 20;
			};
			class _xx_VIL_RPG26  {
				weapon = "vilas_rpg26";
				count = 20;
			};
			class _xx_MetisLauncher  {
				weapon = "MetisLauncher";
				count = 2;
			};
		};
	};
	
	class vil_RUweaponBoxSpeznas  : vil_RUammoBoxBasic70s {
		class TransportMagazines  {};
		class TransportWeapons  {
			class _xx_VIL_VSS_PSO  {
			weapon = "VSS_vintorez";
			count = 4;
			};
		};
	};
	
	class INKO_M136_USED_TUBE;	// External class reference	
	class INKO_RPG18_USED_TUBE;	// External class reference
	
	class Vil_RPO_A_USED_TUBE_XENO : INKO_RPG18_USED_TUBE {
		model = "\vilas_aks\vil_rpo_a";
	};
	class Vil_RPG22_USED_TUBE_XENO : INKO_M136_USED_TUBE {
		model = "\ca\weapons2\rpg18\rpg18_loaded";
	};
	class Vil_RPG26_USED_TUBE_XENO : INKO_M136_USED_TUBE {
		model = "\ca\weapons2\rpg18\rpg18_loaded";
	};
};