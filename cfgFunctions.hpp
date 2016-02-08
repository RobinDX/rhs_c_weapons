
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class rgno_impact
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_rgno_impact.sqf";
				description = "RGN/O Impact Grenade";
			};

			class virtualAmmoBoxRus
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\virtualAmmoBox.sqf";
				description = "[nameOfObject,type (type number: 0 - all gear, 1 - ammo only)] call rhs_fnc_virtualAmmoBoxRus, make a object virtual ammo box with russian gear inside";
			};

			class flashbang
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_flashbang.sqf";
				description = "flashbang handler";
			};
			class flashbang_effect
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_flashbang_effect.sqf";
				description = "flashbang effect";
			};
			class disposable
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_disposable.sqf";
				description = "Disposable launchers handler";
			};
			class disposable_load
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_disposable_load.sqf";
				description = "Loading disposable launchers for players";
			};
			class sight_kobra
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_abrakadabra.sqf";
				description = "Recticle changing function for Kobra sight";
			};
			class fold_AK
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_fold.sqf";
				description = "Fold/unfold AK";
			};
			class rsp30
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_rsp30.sqf";
				description = "Fold/unfold AK";
			};
			class rsp30_fired
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_rsp30_fired.sqf";
				description = "Fold/unfold AK";
			};
			class sight_pso1
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_sight_pso1.sqf";
				description = "PSO-1/PGO-7 Illumination handler";
			};
			class sight_1p29
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_sight_1p29.sqf";
				description = "1p29 Illumination handler";
			};
			class acc_npz
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_npz.sqf";
				description = "NPZ mounting handler";
			};
			class acc_npz_handler
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_npz_dismount.sqf";
				description = "NPZ dismounting handler";
			};
			class tr8_handler
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_tr8_handler.sqf";
				description = "TR-8 handler";
			};
			class pdu4_rf
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\rhs_pdu4_rf.sqf";
				description = "PDU-4 LRF handler";
			};
			class arsenal
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\arsenal\rhs_arsenal.sqf";
				description = "RHS custom arsenal script";
			};
			class addVirtualItemCargo
			{
				file = "\rhsafrf\addons\rhs_c_weapons\scripts\arsenal\rhs_addVirtualItemCargo.sqf";
				description = "RHS custom arsenal script";
			};
		};
	};
};

class CfgRemoteExec
{
	class Functions
	{
		mode = 2;
		jip = 1;
		class RHS_fnc_rgno_impact
		{
			allowedTargets = 0;
		};
		class RHS_fnc_flashbang_effect
		{
			allowedTargets = 0;
		};
	};
};

class CfgSounds
{
	class RHS_Flashbang
	{
		name="Flashbang explosion";
		sound[]=
		{
			"\rhsafrf\addons\rhs_weapons\sounds\flashbang.ogg",
			1,
			1
		};
		titles[]={};
	};
};

