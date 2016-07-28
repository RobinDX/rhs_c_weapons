class ItemCore;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class optic_LRPS;
class optic_Holosight;
class optic_Hamr;
class acc_pointer_IR;
class muzzle_snds_H;

#define ArsenalDisabled scope=1;scopeArsenal=0;

//- Bipods
class rhsusf_acc_harris_bipod : acc_pointer_IR
{
	dlc = "RHS_USAF";

	Author_Macro
	scope=2;
	model = "\rhsusf\addons\rhsusf_weapons\acc\bipods\harris\harris";
	picture = "\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_harrisBipod_icon_ca.paa";

	displayName = "Harris Bipod";
	descriptionShort = "Standard US-Army Harris Bipod.";

	class ItemInfo
	{
		scope = 0;
		deployedPivot = "bipod";
		hasBipod = 1;
		mass = 10;
		type = 302;
	};
	inertia = 0.2;
	type = 131072;
};

//- Vertical Grips
class rhsusf_acc_grip1 : rhsusf_acc_harris_bipod
{
	Author_Macro
	scope=2;
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\grip1";
	picture = "\rhsusf\addons\rhsusf_weapons\icons\a_grip1.paa";

	displayName = "Grip Pod";
	descriptionShort = "A Grip Pod is a weapon stabilization system that serves as a weapon grip and as a retractable bipod.";

	weaponInfoType = "RHS_Gripod1";

	class ItemInfo
	{
		deployedPivot = "bipod";
		hasBipod = 1;
		mass = 10;
		type = 302;
	};
	inertia = -0.2;
	type = 131072;
};

class rhsusf_acc_grip2 : rhsusf_acc_grip1
{
	displayName = "AFG Grip";
	descriptionShort = "The AFG (Angled Fore Grip) takes into account natural body mechanics and provides a comfortable and stable user interface that reduces fatigue and allows for more precise weapon control.";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\grip2";
	picture = "\rhsusf\addons\rhsusf_weapons\icons\a_grip2.paa";
	weaponInfoType = "RHS_Gripod2";
	class ItemInfo: ItemInfo
	{
		hasBipod = 0;
	};
	inertia = -0.2;
};

class rhsusf_acc_grip2_tan : rhsusf_acc_grip2
{
	Author_Macro
	displayName = "AFG Grip (Tan)";
	weaponInfoType = "RHS_Gripod2_tan";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\grip2_d";
};

class rhsusf_acc_grip3 : rhsusf_acc_grip2
{
	displayName = "TD Vertical Grip";
	descriptionShort = "Vertical Grips aid in the maneuverability of the firearm, since the natural angle of a person's outstretched hand is more oriented to grasping objects at a vertical angle, rather than a horizontal one perpendicular to the body";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\grip3";
	picture = "\rhsusf\addons\rhsusf_weapons\icons\a_grip3.paa";
	weaponInfoType = "RHS_Gripod3";
	inertia = -0.2;
};

class rhsusf_acc_grip3_tan : rhsusf_acc_grip3
{
	Author_Macro
	displayName = "TD Vertical Grip (Tan)";
	weaponInfoType = "RHS_Gripod3_tan";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\grip3_tan";
};

class rhs_acc_at4_handler : acc_pointer_IR
{
	dlc = "RHS_USAF";

	Author_Macro
	scope=2;

	model = "\A3\Weapons_f\empty";
	//picture = "";
	picture = "\A3\Weapons_F\Data\clear_empty.paa"; //- turned off for now

	displayName = AT-4 Peep hole handler;
	descriptionUse = "Use optics mode key (/ on numpad) to change mode";
	descriptionShort = "Use optics mode key (/ on numpad) to change mode";

	class ItemInfo: InventoryFlashLightItem_Base_F
	{
		mass = 0;
		class Pointer {};
		class FlashLight {};
	};
	inertia = 0;
};

//- Lasers

class rhsusf_acc_anpeq15A : acc_pointer_IR
{
	dlc = "RHS_USAF";

	Author_Macro
	displayName = $STR_RHSUSF_ACC_PEQ15A;
	scope=2;

	inertia = 0.1;
};

class rhsusf_acc_anpeq15 : acc_pointer_IR
{
	dlc = "RHS_USAF";

	Author_Macro
	displayName = $STR_RHSUSF_ACC_PEQ15SURE_Laser;
	scope=2;
	weaponInfoType = "RHS_Flashlight";
	descriptionShort = "IR Laser. Press CTRL+C (next CM key) to change IR/Light mode";
	descriptionUse = "<t color='#9cf953'>Use: </t>press L Turn ON/OFF, CTRL+C (next CM key) to change IR/Light mode";
	rhs_acc_combo = "rhsusf_acc_anpeq15_light";
	rhs_acc_combo_text = "Switched to Flashlight";
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top";

	class ItemInfo: InventoryFlashLightItem_Base_F
	{
		RMBhint="IR Laser";
		mass = 8;

		class Pointer
		{
			irLaserPos = "laser pos";
			irLaserEnd = "laser dir";
			irDistance = 5;
		};

		class FlashLight{};
	};

	inertia = 0.2;
	rhs_anpeq15_base = "rhsusf_acc_anpeq15";
};
class rhsusf_acc_anpeq15_bk : rhsusf_acc_anpeq15
{
	Author_Macro
	displayName = $STR_RHSUSF_ACC_PEQ15SURE_BK_Laser;
	weaponInfoType = "RHS_Flashlight2";
	rhs_acc_combo = "rhsusf_acc_anpeq15_bk_light";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top";
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_bk";
};
class rhsusf_acc_anpeq15_h : rhsusf_acc_anpeq15
{
	Author_Macro
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_bk_light_h";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top_h";
};
class rhsusf_acc_anpeq15_bk_h : rhsusf_acc_anpeq15_bk
{
	Author_Macro
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_bk_light_h";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top_h";
};

class rhsusf_acc_anpeq15_light : rhsusf_acc_anpeq15
{
	dlc = "RHS_USAF";

