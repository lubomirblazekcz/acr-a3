class cfgWeapons
{
	class ItemCore;
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier2_rgr;
    class V_PlateCarrierIA1_dgtl;
    class V_PlateCarrierIA2_dgtl;
	class HeadGearItem;
    class UniformItem;
    class Uniform_Base;
    class U_B_CombatUniform_mcam;
    class U_B_CombatUniform_mcam_tshirt;
    class U_B_CombatUniform_mcam_vest;
	class ItemInfo;
	class VestItem;
	class BagItem;
	class H_HelmetB;
	class U_B_GhillieSuit;
    class ACR_blk_BasicBody: Uniform_Base
    {
        scope = 2;
        displayName = "$STR_ACR_UNDERWEAR";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_underwear.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		author = "$STR_ACR";

        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Underwear_Character";
            containerClass = "Supply0";
            mass = 1;
        };
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
    };
    class V_ACR_A3_PlateCarrierIA1_vz95: V_PlateCarrierIA1_dgtl //Vesta
	{
		scope = 2;
    	model = "\A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Vesta.paa";
		displayName = "$STR_ACR_VEST_IA1";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Vesta.paa"};
		author = "$STR_ACR";
        class ItemInfo: VestItem
        {
    		uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_vest01";
            containerClass = "Supply120";
            mass = 80;
            armor = 30;
            passThrough = 0.5;
            hiddenSelections[] = {"camo"};
		    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Vesta.paa"};
        };
	};
    class V_ACR_A3_PlateCarrierIA2_vz95: V_PlateCarrierIA2_dgtl //Vesta
    {
        scope = 2;
        model = "\A3\Characters_F_beta\Indep\equip_ia_vest02";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Vesta.paa";
        displayName = "$STR_ACR_VEST";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Vesta.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_vest02";
            containerClass = "Supply120";
            mass = 80;
            armor = 30;
            passThrough = 0.5;
            hiddenSelections[] = {"camo"};
		    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Vesta.paa"};
        };
    };
    class V_PlateCarrierIA1_khk: V_PlateCarrierIA1_dgtl
    {
        displayName = "$STR_a3_v_platecarrieria1_khkl0";
        model = "\A3\Characters_F_Beta\INDEP\equip_ia_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip_ia_vest01_khk_co.paa"};
        author = "$STR_A3_Bohemia_Interactive";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_vest01";
            containerClass = "Supply120";
            mass = 60;
            armor = 20;
            passThrough = 0.5;
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip_ia_vest01_khk_co.paa"};
        };
    };
    class V_PlateCarrierIA2_khk: V_PlateCarrierIA2_dgtl
    {
        displayName = "$STR_a3_v_platecarrieria2_khkl0";
        model = "\A3\Characters_F_Beta\INDEP\equip_ia_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip_ia_vest01_khk_co.paa"};
        author = "$STR_A3_Bohemia_Interactive";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_vest02";
            containerClass = "Supply120";
            mass = 80;
            armor = 30;
            passThrough = 0.5;
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip_ia_vest01_khk_co.paa"};
        };
    };

	class V_ACR_A3_PlateCarrier1_vz95: V_PlateCarrier1_rgr //Vesta2
	{
		scope = 2;
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Vesta2.paa";
		displayName = "$STR_ACR_VEST2";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Vesta2.paa"};
		author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            armor = 20;
            containerclass = "Supply140";
            mass = 80;
            passthrough = 0.5;
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            hiddenSelections[] = {"camo"};
        };
	};
    class V_ACR_A3_PlateCarrier2_vz95: V_PlateCarrier2_rgr //Vesta2
    {
        scope = 2;
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Vesta2.paa";
        displayName = "$STR_ACR_VEST2_H";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Vesta2.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            armor = 30;
            containerclass = "Supply140";
            mass = 100;
            passthrough = 0.5;
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            hiddenSelections[] = {"camo"};
        };
    };
    class V_ACR_A3_PlateCarrier1_rgr: V_PlateCarrier1_rgr
    {
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Vesta_olive.paa";
        displayName = "$STR_ACR_VEST2_rgr";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Vesta_olive.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            armor = 20;
            containerclass = "Supply140";
            mass = 80;
            passthrough = 0.5;
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            hiddenSelections[] = {"camo"};
        };
    };
    class V_ACR_A3_PlateCarrier2_rgr: V_PlateCarrier2_rgr
    {
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Vesta_olive.paa";
        displayName = "$STR_ACR_VEST2_rgr_H";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Vesta_olive.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            armor = 30;
            containerclass = "Supply140";
            mass = 100;
            passthrough = 0.5;
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            hiddenSelections[] = {"camo"};
        };
    };
    class V_ACR_A3_PlateCarrier1_khk: V_PlateCarrier1_rgr
    {
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Vesta_khk.paa";
        displayName = "$STR_ACR_VEST2_khk";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Vesta_khk.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            armor = 20;
            containerclass = "Supply140";
            mass = 80;
            passthrough = 0.5;
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            hiddenSelections[] = {"camo"};
        };
    };
    class V_ACR_A3_PlateCarrier2_khk: V_PlateCarrier2_rgr
    {
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Vesta_khk.paa";
        displayName = "$STR_ACR_VEST2_khk_H";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Vesta_khk.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            armor = 30;
            containerclass = "Supply140";
            mass = 100;
            passthrough = 0.5;
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            hiddenSelections[] = {"camo"};
        };
    };
	class H_ACR_A3_HelmetIA_vz95: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_ACR_MICH2000";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_helma.paa";
        model   = "\acr_a3\acr_a3_characters\mich2000nogoggles_ACR"; /// what model does the cap use
		author = "$STR_ACR";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_wood_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadGearItem
		{
            uniformModel = "\acr_a3\acr_a3_characters\mich2000nogoggles_ACR.p3d";  /// what model is used for this cap
			mass = 40;
			modelSides[] = {3,1};
            allowedSlots[] = {901,605};
			armor = 4;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_wood_co.paa"}; /// what texture is going to be used
		};
	};
    class H_ACR_A3_HelmetIA_vz95_des: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "$STR_ACR_MICH2000_Des";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_helma_poust.paa";
        model   = "\acr_a3\acr_a3_characters\mich2000nogoggles_ACR"; /// what model does the cap use
        author = "$STR_ACR";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_des_co.paa"}; /// what texture is going to be used
        class ItemInfo: HeadGearItem
        {
            uniformModel = "\acr_a3\acr_a3_characters\mich2000nogoggles_ACR.p3d";  /// what model is used for this cap
            mass = 40;
            modelSides[] = {3,1};
            allowedSlots[] = {901,605};
            armor = 4;
            passThrough = 0.5;
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_des_co.paa"}; /// what texture is going to be used
        };
    };
	class H_ACR_A3_HelmetIA_Goggles_vz95: ItemCore
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_MICH2000_GOGGLES"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_helmabryle.paa"; /// this looks fairly similar
        model   = "\acr_a3\acr_a3_characters\mich2000_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_wood_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
            mass = 40; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\mich2000_ACR.p3d";  /// what model is used for this cap
            allowedSlots[] = {901,605};   /// this cap is so small and flexible that it fits everywhere
            modelSides[] = {3,1}; /// available for all sides
            armor = 4;
            passThrough = 0.5;
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_wood_co.paa"}; /// what texture is going to be used
        };
    };
    class H_ACR_A3_HelmetIA_Goggles_vz95_des: ItemCore
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_MICH2000_GOGGLES_Des"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_helmabryle_poust.paa"; /// this looks fairly similar
        model   = "\acr_a3\acr_a3_characters\mich2000_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_des_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
            mass = 40; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\mich2000_ACR.p3d";  /// what model is used for this cap
            allowedSlots[] = {901,605};   /// this cap is so small and flexible that it fits everywhere
            modelSides[] = {3,1}; /// available for all sides
			armor = 4;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_des_co.paa"}; /// what texture is going to be used
        };
    };
    class H_ACR_A3_HelmetB_rgr: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "$STR_ACR_ECH_rgr";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		author = "$STR_ACR";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Prilba2.paa"};
        class ItemInfo: HeadGearItem
        {
			mass = 50;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3,1};
            allowedSlots[] = {901,605};   /// this cap is so small and flexible that it fits everywhere
			armor = 5;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
    class H_ACR_A3_Beret_red: ItemCore
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_Beret_red"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_beret.paa"; /// this looks fairly similar
        model   = "\acr_a3\acr_a3_characters\beret_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_wood_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
            mass = 10; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\beret_ACR.p3d";  /// what model is used for this cap
			allowedSlots[] = {801,901,701,605};
            modelSides[] = {6}; /// available for all sides
            armor = 0;  /// this cap doesn't provide any protection
            passThrough = 1; /// this cap doesn't provide any protection
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        };
    };
	class H_ACR_A3_Booniehat_vz95: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_ACR_BOONIEHAT";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Klobouk95.paa";
    	model = "\A3\Characters_F_epb\Common\booniehat_hs";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Klobouk95.paa"};
		author = "$STR_ACR";
		class ItemInfo: HeadGearItem
		{
			uniformModel = "\A3\Characters_F_epb\Common\booniehat_hs";
			allowedSlots[] = {801,901,701,605};
			mass = 10;
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};
    class H_ACR_A3_Booniehat_vz95_des: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_ACR_BOONIEHAT_DES";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Klobouk95_des.paa";
    	model = "\A3\Characters_F_epb\Common\booniehat_hs";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Klobouk95_des.paa"};
		author = "$STR_ACR";
		class ItemInfo: HeadGearItem
		{
			uniformModel = "\A3\Characters_F_epb\Common\booniehat_hs";
			allowedSlots[] = {801,901,701,605};
			mass = 10;
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};
	class H_ACR_A3_Cap_rgr: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_ACR_CAP";
    	picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_rgrhatheadset.paa";
		model = "\A3\Characters_F_epb\Common\capb_hs";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Ksiltovka95.paa"};
		author = "$STR_ACR";
		class ItemInfo: HeadGearItem
		{
			uniformModel = "\A3\Characters_F_epb\Common\capb_hs";
			allowedSlots[] = {801,901,701,605};
			mass = 10;
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};
    class H_ACR_A3_Cap_khk: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "$STR_ACR_CAP_DES";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_tanhatheadset.paa";
        model = "\A3\Characters_F_epb\Common\capb_hs";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_KsiltovkaTAN.paa"};
        author = "$STR_ACR";
        class ItemInfo: HeadGearItem
        {
            uniformModel = "\A3\Characters_F_epb\Common\capb_hs";
			allowedSlots[] = {801,901,701,605};
            mass = 10;
            modelSides[] = {3,1};
            armor = 0;
            passThrough = 0.8;
            hiddenSelections[] = {"camo"};
        };
    };
	class H_ACR_A3_Pakol_grey: ItemCore
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_PAKOL_GREY"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_pakol.paa"; /// this looks fairly similar
        model   = "\acr_a3\acr_a3_characters\pakol_mic_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR";
        hiddenSelections[] = {"camo","camo1"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip4_co.paa","\acr_a3\acr_a3_characters\data\equip1_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
            mass = 10; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\pakol_mic_ACR.p3d";  /// what model is used for this cap
			allowedSlots[] = {801,901,701,605};
            modelSides[] = {3,1}; /// available for all sides
            armor = 0;  /// this cap doesn't provide any protection
            passThrough = 0.8; /// this cap doesn't provide any protection
            hiddenSelections[] = {"camo","camo1"}; /// what selection in model could have different textures
        };
    };
    class H_ACR_A3_Booniehat_fold_vz95: ItemCore
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_BOONIEHAT_FOLD"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_booniefold.paa"; /// this looks fairly similar
        model   = "\acr_a3\acr_a3_characters\boonie_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_wood_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
            mass = 10; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\boonie_ACR.p3d";  /// what model is used for this cap
			allowedSlots[] = {801,901,701,605};
            modelSides[] = {3,1}; /// available for all sides
            armor = 0;  /// this cap doesn't provide any protection
            passThrough = 0.8; /// this cap doesn't provide any protection
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        };
    };

	// vz. 95 Lesní Uniformy
	class U_ACR_A3_CombatUniform: Uniform_Base // Klasická
	{
		scope = 2;
		displayName = "$STR_ACR_UNIFORM";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_vz95.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_LES.paa"};
		author = "$STR_ACR";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_Vojak01";
			containerClass = "Supply40";
			mass = 40;
		};
	};
    class U_ACR_A3_CombatUniform_tshirt: U_B_CombatUniform_mcam_tshirt // Tričko
    {
        displayName = "$STR_ACR_UNIFORM_tshirt";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_vz95_triko.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_LES.paa"};
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Vojak02";
            containerClass = "Supply40";
            mass = 20;
        };
    };
    class U_ACR_A3_CombatUniform_vest: U_B_CombatUniform_mcam_vest // Rukávy
    {
        displayName = "$STR_ACR_UNIFORM_vest";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_vz95_rukav.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_LES.paa"};
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Vojak03";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // vz.95 Pouštní Uniformy
	class U_ACR_A3_CombatUniform_Des: Uniform_Base
	{
		scope = 2;
		displayName = "$STR_ACR_UNIFORM_DESERT";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_DESERT.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_POUST.paa"};
		author = "$STR_ACR";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_Des_Vojak01";
			containerClass = "Supply40";
			mass = 40;
		};
	};
    class U_ACR_A3_CombatUniform_Des_tshirt: U_B_CombatUniform_mcam_tshirt // Tričko
    {
        displayName = "$STR_ACR_UNIFORM_DESERT_tshirt";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_DESERT_triko.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_POUST.paa"};
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Des_Vojak02";
            containerClass = "Supply40";
            mass = 20;
        };
    };
    class U_ACR_A3_CombatUniform_Des_vest: U_B_CombatUniform_mcam_vest // Rukávy
    {
        displayName = "$STR_ACR_UNIFORM_DESERT_vest";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_DESERT_rukav.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_POUST.paa"};
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Des_Vojak03";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // MOUT Uniformy
    class U_ACR_A3_CombatUniform_MOUT: Uniform_Base
    {
        scope = 2;
        displayName = "$STR_ACR_UNIFORM_MOUT";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_MOUT.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_MOUT.paa"};
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_MOUT_Vojak01";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class U_ACR_A3_CombatUniform_MOUT_vest: U_B_CombatUniform_mcam_vest // Rukávy
    {
        displayName = "$STR_ACR_UNIFORM_MOUT_vest";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_MOUT_rukav.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_MOUT.paa"};
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_MOUT_Vojak03";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // MOUT Uniformy
    class U_ACR_A3_CombatUniform_MOUT_Des: Uniform_Base
    {
        scope = 2;
        displayName = "$STR_ACR_UNIFORM_MOUT_DES";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_MOUT_des.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_MOUT_des.paa"};
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_MOUT_Des_Vojak01";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class U_ACR_A3_CombatUniform_MOUT_Des_vest: U_B_CombatUniform_mcam_vest // Rukávy
    {
        displayName = "$STR_ACR_UNIFORM_MOUT_DES_vest";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_MOUT_des_rukav.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_MOUT_des.paa"};
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_MOUT_Des_Vojak03";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // Ostatni uniformy
    class U_ACR_A3_SniperGhillie: U_B_GhillieSuit // Sniper ghillie
    {
        displayName = "$STR_ACR_UNIFORM_GHILLIE";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_ghillie.paa";
        author = "$STR_ACR";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_LES.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Sniper";
            containerClass = "Supply60";
            mass = 60;
        };
    };
    class U_ACR_A3_SniperGhillie_Des: U_B_GhillieSuit // Sniper ghillie poust
    {
        displayName = "$STR_ACR_UNIFORM_GHILLIE_DES";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_ghillie_des.paa";
        author = "$STR_ACR";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_POUST.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Sniper_Des";
            containerClass = "Supply60";
            mass = 60;
        };
    };
	class U_ACR_A3_HeliPilotCoveralls_rgr: Uniform_Base
	{
		scope = 2;
		displayName = "$STR_ACR_UNIFORM_PILOT";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_pilot.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author = "$STR_ACR";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_pilot.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_Pilot";
			containerClass = "Supply20";
			mass = 30;
		};
	};
    class U_ACR_A3_HeliPilotCoveralls_khk: Uniform_Base
    {
        scope = 2;
        displayName = "$STR_ACR_UNIFORM_PILOT_DES";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_pilot_des.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author = "$STR_ACR";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_pilot_DES.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Pilot_des";
            containerClass = "Supply20";
            mass = 30;
        };
    };
	class U_ACR_A3_OfficerUniform_vz95: Uniform_Base
	{
		scope = 2;
		displayName = "$STR_ACR_UNIFORM_OFFICER";
		texture = "\acr_a3\acr_a3_characters\data\ACR_Uniforma_Offic.paa";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_officer.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_LES.paa"};
		author = "$STR_ACR";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_Dustojnik"; //znackablabla
			containerClass = "Supply40";
			mass = 40;
			hiddenSelections[] = {"Camo1","Camo2"};
		};
	};
    class U_ACR_A3_OfficerUniform_des: Uniform_Base
    {
        scope = 2;
        displayName = "$STR_ACR_UNIFORM_OFFICER_DES";
        texture = "\acr_a3\acr_a3_characters\data\ACR_Uniforma_Offic_des.paa";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_officer_des.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_POUST.paa"};
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Dustojnik_des"; //znackablabla
            containerClass = "Supply40";
            mass = 40;
            hiddenSelections[] = {"Camo1","Camo2"};
        };
    };
    class U_ACR_A3_SweaterUniform_vz95: Uniform_Base
    {
        scope = 2;
        author = "$STR_ACR";
        displayName = "$STR_ACR_UNIFORM_SWEATER";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_svetr.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_LES.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Neozbrojeny";
            containerClass = "Supply30";
            mass = 30;
        };
    };
    class U_ACR_A3_SweaterUniform_des: Uniform_Base
    {
        scope = 2;
        author = "$STR_ACR";
        displayName = "$STR_ACR_UNIFORM_SWEATER_DES";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_svetr_des.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_POUST.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Neozbrojeny_des";
            containerClass = "Supply30";
            mass = 30;
        };
    };
};