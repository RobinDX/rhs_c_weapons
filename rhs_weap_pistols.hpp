class hgun_Rook40_F;

class rhs_weap_pya : hgun_Rook40_F
{
	dlc = "RHS_AFRF";

	Author_Macro
	scope = 2;
	model = "\rhsafrf\addons\rhs_weapons\rhs_Pya";
	modelOptics = "-";
	picture = "\rhsafrf\addons\rhs_weapons\icons\Pya_ca.paa";
	minRange = 0;
	minRangeProbab = 0.1;
	midRange = 30;
	midRangeProbab = 0.3;
	maxRange = 50;
	maxRangeProbab = 0.04;
	optics = 1;
	distanceZoomMin = 50;
	distanceZoomMax = 50;
	displayName = "$STR_RHS_WEAP_PYA";
	begin1[] = {"rhsafrf\addons\rhs_weapons\sounds\pya_2",0.7943282,1,700};
	soundBegin[] = {"begin1",1};


	class WeaponSlotsInfo
	{
		mass=10;
           	//holsterOffset = "holster";     
           	holsterScale = 1;   
	};

	magazines[] = {"rhs_mag_9x19_17"};
	dispersion = 0.02;
	ffCount = 1;
	aiRateOfFire = 0.5;
	aiRateOfFireDistance = 50;
	class Library
	{
		libTextDesc = "$STR_RHS_WEAP_PYA";
	};
	descriptionShort = "Pistol<br/>Caliber: 9x19mm";
};
class Pistol_Base_F;
class rhs_weap_rsp30_white: Pistol_Base_F
{
	dlc = "RHS_AFRF";

	Author_Macro
	scope = 2;

	magazines[] = {"rhs_mag_rsp30_white"};

	weaponInfoType = "rhs_rscOptics_rsp30";

	displayname="RSP-30 Flare White";
	displaynameShort="RSP-30";
	descriptionShort = "Flare launcher<br/>Caliber: 30mm<br/>Type: Single-shot";

	model = "\rhsafrf\addons\rhs_weapons\rsp30\rhs_rsp30";
	picture = "\rhsafrf\addons\rhs_weapons\icons\rsp30_white.paa";

