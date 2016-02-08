
class CfgCloudlets
{
	class Default;
	class RocketBackfireRPGNT;
	class RocketBacksmokeRPGNT;
	class RHS_RocketBackfireRPGNT: RocketBackfireRPGNT
	{       
              
	};
	class RHS_RocketBacksmokeRPGNT: RocketBacksmokeRPGNT
	{                
	};
	class RHS_backblast: RHS_RocketBackfireRPGNT
	{
		//beforeDestroyScript = "rhsafrf\addons\rhs_c_weapons\scripts\rhs_backblast.sqf";
		interval = 0.265;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angle = 0;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		lifeTime = 0.05;

		moveVelocity[] = {"directionX * 45","directionY * 45","directionZ * 45"};
		rotationVelocity = 0;
		animationSpeed[] = {1000};

		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 1;

		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0;

    		timerPeriod = 0.019;		
		onTimerScript = "rhsafrf\addons\rhs_c_weapons\scripts\rhs_backblast.sqf";
		position[] = {"positionX + directionLocalX * 1","positionY + directionLocalY * 1","positionZ + directionLocalZ * 1"};    

	};
	class RHS_Fired_RPG26: RHS_RocketBackfireRPGNT
	{	
		interval = 0.265;
		lifeTime = 0.3;
		lifeTimeVar = 0;
		beforeDestroyScript = "rhsafrf\addons\rhs_c_weapons\scripts\rhs_eh_rpg26.sqf";
	};
	class RHS_Fired_RPG18: RHS_Fired_RPG26
	{
		beforeDestroyScript = "rhsafrf\addons\rhs_c_weapons\scripts\rhs_eh_rpg18.sqf";
	};
	class RHS_Fired_Rshg2: RHS_Fired_RPG26
	{
		beforeDestroyScript = "rhsafrf\addons\rhs_c_weapons\scripts\rhs_eh_rshg2.sqf";
	};

	class ExploAmmoFlash;
	class RHS_Thermobaric_Explosion: ExploAmmoFlash
	{
		animationspeed[]={0,0,2,1,2};
		color[]=
		{
			{1,1,1,0},
			{1,1,1,0},
			{1,1,1,-2},
			{1,1,1,-2},
			{1,1,1,0}
		};
		interval=0.32;
		lifetime=0.32;
		lifetimevar=0.04;
		positionvar[]={0,0.1,0};
		rotationvelocity=0;
		rotationvelocityvar=1;
		rubbing=0.1;
		size[]={0,0,10,11,12};
		volume=10;
		weight=10;
	};
	class RHS_Thermobaric_Cloud: RHS_Thermobaric_Explosion
	{
		animationspeed[]={1};
		color[]=
		{
			{1,1,1,1},
			{1,1,1,0.9},
			{1,1,1,0.8},
			{1,1,1,0.4},
			{1,1,1,0}
		};
		particlefsframecount=8;
		particlefsindex=12;
		size[]={4,6,8,4,0};
		volume=8;
		weight=8;
	};

	class RHS_Thermobaric_Smoke: RHS_Thermobaric_Cloud
	{
		animationspeed[]={0,2.8,1.9,1.2,1.05,0.7,0.34999999,0.175};
		color[]=
		{
			{1,1,1,0},
			{1,1,1,0.4},
			{0.95,0.95,0.95,0.8},
			{0.9,0.9,0.9,0.6},
			{0.85,0.85,0.85,0.3},
			{0.8,0.8,0.8,0.15},
			{0.7,0.7,0.7,0.075},
			{0.6,0.6,0.6,0}
		};
		interval=0.95999998;
		lifetime=0.95999998;
		lifetimevar=0.02;
		particlefsframecount=48;
		particlefsindex=7;
		particlefsloop=1;
		particlefsntieth=16;
		size[]={0,0,9,10,11,12,13,14};
		volume=14;
	};
	class RHS_flashbang_10: Default
	{
		interval = 0.265;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angle = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		lifeTime = 0.05;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 1;

