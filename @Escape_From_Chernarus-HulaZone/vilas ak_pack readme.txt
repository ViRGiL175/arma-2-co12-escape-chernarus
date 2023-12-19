24 05 2013 

Update hard work by SV5000 !
thanx
added AK12 variants, added VSK94

24-11-2012
added AK 12 ironsight: class  Vil_AK_12 magazine "vil_60Rnd_545x39_AK" 60 rounds thick mag

version 7-05-2011
fixed tiny bug in config

last version 29-04-2011
config by Xeno
divided from main file (to allow any modification of config)
_________________________________


version 09-03-2011 
Config by : XENO426, Dimitri_Harkov, da12thmonkey fixed by Vilas, added AKS with RPK mag on request
previous version 05-03-2011 clear new Xeno config 
Added zeroing to all weapons that don't use Holo or Aimpoint-style sights
Added select fire to the APS/APB pistol
Increased PYa round velocity to +P+ standard
Edited flight characteristics of RPG-29 rocket (increased velocity, very short rocket motor duration)
Burst option removed from AEK-971/973, as only the AEK-971s/973s have this option
PSL uses a unique magazine (vil_10Rnd_PSL)

previous version from february :  (DPRK AKS74 added plus AK74M Eot, fixed to real RPK sights)


in future pack will be growing if there will be such needs 
06-02-2011 (DPRK AKS74 added plus AK74M Eot, fixed to real RPK sights)


in future pack will be growing if there will be such needs 


credits for help:

- config, replacement : Dmitri Harkov
- second replacement 
- sounds :  ANZACSAS Steve, OFPWarior, Flashpoint.Ru and Youtube ;
- optics, reticles help: Dead Kennedy, Flashpoint.Ru
- other people that helped in proper shape, look , details of weapons 
- animations Udaloy and F-Ru again
- many other things that shaped this pack Flashpoint.Ru

______________________________________________________________________

classes of weapons:
1) weapons using BIS magazines (AK, AK74, SVD, PK etc)
2) weapons using specified magazines 
3) launchers 
==============================================================

1)

class VIL_M76 :  zastava M-76 magazines[] = {"vil_10Rnd_Mauser"};

class VIL_PSL1 : Romanian PSL; magazines[] = {"vil_10Rnd_PSL"};

class vil_SVDK : SVDK; magazines[] = {"vil_10Rnd_SVDK"};

SVD BIS magazine :	

class VIL_SVU_A :  SVU-A;

class VIL_SVU : SVU;

class VIL_SVD_63 : SVD;

class VIL_SVD_N : SVD NSPU-2;

class VIL_SVD_S : SVDS;

class VIL_SVD_M : SVD Modern (PSO);

class VIL_SVD_P21 : SVD Modern (1P21);

------------------------------------------------------------------------------------------------------------------

class VIL_PKP : Pecheneg ironsight using BIS PK belt

class VIL_PKP_EOT : Pecheneg EOT ironsight using BIS PK belt

class VIL_PK : PK 

class VIL_PKM_N : PKM NSPU-2 ;

class VIL_PKM :  PKM (made for P85, but in Arma2 BIS PKM looks as good or in sight detail better, but i left this model in pack )

class VIL_Zastava_M84 : Yugo M84 


AK WEAPONS ( BIS AK, then AK74 magazines depending of caliber of weapon ):
-----------------------------------------------------------------------------------------------------------------
>>> 7.62 mm
Two new magazines for 7.62-style AK and RPK rifles: "vil_40Rnd_762x39_AK47" & "vil_75Rnd_762x39_AK47"

class VIL_M70 :  Yugoslavian Zastava M-70A/B;

class VIL_M70B :  Yugoslavian Zastava M-70B;

class VIL_M64 :  Yugoslavian Zastava M-64;

class VIL_AMD : Hungarian AMD ;

class VIL_PMI : Romanian PMi;

class VIL_PMIS : Romanian PMiS;

class VIL_MPi : East-German MPi;

class VIL_AKS_47 :  AKS-47 ;

class VIL_AK_47_49 : AK-47 (Type 1) ;

class VIL_AK_47 : AK-47 ;

class VIL_AK_47_M1 : AK-47 Arsenal (Bulgarian);

