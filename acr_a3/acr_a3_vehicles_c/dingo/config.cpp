class CfgPatches {
	class acr_a3_dingo {
		units[] = {"acr_a3_dingo_wdl","acr_a3_dingo_des","acr_a3_dingo_gl_wdl","acr_a3_dingo_gl_des"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"CUP_WheeledVehicles_Dingo"};
	};
};

class CfgVehicles {
    class CUP_B_Dingo_Wdl;
    class CUP_B_Dingo_Des;
    class CUP_B_Dingo_GL_Wdl;
    class CUP_B_Dingo_GL_Des;
	class acr_a3_dingo_wdl: CUP_B_Dingo_Wdl {
		displayName = "$STR_ACR_DINGO_MG";
		crew = "B_ACR_A3_Soldier_01";
		typicalCargo[] = {"B_ACR_A3_Soldier_01","B_ACR_A3_Soldier_01","B_ACR_A3_Soldier_01"};
		vehicleClass = "Car";
        scope = 2;
        side = 1;
        faction = "ACR_A3";
        author = "ACR_A3";
        dlc = "ACR_A3";
	};
	class acr_a3_dingo_des: CUP_B_Dingo_Des {
		displayname = "$STR_ACR_DINGO_MG_DES";
		crew = "B_ACR_A3_Soldier_01_des";
		typicalCargo[] = {"B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des"};
		vehicleClass = "Car";
        scope = 2;
        side = 1;
        faction = "ACR_A3";
        author = "ACR_A3";
        dlc = "ACR_A3";
	};
	class acr_a3_dingo_gl_wdl: CUP_B_Dingo_GL_Wdl {
		displayname = "$STR_ACR_DINGO_GL";
		crew = "B_ACR_A3_Soldier_01";
		typicalCargo[] = {"B_ACR_A3_Soldier_01","B_ACR_A3_Soldier_01","B_ACR_A3_Soldier_01"};
		vehicleClass = "Car";
        scope = 2;
        side = 1;
        faction = "ACR_A3";
        author = "ACR_A3";
        dlc = "ACR_A3";
	};
	class acr_a3_dingo_gl_des: CUP_B_Dingo_GL_Des {
		displayname = "$STR_ACR_DINGO_GL_DES";
		crew = "B_ACR_A3_Soldier_01_des";
		typicalCargo[] = {"B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des"};
		vehicleClass = "Car";
        scope = 2;
        side = 1;
        faction = "ACR_A3";
        author = "ACR_A3";
        dlc = "ACR_A3";
	};
};
