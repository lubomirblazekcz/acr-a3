	
	/** Special suppressor for test weapon */
	class ItemCore; /// base class for accessories
	class InventoryMuzzleItem_Base_F; /// base class for muzzle suppressors
	
	class ACR_A3_Phantom_Supp: ItemCore
	{	
		scope = 2;	
		displayName="FAKIN SUPPRESSOR M8";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "acr_a3_weapons\SP01Phantom\Phantom_suppressor.p3d";
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