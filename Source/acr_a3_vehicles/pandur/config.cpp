////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.55
//Sat Jul 26 23:08:41 2014 : Source 'file' date Sat Jul 26 23:08:41 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class P:\acr_a3_vehicles\pandur\config.bin{
class CfgPatches
{
	class ACR_Kamaz
	{
		units[] = {"Pandur II","ACR_Pandur_Base","ACR_Pandur"};
		author[] = {"Filipsons"};
		authorUrl = "http://505skss.team-forum.net/";
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class I_APC_Wheeled_03_cannon_F;
	class ACR_Pandur_Base: I_APC_Wheeled_03_cannon_F
	{
		scope = 1;
		side = 1;
		faction = "ACR";
		vehicleclass = "Cars";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"",""};
	};
	class ACR_Pandur: ACR_Pandur_Base
	{
		scope = 2;
		displayName = "Pandur II";
		author = "Filipsons";
		transportFuel = 0;
		transportAmmo = 0;
		transportRepair = 100000;
		supplyRadius = 6.3;
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\pandur\data\Pandur01.paa","\acr_a3_vehicles\pandur\data\Pandur02.paa","\acr_a3_vehicles\pandur\data\Pandur03.paa","\acr_a3_vehicles\pandur\data\Pandur04.paa"};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 20;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 20;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
		};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 2;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 2;
			};
		};
	};
};
//};
