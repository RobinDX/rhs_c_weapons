/*
1p29 illumination handler

a: reyhard
*/

if(isNull (uiNamespace getVariable ["rhs_1p29_ctrl",displayNull]))then
{
	uiNameSpace setVariable ["rhs_1p29_ctrl",_this select 0];

	[] spawn
	{
		private["_v","_t"];
		disableSerialization;
		_c = uiNamespace getVariable "rhs_1p29_ctrl";

		//illumination
		_g = _c displayCtrl 1;

		while{not(isNull _g)}do
		{
			_g ctrlSetTextColor [0.44,0.98,0.21,abs((daytime-12)/34)];
			sleep 2;
			//player globalChat format["%1",abs((daytime-12)/34)];
		};
		uiNameSpace setVariable ["rhs_1p29_ctrl",displayNull];
	};
};