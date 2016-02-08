/*
flashbang effects

in:
_u - units
_t - type of effect
_s - strengh of effect

a: reyhard
*/

private ["_u","_t","_s","_pp"];

_u = _this select 0;
_t = _this select 1;
_s = _this select 2;

switch(_t)do
{
	//flash + sound
	case 0:
	{
		playsound ["RHS_Flashbang",true];
		sleep 0.01;

		_pp = ppEffectCreate ["ColorCorrections", 3000];
		_pp ppEffectAdjust [1, 1, -0.01, [1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]];
		_pp ppEffectCommit 0.1;
		_pp ppEffectForceInNVG true;
		_pp ppEffectEnable true;

		setAperture 0.02;

		player setFatigue (1*_s);
		0.1 fadeSound 0.01;

		sleep (9*_s);

		_pp ppEffectAdjust[ 1, 1, 0, [0, 0, 0, -0.2],[0.03, -0.25, 0.3, 0.7],[0.2, -0.23, 0.11, 0]];
		_pp ppEffectCommit (10+_s);
		setAperture 0.32;

		sleep (9*_s);

		25 fadeSound 1;
		setAperture -1;

		sleep (9*_s);
		_pp ppEffectEnable false;
		ppEffectDestroy _pp;
	};

	//sound
	case 1:
	{
		playsound ["RHS_Flashbang",true];
		sleep 0.01;

		_pp = ppEffectCreate ["DynamicBlur", 500];
		_pp ppEffectForceInNVG true;
		_pp ppEffectEnable true;
		_pp ppEffectAdjust [1];
		_pp ppEffectCommit 0.1;

		player setFatigue (1*_s);
		0.1 fadeSound 0.1;

		sleep (9*_s);

		_pp ppEffectAdjust [0];
		_pp ppEffectCommit 10;

		sleep (9*_s);

		25 fadeSound 1;

		sleep (9*_s);

		_pp ppEffectEnable false;
		ppEffectDestroy _pp;
	};
	//ai heavy
	case 2:
	{
		private["_aim","_spot"];
		_aim = _u skill "aimingAccuracy";
		_spot = _u skill "spotDistance";
		_spotTime = _u skill "spotTime";

		if(local _u)then
		{
			_u setskill ["aimingAccuracy",0];
			_u setskill ["spotDistance",0.1*(1-_s)];
			_u setskill ["spotTime",0.1*(1-_s)];
			_u setFatigue (1*_s);
		};
		_u playmove "RHS_flashbang_cover";

		sleep (12*_s);

		if(alive _u)then
		{
			if(local _u)then
			{
				_u setskill ["aimingAccuracy",_aim];
				_u setskill ["spotDistance",_spot];
				_u setskill ["spotTime",_spotTime];
			};
		};
	};
	//ai - med
	case 3:
	{
		private["_aim","_spot"];
		_aim = _u skill "aimingAccuracy";
		_spot = _u skill "spotDistance";
		_spotTime = _u skill "spotTime";

		if(local _u)then
		{
			_u setskill ["aimingAccuracy",0];
			_u setskill ["spotDistance",0.3*(1-_s)];
			_u setskill ["spotTime",0.3*(1-_s)];
			_u setFatigue (1*_s);
		};
		//_u playmove "RHS_flashbang_cover"

		sleep (12*_s);

		if(alive _u)then
		{
			if(local _u)then
			{
				_u setskill ["aimingAccuracy",_aim];
				_u setskill ["spotDistance",_spot];
				_u setskill ["spotTime",_spotTime];
			};
		};
	};
	default {};
};