class CfgPatches
{
	class ACR_Hunter
	{
		units[] = {"ACR_Hunters"};
		author[] = {"Filipsons"};
		authorUrl = "http://505skss.team-forum.net/";
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
		hiddenSelectionsTextures[] = {"\ACR_Offroad\Hunter\data\Hunter_Kastle.paa","\ACR_Offroad\Hunter\data\Hunter_ostatni.paa",""};
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
		displayName = "Hunter .50 HMG";
		crew = "ACR_MOUT_Vojak01";
		attendant = 1;
		hiddenSelectionsTextures[] = {"\ACR_Offroad\Hunter\data\Hunter_Kastle.paa","\ACR_Offroad\Hunter\data\Hunter_ostatni.paa","\A3\Data_F\Vehicles\Turret_CO.paa"};
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
		hiddenSelectionsTextures[] = {"\ACR_Offroad\Offroad\data\Offroad01.paa","\ACR_Offroad\Offroad\data\Offroad01.paa"};
		supplyRadius = 10;
		attendant = "true";
		maximumLoad = 10000;
		transportMaxWeapons = 20;
		transportMaxMagazines = 1000;
		transportMaxBackpacks = 20;
		class EventHandlersF;
		class EventHandlers: EventHandlersF
		{
			init = "(_this select 0) execVM ""\ACR_Offroad\Offroad\data\randomize_IG.sqf""";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
		};
	};
};
