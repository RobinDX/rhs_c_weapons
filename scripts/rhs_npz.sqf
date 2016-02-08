/*
NPZ mounting handler
*/

private ["_p","_t","_wn1","_wn2","_i","_t"];

_p=call rhs_fnc_findPlayer;
_t =primaryWeapon _p;

_wn1=(getText (configFile >> "cfgWeapons" >> _t >> "rhs_npz"));
if(_wn1=="")exitWith{diag_log "nie ma takiego numeru. nie ma takiego numeru. pip"};


if(_p == vehicle _p)then
{
	_p removePrimaryWeaponItem "rhs_acc_npz";
	_i=primaryWeaponItems _p;

	_a= _p ammo currentWeapon _p;
	_m = currentMagazine _p;

    _p addMagazine _m;
  	_p addWeapon _wn1;
	_p selectWeapon _wn1;
  	//_p globalChat "składam";

	_p playMove "MountSide";

   	if(not((_i select 0) isEqualTo ""))then{ _p addPrimaryWeaponItem (_i select 0)};
   	if(not((_i select 1) isEqualTo ""))then{ _p addPrimaryWeaponItem (_i select 1)};
    _p setAmmo [(currentWeapon _p), _a];
}else{
	hint "Mounting of NPZ rail is not available in vehicles!";
	_p removePrimaryWeaponItem "rhs_acc_npz";
	_p addItem "rhs_acc_npz";

	/*
	in case if player takes item from vehicle& doesn't have space inside his inventory we assign item back to vehicle
	*/
	if(!("rhs_acc_npz" in (items _p)))then{
		(vehicle _p) addItemCargo "rhs_acc_npz";
	};
};