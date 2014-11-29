class CfgPatches
{
	class acr_a3_CZ805
	{
		units[] = {};
		weapons[] = {"acr_a3_CZ805_GL","acr_a3_CZ805_A1","acr_a3_CZ805_A2","acr_a3_CZ805_A2_Holo_Laser","acr_a3_CZ805_A1_Holo_Laser"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgWeapons
{
    class CUP_arifle_CZ805_A2;
	class acr_a3_CZ805_A2: CUP_arifle_CZ805_A2
	{
		scope = 1;
	};
	class CUP_arifle_CZ805_A1;
	class acr_a3_CZ805_A1: CUP_arifle_CZ805_A1
	{
		scope = 1;
	};
	class CUP_arifle_CZ805_GL;
	class acr_a3_CZ805_GL: CUP_arifle_CZ805_GL
	{
		scope = 1;
	};
	class acr_a3_CZ805_A2_Holo_Laser: acr_a3_CZ805_A2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class acr_a3_CZ805_A1_Holo_Laser: acr_a3_CZ805_A1
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
    class acr_a3_CZ805_A2_Aco_Laser: acr_a3_CZ805_A2
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
    class acr_a3_CZ805_A1_Aco_Laser: acr_a3_CZ805_A1
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
    class acr_a3_CZ805_A1_MRCO_Laser: acr_a3_CZ805_A1
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_MRCO";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };
    class acr_a3_CZ805_A2_MRCO_Laser: acr_a3_CZ805_A1
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_MRCO";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };
    class acr_a3_CZ805_GL_Hamr_Laser: acr_a3_CZ805_GL
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Hamr";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_pointer_IR";
            };
        };
    };
};