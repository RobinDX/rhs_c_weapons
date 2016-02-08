


_this spawn {
	waitUntil {isNil "rhs_npz_action"};
	rhs_npz_action=true;
	uiNameSpace setVariable ["RHS_NPZ_Ctrl",_this select 0];

	private ["_t","_c","_a","_m","_wu","_wf","_p"];

	disableSerialization;
	_c = uiNamespace getVariable "RHS_NPZ_Ctrl";
	_z = (_c displayCtrl 168);

	//player globalChat "działam";
	_p=call rhs_fnc_findPlayer;
	_t =primaryWeapon _p;
	rhs_key_wpn_int_glb=(profileNamespace getVariable ["rhs_key_wpn_int","nextCM"]);

	_wf=(getText (configFile >> "cfgWeapons" >> _t >> "rhs_npz"));
	if(_wf=="")exitWith{_p globalChat "nagły koniec";rhs_npz_action = nil;uiNameSpace setVariable ["RHS_NPZ_Ctrl",displayNull];};


	while{not(isNull _z)}do
	{
		_p=call rhs_fnc_findPlayer;

		//folding/unfolding AK
		if((inputAction rhs_key_wpn_int_glb >0) AND {(_p hasWeapon _t)})then
		{
		        waitUntil {inputAction rhs_key_wpn_int_glb == 0};
		        if(currentweapon _p == primaryWeapon _p AND (_p == vehicle _p))then
		        {
			      	_i=primaryWeaponItems _p;

			      	if((_i select 2) isEqualTo "")then{
				      	_a= _p ammo currentWeapon _p;
				      	_m = currentMagazine _p;

					    _p addMagazine _m;
				      	_p addWeapon _wf;
				    	_p selectWeapon _wf;
				      	//_p globalChat "składam";

					    _p playMove "MountOptic";

					   	if(not((_i select 0) isEqualTo ""))then{ _p addPrimaryWeaponItem (_i select 0)};
					   	if(not((_i select 1) isEqualTo ""))then{ _p addPrimaryWeaponItem (_i select 1)};
					    _p setAmmo [(currentWeapon _p), _a];
						_p addItem "rhs_acc_npz";

						/*
						in case there is no space in player inventory
						*/
						if(!("rhs_acc_npz" in (items _p)))then{
							(vehicle _p) addItemCargo "rhs_acc_npz";
						};
					};
				};
		};

		sleep 0.1;
	};
	//player globalChat "kończe";
	rhs_npz_action = nil;
	uiNameSpace setVariable ["RHS_NPZ_Ctrl",displayNull];
};