class CfgMovesBasic
{
     class DefaultDie;
	 
	 class ManActions
     {    
		RHS_GestureReloadAK = "RHS_GestureReloadAK";    
		RHS_GestureReloadGP30= "RHS_GestureReloadGP30";
		RHS_GestureReloadRPK= "RHS_GestureReloadRPK";
		
     };
	     class Actions {
        class NoActions : ManActions {
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
class CfgGesturesMale
{
    class Default;
	     class States
     {
		 class RHS_GestureReloadAK:Default
		  {
             file="\rhsafrf\addons\rhs_c_weapons\anims\gestures\reload_ak.rtm";
             speed=0.2;
			looped = false;
			mask = "handsWeapon";
			headBobStrength=0.2;
             headBobMode=2;
			rightHandIKCurve[] = {0.6533,1,0.66666667,0,0.793333,0,0.88,1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {0, 1, 0.03125, 0, 0.58666666, 0, 0.64, 1};
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