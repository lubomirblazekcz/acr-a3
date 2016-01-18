class CfgPatches {
	class acr_a3_hmmwv {
		units[] = {"acr_a3_hmmwv_M1151_M2","acr_a3_hmmwv_M1114_AGS_ACR","acr_a3_HMMWV_DSHKM_GPK_ACR","acr_a3_HMMWV_Ambulance_ACR"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"CUP_WheeledVehicles_HMMWV"};
	};
};

class CfgVehicles {
    class CUP_B_HMMWV_M2_GPK_ACR;
    class CUP_B_HMMWV_AGS_GPK_ACR;
    class CUP_B_HMMWV_DSHKM_GPK_ACR;
    class CUP_B_HMMWV_Ambulance_ACR;
	class acr_a3_hmmwv_M1151_M2: CUP_B_HMMWV_M2_GPK_ACR {
		displayname = "HMMWV M1151 (M2)";
		author = "$STR_ACR";
		dlc = "ACR_A3";
		side = 1;
		scope = 2;
		faction = "ACR_A3";
		vehicleclass = "Car";
		crew = "B_ACR_A3_Soldier_01_des";
		typicalCargo[] = {"B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des"};
		HiddenSelectionsTextures[] = {"acr_a3\acr_a3_vehicles\hmmwv\data\hmmwv_body_canvas_1_co.paa","acr_a3\acr_a3_vehicles\hmmwv\data\hmmwv_hood_canvas_co.paa","acr_a3\acr_a3_vehicles\hmmwv\data\hmmwv_regular_1_co.paa","acr_a3\acr_a3_vehicles\hmmwv\data\hmmwv_gpk_tower_co.paa"};
	};
	class acr_a3_hmmwv_M1114_AGS_ACR: CUP_B_HMMWV_AGS_GPK_ACR {
		displayName = "HMMWV M1151 (AGS)";
		author = "$STR_ACR";
		dlc = "ACR_A3";
		side = 1;
		scope = 2;
		faction = "ACR_A3";
		vehicleclass = "Car";
		crew = "B_ACR_A3_Soldier_01_des";
		typicalCargo[] = {"B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des"};
		HiddenSelectionsTextures[] = {"acr_a3\acr_a3_vehicles\hmmwv\data\hmmwv_body_canvas_1_co.paa","acr_a3\acr_a3_vehicles\hmmwv\data\hmmwv_hood_canvas_co.paa","acr_a3\acr_a3_vehicles\hmmwv\data\hmmwv_regular_1_co.paa","acr_a3\acr_a3_vehicles\hmmwv\data\hmmwv_gpk_tower_co.paa"};
	};
	class acr_a3_HMMWV_DSHKM_GPK_ACR: CUP_B_HMMWV_DSHKM_GPK_ACR {
		displayName = "HMMWV M1151 (DShKM)";
		author = "$STR_ACR";
		dlc = "ACR_A3";
		side = 1;
		scope = 2;
		faction = "ACR_A3";
		vehicleclass = "Car";
		crew = "B_ACR_A3_Soldier_01_des";
		typicalCargo[] = {"B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des"};
		HiddenSelectionsTextures[] = {"acr_a3\acr_a3_vehicles\hmmwv\data\hmmwv_body_canvas_1_co.paa","acr_a3\acr_a3_vehicles\hmmwv\data\hmmwv_hood_canvas_co.paa","acr_a3\acr_a3_vehicles\hmmwv\data\hmmwv_regular_1_co.paa","acr_a3\acr_a3_vehicles\hmmwv\data\hmmwv_gpk_tower_co.paa"};
	};
	class acr_a3_HMMWV_Ambulance_ACR: CUP_B_HMMWV_Ambulance_ACR {
		displayName = "HMMWV (Ambulance)";
		author = "$STR_ACR";
		dlc = "ACR_A3";
		side = 1;
		scope = 2;
		faction = "ACR_A3";
		crew = "B_ACR_A3_Soldier_01_des";
		typicalCargo[] = {"B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des"};
	};
};