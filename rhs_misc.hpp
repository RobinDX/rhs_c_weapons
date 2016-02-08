class Binocular;

class rhs_tr8_periscope: Binocular
{
	dlc = "RHS_AFRF";

	Author_Macro
	scope = 2;

	model = "\rhsafrf\addons\rhs_weapons2\misc\tr8\rhs_tr8_periscope.p3d";
	modelOptics = "\rhsafrf\addons\rhs_weapons2\misc\tr8\rhs_tr8_reticle.p3d";
	picture = "\rhsafrf\addons\rhs_weapons2\icons\rhs_tr8_inventory_ca.paa";
	//handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\tr8_holdinganim.rtm"};

	displayName = $STR_RHS_MSIC_TR8;
	descriptionUse = $STR_A3_cfgWeapons_Default_Binocular1;

	opticsZoomMin = 0.25/8;
    opticsZoomMax = 0.25;
    //opticsZoomInit = 0.35/4;
    //obviously not working with simulation = "binocular"
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
	class Library
	{
		libTextDesc = "$STR_LIB_BINOCULAR";
	};
	descriptionShort = "$STR_DSS_BINOCULAR";
	class WeaponSlotsInfo
	{
		mass=19.36;
	};
};
class rhs_tr8_periscope_pip: rhs_tr8_periscope
{
	displayName = "TR-8 (PIP)";
	weaponInfoType = "rhs_tr8_pip_handler";
	modelOptics = "\rhsafrf\addons\rhs_weapons2\misc\tr8\rhs_tr8_reticle_pip.p3d";
};

class Rangefinder;

class rhs_pdu4: Rangefinder
{
	dlc = "RHS_AFRF";

	author = "Red Hammer Studios";
	_generalMacro = "rhs_pdu4";
	scope = 2;
	displayName = "$STR_RHS_PDU4";
	class Library
	{
		libTextDesc = "$STR_A3_cfgWeapons_Rangefinder_Library0";
	};
	descriptionShort = "$STR_RHS_PDU4";
	model = "\rhsafrf\addons\rhs_weapons2\binocs\rhs_pdu4.p3d";
	modelOptics = "\rhsafrf\addons\rhs_weapons2\binocs\rhs_pdu4_reticle.p3d";
	picture = "\rhsafrf\addons\rhs_weapons2\icons\rhs_pdu4_inventory_ca.paa";
	opticsZoomMin = 0.25/7;
	opticsZoomMax = 0.25/7;
	opticsZoomInit = 0.25/7;
	
	weaponInfoType = "rhs_gui_optic_pdu4_rangefinder";
	visionMode[] = {"Normal","NVG"};
	
	class WeaponSlotsInfo
	{
		mass = 20;
	};
};


