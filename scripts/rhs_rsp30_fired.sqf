_u = _this select 0;
_w = _this select 1;
//player globalChat format["%1",_this];
if(_w in ["rhs_weap_rsp30_white","rhs_weap_rsp30_green","rhs_weap_rsp30_red"])then{

	_u addWeapon format["%1_used",_w];
};