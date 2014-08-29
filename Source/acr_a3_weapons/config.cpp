class CfgPatches 
{

	class acr_a3_weapons_pbo
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { };
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
                magazine = "acr_a3_30Rnd_Sa58_mag";
                count = 30;
            };
            class _xx_acr_a3_30Rnd_Sa58_mag_TracerG
            {
                magazine = "acr_a3_30Rnd_Sa58_mag_TracerG";
                count = 30;
            };
            class _xx_acr_a3_30Rnd_Sa58_mag_TracerR
            {
                magazine = "acr_a3_30Rnd_Sa58_mag_TracerR";
                count = 30;
            };
            class _xx_acr_a3_30Rnd_Sa58_mag_TracerY
            {
                magazine = "acr_a3_30Rnd_Sa58_mag_TracerY";
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
                magazine = "acr_a3_10Rnd_cz750_mag";
                count = 30;
            };
            class _xx_acr_a3_10Rnd_cz750_mag_Tracer
            {
                magazine = "acr_a3_10Rnd_cz750_mag_Tracer";
                count = 30;
            };
            class _xx_16Rnd_9x21_Mag
            {
                magazine = "16Rnd_9x21_Mag";
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