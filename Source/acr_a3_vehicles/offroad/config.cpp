////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.55
//Sat Jul 26 23:08:28 2014 : Source 'file' date Sat Jul 26 23:08:28 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class P:\acr_a3_vehicles\offroad\config.bin{
class CfgPatches
{
	class ACR_Hunter
	{
		units[] = {"ACR_Hunters","Offroad01"};
		author[] = {"Filipsons"};
		authorUrl = "http://505skss.team-forum.net/";
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class B_MRAP_01_F;
	class Hunter01: B_MRAP_01_F
	{
		side = 1;
		faction = "ACR";
		vehicleclass = "Cars";
		displayName = "Hunter";
		crew = "ACR_MOUT_Vojak01";
		attendant = 1;
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\offroad\data\Hunter_Kastle.paa","\acr_a3_vehicles\offroad\data\Hunter_ostatni.paa",""};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 8;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
		};
	};
	class B_MRAP_01_hmg_F;
	class Hunter02: B_MRAP_01_hmg_F
	{
		side = 1;
		faction = "ACR";
		vehicleclass = "Cars";
		displayName = "Oshkosh M-ATV .50 HMG";
		crew = "ACR_MOUT_Vojak01";
		attendant = 1;
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\offroad\data\Hunter_Kastle.paa","\acr_a3_vehicles\offroad\data\Hunter_ostatni.paa","\A3\Data_F\Vehicles\Turret_CO.paa"};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 8;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
		};
	};
	class Offroad_01_base_F;
	class Offroad01: Offroad_01_base_F
	{
		scope = 2;
		side = 1;
		faction = "ACR";
		vehicleclass = "Cars";
		displayName = "Offroad ACR";
		crew = "ACR_MOUT_Vojak01";
		typicalCargo[] = {"crew=""ACR_MOUT_Vojak01"""};
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\offroad\data\Offroad01.paa","\acr_a3_vehicles\offroad\data\Offroad01.paa"};
		supplyRadius = 10;
		attendant = 1;
		maximumLoad = 10000;
		transportMaxWeapons = 20;
		transportMaxMagazines = 1000;
		transportMaxBackpacks = 20;
		class EventHandlersF;
		class EventHandlers: EventHandlersF
		{
			init = "(_this select 0) execVM ""\acr_a3_vehicles\offroad\Scripts\randomize_IG.sqf""";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
		};
	};
};
//};