		timerPeriod = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "rhsafrf\addons\rhs_c_weapons\scripts\rhs_flashbang_10m.sqf";

		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0;
	};
	class RHS_flashbang_15: RHS_flashbang_10
	{
		beforeDestroyScript = "rhsafrf\addons\rhs_c_weapons\scripts\rhs_flashbang_15m.sqf";
	};
	class RHS_flashbang_20: RHS_flashbang_10
	{
		beforeDestroyScript = "rhsafrf\addons\rhs_c_weapons\scripts\rhs_flashbang_20m.sqf";
	};
	class RHS_flashbang_smoke: Default
	{
		circleVelocity[] = {0,0,0};
		moveVelocity[] = {0,0,1};
		size[] = {0.5,1};
		color[] = {{ 0.1,0.1,0.1,0.8 },{ 0.25,0.25,0.25,0.5 },{ 0.5,0.5,0.5,0 },{ 0.9,1,0.83,0 }};
		animationSpeed[] = {0.02};
		positionVar[] = {1.2,0.6,1.2};
		MoveVelocityVar[] = {0,0,1};
		colorVar[] = {0,0,0,0.1};
		interval = 0.01;
		circleRadius = 0;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.15;
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		rotationVelocityVar = 0.1;
		sizeVar = 0.3;
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.02;
	};

