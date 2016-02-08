/*
disposable script

a: reyhard
*/

private ["_unit","_type","_replacer","_emptyTube"];

_unit = _this select 0;
_type = _this select 1;

if (_type in (weapons _unit)) then
{
	_replacer = format["%1_used",_type];

	if (isPlayer _unit) then
	{
		private _state = animationState _unit;
		_unit addWeapon _replacer;
		_unit removeWeapon _type;
		_unit selectWeapon _replacer;
		_unit switchMove _state;
	}else{
		_unit addWeapon _replacer;
		sleep 1;
		_emptyTube = createVehicle ["WeaponHolderSimulated", [getPos _unit select 0, getpos _unit select 1, (getpos _unit select 2) + 1], [], 0, "CAN_COLLIDE"];
		_emptyTube addWeaponCargoGlobal [_replacer, 1];
		_unit removeWeapon _replacer;
		sleep 300;
		deleteVehicle _emptyTube;
	};
};