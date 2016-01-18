class CfgPatches {
	class acr_a3_mi17 {
		units[] = {"ACR_A3_Mi17_base_CZ_EP1", "ACR_A3_Mi171Sh_rockets_CZ_EP1", "ACR_A3_Mi171Sh_medevac_CZ_EP1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"RHS_A2_AirImport"};
	};
};
class cfgVehicles {
     class RHS_Mi8AMT_base;
     class RHS_Mi8AMTSh_base;
     class RHS_Mi8_base;
     class ACR_A3_Mi17_base_CZ_EP1: RHS_Mi8_base {
        scope = 2;
        displayName = "Mi-17";
        author = "$STR_ACR";
        dlc = "ACR_A3";
        crew = "B_ACR_A3_Pilot";
        typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        side = 1;
        vehicleclass = "Air";
     };
     class ACR_A3_Mi171Sh_rockets_CZ_EP1: RHS_Mi8AMTSh_base {
        scope = 2;
        displayName = "Mi-17 (Rockets)";
        author = "$STR_ACR";
        dlc = "ACR_A3";
        crew = "B_ACR_A3_Pilot";
        typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        side = 1;
        vehicleclass = "Air";
     };
     class ACR_A3_Mi171Sh_medevac_CZ_EP1: RHS_Mi8AMT_base
     {
        scope = 2;
        displayName = "Mi-17 (Medevac)";
        author = "$STR_ACR";
        dlc = "ACR_A3";
        crew = "B_ACR_A3_Pilot";
        typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        side = 1;
        vehicleclass = "Air";
     };
};