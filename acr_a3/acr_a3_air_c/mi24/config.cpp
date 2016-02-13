class CfgPatches {
	class acr_a3_mi24 {
		units[] = {"ACR_A3_Mi_24v","ACR_A3_Mi_24p","ACR_A3_Mi_24v_des","ACR_A3_Mi_24v_ram","ACR_A3_Mi_24p_des","ACR_A3_Mi_24p_ram"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_AirVehicles_Mi24"};
	};
};
class cfgVehicles {
     class CUP_B_Mi35_CZ;
     class ACR_A3_Mi_24v: CUP_B_Mi35_CZ {
        accuracy = 0.5;
        author = "$STR_ACR";
        dlc = "ACR_A3";
        displayName = "Mi-24";
        scope = 2;
        side = 1;
        crew = "B_ACR_A3_Pilot";
		typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        vehicleclass = "Air";
    };
     class ACR_A3_Mi_24v_des: ACR_A3_Mi_24v {
        accuracy = 0.5;
        author = "$STR_ACR";
        dlc = "ACR_A3";
        displayName = "Mi-24 (Desert)";
        scope = 2;
        side = 1;
        crew = "B_ACR_A3_Pilot_des";
		typicalCargo[] = {"B_ACR_A3_Pilot_des"};
        faction = "ACR_A3";
        vehicleclass = "Air";
        hiddenselectionstextures[] =
        {
            "\acr_a3\acr_a3_air\mi24\16_cz_desert_001_co.paa",
            "\acr_a3\acr_a3_air\mi24\16_cz_desert_002_co.paa"
        };
    };
     class ACR_A3_Mi_24v_ram: ACR_A3_Mi_24v_des {
        accuracy = 0.5;
        author = "$STR_ACR";
        dlc = "ACR_A3";
        displayName = "Mi-24 (Ram)";
        scope = 2;
        side = 1;
        crew = "B_ACR_A3_Pilot";
		typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        vehicleclass = "Air";
        hiddenselectionstextures[] =
        {
            "\acr_a3\acr_a3_air\mi24\17_cz_experimantalram_001_co.paa",
            "\acr_a3\acr_a3_air\mi24\17_cz_experimantalram_002_co.paa"
        };
    };
    class ACR_A3_Mi_24p: ACR_A3_Mi_24v {
        accuracy = 0.5;
        author = "$STR_ACR";
        displayName = "Mi-24P";
        scope = 1;
        scopeCurator = 0;
        side = 1;
        crew = "B_ACR_A3_Pilot";
		typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        vehicleclass = "Air";
    };
    class ACR_A3_Mi_24p_des: ACR_A3_Mi_24p {
        accuracy = 0.5;
        author = "$STR_ACR";
        displayName = "Mi-24P (Desert)";
        scope = 1;
        scopeCurator = 0;
        side = 1;
        crew = "B_ACR_A3_Pilot_des";
		typicalCargo[] = {"B_ACR_A3_Pilot_des"};
        faction = "ACR_A3";
        vehicleclass = "Air";
    };
    class ACR_A3_Mi_24p_ram: ACR_A3_Mi_24p_des {
        accuracy = 0.5;
        author = "$STR_ACR";
        displayName = "Mi-24P (Ram)";
        scope = 1;
        scopeCurator = 0;
        side = 1;
        crew = "B_ACR_A3_Pilot";
		typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        vehicleclass = "Air";
    };
};