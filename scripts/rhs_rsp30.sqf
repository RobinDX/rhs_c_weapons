
uiNameSpace setVariable ["RHS_RSP30_Ctrl",_this select 0];


[] spawn {
	//_p globalChat "inicjalizacja";
	private["_c","_t"];
	disableSerialization;
	_c = uiNamespace getVariable "RHS_RSP30_Ctrl";
	_z = (_c displayCtrl 168);

	private ["_t","_p"];

	_p=call rhs_fnc_findPlayer;
	if (handgunWeapon _p != "")then
	{
		_m="";
		switch(handgunWeapon _p)do
		{
			case "rhs_weap_rsp30_white": {_m="rhs_mag_rsp30_white"};
			case "rhs_weap_rsp30_red": {_m="rhs_mag_rsp30_red"};
			case "rhs_weap_rsp30_green": {_m="rhs_mag_rsp30_green"};
			default {};
		};
		_p addHandgunItem _m;
	};

	_eh= _p addEventHandler ["fired",{_this call rhs_fnc_rsp30_fired}];
	waitUntil {sleep 0.1;isNull _z};
	_p removeEventHandler ["fired", _eh];

	uiNameSpace setVariable ["RHS_RSP30_Ctrl",displayNull];
	//_p globalChat "kończe";

};
