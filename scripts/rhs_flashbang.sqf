/*
flashbang script - checking for effects
hooked to particles onDestruction event
in:
_p - position of explosion
_d - effective distance
out: none
a: reyhard
*/
private["_p","_u"];

_p = _this select 0;
_d = _this select 1;
_u = _p nearEntities ["CAManBase", _d];

{
	//check if alive
	if(alive _x)then
	{

		private ["_e", "_p2"];
		_e = eyePos _x;
		_p2 = [_p select 0,_p select 1,(_p select 2)+0.4];

		//check if there is line between units eyes and flashbang
		if (!lineIntersects [_e, ATLtoASL _p2,_x]) then
		{
			private ["_a","_s"];
			_a = [_x, _p] call BIS_fnc_relativeDirTo;
			//explosion strenght - more distance less power
			_s = (_d-(_x distance _p)*0.5)/_d;

			//action for player
			if (isPlayer _x) then
			{
				if (_a < 40 OR _a >310) then
				{
					//flash and whistle
					[_x,0,_s] remoteExec  ["rhs_fnc_flashbang_effect",_x];
				} else {
					//only whistle
					[_x,1,_s] remoteExec  ["rhs_fnc_flashbang_effect",_x];
				};
			}else{
			//action for AI
				if (_a < 40 OR _a >310) then
				{
					//flash and whistle
					[_x,2,_s] remoteExec  ["rhs_fnc_flashbang_effect",_x];
				} else {
					//only whistle
					[_x,3,_s] remoteExec  ["rhs_fnc_flashbang_effect",_x];
				};
			};
		};
	};
} foreach _u;