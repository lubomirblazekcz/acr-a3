////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.55
//Sat Jul 26 23:08:28 2014 : Source 'file' date Sat Jul 26 23:08:28 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class P:\acr_a3_vehicles\offroad\config.bin{
class CfgPatches
{
	class acr_a3_Offroad
	{
		units[] = {"Offroad01"};
		author = "$STR_ACR";
//		authorUrl = "http://505skss.team-forum.net/";
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class B_G_Offroad_01_F;
	class ACR_Offroad: B_G_Offroad_01_F
	{
		side = 1;
		author = "$STR_ACR";
		faction = "ACR";
		displayName = "Offroad";
		crew = "ACR_MOUT_Vojak01";
		typicalCargo[] = {"crew=""ACR_MOUT_Vojak01"""};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\offroad\data\Offroad01.paa","\acr_a3_vehicles\offroad\data\Offroad01.paa"};
	};
};
//};