	Author_Macro
	displayName = $STR_RHSUSF_ACC_PEQ15SURE_Light;

	descriptionShort = "Weapon mounted light. Press CTRL+C (next CM key) to change IR/Light mode";
	rhs_acc_combo = "rhsusf_acc_anpeq15";
	rhs_acc_combo_text = "Switched to Laser";

	class ItemInfo: ItemInfo
	{
		RMBhint="Flashlight";
		mass = 8;

		class Pointer {};

		class FlashLight
		{
			color[] = {25,22,20};
			ambient[]={0.001,0.001,0.001};
			position = "flash dir";
			direction = "flash";
			size = 1;
			innerAngle = 50;
			outerAngle = 120;
			coneFadeCoef = 10;
			intensity = 330;
			useFlare = 1;
			dayLight = 1;
			FlareSize = 0.7;
			onlyInNvg = 0;

			class Attenuation
			{
				start = 0;
				constant = 2;
				linear = 1;
				quadratic = 75;
			};

			scale[] = {0};
		};
	};
	inertia = 0.2;
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_light";
};
class rhsusf_acc_anpeq15_bk_light : rhsusf_acc_anpeq15_light
{
	Author_Macro
	displayName = $STR_RHSUSF_ACC_PEQ15SURE_BK_Light;
	rhs_acc_combo = "rhsusf_acc_anpeq15_bk";
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_bk_light";
	weaponInfoType = "RHS_Flashlight2";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top";
};
class rhsusf_acc_anpeq15_light_h : rhsusf_acc_anpeq15_light
{
	Author_Macro
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_bk_h";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top_h";
};
class rhsusf_acc_anpeq15_bk_light_h : rhsusf_acc_anpeq15_bk_light
{
	Author_Macro
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_bk_h";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top_h";
};

class rhsusf_acc_anpeq15_wmx : rhsusf_acc_anpeq15
{
	Author_Macro
	displayName = "AN/PEQ-15 + WMX (laser)";
	weaponInfoType = "RHS_Flashlight3";
	rhs_acc_combo = "rhsusf_acc_anpeq15_wmx_light";
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_wmx";

	picture = "\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
	model = "\rhsusf\addons\rhsusf_weapons\acc\flashlight\WMX\WMX_A3_side";
};

class rhsusf_acc_anpeq15_wmx_light : rhsusf_acc_anpeq15_light
{
	Author_Macro
	displayName = "AN/PEQ-15 + WMX (flashlight)";
	weaponInfoType = "RHS_Flashlight3";
	rhs_acc_combo = "rhsusf_acc_anpeq15_wmx";
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_wmx_light";

	picture = "\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
	model = "\rhsusf\addons\rhsusf_weapons\acc\flashlight\WMX\WMX_A3_side";
};
class rhsusf_acc_anpeq15_wmx_h : rhsusf_acc_anpeq15_wmx
{
	Author_Macro
	ArsenalDisabled
	model = "\rhsusf\addons\rhsusf_weapons\acc\flashlight\WMX\WMX_A3_side_h";
};
class rhsusf_acc_anpeq15_wmx_light_h : rhsusf_acc_anpeq15_wmx_light
{
	Author_Macro
	ArsenalDisabled
	model = "\rhsusf\addons\rhsusf_weapons\acc\flashlight\WMX\WMX_A3_side_h";
};

class rhsusf_acc_anpeq15_top : rhsusf_acc_anpeq15A
{
	Author_Macro
	displayName = $STR_RHSUSF_ACC_PEQ15_Top;
	descriptionShort = "IR Laser";
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top_single";
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_top";
	weaponInfoType = "RHS_LaserTop1";
};
class rhsusf_acc_anpeq15_bk_top : rhsusf_acc_anpeq15_top
{
	Author_Macro
	displayName = $STR_RHSUSF_ACC_PEQ15_BK_Top;
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top_single";
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_bk_top";
	weaponInfoType = "RHS_LaserTop2";
};
class rhsusf_acc_anpeq15_top_h : rhsusf_acc_anpeq15_top
{
	Author_Macro
	ArsenalDisabled
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top_single_h";
};
class rhsusf_acc_anpeq15_bk_top_h : rhsusf_acc_anpeq15_bk_top
{
	Author_Macro
	ArsenalDisabled
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top_single_h";
};

class rhsusf_acc_anpeq15side : acc_pointer_IR
{
	dlc = "RHS_USAF";

	Author_Macro
	displayName = $STR_RHSUSF_ACC_PEQ15;
	scope=2;
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_side";
	class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 8;
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				irDistance = 5;
			};
			class FlashLight{};
		};
	inertia = 0.1;
};
class rhsusf_acc_anpeq15side_bk : rhsusf_acc_anpeq15side
{
	Author_Macro
	displayName = $STR_RHSUSF_ACC_PEQ15_BK;

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_side";
};

//- Flashlights

class rhsusf_acc_M952V : rhsusf_acc_anpeq15_light
{
	dlc = "RHS_USAF";

	Author_Macro
	displayName = $STR_RHSUSF_ACC_M952V;
	weaponInfoType = "RHS_Empty";
	descriptionShort = "Weapon mounted light";
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\sfm952";

	inertia = 0.1;
};

class rhsusf_acc_wmx : rhsusf_acc_M952V
{
	dlc = "RHS_USAF";

	Author_Macro
	displayName = "WMX Flashlight";
	model = "\rhsusf\addons\rhsusf_weapons\acc\flashlight\WMX\WMX_A3_side_single";
};

//- Muzzle accessories

class rhsusf_silencer_base : muzzle_snds_H
{
	dlc = "RHS_USAF";

	scope = 0;
	displayName=$STR_RHSUSF_ACC_M2010S;

	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_rotex5_grey_icon_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons\acc\silencers\M2010\M2010silencer";

	class ItemInfo: InventoryMuzzleItem_Base_F
	{
		mass=7;
		class MagazineCoef
		{
			initSpeed = 1.01;
		};

