class CfgPatches
{
	class acr_a3_Hunter
	{
		units[] = {"ACR_Hunter_Unarmed", "ACR_Hunter_HMG", "ACR_Hunter_GMG","ACR_Hunter_HMG_02"};
		author = "$STR_ACR";
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] = {"A3_Soft_F"};
	};
};
class CfgVehicles
{
	class B_MRAP_01_F;
	class B_MRAP_01_hmg_F;
	class B_MRAP_01_gmg_F;
	class ACR_Hunter_Unarmed: B_MRAP_01_F
	{
		side = 1;
		faction = "ACR";
		vehicleclass = "Car";
		displayName = "M-ATV";
		author = "$STR_ACR";
		crew = "acr_a3_soldier_01";
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\hunter\data\Hunter_Kastle.paa","\acr_a3\acr_a3_vehicles\hunter\data\Hunter_plachta.paa",""};
	};
	class ACR_Hunter_HMG: B_MRAP_01_hmg_F
	{
		side = 1;
		faction = "ACR";
		vehicleclass = "Car";
		displayName = "M-ATV HMG";
		author = "$STR_ACR";
		crew = "acr_a3_soldier_01";
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\hunter\data\Hunter_Kastle.paa","\acr_a3\acr_a3_vehicles\hunter\data\Hunter_plachta.paa","\acr_a3\acr_a3_vehicles\hunter\data\Hunter_turret.paa"};
	};
	class ACR_Hunter_GMG: B_MRAP_01_gmg_F
	{
		side = 1;
		faction = "ACR";
		vehicleclass = "Car";
		displayName = "M-ATV GMG";
		author = "$STR_ACR";
		crew = "acr_a3_soldier_01";
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\hunter\data\Hunter_Kastle.paa","\acr_a3\acr_a3_vehicles\hunter\data\Hunter_plachta.paa","\acr_a3\acr_a3_vehicles\hunter\data\Hunter_turret.paa"};
	};
	class ACR_Hunter_HMG_02: B_MRAP_01_hmg_F
	{
		side = 1;
		scope = 1;
		faction = "ACR";
		vehicleclass = "Car";
		displayName = "M-ATV HMG";
		author = "$STR_ACR";
		crew = "acr_a3_soldier_01_des";
	};
};