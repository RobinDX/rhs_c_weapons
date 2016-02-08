/*rpg7 fired EH*/
private["_u"];

_u = nearestObject [_this, "Man"];

if(local _u)then
{
	[_u,8] call rhs_fnc_backblast;
};