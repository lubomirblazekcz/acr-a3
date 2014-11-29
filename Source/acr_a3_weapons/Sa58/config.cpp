class CfgPatches
{
	class acr_a3_Sa58
	{
		units[] = {};
		weapons[] = {"acr_a3_Sa58P","acr_a3_Sa58P_camo","acr_a3_Sa58V","acr_a3_Sa58V_camo","acr_a3_Sa58RIS1","acr_a3_Sa58RIS1_camo","acr_a3_Sa58RIS2","acr_a3_Sa58RIS2_camo"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","asdg_jointrails"};
		magazines[] = {"acr_a3_30Rnd_Sa58_mag","acr_a3_30Rnd_Sa58_mag_TracerG","acr_a3_30Rnd_Sa58_mag_TracerR","acr_a3_30Rnd_Sa58_mag_TracerY"};
		ammo[] = {};
	};
};

class CfgMagazines
{

    class CUP_30Rnd_Sa58_M;
	class acr_a3_30Rnd_Sa58_mag: CUP_30Rnd_Sa58_M
	{
		scope = 1;
	};
	class CUP_30Rnd_Sa58_M_TracerG;
	class acr_a3_30Rnd_Sa58_mag_TracerG: CUP_30Rnd_Sa58_M_TracerG
	{
	    scope = 1;
	};
	class CUP_30Rnd_Sa58_M_TracerR;
	class acr_a3_30Rnd_Sa58_mag_TracerR: CUP_30Rnd_Sa58_M_TracerR
	{
		scope = 1;
	};
	class CUP_30Rnd_Sa58_M_TracerY;
	class acr_a3_30Rnd_Sa58_mag_TracerY: CUP_30Rnd_Sa58_M_TracerY
	{
		scope = 1;
	};
};
class CfgWeapons
{
    class CUP_arifle_Sa58P;
	class acr_a3_Sa58P: CUP_arifle_Sa58P
	{
		scope = 1;
	};
	class CUP_arifle_Sa58P_des;
	class acr_a3_Sa58P_camo: CUP_arifle_Sa58P_des
	{
		scope = 1;
	};
	class CUP_arifle_Sa58V;
	class acr_a3_Sa58V: CUP_arifle_Sa58V
	{
        scope = 1;
	};
	class CUP_arifle_Sa58V_camo;
	class acr_a3_Sa58V_camo: CUP_arifle_Sa58V_camo
	{
        scope = 1;
	};
	class CUP_arifle_Sa58RIS1;
	class acr_a3_Sa58RIS1: CUP_arifle_Sa58RIS1
	{
		scope = 1;
	};
	class CUP_arifle_Sa58RIS1_des;
	class acr_a3_Sa58RIS1_camo: CUP_arifle_Sa58RIS1_des
	{
        scope = 1;
	};
	class CUP_arifle_Sa58RIS2;
	class acr_a3_Sa58RIS2: CUP_arifle_Sa58RIS2
	{
        scope = 1;
	};
	class CUP_arifle_Sa58RIS2_camo;
	class acr_a3_Sa58RIS2_camo: CUP_arifle_Sa58RIS2_camo
	{
        scope = 1;
	};

    class acr_a3_Sa58RIS1_Aco_Laser: acr_a3_Sa58RIS1
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Aco";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };
    class acr_a3_Sa58RIS2_Arco_Laser: acr_a3_Sa58RIS2
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Arco";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };

    class acr_a3_Sa58RIS1_camo_Aco_Laser: acr_a3_Sa58RIS1_camo
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Aco";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };
    class acr_a3_Sa58RIS2_camo_Arco_Laser: acr_a3_Sa58RIS2_camo
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Arco";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };
};