		class AmmoCoef
		{
			hit=1;
			visibleFire=0.2;
			audibleFire=0.4;
			visibleFireTime=0.5;
			audibleFireTime=1.0;
			cost = 1.0;
			typicalSpeed= 1;
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

class rhsusf_acc_M2010S : rhsusf_silencer_base
{
	Author_Macro
	scope = 2;
};

class rhsusf_acc_SR25S : rhsusf_silencer_base
{
	Author_Macro
	scope = 2;
	displayName="SR-25 Rifle Suppressor";
	picture="\rhsusf\addons\rhsusf_weapons2\sr25\Data\gear\sr25_suppressor_x_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons2\sr25\sr25_suppressor";
};

class rhsusf_acc_rotex5_grey : rhsusf_silencer_base
{
	scope = 2;
	Author_Macro
	displayName=$STR_RHSUSF_ACC_Rotex5_grey;
	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_rotex5_grey_icon_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons\acc\silencers\rotex5\rotex5_grey.p3d";
};

class rhsusf_acc_rotex5_tan : rhsusf_acc_rotex5_grey
{
	scope = 2;
	Author_Macro
	displayName=$STR_RHSUSF_ACC_Rotex5_tan;
	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_rotex5_tan_icon_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons\acc\silencers\rotex5\rotex5_tan.p3d";
};

class rhsusf_acc_nt4_black : rhsusf_silencer_base
{
	scope = 2;
	Author_Macro
	displayName=$STR_RHSUSF_ACC_NT4_BLACK;
	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_nt4_black_icon_ca.paa";
	model = "rhsusf\addons\rhsusf_weapons\acc\silencers\nt4\nt4_black.p3d";

	inertia = 0.1;
};

class rhsusf_acc_nt4_tan : rhsusf_acc_nt4_black
{
	scope = 2;
	Author_Macro
	displayName=$STR_RHSUSF_ACC_NT4_TAN;
	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_nt4_tan_icon_ca.paa";
	model = "rhsusf\addons\rhsusf_weapons\acc\silencers\nt4\nt4_tan.p3d";
};

class rhsusf_acc_muzzleFlash_SF: ItemCore
{
	dlc = "RHS_USAF";

	scope = 2;
	Author_Macro
	//path to custom flash, it's same muzzle flash p3d as used on zasleh proxy in ak74
	model = "a3\data_f\proxies\muzzle_flash\muzzle_flash_rifle_trg20.p3d";

	inertia = 0;
};

class rhsusf_m4muzzlebreak_base : rhsusf_silencer_base
{
	scope = 0;
	Author_Macro
	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_m4muzzle_icon_ca.paa";

	inertia = 0;
};

class rhsusf_acc_SF3P556 : rhsusf_m4muzzlebreak_base
{
	scope = 2;

	displayName="$STR_RHSUSF_ACC_SF3P";
	Author_Macro
	model = "\rhsusf\addons\rhsusf_weapons\acc\silencers\surefirebrakes\SF3P556.p3d";

	class ItemInfo: ItemInfo
	{
		soundTypeIndex = 0;
		inertia=0.05;
		class AmmoCoef
		{
			hit=1;
			visibleFire=0.8;
			audibleFire=0.95;
			visibleFireTime=0.95;
			audibleFireTime=1.0;
			cost = 1.0;
			typicalSpeed= 1;
			airFriction = 1.0;
		};
		class MuzzleCoef
		{
			dispersionCoef="1.0f";
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
		alternativeFire = "rhsusf_acc_muzzleFlash_SF";  // out custom muzzle flash
	};
};

class rhsusf_acc_SFMB556 : rhsusf_acc_SF3P556
{
	displayName="$STR_RHSUSF_ACC_SFMB";
	Author_Macro
	model = "\rhsusf\addons\rhsusf_weapons\acc\silencers\surefirebrakes\SFMB556.p3d";
};

///! Scopes
class rhsusf_acc_sniper_base: ItemCore
{
	dlc = "RHS_USAF";

	scope = 0;
	Author_Macro
	displayName = $STR_RHSUSF_ACC_LEUPOLDMK401;
	descriptionShort = $STR_RHSUSF_ACC_LEUPOLDMK4_SD;

	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_leo_icon_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\leupoldmk4\leupoldmk4";

	weaponInfoType = "RscWeaponZeroing";
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 4;
		RMBhint = "Optical Sniper Sight";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_mildot";
		class OpticsModes
		{
			///! 3.5-10X MAGNIFICATION -> 0.2492/4
			class pso1_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
 				discreteDistanceInitIndex = 1;
				opticsZoomMax = 0.35/3.5;
				opticsZoomMin = 0.35/10;
				opticsZoomInit = 0.35/3.5;
				discretefov[] = {0.35/3.5,0.35/10};
 				discreteInitIndex = 0;
 				modelOptics[] = {"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_mildot3_5", "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_mildot10"};
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 100;
				distanceZoomMax = 1000;
				cameraDir = "";
			};
		};
	};

	inertia = 0.2;
};

class rhsusf_acc_compm4 : ItemCore
{
	dlc = "RHS_USAF";

	scope=2;
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M68";

	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\acc_m68cco_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\compM4\compm4";

	descriptionShort = $STR_RHSUSF_ACC_COLLIMATOR_SD;

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 4;
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

	inertia = 0.1;
};

class rhsusf_acc_eotech_552 : rhsusf_acc_compm4
{
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M552";

	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\acc_m552cco_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\eotech\Eotech552";

	descriptionShort = $STR_RHSUSF_ACC_COLLIMATOR_SD;

	inertia = 0;
};

class rhsusf_acc_eotech_552_d : rhsusf_acc_eotech_552
{
	Author_Macro
	displayName = "M552 CCO (Desert)";

	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\acc_m552cco_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\eotech\Eotech552_d";

	descriptionShort = $STR_RHSUSF_ACC_COLLIMATOR_SD;

	inertia = 0;
};

class rhsusf_acc_anpvs27 : ItemCore
{
	dlc = "RHS_USAF";

