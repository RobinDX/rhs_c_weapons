class ItemCore;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;

class acc_pointer_IR;
class acc_flashlight;

///! Lasers

class rhs_bipod : acc_pointer_IR
{
	dlc = "RHS_AFRF";

	Author_Macro
	scope=2;

	model = "\A3\Weapons_f\empty";
	picture = "\rhsafrf\addons\rhs_weapons\gear_acc\acc_bipod.paa";
	//picture = "\A3\Weapons_F\Data\clear_empty.paa"; - turned off for now

	displayName = Bipod;
	descriptionUse = "Unmount this item to fold bipod";
	descriptionShort = "Fold bipod by unmounting this item from weapon.";

	class ItemInfo: InventoryFlashLightItem_Base_F
	{
		mass = 0;
		class Pointer {};
		class FlashLight {};
	};
	inertia = 0.2; //unfolded bipod increase inertia
};


class muzzle_snds_H;

///! Muzzle accessories
class rhs_silencer_base : muzzle_snds_H
{
	dlc = "RHS_AFRF";

	scope = 0;
	displayName="$STR_RHS_ACC_TGPA";

	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_tgpa_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\silencers\tgpa\tgpa.p3d";

	class ItemInfo: InventoryMuzzleItem_Base_F
	{
		mass=7;
		class MagazineCoef
		{
			initSpeed = 1.05;
		};

		class AmmoCoef
		{
			hit=0.8;
			visibleFire=0.2;
			audibleFire=0.4;
			visibleFireTime=0.5;
			audibleFireTime=1.0;
			cost = 1.0;
			typicalSpeed= 0.8;
			airFriction = 1.0;
		};
		class MuzzleCoef
		{
			dispersionCoef="0.8f";
			artilleryDispersionCoef="1.0f";
			fireLightCoef="0.1f";
			recoilCoef="1.0f";
			recoilProneCoef="1.0f";
			minRangeCoef="1.0f";
			minRangeProbabCoef="1.0f";
			midRangeCoef="1.0f";
			midRangeProbabCoef="1.0f";
			maxRangeCoef="1.0f";
			maxRangeProbabCoef="1.0f";
		};

		muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
		alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash

		soundTypeIndex = 1;
		inertia=0.2;
	};
};

class rhs_acc_tgpa : rhs_silencer_base
{
	Author_Macro
	scope = 2;
};

class rhs_acc_pbs1 : rhs_silencer_base
{
	Author_Macro
	scope = 2;
	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_pbs1_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\silencers\pbs1\pbs1.p3d";
	displayName="$STR_RHS_ACC_PBS1";

	inertia = 0.1; 
};

class rhs_acc_tgpv : rhs_silencer_base
{
	Author_Macro
	scope = 2;
	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_tgpv_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\silencers\tgpv\tgpv.p3d";
	displayName="$STR_RHS_ACC_TGPV";
};

class rhs_acc_dtk4short : rhs_silencer_base
{
	Author_Macro
	scope = 2;
	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_dtk4_short.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\silencers\dtk4\dtk4_short.p3d";
	displayName="$STR_RHS_ACC_DTK4SHORT";

	inertia = 0.1; 
};

class rhs_acc_dtk4long : rhs_silencer_base
{
	Author_Macro
	scope = 2;
	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_dtk4_long.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\silencers\dtk4\dtk4_long.p3d";
	displayName="$STR_RHS_ACC_DTK4LONG";

	inertia = 0.2; 
};

class rhs_acc_dtk4screws : rhs_silencer_base
{
	Author_Macro
	scope = 2;
	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_dtk4screws.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\silencers\dtk4_screws\dtk4_screws.p3d";
	displayName="$STR_RHS_ACC_DTK4SCREWS";

	inertia = 0.1; 
};

///! Different Attachments

class rhs_acc_muzzleFlash_dtk: ItemCore
{
	scope = 2;
	//path to custom flash, it's same muzzle flash p3d as used on zasleh proxy in ak74
	model = "a3\data_f\proxies\muzzle_flash\muzzle_flash_rifle_trg20.p3d";

	inertia = 0; 
};

class rhs_acc_dtk3 : rhs_silencer_base
{
	Author_Macro
	scope = 2;
	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_dtk3_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\muzzle\dtk3\dtk3.p3d";
	displayName="$STR_RHS_ACC_DTK3";
	class ItemInfo: ItemInfo
	{
		mass=5;
		soundTypeIndex=0;
		class MagazineCoef
		{
			initSpeed=1;
		};
		class AmmoCoef
		{
			hit=1;
			typicalSpeed=1;
			airFriction=1;
			visibleFire=0.5;
			audibleFire=1.0;
			visibleFireTime=0.5;
			audibleFireTime=0.5;
			cost=1;
		};
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.96f";
			fireLightCoef="0.9f";
			recoilCoef="0.79f";
			recoilProneCoef="0.79f";
		};
		alternativeFire = "rhs_acc_muzzleFlash_dtk";
	};
	inertia = 0; 
};

