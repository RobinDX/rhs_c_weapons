/*
LRF script

a: reyhard
m: soul_assassin
*/

if(isNull (uiNamespace getVariable ["RHS_PDU4_Ctrl",displayNull]))then
{
	uiNameSpace setVariable ["RHS_PDU4_Ctrl",_this select 0];

	[] spawn
	{
		private["_v","_t","_h"];
		disableSerialization;
		_c = uiNamespace getVariable "RHS_PDU4_Ctrl";
		rhs_key_lase_int_GLB=(profileNamespace getVariable ["rhs_key_lase_int","LockTarget"]);
		//emergency sight
		//range finder text
		_r = (_c displayCtrl 4);
		_hr = (_c displayCtrl 5);
		_rhon = (_c displayCtrl 6);
		//range finder value
		_s = (_c displayCtrl 151);
		_hs = (_c displayCtrl 156);


		while{not(isNull _r)}do
		{
			sleep 0.01;

			//lasing target
			//you cannot lase target in non auto mode. see balistic computer
			if(inputAction rhs_key_lase_int_GLB > 0 AND {cameraView == "GUNNER"})then
			{
				_t = parseNumber ctrlText _s;
				_h = parseNumber ctrlText _hs;
				sleep 0.5;
				if(_t>50 AND _t <9000)then{
					if(_t < 100 )then{
						_r ctrlSetText format["00%1",_t];
					}else{
						if(_t < 1000 )then{
							_r ctrlSetText format["0%1",_t];
						}else{
							_r ctrlSetText format["%1",_t];
						};
					};
				}else{
					_r ctrlSetText "XXXX";
				};
				
				if(_h < 10 )then{
					_hr ctrlSetText format["00%1",_h];
				}else{
					if(_h < 100 )then{
						_hr ctrlSetText format["0%1",_h];
					}else{
						_hr ctrlSetText format["%1",_h];
					};
				};
				_rhon ctrlSetText ".";
			};
			if(inputAction "Throw" > 0 AND {cameraView == "GUNNER"})then
			{
				_r ctrlSetText "";
				_hr ctrlSetText "XXX";
			};
		};

		uiNameSpace setVariable ["RHS_PDU4_Ctrl",displayNull];
	};
};