_g=(_this nearestObject "rhs_g_vog25p");

if(local _g)then{

	_g setVelocity [velocity _g select 0, velocity _g select 1, 10.5];

	sleep 0.2;

	_n = "rhs_collider" createVehicleLocal [0,0,0];
	_g setVelocity [1,1,1];
	_n setpos (getPosVisual _g);

	sleep 1;

	deleteVehicle _n;
};


//_this execVM "test.sqf";