	class RHS_HeatHaze : Default
	{
		interval = 0.07;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1.1;
		lifeTime = 2;
		moveVelocity[] = { "-0.001*directionX", "-0.001*directionY", "-0.001*directionZ" };
		rotationVelocity = 1;
		weight = 1.265;
		volume = 1;
		rubbing = 0.07;
		size[] = { 0.05, 0.12 };
		color[] = { { 0.06, 0.06, 0.06, 0.20 }, { 0.3, 0.3, 0.3, 0.17 }, { 0.3, 0.3, 0.3, 0.14 }, { 0.3, 0.3, 0.3, 0.11 }, { 0.3, 0.3, 0.3, 0.05 } };
		colorCoef[] = { 1, 1, 1, 1 };
		animationSpeed[] = { 2, 1 };
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.02;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.5;
		animationSpeedCoef = 1;
		position[] = { "positionX", "positionY", "positionZ" };
		lifeTimeVar = 0.5;
		positionVar[] = { 0, 0, 0 };
		MoveVelocityVar[] = { 0, 0, 0 };
		rotationVelocityVar = 5;
		sizeVar = 0.05;
		colorVar[] = { 0, 0, 0, 0 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RHS_HeatHaze1 : RHS_HeatHaze
	{
		interval = 0.006;
		lifeTime = 2;
		lifeTimeVar = 0.5;
		weight = 1.255;
		moveVelocity[] = { "-0.002*directionX", "-0.002*directionY", "-0.002*directionZ" };
		size[] = { 0.05, 0.12 };
		sizeVar = 0.2;
		color[] = { { 0.06, 0.06, 0.06, 0.23 }, { 0.3, 0.3, 0.3, 0.20 }, { 0.3, 0.3, 0.3, 0.17 }, { 0.3, 0.3, 0.3, 0.14 }, { 0.3, 0.3, 0.3, 0.05 } };
		randomDirectionIntensity = 0.03;
	};
	class RHS_RGNO_Effect : RHS_flashbang_10
	{
		color[] = { { 0, 0, 0, 0 } };
		size[] = { 0 };
		interval = 10;
		lifeTime = 0.0001;
		timerPeriod = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "rhsafrf\addons\rhs_c_weapons\scripts\rhs_rgno_effect.sqf";
	};
	class RHS_VOG25P_Effect : RHS_RGNO_Effect
	{
		beforeDestroyScript = "rhsafrf\addons\rhs_c_weapons\scripts\rhs_vog25p_effect.sqf";
	};

	// GDM40 smoke effects
	class ImpactSparksSabot1;
	class RHS_GDM40Sparks : ImpactSparksSabot1
	{
		interval = 0.0002;
		color[] = { { 1, 0.3, 0.1, -500 }, { 1, 0.3, 0.1, -500 } };
		colorCoef[] = { 1, 1, 1, 1 };
		emissiveColor[] = { { 250, 50, 25, 0 }, { 0, 0, 0, 0 } };
		lifeTime = 0.25;
		lifeTimeVar = 3;
		weight = 100;
		volume = 0.01;
		rubbing = 0.05;
		size[] = { 0.15, 0.075, 0 };
		sizeVar = 0.5;

		moveVelocity[] = { 1, 1, 1 };
		moveVelocityVar[] = { 25, 25, 25 };

		bounceOnSurface = 0.05;
		bounceOnSurfaceVar = 0.1;
	};
	class RHS_GDM40SparksTrail : RHS_GDM40Sparks
	{
		interval = 0.0008;
		color[] = { { 1, 0.2, 0.1, -500 }, { 1, 0.2, 0.1, -500 } };
		emissiveColor[] = { { 5000, 750, 350, 0 }, { 0, 0, 0, 0 } };
		lifeTime = 0.5;
		lifeTimeVar = 0.5;
		weight = 100;
		volume = 0.01;
		rubbing = 0.01;
		size[] = { 0.15, 0.075, 0 };
		moveVelocity[] = { 1, 1, 1 };
		moveVelocityVar[] = { 25, 25, 25 };
		sizeVar = 0.1;
		bounceOnSurface = 0.5;
		particleEffects = "RHS_GDM40ParticleTrail";
	};
	class RHS_GDM40SparksTrailLight : RHS_GDM40SparksTrail
	{
		interval = 0.0010;
		color[] = { { 1, 0.2, 0.1, -500 }, { 1, 0.2, 0.1, -500 } };
		emissiveColor[] = { { 50000, 7500, 3500, 0 }, { 0, 0, 0, 0 } };
		size[] = { 0.15, 0.1, 0 };
		particleEffects = "RHS_GDM40ParticleTrailLight";
	};
	class RHS_GDM40TrailEffect : Default
	{
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		moveVelocity[] = { 0, 0, 0 };
		sizeCoef = 1;
		colorCoef[] = { 1, 1, 1, 1 };
		animationSpeed[] = { 1 };
		animationSpeedCoef = 1;
		onTimerScript = "";
		beforeDestroyScript = "";
		MoveVelocityVar[] = { 0, 0, 0 };

		interval = 0.160;

		emissiveColor[] = { { 0.5, 0.5, 0.5, 0 }, { 0, 0, 0, 0 } };
		colorVar[] = { 0, 0, 0, 0 };
		lifeTime = 3.5;
		lifeTimeVar = 0.25;

		weight = 1.277;
		volume = "0.985 + randomValue / 35";

		rubbing = 0.075;
		size[] = { 2.8125, 5.625, 11 };
		sizeVar = 0.5;
		color[] = { { 0.6, 0.6, 0.6, 0 }, { 0.5, 0.5, 0.5, 0.3 }, { 0.5, 0.5, 0.5, 0.4 }, { 0.5, 0.5, 0.5, 0.3 }, { 0.5, 0.5, 0.5, 0.2 }, { 0.8, 0.8, 0.8, 0.05 }, { 1, 1, 1, 0 } };
		rotationVelocity = 0.75;
		rotationVelocityVar = 0.5;
		randomDirectionPeriod = 1.25;
		randomDirectionIntensity = 0.25;
		randomDirectionIntensityVar = 0.1;

		position[] = { 0, 0, 0 };
		positionVar[] = { 0.1, 0.1, 0.1 };

		blockAIVisibility = 0;
	};
	class RHS_GDM40TrailEffect1 : RHS_GDM40TrailEffect
	{
		color[] = { { 0.6, 0.6, 0.6, 0 }, { 0.5, 0.5, 0.5, 0.3 }, { 0.5, 0.5, 0.5, 0.4 }, { 0.5, 0.5, 0.5, 0.3 }, { 0.5, 0.5, 0.5, 0.15 }, { 0.8, 0.8, 0.8, 0.02 }, { 1, 1, 1, 0 } };
		size[] = { 1.875, 3.75, 7 };
		interval = 0.080;
	};
	class RHS_GDM40TrailEffect2 : RHS_GDM40TrailEffect
	{
		color[] = { { 0.6, 0.6, 0.6, 0 }, { 0.5, 0.5, 0.5, 0.3 }, { 0.5, 0.5, 0.5, 0.35 }, { 0.5, 0.5, 0.5, 0.3 }, { 0.5, 0.5, 0.5, 0.15 }, { 0.8, 0.8, 0.8, 0.02 }, { 1, 1, 1, 0 } };
		size[] = { 1.25, 2.5, 5 };
		interval = 0.040;
	};
	class RHS_GDM40TrailEffectLong : RHS_GDM40TrailEffect
	{
		particleShape = "\A3\data_f\cl_basic.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		animationSpeed[] = { 0 };
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };

		color[] = { { 0.8, 0.8, 0.8, 0.005 }, { 0.6, 0.6, 0.6, 0.60 }, { 0.6, 0.6, 0.6, 0.55 }, { 0.6, 0.6, 0.6, 0.35 }, { 0.6, 0.6, 0.6, 0.2 }, { 0.8, 0.8, 0.8, 0.05 }, { 1.0, 1.0, 1.0, 0 } };
		emissiveColor[] = { { 0.5, 0.5, 0.5, 0 }, { 0, 0, 0, 0 } };
		lifeTime = 30;
		lifeTimeVar = 1;

		sizeVar = 0.5;
		size[] = { 4.5, 7.875, 14.625 };
		interval = 0.3;

		weight = 1.277;
		volume = "0.985 + randomValue / 35";

		rotationVelocity = 1.25;
		rotationVelocityVar = 1;
		randomDirectionPeriod = 1.5;
		randomDirectionIntensity = 0.15;

		bounceOnSurface = -1;
		bounceOnSurfaceVar = 0;
		blockAIVisibility = 1;
	};
	class RHS_GDM40TrailEffectLong1 : RHS_GDM40TrailEffectLong
	{
		color[] = { { 0.8, 0.8, 0.8, 0.005 }, { 0.6, 0.6, 0.6, 0.50 }, { 0.6, 0.6, 0.6, 0.45 }, { 0.6, 0.6, 0.6, 0.30 }, { 0.6, 0.6, 0.6, 0.15 }, { 0.8, 0.8, 0.8, 0.02 }, { 1.0, 1.0, 1.0, 0 } };
		size[] = { 3, 5.25, 9.75 };
		interval = 0.15;
	};
	class RHS_GDM40TrailEffectLong2 : RHS_GDM40TrailEffectLong
	{
		color[] = { { 0.8, 0.8, 0.8, 0.005 }, { 0.6, 0.6, 0.6, 0.45 }, { 0.6, 0.6, 0.6, 0.40 }, { 0.6, 0.6, 0.6, 0.25 }, { 0.6, 0.6, 0.6, 0.1 }, { 0.8, 0.8, 0.8, 0.02 }, { 1.0, 1.0, 1.0, 0 } };
		size[] = { 2.8125, 5.625, 7.875 };
		interval = 0.125;
	};
	class RHS_GDM40ExplosionCloud : RHS_GDM40TrailEffect
	{
		moveVelocity[] = { 0, 0, 0.1 };
		size[] = { 2.8125, 5.625, 7.875 };
		weight = 1.277;
		volume = "1.25 + randomValue / 30";
		randomDirectionPeriod = 1.5;
		randomDirectionIntensity = 0.25;
		interval = 0.02;
		lifeTime = 4;
		lifeTimeVar = 0.25;
		color[] = { { 0.03, 0.03, 0.03, 0.6 }, { 0.03, 0.03, 0.03, 0.5 }, { 0.03, 0.03, 0.03, 0.4 }, { 0.03, 0.03, 0.03, 0.2 }, { 0.03, 0.03, 0.03, 0.05 }, { 0.03, 0.03, 0.03, 0.01 }, { 1, 1, 1, 0 } };
	};

};

class CfgLights
{
	class RHS_FlareLight_yellow
	{
		color[] = {1,0.6,0,1};
		diffuse[] = {1,0.6,0};
		ambient[] = {0,0,0,0};
		brightness = 1.5;
		size = 1;
		intensity = 15690;
		drawLight = 0;
		blinking = 1;
		class Attenuation
		{
			start=0;
			constant=1;
			linear=0;
			quadratic=40;
		};
		position[] = {0,0.2,0};
	};
	class RHS_FlareLight_red: RHS_FlareLight_yellow
	{
		color[] = {1*50,0,0.025*50,1};
		//diffuse[] = {0.1,0,0.0025};
	};
	class RHS_FlareLight_green: RHS_FlareLight_yellow
	{
		color[] = {0.2*50,1*50,0,1};
		//diffuse[] = {0.02,0.1,0};
	};
	class RHS_flashbang_light
	{
		color[] = {11,11,9};
		ambient[] = {0.4,0.45,0.45};
		brightness = 1;
		intensity = 1090;
		diffuse[] = {0,0,0};
		position[] = {0,0,0};
		class Attenuation
		{
			start = 0.05;
			constant = 0;
			linear = 0;
			quadratic = 40;
			hardLimitStart = 2;
			hardLimitEnd = 4;
		};
	};
	class RHS_GDM40SparksLight
	{
		diffuse[] = { 0.937, 0.8, 0.7 };
		color[] = { 0.937, 0.8, 0.7 };
		ambient[] = { 0.937, 0.8, 0.7 };
		brightness = "10 + random 40";
		size = 1;
		intensity = 100;
		drawLight = 0;
		blinking = 1;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 1;
			hardLimitStart = 40;
			hardLimitEnd = 80;
		};
		position[] = { 0, 0, 0 };
	};
	class RHS_GDM40ExplosionLight
	{
		lifetime = 0.2;
		diffuse[] = { 0.937, 0.7, 0.6 };
		color[] = { 0.937, 0.7, 0.6 };
		ambient[] = { 0.937, 0.7, 0.6 };
		brightness = 1000;
		size = 1;
		intensity = 40000;
		drawLight = 0;
		blinking = 1;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 2.2;
			hardLimitStart = 500;
			hardLimitEnd = 1000;
		};
		position[] = { 0, 0, 0 };
	};
};

