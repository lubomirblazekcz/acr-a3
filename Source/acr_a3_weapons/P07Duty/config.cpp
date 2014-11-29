class CfgPatches
{
	class acr_a3_P07Duty
	{
		units[] = {};
		weapons[] = {"acr_a3_P07"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgWeapons
{
	class CUP_hgun_Duty;
	class acr_a3_P07: CUP_hgun_Duty
	{
		scope = 1;
	};
};