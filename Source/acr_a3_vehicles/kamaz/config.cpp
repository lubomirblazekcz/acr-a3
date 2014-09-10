////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.55
//Sat Jul 26 23:07:04 2014 : Source 'file' date Sat Jul 26 23:07:04 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class P:\acr_a3_vehicles\kamaz\config.bin{
class CfgPatches
{
	class acr_a3_Kamaz
	{
		units[] = {"ACR_Kamaz","ACR_Kamaz02","ACR_Kamaz03","ACR_Kamaz04","ACR_Kamaz05"};
		author = "$STR_ACR";
//		authorUrl = "http://505skss.team-forum.net/";
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class O_Truck_02_covered_F;
	class O_Truck_02_transport_F;
	class O_Truck_02_box_F;
	class O_Truck_02_fuel_F;
	class I_Truck_02_medical_F;

	class ACR_Kamaz: O_Truck_02_covered_F
	{
		side = 1;
		faction = "ACR";
		displayName = "$STR_ACR_KAMAZ_COVERED";
		author = "$STR_ACR";
		crew = "ACR_MOUT_Vojak01";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\kamaz\data\ACR_Kamaz.paa","\acr_a3_vehicles\kamaz\data\ACR_Kamaz_Plachta.paa"};
	};
	class ACR_Kamaz02: O_Truck_02_transport_F
	{
		side = 1;
		faction = "ACR";
		displayName = "$STR_ACR_KAMAZ_TRANSPORT";
		author = "$STR_ACR";
		crew = "ACR_MOUT_Vojak01";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\kamaz\data\ACR_Kamaz.paa","\acr_a3_vehicles\kamaz\data\ACR_Kamaz_Plachta.paa"};
	};
	class ACR_Kamaz03: O_Truck_02_box_F
	{
		side = 1;
		faction = "ACR";
		displayName = "$STR_ACR_KAMAZ_BOX";
		author = "$STR_ACR";
		crew = "ACR_MOUT_Vojak01";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\kamaz\data\ACR_Kamaz.paa","\acr_a3_vehicles\kamaz\data\ACR_Kamaz_Kabina.paa"};
	};
	class ACR_Kamaz04: O_Truck_02_fuel_F
	{
		side = 1;
		faction = "ACR";
		displayName = "$STR_ACR_KAMAZ_FUEL";
		author = "$STR_ACR";
		crew = "ACR_MOUT_Vojak01";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\kamaz\data\ACR_Kamaz.paa","\acr_a3_vehicles\kamaz\data\ACR_Kamaz_cisterna.paa"};
	};
	class ACR_Kamaz05: I_Truck_02_medical_F
	{
		side = 1;
		faction = "ACR";
		displayName = "$STR_ACR_KAMAZ_MED";
		author = "$STR_ACR";
		crew = "ACR_MOUT_Vojak01";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\kamaz\data\ACR_Kamaz.paa","\acr_a3_vehicles\kamaz\data\ACR_Kamaz_Plachta.paa"};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 30;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 15;
			};
		};
	};
};
