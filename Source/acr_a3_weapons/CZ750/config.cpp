class CfgPatches
{
	class acr_a3_CZ750_srifle
	{
		units[] = {};
		weapons[] = {"acr_a3_CZ750"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {"acr_a3_10Rnd_cz750_mag","acr_a3_10Rnd_cz750_mag_Tracer"};
		ammo[] = {};
	};
};
class CfgMagazines
{
	class CUP_10Rnd_762x51_CZ750;
	class acr_a3_10Rnd_cz750_mag: CUP_10Rnd_762x51_CZ750
	{
		scope = 1;
	};
	class CUP_10Rnd_762x51_CZ750_Tracer;
	class acr_a3_10Rnd_cz750_mag_Tracer: CUP_10Rnd_762x51_CZ750_Tracer
	{
        scope = 1;
	};
};
class CfgWeapons
{
    class CUP_srifle_CZ750;
	class acr_a3_CZ750: CUP_srifle_CZ750
	{
		scope = 1;
	};
    class acr_a3_CZ750_SOS: acr_a3_CZ750
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_SOS";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "ACR_A3_bipod";
            };
        };
    };
};