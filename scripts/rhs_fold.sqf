


_this spawn
{
	sleep 0.3;
	//player globalChat "inicjalizacja";
	if(not(isNil "rhs_fold_action"))exitWith{};
	rhs_fold_action=true;
	uiNameSpace setVariable ["RHS_AK74_Ctrl",_this select 0];

	private ["_t","_c","_a","_m","_wu","_wf","_p"];

	disableSerialization;
	_c = uiNamespace getVariable "RHS_AK74_Ctrl";
	_z = (_c displayCtrl 168);

	rhs_key_wpn_int_glb=(profileNamespace getVariable ["rhs_key_wpn_int","nextCM"]);

	//player globalChat "działam";
	_p=call rhs_fnc_findPlayer;
	_t =primaryWeapon _p;

	_wf=(getText (configFile >> "cfgWeapons" >> _t >> "rhs_fold"));
	if(_wf=="")exitWith{_p globalChat "nagły koniec";rhs_fold_action = nil;uiNameSpace setVariable ["RHS_AK74_Ctrl",displayNull];};
	_wu=(getText (configFile >> "cfgWeapons" >> _wf >> "rhs_fold"));

	while{not(isNull _z)}do
	{
		_p=call rhs_fnc_findPlayer;

		//folding/unfolding AK
		if( (inputAction rhs_key_wpn_int_glb >0) AND {(_p hasWeapon _t) or (_p hasWeapon _wf)})then
		{
	        waitUntil {inputAction rhs_key_wpn_int_glb == 0};
	        if(currentweapon _p == primaryWeapon _p AND (_p == vehicle _p))then
	        {
		      	_i=primaryWeaponItems _p;

		      	if((_i select 2) isEqualTo "")then{
			      	_a= _p ammo currentWeapon _p;
			      	_m = currentMagazine _p;

				    _p addMagazine _m;
			      	if(currentWeapon _p isEqualTo _wf)then{
				      	_p addWeapon _wu;
				  	  	_p selectWeapon _wu;
				      	_t=_wu;
				      	//_p globalChat "rozkładam";
			      	}else{
				      	_p addWeapon _wf;
				    	_p selectWeapon _wf;
				      	//_p globalChat "składam";
				    };

				    _p playMove "MountOptic";

				   	if(not((_i select 0) isEqualTo ""))then{ _p addPrimaryWeaponItem (_i select 0)};
				   	if(not((_i select 1) isEqualTo ""))then{ _p addPrimaryWeaponItem (_i select 1)};
				    _p setAmmo [(currentWeapon _p), _a];
				    sleep 3;
				};
			};
		};
		sleep 0.1;
	};

	//player globalChat "kończe";
	rhs_fold_action = nil;
	uiNameSpace setVariable ["RHS_AK74_Ctrl",displayNull];
};