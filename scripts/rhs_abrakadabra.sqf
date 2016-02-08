/*
kobra recticle changing
a: reyhard
*/

[] spawn
{
	private["_a","_i"];

	_a=["rhs_acc_ekp1","rhs_acc_ekp1b","rhs_acc_ekp1c","rhs_acc_ekp1d"];



	rhs_key_opt_int_GLB=(profileNamespace getVariable ["rhs_key_opt_int","opticsMode"]);
	//looking for index number for 1st time
	//useful when player change optic during game
	_p=(call rhs_fnc_findPlayer);
	{
		_i= primaryWeaponItems _p find _x;
		if(_i >=0)exitWith{
			_i = _a find ((primaryWeaponItems _p) select _i);
		};
	}foreach _a;

	while{(_a select _i) in primaryWeaponItems _p}do
	{
		_p=(call rhs_fnc_findPlayer);
	    if(inputAction rhs_key_opt_int_GLB > 0)then
	    {
	        waitUntil {inputAction rhs_key_opt_int_GLB == 0};
	        if(_i==3)then{_i=0}else{_i=_i+1};
	        _p addPrimaryWeaponItem (_a select _i);
	    };
	    sleep 0.01;
	};
};
