class CfgPatches
{
	class acr_a3_Kamaz
	{
		units[] = {"ACR_Kamaz","ACR_Kamaz02","ACR_Kamaz03","ACR_Kamaz04","ACR_Kamaz05"};
		weapons[] = {};
        requiredVersion = 0.1;
		author = "$STR_ACR";
		requiredAddons[] = {"A3_Armor_F","A3_Soft_F"};
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
		scope = 2;
		faction = "ACR_A3";
		displayName = "$STR_ACR_KAMAZ_COVERED";
		author = "$STR_ACR";
		crew = "B_ACR_A3_Soldier_01";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\kamaz\data\ACR_Kamaz.paa","\acr_a3\acr_a3_vehicles\kamaz\data\ACR_Kamaz_Plachta.paa"};
		_generalMacro = "ACR_Kamaz";
        typicalCargo[] = {"B_ACR_A3_Soldier_01"};
	};
	class ACR_Kamaz02: O_Truck_02_transport_F
	{
		side = 1;
		scope = 2;
		faction = "ACR_A3";
		displayName = "$STR_ACR_KAMAZ_TRANSPORT";
		author = "$STR_ACR";
		crew = "B_ACR_A3_Soldier_01";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\kamaz\data\ACR_Kamaz.paa","\acr_a3\acr_a3_vehicles\kamaz\data\ACR_Kamaz_Plachta.paa"};
		_generalMacro = "ACR_Kamaz02";
        typicalCargo[] = {"B_ACR_A3_Soldier_01"};
	};
	class ACR_Kamaz03: O_Truck_02_box_F
	{
		side = 1;
		scope = 2;
		faction = "ACR_A3";
		displayName = "$STR_ACR_KAMAZ_BOX";
		author = "$STR_ACR";
		crew = "B_ACR_A3_Soldier_01";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\kamaz\data\ACR_Kamaz.paa","\acr_a3\acr_a3_vehicles\kamaz\data\ACR_Kamaz_Kabina.paa"};
		_generalMacro = "ACR_Kamaz03";
        typicalCargo[] = {"B_ACR_A3_Soldier_01"};
	};
	class ACR_Kamaz04: O_Truck_02_fuel_F
	{
		side = 1;
		scope = 2;
		faction = "ACR_A3";
		displayName = "$STR_ACR_KAMAZ_FUEL";
		author = "$STR_ACR";
		crew = "B_ACR_A3_Soldier_01";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\kamaz\data\ACR_Kamaz.paa","\acr_a3\acr_a3_vehicles\kamaz\data\ACR_Kamaz_cisterna.paa"};
		_generalMacro = "ACR_Kamaz04";
        typicalCargo[] = {"B_ACR_A3_Soldier_01"};
	};
	class ACR_Kamaz05: I_Truck_02_medical_F
	{
		side = 1;
		scope = 2;
		faction = "ACR_A3";
		displayName = "$STR_ACR_KAMAZ_MED";
		author = "$STR_ACR";
		crew = "B_ACR_A3_Soldier_01";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\kamaz\data\ACR_Kamaz.paa","\acr_a3\acr_a3_vehicles\kamaz\data\ACR_Kamaz_Plachta.paa"};
		_generalMacro = "ACR_Kamaz05";
        typicalCargo[] = {"B_ACR_A3_Soldier_01"};
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
