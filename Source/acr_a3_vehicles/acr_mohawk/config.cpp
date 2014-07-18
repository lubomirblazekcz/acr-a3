class CfgPatches
{
	class ACR_Mohawk
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F_Beta_Heli_Transport_02"};
	};
};
class cfgVehicles
{
	class Heli_Transport_02_base_F;
	class CH49_Mohawk_FG: Heli_Transport_02_base_F
	{
		_generalMacro = "B_Heli_Transport_02_base_F";
		scope = 2;
		side = 1;
		faction = "ACR";
		vehicleclass = "Cars";
		displayName = "ACR CH49";
		crew = "ACR_Pilot";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\acr_mohawk\Data\blu_mohawk_co.paa","\acr_a3_vehicles\acr_mohawk\Data\blu_mohawk2_co.paa","\acr_a3_vehicles\acr_mohawk\Data\blu_mohawk3_co.paa"};
		typicalCargo[] = {"ACR_Pilot"};
		availableForSupportTypes[] = {"Drop","Transport"};
	};
};