	scope=2;
	Author_Macro
	displayName = "AN/PVS-27";

	weaponInfoType = "RscWeaponZeroing";

	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_pvs27_icon_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\pvs27\PVS_27";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 4;
		RMBhint = "Night Vision Scope";
		optics = 1;

		modelOptics="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_opt";

		class OpticsModes
		{
			class PVS27
			{
				opticsID = 1;
				useModelOptics = 1;

				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","TankCommanderOptics1"};

				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "opticview";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				cameraDir = "";
				visionMode[] = {"NVG"};
			};
		};
	};

	inertia = 0.2;
};

class rhsusf_acc_LEUPOLDMK4 : rhsusf_acc_sniper_base
{
	scope=2;
	Author_Macro
};

class rhsusf_acc_ELCAN: rhsusf_acc_sniper_base
{
	rhs_optic_base = "rhsusf_acc_ELCAN";
	scope = 2;
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M145";
	descriptionShort =  "$STR_RHSUSF_ACC_M145";

	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_elcan_icon_ca.paa";
	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan";

	weaponInfoType = "rhs_elcan_handler";
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 4;
		RMBhint = "Machine Gun Optic";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_elcan";
		class OpticsModes
		{
			///! 3.5-10X MAGNIFICATION -> 0.2492/4
			class elcan_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[] = {100};
 				discreteDistanceInitIndex = 0;
				opticsZoomMax = 0.2492/3.4;
				opticsZoomMin = 0.2492/3.4;
				opticsZoomInit = 0.2492/3.4;
				memoryPointCamera = "opticView";
				visionMode[] = {};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1000;
				cameraDir = "direction";
			};
			class alternative_view
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
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

class rhsusf_acc_ELCAN_ard : rhsusf_acc_ELCAN
{
	rhs_optic_base = "rhsusf_acc_ELCAN_ard";
	weaponInfoType = "rhs_elcan_ard_handler";
	scope = 2;
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M145_ARD";
	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_ard";
};

class rhsusf_acc_elcan_3d : rhsusf_acc_ELCAN
{
	rhs_optic_base = "rhsusf_acc_ELCAN";
	weaponInfoType = "rhs_elcan_3d_handler";
	scopeArsenal=0;
	scope = 1;
	Author_Macro

	class ItemInfo : ItemInfo
	{
		class OpticsModes : OpticsModes
		{
			class elcan_scope : elcan_scope
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
				discreteDistance[] = {100};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.125;
				opticsZoomMax = 0.125;
				opticsZoomInit = 0.125;
				memoryPointCamera = "opticView_3d";
				visionMode[] = {};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
			};

			class alternative_view : alternative_view {};
		};
	};
};
class rhsusf_acc_elcan_ard_3d : rhsusf_acc_elcan_3d
{
	rhs_optic_base = "rhsusf_acc_ELCAN_ard";
	Author_Macro
	weaponInfoType = "rhs_elcan_ard_3d_handler";
	displayName = "$STR_RHSUSF_ACC_M145_ARD";
	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_ard";
};

class rhsusf_acc_ELCAN_pip: rhsusf_acc_ELCAN
{
	rhs_optic_base = "rhsusf_acc_ELCAN";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M145_3D";
	descriptionShort =  "$STR_RHSUSF_ACC_M145_3D";

	scopeArsenal = 0;
	scope = 1;

	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_pip";

	weaponInfoType = "rhs_elcan_pip_handler";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class elcan_scope
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin=0.275;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="pip_view";
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
				visionMode[]={};
				opticsPPEffects[]=
				{

				};
			};
			class alternative_view: alternative_view {};
		};
	};
};
class rhsusf_acc_ELCAN_ard_pip : rhsusf_acc_ELCAN_pip
{
	rhs_optic_base = "rhsusf_acc_ELCAN_ard";
	weaponInfoType = "rhs_elcan_ard_pip_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M145_ARD";
	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_ard_pip";
};

class rhsusf_acc_SpecterDR : ItemCore
{
	rhs_optic_base = "rhsusf_acc_SpecterDR";
	dlc = "RHS_USAF";

	scope=2;
	Author_Macro
	displayName = $STR_RHSUSF_ACC_SPECTERDR;

	picture="\rhsusf\addons\rhsusf_scopes\icons\rhs_specter_icon_ca.paa";
	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_su230";

	descriptionShort = $STR_RHSUSF_ACC_SPECTERDR_SHORT;

	opticsDisablePeripherialVision = 0;

	weaponInfoType = "rhs_SpecterDR_handler";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 11;
		RMBhint = "Dual role Combat Sight";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_scopes\optics\elcan\rhsusf_optic_SU230";

		class OpticsModes
		{
			class Elcan_x1
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin=0.25;
				opticsZoomMax=0.6;
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

			class Elcan_x4
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				//top of arrow is pointing at 100m, rest of range adjustments is performed with
				//help of recticle markings
				discreteDistance[] = {100};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.25/4;
				opticsZoomMax = 0.25/4;
				opticsZoomInit = 0.25/4;
				memoryPointCamera = "opticView";
				visionMode[] = {};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 100;
				distanceZoomMax = 10;
				cameraDir = "";
			};

			class Elcan_iron
			{
				opticsID = 3;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.275;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
			};
		};
	};

	inertia = 0.2;
};
class rhsusf_acc_SpecterDR_D : rhsusf_acc_SpecterDR
{
	rhs_optic_base = "rhsusf_acc_SpecterDR_D";
	weaponInfoType = "rhs_SpecterDR_d_handler";
	Author_Macro
	displayName = $STR_RHSUSF_ACC_SPECTERDR_TAN;

	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_su230_D";

};
class rhsusf_acc_SpecterDR_OD : rhsusf_acc_SpecterDR
{
	rhs_optic_base = "rhsusf_acc_SpecterDR_OD";
	weaponInfoType = "rhs_SpecterDR_od_handler";
	Author_Macro
	displayName = $STR_RHSUSF_ACC_SPECTERDR_OD;

	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_su230_OD";
};

