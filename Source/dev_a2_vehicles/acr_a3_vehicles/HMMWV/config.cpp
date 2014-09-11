#include "\ca\Wheeled_ACR\basicdefines.hpp"
#include "\ca\Wheeled_ACR\transportGear.hpp"

class CfgPatches
{
	class CAWheeled_ACR_HMMWV
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.50;
		requiredAddons[] = {"CAWheeled_ACR"};
	};
};

class WeaponCloudsMGun;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class Turrets;
	};
	class HMMWV_base: Car
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class HMMWV_M1151_M2_DES_Base_EP1: HMMWV_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
	};
	class M1114_AGS_ACR: HMMWV_M1151_M2_DES_Base_EP1
	{
		expansion = 3;
		scope = 2;
		
		displayName = $STR_ACR_DN_HMMWV_AGS;
		model = "\Ca\Wheeled_ACR\HMMWV\M1114_AGS_ACR.p3d";

		faction = BIS_CZ;

		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1", "CZ_Soldier_DES_EP1", "CZ_Soldier_DES_EP1"};
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {AGS30};
				magazines[] = {29Rnd_30mm_AGS30, 29Rnd_30mm_AGS30, 29Rnd_30mm_AGS30, 29Rnd_30mm_AGS30, 29Rnd_30mm_AGS30, 29Rnd_30mm_AGS30};
				
				gunnerAction = "LR_Gunner01_EP1";		
				gunnerOpticsModel = "\ca\weapons\optika_AGS30.p3d";
				
				class GunFire: WeaponCloudsMGun{interval = 0.01;};
				class ViewOptics: ViewOptics
				{
					initFov=0.200; minFov=0.058; maxFov=0.200;
				};							
			};
		};
		
		class AnimationSources: AnimationSources
		{
			class ReloadAnim {source = "reload"; weapon = "AGS30";};
			class ReloadMagazine {source = "reloadmagazine"; weapon = "AGS30";};
			class Revolving {source = "revolving"; weapon = "AGS30";};
		};
		
		class TransportWeapons
		{
			addACRWeapons(1)
		};
		
		class TransportMagazines
		{
			addACRMagazines(1)
		};		
	};
	class M1114_DSK_ACR: HMMWV_M1151_M2_DES_Base_EP1
	{
		expansion = 3;
		scope = 2;
		
		displayName = $STR_ACR_DN_HMMWV_DSHKM;
		model = "\Ca\Wheeled_ACR\HMMWV\M1114_DSK_ACR.p3d";

		faction = BIS_CZ;

		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1", "CZ_Soldier_DES_EP1", "CZ_Soldier_DES_EP1"};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel = "\ca\Weapons\optika_empty.p3d";
				
				weapons[] = {DShKM};
				magazines[] = {50Rnd_127x107_DSHKM, 50Rnd_127x107_DSHKM, 50Rnd_127x107_DSHKM, 50Rnd_127x107_DSHKM, 50Rnd_127x107_DSHKM, 50Rnd_127x107_DSHKM};
			};
		};
		
		class AnimationSources: AnimationSources
		{
			class ReloadAnim {source = "reload"; weapon = "DShKM";};
			class ReloadMagazine {source = "reloadmagazine"; weapon = "DShKM";};
			class Revolving {source = "revolving"; weapon = "DShKM";};
		};
		
		class TransportWeapons
		{
			addACRWeapons(1)
		};
		
		class TransportMagazines
		{
			addACRMagazines(1)
		};				
	};
};