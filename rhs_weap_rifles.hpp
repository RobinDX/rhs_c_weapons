//class Rifle;
class Rifle_Base_F;
class WeaponSlotsInfo;
class GunParticles;
class UGL_F;

class GP25_Base: UGL_F
{
	displayName = "$STR_RHS_GP25_NAME";
	descriptionShort = "Grenade launcher<br/>Caliber: 40mm";

	useModelOptics = 0;
	useExternalOptic = 0;
	reloadaction = "RHS_GestureReloadGP30";

	magazines[] =
	{
		"rhs_VOG25",
		"rhs_VOG25p",
		"rhs_vg40tb",
		"rhs_vg40sz",
		"rhs_vg40op_white",
		"rhs_vg40op_green",
		"rhs_vg40op_red",
		"rhs_GRD40_white",
		"rhs_GRD40_green",
		"rhs_GRD40_red",
		"rhs_VG40MD_White",
		"rhs_VG40MD_Green",
		"rhs_VG40MD_Red",
		"rhs_GDM40"
	};
	modes[] = {"Single"};
	class Single: Mode_SemiAuto
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"rhsafrf\addons\rhs_sounds\ugl\gp-25_1",0.70794576,1,200};
			begin2[] = {"rhsafrf\addons\rhs_sounds\ugl\gp-25_2",0.70794576,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};

			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",3.1622777,1,300};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wss",3.1622777,1,300};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		recoil = "M240Recoil";
		recoilProne = "M240Recoil";
		minRange = 30;
		minRangeProbab = 0.1;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
	};
	cameraDir = "OP_look";
	//0.125
	discreteDistance[] = {50,100,150,200,250,300,350,400};
	discreteDistanceCameraPoint[] = {"OP_eye","OP_eye1","OP_eye2","OP_eye3","OP_eye4","OP_eye5","OP_eye6","OP_eye7"};
	discreteDistanceInitIndex = 2;

};

class rhs_weap_ak74m_Base_F: Rifle_Base_F
{
	dlc = "RHS_AFRF";

	magazines[] =
	{
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK_no_tracers",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_7U1_AK",

		"rhs_45Rnd_545x39_AK",
		"rhs_45Rnd_545x39_7N10_AK",
		"rhs_45Rnd_545x39_7N22_AK",
		"rhs_45Rnd_545x39_AK_green",
		"rhs_45Rnd_545x39_7U1_AK"
	};

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};

	optics = 0;

	jsrs_soundeffect = "JSRS2_Distance_Effects_kaybhar";
	reloadAction = "RHS_GestureReloadAK";
	maxRecoilSway = 0.0125;
	swayDecaySpeed = 1.25;

	class GunParticles: GunParticles
	{
		class SecondEffect
		{
			positionName = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName = "CaselessAmmoCloud";
		};
		class RHS_BarrelRefract
		{
			positionName = "usti hlavne";
			directionName = "usti hlavne up";
			effectName = "RHS_BarrelRefract";
		};
	};

	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {440,100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_tgpa","rhs_acc_dtk3","rhs_acc_dtk1","rhs_acc_dtk","rhs_acc_dtk4short","rhs_acc_ak5"};
		};
		class CowsSlot: rhs_russian_rifle_scopes_slot{};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
	};

	opticsZoomMin = 0.25;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;

	descriptionShort = $STR_A3_CfgWeapons_XM_base_F0;
	handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\mx.rtm"};
	dexterity = 1.8;

	modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};

	bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.630957, 1, 15};
	bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.630957, 1, 15};
	bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.630957, 1, 15};
	bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.630957, 1, 15};
	bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.630957, 1, 15};
	bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.630957, 1, 15};
	bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.630957, 1, 15};
	bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.630957, 1, 15};
	bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.630957, 1, 15};
	bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.630957, 1, 15};
	bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.630957, 1, 15};
	bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.630957, 1, 15};
	soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
	changeFiremodeSound[]=
	{
		"A3\sounds_f\weapons\closure\firemode_changer_2",
		0.56234133,
		1,
		20
	};

	class Single: Mode_SemiAuto
	{
 		sounds[] = {"StandardSound","SilencedSound"};
 		class BaseSoundModeType
 		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
 		class StandardSound: BaseSoundModeType
 		{
			begin1[] = {"rhsafrf\addons\rhs_weapons\sounds\ak74m_1",6.7782794,1,1000};
			begin2[] = {"rhsafrf\addons\rhs_weapons\sounds\ak74m_2",6.7782794,1,1000};
			begin3[] = {"rhsafrf\addons\rhs_weapons\sounds\ak74m_3",6.7782794,1,1000};
			begin4[] = {"rhsafrf\addons\rhs_weapons\sounds\ak74m_4",6.7782794,1,1000};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		};
 		class SilencedSound: BaseSoundModeType
 		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
			begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
			soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
		};

		reloadTime = 0.0923;
		recoil = "recoil_single_mx";
		recoilProne = "recoil_single_prone_mx";
		dispersion = 0.00093;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.04;
	};
	class FullAuto: Mode_FullAuto
	{
 		sounds[] = {"StandardSound","SilencedSound"};
 		class BaseSoundModeType
 		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
 		class StandardSound: BaseSoundModeType
 		{
			begin1[] = {"rhsafrf\addons\rhs_weapons\sounds\ak74m_1",6.7782794,1,1000};
			begin2[] = {"rhsafrf\addons\rhs_weapons\sounds\ak74m_2",6.7782794,1,1000};
			begin3[] = {"rhsafrf\addons\rhs_weapons\sounds\ak74m_3",6.7782794,1,1000};
			begin4[] = {"rhsafrf\addons\rhs_weapons\sounds\ak74m_4",6.7782794,1,1000};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		};
 		class SilencedSound: BaseSoundModeType
 		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.794328,1,100};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.794328,1,100};
			begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.794328,1,100};
			soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
		};
		reloadTime = 0.0923;
		recoil = "recoil_auto_mx";
		recoilProne = "recoil_auto_prone_mx";
		dispersion = 0.000125;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 15;
		midRangeProbab = 0.7;
		maxRange = 30;
		maxRangeProbab = 0.1;
		aiRateOfFire = 1e-006;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType = 1;
		showToPlayer = 0;
		minRange = 2;
		minRangeProbab = 0.2;
		midRange = 550;
		midRangeProbab = 0.7;
		maxRange = 700;
		maxRangeProbab = 0.1;
		aiRateOfFire = 6;
		aiRateOfFireDistance = 600;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType = 2;
	};
	class fullauto_medium: FullAuto
	{
		showToPlayer = 0;
		burst = 3;
		minRange = 2;
		minRangeProbab = 0.5;
		midRange = 75;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;
		aiRateOfFire = 2.0;
	};
	class GP25Muzzle: GP25_Base {};

	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;

	drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
	reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};

	hiddenSelections[] = {"body"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\ak74m_co.paa"};

};