class rhsusf_acc_SpecterDR_A : rhsusf_acc_SpecterDR
{
	rhs_optic_base = "rhsusf_acc_SpecterDR_A";
	weaponInfoType = "rhs_SpecterDR_a_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_SPECTERDR_A";
	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_su230A";

	descriptionShort = $STR_RHSUSF_ACC_SPECTERDR_A_SHORT;

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsusf\addons\rhsusf_scopes\optics\elcan\rhsusf_optic_SU230A";
	};
};


class rhsusf_acc_SpecterDR_3d : rhsusf_acc_SpecterDR
{
	rhs_optic_base = "rhsusf_acc_SpecterDR";
	weaponInfoType = "rhs_SpecterDR_3d_handler";
	scopeArsenal=0;
	scope = 1;
	Author_Macro
	displayName = $STR_RHSUSF_ACC_SPECTERDR_3D;

	class ItemInfo : ItemInfo
	{
		class OpticsModes : OpticsModes
		{
			class Elcan_x1 : Elcan_x1 {};

			class Elcan_x4 : Elcan_x4
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
				discreteDistance[] = {100};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.1;
				opticsZoomMax = 0.15;
				opticsZoomInit = 0.15;
				memoryPointCamera = "opticView";
				visionMode[] = {};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
			};

			class Elcan_iron : Elcan_iron {};
		};
	};
};

class rhsusf_acc_SpecterDR_D_3D : rhsusf_acc_SpecterDR_3d
{
	rhs_optic_base = "rhsusf_acc_SpecterDR_D";
	weaponInfoType = "rhs_SpecterDR_d_3d_handler";
	Author_Macro
	displayName = $STR_RHSUSF_ACC_SPECTERDR_D_3D;

	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_su230_D";
};
class rhsusf_acc_SpecterDR_OD_3D : rhsusf_acc_SpecterDR_3d
{
	rhs_optic_base = "rhsusf_acc_SpecterDR_OD";
	weaponInfoType = "rhs_SpecterDR_od_3d_handler";
	Author_Macro
	displayName = $STR_RHSUSF_ACC_SPECTERDR_OD_3D;

	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_su230_OD";
};
class rhsusf_acc_SpecterDR_A_3d : rhsusf_acc_SpecterDR_3d
{
	rhs_optic_base = "rhsusf_acc_SpecterDR_A";
	weaponInfoType = "rhs_SpecterDR_a_3d_handler";
	displayName = "$STR_RHSUSF_ACC_SPECTERDR_A_3D";
	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_su230A";

	Author_Macro
};
class rhsusf_acc_SpecterDR_CX_3D : rhsusf_acc_SpecterDR_3d
{
	rhs_optic_base = "rhsusf_acc_SpecterDR_CX";
	displayName = $STR_RHSUSF_ACC_SPECTERDR_CX_3D;
	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_specterdr";
	Author_Macro
};

class rhsusf_acc_SpecterDR_pvs27 : rhsusf_acc_SpecterDR
{
	scope=1;
	Author_Macro
	displayName = $STR_RHSUSF_ACC_SPECTERDR_PVS27;

	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\acc_m68cco_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\pvs27\PVS_27_specterdr.p3d";

	class ItemInfo : ItemInfo
	{
		class OpticsModes : OpticsModes
		{
			class Elcan_x1 : Elcan_x1
			{
				useModelOptics = 1;
				visionMode[] = {"NVG"};
			};

			class Elcan_x4 : Elcan_x4
			{
				visionMode[] = {"NVG"};
			};

			class Elcan_iron : Elcan_iron {};
		};
	};

	inertia = 0.2;
};

class rhsusf_acc_ACOG: rhsusf_acc_sniper_base
{
	rhs_optic_base = "rhsusf_acc_ACOG";
	weaponInfoType = "rhs_acog_handler";
	scope = 2;
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M150";
	descriptionShort =  "$STR_RHSUSF_ACC_M150";

	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_acog_icon_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog";

	opticsDisablePeripherialVision = 0;

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 4;
		RMBhint = "Rifle Combat Optic";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_acog";
		class OpticsModes
		{
			class elcan_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				//top of arrow is pointing at 100m, rest of range adjustments is performed with
				//help of recticle markings
				discreteDistance[] = {100};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.35/4;
				opticsZoomMax = 0.35/4;
				opticsZoomInit = 0.35/4;
				memoryPointCamera = "opticview";
				visionMode[] = {};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 100;
				distanceZoomMax = 1000;
				cameraDir = "";
			};

			class alternative_view
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.275;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
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

class rhsusf_acc_ACOG_wd: rhsusf_acc_ACOG
{
	rhs_optic_base = "rhsusf_acc_ACOG_wd";
	weaponInfoType = "rhs_acog_wd_handler";
	Author_Macro
	displayName = "TA31RCO (Woodland)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_wd";
};

class rhsusf_acc_ACOG_d: rhsusf_acc_ACOG
{
	rhs_optic_base = "rhsusf_acc_ACOG_d";
	weaponInfoType = "rhs_acog_d_handler";
	Author_Macro
	displayName = "TA31RCO (Desert)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_d";
};

class rhsusf_acc_ACOG_sa: rhsusf_acc_ACOG
{
	rhs_optic_base = "rhsusf_acc_ACOG_sa";
	weaponInfoType = "rhs_acog_sa_handler";
	Author_Macro
	displayName = "TA31RCO (Semi-Arid)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_sa";
	scope = 1;
	scopearsenal=0;
};


class rhsusf_acc_ACOG2: rhsusf_acc_ACOG
{
	rhs_optic_base = "rhsusf_acc_ACOG2";
	weaponInfoType = "rhs_acog2_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M150_ARD";
	descriptionShort =  "$STR_RHSUSF_ACC_M150_ARD";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_glarehider";
	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_acog_hex";
		class OpticsModes: OpticsModes
		{
			class elcan_scope: elcan_scope
			{
				opticsFlare = 0;
			};
			class alternative_view: alternative_view {};
		};
	};
};

