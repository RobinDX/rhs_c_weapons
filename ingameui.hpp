

class RscEdit;
class RscOpticsValue;
class RscOpticsText;
class RscIGUIText;
class RscIGUIValue;
class RscText;
class RscPicture;
class HScrollbar;
class VScrollbar;

class RscControlsGroup;


class CfgScriptPaths
{
	RHS_Arsenal="\rhsafrf\addons\rhs_c_weapons\scripts\arsenal\";
};
class RscDisplayArsenal;
class RHS_RscDisplayArsenal: RscDisplayArsenal {
	idd = -1;
	enableSimulation = 1;
	scriptName = "RHS_RscDisplayArsenal";	
	scriptPath = "RHS_Arsenal";
        onLoad = "[""onLoad"",_this,""RHS_RscDisplayArsenal"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
        onUnload = "[""onUnload"",_this,""RHS_RscDisplayArsenal"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
};

class RscInGameUI
{
	class RscUnitInfo;

	class RscWeaponZeroing: RscUnitInfo
	{
		class WeaponInfoControlsGroupLeft;
	};
	class rhs_rscOptics_kobra: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_kobra";

	};
	class rhs_rscOptics_ak74: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_fold_AK";

	};
	class rhs_rscOptics_ak74_camo: rhs_rscOptics_ak74
	{

	};
	class rhs_rscOptics_ak74_desert: rhs_rscOptics_ak74
	{
	};
	class rhs_rscOptics_ak74_plummag: rhs_rscOptics_ak74
	{
	};

	class rhs_rscOptics_ak74_npz: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_acc_npz_handler";

	};
	class rhs_rscOptics_ak74_camo_npz: rhs_rscOptics_ak74_npz
	{
	};
	class rhs_rscOptics_ak74_desert_npz: rhs_rscOptics_ak74_npz
	{
	};
	class rhs_rscOptics_ak74_plummag_npz: rhs_rscOptics_ak74_npz
	{
	};
	class rhs_rscOptics_ak74_2mag_npz: rhs_rscOptics_ak74_npz
	{
	};
	class rhs_rscOptics_ak74_2mag_camo_npz: rhs_rscOptics_ak74_npz
	{
	};
	class rhs_rscOptics_ak74_gp25_npz: rhs_rscOptics_ak74_npz
	{
	};
	class rhs_rscOptics_ak103_npz: rhs_rscOptics_ak74_npz
	{
	};
	class rhs_rscOptics_svdp_npz: rhs_rscOptics_ak74_npz
	{
	};
	class rhs_rscOptics_svdp_wd_npz: rhs_rscOptics_ak74_npz
	{
	};
	class rhs_rscOptics_svds_npz: rhs_rscOptics_ak74_npz
	{
	};


	class rhs_rscOptics_disposable: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_disposable_load";

	};
	class rhs_rscOptics_acc_npz: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_acc_npz";

	};
	class rhs_rscOptics_rsp30: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_rsp30";

		class WeaponInfoControlsGroupLeft: WeaponInfoControlsGroupLeft
		{
			class controls {
				class CA_AmmoCount: RscText
				{
					idc = 184;
					style = 1;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					x = "0";
					y = "0";
					w = "0";
					h = "0";
					sizeEx = "0";
				};
				class CA_MagCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					idc = 185;
					x = "0";
					y = "0";
					w = "0";
					h = "0";
					sizeEx = "0";
				};
			};
		};
	};


	class rhs_rscOptics_acc_pso1: RscWeaponZeroing
	{
		idd = 300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0, 'pso1'] call RHS_fnc_sight_pso1;";
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,0,0,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,0,0,0};
				height = 0.001;
			};
			class Controls
			{
//  (uiNamespace getVariable "rhs_pso1_ctrl" displayCtrl 1) ctrlSetPosition [4.41 *   (0.01875 *    Safezoneh),-2.15*   (0.025 *       SafezoneH),44.5 *   (0.01875 * SafezoneH),44.5 *   (0.025 * SafezoneH)];(uiNamespace    getVariable "rhs_pso1_ctrl" displayCtrl       1) ctrlCommit 0
				class RHS_Illumination: RscPicture
				{
					idc=1;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.99,0.6,0.16,0};
					shadow=0;
					text="rhsafrf\addons\rhs_weapons\acc\scopes\optics\data\rhs_pso1_optic_ilum_ca.paa";
					x =4.41 *   (0.01875 * Safezoneh);
					y =-2.15 *   (0.025 * SafezoneH);
					w="44.5 *   (0.01875 * SafezoneH)";
					h="44.5 *   (0.025 * SafezoneH)";
				};
			};
		};
	};

	class rhs_rscOptics_acc_pso11: rhs_rscOptics_acc_pso1
	{
		idd = 300;
		class CA_IGUI_elements_group: CA_IGUI_elements_group
		{
			class Controls: Controls
			{
				class RHS_Illumination: RHS_Illumination
				{
					text="rhsafrf\addons\rhs_weapons\acc\scopes\optics\data\rhs_pso1m21_optic_ilum_ca.paa";
				};
			};
		};
	};

	class rhs_rscOptics_acc_pgo7: RscWeaponZeroing
	{
		idd = 300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0, 'pgo7'] call RHS_fnc_sight_pso1;";

		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,0,0,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,0,0,0};
				height = 0.001;
			};
			class Controls
			{
//(uiNamespace getVariable "rhs_pgo7_ctrl" displayCtrl 1) ctrlSetPosition [13.69 *   (0.01875 *    Safezoneh),7.05*   (0.025 *       SafezoneH),26 *   (0.01875 * SafezoneH),26 *   (0.025 * SafezoneH)];(uiNamespace    getVariable "rhs_pso1_ctrl" displayCtrl       1) ctrlCommit 0
				class RHS_Illumination: RscPicture
				{
					idc=1;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.99,0.6,0.16,0};
					shadow=0;
					text="rhsafrf\addons\rhs_weapons\acc\scopes\optics\data\rhs_pgo7_optic_ilum_ca.paa";
					x =13.69 *   (0.01875 * Safezoneh);
					y =7.05 *   (0.025 * SafezoneH);
					w="26 *   (0.01875 * SafezoneH)";
					h="26 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
	class rhs_rscOptics_acc_1p29: RscWeaponZeroing
	{
		idd = 300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_1p29;";
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,0,0,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,0,0,0};
				height = 0.001;
			};
			class Controls
			{
//  (uiNamespace getVariable "rhs_1p29_ctrl" displayCtrl 1) ctrlSetPosition [-3.54 *   (0.01875 *    Safezoneh),-9.85*   (0.025 *          SafezoneH),60.5 *   (0.01875 * SafezoneH),60.5 *   (0.025 * SafezoneH)];(uiNamespace    getVariable "rhs_1p29_ctrl"    displayCtrl       1) ctrlCommit 0
				class RHS_Illumination: RscPicture
				{
					idc=1;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.44,0.98,0.21,1};
					shadow=0;
					text="rhsafrf\addons\rhs_weapons\acc\scopes\optics\data\rhs_1p29_optic_ilum_ca.paa";
					x =-3.54 *   (0.01875 * Safezoneh);
					y =-9.85 *   (0.025 * SafezoneH);
					w="60.5 *   (0.01875 * SafezoneH)";
					h="60.5 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
	
	class rhs_rscOptics_acc_1p78: RscWeaponZeroing
	{
		idd = 300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_1p29;";
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,0,0,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,0,0,0};
				height = 0.001;
			};
			class Controls
			{
//  (uiNamespace getVariable "rhs_1p29_ctrl" displayCtrl 1) ctrlSetPosition [-3.54 *   (0.01875 *    Safezoneh),-9.85*   (0.025 *          SafezoneH),60.5 *   (0.01875 * SafezoneH),60.5 *   (0.025 * SafezoneH)];(uiNamespace    getVariable "rhs_1p29_ctrl"    displayCtrl       1) ctrlCommit 0
				class RHS_Illumination: RscPicture
				{
					idc=1;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.44,0.98,0.21,1};
					shadow=0;
					text="rhsafrf\addons\rhs_weapons2\optics\data\rhs_1p78_optic_illum_ca.paa";
					x =-3.51 *   (0.01875 * Safezoneh);
					y =-10.14 *   (0.025 * SafezoneH);
					w="60.5 *   (0.01875 * SafezoneH)";
					h="60.5 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
	class rhs_tr8_pip_handler: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,8,'tr8']  call RHS_fnc_tr8_handler";

	};
	
	class rhs_gui_optic_pdu4_rangefinder: RscUnitInfo
	{
		idd = 300;

		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_pdu4_rf";

		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					shadow = 0;
					colorText[] = {0.94,0.26,0.28,0.9};
					font="rhs_digital_font";
					sizeEx = "0.049*SafezoneH";
					x =3 *   (0.01875 * Safezoneh);
					y =27.45 *   (0.025 * SafezoneH);
					w="0";
					h="0";
				};
				class RHS_Distance: CA_Distance
				{
					idc = 4;
					text="";
					w="12.9 *   (0.01875 * SafezoneH)";
					h="12.9 *   (0.025 * SafezoneH)";
					
				};
				
				class RHS_Laser_On: CA_Distance
				{
					idc = 6;
					text="";
					colorText[] = {0.28,0.94,0.28,0.9};
					w="12.9 *   (0.01875 * SafezoneH)";
					h="12.9 *   (0.025 * SafezoneH)";
					x =29 *   (0.01875 * Safezoneh);
					y =27.45 *   (0.025 * SafezoneH);
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 1;
					shadow = 0;
					colorText[] = {0.94,0.26,0.28,0.9};
					font="rhs_digital_font";
					sizeEx = "0.049*SafezoneH";
					text = "000";
					x = "15 * (0.01875 * SafezoneH)";
					y = "0.01875 * SafezoneH";
					w = "0";
					h = "0";
				};
				class RHS_Heading: CA_Heading
				{
					idc = 5;
					text="";
					w="12.9 * (0.01875 * SafezoneH)";
					h="5 * (0.025 * SafezoneH)";
				};
			};
		};

	};

};