class rhs_weap_ak74m : rhs_weap_ak74m_Base_F
{
	Author_Macro
	scope = 2;
	baseWeapon="rhs_weap_ak74m";

	dexterity = 1.6;

	weaponInfoType = "rhs_rscOptics_ak74";

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M0;
	descriptionShort = $STR_RHS_CFGWEAPONS_RIFLE_AK74M1;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m";

	picture = "\rhsafrf\addons\rhs_weapons\gear\rhs_weap_gear_ak74m_x_ca.paa";

	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};

	//modes[] = {"this"};

	rhs_fold="rhs_weap_ak74m_folded";
	rhs_npz="rhs_weap_ak74m_npz";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 74.5;
	};

	class ItemInfo
	{
		priority = 1;
		RMBhint = "AK-74M";
		onHoverText = "TODO AK-74M DSS";
	};

};

class rhs_weap_asval : rhs_weap_ak74m
{
	scopeArsenal=2;
	scope=2;
	Author_Macro
	displayName = "$STR_RHS_WEAP_ASVAL";
	descriptionShort = "$STR_RHS_WEAP_ASVAL_DESC";

	magazines[] =
	{
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP6"
	};

	discreteDistance[] = { 100, 150, 200, 250, 300, 350, 400 };

	weaponInfoType = "RscWeaponZeroing";
	rhs_npz="rhs_weap_asval_npz";
	baseWeapon="rhs_weap_asval";
	model = "\rhsafrf\addons\rhs_weapons2\asval\rhs_asval";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	picture = "\rhsafrf\addons\rhs_weapons2\icons\rhs_asval_inventory_ca.paa";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval.rtm"};

	fireLightDuration = 0;
	fireLightIntensity = 0;
	initSpeed = -1.0535;
	dexterity = 1.7;
	inertia = 0.45;

	class Single : Single
	{
		reloadTime = 0.0667;
		recoil = "recoil_single_SMG_01";
		recoilProne = "recoil_single_prone_SMG_01";

		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 100;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
		aiRateOfFire = 3;
		aiRateOfFireDistance = 400;
	};
	class FullAuto : FullAuto
	{
		reloadTime = 0.0667;
		recoil = "recoil_auto_smg_01";
		recoilProne = "recoil_auto_prone_smg_01";

		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 35;
		maxRangeProbab = 0.1;
	};
	class single_medium_optics1 : Single
	{
		showToPlayer=0;
		requiredOpticType = 1;
		midRange = 125;
	};
	class single_far_optics2 : Single
	{
		showToPlayer=0;
		requiredOpticType = 2;

		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
		aiRateOfFire = 3.5;
		aiRateOfFireDistance = 400;
	};
	class fullauto_medium : fullauto_medium
	{
		showToPlayer=0;
		burst = 3;
		minRange = 2;
		minRangeProbab = 0.5;
		midRange = 50;
		midRangeProbab = 0.7;
		maxRange = 75;
		maxRangeProbab = 0.05;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 75;
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 54.77;
		class MuzzleSlot{};
		class CowsSlot : rhs_russian_rifle_scopes_slot {
			class compatibleItems: compatibleItems
			{
				rhs_acc_pso1m2=1;
				rhs_acc_pso1m21=1;
			};
		};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
		class PointerSlot {};
	};

};

class rhs_weap_asval_npz : rhs_weap_asval
{
	Author_Macro
	displayName = $STR_RHS_WEAP_ASVAL_NPZ;

	model = "\rhsafrf\addons\rhs_weapons2\asval\rhs_asval_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot{};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		//class PointerSlot {};
		class PointerSlot{};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_asval";
	weaponInfoType = "rhs_rscOptics_ak74_npz";
	baseWeapon="rhs_weap_asval_npz";
};

class rhs_weap_ak105 : rhs_weap_ak74m
{
	scopeArsenal=2;
	scope=2;
	Author_Macro
	displayName = "AK-105";
	baseWeapon="rhs_weap_ak105";
	model = "\rhsafrf\addons\rhs_weapons\rhs_ak105";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK103_co.paa"};
	picture = "\rhsafrf\addons\rhs_weapons\icons\ak103_ca.paa";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_tgpa","rhs_acc_dtk3","rhs_acc_dtk1","rhs_acc_dtk","rhs_acc_dtk4short","rhs_acc_ak5","rhs_acc_pgs64"};
		};
		class CowsSlot: rhs_russian_rifle_scopes_slot{};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
	};

	initSpeed = -0.933;

};

class rhs_weap_ak74m_camo : rhs_weap_ak74m
{
	Author_Macro
	weaponInfoType = "rhs_rscOptics_ak74_camo";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_CAMO0;
	picture = "\rhsafrf\addons\rhs_weapons\icons\ak74m_camo_ca.paa";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
	rhs_fold="rhs_weap_ak74m_camo_folded";
	rhs_npz="rhs_weap_ak74m_camo_npz";
	baseWeapon="rhs_weap_ak74m_camo";
};

class rhs_weap_ak74m_npz : rhs_weap_ak74m
{
	Author_Macro
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_NPZ0;
	descriptionShort = $STR_RHS_CFGWEAPONS_RIFLE_AK74M1;

	baseWeapon="rhs_weap_ak74m_npz";
	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m_npz";
	weaponInfoType = "rhs_rscOptics_ak74_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_tgpa","rhs_acc_dtk3","rhs_acc_dtk1","rhs_acc_dtk","rhs_acc_dtk4short","rhs_acc_ak5"};
		};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_ak74m";
};

