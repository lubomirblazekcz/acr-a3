class CfgPatches
{
	class acr_a3_CZ750_srifle
	{
		units[] = {};
		weapons[] = {"acr_a3_CZ750"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgWeapons
{
    class CUP_srifle_CZ750;
	class acr_a3_CZ750: CUP_srifle_CZ750
	{
		scope = 1;
	};
	class CUP_srifle_CZ750_SOS_bipod;
    class acr_a3_CZ750_SOS: CUP_srifle_CZ750_SOS_bipod {};
};