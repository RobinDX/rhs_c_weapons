/*
pso1 illumination handler

a: reyhard
*/
private["_v","_c","_g","_hide"];

_t = format["rhs_%1_ctrl",_this select 1];

if(isNull (uiNamespace getVariable [_t,displayNull]))then
{
	uiNameSpace setVariable [_t,_this select 0];

	[_t] spawn
	{
		disableSerialization;
		_t = _this select 0;
		_c = uiNamespace getVariable _t;

		_hide = true;

		//illumination
		_g = _c displayCtrl 1;

		while{not(isNull _g)}do
		{
			sleep 0.01;
			if(inputAction "nightVision" > 0)then{
				waitUntil {(inputAction "nightVision" == 0)  OR (isNull _g)};
				if(_hide)then{_g ctrlSetTextColor [0.99,0.6,0.16,0.7];_hide=false}else{_g ctrlSetTextColor [0.99,0.6,0.16,0];_hide=true};
			};
		};
		uiNameSpace setVariable [_t,displayNull];
	};
};