class rhs_acc_dtk1 : rhs_acc_dtk3
{
	Author_Macro
	scope = 2;
	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_dtk1_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\muzzle\dtk1\dtk1.p3d";
	displayName="$STR_RHS_ACC_DTK1";
	class ItemInfo: ItemInfo
	{
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.97f";
			fireLightCoef="0.9f";
			recoilCoef="0.83f";
			recoilProneCoef="0.83f";
		};
	};
};


class rhs_acc_dtk : rhs_acc_dtk3
{
	Author_Macro
	scope = 2;
	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_dtk_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\muzzle\dtk1\dtk.p3d";
	displayName="$STR_RHS_ACC_DTK";
	class ItemInfo: ItemInfo
	{
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.97f";
			fireLightCoef="0.9f";
			recoilCoef="0.93f";
			recoilProneCoef="0.93f";
		};
	};
};

class rhs_acc_pgs64 : rhs_acc_dtk
{
	Author_Macro
	scope = 2;
	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_pgs64_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\muzzle\pgs64\pgs64.p3d";
	displayName="$STR_RHS_ACC_PGS64";
	class ItemInfo: ItemInfo
	{
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.97f";
			fireLightCoef="0.9f";
			recoilCoef="0.93f";
			recoilProneCoef="0.93f";
		};
	};
};

class rhs_acc_dtk1l : rhs_acc_dtk1
{
	Author_Macro
	scope = 2;
	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_dtk1_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\muzzle\dtk1\dtk1.p3d";
	displayName="$STR_RHS_ACC_DTK1L";
	class ItemInfo: ItemInfo
	{
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.97f";
			fireLightCoef="0.9f";
			recoilCoef="0.53f";
			recoilProneCoef="0.83f";
		};
	};
};


class rhs_acc_ak5 : rhs_acc_dtk3
{
	Author_Macro
	scope = 2;
	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_ak5.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\muzzle\ak5\ak5.p3d";
	displayName="$STR_RHS_ACC_AK5";
	class ItemInfo: ItemInfo
	{
                alternativeFire = "Zasleh2";
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.97f";
			fireLightCoef="0.9f";
			recoilCoef="0.83f";
			recoilProneCoef="0.83f";
		};
	};
	
};

///! Scopes
class rhs_acc_sniper_base: ItemCore
{
	dlc = "RHS_AFRF";

	scope = 0;

	displayName = $STR_RHS_ACC_PSO1M2;

	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_pso1_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\pso1\rhs_pso1";

	descriptionShort = $STR_RHS_ACC_PSO1M2_SD;
	weaponInfoType = "RscWeaponZeroing";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 13.64;
		RMBhint = "Optical Sniper Sight";
		optics = 1;

		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pso_scope";
		class OpticsModes
		{
			///! 4X MAGNIFICATION -> 0.2492/4
			class pso1_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[] = {100,200,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
 				discreteDistanceInitIndex = 2;
				opticsZoomMin = 0.35/4;
				opticsZoomMax = 0.35/4;
				opticsZoomInit = 0.35/4;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1000;
				cameraDir = "";
			};
			class rhs_1p29_iron
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 0;
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				cameraDir = "";
			};
		};
	};

	inertia = 0.2; 
};

class rhs_acc_1p29 : rhs_acc_sniper_base
{
	scope=2;
	Author_Macro
	displayName = $STR_RHS_ACC_1P29;

	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_1p29_ca.paa";

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\1p29\rhs_1p29";

	descriptionShort = $STR_RHS_ACC_1P29_SD;
	weaponInfoType = "rhs_rscOptics_acc_1p29";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 17.6;
		RMBhint = "Optical Sight";
		optics = 1;

		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_1p29_scope";
		class OpticsModes
		{
			///! 4X MAGNIFICATION -> 0.2492/4
			class rhs_1p29_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[] = {400,500,600,700,800,900,1000};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.35/4;
				opticsZoomMax = 0.35/4;
				opticsZoomInit = 0.35/4;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1000;
				cameraDir = "";
			};

			class rhs_1p29_iron
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.275;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				discreteDistance[] = {440,100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 0;
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				cameraDir = "";
			};
		};
	};

	inertia = 0.1; 
};

