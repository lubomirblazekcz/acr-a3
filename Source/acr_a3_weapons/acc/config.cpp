enum {
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

class CfgPatches 
{

	class ACR_accessories 
	{
		units[] = { };
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class Mode_SemiAuto ;

class Mode_Burst ;

class Mode_FullAuto ;

class cfgWeapons 
{

	class ItemCore ;

	class InventoryItem_Base_F ;

	class InventoryMuzzleItem_Base_F ;

	class InventoryOpticsItem_Base_F ;

	class InventoryFlashLightItem_Base_F ;

	class ACR_A3_bipod : ItemCore
	{
		author = "STR_ACR";
		_generalMacro = "acc_acr_bipod";
		scope = 2;
		displayName = "$STR_A3_BIPOD";
		picture = "acr_a3_weapons\acc\Data\UI\gear_acr_bipod.paa";
		model = "acr_a3_weapons\acc\CZ750_bipod.p3d";

		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			mass = 6;

			class Pointer 
			{
			};

			class FlashLight 
			{
			};
		};
		inertia = 0.100000;
	};
	
	class ACR_A3_9mm_supp: ItemCore
	{	
		author = "STR_ACR";
		scope = 2;	
		displayName="$STR_ACR_9MM_SUPP";
		picture="acr_a3_weapons\acc\Data\UI\gear_9mm_supp.paa";
		model = "acr_a3_weapons\acc\9mm_acr_suppressor.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
        {
            mass = 5;
			class MagazineCoef
			{
				initSpeed 		= 0.6;
			};
			
			class AmmoCoef
			{
				// bullet ballistic modifiers
				hit				= 1;
				typicalSpeed	= 1;
				airFriction		= 1;
				
				// AI modifiers
				visibleFire		= 0.5;
				audibleFire		= 0.3;
				visibleFireTime	= 0.5;
				audibleFireTime	= 0.5;
				cost			= 1;
			}; 

			muzzleEnd 			= "zaslehPoint"; // memory point in muzzle supressor's model
			alternativeFire 	= "Zasleh2";  // class in cfgWeapons with model of muzzle flash	

			soundTypeIndex		= 1; /// defines the position in sound[] array in the rifle

			class MuzzleCoef
			{
				dispersionCoef			= 0.8f;
				artilleryDispersionCoef	= 1.0f;

				fireLightCoef			= 0.1f;

				recoilCoef				= 1.0f;
				recoilProneCoef			= 1.0f;

				minRangeCoef = 1.0f; minRangeProbabCoef = 1.0f;
				midRangeCoef = 1.0f; midRangeProbabCoef = 1.0f;
				maxRangeCoef = 1.0f; maxRangeProbabCoef = 1.0f;
			};			
        };
	};	
};