class RHS_GDM40ParticleTrail
{
	class RHS_GDM40TrailEffect
	{
		simulation = "particles";
		type = "RHS_GDM40TrailEffect";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = "0.45 + random 0.05";
		qualityLevel = 0;
	};
	class RHS_GDM40TrailEffect1 : RHS_GDM40TrailEffect
	{
		type = "RHS_GDM40TrailEffect1";
		qualityLevel = 1;
	};
	class RHS_GDM40TrailEffect2 : RHS_GDM40TrailEffect
	{
		type = "RHS_GDM40TrailEffect2";
		qualityLevel = 2;
	};
	class RHS_GDM40TrailEffectLong
	{
		simulation = "particles";
		type = "RHS_GDM40TrailEffectLong";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.45;
		qualityLevel = 0;
	};
	class RHS_GDM40TrailEffectLong1 : RHS_GDM40TrailEffectLong
	{
		type = "RHS_GDM40TrailEffectLong1";
		qualityLevel = 1;
	};
	class RHS_GDM40TrailEffectLong2 : RHS_GDM40TrailEffectLong
	{
		type = "RHS_GDM40TrailEffectLong2";
		qualityLevel = 2;
	};
};
class RHS_GDM40ParticleTrailLight : RHS_GDM40ParticleTrail
{
	class RHS_GDM40SparksLight
	{
		simulation = "light";
		type = "RHS_GDM40SparksLight";
		position[] = { 0, 0, 0 };
		intensity = 0.001;
		interval = 1;
		lifeTime = "0 + random 1.5";
		qualityLevel = 1;
	};
	class RHS_GDM40SparksLight2 : RHS_GDM40SparksLight
	{
		qualityLevel = 2;
	};
};

