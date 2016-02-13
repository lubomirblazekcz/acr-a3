class CfgPatches {
	class acr_a3_mi17 {
		units[] = {"ACR_A3_Mi17_base_CZ_EP1", "ACR_A3_Mi171Sh_rockets_CZ_EP1", "ACR_A3_Mi171Sh_medevac_CZ_EP1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_AirVehicles_Mi8"};
	};
};
class CfgVehicles {
    class CUP_B_Mi8_USA;
    class CUP_B_Mi171Sh_ACR;
    class CUP_B_Mi171Sh_Unarmed_ACR;
    class ACR_A3_Mi17_base_CZ_EP1: CUP_B_Mi8_USA {
        scope = 2;
        displayName = "Mi-17";
        author = "$STR_ACR";
        dlc = "ACR_A3";
        crew = "B_ACR_A3_Pilot";
        typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        side = 1;
        vehicleclass = "Air";
        hiddenSelectionsTextures[] = {
            "\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_body_ACR_CO.paa",
            "\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_ACR_CO.paa",
            "\CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi17_decals2_ACR_CA.paa",
            "\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"
        };
    };
    class ACR_A3_Mi171Sh_rockets_CZ_EP1: CUP_B_Mi171Sh_ACR {
        scope = 2;
        displayName = "Mi-171Sh (Rockets)";
        author = "$STR_ACR";
        dlc = "ACR_A3";
        crew = "B_ACR_A3_Pilot";
        typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        side = 1;
        vehicleclass = "Air";
    };
    class ACR_A3_Mi171Sh_medevac_CZ_EP1: CUP_B_Mi171Sh_Unarmed_ACR {
        scope = 2;
        displayName = "Mi-171Sh (Medevac)";
        author = "$STR_ACR";
        dlc = "ACR_A3";
        crew = "B_ACR_A3_Pilot";
        typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        side = 1;
        vehicleclass = "Air";
    };
};