class rhs_acc_1p78 : rhs_acc_1p29
{
	scope=2;
	Author_Macro
	displayName = $STR_RHS_ACC_1P78;

	picture="\rhsafrf\addons\rhs_weapons2\icons\rhs_1p78_inventory_ca.paa";

	model = "\rhsafrf\addons\rhs_weapons2\acc\scopes\1p78\rhs_1p78";

	descriptionShort = $STR_RHS_ACC_1P78_SD;
	weaponInfoType = "rhs_rscOptics_acc_1p78";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 17.6;
		RMBhint = "Optical Sight";
		optics = 1;

		modelOptics = "\rhsafrf\addons\rhs_weapons2\optics\rhs_1p78_scope";
		class OpticsModes
		{
			///! 2.8X MAGNIFICATION -> 0.2492/2.8
			class rhs_1p29_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[] = {400};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.35/2.8;
				opticsZoomMax = 0.35/2.8;
				opticsZoomInit = 0.35/2.8;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1000;
				cameraDir = "";
			};
		};
	};
};

class rhs_acc_pkas : rhs_acc_sniper_base
{
	scope=2;
	Author_Macro
	displayName = $STR_RHS_ACC_PKAS;

	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_pkas_ca.paa";

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\pkas\rhs_pkas";

	descriptionShort = $STR_RHS_ACC_PKAS_SD;

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 8.8;
		RMBhint = "Optical Sight";
		optics = 1;

		modelOptics="\A3\Weapons_F\empty";
		class OpticsModes
		{
			class ACO
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="opticview";
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
				visionMode[]={};
				opticsPPEffects[]=
				{
					"OpticsBlur1"
				};
			};
			class rhs_1p29_iron
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				discreteDistance[] = {440,100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 0;
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				cameraDir = "";
			};
		};
	};

	inertia = 0.1; 
};

class rhs_acc_1p63 : rhs_acc_pkas
{
	scope=2;
	Author_Macro
	displayName = $STR_RHS_ACC_1P63;

	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_1p63_ca.paa";

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\1p63\rhs_1p63";

	descriptionShort = $STR_RHS_ACC_1P63_SD;

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 8.8;
		RMBhint = "Optical Sight";
		optics = 1;

		modelOptics="\A3\Weapons_F\empty";
		class OpticsModes
		{
			class ACO
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="opticview";
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
				visionMode[]={};
				opticsPPEffects[]=
				{
					"OpticsBlur1"
				};
			};
		};
	};
};

class rhs_acc_ekp1 : rhs_acc_1p63
{
	scope=2;
	Author_Macro
	displayName = $STR_RHS_ACC_EKP1;
	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_ekp1_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\ekp1\rhs_ekp1";
	descriptionShort = $STR_RHS_ACC_EKP1_SD;
	weaponInfoType = "RHS_RscOptics_Kobra";

	inertia = 0; 
};
class rhs_acc_ekp1b : rhs_acc_ekp1
{
	scope=1;
	scopeArsenal=0;
	Author_Macro
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\ekp1\rhs_ekp1b";
};
class rhs_acc_ekp1c : rhs_acc_ekp1b
{
	Author_Macro
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\ekp1\rhs_ekp1c";
};
class rhs_acc_ekp1d : rhs_acc_ekp1b
{
	Author_Macro
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\ekp1\rhs_ekp1d";
};

class rhs_acc_pso1m2 : rhs_acc_sniper_base
{
	Author_Macro
	weaponInfoType = "rhs_rscOptics_acc_pso1";
	scope=2;

	inertia = 0.2; 
};
class rhs_acc_pso1m21 : rhs_acc_sniper_base
{
	Author_Macro
	scope=2;

	displayName = $STR_RHS_ACC_PSO1M21;

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\pso1\rhs_pso1";

	weaponInfoType = "rhs_rscOptics_acc_pso11";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pso1m21_scope";
		class OpticsModes: OpticsModes
		{
			///! 4X MAGNIFICATION -> 0.2492/4
			class pso1_scope: pso1_scope
			{
				discreteDistance[] = {100,150,200,250,300,350,400};
 				discreteDistanceInitIndex = 2;
				distanceZoomMin = 100;
				distanceZoomMax = 400;
			};
			class rhs_1p29_iron: rhs_1p29_iron
			{
				discreteDistance[] = { 100, 150, 200, 250, 300, 350, 400 };
				distanceZoomMin = 100;
				distanceZoomMax = 400;
			};
		};
	};

	inertia = 0.2; 
};
class rhs_acc_npz : rhs_acc_ekp1
{
	scope=1;
	scopeArsenal=0;
	Author_Macro
	weaponInfoType = "rhs_rscOptics_acc_npz";
	displayName = NPZ Rail;
	//displayName = $STR_RHS_ACC_NPZ;
	//descriptionShort = $STR_RHS_ACC_NPZ_SD;
	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_npz_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\npz\rhs_npz";

