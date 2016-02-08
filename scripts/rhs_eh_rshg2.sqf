/*rshg2 fired EH*/
private["_u"];

_u = nearestObject [_this, "Man"];

if(local _u)then
{
	[_u,"rhs_weap_rshg2"] spawn rhs_fnc_disposable;
	//[_u,4] call rhs_fnc_backblast;
};