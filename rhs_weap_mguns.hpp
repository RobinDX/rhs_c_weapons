
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;	// External class reference
	};
	class rhs_pkp_base: Rifle_Long_Base_F
	{
		dlc = "RHS_AFRF";

		scope = 0;
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		magazines[] =
		{
			rhs_100Rnd_762x54mmR,
			rhs_100Rnd_762x54mmR_green
		};
		reloadAction = "GestureReloadM200";

		cursor = "mg";
		cursorAim = "EmptyCursor";
		nameSound = "Mgun";
		hasBipod = 1;

		maxRecoilSway = 0.0150;
		swayDecaySpeed = 1.25;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		dexterity = 2.8;
		descriptionShort = "Machine Gun<br/>Caliber: 7.62x54mmR";

		class ItemInfo
		{
			priority = 1;
			RMBhint = "PKP";
			onHoverText = "TODO PKP DSS";
		};

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot {};
			class CowsSlot: rhs_russian_rifle_scopes_slot{};
			class PointerSlot {};
		};

		class GunParticles : GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RifleAssaultCloud";
			};
			class RHS_BarrelRefract
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne up";
				effectName = "RHS_BarrelRefract";
			};
		};

		bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1",1,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2",1,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3",1,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4",1,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1",1,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2",1,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3",1,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4",1,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\bullets\7_62-metal1",1,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\bullets\7_62-metal2",1,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\bullets\7_62-metal3",1,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\bullets\7_62-metal4",1,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};

		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.56234133,
			1,
			20
		};
/////////////////////////////////////////////////////////////////////////////
		jsrs_soundeffect = "JSRS2_Distance_Effects_m200";
