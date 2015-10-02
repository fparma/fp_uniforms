_unit = _this select 0;
if (
	backpack _unit == "B_Carryall_Inv"
) then {
	removeBackpackGlobal _unit;
};