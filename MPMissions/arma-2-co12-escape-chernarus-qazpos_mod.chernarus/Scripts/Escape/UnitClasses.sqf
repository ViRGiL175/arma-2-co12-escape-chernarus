/*
 * Description: This file contains vheicle types and unit types for most units spawned in the mission.
 * "Random array" (used below) means that array will be used to spawn units, and that chance is 1/n that each element will be spawned on each spawn. The array can contain 
 * many elements of the same type, so the example array ["Offroad_DSHKM_INS", "Pickup_PK_INS", "Pickup_PK_INS"] will spawn an Offroad with 1/3 probability, and a 
 * Pickup with 2/3 probability.
 *
 * Except for the classes specified in this file, classes are specified in the following files: CreateSearchChopper.sqf, EscapeSurprises (RUSSIANSEARCHCHOPPER) 
 * and RunExtraction.sqf, all in folder Scripts\Escape\.
 */

private ["_enemyFrequency"];
private ["_secWep"];
private ["_secWepa"];

guardWeapon = [
    "huntingrifle",
    "LeeEnfield",
    "Sa58V_EP1",
    "Saiga12K",
    "AK_74",
    "AK_47_M",
    "M1014",
    "AK_107_kobra"
];
guardAmmo = [
    "5x_22_LR_17_HMR",
    "10x_303",
    "30Rnd_762x39_AK47",
    "8Rnd_B_Saiga12_74Slug",
    "30Rnd_545x39_AK",
    "30Rnd_762x39_AK47",
    "8Rnd_B_Beneli_Pellets",
    "30Rnd_545x39_AK"
];

_secWep = [
    "Makarov",
    "MakarovSD",
    "revolver_EP1",
    "Sa61_EP1",
    "UZI_EP1",
    "Colt1911",
    "M9",
    "Makarov",
    "revolver_EP1",
    "Sa61_EP1",
    "UZI_EP1",
    "Colt1911",
    "M9",
    "glock17_EP1"
];
_secWepa = [
    "8Rnd_9x18_Makarov",
    "8Rnd_9x18_MakarovSD",
    "6Rnd_45ACP",
    "20Rnd_B_765x17_Ball",
    "30Rnd_9x19_UZI",
    "7Rnd_45ACP_1911",
    "15Rnd_9x19_M9",
    "8Rnd_9x18_Makarov",
    "6Rnd_45ACP",
    "20Rnd_B_765x17_Ball",
    "30Rnd_9x19_UZI",
    "7Rnd_45ACP_1911",
    "15Rnd_9x19_M9",
    "17Rnd_9x19_glock17"
];

_Wep = [
    "huntingrifle",
    "LeeEnfield",
    "Sa58V_EP1",
    "Saiga12K",
    "AK_74",
    "AK_47_M",
    "AKS_74"
];
_Wepa = [
    "5x_22_LR_17_HMR",
    "10x_303",
    "30Rnd_762x39_AK47",
    "8Rnd_B_Saiga12_74Slug",
    "30Rnd_545x39_AK",
    "30Rnd_762x39_AK47",
    "30Rnd_545x39_AK"
];

_gearItem = [
    "HandGrenade_East",
    "HandGrenade_East",
    "SmokeShell",
    "PipeBomb",
    "MineE", "TimeBomb",
    "SmokeShellRed",
    "SmokeShellGreen",
    "SmokeShellBlue",
    "SmokeShellOrange",
    "SmokeShellPurple",
    "SmokeShellYellow",
    "HandGrenade_East",
    "HandGrenade_East",
    "PipeBomb",
    "MineE",
    "HandGrenade_East",
    "HandGrenade_East",
    "PipeBomb",
    "MineE",
    "HandGrenade_East",
    "HandGrenade_East",
    "PipeBomb",
    "MineE",
    "HandGrenade_East",
    "HandGrenade_East",
    "PipeBomb",
    "MineE"
];

_rndgear = floor random (count _gearItem);
_gear = _gearItem select _rndgear;

_rnd = floor random (count _secWep);
_pistol = _secWep select _rnd;
_ammopistol = _secWepa select _rnd;

_rndpri = floor random (count _Wep);
_primary = _Wep select _rndpri;
_ammoprimary = _Wepa select _rndpri;

drn_var_Escape_InnerFenceGuardGearItems = _gear;

drn_var_Escape_InnerFenceGuardPrimaryWeapon = _primary;
drn_var_Escape_InnerFenceGuardPrimaryWeaponMagazine = _ammoprimary;


_enemyFrequency = _this select 0;

// Random array. Start position guard types.
drn_arr_Escape_StartPositionGuardTypes = [
    //HulaZone - Ins
    "GUE_Woodlander2",
    "Ins_Soldier_AR",
    "GUE_Villager3",
    "Ins_Soldier_GL",
    "GUE_Woodlander1",
    "Ins_Soldier_1",
    "GUE_Woodlander3",
    "GUE_Villager4",
    "Ins_Soldier_2",
    "Ins_Soldier_Sab",
    "Ins_Soldier_Sapper",
    "Ins_Woodlander2",
    "Ins_Woodlander3"
];

// Inner fence guard's secondary weapon (and corresponding magazine type).
// Random array. Start position guard secondary types.
drn_var_Escape_InnerFenceGuardSecondaryWeapon = _pistol;
drn_var_Escape_InnerFenceGuardSecondaryWeaponMagazine = _ammopistol;

// Random array. Civilian vehicle classes for ambient traffic. (Can also be set to a faction name).
drn_arr_Escape_MilitaryTraffic_CivilianVehicleClasses = [
    "TT650_TK_CIV_EP1",
    "SUV_TK_CIV_EP1",
    "SkodaBlue",
    "TowingTractor",
    "SkodaGreen",
    "Ikarus",
    "SkodaRed",
    "LandRover_TK_CIV_EP1",
    "Skoda",
    "VWGolf",
    "TT650_Civ",
    "HMMWV_Civ",
    "MMT_Civ",
    "hilux1_civil_2_covered",
    "ATV_US_EP1_Civ",
    "hilux1_civil_1_open",
    "Lada2_TK_CIV_EP1",
    "hilux1_civil_3_open",
    "GAZ_Vodnik_MedEvac",
    "S1203_TK_CIV_EP1",
    "car_hatchback",
    "VolhaLimo_TK_CIV_EP1",
    "M1133_MEV_EP1_Civ",
    "datsun1_civil_1_open",
    "datsun1_civil_2_covered",
    "Ikarus_TK_CIV_EP1",
    "datsun1_civil_3_open",
    "S1203_ambulance_EP1",
    "V3S_Civ",
    "BTR40_TK_GUE_EP1_Civ",
    "car_sedan",
    "Tractor",
    "UralCivil",
    "UralCivil2",
    "Lada_base",
    "LadaLM",
    "Lada2",
    "Lada1",

    //HulaZone
    "SkodaBlue",
    "SkodaGreen",
    "SkodaRed",
    "Skoda",
    "VWGolf",
    "TT650_Civ",
    "MMT_Civ",
    "hilux1_civil_2_covered",
    "hilux1_civil_1_open",
    "hilux1_civil_3_open",
    "car_hatchback",
    "datsun1_civil_1_open",
    "datsun1_civil_2_covered",
    "datsun1_civil_3_open",
    "V3S_Civ",
    "car_sedan",
    "Tractor",
    "UralCivil",
    "UralCivil2",
    "Lada_base",
    "LadaLM",
    "Lada2",
    "Lada1",
    "Lada1_TK_CIV_EP1",
    "Lada2_TK_CIV_EP1",
    "Kamaz",
    "KamazOpen",
    "S1203_TK_CIV_EP1",
    "Old_moto_TK_Civ_EP1",
    "Old_bike_TK_CIV_EP1",
    "TT650_TK_CIV_EP1",
    "VolhaLimo_TK_CIV_EP1",
    "Volha_1_TK_CIV_EP1",
    "Volha_2_TK_CIV_EP1",
    "V3S_Refuel_TK_GUE_EP1",
    "V3S_Open_TK_CIV_EP1",
    "SUV_TK_CIV_EP1"
];

