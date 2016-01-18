class CfgPatches {
	class acr_a3_uaz {
		units[] = {"ACR_A3_UAZ_469", "ACR_A3_UAZ_469_Open"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"CUP_WheeledVehicles_UAZ"};
	};
};

class CfgVehicles {
    class CUP_B_UAZ_Unarmed_ACR;
    class CUP_B_UAZ_Open_ACR;
    class ACR_A3_UAZ_469: CUP_B_UAZ_Unarmed_ACR {
        author = "$STR_ACR";
        dlc = "ACR_A3";
        vehicleClass = "Car";
        displayName = "UAZ-469";
        scope = 2;
        side = 1;
        crew = "B_ACR_A3_Soldier_01";
		typicalCargo[] = {"B_ACR_A3_Soldier_01"};
        faction = "ACR_A3";
    };
    class ACR_A3_UAZ_469_Open: CUP_B_UAZ_Open_ACR {
        author = "$STR_ACR";
        vehicleClass = "Car";
        displayName = "UAZ-469 (Open)";
        scope = 2;
        side = 1;
        crew = "B_ACR_A3_Soldier_01";
		typicalCargo[] = {"B_ACR_A3_Soldier_01"};
        faction = "ACR_A3";
    };
};