/////////////////////////////////////////////////////////////////////////////

		modes[]=
		{
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		discreteDistance[]={420,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
		discreteDistanceInitIndex=0;
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.092;
			dispersion=0.00101;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";

	 		sounds[] = {"StandardSound","SilencedSound"};
	 		class BaseSoundModeType
	 		{
				weaponSoundEffect="DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
	 		class StandardSound: BaseSoundModeType
	 		{
				begin1[]={"rhsafrf\addons\rhs_sounds\pkp\pkp_1",2.45,1,1300};
				begin2[]={"rhsafrf\addons\rhs_sounds\pkp\pkp_2",2.45,1,1300};
				soundBegin[]={"begin1",0.5,"begin2",0.5};
			};
			
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.9;
			midRange=15;
			midRangeProbab=0.7;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			showToPlayer=1;
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.092;
			dispersion=0.00101;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";

	 		sounds[] = {"StandardSound","SilencedSound"};
	 		class BaseSoundModeType
	 		{
				weaponSoundEffect="DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
	 		class StandardSound: BaseSoundModeType
	 		{
				begin1[] = {"\rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_s_pkt",1.4125376,1,1200};
				begin2[] = {"\rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_s_pkt",1.4125376,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			
			autoFire=0;
			soundContinuous=0;
			soundBurst=0;
			minRange=2;
			minRangeProbab=0.01;
			midRange=200;
			midRangeProbab=0.01;
			maxRange=400;
			maxRangeProbab=0.01;
			showToPlayer=0;
		};
		class close: FullAuto
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.05;
			midRange=30;
			midRangeProbab=0.7;
			maxRange=50;
			maxRangeProbab=0.04;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.05;
			midRange=150;
			midRangeProbab=0.7;
			maxRange=300;
			maxRangeProbab=0.04;
		};
		class medium: close
		{
			burst=5;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.05;
			midRange=400;
			midRangeProbab=0.60000002;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class far_optic1: close
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=9;
			aiRateOfFireDistance=900;
			minRange=350;
			minRangeProbab=0.04;
			midRange=550;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.01;
		};
		class far_optic2: far_optic1
		{
			requiredOpticType=2;
			autoFire=0;
			burst=1;
			minRange=400;
			minRangeProbab=0.05;
			midRange=800;
			midRangeProbab=0.5;
			maxRange=1000;
			maxRangeProbab=0.01;
		};
		aiDispersionCoefY=23;
		aiDispersionCoefX=19;
	};

	class rhs_weap_pkp: rhs_pkp_base
	{
		baseWeapon="rhs_weap_pkp";
		inertia = 0.8;
		dexterity = 1.2;
		scope = 2;
		Author_Macro
		displayName = "$STR_RHS_PKP_NAME";
		picture = "\rhsafrf\addons\rhs_weapons\icons\pkp_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons\pkp_bis\PKP.p3d";

		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\pkp.rtm"};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 191.4;
		};
		weaponInfoType = "RscWeaponZeroing";
	};
	class rhs_weap_pkm: rhs_weap_pkp
	{
		baseWeapon="rhs_weap_pkm";
		scope=2;
		inertia = 0.85;
		dexterity = 1.0;
		displayName = $STR_RHS_WEAP_PKM;
		Author_Macro
		picture = "\rhsafrf\addons\rhs_weapons\icons\pkm_ca.paa";
		weaponInfoType = "RscWeaponZeroing";
		
		model = "\rhsafrf\addons\rhs_weapons\pkm\pkm.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\pkm.rtm"};
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 169;
			class MuzzleSlot {};
			class CowsSlot {};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
				//compatibleItems[] = {"rhs_bipod"};
			};
		};

		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class manual: FullAuto
		{
			reloadTime=0.092;
			dispersion=0.00093;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.3;
			midRange=5;
			midRangeProbab=0.7;
			maxRange=10;
			maxRangeProbab=0.04;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.05;
			midRange=20;
			midRangeProbab=0.7;
			maxRange=50;
			maxRangeProbab=0.04;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.05;
			midRange=150;
			midRangeProbab=0.7;
			maxRange=300;
			maxRangeProbab=0.04;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.05;
			midRange=300;
			midRangeProbab=0.7;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.05;
			midRange=500;
			midRangeProbab=0.4;
			maxRange=650;
			maxRangeProbab=0.009;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.05;
			midRange=750;
			midRangeProbab=0.7;
			maxRange=900;
			maxRangeProbab=0.009;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};

	};
	class rhs_weap_pkp_pkas : rhs_weap_pkp
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
			slot = "CowsSlot";
			item = "rhs_acc_pkas";
			};
		};
	};
	class rhs_weap_pkp_1p63 : rhs_weap_pkp
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
			slot = "CowsSlot";
			item = "rhs_acc_1p63";
			};
		};
	};
	class rhs_weap_pkp_1p29 : rhs_weap_pkp
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
			slot = "CowsSlot";
			item = "rhs_acc_1p29";
			};
		};
	};
	class rhs_weap_rpk74m: rhs_weap_pkp
	{
		baseWeapon="rhs_weap_rpk74m";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.7;
		dexterity = 1.25;
		scope=0;
		displayName = $STR_RHS_WEAP_RPK74M;
		picture = "\rhsafrf\addons\rhs_weapons\icons\rpk74_ca.paa";
		reloadAction = "RHS_GestureReloadRPK";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot {};
			class CowsSlot: rhs_russian_rifle_scopes_slot{};
			class PointerSlot {};
		};
		magazines[] =
		{
			"rhs_45Rnd_545x39_AK",
			"rhs_45Rnd_545x39_7N10_AK",
			"rhs_45Rnd_545x39_7N22_AK",
			"rhs_45Rnd_545x39_AK_green",

			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_AK_green"
		};
		modes[]=
		{
			"single",
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		aidispersioncoefx = 15;
		aidispersioncoefy = 16;
		class Single: Mode_SemiAuto
		{
			reloadTime=0.092;
			dispersion=0.00123;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";

	 		sounds[] = {StandardSound};
	 		class BaseSoundModeType
	 		{
				weaponSoundEffect="DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
	 		class StandardSound: BaseSoundModeType
	 		{
				begin1[]={"rhsafrf\addons\rhs_sounds\rpk\rpk_1",2.4,1,1300};
				begin2[]={"rhsafrf\addons\rhs_sounds\rpk\rpk_2",2.4,1,1300};
				soundBegin[]={"begin1",0.5,"begin2",0.5};
			};

			autoFire=0;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.01;
			midRange=0;
			midRangeProbab=0.01;
			maxRange=0;
			maxRangeProbab=0.01;
			showToPlayer=1;
		};
		class Manual: Mode_FullAuto
		{
			reloadTime=0.092;
			dispersion=0.00123;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
	 		sounds[] = {StandardSound};
	 		class BaseSoundModeType
	 		{
				weaponSoundEffect="DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
	 		class StandardSound: BaseSoundModeType
	 		{
				begin1[]={"rhsafrf\addons\rhs_sounds\rpk\rpk_1",2.4,1,1300};
				begin2[]={"rhsafrf\addons\rhs_sounds\rpk\rpk_2",2.4,1,1300};
				soundBegin[]={"begin1",0.5,"begin2",0.5};
			};
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.3;
			midRange=5;
			midRangeProbab=0.7;
			maxRange=10;
			maxRangeProbab=0.04;
			showToPlayer=1;
		};
		class close: Manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.05;
			midRange=20;
			midRangeProbab=0.7;
			maxRange=50;
			maxRangeProbab=0.04;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.05;
			midRange=150;
			midRangeProbab=0.7;
			maxRange=300;
			maxRangeProbab=0.04;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.05;
			midRange=300;
			midRangeProbab=0.7;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.05;
			midRange=500;
			midRangeProbab=0.4;
			maxRange=650;
			maxRangeProbab=0.009;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.05;
			midRange=750;
			midRangeProbab=0.7;
			maxRange=900;
			maxRangeProbab=0.009;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
	};
	class rhs_weap_rpk74: rhs_weap_rpk74m
	{
		baseWeapon="rhs_weap_rpk74";
		scope=0;
		dexterity = 1.3;
		displayName = $STR_RHS_WEAP_RPK74;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 103.4;
			class MuzzleSlot {};
			class CowsSlot {};
			class PointerSlot {};
		};
	};