class rhs_weap_ak74m_desert_npz : rhs_weap_ak74m_npz
{
	Author_Macro
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_DESERT0_NPZ0;
	picture = "\rhsafrf\addons\rhs_weapons\icons\ak74m_desert_ca.paa";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"};
	rhs_npz="rhs_weap_ak74m_desert";
	weaponInfoType = "rhs_rscOptics_ak74_desert_npz";
	baseWeapon="rhs_weap_ak74m_desert_npz";
};

class rhs_weap_ak74m_camo_npz : rhs_weap_ak74m_npz
{
	Author_Macro
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_CAMO0_NPZ0;
	picture = "\rhsafrf\addons\rhs_weapons\icons\ak74m_camo_ca.paa";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
	rhs_npz="rhs_weap_ak74m_camo";
	weaponInfoType = "rhs_rscOptics_ak74_camo_npz";
	//baseWeapon="rhs_weap_ak74m_camo_npz";
};

class rhs_weap_akm : rhs_weap_ak74m
{
	Author_Macro
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {350,100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	scope=2;
	dexterity = 1.81;
	displayName = "$STR_RHS_WEAP_AKM";
	descriptionShort = "$STR_RHS_WEAP_AK_DESC";
	model = "\rhsafrf\addons\rhs_weapons\akm\rhs_akm";
	picture = "\rhsafrf\addons\rhs_weapons\icons\akm_ca.paa";

	baseWeapon="rhs_weap_akm";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot{};
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_pbs1","rhs_acc_dtk1l"};
		};
		class rhs_npz_slot {};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
	};
	magazines[] =
	{
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm_tracer",
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_U"
	};

	modes[]=
	{
		"Single",
		"FullAuto",
		"single_medium_optics1",
		"single_far_optics2",
		"fullauto_medium"
	};
	class Single: Mode_SemiAuto
	{
 		sounds[] = {StandardSound, SilencedSound};
 		class BaseSoundModeType
 		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
 		class StandardSound: BaseSoundModeType
 		{
			begin1[]={"rhsafrf\addons\rhs_sounds\akM\akM_1",2.35,1,1300};
			begin2[]={"rhsafrf\addons\rhs_sounds\akM\akM_2",2.35,1,1300};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
 		class SilencedSound: BaseSoundModeType
 		{
 			begin1[]={"A3\sounds_f\weapons\silenced\silent-07", db-1, 1,200};
 			begin2[]={"A3\sounds_f\weapons\silenced\silent-08", db-1, 1,200};
 			soundBegin[]={begin1,0.5, begin2,0.5};
		};
		reloadTime=0.1;
		dispersion=0.0021;
		recoil="recoil_single_ebr";
		recoilProne="recoil_single_prone_ebr";
		minRange=2;
		minRangeProbab=0.5;
		midRange=200;
		midRangeProbab=0.7;
		maxRange=400;
		maxRangeProbab=0.3;
	};
	class FullAuto: Mode_FullAuto
	{
 		sounds[] = {StandardSound, SilencedSound};
 		class BaseSoundModeType
 		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
 		class StandardSound: BaseSoundModeType
 		{
			begin1[]={"rhsafrf\addons\rhs_sounds\akM\akM_1",2.35,1,1300};
			begin2[]={"rhsafrf\addons\rhs_sounds\akM\akM_2",2.35,1,1300};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
 		class SilencedSound: BaseSoundModeType
 		{
 			begin1[]={"A3\sounds_f\weapons\silenced\silent-07", db-1, 1,200};
 			begin2[]={"A3\sounds_f\weapons\silenced\silent-08", db-1, 1,200};
 			soundBegin[]={begin1,0.5, begin2,0.5};
		};
		reloadTime=0.1;
		dispersion=0.0021;
		recoil="recoil_auto_ebr";
		recoilProne="recoil_auto_prone_ebr";
		minRange=0;
		minRangeProbab=0.9;
		midRange=15;
		midRangeProbab=0.7;
		maxRange=30;
		maxRangeProbab=0.1;
		aiRateOfFire=1e-006;
	};
	class fullauto_medium: FullAuto
	{
		showToPlayer=0;
		burst=3;
		minRange=2;
		minRangeProbab=0.5;
		midRange=75;
		midRangeProbab=0.7;
		maxRange=150;
		maxRangeProbab=0.05;
		aiRateOfFire=2;
		aiRateOfFireDistance=200;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType=1;
		showToPlayer=0;
		minRange=2;
		minRangeProbab=0.2;
		midRange=450;
		midRangeProbab=0.7;
		maxRange=600;
		maxRangeProbab=0.2;
		aiRateOfFire=6;
		aiRateOfFireDistance=600;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType=2;
		minRange=100;
		minRangeProbab=0.1;
		midRange=450;
		midRangeProbab=0.6;
		maxRange=800;
		maxRangeProbab=0.05;
		aiRateOfFire=8;
		aiRateOfFireDistance=800;
	};

	class GP25Muzzle: GP25_Base {};

	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
};

class rhs_weap_akm_gp25 : rhs_weap_akm
{
	Author_Macro
	weaponInfoType = "RscWeaponZeroing";
	displayName = $STR_RHS_WEAP_AKM_GP25;

	model = "\rhsafrf\addons\rhs_weapons\akm\rhs_akm_gp25";

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	muzzles[] = {"this","GP25Muzzle"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot{};
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_pbs1","rhs_acc_dtk1l"};
		};
		class rhs_npz_slot {};
		class PointerSlot {};
	};

	baseWeapon="rhs_weap_akm_gp25";
};

class rhs_weap_akms : rhs_weap_akm
{
	Author_Macro
	displayName = "$STR_RHS_WEAP_AKMS";
	picture = "\rhsafrf\addons\rhs_weapons\icons\akms_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\akm\rhs_akms";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 72.6;
	};
	baseWeapon="rhs_weap_akms";
};

class rhs_weap_akms_gp25 : rhs_weap_akm
{
	Author_Macro
	weaponInfoType = "RscWeaponZeroing";
	displayName = $STR_RHS_WEAP_AKMS_GP25;

	model = "\rhsafrf\addons\rhs_weapons\akm\rhs_akms_gp25";

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	muzzles[] = {"this","GP25Muzzle"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot{};
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_pbs1","rhs_acc_dtk1l"};
		};
		class rhs_npz_slot {};
		class PointerSlot {};
	};

	baseWeapon="rhs_weap_akms_gp25";
};

