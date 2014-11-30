class CfgPatches 
{

	class acr_a3_weapons_pbo
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore"};
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
    class CUP_hgun_Duty;
    class acr_a3_P07: CUP_hgun_Duty
    {
        scope = 1;
    };
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

    class CUP_arifle_Sa58RIS1_Aco_Laser;
    class acr_a3_Sa58RIS1_Aco_Laser: CUP_arifle_Sa58RIS1_Aco_Laser {};
    class CUP_arifle_Sa58RIS2_Arco_Laser;
    class acr_a3_Sa58RIS2_Arco_Laser: CUP_arifle_Sa58RIS2_Arco_Laser {};
    class CUP_arifle_Sa58RIS1_camo_Aco_Laser;
    class acr_a3_Sa58RIS1_camo_Aco_Laser: CUP_arifle_Sa58RIS1_camo_Aco_Laser {};
    class CUP_arifle_Sa58RIS2_camo_Arco_Laser;
    class acr_a3_Sa58RIS2_camo_Arco_Laser: CUP_arifle_Sa58RIS2_camo_Arco_Laser {};
    class CUP_hgun_Phantom;
    class acr_a3_SP01: CUP_hgun_Phantom
    {
        scope = 1;
    };
    class CUP_lmg_M60A4;
    class acr_a3_M60E4: CUP_lmg_M60A4
    {
        scope = 1;
    };
};
class cfgMagazines {
    class CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M;
    class acr_a3_100Rnd_762x51_B_M60E4: CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M {
        scope = 1;
    };
};
class cfgVehicles {
    class B_supplyCrate_F;
    class ACR_A3_WeaponsBox: B_supplyCrate_F
    {
        displayName = "$STR_ACR_WEAPONS";
        maximumLoad = 999999;
        transportMaxWeapons = 50000;
        transportMaxMagazines = 200000;
        transportMaxBackpacks = 2000;
        class TransportMagazines {

            class _xx_acr_a3_30Rnd_Sa58_mag
            {
                magazine = "CUP_30Rnd_Sa58_M";
                count = 30;
            };
            class _xx_acr_a3_30Rnd_Sa58_mag_TracerG
            {
                magazine = "CUP_30Rnd_Sa58_M_TracerG";
                count = 30;
            };
            class _xx_acr_a3_30Rnd_Sa58_mag_TracerR
            {
                magazine = "CUP_30Rnd_Sa58_M_TracerR";
                count = 30;
            };
            class _xx_acr_a3_30Rnd_Sa58_mag_TracerY
            {
                magazine = "CUP_30Rnd_Sa58_M_TracerY";
                count = 30;
            };
            class _xx_30Rnd_556x45_Stanag
            {
                magazine = "30Rnd_556x45_Stanag";
                count = 30;
            };
            class _xx_30Rnd_556x45_Stanag_Tracer_Red
            {
                magazine = "30Rnd_556x45_Stanag_Tracer_Red";
                count = 30;
            };
            class _xx_30Rnd_556x45_Stanag_Tracer_Green
            {
                magazine = "30Rnd_556x45_Stanag_Tracer_Green";
                count = 30;
            };
            class _xx_30Rnd_556x45_Stanag_Tracer_Yellow
            {
                magazine = "30Rnd_556x45_Stanag_Tracer_Yellow";
                count = 30;
            };
            class _xx_acr_a3_10Rnd_cz750_mag
            {
                magazine = "CUP_10Rnd_762x51_CZ750";
                count = 30;
            };
            class _xx_acr_a3_10Rnd_cz750_mag_Tracer
            {
                magazine = "CUP_10Rnd_762x51_CZ750_Tracer";
                count = 30;
            };
            class _xx_16Rnd_9x21_Mag
            {
                magazine = "16Rnd_9x21_Mag";
                count = 30;
            };
            class _xx_CUP_18Rnd_9x19_Phantom
            {
                magazine = "CUP_18Rnd_9x19_Phantom";
                count = 30;
            };
            class _xx_30Rnd_9x21_Mag
            {
                magazine = "30Rnd_9x21_Mag";
                count = 30;
            };
        };
        class TransportWeapons {
            class _xx_acr_a3_Sa58P
            {
                weapon = "acr_a3_Sa58P";
                count = 30;
            };
            class _xx_acr_a3_Sa58P_camo
            {
                weapon = "acr_a3_Sa58P_camo";
                count = 30;
            };
            class _xx_acr_a3_Sa58V
            {
                weapon = "acr_a3_Sa58V";
                count = 30;
            };
            class _xx_acr_a3_Sa58V_camo
            {
                weapon = "acr_a3_Sa58V_camo";
                count = 30;
            };
            class _xx_acr_a3_Sa58RIS1
            {
                weapon = "acr_a3_Sa58RIS1";
                count = 30;
            };
            class _xx_acr_a3_Sa58RIS1_camo
            {
                weapon = "acr_a3_Sa58RIS1_camo";
                count = 30;
            };
            class _xx_acr_a3_Sa58RIS2
            {
                weapon = "acr_a3_Sa58RIS2";
                count = 30;
            };
            class _xx_acr_a3_Sa58RIS2_camo
            {
                weapon = "acr_a3_Sa58RIS2_camo";
                count = 30;
            };
            class _xx_acr_a3_CZ805_A2
            {
                weapon = "acr_a3_CZ805_A2";
                count = 30;
            };
            class _xx_acr_a3_CZ805_A1
            {
                weapon = "acr_a3_CZ805_A1";
                count = 30;
            };
            class _xx_acr_a3_CZ805_GL
            {
                weapon = "acr_a3_CZ805_GL";
                count = 30;
            };
            class _xx_SMG_02_F
            {
                weapon = "SMG_02_F";
                count = 30;
            };
            class _xx_acr_a3_CZ750
            {
                weapon = "acr_a3_CZ750";
                count = 30;
            };
            class _xx_acr_a3_P07
            {
                weapon = "acr_a3_P07";
                count = 30;
            };
            class _xx_acr_a3_SP01
            {
                weapon = "acr_a3_SP01";
                count = 30;
            };
        };
        class TransportItems {
            class _xx_optic_Arco
            {
                name = "optic_Arco";
                count = 30;
            };
            class _xx_optic_Hamr
            {
                name = "optic_Hamr";
                count = 30;
            };
            class _xx_optic_Aco
            {
                name = "optic_Aco";
                count = 30;
            };
            class _xx_optic_MRCO
            {
                name = "optic_MRCO";
                count = 30;
            };
            class _xx_acc_flashlight
            {
                name = "acc_flashlight";
                count = 30;
            };
            class _xx_acc_pointer_IR
            {
                name = "acc_pointer_IR";
                count = 30;
            };
            class _xx_optic_SOS
            {
                name = "optic_SOS";
                count = 30;
            };
            class _xx_muzzle_snds_B
            {
                name = "muzzle_snds_B";
                count = 30;
            };
            class _xx_muzzle_snds_M
            {
                name = "muzzle_snds_M";
                count = 30;
            };
            class _xx_muzzle_snds_L
            {
                name = "muzzle_snds_L";
                count = 30;
            };
        };
        class TransportBackpacks  {
            class _xx_B_Kitbag_mcamo
            {
                backpack = "B_Kitbag_mcamo";
                count = 0;
            };
        };
    };
};