	inertia = 0; 
};

class rhs_acc_pgo7v : rhs_acc_sniper_base
{
	scope=2;
	Author_Macro
	displayName = $STR_RHS_ACC_PGO7V;

	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_pgo7v_ca.paa";

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\pgo7v\rhs_pgo7v";

	descriptionShort = $STR_RHS_ACC_PGO7V_SD;
	weaponInfoType = "rhs_rscOptics_acc_pgo7";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 13.64;
		RMBhint = "Optical Sight";
		optics = 1;


		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pgo7v_scope";
		class OpticsModes
		{
			///! 2.7X MAGNIFICATION -> 0.2492/2.7
			class rhs_pgo7v_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[] = {500};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.35/2.7;
				opticsZoomMax = 0.35/2.7;
				opticsZoomInit = 0.35/2.7;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1000;
				cameraDir = "direction";
			};
		};
	};

	inertia = 0.1; 
};

class rhs_acc_1pn93_base : rhs_acc_sniper_base
{
	scope=0;

	displayName = $STR_RHS_ACC_1PN931;

	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_1pn93_ca.paa";

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\1pn93\rhs_1pn93_1";

	descriptionShort = $STR_RHS_ACC_1PN931_SD;

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 14;
		RMBhint = "Optical Sniper Night Sight";
		optics = 1;

		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_1pn93_sniper_scope";
		class OpticsModes
		{
			class 1pn93_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","TankCommanderOptics1"};
				discreteDistance[] = {100};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.35/4;
				opticsZoomMax = 0.35/4;
				opticsZoomInit = 0.35/4;
				memoryPointCamera = "opticView";
				visionMode[] = {"NVG"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1000;
				cameraDir = "";
			};
			class rhs_1p29_iron
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				discreteDistance[] = { 100 };
				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {"Normal"};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				cameraDir = "";
			};
		};
	};

	inertia = 0.2; 
};

class rhs_acc_1pn93_1 : rhs_acc_1pn93_base
{
	Author_Macro
	scope = 2;
};

class rhs_acc_1pn93_2 : rhs_acc_pgo7v
{
	Author_Macro
	scope = 2;

	displayName = $STR_RHS_ACC_1PN932;

	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_1pn93_ca.paa";

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\1pn93\rhs_1pn93_2";

	descriptionShort = $STR_RHS_ACC_1PN932_SD;

	weaponInfoType = "RscWeaponZeroing";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 13.64;
		RMBhint = "Optical Sight";
		optics = 1;


		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_1pn932_sniper_scope";

		class OpticsModes
		{
			///! 2.7X MAGNIFICATION -> 0.2492/2.7
			class rhs_pgo7v_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[] = {500};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.35/2.7;
				opticsZoomMax = 0.35/2.7;
				opticsZoomInit = 0.35/2.7;
				memoryPointCamera = "opticView";
				visionMode[] = {"NVG"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1000;
				cameraDir = "direction";
			};
		};
	};

	inertia = 0.2; 
};

class rhs_acc_2dpZenit : acc_flashlight
{
	dlc = "RHS_AFRF";
	
	Author_Macro
	scope = 2;
	
	displayName = $STR_RHS_ACC_2DPZENIT;
	descriptionShort = $STR_RHS_ACC_2DPZENIT_SD;
	
	picture="\rhsafrf\addons\rhs_weapons2\icons\rhs_2dpZenit_inventory_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons2\acc\flashlights\2dpZenit\rhs_2dpZenit.p3d";
	
	class ItemInfo : InventoryFlashLightItem_Base_F
	{
		mass = 2;
		class Pointer {};
		class FlashLight
		{
			color[]={25,22,20};
			ambient[]={0.001,0.001,0.001};
			size=1;
			innerAngle=50;
			outerAngle=120;
			coneFadeCoef=10;
			intensity=330;
			useFlare=1;
			dayLight=1;
			FlareSize=0.7;
			onlyInNvg=0;
			position = "flashdir"; 
			direction = "flash"; 
			class Attenuation
			{
				start=0;
				constant=2;
				linear=1;
				quadratic=75;
			};
			scale[]={0};
		};		
	};
	
	inertia = 0.1;		
};
