/*
loading disposable launchers for players

*/

private ["_p","_t","_wn1","_wn2","_i","_t"];

_p = call rhs_fnc_findPlayer;

if(currentMagazine _p != "")exitWith{};

_m = (getArray (configFile >> "cfgWeapons" >> secondaryWeapon _p >> "magazines")) select 0;
_p addSecondaryWeaponItem _m;