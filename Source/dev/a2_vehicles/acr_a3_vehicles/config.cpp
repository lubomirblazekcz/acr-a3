#include "basicDefines.hpp"
#include "transportGear.hpp"

class CfgPatches
{
	class CAWheeled_ACR
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.50;
		requiredAddons[] = {"CA_E", "CA_ACR", "CAWheeled", "CAWheeled_E", "CAWheeled_E_BRDM2", "CAWeapons_E", "CAWheeled_E_HMMWV","CAWheeled_E_V3S"};
	};
};

class CfgVehicles
{
	class BRDM2_Base;
	class BRDM2_ACR: BRDM2_Base
	{
		expansion = 3;
		scope = 2;

		vehicleClass = ArmouredW;

		side = 1;
		faction = BIS_CZ;

		accuracy = 0.30;

		crew = CZ_Soldier_Crew_Wdl_ACR;
		typicalCargo[] = {CZ_Soldier_Crew_Wdl_ACR};

		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] =
		{
			"\CA\Wheeled_ACR\Data\BDRM2_01_ACR_CO.paa"
		};

		class TransportWeapons
		{
			addACRWeapons(1)
		};
		class TransportMagazines
		{
			addACRMagazines(1)
		};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03, 0.003, 0.003, 1};
				ambient[] = {0.003, 0.0003, 0.0003, 1};
				brightness = 0.001;
				blinking = 1;
			};
		};
	};
	class BRDM2_Desert_ACR: BRDM2_ACR
	{
		vehicleClass = Armored;

		crew = CZ_Soldier_Crew_Dst_ACR;
		typicalCargo[] = {CZ_Soldier_Crew_Dst_ACR};

		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
		{
			"\CA\Wheeled_ACR\Data\BDRM2_01_ACR_DES_CO.paa",
			"\CA\Wheeled_ACR\Data\BDRM2_02_ACR_DES_CO.paa"
		};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03, 0.003, 0.003, 1};
				ambient[] = {0.003, 0.0003, 0.0003, 1};
				brightness = 0.001;
				blinking = 1;
			};
		};
	};

	class UAZ_Unarmed_Base;
	class UAZ_Unarmed_ACR: UAZ_Unarmed_Base
	{
		expansion = 3;
		scope = 2;

		vehicleClass = CarW;

		side = 1;
		faction = BIS_CZ;
		accuracy=0.30;

		crew = "CZ_Soldier_Wdl_ACR";
		typicalCargo[] = {"CZ_Soldier_Wdl_ACR","CZ_Soldier_Wdl_ACR","CZ_Soldier_Wdl_ACR"};

		hiddenSelectionsTextures[] =
		{
			"\CA\Wheeled_ACR\Data\Uaz_ACR_main_CO.paa"
		};

		class TransportWeapons
		{
			addACRWeapons(1)
		};
		class TransportMagazines
		{
			addACRMagazines(1)
		};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03, 0.003, 0.003, 1};
				ambient[] = {0.003, 0.0003, 0.0003, 1};
				brightness = 0.001;
				blinking = 1;
			};
		};
	};
/*
	class V3S_Base_EP1;
	class V3S_Open_Civ_ACR: V3S_Base_EP1
	{
		expansion = 3;
		scope = 2;

		displayname = "V3S Open";
		model = "\ca\wheeled_E\V3S\V3S_open";

		side = 3;
		faction = CIV;

		crew = Villager1;
		typicalCargo[] = {Villager1};

		Icon = "\CA\wheeled2\data\UI\Icon_V3S_CA.paa";
		Picture = "\CA\wheeled_e\data\UI\Picture_V3S_open_CA.paa";
		MapSize = 7;

		driverAction = V3S_Driver_EP1;

		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\Ca\Wheeled_ACR\Data\v3s_kabpar_civil_ACR_co.paa", "\Ca\Wheeled_ACR\Data\v3s_intkor_civil_ACR_co.paa"};
	};

	class Ikarus_Base;
	class Ikarus_ACR: Ikarus_Base
	{
		expansion = 3;
		scope = 2;

		displayName = "Bus (red)";

		side = 3;
		faction = CIV;

		crew = Citizen3;
		typicalCargo[] = {Citizen3};

		hiddenSelectionsTextures[] = {"\Ca\Wheeled_ACR\Data\Bus_exterior_ACR_CO.paa"};
	};
	*/
};