class VIL_AKMSB :  AKMS PBS-1 magazines[] = {"VIL_30Rnd_762x39_AKSD"}; << note that this is the only magazine accepted

class VIL_AKM : AKM ;

class VIL_AKM_GL : AKM GP-25;

class VIL_AKMS : AKMS ;

class VIL_AKMS_GL : AKMS GP-25;

class VIL_AK_103 : AK-103 ;

class VIL_AEK_3 : AEK-973 (early production);

class VIL_AEK_23 : AEK-973 (modern production);

class VIL_AEK_3_K : AEK-973 Colimator;

-----------------------------------------------------------------------------------------------------------------
>>> 5.45 mm
Two new magazines for all AK-74 guns: "vil_45Rnd_545x39_AK" & "vil_60Rnd_545x39_AK"

class VIL_AK_74 : AK-74;

class VIL_AK_74_N : AK-74 NSPU-2;

class VIL_AK_74M_N : AK-74M NSPU-3;

class VIL_AK_74M_PSO : AK-74M PSO-1;

class VIL_AK_74P : AK-74(Plum Polymer);

class VIL_AKS_74 : AKS-74;

class VIL_AKS_74p : AKS-74 (P);

class VIL_AKS_74_GP : AKS-74 GP25;

class VIL_AKS_74p_GP : AKS-74 P GP25;

class VIL_AK_74M : AK-74M;

class VIL_AK_74M_k : AK-74M (PK-A);

class VIL_AK_74M_C : AK-74M Kobra;

class VIL_AK_74M_p29 : AK-74M 1P29;

class VIL_AK_74M_EOT : AK-74M Eot;

class VIL_AK_74M_EOT_FSB : AK-74M Eot (Magpul stock, handgrip, rails);

class VIL_AK_74M_EOT_FSB_60 : AK-74M Eot + High Capacity mag

class VIL_AK_74M_EOT_FSB_45 : AK-74M Eot + RPK mag

class VIL_AK_74M_GP_29 : AK-74M GP (1P29);

class VIL_AK_74M_GP :  AK-74M GP;

class VIL_AK_74_GP :  AK-74 GP;

class VIL_AK_107 : AK-107;

class VIL_AK_107_C :  AK-107 Kobra;
};
class VIL_AEK1 :  AEK-971 (early production);

class VIL_AEK2 :  AEK-971 (modern production);

class VIL_AEK_GL : AEK-971 GP-25;

class VIL_ABAKAN : "Abakan" AN-94 Nikonova;

class VIL_ABAKAN_GP : AN-94 GP

class VIL_ABAKAN_P29 : AN-94 (1P29);

class VIL_AKS_74_u : AKS-74U;

class VIL_AK_105 : AK-105;

class VIL_AK_105_C : AK-105 Kobra;

class VIL_AKS_74_UB : AKS-74UB;

class VIL_PMI74S : Romanian PMi 86;

class vil_Rak74sgl : Romanian PMi 86 with Grenade launcher; magazines[] = {"vil_1Rnd_NGO74", "vil_FlareWhite_NGC74", "vil_FlareGreen_NGC74", "vil_FlareRed_NGC74", "vil_FlareYellow_NGC74"};

class VIL_Type88_1 : North Korean AKS-74;

class vil_ak12 ,  vil_ak12_ap , vil_ak12_gp - AK12 ironsight, Aimpoint, GP25

----------------------------------------------------------------------
RPK/light machine guns
----------------------------------------------------------------------
>>> 7.62 mm
class VIL_RPK : RPK; magazines[] = {"vil_40Rnd_762x39_AK47" , "30Rnd_762x39_AK47", "vil_75Rnd_762x39_AK47"};

class vil_RPK75 : RPK with drum

class VIL_RPK75_Romania : Romanian RPK with drum

class VIL_RPK75_m72 : Zastava RPK with drum

class VIL_RPD : RPK; magazines[] = { "VIL_100Rnd_762x39_RPD" };

----------------------------------------------------------------------
>>> 5.45 mm
Contrary to what is in many games, no drum magazines were manufacture for the RPK-74. A 90-round pan drum was tested but rejected due to reliability issues
The only magazine available to the RPK-74 (and AK-74 variants) are the 30-round, 45-round and 60-round box magazines

