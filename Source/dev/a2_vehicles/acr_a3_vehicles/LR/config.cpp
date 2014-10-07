#include "\ca\Wheeled_ACR\basicdefines.hpp"
#include "\ca\Wheeled_ACR\transportGear.hpp"

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}

class CfgPatches
{
	class CAWheeled_ACR_LR
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.50;
		requiredAddons[] =
		{
			"CAWheeled_ACR"
		};
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
		
		vehicleClass = CarW;
		model = "\Ca\Wheeled_ACR\LR\LR_ACR.p3d";
		
		side = 1;
		faction = BIS_CZ;

		crew = "CZ_Soldier_Wdl_ACR";
		typicalCargo[] = {"CZ_Soldier_Wdl_ACR", "CZ_Soldier_Wdl_ACR"};
		
		enableGPS = true;
		
		class Turrets {};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1 {armor=0.15;};
			class HitGlass2: HitGlass2 {armor=0.10;};
			class HitGlass3: HitGlass3 {armor=0.10;};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ca\wheeled_E\LR\Data\LR_base.rvmat",
				"ca\wheeled_E\LR\Data\LR_base_damage.rvmat",
				"ca\wheeled_E\LR\Data\LR_base_destruct.rvmat",

				"ca\wheeled_E\LR\Data\LR_glass.rvmat",
				"ca\wheeled_E\LR\Data\LR_glass_damage.rvmat",
				"ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat",

				"ca\wheeled_E\LR\Data\LR_Special.rvmat",
				"ca\wheeled_E\LR\Data\LR_Special_damage.rvmat",
				"ca\wheeled_E\LR\Data\LR_Special_destruct.rvmat",

				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default_destruct.rvmat",
			};
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
	class LandRover_Ambulance_ACR: LandRover_ACR
	{
		vehicleClass = SupportWoodland_ACR;
		displayName = "Military Offroad (Ambulance)";
		model = "\Ca\Wheeled_ACR\LR\LR_AMB_ACR";

		attendant = 1;
		
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] =
		{
			"\ca\wheeled_acr\lr\data\lr_amb_ext_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ca\wheeled_acr\lr\data\lr_amb_ext.rvmat",
				"ca\wheeled_acr\lr\data\lr_amb_ext_damage.rvmat",
				"ca\wheeled_acr\lr\data\lr_amb_ext_destruct.rvmat",

				"ca\wheeled_E\LR\Data\LR_base.rvmat",
				"ca\wheeled_E\LR\Data\LR_base_damage.rvmat",
				"ca\wheeled_E\LR\Data\LR_base_destruct.rvmat",

				"ca\wheeled_E\LR\Data\LR_glass.rvmat",
				"ca\wheeled_E\LR\Data\LR_glass_damage.rvmat",
				"ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat",

				"ca\wheeled_E\LR\Data\LR_Special.rvmat",
				"ca\wheeled_E\LR\Data\LR_Special_damage.rvmat",
				"ca\wheeled_E\LR\Data\LR_Special_destruct.rvmat",

				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default_destruct.rvmat"
			};
		};
		
		class TransportWeapons {};
	};
	class LandRover_Ambulance_Des_ACR: LandRover_Ambulance_ACR
	{
		vehicleClass = Support;
		
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {CZ_Soldier_DES_EP1, CZ_Soldier_DES_EP1};		
		
		hiddenSelectionsTextures[] =
		{
			"\ca\wheeled_acr\lr\data\lr_amb_ext_desert_co.paa"
		};		
	};
};