	handAnim[]= {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rsp30.rtm"};

	hiddenSelections[]= {"camo1"};
	hiddenSelectionsTextures[]=
	{
		"rhsafrf\addons\rhs_weapons\rsp30\rhs_rsp30_white_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"rhsafrf\addons\rhs_weapons\rsp30\rhs_rsp30_white.rvmat"
	};

	optics=0;

	sounds[] = {"StandardSound"};
	class BaseSoundModeType
	{
		weaponSoundEffect = "DefaultRifle";
		closure1[] = {"",1.03514,1,10};
		closure2[] = {"",1.03514,1.1,10};
		soundClosure[] = {"closure1",0.5,"closure2",0.5};
	};
	class StandardSound: BaseSoundModeType
	{
		begin1[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_1",1,1,700};
		begin2[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_2",1,1,700};
		begin3[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_3",1,1,700};
		soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
	};

	recoil="recoil_pistol_heavy";
	recoilProne="recoil_prone_pistol_heavy";
	class GunParticles
	{
		class Effect1
		{
			effectName = "StarterPistolCloud1";
			positionName = "usti hlavne";
			directionName = "konec hlavne";
		};
		class Effect2
		{
			effectName = "StarterPistolCloud2";
			positionName = "konec hlavne";
			directionName = "usti hlavne";
		};
	};
	muzzleEffect="BIS_fnc_effectFiredFlares";

	class WeaponSlotsInfo
	{
		mass=10;
           	holsterScale = 0;   
	};
};
class rhs_weap_rsp30_white_used: rhs_weap_rsp30_white
{
	scope=1;
	magazines[] = {};
};

class rhs_weap_rsp30_red: rhs_weap_rsp30_white
{
	Author_Macro
	displayname="RSP-30 Flare Red";
	descriptionShort="RSP-30 Red flare";
	magazines[] = {"rhs_mag_rsp30_red"};
	picture = "\rhsafrf\addons\rhs_weapons\icons\rsp30_red.paa";
	hiddenSelectionsTextures[]=
	{
		"rhsafrf\addons\rhs_weapons\rsp30\rhs_rsp30_red_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"rhsafrf\addons\rhs_weapons\rsp30\rhs_rsp30_red.rvmat"
	};

};
class rhs_weap_rsp30_red_used: rhs_weap_rsp30_red
{
	scope=1;
	magazines[] = {};
};

class rhs_weap_rsp30_green: rhs_weap_rsp30_white
{
	Author_Macro
	displayname="RSP-30 Flare Green";
	descriptionShort="RSP-30 Green flare";
	magazines[] = {"rhs_mag_rsp30_green"};
	picture = "\rhsafrf\addons\rhs_weapons\icons\rsp30_green.paa";
	hiddenSelectionsTextures[]=
	{
		"rhsafrf\addons\rhs_weapons\rsp30\rhs_rsp30_green_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"rhsafrf\addons\rhs_weapons\rsp30\rhs_rsp30_green.rvmat"
	};

};
class rhs_weap_rsp30_green_used: rhs_weap_rsp30_green
{
	scope=1;
	magazines[] = {};
};


class rhs_weap_makarov_pmm : rhs_weap_pya
{
	Author_Macro
	scope = 2;
	displayName = "$STR_RHS_WEAP_PMM";
	descriptionShort = "Pistol<br/>Caliber: 9x18mm";
	model = "\rhsafrf\addons\rhs_weapons\pistols\pmm\rhs_makarov_pmm";
	modelOptics = "-";
	picture = "\rhsafrf\addons\rhs_weapons\icons\makarovpmm_ca.paa";
	minRange = 0;
	minRangeProbab = 0.1;
	midRange = 30;
	midRangeProbab = 0.3;
	maxRange = 50;
	maxRangeProbab = 0.04;
	optics = 1;
	distanceZoomMin = 50;
	distanceZoomMax = 50;
	begin1[] = {"rhsafrf\addons\rhs_weapons\sounds\pya_2",0.7943282,1,700};
	soundBegin[] = {"begin1",1};


	class WeaponSlotsInfo
	{
		mass=8;
		class CowsSlot{};
		class MuzzleSlot{};
		class PointerSlot {};
           	//holsterOffset = "holster";     
           	holsterScale = 1;   
	};

	magazines[] = {"rhs_mag_9x18_12_57N181S"};
	dispersion = 0.02;
	ffCount = 1;
	aiRateOfFire = 0.5;
	aiRateOfFireDistance = 50;
	/*class Library
	{
		libTextDesc = "$STR_RHS_WEAP_PYA";
	};
	descriptionShort = "$STR_RHS_WEAP_PYA";
	*/
};


class rhs_weap_tr8: Pistol_Base_F
{
	dlc = "RHS_AFRF";

	magazines[] =	{};

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};

	optics = 1;
	scope = 2;

	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {0};
	discreteDistanceInitIndex = 0;

	displayName = $STR_RHS_MSIC_TR8;
	descriptionShort = $STR_A3_cfgWeapons_Default_Binocular1;

	model = "\rhsafrf\addons\rhs_weapons2\misc\tr8\rhs_tr8_periscope _weap.p3d";
	modelOptics = "\rhsafrf\addons\rhs_weapons2\misc\tr8\rhs_tr8_reticle.p3d";
	picture = "\rhsafrf\addons\rhs_weapons2\icons\rhs_tr8_inventory_ca.paa";

	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

	class OpticsModes
	{
		class periscope
		{
			opticsID=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera1",
				"OpticsBlur1"
			};
			modelOptics = "\rhsafrf\addons\rhs_weapons2\misc\tr8\rhs_tr8_reticle.p3d";
			useModelOptics=1;
			opticsFlare=0;
			opticsDisablePeripherialVision=0;
			opticsZoomMin = 0.25/8;
    		opticsZoomMax = 0.25/8;
			opticsZoomInit = 0.25/8;
			visionMode="";
			discreteDistanceInitIndex=0;
			discreteDistance[]={100};
			memoryPointCamera = "eye";
			cameraDir="eye_dir";
			distanceZoomMin=300;
			distanceZoomMax=300;
		};
	};
	class WeaponSlotsInfo
	{
		//weight: 0.88 - http://www.redoptic.ru/tr8_2.html
		//(x*0.1)/2.2=0.88
		mass=19.36;
           	holsterScale = 0;  
	};

	sounds[] = {"StandardSound"};
	class BaseSoundModeType
	{
		weaponSoundEffect = "DefaultRifle";
		closure1[] = {"",1.03514,1,10};
		closure2[] = {"",1.03514,1.1,10};
		soundClosure[] = {"closure1",0.5,"closure2",0.5};
	};
	class StandardSound: BaseSoundModeType {};


	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\tr8_holdinganim.rtm"};
	//handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	dexterity = 1.8;

};