class rhs_weap_ak103_base : rhs_weap_akm
{
	scope=0;
	model = "\rhsafrf\addons\rhs_weapons\rhs_ak103";
	Author_Macro
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK103_co.paa"};
	picture = "\rhsafrf\addons\rhs_weapons\icons\ak103_ca.paa";

	magazines[] =
	{
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm_tracer",
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_U"
	};

	modes[]=
	{
		"Single",
		"FullAuto",
		"single_medium_optics1",
		"single_far_optics2",
		"fullauto_medium"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot: rhs_russian_rifle_scopes_slot {};
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_pbs1","rhs_acc_dtk3","rhs_acc_dtk1","rhs_acc_dtk","rhs_acc_dtk4long","rhs_acc_dtk4screws","rhs_acc_ak5"};
		};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
	};

	class Single: Mode_SemiAuto
	{
 		sounds[] = {StandardSound, SilencedSound};
 		class BaseSoundModeType
 		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
 		class StandardSound: BaseSoundModeType
 		{
			begin1[]={"rhsafrf\addons\rhs_sounds\akM\akM_1",2.35,1,1300};
			begin2[]={"rhsafrf\addons\rhs_sounds\akM\akM_2",2.35,1,1300};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[]={"rhsafrf\addons\rhs_sounds\ak_shared\silenced_1",2.2,1,600};
			begin2[]={"rhsafrf\addons\rhs_sounds\ak_shared\silenced_2",2.2,1,600};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
		reloadTime=0.1;
		dispersion=0.0021;
		recoil="recoil_single_ebr";
		recoilProne="recoil_single_prone_ebr";
		minRange=2;
		minRangeProbab=0.5;
		midRange=200;
		midRangeProbab=0.7;
		maxRange=400;
		maxRangeProbab=0.3;
	};
	class FullAuto: Mode_FullAuto
	{
 		sounds[] = {StandardSound, SilencedSound};
 		class BaseSoundModeType
 		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
 		class StandardSound: BaseSoundModeType
 		{
			begin1[]={"rhsafrf\addons\rhs_sounds\akM\akM_1",2.35,1,1300};
			begin2[]={"rhsafrf\addons\rhs_sounds\akM\akM_2",2.35,1,1300};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[]={"rhsafrf\addons\rhs_sounds\ak_shared\silenced_1",2.2,1,600};
			begin2[]={"rhsafrf\addons\rhs_sounds\ak_shared\silenced_2",2.2,1,600};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
		reloadTime=0.1;
		dispersion=0.0021;
		recoil="recoil_auto_ebr";
		recoilProne="recoil_auto_prone_ebr";
		minRange=0;
		minRangeProbab=0.9;
		midRange=15;
		midRangeProbab=0.7;
		maxRange=30;
		maxRangeProbab=0.1;
		aiRateOfFire=1e-006;
	};
	class fullauto_medium: FullAuto
	{
		showToPlayer=0;
		burst=3;
		minRange=2;
		minRangeProbab=0.5;
		midRange=75;
		midRangeProbab=0.7;
		maxRange=150;
		maxRangeProbab=0.05;
		aiRateOfFire=2;
		aiRateOfFireDistance=200;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType=1;
		showToPlayer=0;
		minRange=2;
		minRangeProbab=0.2;
		midRange=450;
		midRangeProbab=0.7;
		maxRange=600;
		maxRangeProbab=0.2;
		aiRateOfFire=6;
		aiRateOfFireDistance=600;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType=2;
		minRange=100;
		minRangeProbab=0.1;
		midRange=450;
		midRangeProbab=0.6;
		maxRange=800;
		maxRangeProbab=0.05;
		aiRateOfFire=8;
		aiRateOfFireDistance=800;
	};
	class GP25Muzzle: GP25_Base {};

};

class rhs_weap_ak103 : rhs_weap_ak103_base
{
	scope=2;
	Author_Macro
	displayName = $STR_RHS_WEAP_AK103;
	rhs_npz="rhs_weap_ak103_npz";
	baseWeapon="rhs_weap_ak103";
};

class rhs_weap_ak104 : rhs_weap_ak103_base
{
	scopeArsenal=2;
	scope=2;
	Author_Macro
	displayName = "AK-104";
	baseWeapon="rhs_weap_ak104";
	model = "\rhsafrf\addons\rhs_weapons\rhs_ak104";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK103_co.paa"};
	picture = "\rhsafrf\addons\rhs_weapons\icons\ak103_ca.paa";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = { "rhs_acc_pbs1", "rhs_acc_dtk3", "rhs_acc_dtk1", "rhs_acc_dtk", "rhs_acc_dtk4long", "rhs_acc_dtk4screws", "rhs_acc_ak5", "rhs_acc_pgs64" };
		};
		class CowsSlot: rhs_russian_rifle_scopes_slot{};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
	};

	initSpeed = -0.937;

};

class rhs_weap_ak104_npz : rhs_weap_ak104
{
	Author_Macro
	displayName = $STR_RHS_WEAP_AK104_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak104_npz";
	picture = "\rhsafrf\addons\rhs_weapons\icons\ak103npz_ca.paa";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_pbs1","rhs_acc_dtk3","rhs_acc_dtk1","rhs_acc_dtk","rhs_acc_dtk4long","rhs_acc_dtk4screws","rhs_acc_ak5","rhs_acc_pgs64"};
		};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		//class PointerSlot {};
		class PointerSlot: rhs_russian_ak_barrel_slot{};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_ak104";
	weaponInfoType = "rhs_rscOptics_ak103_npz";
	baseWeapon="rhs_weap_ak104_npz";
};

class rhs_weap_ak105_npz : rhs_weap_ak105
{
	Author_Macro
	displayName = $STR_RHS_WEAP_AK105_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak105_npz";
	picture = "\rhsafrf\addons\rhs_weapons\icons\ak103npz_ca.paa";


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = { "rhs_acc_tgpa", "rhs_acc_dtk3", "rhs_acc_dtk1", "rhs_acc_dtk", "rhs_acc_dtk4short", "rhs_acc_ak5", "rhs_acc_pgs64" };
		};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		//class PointerSlot {};
		class PointerSlot: rhs_russian_ak_barrel_slot{};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_ak105";
	weaponInfoType = "rhs_rscOptics_ak103_npz";
	baseWeapon="rhs_weap_ak105_npz";
};