// Random arrays. Enemy vehicle classes for ambient traffic. (Can also be set to a faction name).
// Variable _enemyFrequency applies to server parameter, and can be one of the values 1 (Few), 2 (Some) or 3 (A lot).
switch (_enemyFrequency) do {
    case 1: {
        drn_arr_Escape_MilitaryTraffic_EnemyVehicleClasses = [
            "T34_INS",
            "Offroad_DSHKM_INS",
            "V3S_Open_TK_CIV_EP1",
            "MMT_Civ",
            "BAF_Jackal2_L2A1_D",
            "Pickup_PK_INS",
            "ArmoredSUV_PMC_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "MAZ_543_SCUD_TK_EP1",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "BMP2_INS",
            "BMP2_HQ_INS",
            "BRDM2_INS",
            "BRDM2_ATGM_INS",
            "T72_INS",
            "ZSU_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",

            //HulaZone
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "BMP2_INS",
            "BMP2_HQ_INS",
            "BRDM2_INS",
            "BRDM2_ATGM_INS",
            "T72_INS",
            "ZSU_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "GRAD_INS",
            "UralRepair_INS",
            "UralRepair_INS",
            "Kamaz",
            "KamazOpen",
            "V3S_Refuel_TK_GUE_EP1",
            "Ural_ZU23_INS",
            "ATV_US_EP1",
            "GRAD_INS",
            "BMP3",
            "KamazRepair",
            "KamazReammo",
            "GAZ_Vodnik_HMG"
        ];
    };
    case 2: {
        drn_arr_Escape_MilitaryTraffic_EnemyVehicleClasses = [
            "BTR40_MG_TK_INS_EP1_INS",
            "V3S_Open_TK_CIV_EP1",
            "MMT_Civ",
            "BAF_Jackal2_L2A1_D",
            "GRAD_TK_EP1",
            "Offroad_DSHKM_INS",
            "ArmoredSUV_PMC_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "BMP2_INS",
            "BMP2_HQ_INS",
            "BRDM2_INS",
            "BRDM2_ATGM_INS",
            "T72_INS",
            "ZSU_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",

            //HulaZone
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "BMP2_INS",
            "BMP2_HQ_INS",
            "BRDM2_INS",
            "BRDM2_ATGM_INS",
            "T72_INS",
            "ZSU_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "GRAD_INS",
            "UralRepair_INS",
            "UralRepair_INS",
            "Kamaz",
            "KamazOpen",
            "V3S_Refuel_TK_GUE_EP1",
            "Ural_ZU23_INS",
            "ATV_US_EP1",
            "GRAD_INS",
            "BMP3",
            "KamazRepair",
            "KamazReammo",
            "GAZ_Vodnik_HMG"
        ];
    };
    default {
        drn_arr_Escape_MilitaryTraffic_EnemyVehicleClasses = [
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "V3S_Open_TK_CIV_EP1",
            "MMT_Civ",
            "HMMWV_Armored",
            "LandRover_Special_CZ_EP1",
            "BTR40_MG_TK_GUE_EP1",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "BMP2_INS",
            "BMP2_HQ_INS",
            "BRDM2_INS",
            "BRDM2_ATGM_INS",
            "T72_INS",
            "ZSU_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "BMP2_INS",
            "BMP2_HQ_INS",
            "BRDM2_INS",
            "BRDM2_ATGM_INS",
            "T72_INS",
            "ZSU_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "BMP2_INS",
            "BMP2_HQ_INS",
            "BRDM2_INS",
            "BRDM2_ATGM_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",

            //HulaZone
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "BMP2_INS",
            "BMP2_HQ_INS",
            "BRDM2_INS",
            "BRDM2_ATGM_INS",
            "T72_INS",
            "ZSU_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "BMP2_INS",
            "BMP2_HQ_INS",
            "BRDM2_INS",
            "BRDM2_ATGM_INS",
            "T72_INS",
            "ZSU_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "BMP2_INS",
            "BMP2_HQ_INS",
            "BRDM2_INS",
            "BRDM2_ATGM_INS",
            "TT650_Ins",
            "Offroad_DSHKM_INS",
            "Pickup_PK_INS",
            "UAZ_INS",
            "UAZ_AGS30_INS",
            "UAZ_MG_INS",
            "UAZ_SPG9_INS",
            "Ural_INS",
            "UralOpen_INS",
            "Ural_ZU23_INS",
            "BMP2_Ambul_INS",
            "UralRefuel_INS",
            "GRAD_INS",
            "UralRepair_INS",
            "UralRepair_INS",
            "Kamaz",
            "KamazOpen",
            "V3S_Refuel_TK_GUE_EP1",
            "Ural_ZU23_INS",
            "ATV_US_EP1",
            "GRAD_INS",
            "BMP3",
            "KamazRepair",
            "KamazReammo",
            "GAZ_Vodnik_HMG"
        ];
    };
};

// Random array. General infantry types. E.g. village patrols, ambient infantry, ammo depot guards, communication center guards, etc.
drn_arr_Escape_InfantryTypes = [
    "UN_CDF_Soldier_B_EP1",
    "INS_Bardak",
    "Ins_Soldier_AT",
    "Dixon_PMC",
    "Reynolds_PMC",
    "Soldier_AA_PMC",
    "Soldier_Crew_PMC",
    "Ins_Soldier_AR",
    "Ins_Soldier_MG",
    "Ins_Soldier_Medic",
    "UN_CDF_Soldier_AT_EP1",
    "Ins_Soldier_2",
    "TK_Soldier_SniperH_EP1",
    "Soldier_Bodyguard_AA12_PMC",
    "Ins_Soldier_GL",
    "Ins_Soldier_MG",
    "Ins_Soldier_Medic",
    "Ins_Soldier_1",
    "Soldier_Medic_PMC",
    "Ins_Soldier_Sniper",
    "Ins_Soldier_AR",
    "Soldier_Sniper_PMC",
    "Ins_Soldier_MG",
    "Ins_Soldier_Medic",
    "Ins_Soldier_1",
    "Ins_Soldier_2",
    "Ins_Soldier_AR",
    "Ins_Soldier_GL",
    "Ins_Soldier_MG",
    "Ins_Soldier_Medic",
    "Ins_Soldier_1",
    "Ins_Soldier_2",
    "Ins_Soldier_Sniper",
    "Ins_Soldier_AR",
    "Ins_Soldier_GL",
    "Ins_Soldier_MG",
    "Ins_Soldier_Medic",
    "Ins_Soldier_1",
    "Ins_Soldier_2",
    "Ins_Soldier_Sniper",
    "Rus_Commander",
    "Ru_Commander",
    "Ins_Bardak",
    "Ins_Lopotev",
    "Ins_Commander",
    "Tk_Soldier_Night_1_EP1",
    "RU_Soldier_Spotter",
    "TK_Soldier_SL_EP1",
    "Ins_Soldier_Pilot",
    "Ins_Villager3",
    "UN_CDF_Soldier_AT_EP1",
    "UN_CDF_Soldier_Officer_EP1",
    "UN_CDF_Soldier_MG_EP1",
    "GUE_Soldier_Medic",
    "Soldier_Bodyguard_M4_PMC",
    "Soldier_GL_M16A2_PMC",
    "Soldier_AA_PMC",
    "INS_Lopotev",
    "RU_Soldier_Officer",
    "RU_Soldier_HAT",
    "RU_Soldier_LAT",

    //HulaZone
    "Ins_Soldier_AA",
    "Ins_Soldier_AT",
    "Ins_Soldier_AT",
    "Ins_Soldier_AR",
    "Ins_Soldier_GL",
    "Ins_Soldier_MG",
    "Ins_Soldier_Medic",
    "Ins_Soldier_1",
    "Ins_Soldier_2",
    "Ins_Soldier_Sniper",
    "Ins_Soldier_AR",
    "Ins_Soldier_GL",
    "Ins_Soldier_MG",
    "Ins_Soldier_Medic",
    "Ins_Soldier_1",
    "Ins_Soldier_2",
    "Ins_Soldier_Sniper",
    "Ins_Soldier_AR",
    "Ins_Soldier_GL",
    "Ins_Soldier_MG",
    "Ins_Soldier_Medic",
    "Ins_Soldier_1",
    "Ins_Soldier_2",
    "Ins_Soldier_Sniper",
    "Ins_Soldier_AR",
    "Ins_Soldier_GL",
    "Ins_Soldier_MG",
    "Ins_Soldier_Medic",
    "Ins_Soldier_1",
    "Ins_Soldier_2",
    "Ins_Soldier_Sniper",
    "Ins_Soldier_AR",
    "Ins_Soldier_GL",
    "Ins_Soldier_MG",
    "Ins_Soldier_Medic",
    "Ins_Soldier_1",
    "Ins_Soldier_2",
    "Ins_Soldier_Sniper",
    "Ins_Soldier_Crew",
    "Ins_Soldier_Sab",
    "Ins_Woodlander1",
    "Ins_Woodlander2",
    "Ins_Woodlander3",
    "INS_Villager3",
    "INS_Villager4",
    "Ins_Soldier_CO",
    "Ins_Soldier_AA",
    "Ins_Soldier_AT",
    "Ins_Soldier_AT",
    "Ins_Soldier_AR",
    "Ins_Soldier_GL",
    "Ins_Soldier_MG",
    "Ins_Soldier_Medic",
    "Ins_Soldier_1",
    "Ins_Soldier_2",
    "Ins_Soldier_Sniper",
    "Ins_Soldier_AR",
    "Ins_Soldier_GL",
    "Ins_Soldier_MG",
    "Ins_Soldier_Medic",
    "Ins_Soldier_1",
    "Ins_Soldier_2",
    "Ins_Soldier_Sniper",
    "Ins_Soldier_AR",
    "Ins_Soldier_GL",
    "Ins_Soldier_MG",
    "Ins_Soldier_Medic",
    "Ins_Soldier_1",
    "Ins_Soldier_2",
    "Ins_Soldier_Sniper",
    "Ins_Soldier_AR",
    "Ins_Soldier_GL",
    "Ins_Soldier_MG",
    "Ins_Soldier_Medic",
    "Ins_Soldier_1",
    "Ins_Soldier_2",
    "Ins_Soldier_Sniper",
    "Ins_Soldier_AR",
    "Ins_Soldier_GL",
    "Ins_Soldier_MG",
    "Ins_Soldier_Medic",
    "Ins_Soldier_1",
    "Ins_Soldier_2",
    "Ins_Soldier_Sniper",
    "Ins_Soldier_Crew",
    "Ins_Soldier_Sab",
    "Ins_Woodlander1",
    "Ins_Woodlander2",
    "Ins_Woodlander3",
    "Ins_Soldier_CO",
    "RUS_Commander",
    "RU_Soldier_Sniper",
    "RU_Soldier_Spotter",
    "RUS_Soldier1",
    "RUS_Soldier2",
    "RUS_Soldier3",
    "RUS_Soldier_GL",
    "RUS_Soldier_Marksman",
    "RUS_Soldier_TL",
    "MVD_Soldier",
    "MVD_Soldier_AT",
    "MVD_Soldier_GL",
    "MVD_Soldier_MG",
    "MVD_Soldier_Marksman",
    "MVD_Soldier_Sniper",
    "MVD_Soldier_TL"
];

