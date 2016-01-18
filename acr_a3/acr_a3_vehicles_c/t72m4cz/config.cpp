class CfgPatches {
	class acr_a3_tank_T72M4CZ {
		units[] = {"acr_a3_T72M4CZ"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"CUP_TrackedVehicles_T72"};
	};
};

class CfgVehicles {
    class CUP_B_T72_CZ;
	class acr_a3_T72M4CZ: CUP_B_T72_CZ {
		scope = 2;
		author="ACR A3";
		vehicleClass = "Armored";
		displayName = "T-72M4 CZ";
		side = 1;
		faction = "ACR_A3";
		crew = "B_ACR_A3_crew";
		typicalCargo[] = {"B_ACR_A3_crew"};
	};
};