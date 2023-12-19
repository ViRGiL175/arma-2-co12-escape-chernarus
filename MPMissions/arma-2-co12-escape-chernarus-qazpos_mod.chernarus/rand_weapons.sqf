[private "_dude","_handgun""_handguns","_mag","_mags","_rnd","_i"];

_dude = _this select 0;

//create an array of guns
_handguns = ["m8_carbine","BAF_L110A1_Aim","BAF_L86A2_ACOG","M14_EP1","Saiga12K","AKS_GOLD","M24_des_EP1","PK","SCAR_L_CQC","huntingrifle","bizon","DMR","Sa58V_CCO_EP1","M16A2GL","G36K_camo","AK_107_kobra","ksvk","M4A1_Aim_camo","RPG7V","BAF_LRR_scoped_W","m8_compact_pmc","SVD_des_EP1","M79_EP1","AS50","AKS_74","M32_EP1","LeeEnfield","revolver_gold_EP1","FN_FAL","Stinger","M9","AA12_PMC","G36C","Colt1911","UZI_EP1","M1014","M40A3","M4A1_HWS_GL_camo","MP5A5","M60A4_EP1","M4SPR","m16a4","glock17_EP1","Makarov","revolver_EP1"];

//create an array of matching mags...must match the order above 
_mags = ["30Rnd_556x45_G36","100Rnd_556x45_M249","30Rnd_556x45_Stanag","20Rnd_762x51_DMR","8Rnd_B_Saiga12_Pellets","30Rnd_762x39_SA58","5Rnd_762x51_M24","100Rnd_762x54_PK","30Rnd_556x45_G36","5x_22_LR_17_HMR","64Rnd_9x19_Bizon","20Rnd_762x51_DMR","30Rnd_762x39_SA58","20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","30Rnd_545x39_AK","5Rnd_127x108_KSVK","20Rnd_556x45_Stanag","PG7V","5Rnd_86x70_L115A1","30Rnd_556x45_G36","10Rnd_762x54_SVD","1Rnd_HE_M203","10Rnd_127x99_m107","30Rnd_545x39_AK","6Rnd_HE_M203","10x_303","6Rnd_45ACP","20Rnd_762x51_FNFAL","Stinger","15Rnd_9x19_M9","20Rnd_B_AA12_HE","20Rnd_556x45_Stanag","7Rnd_45ACP_1911","30Rnd_9x19_UZI","8Rnd_B_Beneli_Pellets","5Rnd_762x51_M24","20Rnd_556x45_Stanag","30Rnd_9x19_MP5","100Rnd_762x51_M240","20Rnd_556x45_Stanag","30Rnd_556x45_Stanag","17Rnd_9x19_glock17","8Rnd_9x18_Makarov","6Rnd_45ACP"];

_rnd = floor random (count _handguns);

_handgun = _handguns select _rnd;
_mag = _mags select _rnd;

//remove everything from the unit
clearWeaponCargoGlobal _dude;
clearMagazineCargoGlobal _dude;


for [{_i=1},{_i<=8},{_i=_i+1}] do {
	_dude addMagazineCargoGlobal _mag;
};

_dude addWeaponCargoGlobal _handgun;

for [{_i=1},{_i<=2},{_i=_i+1}] do {
	_dude addMagazineCargoGlobal "HandGrenadeTimed";
};

_dude addWeaponCargoGlobal "Binocular";
_dude addWeaponCargoGlobal "NVGoggles";
_dude addWeaponCargoGlobal "ItemMap";

_dude selectweapon _handgun;