drn_arr_Escape_SpecInfantryTypes = [
    "RU_Soldier_Spotter",
    "RU_Soldier_SniperH",
    "RU_Soldier_Sniper",
    "GUE_Soldier_Scout",
    "TK_Soldier_Spotter_EP1",
    "TK_Soldier_Sniper_Night_EP1",
    "TK_Soldier_Sniper_EP1"
];

drn_arr_Escape_CiviInfantryTypes = [
    "GUE_Villager3",
    "GUE_Villager4",
    "GUE_Woodlander1",
    "GUE_Woodlander2",
    "GUE_Woodlander3",
    "GUE_Worker1"
];

drn_arr_Escape_MillitaryInfantryTypes = [
    "RU_Soldier_Officer",
    "RU_Soldier",
    "RU_Soldier2",
    "RU_Soldier_GL",
    "RU_Soldier_MG",
    "RU_Soldier_Marksman",
    "RU_Soldier_Medic"
];

drn_arr_Escape_SpetzInfantryTypes = [
    "RUS_Commander",
    "RUS_Soldier1",
    "RUS_Soldier2",
    "RUS_Soldier3",
    "RUS_Soldier_Marksman",
    "RUS_Soldier_Sab",
    "RUS_Soldier_TL"
];

drn_arr_Escape_PMCInfantryTypes = [
    "Soldier_Medic_PMC",
    "Soldier_Sniper_PMC",
    "Soldier_Bodyguard_M4_PMC",
    "Soldier_MG_PMC",
    "Soldier_AT_PMC",
    "Soldier_Engineer_PMC",
    "Soldier_M4A3_PMC"
];

drn_arr_Escape_ChDKZInfantryTypes = [
    "INS_Soldier_1",
    "INS_Soldier_2",
    "INS_Soldier_CO",
    "INS_Soldier_GL",
    "INS_Soldier_Medic",
    "INS_Soldier_Sab",
    "INS_Soldier_Sniper"
];

// Random array. A roadblock has a manned vehicle. This array contains possible manned vehicles (can be of any kind, like cars, armored and statics).
drn_arr_Escape_RoadBlock_MannedVehicleTypes = [
    "Offroad_DSHKM_INS",
    "Pickup_PK_INS",
    "ArmoredSUV_PMC",
    "BTR40_MG_TK_INS_EP1",
    "BRDM2_ATGM_TK_EP1",
    "LandRover_Special_CZ_EP1",
    "UAZ_INS",
    "UAZ_AGS30_INS",
    "UAZ_MG_INS",
    "UAZ_SPG9_INS",
    "BMP2_INS",
    "BMP2_HQ_INS",
    "BRDM2_INS",
    "BRDM2_ATGM_INS",
    "T72_INS",
    "ZSU_INS",
    "AGS_Ins",
    "DSHKM_Ins",
    "DSHkM_Mini_TriPod",
    "SPG9_Ins",

    //HulaZone
    "Offroad_DSHKM_INS",
    "Pickup_PK_INS",
    "UAZ_INS",
    "UAZ_AGS30_INS",
    "UAZ_MG_INS",
    "UAZ_SPG9_INS",
    "BMP2_INS",
    "BMP2_HQ_INS",
    "BRDM2_INS",
    "BRDM2_ATGM_INS",
    "T72_INS",
    "ZSU_INS",
    "AGS_Ins",
    "DSHKM_Ins",
    "DSHkM_Mini_TriPod",
    "SPG9_Ins",
    "Ural_ZU23_INS",
    "GAZ_Vodnik_HMG",
    "ZSU_INS"
];

// Random array. Vehicle classes (preferrably trucks) transporting enemy reinforcements.
drn_arr_Escape_ReinforcementTruck_vehicleClasses = [
    "Ural_INS",
    "UralOpen_INS",
    "SUV_PMC",

    //HulaZone
    "Ural_INS",
    "UralOpen_INS",
    "Kamaz",
    "KamazOpen"
];
// Total cargo for reinforcement trucks. Each element corresponds to a vehicle (array element) in array drn_arr_Escape_ReinforcementTruck_vehicleClasses above.
drn_arr_Escape_ReinforcementTruck_vehicleClassesMaxCargo = [
    14,
    14,
    5,

    //HulaZone
    14,
    14
];

// Random array. Motorized search groups are sometimes sent to look for you. This array contains possible class definitions for the vehicles.
drn_arr_Escape_MotorizedSearchGroup_vehicleClasses = [
    "BMP2_INS",
    "BMP3",
    "BTR90",
    "GAZ_Vodnik",
    "ArmoredSUV_PMC",

    //HulaZone
    "BMP2_INS",
    "BMP3",
    "BTR90",
    "GAZ_Vodnik",
    "GAZ_Vodnik_HMG",
    "BRDM2_INS",
    "BRDM2_ATGM_INS"
];
// Total cargo motorized search group vehicle. Each element corresponds to a vehicle (array element) in array drn_arr_Escape_MotorizedSearchGroup_vehicleClasses above.
drn_arr_Escape_MotorizedSearchGroup_vehicleClassesMaxCargo = [
    7,
    5,
    7,
    10,
    7,

    //HulaZone
    7,
    5,
    7,
    10
];