class CfgMovesBasic
{
	class Default;
     	class DefaultDie;
	class ManActions
	{
		RHS_flashbang_cover="RHS_flashbang_cover";
    	RHS_GestureReloadRPG7 = "RHS_GestureReloadRPG7";  
		RHS_GestureReloadAK = "RHS_GestureReloadAK";    
		RHS_GestureReloadGP30= "RHS_GestureReloadGP30";
		RHS_GestureReloadRPK= "RHS_GestureReloadRPK";
	};
   	class Actions
   	{
		class NoActions: ManActions
		{
         	     RHS_GestureReloadRPG7[] = {"RHS_GestureReloadRPG7", "Gesture"};
		RHS_GestureReloadAK[] = {"RHS_GestureReloadAK", "Gesture"};
		RHS_GestureReloadGP30[] = {"RHS_GestureReloadGP30", "Gesture"};
		RHS_GestureReloadRPK[] = {"RHS_GestureReloadRPK", "Gesture"};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
	{
		RHS_GestureReloadAK[] = {"RHS_GestureReloadAK_Prone", "Gesture"};
		RHS_GestureReloadGP30[] = {"RHS_GestureReloadGP30_Prone", "Gesture"};
		RHS_GestureReloadRPK[] = {"RHS_GestureReloadRPK_Prone", "Gesture"};
	};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
		RHS_GestureReloadAK[] = {"RHS_GestureReloadAK_Context", "Gesture"};
		RHS_GestureReloadGP30[] = {"RHS_GestureReloadGP30_Context", "Gesture"};
		RHS_GestureReloadRPK[] = {"RHS_GestureReloadRPK_Context", "Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
		RHS_GestureReloadAK[] = {"RHS_GestureReloadAK_Context", "Gesture"};
		RHS_GestureReloadGP30[] = {"RHS_GestureReloadGP30_Context", "Gesture"};
		RHS_GestureReloadRPK[] = {"RHS_GestureReloadRPK_Context", "Gesture"};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
		RHS_GestureReloadAK[] = {"RHS_GestureReloadAK", "Gesture"};
		RHS_GestureReloadGP30[] = {"RHS_GestureReloadGP30", "Gesture"};
		RHS_GestureReloadRPK[] = {"RHS_GestureReloadRPK", "Gesture"};
		};
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class RHS_flashbang_cover: Default
		{
			file = "\a3\anims_f\data\Anim\sdr\cts\cts_CrouchingCoveringRifle01";
			speed = 0.058571;
			looped = 0;
			headBobStrength = -1;
			actions = "RifleKneelActions";
			disableWeapons = 1;
			weaponIK = 1;
			canPullTrigger = 0;
			canReload = 0;
			rightHandIKCurve[] = {0,1,0.01754,0,0.97453,0,1,1};
			leftHandIKCurve[] = {0,1,0.01754,0,0.97453,0,1,1};
			connectFrom[]={"AmovPknlMstpSrasWrflDnon",0.02};
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon",0.2};
			InterpolateTo[] = {"Unconscious",0.1};
		};
	};
};

class CfgGesturesMale
{
  	class Default;
     	class States
     	{
           	class RHS_GestureReloadRPG7: Default
           	{
              		file="rhsafrf\addons\rhs_c_weapons\anims\RPG7reload.rtm";
               		looped = 0;
               		speed = 0.17;
               		mask = "launcher";
               		headBobStrength = 0.2;
               		headBobMode = 2;
               		rightHandIKBeg = 1;
               		rightHandIKEnd = 1;
               		leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
           	};
			class RHS_GestureReloadAK:Default
		  {
             file="\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_ak_onehanded.rtm";
			 looped = 0;
			 speed = 0.23076923076923076923076923076923;
			 mask = "handsWeapon";
			 // mask="empty";
			 headBobStrength = 0.200000;
			 headBobMode = 2;
			 leftHandIKBeg = false;
			 leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
			 leftHandIKEnd = true;
			 rightHandIKBeg = true;
			 rightHandIKCurve[] = { 1 };
			 rightHandIKEnd = true;
         };
		 class RHS_GestureReloadAK_Prone:Default
		  {
             file="\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_ak_prone.rtm";
             speed=0.2;
			looped = false;
			mask = "handsWeapon";
			headBobStrength=0.02;
             headBobMode=2;
			rightHandIKCurve[] = {0.6533,1,0.66666667,0,0.793333,0,0.88,1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {0, 1, 0.03125, 0, 0.586666, 0, 0.64, 1};
         };
		 class RHS_GestureReloadAK_Context: RHS_GestureReloadAK
                {
                mask = "handsWeapon_context";
                };
		class RHS_GestureReloadRPK:Default
		  {
             file="\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_rpk_standing.rtm";
             speed=0.1875;
			looped = false;
			mask = "handsWeapon";
			headBobStrength=0.2;
             headBobMode=2;
			rightHandIKCurve[] = {0.6125,1,0.675,0,0.85625,0,0.90625,1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {0, 1, 0.03125, 0, 0.60625, 0, 0.625, 1};
         };
		 
		 class RHS_GestureReloadRPK_Prone:Default
		  {
             file="\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_rpk_prone.rtm";
             speed=0.1875;
			looped = false;
			mask = "handsWeapon";
			headBobStrength=0.02;
             headBobMode=2;
			rightHandIKCurve[] = {0.6125,1,0.675,0,0.85625,0,0.90625,1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {0, 1, 0.03125, 0, 0.60625, 0, 0.625, 1};
         };
		 class RHS_GestureReloadRPK_Context: RHS_GestureReloadRPK
                {
                mask = "handsWeapon_context";
                };

		class RHS_GestureReloadGP30: Default
		 {
		              file="\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_gp30.rtm";
             speed=0.42863266180882983283326189455637;
			looped = false;
                mask = "handsWeapon_context";
			headBobStrength=0.1;
             headBobMode=2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = {0, 1, 0.075, 0, 0.65, 0, 0.74, 1};
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = true;
		 };
		 class RHS_GestureReloadGP30_Prone: Default
		 {
		     file="\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_gp30_prone.rtm";
             speed=0.42863266180882983283326189455637;
			looped = false;
                mask = "handsWeapon_context";
			headBobStrength=0.1;
             headBobMode=2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = {0, 1, 0.075, 0, 0.65, 0, 0.74, 1};
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = true;
		 };
		 
		 		 		class RHS_GestureReloadGP30_Context: RHS_GestureReloadGP30
                {
                mask = "handsWeapon_context";
                };

     	};
};