class rhs_weap_ak103_npz : rhs_weap_ak103
{
	Author_Macro
	displayName = $STR_RHS_WEAP_AK103_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak103_npz";
	picture = "\rhsafrf\addons\rhs_weapons\icons\ak103npz_ca.paa";


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_pbs1","rhs_acc_dtk3","rhs_acc_dtk1","rhs_acc_dtk","rhs_acc_dtk4long","rhs_acc_dtk4screws","rhs_acc_ak5"};
		};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		//class PointerSlot {};
		class PointerSlot: rhs_russian_ak_barrel_slot{};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_ak103";
	weaponInfoType = "rhs_rscOptics_ak103_npz";
	baseWeapon="rhs_weap_ak103_npz";
};

class rhs_weap_ak103_1 : rhs_weap_ak103_base
{
	Author_Macro
	displayName = $STR_RHS_WEAP_AK1031;
	scope=2;
	modes[] = {"Single","single_medium_optics1","single_far_optics2"};
	baseWeapon="rhs_weap_ak103_1";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot: rhs_russian_rifle_scopes_slot {};
		class MuzzleSlot: MuzzleSlot {};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
		class rhs_npz_slot {};
	};

	class Single: Mode_SemiAuto
	{
 		sounds[] = {StandardSound, SilencedSound};
 		class BaseSoundModeType
 		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
 		class StandardSound: BaseSoundModeType
 		{
			begin1[]={"rhsafrf\addons\rhs_sounds\akM\akM_1",2.35,1,1300};
			begin2[]={"rhsafrf\addons\rhs_sounds\akM\akM_2",2.35,1,1300};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[]={"rhsafrf\addons\rhs_sounds\ak_shared\silenced_1",2.2,1,600};
			begin2[]={"rhsafrf\addons\rhs_sounds\ak_shared\silenced_2",2.2,1,600};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
		reloadTime=0.1;
		dispersion=0.0021;
		recoil="recoil_single_ebr";
		recoilProne="recoil_single_prone_ebr";
		minRange=2;
		minRangeProbab=0.5;
		midRange=200;
		midRangeProbab=0.7;
		maxRange=400;
		maxRangeProbab=0.3;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType=1;
		showToPlayer=0;
		minRange=2;
		minRangeProbab=0.2;
		midRange=450;
		midRangeProbab=0.7;
		maxRange=600;
		maxRangeProbab=0.2;
		aiRateOfFire=6;
		aiRateOfFireDistance=600;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType=2;
		minRange=100;
		minRangeProbab=0.1;
		midRange=450;
		midRangeProbab=0.6;
		maxRange=800;
		maxRangeProbab=0.05;
		aiRateOfFire=8;
		aiRateOfFireDistance=800;
	};

	class GP25Muzzle: GP25_Base {};
};

class rhs_weap_ak103_2 : rhs_weap_ak103_base
{
	Author_Macro
	displayName = $STR_RHS_WEAP_AK1032;
	scope=2;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot: rhs_russian_rifle_scopes_slot {};
		class MuzzleSlot: MuzzleSlot {};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
		class rhs_npz_slot {};
	};

	modes[] = {"Single","Burst","single_medium_optics1","single_far_optics2"};

	class Single: Mode_SemiAuto
	{
 		sounds[] = {StandardSound, SilencedSound};
 		class BaseSoundModeType
 		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
 		class StandardSound: BaseSoundModeType
 		{
			begin1[]={"rhsafrf\addons\rhs_sounds\akM\akM_1",2.35,1,1300};
			begin2[]={"rhsafrf\addons\rhs_sounds\akM\akM_2",2.35,1,1300};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[]={"rhsafrf\addons\rhs_sounds\ak_shared\silenced_1",2.2,1,600};
			begin2[]={"rhsafrf\addons\rhs_sounds\ak_shared\silenced_2",2.2,1,600};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
		reloadTime=0.1;
		dispersion=0.0021;
		recoil="recoil_single_ebr";
		recoilProne="recoil_single_prone_ebr";
		minRange=2;
		minRangeProbab=0.5;
		midRange=200;
		midRangeProbab=0.7;
		maxRange=400;
		maxRangeProbab=0.3;
	};
	class Burst : Mode_Burst
	{
 		sounds[] = {StandardSound, SilencedSound};
 		class BaseSoundModeType
 		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
 		class StandardSound: BaseSoundModeType
 		{
			begin1[]={"rhsafrf\addons\rhs_sounds\akM\akM_1",2.35,1,1300};
			begin2[]={"rhsafrf\addons\rhs_sounds\akM\akM_2",2.35,1,1300};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[]={"rhsafrf\addons\rhs_sounds\ak_shared\silenced_1",2.2,1,600};
			begin2[]={"rhsafrf\addons\rhs_sounds\ak_shared\silenced_2",2.2,1,600};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
		reloadTime=0.1;
		dispersion=0.0021;
		recoil="recoil_auto_ebr";
		recoilProne="recoil_auto_prone_ebr";
		minRange=2;
		minRangeProbab=0.5;
		midRange=200;
		midRangeProbab=0.7;
		maxRange=400;
		maxRangeProbab=0.3;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType=1;
		showToPlayer=0;
		minRange=2;
		minRangeProbab=0.2;
		midRange=450;
		midRangeProbab=0.7;
		maxRange=600;
		maxRangeProbab=0.2;
		aiRateOfFire=6;
		aiRateOfFireDistance=600;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType=2;
		minRange=100;
		minRangeProbab=0.1;
		midRange=450;
		midRangeProbab=0.6;
		maxRange=800;
		maxRangeProbab=0.05;
		aiRateOfFire=8;
		aiRateOfFireDistance=800;
	};

	class GP25Muzzle: GP25_Base {};
	baseWeapon="rhs_weap_ak103_2";
};

class rhs_weap_ak103_gp25: rhs_weap_ak103_base
{
	Author_Macro
	scope=2;
	weaponInfoType = "RscWeaponZeroing";
	displayName = $STR_RHS_WEAP_AK103_GP25;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak103_gp25";

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	muzzles[] = {"this","GP25Muzzle"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 103;
		class PointerSlot {};
	};
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_dtk";
		};
	};

	baseWeapon="rhs_weap_ak103_gp25";
	rhs_npz="rhs_weap_ak103_gp25_npz";
};

