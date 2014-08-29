	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class acr_a3_cz750bipod : ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "acc_pointer_IR";
		scope = 2;
		displayName = "FOKEN BIPOD M8";
		descriptionUse = "FOKEN BIPOD M8 FER CZ750";
		picture = "\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model = "acr_a3_weapons\CZ750\CZ750_bipod.p3d";
		descriptionShort = "FOKEN BIPOD M8 FER CZ750";

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