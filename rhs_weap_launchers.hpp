class Launcher;
class Launcher_Base_F : Launcher
{
	class WeaponSlotsInfo;
};
class launch_RPG32_F: Launcher_Base_F {};

class rhs_weap_rpg26 : Launcher_Base_F
{
	dlc = "RHS_AFRF";

	scope = 2;
	Author_Macro
	displayName = "$STR_RHS_RPG26_NAME";
	descriptionShort = "Rocket launcher<br/>Caliber: 72.5mm<br/>Type: Single-shot Anti-tank";
	picture = "\rhsafrf\addons\rhs_weapons\icons\rpg26_ca.paa";

	rhs_disposable=1;
	reloadTime=1;
	magazineReloadTime = 1;

	model = "\rhsafrf\addons\rhs_weapons\rpg26\rpg26";
	//model = "\rhsafrf\addons\rhs_weapons\rpg26\rpg26_unloaded";
	modelOptics = "-";

	recoil = "recoil_single_law";
	class GunParticles
	{
		class effect1
		{
			positionName = "konec hlavne";
			directionName = "usti hlavne";
			//effectName = "RHS_BackEffectsRPG";
			effectName = "RHS_Fired_RPG26";
			//effectName = "RocketBackEffectsRPGNT";
		};
	};

	magazines[] = {rhs_rpg26_mag};
	reloadAction = "ReloadRPG";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\RPG26.rtm"};

 	sounds[] = {StandardSound};
 	class StandardSound
 	{
		weaponSoundEffect = "DefaultRifle";
		begin1[] = {"A3\Sounds_F\weapons\Launcher\rpg32",1.99526,1,900};
		soundBegin[]={"begin1",1};
	};
	drySound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
	reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.562341,1,50};
	soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.316228,1.5,700};

	showToPlayer=1;
	minRange = 10;
	minRangeProbab = 0.9;
	midRange = 200;
	midRangeProbab = 0.7;
	maxRange = 350;
	maxRangeProbab = 0.1;
	aiRateOfFire = 7;
	aiRateOfFireDistance = 300;

	weaponInfoType = "rhs_rscOptics_disposable";

	optics=1;
	class OpticsModes
	{
		class ironsight
		{
			opticsID=2;
			opticsPPEffects[]=
			{
				"OpticsCHAbera1",
				"OpticsBlur1"
			};
			useModelOptics=0;
			opticsFlare=0;
			opticsDisablePeripherialVision=0;
			opticsZoomMin=0.25;
			opticsZoomMax=0.6;
			opticsZoomInit=0.6;
			visionMode="";
			discreteDistanceInitIndex=0;
			discreteDistance[]={100};
			cameraDir="op_look2";
			discreteDistanceCameraPoint[]=
			{
				"eye_ironsight"
			};
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class ironsight2: ironsight
		{
			opticsID=1;
			discreteDistance[] = {50,150,250};
			discreteDistanceCameraPoint[] = {"eye","OP_eye1","OP_eye2"};
			cameraDir="op_look";
			distanceZoomMin=50;
			distanceZoomMax=250;
		};
	};


	class Library
	{
		libTextDesc = "The RPG-26 Aglen is a disposable anti-tank rocket launcher developed by the Soviet Union.";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 59;
	};
	class ItemInfo
	{
		priority = 3;
		RMBhint = "$STR_RHS_RPG26_NAME";
		onHoverText = "$STR_RHS_RPG26_NAME";
	};
};
class rhs_weap_rpg26_used : rhs_weap_rpg26
{
	scope=1;
	descriptionShort = "Used rocket launcher<br/>Caliber: 72.5mm<br/>Type: Used launcher tube";
	displayname = "$STR_RHS_RPG26USED_NAME";
	weaponInfoType = "RscWeaponZeroing";
	magazines[]={rhs_launcher_dummy_mag};
	model = "\rhsafrf\addons\rhs_weapons\rpg26\rpg26_unloaded";
};

class rhs_weap_rpg18 : rhs_weap_rpg26
{
	scope=1;

	displayName = "$STR_RHS_RPG18_NAME";
	descriptionShort = "64mm, single-shot weapon.";

	magazines[] = {rhs_rpg18_mag};

	discreteDistance[] = {50,100,150,200};
	discreteDistanceCameraPoint[] = {"eye","OP_eye1","OP_eye2","OP_eye3"};
	class GunParticles
	{
		class effect1
		{
			positionName = "konec hlavne";
			directionName = "usti hlavne";
			effectName = "RHS_Fired_RPG18";
		};
	};
};

