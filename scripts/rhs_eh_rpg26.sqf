/*rpg26 fired EH*/
private["_u"];

_u = nearestObject [_this, "Man"];

if(local _u)then
{
	[_u,"rhs_weap_rpg26"] spawn rhs_fnc_disposable;
	//[_u,4] call rhs_fnc_backblast;
};

//[[_u,"rhs_weap_rpg26"],"rhs_fnc_disposable",false,false,false] call BIS_fnc_MP;