class rhs_weap_ak103_gp25_npz: rhs_weap_ak103_base
{
	Author_Macro
	scope=2;
	displayName = $STR_RHS_WEAP_AK103_GP25_NPZ;
	weaponInfoType = "rhs_rscOptics_ak74_gp25_npz";
	model = "\rhsafrf\addons\rhs_weapons\rhs_ak103_gp25_npz";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	muzzles[] = {"this","GP25Muzzle"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_pbs1","rhs_acc_dtk3","rhs_acc_dtk1","rhs_acc_dtk","rhs_acc_dtk4long","rhs_acc_dtk4screws","rhs_acc_ak5"};
		};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot {};
		class rhs_npz_slot {};
	};

	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_dtk";
		};
	};

	baseWeapon="rhs_weap_ak103_gp25_npz";
	rhs_npz="rhs_weap_ak103_gp25";
};

class rhs_weap_ak74m_folded : rhs_weap_ak74m
{
	Author_Macro
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_FOLD0;
	picture = "\rhsafrf\addons\rhs_weapons\icons\ak74m_stock_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m_folded";
	//moved by 0.1 in X axis
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock_fold.rtm"};

	class Single: Single
	{
		recoil = "recoil_single_gm6";
		recoilProne = "recoil_single_prone_mx";
	};
	class FullAuto: FullAuto
	{
		recoil = "recoil_single_gm6";
		recoilProne = "recoil_auto_prone_mx";
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot {};
		class PointerSlot: rhs_russian_ak_barrel_slot{};
		class rhs_npz_slot {};
	};

	inertia = 0.7;
	//hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
	rhs_fold="rhs_weap_ak74m";
	baseWeapon="rhs_weap_ak74m_folded";
};

class rhs_weap_ak74m_camo_folded : rhs_weap_ak74m_folded
{

	Author_Macro
	weaponInfoType = "rhs_rscOptics_ak74_camo";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_FOLD0;
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};

	rhs_fold="rhs_weap_ak74m_camo";
	baseWeapon="rhs_weap_ak74m_camo_folded";
};

class rhs_weap_ak74m_desert_folded : rhs_weap_ak74m_folded
{

	Author_Macro
	weaponInfoType = "rhs_rscOptics_ak74_desert";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_FOLD0;
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"};
	rhs_fold="rhs_weap_ak74m_desert";
	baseWeapon="rhs_weap_ak74m_desert_folded";
};

class rhs_weap_ak74m_plummag_folded : rhs_weap_ak74m_folded
{

	Author_Macro
	weaponInfoType = "rhs_rscOptics_ak74_plummag";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_FOLD0;
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\ak74m_plum_co.paa"};
	rhs_fold="rhs_weap_ak74m_plummag";
	baseWeapon="rhs_weap_ak74m_plummag_folded";
};

class rhs_weap_ak74m_gp25_folded : rhs_weap_ak74m_folded
{

	Author_Macro
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_GP250;

	//need folded model
	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m_gp25";

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	muzzles[] = {"this","GP25Muzzle"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 103;
		class PointerSlot {};
	};
};

class rhs_weap_ak74m_2mag : rhs_weap_ak74m
{
	Author_Macro
	weaponInfoType = "RscWeaponZeroing";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_2MAG0;
	picture = "\rhsafrf\addons\rhs_weapons\icons\ak74m_2mag_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m_2mag";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock.rtm"};

	//hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
	rhs_npz="rhs_weap_ak74m_2mag_npz";
	baseWeapon="rhs_weap_ak74m_2mag";
};

class rhs_weap_ak74m_2mag_npz : rhs_weap_ak74m_2mag
{
	Author_Macro
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_2MAG0_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m_2mag_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_tgpa","rhs_acc_dtk3","rhs_acc_dtk1","rhs_acc_dtk","rhs_acc_dtk4short","rhs_acc_ak5"};
		};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_ak74m_2mag";
	weaponInfoType = "rhs_rscOptics_ak74_2mag_npz";
	baseWeapon="rhs_weap_ak74m_2mag_npz";
};

class rhs_weap_ak74m_2mag_camo_npz : rhs_weap_ak74m_2mag_npz
{
	Author_Macro
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_2MAG0_CAMO0_NPZ0;

	rhs_npz="rhs_weap_ak74m_2mag_camo";
	weaponInfoType = "rhs_rscOptics_ak74_2mag_camo_npz";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};

};

class rhs_weap_ak74m_2mag_camo : rhs_weap_ak74m_2mag
{
	Author_Macro
	weaponInfoType = "RscWeaponZeroing";
	displayName = $STR_RHS_WEAP_AK74M_2MAGCAMO;
	picture = "\rhsafrf\addons\rhs_weapons\icons\ak74m_2magCamo_ca.paa";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
	rhs_npz="rhs_weap_ak74m_2mag_camo_npz";
	baseWeapon="rhs_weap_ak74m_2mag_camo";
};

class rhs_weap_ak74m_desert : rhs_weap_ak74m
{
	Author_Macro
	weaponInfoType = "rhs_rscOptics_ak74_desert";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_DESERT0;
	picture = "\rhsafrf\addons\rhs_weapons\icons\ak74m_desert_ca.paa";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"};
	rhs_fold="rhs_weap_ak74m_desert_folded";
	rhs_npz="rhs_weap_ak74m_desert_npz";
	baseWeapon="rhs_weap_ak74m_desert";
};

class rhs_weap_ak74m_plummag : rhs_weap_ak74m
{
	Author_Macro
	weaponInfoType = "rhs_rscOptics_ak74_plummag";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_PMAG0;
	picture = "\rhsafrf\addons\rhs_weapons\gear\rhs_weap_gear_ak74m_x_ca.paa";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\ak74m_plum_co.paa"};
	rhs_fold="rhs_weap_ak74m_plummag_folded";
	rhs_npz="rhs_weap_ak74m_plummag_npz";
	baseWeapon="rhs_weap_ak74m_plummag";
};

