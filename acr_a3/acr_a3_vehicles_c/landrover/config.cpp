class CfgPatches {
	class acr_a3_landrover_c {
		units[] = {"ACR_A3_LandRover","ACR_A3_LandRover_Des","ACR_A3_LandRover_MG","ACR_A3_LandRover_MG_Des","ACR_A3_LandRover_Special","ACR_A3_LandRover_Special_Des","ACR_A3_LandRover_Ambulance","ACR_A3_LandRover_Ambulance_Des"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"CUP_WheeledVehicles_LR"};
	};
};

class CfgVehicles {
    class CUP_B_LR_Transport_CZ_W;
    class CUP_B_LR_Transport_CZ_D;
    class CUP_B_LR_MG_CZ_W;
    class CUP_B_LR_Ambulance_CZ_W;
    class CUP_B_LR_Ambulance_CZ_D;
    class CUP_B_LR_Special_CZ_W;
    class CUP_B_LR_Special_Des_CZ_D;
	class ACR_A3_LandRover: CUP_B_LR_Transport_CZ_W {
		displayname = "$STR_acr_a3_landrover";
		scope = 2;
		side = 1;
		vehicleClass = "Car";
		faction = "ACR_A3";
		author = "ACR_A3"
		dlc = "ACR_A3";
		crew = "B_ACR_A3_Soldier_01";
		typicalCargo[] = {"B_ACR_A3_Soldier_01","B_ACR_A3_Soldier_01"};
	};
	class ACR_A3_LandRover_Des: CUP_B_LR_Transport_CZ_D {
		displayname = "$STR_acr_a3_landrover_des";
		scope = 2;
		side = 1;
		faction = "ACR_A3";
		author = "ACR_A3"
		dlc = "ACR_A3";
		crew = "B_ACR_A3_Soldier_01_des";
		typicalCargo[] = {"B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des"};
	};
	class ACR_A3_LandRover_MG: CUP_B_LR_MG_CZ_W {
		displayname = "$STR_acr_a3_landrover_mg";
		scope = 2;
		side = 1;
		faction = "ACR_A3";
		author = "ACR_A3"
		dlc = "ACR_A3";
		crew = "B_ACR_A3_Soldier_01";
		typicalCargo[] = {"B_ACR_A3_Soldier_01"};
	};
	class ACR_A3_LandRover_MG_Des: CUP_B_LR_MG_CZ_W {
		displayname = "$STR_acr_a3_landrover_mg_des";
		scope = 2;
		side = 1;
		faction = "ACR_A3";
		author = "ACR_A3"
		dlc = "ACR_A3";
		crew = "B_ACR_A3_Soldier_01_des";
		typicalCargo[] = {"B_ACR_A3_Soldier_01_des"};
		hiddenselectionstextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_acr_sand_base_co.paa"};
	};
	class ACR_A3_LandRover_Special: CUP_B_LR_Special_CZ_W {
		scope = 2;
		side = 1;
		faction = "ACR_A3";
		author = "ACR_A3"
		dlc = "ACR_A3";
		crew = "B_ACR_A3_Soldier_01";
		typicalCargo[] = {"B_ACR_A3_Soldier_01","B_ACR_A3_Soldier_01"};
	};
	class ACR_A3_LandRover_Special_Des: CUP_B_LR_Special_Des_CZ_D {
		scope = 2;
		side = 1;
		faction = "ACR_A3";
		author = "ACR_A3"
		dlc = "ACR_A3";
		crew = "B_ACR_A3_Soldier_01_des";
		typicalCargo[] = {"B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des"};
		displayname = "$STR_acr_a3_landrover_special_des";
	};
	class ACR_A3_LandRover_Ambulance: CUP_B_LR_Ambulance_CZ_W {
		scope = 2;
		side = 1;
		faction = "ACR_A3";
		author = "ACR_A3"
		dlc = "ACR_A3";
		vehicleClass = "Support";
		displayName = "$STR_acr_a3_landrover_ambulance";
		crew = "B_ACR_A3_Soldier_01";
		typicalCargo[] = {"B_ACR_A3_Soldier_01","B_ACR_A3_Soldier_01"};
	};
	class ACR_A3_LandRover_Ambulance_Des: CUP_B_LR_Ambulance_CZ_D {
		scope = 2;
		side = 1;
		faction = "ACR_A3";
		author = "ACR_A3"
		dlc = "ACR_A3";
		displayName = "$STR_acr_a3_landrover_ambulance_des";
		vehicleClass = "Support";
		crew = "B_ACR_A3_Soldier_01_des";
		typicalCargo[] = {"B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des"};
	};
};
