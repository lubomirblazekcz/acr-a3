class CfgPatches
{
	class acr_a3_vehicles_brdm2
	{
		units[] = {"ACR_A3_BRDM2","ACR_A3_BRDM2_DES"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"CUP_WheeledVehicles_BRDM2"};
	};
};

class CfgVehicles {
    class CUP_B_BRDM2_CDF;
    class ACR_A3_BRDM2: CUP_B_BRDM2_CDF {
		displayName = "BRDM-2";
		vehicleClass = "Armored";
        author = "ACR_A3";
        dlc = "ACR_A3";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ACR_A3";
        crew = "B_ACR_A3_crew";
        typicalCargo[] = {"B_ACR_A3_crew"};
        hiddenselectionstextures[] = {"acr_a3\acr_a3_vehicles\brdm2\data\bdrm2_01_acr_co.paa"};
    };
    class ACR_A3_BRDM2_DES: CUP_B_BRDM2_CDF
    {
		displayName = "$STR_acr_a3_brdm2";
        author = "ACR_A3";
        dlc = "ACR_A3";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ACR_A3";
        crew = "B_ACR_A3_crew_des";
        typicalCargo[] = {"B_ACR_A3_crew_des"};
        hiddenselectionstextures[] = {"acr_a3\acr_a3_vehicles\brdm2\data\bdrm2_01_acr_des_co.paa","acr_a3\acr_a3_vehicles\brdm2\data\bdrm2_02_acr_des_co.paa"};
    };
};