class RHS_GDM40ParticleLight
{
	class RHS_GDM40SparksLight
	{
		simulation = "light";
		type = "RHS_GDM40SparksLight";
		position[] = { 0, 0, 0 };
		intensity = 0.001;
		interval = 1;
		lifeTime = "0 + random 1.5";
	};
};

class RHS_GDM40Effect
{
	class ExplosionLight
	{
		simulation = "light";
		type = "RHS_GDM40ExplosionLight";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ExplosionSparks
	{
		simulation = "particles";
		type = "RHS_GDM40Sparks";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class ExplosionSparksTail
	{
		simulation = "particles";
		type = "RHS_GDM40SparksTrail";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ExplosionSparksTailLight
	{
		simulation = "particles";
		type = "RHS_GDM40SparksTrailLight";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ExplosionCloud
	{
		simulation = "particles";
		type = "RHS_GDM40ExplosionCloud";
		position[] = { 0, 0, 0.5 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class GrenadeExp1
	{
		simulation = "particles";
		type = "GrenadeExp";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
};

class RHS_RGNO_Impact
{
	class Effect
	{
		simulation = "particles";
		type = "RHS_RGNO_Effect";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
	};
};

class RHS_BarrelRefract
{
	class RHS_HeatHaze
	{
		simulation = "particles";
		type = "RHS_HeatHaze";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 3;
		qualityLevel = 2;
	};
};
class RHS_BarrelRefractHeavy
{
	class RHS_HeatHaze1
	{
		simulation = "particles";
		type = "RHS_HeatHaze1";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 4;
		qualityLevel = 2;
	};
};

class RHS_flashbang_10
{
	class Smoke1
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "RHS_flashbang_10";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
	class Smoke2: Smoke1 
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "RHS_flashbang_smoke";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
	class Light
	{
		position[] = {0,0,0};
		simulation = "light";
		type = "RHS_flashbang_light";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class RHS_flashbang_15: RHS_flashbang_10
{
	class Smoke1: Smoke1
	{
		type = "RHS_flashbang_15";
	};
};
class RHS_flashbang_20: RHS_flashbang_10
{
	class Smoke1: Smoke1
	{
		type = "RHS_flashbang_20";
	};
};

class RHS_vog25p_hit
{
	class Handler
	{
		type = "RHS_vog25p_effect";
		position[] = {0,0,0};
		simulation = "particles";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
};

class RHS_Thermobaric_Explosion
{
	class Cloud
	{
		intensity=8;
		interval=0.4;
		lifetime=0.4;
		position[]={0,0,0};
		simulation="particles";
		type="RHS_Thermobaric_Cloud";
	};
	class Explosion
	{
		intensity=12;
		interval=0.4;
		lifetime=0.4;
		position[]={0,0,0};
		simulation="particles";
		type="RHS_Thermobaric_Explosion";
	};
	class Explosion2: Explosion
	{
	};
	class Smoke
	{
		intensity=14;
		interval=0.95999998;
		lifetime=0.95999998;
		position[]={0,0,0};
		simulation="particles";
		type="RHS_Thermobaric_Smoke";
	};
	class Light
	{
		intensity=0.001;
		interval=1;
		lifetime=0.2;
		position[]={0,0,0};
		simulation="light";
		type="ExploLight";
	};
};

class RHS_Thermobaric_Crater
{
	class DustCircle
	{
		intensity=1;
		interval=1;
		lifetime=0.3;
		position[]={0,0,0};
		simulation="particles";
		type="CircleDustSmall";
	};
	class DustCircle2: DustCircle {};
};

class RHS_Thermobaric_Crater_Small
{
	class DustCircle
	{
		intensity=1;
		interval=1;
		lifetime=0.3;
		position[]={0,0,0};
		simulation="particles";
		type="CircleDustSmall";
	};
};

class RHS_BackEffectsRPG
{
	class RocketBackfire1
	{
		simulation = "particles";
		type = "RHS_RocketBackfireRPGNT";
		intensity = 1;
		interval = 0.1;
		lifeTime = 0.03;
	};
	class RocketBacksmoke2
	{
		simulation = "particles";
		type = "RHS_RocketBacksmokeRPGNT";
		intensity = 1;
		interval = 0.1;
		lifeTime = 0.1;
	};
	class RocketFrontsmoke
	{
		simulation = "particles";
		type = "RocketFrontsmokeRPGNT";
		intensity = 1;
		interval = 0.1;
		lifeTime = 0.2;
	};
	class Script
	{
		simulation = "particles";
		type = "RHS_Backblast";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class RHS_Fired_RPG18: RHS_BackEffectsRPG
{
	class Script: Script
	{
		type = "RHS_fired_RPG18";
	};
};
class RHS_Fired_RPG26: RHS_BackEffectsRPG
{
	class Script: Script
	{
		type = "RHS_fired_RPG26";
	};
};
class RHS_Fired_Rshg2: RHS_BackEffectsRPG
{
	class Script: Script
	{
		type = "RHS_fired_Rshg2";
	};
};


class RHS_SmokeShell
{
	class SmokeShellWhite
	{
		simulation = "particles";
		type = "SmokeShellWhiteSmall";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
	};
	class SmokeShellWhite2
	{
		simulation = "particles";
		type = "SmokeShellWhite2";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
	};
	class SmokeShellWhiteUW
	{
		simulation = "particles";
		type = "SmokeShellWhiteUW";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
	};
	class SmokeShellWhite2UW
	{
		simulation = "particles";
		type = "SmokeShellWhite2UW";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
	};
};

class RHS_SmokeShellLight_yellow
{
	class SmokeShellWhite
	{
		simulation = "particles";
		type = "SmokeShellWhite";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhite2
	{
		simulation = "particles";
		type = "SmokeShellWhite2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhiteUW
	{
		simulation = "particles";
		type = "SmokeShellWhiteUW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhite2UW
	{
		simulation = "particles";
		type = "SmokeShellWhite2UW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class Light1
	{
		simulation = "light";
		type = "RHS_FlareLight_yellow";
	};
};
class RHS_SmokeShellLight_green
{
	class SmokeShellWhite
	{
		simulation = "particles";
		type = "SmokeShellWhite";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhite2
	{
		simulation = "particles";
		type = "SmokeShellWhite2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhiteUW
	{
		simulation = "particles";
		type = "SmokeShellWhiteUW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhite2UW
	{
		simulation = "particles";
		type = "SmokeShellWhite2UW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class Light1
	{
		simulation = "light";
		type = "RHS_FlareLight_green";
	};
};

class RHS_SmokeShellLight_red
{
	class SmokeShellWhite
	{
		simulation = "particles";
		type = "SmokeShellWhite";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhite2
	{
		simulation = "particles";
		type = "SmokeShellWhite2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhiteUW
	{
		simulation = "particles";
		type = "SmokeShellWhiteUW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhite2UW
	{
		simulation = "particles";
		type = "SmokeShellWhite2UW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class Light1
	{
		simulation = "light";
		type = "RHS_FlareLight_red";
	};
};