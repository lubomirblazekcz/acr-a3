#define _ARMA_

class CfgPatches
{
	class acr_a3_Mohawk
	{
		units[] = {"acr_a3_Mohawk_FG"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F_Beta_Heli_Transport_02"};
		magazines[] = {};
		ammo[] = {};
	};
};
class cfgVehicles
{
	class Heli_Transport_02_base_F;
	class I_Heli_Transport_02_F;
	class ACR_Mohawk_FG: I_Heli_Transport_02_F
	{
		_generalMacro = "B_Heli_Transport_02_base_F";
		author = "$STR_ACR";
		side = 1;
		faction = "ACR";
		vehicleclass = "Air";
		displayName = "AW101 Merlin";
		crew = "ACR_Pilot";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\mohawk\data\blu_mohawk_co.paa","\acr_a3_vehicles\mohawk\data\blu_mohawk2_co.paa","\acr_a3_vehicles\mohawk\data\blu_mohawk3_co.paa"};
		typicalCargo[] = {"ACR_Pilot"};
	};
};
//};