class rhs_weap_ak74m_plummag_npz : rhs_weap_ak74m_npz
{
	Author_Macro
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_PMAG0_NPZ0;
	rhs_npz="rhs_weap_ak74m_plummag";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\ak74m_plum_co.paa"};
	weaponInfoType = "rhs_rscOptics_ak74_plummag_npz";
	baseWeapon="rhs_weap_ak74m_plummag_npz";
};

class rhs_weap_ak74m_gp25 : rhs_weap_ak74m
{
	Author_Macro
	weaponInfoType = "RscWeaponZeroing";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_GP250;
	picture = "\rhsafrf\addons\rhs_weapons\icons\ak74mgp_ca.paa";

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m_gp25";

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	muzzles[] = {"this","GP25Muzzle"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 103;
		class PointerSlot {};
	};
	inertia = 0.6;
	dexterity = 1.4;
	baseWeapon="rhs_weap_ak74m_gp25";
	rhs_npz="rhs_weap_ak74m_gp25_npz";

};

class rhs_weap_ak74m_gp25_npz : rhs_weap_ak74m_gp25
{
	Author_Macro
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_GP250_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m_gp25_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_tgpa","rhs_acc_dtk3","rhs_acc_dtk1","rhs_acc_dtk","rhs_acc_dtk4short","rhs_acc_ak5"};
		};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot {};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_ak74m_gp25";
	weaponInfoType = "rhs_rscOptics_ak74_gp25_npz";
	baseWeapon="rhs_weap_ak74m_gp25_npz";
};

class rhs_weap_ak74 : rhs_weap_ak74m
{
	scope=0; //not visible in arsenal
	dexterity = 1.8;
	displayName = $STR_RHS_WEAP_AK74;
	weaponInfoType = "RscWeaponZeroing";
	//descriptionShort = $STR_RHS_CFGWEAPONS_RIFLE_AK74;

	//picture = "\rhsafrf\addons\rhs_weapons\icons\ak74_ca.paa";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 67;
		class rhs_picattinny_russian_rifle_bis_scopes_slot {};
	};
	baseWeapon="rhs_weap_ak74";
};

class rhs_weap_ak74_gp25 : rhs_weap_ak74m_gp25
{
	weaponInfoType = "RscWeaponZeroing";
	scope=0; //not visible in arsenal
	dexterity = 1.8;
	displayName = $STR_RHS_WEAP_AK74_GP25;
	//picture = "\rhsafrf\addons\rhs_weapons\icons\ak74gl_ca.paa";
	baseWeapon="rhs_weap_ak74_gp25";
};

class rhs_weap_aks74 : rhs_weap_ak74
{
	dexterity = 1.58;
	displayName = $STR_RHS_WEAP_AKS74;
	//picture = "\rhsafrf\addons\rhs_weapons\icons\aks74_ca.paa";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 65;
	};
	baseWeapon="rhs_weap_aks74";
};

class rhs_weap_aks74u : rhs_weap_aks74
{
	displayName = $STR_RHS_WEAP_AKS74U;
	//picture = "\rhsafrf\addons\rhs_weapons\icons\aks74u_ca.paa";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 59.4;
	};
	baseWeapon="rhs_weap_aks74u";
};

//ported a2 weapons for test purposes
class rhs_weap_svd : rhs_weap_ak74m
{
	baseWeapon="rhs_weap_svd";
	weaponInfoType = "RscWeaponZeroing";
	scope=1;
	 //not visible in arsenal
	displayname = "$STR_RHS_SVD_NAME";
	descriptionShort = "$STR_RHS_SVD_DESC";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 67;
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_tgpv"};
		};
		class CowsSlot: rhs_russian_svd_scopes_slot{};
		class PointerSlot {};
	//	class PointerSlot: rhs_russian_rifle_laser_slot{};
	};

	picture = "\rhsafrf\addons\rhs_weapons\icons\svd_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\SVD\svd_polymer";

	discreteDistance[] = {440,100,200,300,400,500,600,700,800,900,1000,1100,1200};
	reloadAction="GestureReloadEBR";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\svd.rtm"};

	magazines[] =
	{
		"rhs_10Rnd_762x54mmR_7N1"
	};

	modes[]=
	{
		"Single",
		"single_close_optics1",
		"single_medium_optics1",
		"single_far_optics1"
	};
	class Single: Mode_SemiAuto
	{
 		sounds[] = {StandardSound};
 		class BaseSoundModeType
 		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
 		class StandardSound: BaseSoundModeType
 		{
			begin1[]={"\rhsafrf\addons\rhs_weapons\sounds\rhs_dragunov_1",1,1,1200};
			begin2[]={"\rhsafrf\addons\rhs_weapons\sounds\rhs_dragunov_2",1,1,1200};
			soundBegin[]=
			{
				"begin1",0.5,
				"begin2",0.5
			};
		};
		reloadTime=0.085000001;
		recoil="recoil_single_ebr";
		recoilProne="recoil_single_prone_ebr";
		dispersion=0.0007;
		minRange=2;
		minRangeProbab=0.3;
		midRange=350;
		midRangeProbab=0.7;
		maxRange=500;
		maxRangeProbab=0.05;
	};
	class single_close_optics1: Single
	{
		requiredOpticType=1;
		showToPlayer=0;
		minRange=2;
		minRangeProbab=0.05;
		midRange=300;
		midRangeProbab=0.8;
		maxRange=500;
		maxRangeProbab=0.0099;
		aiRateOfFire=2;
		aiRateOfFireDistance=300;
	};
	class single_medium_optics1: single_close_optics1
	{
		minRange=300;
		minRangeProbab=0.05;
		midRange=500;
		midRangeProbab=0.7;
		maxRange=700;
		maxRangeProbab=0.05;
		aiRateOfFire=2;
		aiRateOfFireDistance=500;
	};
	class single_far_optics1: single_medium_optics1
	{
		requiredOpticType=2;
		minRange=300;
		minRangeProbab=0.05;
		midRange=600;
		midRangeProbab=0.4;
		maxRange=900;
		maxRangeProbab=0.05;
		aiRateOfFire=4;
		aiRateOfFireDistance=600;
	};
	reloadMagazineSound[]={"A3\sounds_f\weapons\reloads\new_ebr",0.63095701,1,35};
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	inertia = 0.65;
	dexterity = 1.4;
};

