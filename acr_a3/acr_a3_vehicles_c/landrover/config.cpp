////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.88
//Fri Jan 09 15:46:19 2015 : Source 'file' date Fri Jan 09 15:46:19 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	DestructNo = 0,
	DestructBuilding = 1,
	DestructEngine = 2,
	DestructTree = 3,
	DestructTent = 4,
	DestructMan = 5,
	DestructDefault = 6,
	DestructWreck = 7
};

//Class P:\acr_a3\acr_a3_vehicles\landrover\config.bin{
class CfgPatches
{
	class acr_a3_LR
	{
		units[] = {"LandRover_ACR","LandRover_Ambulance_ACR","LandRover_Ambulance_Des_ACR"};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAWheeled_ACR"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
	};
	class LandRover_Base: Car
	{
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
		};
	};
	class LandRover_ACR: LandRover_Base
	{
		expansion = 3;
		scope = 2;
		vehicleClass = "CarW";
		model = "\acr_a3\acr_a3_vehicles\landrover\LR_ACR.p3d";
		side = 1;
		faction = "BIS_CZ";
		crew = "CZ_Soldier_Wdl_ACR";
		typicalCargo[] = {"CZ_Soldier_Wdl_ACR","CZ_Soldier_Wdl_ACR"};
		enableGPS = 1;
		class Turrets{};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.15;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"acr_a3\acr_a3_vehicles\landrover\data\LR_base.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default_destruct.rvmat"};
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
	};
	class LandRover_Ambulance_ACR: LandRover_ACR
	{
		vehicleClass = "SupportWoodland_ACR";
		displayName = "Military Offroad (Ambulance)";
		model = "\acr_a3\acr_a3_vehicles\landrover\LR_AMB_ACR.p3d";
		attendant = 1;
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\landrover\data\lr_amb_ext_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"acr_a3\acr_a3_vehicles\landrover\data\lr_amb_ext.rvmat","acr_a3\acr_a3_vehicles\landrover\data\lr_amb_ext_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\lr_amb_ext_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default_destruct.rvmat"};
		};
		class TransportWeapons{};
	};
	class LandRover_Ambulance_Des_ACR: LandRover_Ambulance_ACR
	{
		vehicleClass = "Support";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1","CZ_Soldier_DES_EP1"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\landrover\data\lr_amb_ext_desert_co.paa"};
	};
};
//};