// A communication center is guarded by vehicles depending on variable _enemyFrequency. 1 = a random light armor. 2 = a random heavy armor. 3 = a random 
// light *and* a random heavy armor.

// Random array. Light armored vehicles guarding the communication centers.
drn_arr_ComCenDefence_lightArmorClasses = [
    "BMP2_INS",
    "BRDM2_INS",
    "BMP3",
    "BTR90",
    "GAZ_Vodnik",
    "ArmoredSUV_PMC",
    "T34",
    "ZSU_INS",
    "BTR60_TK_EP1",
    "BRDM2_ATGM_INS",

    //HulaZone
    "BMP2_INS",
    "BRDM2_INS",
    "BMP3",
    "BTR90",
    "GAZ_Vodnik",
    "BRDM2_INS",
    "BRDM2_ATGM_INS"
];
// Random array. Heavy armored vehicles guarding the communication centers.
drn_arr_ComCenDefence_heavyArmorClasses = [
    "T72_INS",
    "ZSU_INS",
    "2S6M_Tunguska",
    "T90",
    "ArmoredSUV_PMC",
    "T34",
    "ZSU_INS",
    "BTR60_TK_EP1",
    "BRDM2_ATGM_INS",

    //HulaZone
    "T72_INS",
    "ZSU_INS",
    "2S6M_Tunguska",
    "T90"
];

// A communication center contains two static weapons (in two corners of the communication center).
// Random array. Possible static weapon types for communication centers.
drn_arr_ComCenStaticWeapons = [
    "DSHkM_Mini_TriPod",
    "AGS_Ins",
    "DSHKM_Ins",
    "DSHKM_Ins",

    //HulaZone
    "DSHKM_Ins",
    "2b14_82mm_INS",
    "SearchLight_INS",
    "ZU23_Ins",
    "D30_Ins",
    "AGS_Ins",
    "SPG9_Ins"
];
// A communication center have two parked and empty vehicles of the following possible types.
drn_arr_ComCenParkedVehicles = [
    "TT650_Ins",
    "GRAD_INS",
    "Offroad_DSHKM_INS",
    "Pickup_PK_INS",
    "ArmoredSUV_PMC",
    "UAZ_INS",
    "UAZ_INS",
    "UAZ_INS",
    "UAZ_INS",
    "UAZ_INS",
    "UAZ_INS",
    "UAZ_AGS30_INS",
    "UAZ_MG_INS",
    "UAZ_SPG9_INS",

    //HulaZone
    "TT650_Ins",
    "Offroad_DSHKM_INS",
    "Pickup_PK_INS",
    "UAZ_INS",
    "UAZ_INS",
    "UAZ_INS",
    "UAZ_INS",
    "UAZ_INS",
    "UAZ_INS",
    "UAZ_AGS30_INS",
    "UAZ_MG_INS",
    "UAZ_SPG9_INS",
    "GRAD_INS",
    "UralRepair_INS"
];

// Random array. Enemies sometimes use civilian vehicles in their unconventional search for players. The following car types may be used.
drn_arr_Escape_EnemyCivilianCarTypes = [
    "SkodaBlue",
    "Ikarus",
    "VWGolf",
    "MMT_Civ",
    "hilux1_civil_2_covered",
    "car_hatchback",
    "datsun1_civil_2_covered",
    "Lada_base",
    "LadaLM",
    "Lada2",
    "Lada1",

    //HulaZone
    "SkodaBlue",
    "SkodaGreen",
    "SkodaRed",
    "Skoda",
    "VWGolf",
    "MMT_Civ",
    "hilux1_civil_2_covered",
    "car_hatchback",
    "datsun1_civil_2_covered",
    "V3S_Civ",
    "car_sedan",
    "UralCivil",
    "UralCivil2",
    "Lada_base",
    "LadaLM",
    "Lada2",
    "Lada1"
];

// Vehicles, weapons and ammo at ammo depots

// Random array. An ammo depot contains one static weapon of the followin types:
drn_arr_Escape_AmmoDepot_StaticWeaponClasses = [
    "DSHkM_Mini_TriPod",
    "AGS_Ins",
    "DSHKM_Ins",
    "DSHKM_Ins",

    //HulaZone
    "DSHkM_Mini_TriPod",
    "AGS_Ins",
    "DSHKM_Ins",
    "DSHKM_Ins",
    "SearchLight_INS",
    "2b14_82mm_INS",
    "D30_Ins",
    "ZU23_Ins",
    "SPG9_Ins"
];
// An ammo depot have one parked and empty vehicle of the following possible types.
drn_arr_Escape_AmmoDepot_ParkedVehicleClasses = [
    "Offroad_DSHKM_INS",
    "Pickup_PK_INS",
    "UAZ_INS",
    "UAZ_AGS30_INS",
    "UAZ_MG_INS",
    "UAZ_SPG9_INS",
    "Ural_INS",
    "UralOpen_INS",

    //HulaZone
    "Offroad_DSHKM_INS",
    "Pickup_PK_INS",
    "UAZ_INS",
    "UAZ_AGS30_INS",
    "UAZ_MG_INS",
    "UAZ_SPG9_INS",
    "Ural_INS",
    "UralOpen_INS",
    "GRAD_INS",
    "UralRepair_INS",
    "Kamaz",
    "KamazOpen",
    "BRDM2_ATGM_INS",
    "BRDM2_INS",
    "GAZ_Vodnik_MedEvac"
];

// The following arrays define weapons and ammo contained at the ammo depots
// Index 0: Weapon classname.
// Index 1: Weapon's probability of presence (in percent, 0-100).
// Index 2: If weapon exists, crate contains at minimum this number of weapons of current class.
// Index 3: If weapon exists, crate contains at maximum this number of weapons of current class.
// Index 4: Array of magazine classnames. Magazines of these types are present if weapon exists.
// Index 5: Number of magazines per weapon that exists.