class VIL_RPK74 :  RPK-74; magazines[] = { "VIL_45Rnd_545x39_AK"};

class VIL_RPK74M :  RPK-74M;

class VIL_RPK74M_P29 : RPK-74M (1P29);

class VIL_RPK74M_N : RPK-74M NSPU-2;


-----------------------------------------------------------------------------------------------------------------
2)

class VIL_SKS :  Simonov SKS 1945  magazines[] = {"VIL_10Rnd_762x39_SKS"};

class VIL_APS, VIL_APSSD : Stechkin pistol and Stechkyn pistol silenced magazines[] = {"VIL_20Rnd_9x18_aps", "VIL_20Rnd_9x18_apsSD"};

class VIL_PYA : Grach Yarygin MP 443 magazines[] = {"VIL_17Rnd_9x19_PYA"}; can also accept M9 magazines

class VIL_TT33 : Tokarev (post war) magazines[] = {"VIL_8Rnd_TT"};

-----------------------------------------------------------------------------------------------------------------
>>> 5.56 mm
Though these rifles fire 5.56x45mm NATO rounds, they can only use one magazine: "VIL_30Rnd_556x45_AK"

class vil_AK_nato_m1 : Bulgarian AK-47M1 firing NATO rounds

vil_AK_nato_m80 : Yugoslavian Zastava M80 chambered for 5.56mm NATO rounds

vil_AK_101 : export AK-74M chambered to 5.56mm NATO rounds

---------------------------------------------------------------------
weapons using Russian special ammunition SP
---------------------------------------------------------------------

class VIL_VSS_PSO : VSS Vintorez magazines[] = {"10Rnd_9x39_SP5_VSS", "20Rnd_9x39_SP5_VSS", "VIL_10Rnd_9x39_SP6_VSS", "VIL_20Rnd_9x39_SP6_VAL"};

class VIL_VSS_N : VSS NSPU-3

class VIL_VAL :  AS VAL; magazines[] = {"10Rnd_9x39_SP5_VSS", "20Rnd_9x39_SP5_VSS", "VIL_10Rnd_9x39_SP6_VSS", "VIL_20Rnd_9x39_SP6_VAL"};

class VIL_VAL_C : AS VAL Kobra;

class VIL_VAL_N : AS VAL NSPU-3;

class VIL_Vikhr : SR-3 Vikhr; magazines[] = {"VIL_20Rnd_9x39_SP6ns_OC", "VIL_20Rnd_9x39_SP6_OC"};

class VIL_9a91 : 9A-91;

class VIL_9a91_C : 9A-91 Kobra;

class VIL_9a91_Csd : 9A-91 SD Kobra;

class vil_vsk94 : VSK94

class VIL_Groza_HG : OC-14 ; magazines[] = {"VIL_20Rnd_9x39_SP6ns_OC", "VIL_20Rnd_9x39_SP6_OC"}; < "ns" means not-silenced >

class VIL_Groza_SC : OC-14 (scope, silencer );

class VIL_Groza_SD : OC-14 (silencer);

class VIL_Groza_GL : OC-14 GP;

---------------------------------------------------------------------
SV-98 sniper rifle, uses magazine "VIL_10Rnd_762x54_SV"

class VIL_SV_98 :  SV-98 (PKS-07)

class VIL_SV_98_69 : SV-98 (1P69)

class VIL_SV_98_SD : SV-98 (SD);

3)

class VIL_RPG16 :  {VIL_PGO_PG16};

class VIL_RPG7V_PGO : magazines[] = {VIL_PGO_PG7VL, VIL_PGO_PG7VR, VIL_PGO_PG7T, VIL_PGO_PG7og}; 
class VIL_RPG7d_PGO : magazines[] = {VIL_PGOd_PG7VL, VIL_PGOd_PG7VR, VIL_PGOd_PG7T, VIL_PGOd_PG7og}; 

class VIL_RPG29 : RPG-29; magazines[] = {VIL_PG29_HEAT};

class VIL_RPO_A : "Shmel" RPO-A flamethrower / thermobaric warhead; magazines[] = {VIL_SHMEL_FTW};

class VILAS_RPG22 : RPG-22; magazines[] = {VIL_RPG22};

class VILAS_RPG26 : RPG-26; magazines[] = {VIL_RPG26};


