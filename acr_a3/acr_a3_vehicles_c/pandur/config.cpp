class CfgPatches {
	class acr_a3_Pandur {
		units[] = {"ACR_Pandur"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_Armor_F_APC_Wheeled_03"};
	};
};
class CfgVehicles {
	class I_APC_Wheeled_03_cannon_F;
	class ACR_Pandur: I_APC_Wheeled_03_cannon_F {
		scope = 2;
		side = 1;
		faction = "ACR_A3";
		vehicleclass = "Armored";
		displayName = "Pandur II";
		author = "$STR_ACR";
		dlc = "ACR_A3";
		crew = "B_ACR_A3_crew";
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\pandur\data\Pandur01.paa","\acr_a3\acr_a3_vehicles\pandur\data\Pandur02.paa","\acr_a3\acr_a3_vehicles\pandur\data\Pandur03.paa","\acr_a3\acr_a3_vehicles\pandur\data\Pandur04.paa"};
	};
};