class rhs_weap_svdp : rhs_weap_svd
{
	baseWeapon="rhs_weap_svdp";
	scope=2;
	Author_Macro
	displayname = "$STR_RHS_WEAP_SVDM";

	picture = "\rhsafrf\addons\rhs_weapons\icons\svd_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\SVD\svd_polymer";

	modes[]=
	{
		"Single",
		"single_close_optics1",
		"single_medium_optics1",
		"single_far_optics1"
	};

	class Single: Mode_SemiAuto
	{
 		/*sounds[] = {"StandardSound","Silencedsound"};
 		class BaseSoundModeType
 		{
			weaponSoundEffect = "DefaultRifle";
			soundClosure[] = {};
		};
 		class StandardSound
 		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};

			begin1[]={"\rhsafrf\addons\rhs_weapons\sounds\rhs_dragunov_1",1,1,1200};
			begin2[]={"\rhsafrf\addons\rhs_weapons\sounds\rhs_dragunov_2",1,1,1200};
			soundBegin[]=
			{
				"begin1",0.5,
				"begin2",0.5
			};
		};
		*/
		reloadTime=0.085000001;
		recoil="recoil_single_ebr";
		recoilProne="recoil_single_prone_ebr";
		dispersion=0.0007;
		minRange=2;
		minRangeProbab=0.3;
		midRange=350;
		midRangeProbab=0.7;
		maxRange=500;
		maxRangeProbab=0.05;
	};

	class single_close_optics1: Single
	{
		requiredOpticType=1;
		showToPlayer=0;
		minRange=2;
		minRangeProbab=0.05;
		midRange=300;
		midRangeProbab=0.8;
		maxRange=500;
		maxRangeProbab=0.0099;
		aiRateOfFire=2;
		aiRateOfFireDistance=300;
	};
	class single_medium_optics1: single_close_optics1
	{
		minRange=300;
		minRangeProbab=0.05;
		midRange=500;
		midRangeProbab=0.7;
		maxRange=700;
		maxRangeProbab=0.05;
		aiRateOfFire=2;
		aiRateOfFireDistance=500;
	};
	class single_far_optics1: single_medium_optics1
	{
		requiredOpticType=2;
		minRange=300;
		minRangeProbab=0.05;
		midRange=600;
		midRangeProbab=0.4;
		maxRange=900;
		maxRangeProbab=0.05;
		aiRateOfFire=4;
		aiRateOfFireDistance=600;
	};

	hiddenSelections[] = {"Camo1", "Camo2"}; //turned for now - selections need to be tweaked on model
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\svd\data\svdp_co.paa", "rhsafrf\addons\rhs_weapons\svd\data\svds_co.paa"};

	rhs_npz="rhs_weap_svdp_npz";
};

class rhs_weap_svdp_npz : rhs_weap_svdp
{
	baseWeapon="rhs_weap_svdp_npz";
	Author_Macro
	displayName = $STR_RHS_WEAP_SVDM_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\SVD\svd_polymer_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_tgpv"};
		};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot {};
	//	class PointerSlot: rhs_russian_rifle_laser_slot{};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_svdp";
	weaponInfoType = "rhs_rscOptics_svdp_npz";
};

/* class rhs_weap_svdp_d : rhs_weap_svdp
{
	displayname = "$STR_RHS_WEAP_SVDM_DES";
	model = "\rhsafrf\addons\rhs_weapons\SVD\svd_polymer";

	hiddenSelections[] = {"Camo1", "Camo2"}; //turned for now - selections need to be tweaked on model
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\svd\data\svdp_d_co.paa", "rhsafrf\addons\rhs_weapons\svd\data\svds_d_co.paa"};
};
 */

class rhs_weap_svdp_wd : rhs_weap_svdp
{
	baseWeapon="rhs_weap_svdp_wd";
	Author_Macro
	displayname = "$STR_RHS_WEAP_SVDM_CAMO";
	model = "\rhsafrf\addons\rhs_weapons\SVD\svd_polymer_wd";
	rhs_npz="rhs_weap_svdp_wd_npz";
};

class rhs_weap_svdp_wd_npz : rhs_weap_svdp_wd
{
	baseWeapon="rhs_weap_svdp_wd_npz";
	Author_Macro
	displayName = $STR_RHS_WEAP_SVDM_CAMO_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\SVD\svd_polymer_wd_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_tgpv"};
		};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot {};
	//	class PointerSlot: rhs_russian_rifle_laser_slot{};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_svdp_wd";
	weaponInfoType = "rhs_rscOptics_svdp_wd_npz";
};

class rhs_weap_svds : rhs_weap_svdp
{
	baseWeapon="rhs_weap_svds";
	Author_Macro
	displayname = "$STR_RHS_WEAP_SVDS";
	model = "\rhsafrf\addons\rhs_weapons\SVD\svds";
	rhs_npz="rhs_weap_svds_npz";
};

class rhs_weap_svds_npz : rhs_weap_svds
{
	baseWeapon="rhs_weap_svds_npz";
	Author_Macro
	displayName = $STR_RHS_WEAP_SVDS_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\SVD\svds_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_tgpv"};
		};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot {};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_svds";
	weaponInfoType = "rhs_rscOptics_svds_npz";
};

/*
class rhs_weap_svds_d : rhs_weap_svds
{
	Author_Macro
	displayname = "$STR_RHS_WEAP_SVDS_DES";
	model = "\rhsafrf\addons\rhs_weapons\SVD\svds";

	hiddenSelections[] = {"Camo1", "Camo2"}; //turned for now - selections need to be tweaked on model
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\svd\data\svdp_d_co.paa", "rhsafrf\addons\rhs_weapons\svd\data\svds_d_co.paa"};
};

class rhs_weap_svds_wd : rhs_weap_svds
{
	Author_Macro
	displayname = "$STR_RHS_WEAP_SVDS_CAMO";
	model = "\rhsafrf\addons\rhs_weapons\SVD\svds";

	hiddenSelections[] = {"Camo1", "Camo2"}; //turned for now - selections need to be tweaked on model
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\svd\data\svdp_wd_co.paa", "rhsafrf\addons\rhs_weapons\svd\data\svds_wd_co.paa"};
};
 */


