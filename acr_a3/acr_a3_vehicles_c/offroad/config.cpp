class CfgPatches {
	class acr_a3_Offroad {
		units[] = {"ACR_Offroad", "ACR_Offroad_Armed"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_Soft_F"};
	};
};
class CfgVehicles {
    class Offroad_01_base_F;
    class Offroad_01_armed_base_F;
	class ACR_Offroad: Offroad_01_base_F {
		side = 1;
		scope = 1;
		curatorScope = 0;
		author = "$STR_ACR";
		dlc = "ACR_A3";
		faction = "ACR_A3";
		displayName = "Offroad";
		crew = "B_ACR_A3_Soldier_01";
		typicalCargo[] = {"B_ACR_A3_Soldier_01"};
	};
    class ACR_Offroad_Armed: Offroad_01_armed_base_F {
        side = 1;
        scope = 2;
        author = "$STR_ACR";
        dlc = "ACR_A3";
        faction = "ACR_A3";
        displayName = "$STR_A3_CFGVEHICLES_OFFROAD_ARMED_BASE0";
        crew = "B_ACR_A3_Soldier_01";
        typicalCargo[] = {"B_ACR_A3_Soldier_01"};
    };
};
