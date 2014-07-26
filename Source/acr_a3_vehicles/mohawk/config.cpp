////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.55
//Sat Jul 26 23:07:17 2014 : Source 'file' date Sat Jul 26 23:07:17 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class P:\acr_a3_vehicles\mohawk\config.bin{
class CfgPatches
{
	class ACR_Mohawk
	{
		units[] = {"CH49_Mohawk_FG"};
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
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\mohawk\data\blu_mohawk_co.paa","\acr_a3_vehicles\mohawk\data\blu_mohawk2_co.paa","\acr_a3_vehicles\mohawk\data\blu_mohawk3_co.paa"};
		typicalCargo[] = {"ACR_Pilot"};
		availableForSupportTypes[] = {"Drop","Transport"};
	};
};
//};