class rhsusf_acc_ACOG3: rhsusf_acc_ACOG
{
	rhs_optic_base = "rhsusf_acc_ACOG3";
	weaponInfoType = "rhs_acog3_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M150_ARD_L";
	descriptionShort =  "$STR_RHSUSF_ACC_M150_ARD_L";

	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_acog_icon_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_glarehider_lenscover";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_acog_hex";
	};
};

class rhsusf_acc_ACOG_USMC: rhsusf_acc_ACOG
{
	rhs_optic_base = "rhsusf_acc_ACOG_USMC";
	weaponInfoType = "rhs_acog_usmc_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_31A";
	descriptionShort =  "$STR_RHSUSF_ACC_31A";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_acog2";
	};
};

class rhsusf_acc_ACOG2_USMC: rhsusf_acc_ACOG2
{
	rhs_optic_base = "rhsusf_acc_ACOG2_USMC";
	weaponInfoType = "rhs_acog2_usmc_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_31A_ARD";
	descriptionShort =  "$STR_RHSUSF_ACC_31A_ARD";
	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_acog2_hex";
	};
};

class rhsusf_acc_ACOG3_USMC: rhsusf_acc_ACOG3
{
	rhs_optic_base = "rhsusf_acc_ACOG3_USMC";
	weaponInfoType = "rhs_acog3_usmc_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_31A_ARD_L";
	descriptionShort =  "$STR_RHSUSF_ACC_31A_ARD_L";

	class ItemInfo: ItemInfo
	{

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_acog2_hex";
	};
};

//3d variants
class rhsusf_acc_ACOG_3d: rhsusf_acc_ACOG
{
	rhs_optic_base = "rhsusf_acc_ACOG";
	weaponInfoType = "rhs_acog_3d_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M150";
	descriptionShort =  "$STR_RHSUSF_ACC_M150";
	scope=1;
	scopearsenal=0;

	class ItemInfo: ItemInfo
	{

		class OpticsModes: OpticsModes
		{
			class elcan_scope: elcan_scope
			{
				useModelOptics = 0;
				opticsZoomMin = 0.08;
				opticsZoomMax = 0.125;
				opticsZoomInit = 0.125;
				memoryPointCamera = "opticview_3d";
			};
			class alternative_view: alternative_view {};
		};
	};
};

class rhsusf_acc_ACOG_wd_3d: rhsusf_acc_ACOG_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG_wd";
	weaponInfoType = "rhs_acog_wd_3d_handler";
	Author_Macro
	displayName = "TA31RCO (Woodland)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_wd";
};

class rhsusf_acc_ACOG_d_3d: rhsusf_acc_ACOG_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG_d";
	weaponInfoType = "rhs_acog_d_3d_handler";
	Author_Macro
	displayName = "TA31RCO (Desert)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_d";
};

class rhsusf_acc_ACOG_sa_3d: rhsusf_acc_ACOG_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG_sa";
	weaponInfoType = "rhs_acog_sa_3d_handler";
	Author_Macro
	displayName = "TA31RCO (Semi-Arid)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_sa";
};

class rhsusf_acc_ACOG2_3d: rhsusf_acc_ACOG_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG2";
	weaponInfoType = "rhs_acog2_3d_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M150_ARD";
	descriptionShort =  "$STR_RHSUSF_ACC_M150_ARD";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_glarehider";
};

class rhsusf_acc_ACOG3_3d: rhsusf_acc_ACOG_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG3";
	weaponInfoType = "rhs_acog3_3d_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M150_ARD_L";
	descriptionShort =  "$STR_RHSUSF_ACC_M150_ARD_L";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_glarehider_lenscover";
};

class rhsusf_acc_ACOG_USMC_3d: rhsusf_acc_ACOG_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG_USMC";
	weaponInfoType = "rhs_acog_usmc_3d_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_31A";
	descriptionShort =  "$STR_RHSUSF_ACC_31A";
};

class rhsusf_acc_ACOG2_USMC_3d: rhsusf_acc_ACOG2_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG2_USMC";
	weaponInfoType = "rhs_acog2_usmc_3d_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_31A_ARD";
	descriptionShort =  "$STR_RHSUSF_ACC_31A_ARD";
};

class rhsusf_acc_ACOG3_USMC_3d: rhsusf_acc_ACOG3_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG3_USMC";
	weaponInfoType = "rhs_acog3_usmc_3d_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_31A_ARD_L";
	descriptionShort =  "$STR_RHSUSF_ACC_31A_ARD_L";
};

//pip variants
class rhsusf_acc_ACOG_pip: rhsusf_acc_ACOG
{
	rhs_optic_base = "rhsusf_acc_ACOG";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M150_3D";
	descriptionShort =  "$STR_RHSUSF_ACC_M150_3D";
	scope=1;
	scopearsenal=0;

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_pip";

	weaponInfoType = "rhs_acog_pip_handler";

	class ItemInfo: ItemInfo
	{

		class OpticsModes: OpticsModes
		{
			class elcan_scope
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin=0.275;
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

				};
			};
			class alternative_view: alternative_view {};
		};
	};
};

class rhsusf_acc_ACOG_wd_pip: rhsusf_acc_ACOG_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG_wd";
	weaponInfoType = "rhs_acog_wd_pip_handler";
	Author_Macro
	displayName = "TA31RCO (Woodland)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_wd_pip";
};

class rhsusf_acc_ACOG_d_pip: rhsusf_acc_ACOG_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG_d";
	weaponInfoType = "rhs_acog_d_pip_handler";
	Author_Macro
	displayName = "TA31RCO (Desert)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_d_pip";
};

class rhsusf_acc_ACOG_sa_pip: rhsusf_acc_ACOG_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG_sa";
	weaponInfoType = "rhs_acog_sa_pip_handler";
	Author_Macro
	displayName = "TA31RCO (Semi-Arid)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_sa_pip";
};

class rhsusf_acc_ACOG2_pip: rhsusf_acc_ACOG_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG2";
	weaponInfoType = "rhs_acog2_pip_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M150_ARD";
	descriptionShort =  "$STR_RHSUSF_ACC_M150_ARD";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_glarehider_pip";
};

