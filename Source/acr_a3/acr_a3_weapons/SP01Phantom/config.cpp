class CfgPatches
{
	class acr_a3_SP01Phantom
	{
		units[] = {};
		weapons[] = {"acr_a3_SP01"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgWeapons
{
    class CUP_hgun_Phantom;
	class acr_a3_SP01: CUP_hgun_Phantom
	{
		scope = 1;
    };
};