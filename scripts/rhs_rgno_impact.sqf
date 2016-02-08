params [
	"_shooter",
	"_grenade",
	["_server", false]
];

// Exit on bad input
if (isNull _shooter || isNull _grenade) exitWith {};

// Find nearest player to AI
private _executor = _shooter;
if (!(_shooter call RHS_fnc_isPlayer) && !_server) then {
	private ["_closest","_draw"];
	// Get closet player to shooter, that player executes the function
	_closest = 999999;
	_draw = getObjectViewDistance select 0;
	{
		_distance = _x distance _shooter;
		if (_distance <= _draw) then {
			if (_distance < _closest) then {
				_closest = _distance;
				_executor = _x;
			}; 
		};
	} forEach allPlayers + [call RHS_fnc_findPlayer];
	// Backup, execute on server
	if (_closest == 999999) then {
		_executor = objNull;
		[_shooter, _grenade, true] remoteExecCall ["RHS_FNC_RGNO_IMPACT", 2];
	};
};

// Continue executor is the player or this is the server
if (_executor == call RHS_fnc_findPlayer || {_server}) then {

	// Get RHS submunition, exit on empty
	private _sub = getText(configFile >> "cfgAmmo" >> typeOf _grenade >> "rhs_submunition");
	if (_sub == "") exitWith {};

	// Get the parent's position and velocity
	private _pos = getPos _grenade;
	private _vel = velocity _grenade;

	// Delete parent grenade
	deleteVehicle _grenade;
	
	// Create new submunition grenade with parent's position and velocity
	_grenade = createVehicle [_sub, _pos, [], 0, "CAN_COLLIDE"];
	_grenade setVectorUp (vectorNormalized _vel);
	_grenade setVelocity _vel;
	
	// Spawn to track
	_grenade spawn {
	
		params ["_grenade"];
		
		// Wait for impact fuse to activate
		sleep 1;
		
		// Exit if grenade is null for some reason
		if (isNull _grenade) exitWith {};
		
		// Exit if grenade is resting on top of surface
		private _exp = false;
		private _pos = getPosASL _grenade;
		private _inter = lineIntersectsSurfaces [_pos, _pos vectorAdd [-1,0,0], _grenade, objNull, true, 1, "FIRE", "NONE"];
		if ((count _inter > 0 || {(getPosATL _grenade) select 2 < 0.2}) && {abs(speed(_grenade)) < 5}) exitWith {};
		
		// Get RHS impact ammo, exit if empty
		private _impact = getText(configFile >> "cfgAmmo" >> typeOf _grenade >> "rhs_impact");
		if (_impact == "") exitWith {};
		
		// Track grenade while not null
		while {!isNull _grenade} do {
			// Get positions and intersections
			_exp = false;
			_pos = getPosASL _grenade;
			_inter = lineIntersectsSurfaces [_pos vectorAdd [1.5,0,0], _pos vectorAdd [-1.5,0,0], _grenade, objNull, true, 1, "FIRE", "NONE"] 
					+ lineIntersectsSurfaces [_pos vectorAdd [0,1.5,0], _pos vectorAdd [0,-1.5,0], _grenade, objNull, true, 1, "FIRE", "NONE"]
					+ lineIntersectsSurfaces [_pos vectorAdd [0,-1.5,0], _pos vectorAdd [0,1.5,0], _grenade, objNull, true, 1, "FIRE", "NONE"];	
			// Explode if in contact with an object other than a bush
			if (count _inter > 0) then {
				if (typeOf (_inter select 0 select 2) == "") then {
					if (str (_inter select 0 select 2) find ": b_" < 0) then {
						_exp = true;
					};
				} else {
					_exp = true;
				};					
			};
			// Explode if in contact with ground
			if (((getPosATL _grenade) select 2) < 0.2) then {
				_exp = true;
			};
			// Do explosion if true
			if (_exp) exitWith {
				sleep 0.075;
				// If grenade is still alive
				if (!isNull _grenade) then {
					_pos = getPos _grenade;
					deleteVehicle _grenade;
					_exp = createVehicle [_impact, _pos, [], 0, "CAN_COLLIDE"];
				};
			};
			// 15hz tracking
			sleep 0.0667;
		};
	};
};