class rhsusf_acc_ACOG3_pip: rhsusf_acc_ACOG_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG3";
	weaponInfoType = "rhs_acog3_pip_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M150_ARD_L";
	descriptionShort =  "$STR_RHSUSF_ACC_M150_ARD_L";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_glarehider_lenscover_pip";
};

class rhsusf_acc_ACOG_USMC_pip: rhsusf_acc_ACOG_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG_USMC";
	weaponInfoType = "rhs_acog_usmc_pip_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_31A";
	descriptionShort =  "$STR_RHSUSF_ACC_31A";
};

class rhsusf_acc_ACOG2_USMC_pip: rhsusf_acc_ACOG2_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG2_USMC";
	weaponInfoType = "rhs_acog2_usmc_pip_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_31A_ARD";
	descriptionShort =  "$STR_RHSUSF_ACC_31A_ARD";
};

class rhsusf_acc_ACOG3_USMC_pip: rhsusf_acc_ACOG3_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG3_USMC";
	weaponInfoType = "rhs_acog3_usmc_pip_handler";
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_31A_ARD_L";
	descriptionShort =  "$STR_RHSUSF_ACC_31A_ARD_L";
};

class rhsusf_acc_ACOG_anpvs27: rhsusf_acc_ACOG
{
	displayName = "M150 RCO + AN/PVS-27";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\pvs27\PVS_27_ACOG.p3d";
	scope = 2;
	Author_Macro

	class ItemInfo: ItemInfo
	{
		opticType = 2;
		mass = 10;
		RMBhint = "Rifle Combat Optic + Night Vision";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_acog";

		class OpticsModes
		{
			class elcan_nvg
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","TankCommanderOptics1"};
				//top of arrow is pointing at 100m, rest of range adjustments is performed with
				//help of recticle markings
				discreteDistance[] = {100};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.25/4;
				opticsZoomMax = 0.25/4;
				opticsZoomInit = 0.25/4;
				memoryPointCamera = "opticView";

				visionMode[] = {"NVG"};

				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 100;
				distanceZoomMax = 1000;
				cameraDir = "";
			};
		};
	};

	inertia = 0.2;
};


class rhsusf_acc_LEUPOLDMK4_2 : rhsusf_acc_sniper_base
{
	displayName = $STR_RHSUSF_ACC_LEUPOLDMK402;
	scope=2;
	Author_Macro
	weaponInfoType = "RscWeaponZeroing";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\leupoldmk4\leupoldmk4_2";
	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_leo2_icon_ca.paa";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 8;
		RMBhint = "Optical Sniper Sight";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_H58";
		class OpticsModes
		{
			///! 3.5-10X MAGNIFICATION -> 0.2492/4
			class pso1_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
 				discreteDistanceInitIndex = 1;
				opticsZoomMax = 0.35/6.5;
				opticsZoomMin = 0.35/20;
				opticsZoomInit = 0.35/6.5;
				discretefov[] = {0.35/6.5,0.35/20};
 				discreteInitIndex = 0;
 				modelOptics[] = {"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_H58", "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_H58_20"};

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

class rhsusf_acc_LEUPOLDMK4_2_d : rhsusf_acc_LEUPOLDMK4_2
{
	displayName = $STR_RHSUSF_ACC_LEUPOLDMK402_SD_D;
	scope=2;
	Author_Macro

	weaponInfoType = "RscWeaponZeroing";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\leupoldmk4\leupoldmk4_2_d";
	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_leo2_icon_ca.paa";
};

class rhsusf_acc_premier : rhsusf_acc_LEUPOLDMK4_2
{
	displayName = "M8541A SSDS";
	scope=2;
	Author_Macro
	weaponInfoType = "RscWeaponZeroing";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\ph_5_25x_56mm\prem_scope";
	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_prem_icon_ca.paa";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 8;
		RMBhint = "Optical Sniper Sight";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3";

		class OpticsModes
		{
			///! 3-15X MAGNIFICATION -> 0.25/3
			class pso1_scope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};

				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1800};
 				discreteDistanceInitIndex = 1;

				opticsZoomMax = 0.25/3;
				opticsZoomMin = 0.25/15;
				opticsZoomInit = 0.25/3;

				discretefov[] = {0.25/3,0.25/6,0.25/9,0.25/12,0.25/15};
 				discreteInitIndex = 0;

 				modelOptics[] =
 				{
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot6",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot9",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot12",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot15"
 				};

				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1800;
				cameraDir = "";
			};
		};
	};
};

class rhsusf_acc_premier_low : rhsusf_acc_premier
{
	displayName = "M8541A (low mount)";
	scope=2;
	Author_Macro

	weaponInfoType = "RscWeaponZeroing";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\ph_5_25x_56mm\prem_scope_low";
	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_prem_icon_ca.paa";
};

class rhsusf_acc_premier_anpvs27 : rhsusf_acc_premier
{
	displayName = "M8541A + AN/PVS-27";
	scope=2;
	Author_Macro

	weaponInfoType = "RscWeaponZeroing";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\PVS27\PVS_27_M8451A";
	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_prem_icon_ca.paa";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 14;
		RMBhint = "Optical Sniper Sight + Night Vision Device";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3";

		class OpticsModes
		{
			///! 3-15X MAGNIFICATION -> 0.25/3
			class pso1_nvg
			{
				opticsID = 2;
				useModelOptics = 1;

				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","TankCommanderOptics1"};

				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1800};
 				discreteDistanceInitIndex = 1;

				opticsZoomMax = 0.25/3;
				opticsZoomMin = 0.25/15;
				opticsZoomInit = 0.25/3;

				discretefov[] = {0.25/3,0.25/6,0.25/9,0.25/12,0.25/15};
 				discreteInitIndex = 0;

 				modelOptics[] =
 				{
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot6",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot9",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot12",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot15"
 				};

