class CfgPatches {
	class acr_a3_mohawk {
		units[] = {"ACR_Mohawk_FG"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F_Beta_Heli_Transport_02"};
	};
};

class CfgVehicles {
	class I_Heli_Transport_02_F;
	class ACR_Mohawk_FG: I_Heli_Transport_02_F {
		author = "$STR_ACR";
		side = 1;
		faction = "ACR_A3";
		vehicleclass = "Air";
		displayName = "AW101 Merlin";
		crew = "B_ACR_A3_Pilot";
		typicalCargo[] = {"B_ACR_A3_Pilot"};
		scope = 1;
		scopeCurator = 0;
	};
};
