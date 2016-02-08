/*
LRF script

a: reyhard
*/
_this spawn
{
	waitUntil {isnil "rhs_tr8_cam"};

	private["_k"];
	_k=format["RHS_%1_ctrl",_this select 2];

	if(isNull (uiNamespace getVariable [_k,displayNull]))then
	{
		uiNameSpace setVariable [_k,_this select 0];

		private["_c","_z","_h"];
		disableSerialization;
		_c = uiNamespace getVariable _k;
		_z = (_c displayCtrl 168);
		_h=true;

		rhs_tr8_cam = "camera" camCreate [0,0,0];
		rhs_tr8_cam cameraEffect ["internal", "Back", "rhs_tr8"];
		rhs_tr8_cam camSetFov 0.35/(_this select 1);
		rhs_tr8_pos=[0.06,0.09,0.52];

		_id = addMissionEventHandler ["Draw3D",
		{
			//attach to cause to double camera rotation
			_p=(call rhsusf_fnc_findPlayer);
			//should be right hand as it glued to weapon most of the time
		 	rhs_tr8_cam setPosATL (positionCameraToWorld [0,.4,.2]);

		 	_w = _p weaponDirection "rhs_tr8_periscope_pip";
		 	_r = vectorNormalized(_w vectorCrossProduct [0,0,1]);
		 	_u = _r vectorCrossProduct _w;

		 	rhs_tr8_cam setVectorDirAndUp [_w ,_u];
		}];

		_a2=rhs_tr8_pos vectorDiff [0,0.24,0];
		_a1=rhs_tr8_pos;
		while{not(isnull _z)}do
		{
			_p=(call rhsusf_fnc_findPlayer);
			sleep 0.1;
			if(cameraView == "internal")then{
				if(_h)then{
					rhs_tr8_cam cameraeffect ["terminate","back"];
					rhs_tr8_cam cameraEffect ["internal", "Back", "rhs_tr8"];
					_h=false;
				};
			}else{
				_h=true;
			};
			_e=eyepos _p;
			//if(lineIntersects [_e,(vectorDir _p) vectorAdd _e] )then{rhs_tr8_pos=_a2}else{rhs_tr8_pos=_a1};
		};

		uiNameSpace setVariable [_k,displayNull];
		removeMissionEventHandler ["draw3d",_id];
		rhs_tr8_cam cameraeffect ["terminate","back"];
		camDestroy rhs_tr8_cam;
		rhs_tr8_cam = nil;
		rhs_tr8_pos = nil;
	};
};

