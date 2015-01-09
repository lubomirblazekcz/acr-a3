class CfgPatches
{
	class acr_a3_Pandur
	{
		units[] = {"ACR_Pandur"};
		author = "$STR_ACR";
		weapons[] = {};
		magazines[] = {};
		requiredAddons[] = {"A3_Armor_F_APC_Wheeled_03"};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class I_APC_Wheeled_03_cannon_F;
	class ACR_Pandur: I_APC_Wheeled_03_cannon_F
	{
		scope = 2;
		side = 1;
		faction = "ACR";
		vehicleclass = "Armored";
		displayName = "Pandur II";
		author = "$STR_ACR";
		crew = "ACR_Neozbrojeny";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\pandur\data\Pandur01.paa","\acr_a3\acr_a3_vehicles\pandur\data\Pandur02.paa","\acr_a3\acr_a3_vehicles\pandur\data\Pandur03.paa","\acr_a3\acr_a3_vehicles\pandur\data\Pandur04.paa"};
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