class rhs_weap_rpg18_used : rhs_weap_rpg18
{
	scope=1;
	descriptionshort = "Used launcher tube";
	displayname = "$STR_RHS_RPG18USED_NAME";
	weaponInfoType = "RscWeaponZeroing";
	magazines[]={rhs_launcher_dummy_mag};
};

class rhs_weap_rshg2 : rhs_weap_rpg26
{
	scope = 2;
	Author_Macro
	displayName = "$STR_RHS_RSHG2_NAME";
	descriptionShort = "Rocket launcher<br/>Caliber: 72.5mm<br/>Type: Single-shot Assault-weapon";
	picture = "\rhsafrf\addons\rhs_weapons\icons\rshg2_ca.paa";
	magazines[] = {rhs_rshg2_mag};

	model = "\rhsafrf\addons\rhs_weapons\rpg26\rshg2";
	modelOptics = "-";



	class OpticsModes: OpticsModes
	{
		class ironsight: ironsight {};
		class ironsight2: ironsight2
		{
			opticsID=1;
			discreteDistance[] = {50,100,150,200,250,300,350};
			discreteDistanceCameraPoint[] = {"eye","OP_eye1","OP_eye2","OP_eye3","OP_eye4","OP_eye5","OP_eye6"};
			cameraDir="op_look";
			distanceZoomMin=50;
			distanceZoomMax=350;
		};
	};

	class GunParticles
	{
		class effect1
		{
			positionName = "konec hlavne";
			directionName = "usti hlavne";
			effectName = "RHS_Fired_Rshg2";
		};
	};
	class Library
	{
		libTextDesc = "The RShG-2 is a disposable thermobaric rocket launcher derived from the RPG-26.";
	};
	class ItemInfo
	{
		priority = 3;
		RMBhint = "$STR_RHS_RSHG2_NAME";
		onHoverText = "$STR_RHS_RSHG2_NAME";
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 72.6;
	};
};
class rhs_weap_rshg2_used : rhs_weap_rshg2
{
	scope=1;
	descriptionShort = "Used rocket launcher<br/>Caliber: 72.5mm<br/>Type: Used launcher tube";
	displayname = "$STR_RHS_RSHG2USED_NAME";
	weaponInfoType = "RscWeaponZeroing";
	magazines[]={rhs_launcher_dummy_mag};
	model = "\rhsafrf\addons\rhs_weapons\rpg26\rshg2_unloaded";
};


class rhs_weap_rpg7 : Launcher_Base_F
{
	dlc = "RHS_AFRF";

	baseWeapon="rhs_weap_rpg7";
	scope = 2;
	Author_Macro
	displayName = "$STR_RHS_RPG7V2_NAME";
	descriptionShort = "Rocket launcher<br/>Caliber: 40mm<br/>Type: Rocket-propelled grenade launcher";
	picture = "\rhsafrf\addons\rhs_weapons\icons\rpg7v2_ca.paa";

	model = "\rhsafrf\addons\rhs_weapons\rpg7\rhs_rpg7v2";
	modelOptics = "-";

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\RPG7gripPrevraceny.rtm"};

	class GunParticles
	{
		class effect1
		{
			positionName = "konec hlavne";
			directionName = "usti hlavne";
			effectName = "RocketBackEffectsRPGNT";
		};
	};

	magazines[] = {rhs_rpg7_PG7VL_mag, rhs_rpg7_PG7VR_mag, rhs_rpg7_OG7V_mag, rhs_rpg7_TBG7V_mag};
	reloadAction = "RHS_GestureReloadRPG7";

	minRange = 10;
	midRange = 200;
	maxRange = 300;
	aiRateOfFire = 10.0;
	aiRateOfFireDistance = 250;

	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {50,100,150,200,300,400,500};
	discreteDistanceCameraPoint[] = {"eye_50","eye_100","eye_150","eye_200","eye_300","eye_400","eye_500"};
	discreteDistanceInitIndex=0;
	cameraDir="eye_look";

 	sounds[] = {StandardSound};
 	class BaseSoundModeType
 	{
		weaponSoundEffect = "DefaultRifle";
	};
 	class StandardSound: BaseSoundModeType
 	{
		begin1[] = {"A3\Sounds_F\weapons\Launcher\rpg32",1.99526,1,900};
		soundBegin[]={"begin1",1};
	};