				memoryPointCamera = "opticView";
				visionMode[] = {"NVG"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1800;
				cameraDir = "";
			};
		};
	};

	inertia = 0.4;
};

class rhsusf_acc_EOTECH : optic_Holosight
{
	displayName = "$STR_RHSUSF_ACC_EOTECH_EXPS";
	author = "Bohemia Interactive";
	scope=2;
	dlc = "RHS_USAF";

	inertia = 0;
};

class rhsusf_acc_M2A1: rhsusf_acc_compm4
{
	Author_Macro
	displayName = "$STR_RHSUSF_ACC_M2A1";
	//descriptionShort =  "$STR_RHSUSF_ACC_31A_ARD_L";

	picture = "\rhsusf\addons\rhsusf_weapons2\icons\rhs_acc_m2a1_icon_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons2\M32\rhs_m2a1";
};

class rhsusf_acc_eotech_xps3 : optic_Holosight
{
	Author_Macro
	dlc = "RHS_USAF";
	displayName = "$STR_RHSUSF_ACC_EOTECH";

	picture="\rhsusf\addons\rhsusf_weapons2\icons\rhs_xps3_icon_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons2\acc\scopes\xps3\rhs_xps3";

	inertia = 0;
};

// SMAW Optic
class rhs_weap_optic_smaw: ItemCore
{
	dlc = "RHS_USAF";

	useAsBinocular=1;
	Author_Macro
	_generalMacro = "rhs_weap_optic_smaw";
	scope = 2;
	displayName = "SMAW sight";
	picture = "\rhsusf\addons\rhsusf_weapons2\smaw\UI\scope_CA.paa";
	model = "rhsusf\addons\rhsusf_weapons2\smaw\optic_smaw.p3d";
	descriptionShort = "Optical Sight for the SMAW";
	weaponInfoType = "RscWeaponZeroing";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass = 8;
		opticType = 1;
		optics = 1;
		modelOptics = "rhsusf\addons\rhsusf_weapons2\smaw\optic_smaw.p3d";

		class OpticsModes
		{
			class optic
			{

				opticsID = 1;
				opticType = 1;

				useModelOptics = 0;
				opticsZoomMin = 0.07;
				opticsZoomMax = 0.07;
				opticsZoomInit = 0.07;//0.1083;
	   				discreteDistance[] = {50,100,150,200,250,300,350,400,450,500};
	   				discreteDistanceInitIndex = 0;
				discreteDistanceCameraPoint[] = {"eye_1", "eye_2", "eye_3", "eye_4","eye_5", "eye_6", "eye_7", "eye_8", "eye_9", "eye_10"};
			//	memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 0;
				cameraDir = "look";
				visionMode[] = {};
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur5"};
				distancezoommin=50;
				distancezoommax=50;
			};
		};
	};
	inertia = 0.0;
};

class rhs_weap_optic_smaw_1: rhs_weap_optic_smaw
{
	Author_Macro
	scopearsenal=0;
	_generalMacro = "rhs_weap_optic_smaw_1";

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=50;
				distancezoommax=50;
				discreteInitIndex = 0;
				discreteDistanceInitIndex = 0;
			};
		};
	};
};

class rhs_weap_optic_smaw_2: rhs_weap_optic_smaw_1
{
	Author_Macro
	_generalMacro = "rhs_weap_optic_smaw_2";

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=100;
				distancezoommax=100;
				discreteInitIndex = 1;
				discreteDistanceInitIndex = 1;
			};
		};
	};
};

class rhs_weap_optic_smaw_3: rhs_weap_optic_smaw_1
{
	Author_Macro
	_generalMacro = "rhs_weap_optic_smaw_3";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=150;
				distancezoommax=150;
				discreteInitIndex = 2;
				discreteDistanceInitIndex = 2;
			};
		};
	};
};

class rhs_weap_optic_smaw_4: rhs_weap_optic_smaw_1
{
	Author_Macro
	_generalMacro = "rhs_weap_optic_smaw_4";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=200;
				distancezoommax=200;
				discreteInitIndex = 3;
				discreteDistanceInitIndex = 3;
			};
		};
	};
};

class rhs_weap_optic_smaw_5: rhs_weap_optic_smaw_1
{
	Author_Macro
	_generalMacro = "rhs_weap_optic_smaw_5";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=250;
				distancezoommax=250;
				discreteInitIndex = 4;
				discreteDistanceInitIndex = 4;
			};
		};
	};
};

class rhs_weap_optic_smaw_6: rhs_weap_optic_smaw_1
{
	Author_Macro
	_generalMacro = "rhs_weap_optic_smaw_6";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=300;
				distancezoommax=300;
				discreteInitIndex = 5;
				discreteDistanceInitIndex = 5;
			};
		};
	};
};

class rhs_weap_optic_smaw_7: rhs_weap_optic_smaw_1
{
	Author_Macro
	_generalMacro = "rhs_weap_optic_smaw_7";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=350;
				distancezoommax=350;
				discreteInitIndex = 6;
				discreteDistanceInitIndex = 6;
			};
		};
	};
};

class rhs_weap_optic_smaw_8: rhs_weap_optic_smaw_1
{
	Author_Macro
	_generalMacro = "rhs_weap_optic_smaw_8";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=400;
				distancezoommax=400;
				discreteInitIndex = 7;
				discreteDistanceInitIndex = 7;
			};
		};
	};
};

class rhs_weap_optic_smaw_9: rhs_weap_optic_smaw_1
{
	Author_Macro
	_generalMacro = "rhs_weap_optic_smaw_9";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=450;
				distancezoommax=450;
				discreteInitIndex = 8;
				discreteDistanceInitIndex = 8;
			};
		};
	};
};

class rhs_weap_optic_smaw_10: rhs_weap_optic_smaw_1
{
	Author_Macro
	_generalMacro = "rhs_weap_optic_smaw_10";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=500;
				distancezoommax=500;
				discreteInitIndex = 9;
				discreteDistanceInitIndex = 9;
			};
		};
	};
};
