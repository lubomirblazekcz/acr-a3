class CfgPatches {
	class acr_a3_bmp2 {
		units[] = {"acr_a3_bmp2", "acr_a3_bmp2_des"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"CUP_TrackedVehicles_BMP"};
	};
};

class CfgVehicles {
    class CUP_B_BMP2_CDF;
	class acr_a3_bmp2: CUP_B_BMP2_CDF {
		scope = 2;
		side = 1;
		faction="ACR_A3";
		typicalCargo[] = {"B_ACR_A3_crew"};
		crew = "B_ACR_A3_crew";
		displayName = "BMP-2";
		vehicleClass = "Armored";
		hiddenselectionstextures[] = {"\acr_a3\acr_a3_vehicles\bmp2\data\bmp2_01_acr_co.paa", "\acr_a3\acr_a3_vehicles\bmp2\data\bmp2_02_acr_co.paa"};
        dlc = "ACR_A3";
        author = "ACR_A3";
	};
    class acr_a3_bmp2_des: acr_a3_bmp2 {
		hiddenselectionstextures[] = {"\acr_a3\acr_a3_vehicles\bmp2\data\bmp2_01_acr_des_co.paa", "\acr_a3\acr_a3_vehicles\bmp2\data\bmp2_02_acr_des_co.paa"};
        typicalCargo[] = {"B_ACR_A3_crew"};
        crew = "B_ACR_A3_crew_des";
        displayName = "$STR_ACR_BMP2_DES";
        dlc = "ACR_A3";
        author = "ACR_A3";
    };
};
