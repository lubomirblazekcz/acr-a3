class CfgPatches
{
	class ACR_Kamaz
	{
		units[] = {"ACR_Kamaz", "ACR_Kamaz02", "ACR_Kamaz03", "ACR_Kamaz04"};
		author[] = {"Filipsons"};
		authorUrl = "http://505skss.team-forum.net/";
	};
};
class CfgVehicleClasses
{
	class Cars
	{
		displayName = "Vehicles"; //v editore v jako vehicles ACR Technika puvodne
	};
};
class CfgVehicles
{
	class O_Truck_02_covered_F;
	class ACR_Kamaz_Base: O_Truck_02_covered_F
	{
		scope = 1;
		side = 1;
		faction = "ACR";
		vehicleclass = "Cars";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"",""};
	};
	class O_Truck_02_transport_F;
	class ACR_Kamaz2_Base: O_Truck_02_transport_F
	{
		scope = 1;
		side = 1;
		faction = "ACR";
		vehicleclass = "Cars";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"",""};
	};
	class O_Truck_02_box_F;
	class ACR_Kamaz3_Base: O_Truck_02_box_F
	{
		scope = 1;
		side = 1;
		faction = "ACR";
		vehicleclass = "Cars";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"",""};
	};
	class O_Truck_02_fuel_F;
	class ACR_Kamaz4_Base: O_Truck_02_fuel_F
	{
		scope = 1;
		side = 1;
		faction = "ACR";
		vehicleclass = "Cars";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"",""};
	};
	class ACR_Kamaz: ACR_Kamaz_Base
	{
		scope = 2;
		displayName = "Kamaz - zakrytý";
		author = "Filipsons";
		crew = "ACR_MOUT_Vojak01";
		transportFuel = 0;
		transportAmmo = 0;
		transportRepair = 0;
		supplyRadius = 6.3;
		hiddenSelectionsTextures[] = {"\ACR_Kamaz\Kamaz\data\ACR_Kamaz.paa","\ACR_Kamaz\Kamaz\data\ACR_Kamaz_Plachta.paa"};
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
	class ACR_Kamaz02: ACR_Kamaz2_Base
	{
		scope = 2;
		displayName = "Kamaz - odkrytý";
		author = "Filipsons";
		crew = "ACR_MOUT_Vojak01";
		transportFuel = 0;
		transportAmmo = 0;
		transportRepair = 0;
		supplyRadius = 6.3;
		hiddenSelectionsTextures[] = {"\ACR_Kamaz\Kamaz\data\ACR_Kamaz.paa","\ACR_Kamaz\Kamaz\data\ACR_Kamaz_Plachta.paa"};
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
	class ACR_Kamaz03: ACR_Kamaz3_Base
	{
		scope = 2;
		displayName = "Kamaz - technik";
		author = "Filipsons";
		crew = "ACR_MOUT_Vojak01";
		transportFuel = 0;
		transportAmmo = 0;
		transportRepair = 100000;
		supplyRadius = 6.3;
		hiddenSelectionsTextures[] = {"\ACR_Kamaz\Kamaz\data\ACR_Kamaz.paa","\ACR_Kamaz\Kamaz\data\ACR_Kamaz_Kabina.paa"};
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
	class ACR_Kamaz04: ACR_Kamaz4_Base
	{
		scope = 2;
		displayName = "Kamaz - cisterna";
		author = "Filipsons";
		crew = "ACR_MOUT_Vojak01";
		transportFuel = 100000;
		transportAmmo = 0;
		transportRepair = 0;
		supplyRadius = 6.3;
		hiddenSelectionsTextures[] = {"\ACR_Kamaz\Kamaz\data\ACR_Kamaz.paa","\ACR_Kamaz\Kamaz\data\ACR_Kamaz_cisterna.paa"};
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