	sound[] = {"A3\Sounds_F\weapons\Launcher\rpg32",1.99526,1,800};
	drySound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
	reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.562341,1,50};
	soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.316228,1.5,700};

	weaponSoundEffect = "DefaultRifle";
	recoil = "recoil_single_law";

	class Library
	{
		libTextDesc = "The RPG-7V2 is a portable, unguided, shoulder-launched, anti-tank rocket-propelled grenade launcher.";
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot: rhs_russian_rpg7_scopes_slot{};

		mass = 130;
	};
	class ItemInfo
	{
		priority = 3;
		RMBhint = "$STR_RHS_RPG7V2_NAME";
		onHoverText = "$STR_RHS_RPG7V2_NAME";
	};
};

class rhs_weap_rpg7_pgo : rhs_weap_rpg7
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhs_acc_pgo7v";
		};
	};
};

class rhs_weap_rpg7_1pn93 : rhs_weap_rpg7
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhs_acc_1pn93_1";
		};
	};
};

class launch_O_Titan_F;
class rhs_weap_strela: launch_O_Titan_F
{
	dlc = "RHS_AFRF";

	scope=1;

	htmax=420;
	htmin=1;
	afmax=0;
	mfact=1;
	mfmax=0;
	tbody=100;
	value=15;


	cmimmunity=0.85;

	lockAcquire=0;
	//canlock=2;
	//weaponlockdelay=3;
	//weaponlocksystem=1;
	shotPos = "usti hlavne";
	shotEnd = "konec hlavne";
	cursorsize=1;
	displayname="9K32";


	magazines[]=
	{
		"rhs_mag_9k32_rocket"
	};
	class OpticsModes
	{
		class StepScope
		{
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			opticsFlare = 1;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.75;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			memoryPointCamera = "eye";
			cameraDir = "look";
			visionMode[] = {"Normal"};
			thermalMode[] = {};
			opticsDisablePeripherialVision = 1;
		};
	};

	maxrange=4200;
	maxrangeprobab=0.1;
	midrange=2350;
	midrangeprobab=0.8;
	minrange=10;
	minrangeprobab=0.3;
	airateoffire=5;
	airateoffiredistance=2350;

	modeloptics="-";
	weaponInfoType = "RscWeaponZeroing";

	sounds[] = {StandardSound};
	class StandardSound
	{
		weaponSoundEffect = "DefaultRifle";
		begin1[]={"rhsafrf\addons\rhs_sounds\rpg\rpg_1",2.35,1,900};
		begin2[]={"rhsafrf\addons\rhs_sounds\rpg\rpg_2",2.35,1,900};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
	};


	class Library
	{
		libtextdesc="The 9K32 Strela-2 (NATO name SA-7 Grail) is a man-portable, shoulder-fired surface-to-air missile (SAM) with passive infrared homing guidance, similar to the US Army Stinger.<br/>The 9K32 is a tail-chase missile dependent on the operatoro??s ability to lock it onto the heat source of low-flying jets and helicopters.";
	};
};
class rhs_weap_igla: rhs_weap_strela
{
	Author_Macro
	scope=2;
	displayname="9K38 Igla";
	descriptionShort = "Missile launcher<br/>Caliber: 72mm<br/>Type: Surface-to-air";
	model="rhsafrf\addons\rhs_weapons\igla_bis\igla";
	picture="\rhsafrf\addons\rhs_weapons\icons\w_igla_ca.paa";
	handanim[]=
	{
		"OFP2_ManSkeleton",
		"\rhsafrf\addons\rhs_c_weapons\anims\igla.rtm"
	};
	magazines[]=
	{
		"rhs_mag_9k38_rocket"
	};

	cmimmunity = 0.95;
	airateoffire = 5;
	airateoffiredistance = 3100;
	maxleadspeed = 320;
	dexterity = 0.5;

	reloadMagazineSound[] = {"A3\Sounds_F\weapons\Reloads\reload_magazine_MissileLauncher",0.891251,1,10};
	sounds[] = {"StandardSound"};
	class StandardSound
	{
		begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_4",1.41254,1,1100};
		soundBegin[] = {"begin1",1};
		weaponSoundEffect = "DefaultRifle";
	};

	//class Library
	//{
		//libtextdesc = "The Igla (in English: Needle) is a Russian, man-portable infrared homing surface-to-air missile weapon. This weapon is designated as "SA-18" in the US and its NATO reporting name is "Grouse." <br/>The Igla uses 9M39 missiles. This weaponis highly valued for its resistance to countermeasures. Because of its easy availability on the black market it has often been used in terrorist attacks on civilian aircraft over last 30 years, mostly in Africa.";
	//};
};