// Weapons and ammo in the basic weapons box
drn_arr_AmmoDepotBasicWeapons = [];
// Insurgent weapons
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_47_M", 40, 8, 12, ["30Rnd_762x39_AK47"], 14]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_47_S", 40, 8, 12, ["30Rnd_762x39_AK47"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_74", 40, 8, 12, ["30Rnd_545x39_AK"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_74_GL", 35, 2, 4, ["30Rnd_545x39_AK", "1Rnd_SMOKE_GP25"], 15]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_74_GL", 35, 2, 4, ["30Rnd_545x39_AK", "1Rnd_HE_GP25"], 20]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AKS_74_U", 25, 3, 6, ["30Rnd_545x39_AK"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["PK", 30, 2, 3, ["100Rnd_762x54_PK"], 15]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["Makarov", 85, 8, 12, ["8Rnd_9x18_Makarov"], 10]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["revolver_EP1", 25, 8, 12, ["6Rnd_45ACP"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["revolver_gold_EP1", 5, 8, 12, ["6Rnd_45ACP"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["M16A2", 25, 1, 8, ["30Rnd_556x45_Stanag"], 15]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["M4A1", 35, 1, 8, ["30Rnd_556x45_Stanag"], 15]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["M1014", 25, 2, 4, ["8Rnd_B_Beneli_74Slug", "8Rnd_B_Beneli_Pellets"], 15]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AA12_PMC", 10, 1, 2, ["20Rnd_B_AA12_74Slug", "20Rnd_B_AA12_HE", "20Rnd_B_AA12_Pellets"], 5]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["glock17_EP1", 25, 8, 12, ["17Rnd_9x19_glock17"], 5]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["Colt1911", 37, 8, 12, ["7Rnd_45ACP_1911"], 7]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["M9", 25, 1, 2, ["15Rnd_9x19_M9", "15Rnd_9x19_M9SD"], 10]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["M9SD", 15, 1, 2, ["30Rnd_9x19_UZI_SD"], 10]];

//HulaZone
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_47_M", 35, 8, 12, ["30Rnd_762x39_AK47"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_47_S", 35, 8, 12, ["30Rnd_762x39_AK47"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_74", 35, 8, 12, ["30Rnd_545x39_AK"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["Sa58P_EP1", 35, 6, 12, ["30Rnd_762x39_SA58", "30Rnd_762x39_AK47"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["Sa58V_EP1", 35, 6, 12, ["30Rnd_762x39_SA58", "30Rnd_762x39_AK47"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["VIL_Zastava_M84", 35, 3, 6, ["100Rnd_762x54_PK"], 4]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["Makarov", 35, 4, 6, ["8Rnd_9x18_Makarov"], 6]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["VIL_APS", 35, 4, 6, ["VIL_20Rnd_9x18_aps"], 6]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["VIL_TT33", 35, 4, 6, ["VIL_8Rnd_TT"], 6]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["VIL_SKS", 35, 8, 12, ["VIL_10Rnd_762x39_SKS"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_74_GL", 25, 2, 4, ["30Rnd_545x39_AK", "1Rnd_SMOKE_GP25"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_74_GL", 25, 2, 4, ["30Rnd_545x39_AK", "1Rnd_HE_GP25"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AKS_74_U", 25, 2, 4, ["30Rnd_545x39_AK"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["FN_FAL", 25, 2, 4, ["20Rnd_762x51_FNFAL"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["PK", 25, 1, 3, ["100Rnd_762x54_PK"], 4]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["VIL_PK", 25, 1, 3, ["100Rnd_762x54_PK"], 4]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["VIL_RPD", 25, 1, 3, ["VIL_100Rnd_762x39_RPD"], 4]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["RPK_74", 25, 1, 3, ["75Rnd_545x39_RPK", "30Rnd_545x39_AK"], 4]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["glock17_EP1", 25, 4, 6, ["17Rnd_9x19_glock17"], 6]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["revolver_EP1", 25, 4, 6, ["6Rnd_45ACP"], 6]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["Sa61_EP1", 25, 2, 4, ["20Rnd_B_765x17_Ball", "10Rnd_B_765x17_Ball"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["UZI_EP1", 25, 2, 4, ["30Rnd_9x19_UZI"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_74_GL_kobra", 15, 1, 2, ["30Rnd_545x39_AK", "1Rnd_HE_GP25"], 12]];

// Russian weapons
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_107_Kobra", 20, 1, 3, ["30Rnd_545x39_AK"], 18]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_107_GL_Kobra", 15, 1, 3, ["30Rnd_545x39_AK", "1Rnd_SMOKE_GP25", "1Rnd_HE_GP25"], 15]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["bizon", 15, 1, 3, ["64Rnd_9x19_Bizon"], 15]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["Saiga12K", 15, 1, 2, ["8Rnd_B_Saiga12_74Slug", "8Rnd_B_Saiga12_Pellets"], 20]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["UZI_EP1", 35, 1, 2, ["30Rnd_9x19_UZI", "30Rnd_9x19_UZI_SD"], 10]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["UZI_SD_EP1", 25, 1, 2, ["30Rnd_9x19_UZI_SD"], 10]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AKS_GOLD", 5, 1, 2, ["30Rnd_762x39_AK47", "30Rnd_762x39_SA58"], 10]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["SVD", 25, 1, 3, ["10Rnd_762x54_SVD"], 20]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["Makarov", 45, 2, 6, ["8Rnd_9x18_Makarov"], 6]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["Sa61_EP1", 35, 2, 3, ["20Rnd_B_765x17_Ball"], 6]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_47_S", 25, 2, 3, ["30Rnd_762x39_SA58"], 6]];

//HulaZone
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AEK_971", 25, 1, 2, ["30Rnd_545x39_AK", "75Rnd_545x39_RPK"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AEK_973s", 25, 1, 2, ["30Rnd_762x39_AK47", "30Rnd_762x39_SA58"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["VIL_ABAKAN", 25, 2, 4, ["30Rnd_545x39_AK"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["VIL_PKP", 25, 1, 2, ["100Rnd_762x54_PK"], 4]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["Saiga12K", 25, 2, 4, ["8Rnd_B_Saiga12_74Slug", "8Rnd_B_Saiga12_Pellets"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["VIL_PYA", 25, 2, 4, ["VIL_17Rnd_9x19_PYA"], 6]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AEK_971_1p78", 15, 1, 2, ["30Rnd_545x39_AK", "75Rnd_545x39_RPK", "1Rnd_HE_GP25", "FlareWhite_GP25", "FlareGreen_GP25", "FlareRed_GP25", "FlareYellow_GP25", "1Rnd_SMOKE_GP25", "1Rnd_SMOKERED_GP25", "1Rnd_SMOKEGREEN_GP25", "1Rnd_SMOKEYELLOW_GP25"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AEK_973s_1p78", 15, 1, 2, ["30Rnd_762x39_AK47", "30Rnd_762x39_SA58", "1Rnd_HE_GP25", "FlareWhite_GP25", "FlareGreen_GP25", "FlareRed_GP25", "FlareYellow_GP25", "1Rnd_SMOKE_GP25", "1Rnd_SMOKERED_GP25", "1Rnd_SMOKEGREEN_GP25", "1Rnd_SMOKEYELLOW_GP25"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_107_Kobra", 15, 1, 3, ["30Rnd_545x39_AK"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["vil_ak12", 15, 1, 2, ["30Rnd_545x39_AK"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["VIL_ABAKAN_GP", 15, 1, 3, ["30Rnd_545x39_AK", "1Rnd_HE_GP25", "FlareWhite_GP25", "FlareGreen_GP25", "FlareRed_GP25", "FlareYellow_GP25", "1Rnd_SMOKE_GP25", "1Rnd_SMOKERED_GP25", "1Rnd_SMOKEGREEN_GP25", "1Rnd_SMOKEYELLOW_GP25"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["Da_MagpulAK", 15, 2, 4, ["30Rnd_545x39_AK", "30Rnd_545x39_AK_7N24"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["VityazSN", 15, 1, 2, ["30rnd_9x19_VityazSN"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["AK_107_GL_Kobra", 10, 1, 3, ["30Rnd_545x39_AK", "1Rnd_SMOKE_GP25", "1Rnd_HE_GP25"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["vil_ak12_gp", 10, 1, 2, ["30Rnd_545x39_AK", "1Rnd_HE_GP25", "FlareWhite_GP25", "FlareGreen_GP25", "FlareRed_GP25", "FlareYellow_GP25", "1Rnd_SMOKE_GP25", "1Rnd_SMOKERED_GP25", "1Rnd_SMOKEGREEN_GP25", "1Rnd_SMOKEYELLOW_GP25"], 12]];
drn_arr_AmmoDepotBasicWeapons set [count drn_arr_AmmoDepotBasicWeapons, ["bizon", 10, 2, 4, ["64Rnd_9x19_Bizon"], 8]];


// Weapons and ammo in the special weapons box
drn_arr_AmmoDepotSpecialWeapons = [];
// Insurgent weapons
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["SVD", 20, 1, 2, ["10Rnd_762x54_SVD"], 15]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AKS_74_UN_Kobra", 20, 1, 2, ["30Rnd_545x39_AKSD"], 20]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["G36C", 20, 1, 2, ["30Rnd_556x45_G36", "30Rnd_556x45_Stanag"], 15]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["Huntingrifle", 20, 1, 2, ["5x_22_LR_17_HMR"], 15]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["RPK_74", 20, 1, 1, ["75Rnd_545x39_RPK"], 18]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["RPK_74", 20, 1, 1, ["30Rnd_545x39_AK"], 18]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AKS_74_PSO", 20, 1, 3, ["30Rnd_545x39_AK"], 14]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["DMR", 15, 1, 2, ["20Rnd_762x51_DMR"], 5]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["M14_EP1", 25, 1, 2, ["20Rnd_762x51_DMR"], 5]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["M4A1_Aim_camo", 25, 1, 4, ["20Rnd_556x45_Stanag", "30Rnd_556x45_StanagSD"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["M4A1_AIM_SD_camo", 15, 1, 2, ["30Rnd_556x45_StanagSD"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["MP5A5", 20, 1, 5, ["30Rnd_9x19_MP5"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["MP5SD", 20, 1, 5, ["30Rnd_9x19_MP5SD"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["BAF_L7A2_GPMG", 15, 1, 2, ["100Rnd_762x51_M240"], 3]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["SCAR_L_CQC_Holo", 20, 1, 4, ["30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag"], 4]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["Mk_48", 35, 1, 2, ["100Rnd_762x51_M240"], 3]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["m8_tws", 5, 1, 2, ["30Rnd_556x45_Stanag"], 4]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["m8_tws_sd", 2, 1, 2, ["30Rnd_556x45_StanagSD"], 4]];

//HulaZone
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["Huntingrifle", 25, 2, 4, ["5x_22_LR_17_HMR"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AKS_74_PSO", 15, 1, 3, ["30Rnd_545x39_AK"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AKS_74_UN_Kobra", 15, 1, 2, ["30Rnd_545x39_AKSD"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["G36C", 15, 1, 2, ["30Rnd_556x45_G36", "30Rnd_556x45_Stanag"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["Sa58V_EP1", 15, 1, 3, ["30Rnd_762x39_SA58", "30Rnd_762x39_AK47"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_RPK74M_P29", 15, 1, 2, ["VIL_45Rnd_545x39_AK", "30Rnd_545x39_AK"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["SVD", 15, 1, 2, ["10Rnd_762x54_SVD"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AKS_74_NSPU", 10, 1, 1, ["30Rnd_545x39_AK", "30Rnd_545x39_AKSD"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["G36K", 10, 1, 2, ["30Rnd_556x45_G36", "30Rnd_556x45_Stanag"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["DA_MagpulAK_Aimpoint", 10, 1, 2, ["30Rnd_545x39_AK", "30Rnd_545x39_AK_7N24"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["DA_MagpulAKScope", 10, 1, 2, ["30Rnd_545x39_AK", "5Rnd_556x45_Stanag", "30Rnd_545x39_AK_7N24"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["SVD_CAMO", 10, 1, 1, ["10Rnd_762x54_SVD"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["DA_MagpulAK_SD", 5, 1, 2, ["30Rnd_545x39_AKSD"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["Sa58V_RCO_EP1", 5, 1, 3, ["30Rnd_762x39_SA58", "30Rnd_762x39_AK47"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_PKM_N", 5, 1, 1, ["100Rnd_762x54_PK"], 4]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_RPK74M_N", 5, 1, 1, ["VIL_45Rnd_545x39_AK", "30Rnd_545x39_AK"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["SVD_NSPU_EP1", 5, 1, 1, ["10Rnd_762x54_SVD"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_AMD", 3, 1, 1, ["30Rnd_762x39_AK47"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AKS_GOLD", 1, 1, 1, ["30Rnd_762x39_AK47"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["revolver_gold_EP1", 1, 1, 1, ["6Rnd_45ACP"], 6]];

// Russian weapons
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AK_107_PSO", 15, 1, 1, ["30Rnd_545x39_AK"], 20]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AK_107_GL_PSO", 10, 1, 1, ["30Rnd_545x39_AK", "1Rnd_SMOKE_GP25", "1Rnd_HE_GP25"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["Bizon_Silenced", 15, 2, 5, ["64Rnd_9x19_SD_Bizon"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["Pecheneg", 10, 1, 1, ["100Rnd_762x54_PK"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["ksvk", 10, 1, 1, ["5Rnd_127x108_KSVK"], 15]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VSS_Vintorez", 10, 1, 1, ["10Rnd_9x39_SP5_VSS"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["SVD_CAMO", 5, 1, 2, ["10Rnd_762x54_SVD"], 10]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["SVD_des_EP1", 5, 1, 2, ["10Rnd_762x54_SVD"], 10]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["SVD_NSPU_EP1", 4, 1, 2, ["10Rnd_762x54_SVD"], 10]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["SVD", 45, 1, 3, ["10Rnd_762x54_SVD"], 20]];

//HulaZone
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AEK_971_gp", 15, 1, 2, ["30Rnd_545x39_AK", "75Rnd_545x39_RPK"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AEK_973s_gp", 15, 1, 2, ["30Rnd_762x39_AK47", "30Rnd_762x39_SA58"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_ABAKAN_P29", 15, 1, 2, ["30Rnd_545x39_AK"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["Pecheneg", 15, 1, 1, ["100Rnd_762x54_PK"], 4]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["MakarovSD", 15, 2, 4, ["8Rnd_9x18_MakarovSD"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_APSSD", 15, 2, 4, ["VIL_20Rnd_9x18_apsSD"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AEK_971_1p63", 10, 1, 1, ["30Rnd_545x39_AK", "75Rnd_545x39_RPK"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AEK_971_gp_1p63", 10, 1, 1, ["30Rnd_545x39_AK", "75Rnd_545x39_RPK", "1Rnd_HE_GP25", "FlareWhite_GP25", "FlareGreen_GP25", "FlareRed_GP25", "FlareYellow_GP25", "1Rnd_SMOKE_GP25", "1Rnd_SMOKERED_GP25", "1Rnd_SMOKEGREEN_GP25", "1Rnd_SMOKEYELLOW_GP25"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AEK_973s_1p63", 10, 1, 1, ["30Rnd_762x39_AK47", "30Rnd_762x39_SA58"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AEK_973s_gp_1p63", 10, 1, 1, ["30Rnd_762x39_AK47", "30Rnd_762x39_SA58", "1Rnd_HE_GP25", "FlareWhite_GP25", "FlareGreen_GP25", "FlareRed_GP25", "FlareYellow_GP25", "1Rnd_SMOKE_GP25", "1Rnd_SMOKERED_GP25", "1Rnd_SMOKEGREEN_GP25", "1Rnd_SMOKEYELLOW_GP25"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AK_107_PSO", 10, 1, 1, ["30Rnd_545x39_AK"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["vil_ak12_ap", 10, 1, 1, ["30Rnd_545x39_AK"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_AK_74M_EOT_FSB", 10, 1, 2, ["30Rnd_545x39_AK"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["UZI_SD_EP1", 10, 1, 2, ["30Rnd_9x19_UZI_SD"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_SVD_P21", 10, 1, 1, ["10Rnd_762x54_SVD"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_SVD_M", 10, 1, 1, ["10Rnd_762x54_SVD"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["Bizon_Silenced", 10, 2, 5, ["64Rnd_9x19_SD_Bizon"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AEK_971_tgp_cln", 5, 1, 1, ["30Rnd_545x39_AKSD"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AEK_973s_tgp_cln", 5, 1, 1, ["30Rnd_762x39_AK47", "30Rnd_762x39_SA58"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AK_107_GL_PSO", 5, 1, 1, ["30Rnd_545x39_AK", "1Rnd_SMOKE_GP25", "1Rnd_HE_GP25"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_AK_74_N", 5, 1, 1, ["30Rnd_545x39_AK"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_AKMSB", 5, 1, 1, ["VIL_30Rnd_762x39_AKSD"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_VAL", 5, 1, 1, ["20Rnd_9x39_SP5_VSS"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_Groza_HG", 5, 1, 1, ["VIL_20Rnd_9x39_SP6ns_OC", "VIL_20Rnd_9x39_SP6_OC"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_Groza_SD", 5, 1, 1, ["VIL_20Rnd_9x39_SP6_OC"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_PKP_EOT", 5, 1, 2, ["100Rnd_762x54_PK"], 4]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["ksvk", 5, 1, 1, ["5Rnd_127x108_KSVK"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["vil_SVDK", 5, 1, 1, ["vil_10Rnd_SVDK"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_SVU_A", 5, 1, 1, ["10Rnd_762x54_SVD"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VSS_Vintorez", 5, 1, 1, ["10Rnd_9x39_SP5_VSS"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AEK_971_shahin", 3, 1, 1, ["30Rnd_545x39_AK", "75Rnd_545x39_RPK"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AEK_971_1pn100", 3, 1, 1, ["30Rnd_545x39_AK", "75Rnd_545x39_RPK"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AEK_973s_shahin", 3, 1, 1, ["30Rnd_762x39_AK47", "30Rnd_762x39_SA58"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AEK_973s_1pn100", 3, 1, 1, ["30Rnd_762x39_AK47", "30Rnd_762x39_SA58"], 12]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_Groza_SC", 3, 1, 1, ["VIL_20Rnd_9x39_SP6_OC"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["VIL_VSS_N", 3, 1, 1, ["20Rnd_9x39_SP5_VSS"], 6]];

// Western weapons
//HulaZone
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_Famas_G2", 15, 1, 3, ["30Rnd_556x45_Stanag", "R3F_30Rnd_556x45_TRACER_FAMAS"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["dak_mak_want", 15, 2, 4, ["30Rnd_545x39_AK", "8Rnd_9x18_Makarov"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["mak_BZT75C", 15, 2, 4, ["30Rnd_545x39_AK", "8Rnd_9x18_Makarov"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_FRF2_J8", 15, 1, 1, ["R3F_10Rnd_762x51_FRF2"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_Famas_G2_AIM_HG", 10, 1, 2, ["30Rnd_556x45_Stanag", "R3F_30Rnd_556x45_TRACER_FAMAS"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_Famas_G2_EOT", 10, 1, 2, ["30Rnd_556x45_Stanag", "R3F_30Rnd_556x45_TRACER_FAMAS"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_HK417M_AIM", 10, 1, 2, ["R3F_20Rnd_762x51_KH417", "R3F_20Rnd_762x51_TRACER_HK417"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_Minimi_AIM_HG", 10, 1, 1, ["200Rnd_556x45_M249", "R3F_200Rnd_556x45_MINIMI", "30Rnd_556x45_Stanag"], 3]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_Minimi_EOT", 10, 1, 1, ["200Rnd_556x45_M249", "R3F_200Rnd_556x45_MINIMI", "30Rnd_556x45_Stanag"], 3]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_FRF2_J8_DES", 10, 1, 1, ["R3F_10Rnd_762x51_FRF2"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_PGM_Hecate_II", 10, 1, 1, ["R3F_7Rnd_127x99_PGM", "R3F_7Rnd_127x99_PEI_PGM"], 4]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_Famas_G2_J4", 5, 1, 1, ["30Rnd_556x45_Stanag", "R3F_30Rnd_556x45_TRACER_FAMAS"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_Famas_F1_EOT_HG_SD", 5, 1, 1, ["R3F_30Rnd_556x45_SD_FAMAS", "R3F_25Rnd_556x45_SD_FAMAS"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_HK417S_EOT_HG", 5, 1, 1, ["R3F_20Rnd_762x51_KH417", "R3F_20Rnd_762x51_TRACER_HK417"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_JIM_LR", 5, 1, 1, ["30Rnd_545x39_AK"], 1]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["Binocular_Vector", 5, 1, 1, ["30Rnd_545x39_AK"], 1]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_Minimi_762_EOT_HG", 5, 1, 1, ["100Rnd_762x51_M240", "R3F_100Rnd_762x51_MINIMI"], 3]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_Minimi_762_J4", 5, 1, 1, ["100Rnd_762x51_M240", "R3F_100Rnd_762x51_MINIMI"], 3]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_Minimi_J4", 5, 1, 1, ["200Rnd_556x45_M249", "R3F_200Rnd_556x45_MINIMI", "30Rnd_556x45_Stanag"], 3]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["Planshet", 5, 1, 3, ["30Rnd_545x39_AK", "8Rnd_9x18_Makarov"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["AKS_74U_BZT75C", 5, 1, 2, ["30Rnd_545x39_AK", "8Rnd_9x18_Makarov"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_PGM_Hecate_II_DES", 5, 1, 1, ["R3F_7Rnd_127x99_PGM", "R3F_7Rnd_127x99_PEI_PGM"], 4]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_PGM_Hecate_II _MILDOT_DES", 5, 1, 1, ["R3F_7Rnd_127x99_PGM", "R3F_7Rnd_127x99_PEI_PGM"], 4]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_PGM_Hecate_II_MILDOT", 5, 1, 1, ["R3F_7Rnd_127x99_PGM", "R3F_7Rnd_127x99_PEI_PGM"], 4]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_FRF2_J8_SD", 5, 1, 1, ["R3F_10Rnd_762x51_SD_FRF2"], 4]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_FRF2_J8_SD_DES", 5, 1, 1, ["R3F_10Rnd_762x51_SD_FRF2"], 4]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_HK417L_NF", 3, 1, 1, ["R3F_20Rnd_762x51_KH417", "R3F_20Rnd_762x51_TRACER_HK417"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_HK417S_HG_SD", 3, 1, 1, ["R3F_20Rnd_762x51_SD_HK417"], 6]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_Minimi_762_OB50", 3, 1, 1, ["100Rnd_762x51_M240", "R3F_100Rnd_762x51_MINIMI"], 3]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["Swat", 3, 1, 3, ["30Rnd_545x39_AK", "8Rnd_9x18_Makarov"], 8]];
drn_arr_AmmoDepotSpecialWeapons set [count drn_arr_AmmoDepotSpecialWeapons, ["R3F_PGM_Hecate_II_POLY", 3, 1, 1, ["R3F_7Rnd_127x99_PGM", "R3F_7Rnd_127x99_PEI_PGM"], 4]];


// Weapons and ammo in the launchers box
drn_arr_AmmoDepotLaunchers = [];
// Insurgent weapons
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["RPG7V", 100, 3, 5, ["PG7VL"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["RPG7V", 25, 1, 2, ["PG7VR"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["Strela", 100, 1, 1, ["Strela"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["Strela", 75, 1, 2, ["Strela"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["Stinger", 25, 1, 2, ["Stinger"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["MAAWS", 35, 1, 2, ["MAAWS_HEAT", "MAAWS_HEDP"], 1]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["M47Launcher_EP1", 10, 1, 2, ["Dragon_EP1"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["M136", 10, 1, 2, ["M136"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["M32_EP1", 15, 1, 3, ["6Rnd_HE_M203", "6Rnd_FlareWhite_M203", "6Rnd_Smoke_M203", "1Rnd_HE_M203", "FlareWhite_M203", "1Rnd_Smoke_M203"], 4]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["M79_EP1", 25, 1, 4, ["1Rnd_HE_M203", "FlareWhite_M203", "1Rnd_Smoke_M203"], 4]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["Mk13_EP1", 20, 1, 2, ["1Rnd_HE_M203", "FlareWhite_M203", "1Rnd_Smoke_M203"], 4]];

//HulaZone
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["Strela", 100, 1, 1, ["Strela"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["Strela", 67, 1, 2, ["Strela"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["RPG7V", 100, 2, 4, ["PG7VL"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["VIL_RPG16", 35, 2, 4, ["VIL_PGO_PG16"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["MAAWS", 25, 1, 2, ["MAAWS_HEAT"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["MAAWS", 25, 1, 2, ["MAAWS_HEDP"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["RPG7V", 25, 1, 2, ["PG7VR"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["VILAS_RPG22", 25, 2, 4, ["VIL_RPG22"], 3]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["VILAS_RPG26", 15, 1, 3, ["VIL_RPG26"], 3]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["VIL_RPG29", 10, 1, 2, ["VIL_PG29_HEAT"], 3]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["M79_EP1", 35, 2, 4, ["1Rnd_HE_M203", "FlareWhite_M203", "1Rnd_Smoke_M203"], 8]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["VIL_RPO_A", 5, 1, 2, ["VIL_SHMEL_FTW"], 3]];


// Russian weapons
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["RPG18", 25, 1, 2, ["RPG18"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["MetisLauncher", 15, 1, 1, ["AT13"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["Igla", 35, 1, 2, ["Igla"], 3]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["M79_EP1", 25, 1, 4, ["1Rnd_HE_M203", "FlareWhite_M203", "1Rnd_Smoke_M203"], 4]];

//HulaZone
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["Igla", 35, 1, 3, ["Igla"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["RPG18", 25, 1, 3, ["RPG18"], 3]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["MetisLauncher", 15, 1, 2, ["AT13"], 2]];

// Some stolen western weapons can sometimes appear
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["Javelin", 5, 2, 2, ["Javelin"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["Stinger", 5, 2, 2, ["Stinger"], 2]];

//HulaZone
// Western weapons
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["Stinger", 5, 1, 3, ["Stinger"], 2]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["R3F_AT4CS", 25, 1, 3, ["R3F_AT4CS_Mag"], 3]];
drn_arr_AmmoDepotLaunchers set [count drn_arr_AmmoDepotLaunchers, ["Javelin", 5, 1, 2, ["Javelin"], 2]];


//HulaZone backpacks
// Backpacks
// Basic backpacks
drn_arr_AmmoDepotBasicBackpacks = [];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["CZ_Backpack_EP1", 20, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["TK_Assault_Pack_EP1", 20, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["TK_ALICE_Pack_EP1", 20, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["CZ_VestPouch_EP1", 40, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["US_Backpack_EP1", 5, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["US_Assault_Pack_EP1", 30, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["USBasicBag", 40, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["US_Patrol_Pack_EP1", 30, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_OD", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_DES", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_3DES", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_WDL", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_MAR", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_DMAR", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_UCP", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_6DES", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_TAK", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_NVG", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_BLK", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_DPM", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_FIN", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_MTC", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_NOR", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_WIN", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_ATC", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_MTL", 10, 1, 1]];
drn_arr_AmmoDepotBasicBackpacks set [count drn_arr_AmmoDepotBasicBackpacks, ["LEN_Backpack_FTN", 10, 1, 1]];

// Special backpacks
drn_arr_AmmoDepotSpecialBackpacks = [];
drn_arr_AmmoDepotSpecialBackpacks set [count drn_arr_AmmoDepotSpecialBackpacks, ["MAV_RAVEN_BACKPACK", 10, 1, 1]];
drn_arr_AmmoDepotSpecialBackpacks set [count drn_arr_AmmoDepotSpecialBackpacks, ["2b14_82mm_TK_INS_Bag_EP1", 10, 1, 1]];
drn_arr_AmmoDepotSpecialBackpacks set [count drn_arr_AmmoDepotSpecialBackpacks, ["AGS_TK_INS_Bag_EP1", 5, 1, 1]];
drn_arr_AmmoDepotSpecialBackpacks set [count drn_arr_AmmoDepotSpecialBackpacks, ["DSHkM_Mini_TriPod_TK_INS_Bag_EP1", 10, 1, 1]];
drn_arr_AmmoDepotSpecialBackpacks set [count drn_arr_AmmoDepotSpecialBackpacks, ["DSHKM_TK_INS_Bag_EP1", 10, 1, 1]];
drn_arr_AmmoDepotSpecialBackpacks set [count drn_arr_AmmoDepotSpecialBackpacks, ["SPG9_TK_INS_Bag_EP1", 5, 1, 1]];

// Launcher backpacks
drn_arr_AmmoDepotLauncherBackpacks = [];
drn_arr_AmmoDepotLauncherBackpacks set [count drn_arr_AmmoDepotLauncherBackpacks, ["TK_RPG_Backpack_EP1", 20, 1, 1]];
drn_arr_AmmoDepotLauncherBackpacks set [count drn_arr_AmmoDepotLauncherBackpacks, ["Metis_TK_Bag_EP1", 10, 1, 1]];


// Weapons and ammo in the ordnance box
drn_arr_AmmoDepotOrdnance = [];
// General weapons
drn_arr_AmmoDepotOrdnance set [count drn_arr_AmmoDepotOrdnance, ["Put", 50, 1, 2, ["Mine"], 5]];
drn_arr_AmmoDepotOrdnance set [count drn_arr_AmmoDepotOrdnance, ["Put", 35, 1, 2, ["MineE"], 6]];
drn_arr_AmmoDepotOrdnance set [count drn_arr_AmmoDepotOrdnance, ["Throw", 85, 1, 2, ["HandGrenade_East"], 8]];
drn_arr_AmmoDepotOrdnance set [count drn_arr_AmmoDepotOrdnance, ["Put", 50, 1, 2, ["PipeBomb"], 2]];
drn_arr_AmmoDepotOrdnance set [count drn_arr_AmmoDepotOrdnance, ["Throw", 75, 1, 2, ["SmokeShell"], 8]];
drn_arr_AmmoDepotOrdnance set [count drn_arr_AmmoDepotOrdnance, ["Throw", 15, 1, 2, ["SmokeShellYellow"], 8]];
drn_arr_AmmoDepotOrdnance set [count drn_arr_AmmoDepotOrdnance, ["Throw", 15, 1, 2, ["SmokeShellRed"], 8]];
drn_arr_AmmoDepotOrdnance set [count drn_arr_AmmoDepotOrdnance, ["Throw", 15, 1, 2, ["SmokeShellGreen"], 8]];
drn_arr_AmmoDepotOrdnance set [count drn_arr_AmmoDepotOrdnance, ["Throw", 15, 1, 2, ["SmokeShellPurple"], 8]];
drn_arr_AmmoDepotOrdnance set [count drn_arr_AmmoDepotOrdnance, ["Throw", 15, 1, 2, ["SmokeShellBlue"], 8]];
drn_arr_AmmoDepotOrdnance set [count drn_arr_AmmoDepotOrdnance, ["Throw", 15, 1, 2, ["SmokeShellOrange"], 8]];

// Weapons and ammo in the vehicle box (the big one)
// Some high volumes (mostly for immersion)
drn_arr_AmmoDepotVehicle = [];
drn_arr_AmmoDepotVehicle set [count drn_arr_AmmoDepotVehicle, ["Put", 30, 1, 1, ["Mine"], 100]];
drn_arr_AmmoDepotVehicle set [count drn_arr_AmmoDepotVehicle, ["Throw", 30, 1, 2, ["HandGrenade_East"], 120]];
drn_arr_AmmoDepotVehicle set [count drn_arr_AmmoDepotVehicle, ["Put", 30, 1, 2, ["PipeBomb"], 75]];

// Weapons that may show up in civilian cars

// Index 0: Weapon classname.
// Index 1: Magazine classname.
// Index 2: Number of magazines.

drn_arr_CivilianCarWeapons = [];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["AK_74", "30Rnd_545x39_AK", 5]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["AK_107_GL_PSO", "30Rnd_545x39_AK", 11]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["PK", "100Rnd_762x54_PK", 9]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["Makarov", "8Rnd_9x18_Makarov", 8]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["bizon", "64Rnd_9x19_Bizon", 6]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["SVD", "10Rnd_762x54_SVD", 7]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["AKS_74_PSO", "30Rnd_545x39_AK", 5]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["Huntingrifle", "5x_22_LR_17_HMR", 8]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["Bizon_Silenced", "64Rnd_9x19_SD_Bizon", 5]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["MakarovSD", "8Rnd_9x18_MakarovSD", 12]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["RPG7V", "PG7V", 1]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["RPG18", "RPG18", 1]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["Igla", "Igla", 1]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["Put", "PipeBomb", 2]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["Throw", "HandGrenade_East", 5]];

//HulaZone
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["Sa58P_EP1", "30Rnd_762x39_SA58", 5]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["Sa58V_EP1", "30Rnd_762x39_SA58", 5]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["LeeEnfield", "10x_303", 4]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["FN_FAL", "20Rnd_762x51_FNFAL", 6]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["revolver_EP1", "6Rnd_45ACP", 3]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["revolver_gold_EP1", "6Rnd_45ACP", 3]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["AKS_GOLD", "30Rnd_762x39_AK47", 5]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["UZI_EP1", "30Rnd_9x19_UZI", 6]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["Sa61_EP1", "20Rnd_B_765x17_Ball", 6]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["Sa61_EP1", "10Rnd_B_765x17_Ball", 6]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["UZI_SD_EP1", "30Rnd_9x19_UZI", 6]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["UZI_SD_EP1", "30Rnd_9x19_UZI", 2]];
drn_arr_CivilianCarWeapons set [count drn_arr_CivilianCarWeapons, ["glock17_EP1", "17Rnd_9x19_glock17", 3]];
