class CfgPatches
{
	class ACR_A3_Characters
	{
		units[] = {"ACR_A3_GearBox","ACR_A3_Backpack_Carryall_vz95","ACR_A3_Backpack_Kitbag_vz95","ACRP_Vojak01","ACRP_Vojak02","ACRP_Vojak07","ACRP_Vojak03","ACRP_Vojak04","ACRP_Vojak05","ACRP_Vojak10","ACRP_Vojak06","ACRP_Des_Vojak06","ACRP_Des_Vojak01","ACRP_Des_Vojak02","ACRP_Des_Vojak03","ACRP_Des_Vojak04","ACRP_Des_Vojak05","ACRP_Des_Vojak07","ACRP_Des_Vojak10","ACR_Vojak01","ACR_Vojak02","ACR_Vojak07","ACR_Vojak03","ACR_Vojak04","ACR_Vojak05","ACR_Sniper","ACR_Sniper2","ACR_Sniper_Des","ACR_Sniper2_Des","ACR_Vojak10","ACR_Vojak06","ACR_Vojak12","ACR_MOUT_Vojak01","ACR_MOUT_Vojak02","ACR_MOUT_Vojak07","ACR_MOUT_Vojak03","ACR_MOUT_Vojak04","ACR_MOUT_Vojak05","ACR_MOUT_Vojak10","ACR_MOUT_Vojak06","ACR_MOUT_Des_Vojak01","ACR_MOUT_Des_Vojak02","ACR_MOUT_Des_Vojak07","ACR_MOUT_Des_Vojak03","ACR_MOUT_Des_Vojak04","ACR_MOUT_Des_Vojak05","ACR_MOUT_Des_Vojak10","ACR_MOUT_Des_Vojak06","ACR_Des_Vojak01","ACR_Des_Vojak02","ACR_Des_Vojak07","ACR_Des_Vojak03","ACR_Des_Vojak04","ACR_Des_Vojak05","ACR_Des_Vojak10","ACR_Des_Vojak06","ACR_Pilot","ACR_Dustojnik","ACR_Neozbrojeny","ACR_Pilot_des","ACR_Dustojnik_des","ACR_Neozbrojeny_des"};
		weapons[] = {"V_ACR_A3_PlateCarrierIA2_vz95","V_ACR_A3_PlateCarrier1_vz95","V_ACR_A3_PlateCarrier2_vz95","V_ACR_A3_PlateCarrier1_rgr","V_ACR_A3_PlateCarrier2_rgr","V_ACR_A3_PlateCarrier1_khk","V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_HelmetIA_vz95","H_ACR_A3_HelmetIA_vz95_des","H_ACR_A3_HelmetB_rgr","H_ACR_A3_Beret_red","H_ACR_A3_Booniehat_vz95","H_ACR_A3_Cap_rgr","U_ACR_A3_CombatUniform","U_ACR_A3_CombatUniform_tshirt","U_ACR_A3_CombatUniform_vest","U_ACR_A3_CombatUniform_MOUT","U_ACR_A3_CombatUniform_MOUT_vest","U_ACR_A3_CombatUniform_Des","U_ACR_A3_CombatUniform_Des_tshirt","U_ACR_A3_CombatUniform_Des_vest","U_ACR_A3_HeliPilotCoveralls_rgr","U_ACR_A3_OfficerUniform_vz95","U_ACR_A3_SweaterUniform_vz95","U_ACR_A3_HeliPilotCoveralls_khk","U_ACR_A3_OfficerUniform_des","U_ACR_A3_SweaterUniform_des","U_ACR_A3_SniperGhillie","U_ACR_A3_SniperGhillie_Des","U_ACR_A3_CombatUniform_MOUT_Des","U_ACR_A3_CombatUniform_MOUT_Des_vest"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Characters_F_BLUFOR", "acr_a3_dubbingradio"};
	};
};
class GenericNames
{
    #include "CzechMen.hpp"
};
class CfgVehicleClasses
{
	class ACRX0
	{
		displayName = "$STR_ACR_MENVZ95REC"; // VZ95 Specialni
	};
    class ACRX0_Des
    {
        displayName = "$STR_ACR_MENVZ95REC_DES"; // VZ95 Des Specialni
    };
	class ACRX00
	{
		displayName = "$STR_ACR_MEN"; //vz. 95 zakladni vojaci a piloti STRINGTABLETEXT: Men
	};
	class ACRX01
	{
		displayName = "$STR_ACR_MENVZ95"; // vz.95 STRINGTABLETEXT: Men (vz. 95)
	};
	class ACRX02
	{
		displayName = "$STR_ACR_MEN_MOUT"; //MOUT
	};
	class ACRX02_DES
	{
		displayName = "$STR_ACR_MEN_MOUT_DES"; //MOUT Des
	};
	class ACRX03
	{
		displayName = "$STR_ACR_MEN_DESERT"; // vz.95 Des
	};
	class ACRX04
	{
		displayName = "$STR_ACR_SNIP"; //sniperi se krovim
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class cfgFactionClasses
{
	class ACR //class pod jakou frakci budou
	{
		displayName = "$STR_ACR_FACTION"; //jmeno frakce v editoru STRINGTABLETEXT: ACR
		priority = -6;
		side = 1;
		genericNames = "CzechMen";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		icon = "\acr_a3\acr_a3_characters\data\icon_cz_co.paa";
		backpack_tf_faction_radio_api = "tf_anprc155_big_acr_a3";
	};
};
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
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\data\capb_tan_co.paa"};
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
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_vz95.paa";
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
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_DESERT.paa";
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
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_MOUT.paa";
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
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_MOUT_des.paa";
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
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_pilot";
		author = "$STR_ACR";
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
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_pilot";
        author = "$STR_ACR";
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
class cfgVehicles
{
	class B_Soldier_F;
    class B_Soldier_base_F;
    class B_soldier_LAT_F;
    class B_soldier_repair_F;
    class B_Soldier_TL_F;
    class B_medic_F;
    class B_soldier_M_F;
    class B_Soldier_GL_F;
    class B_recon_TL_F;
    class B_recon_M_F;
    class B_recon_medic_F;
    class B_recon_F;
    class B_recon_JTAC_F;
    class B_recon_LAT_F;
    class B_recon_exp_F;
    class B_soldier_AR_F;
    class Man;
	class B_Carryall_mcamo;
	class B_Kitbag_cbr;
	class B_spotter_F;
	class B_sniper_F;
	class B_supplyCrate_F;
	class B_Kitbag_rgr_Exp;
	class B_Kitbag_rgr;
	// Batohy
	class ACR_A3_Backpack_Carryall_vz95: B_Carryall_mcamo
	{
		scope = 2;
		displayName = "$STR_ACR_BACKPACK"; //mel 2 textury na batoh ale ma v configu jen 1 wtf?
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_batoh02.paa"; //ikona
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Batoh02.paa"};
		author = "$STR_ACR";
	};
	class ACR_A3_Backpack_Kitbag_vz95: B_Kitbag_rgr {
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        displayName = "$STR_ACR_KITBAG";
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Batoh.paa"};
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_batoh.paa"; //ikona
		author = "$STR_ACR";
        maximumLoad = 200;
        mass = 25;
    };
    class B_AssaultPack_rgr;
    class ACR_A3_B_AssaultPack_rgr_LAT: B_AssaultPack_rgr {
        scope = 1;
        class TransportMagazines
        {
            class _xx_Titan_AT
            {
                magazine = "CUP_MAAWS_HEAT_M";
                count = 2;
            };
            class _xx_Titan_AP
            {
                magazine = "CUP_MAAWS_HEDP_M";
                count = 1;
            };
        };
    };
    class B_AssaultPack_cbr;
    class ACR_A3_B_AssaultPack_cbr_LAT: B_AssaultPack_cbr {
        scope = 1;
        class TransportMagazines
        {
            class _xx_Titan_AT
            {
                magazine = "CUP_MAAWS_HEAT_M";
                count = 2;
            };
            class _xx_Titan_AP
            {
                magazine = "CUP_MAAWS_HEDP_M";
                count = 1;
            };
        };
    };
    // Base Class
    class ACR_Underwear_Character: B_Soldier_base_F //The soldier who appears wearing your underwear class
    {
        scope = 1;//1 = private and ensures it doesnt list as a character in the editor
        displayName = "ACR Example Underwear Character";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        model = "\A3\Characters_F\Common\basicbody";
		genericNames = "CzechMen";
        uniformClass = "ACR_blk_BasicBody"; //Your underwear class in cfgweapons
        weapons[] = {};
        magazines[] = {};
        respawnWeapons[] = {};
        respawnMagazines[] = {};
        items[] = {};
        linkeditems[] = {};
        respawnlinkeditems[] = {};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Basicbody.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
    };

	// vz.95 Lesni
	class ACR_Vojak01: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX01"; //LESNI
		displayName = "$STR_A3_CFGVEHICLES_B_SOLDIER_F0"; // Střelec
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"acr_a3_Sa58RIS2_Arco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_Sa58RIS2_Arco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.rvmat"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_O_Pos'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Vojak02: B_Soldier_GL_F // Granátometčík
	{
		_generalMacro = "B_Soldier_GL_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX01"; //LESNI
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_tshirt";
		weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
        hiddenSelections[] = {"camo", "camo2", "insignia"};
        hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.rvmat"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.paa","\acr_a3\acr_a3_characters\data\ACR_Basicbody.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_AB_Neg'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Vojak03: B_soldier_AR_F
	{
		_generalMacro = "B_soldier_AR_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX01"; //LESNI
		displayName = "$STR_B_SOLDIER_AR_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_vest"; // Kulometčík
		weapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.rvmat"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_O_Pos'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Vojak04: B_soldier_M_F
	{
		_generalMacro = "B_soldier_M_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX01"; //LESNI
		head = "H_ACR_A3_HelmetIA_vz95";
		displayName = "$STR_B_SOLDIER_M_F0"; // Ostrostřelec
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_ACR_A3_HelmetIA_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_ACR_A3_HelmetIA_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Vojak05: B_medic_F
	{
		_generalMacro = "B_medic_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "$STR_B_MEDIC_F0"; // Zdravotník
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Vojak06: B_Soldier_TL_F
	{
		_generalMacro = "B_Soldier_TL_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		displayName = "$STR_B_SOLDIER_TL_F0"; // Velitel týmu
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		icon = "iconManLeader";
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Vojak07: B_soldier_repair_F
	{
		_generalMacro = "B_soldier_repair_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "ACR_A3_Backpack_Kitbag_vz95";
		displayName = "$STR_B_ENGINEER_F0"; // Ženista
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"acr_a3_Sa58RIS1_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_Sa58RIS1_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Vojak10: B_soldier_LAT_F
	{
		_generalMacro = "B_soldier_LAT_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "ACR_A3_B_AssaultPack_rgr_LAT";
		displayName = "$STR_B_SOLDIER_AT_F0"; // Raketometčík
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"acr_a3_Sa58RIS2_Arco_Laser","acr_a3_P07","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
		respawnWeapons[] = {"acr_a3_Sa58RIS2_Arco_Laser","acr_a3_P07","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","CUP_MAAWS_HEAT_M"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","CUP_MAAWS_HEAT_M"};
		linkedItems[] = {"H_ACR_A3_HelmetIA_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_ACR_A3_HelmetIA_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
        };
	};

	// vz.95 Poust
	class ACR_Des_Vojak01: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX03"; //POUST
		displayName = "$STR_A3_CFGVEHICLES_B_SOLDIER_F0"; // Střelec
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"acr_a3_Sa58RIS1_camo_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_Sa58RIS1_camo_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.rvmat"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Des_Vojak02: B_Soldier_GL_F // Granátometčík
	{
		_generalMacro = "B_Soldier_GL_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX03"; //POUST
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
		weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[] = {"camo", "camo2", "insignia"};
		hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.rvmat"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Des.paa","\acr_a3\acr_a3_characters\data\ACR_Basicbody_des.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Des_Vojak03: B_soldier_AR_F
	{
		_generalMacro = "B_soldier_AR_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX03"; //POUST
		displayName = "$STR_B_SOLDIER_AR_F0"; // Kulometčík
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
		weapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.rvmat"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Des_Vojak04: B_soldier_M_F
	{
		_generalMacro = "B_soldier_M_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX03"; //POUST
		displayName = "$STR_B_SOLDIER_M_F0"; // Ostrostřelec
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Des_Vojak05: B_medic_F
	{
		_generalMacro = "B_medic_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "$STR_B_MEDIC_F0"; // Zdravotník
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Des_Vojak06: B_Soldier_TL_F
	{
		_generalMacro = "B_Soldier_TL_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		displayName = "$STR_B_SOLDIER_TL_F0"; // Velitel týmu
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_O_Neg'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Des_Vojak07: B_soldier_repair_F
	{
		_generalMacro = "B_soldier_repair_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "ACR_A3_Backpack_Kitbag_vz95";
		displayName = "$STR_B_ENGINEER_F0"; // Ženista
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"acr_a3_Sa58RIS1_camo_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_Sa58RIS1_camo_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Des_Vojak10: B_soldier_LAT_F
	{
		_generalMacro = "B_soldier_LAT_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "ACR_A3_B_AssaultPack_rgr_LAT";
		displayName = "$STR_B_SOLDIER_AT_F0"; // Raketometčík
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"acr_a3_Sa58RIS2_camo_Arco_Laser","acr_a3_P07","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
		respawnWeapons[] = {"acr_a3_Sa58RIS2_camo_Arco_Laser","acr_a3_P07","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","CUP_MAAWS_HEAT_M"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","CUP_MAAWS_HEAT_M"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_AB_Neg'] call BIS_fnc_setUnitInsignia;";
        };
	};

    // vz.95 MOUT
    class ACR_MOUT_Vojak01: B_Soldier_F
    {
        _generalMacro = "B_Soldier_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        displayName = "$STR_A3_CFGVEHICLES_B_SOLDIER_F0"; // Střelec
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT";
        weapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.rvmat"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Vojak02: B_Soldier_GL_F // Granátometčík
    {
        _generalMacro = "B_Soldier_GL_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_tshirt";
        weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_AB_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Vojak03: B_soldier_AR_F
    {
        _generalMacro = "B_soldier_AR_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        displayName = "$STR_B_SOLDIER_AR_F0"; // Kulometčík
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_vest";
        weapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.rvmat"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Vojak04: B_soldier_M_F
    {
        _generalMacro = "B_soldier_M_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        scope = 2;
        scopeCurator = 2;
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        backpack = "B_AssaultPack_rgr";
        head = "H_ACR_A3_HelmetB_rgr";
        displayName = "$STR_B_SOLDIER_M_F0"; // Ostrostřelec
        genericNames = "CzechMen";
        uniformAccessories[] = {};
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT";
        weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Vojak05: B_medic_F
    {
        _generalMacro = "B_medic_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        backpack = "B_AssaultPack_rgr_Medic"; // Zdravotník
        displayName = "$STR_B_MEDIC_F0";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT";
        weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Vojak06: B_Soldier_TL_F
    {
        _generalMacro = "B_Soldier_TL_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        backpack = "B_Carryall_oli";
        displayName = "$STR_B_SOLDIER_TL_F0"; // Velitel týmu
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT";
        weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Vojak07: B_soldier_repair_F
    {
        _generalMacro = "B_soldier_repair_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        backpack = "B_Kitbag_rgr";
        displayName = "$STR_B_ENGINEER_F0"; // Ženista
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT";
        weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetIA_vz952","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Vojak10: B_soldier_LAT_F
    {
        _generalMacro = "B_soldier_LAT_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        backpack = "ACR_A3_B_AssaultPack_rgr_LAT";
        displayName = "$STR_B_SOLDIER_AT_F0"; // Raketometčík
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT";
        weapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","CUP_MAAWS_HEAT_M"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","CUP_MAAWS_HEAT_M"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier1_rgr","NVGoggles_OPFOR","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_rgr","NVGoggles_OPFOR","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };

    // vz.95 MOUT DES
    class ACR_MOUT_Des_Vojak01: B_Soldier_F
    {
        _generalMacro = "B_Soldier_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        displayName = "$STR_A3_CFGVEHICLES_B_SOLDIER_F0"; // Střelec
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
        weapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.rvmat"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT_des.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Des_Vojak02: B_Soldier_GL_F // Granátometčík
    {
        _generalMacro = "B_Soldier_GL_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
        weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_AB_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Des_Vojak03: B_soldier_AR_F
    {
        _generalMacro = "B_soldier_AR_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        displayName = "$STR_B_SOLDIER_AR_F0"; // Kulometčík
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des_vest";
        weapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.rvmat"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT_des.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Des_Vojak04: B_soldier_M_F
    {
        _generalMacro = "B_soldier_M_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        scope = 2;
        scopeCurator = 2;
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        backpack = "B_AssaultPack_rgr";
        head = "H_ACR_A3_HelmetB_rgr";
        displayName = "$STR_B_SOLDIER_M_F0"; // Ostrostřelec
        genericNames = "CzechMen";
        uniformAccessories[] = {};
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
        weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Des_Vojak05: B_medic_F
    {
        _generalMacro = "B_medic_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        backpack = "B_AssaultPack_rgr_Medic"; // Zdravotník
        displayName = "$STR_B_MEDIC_F0";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
        weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Des_Vojak06: B_Soldier_TL_F
    {
        _generalMacro = "B_Soldier_TL_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        backpack = "B_Carryall_oli";
        displayName = "$STR_B_SOLDIER_TL_F0"; // Velitel týmu
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
        weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Des_Vojak07: B_soldier_repair_F
    {
        _generalMacro = "B_soldier_repair_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        backpack = "B_Kitbag_rgr";
        displayName = "$STR_B_ENGINEER_F0"; // Ženista
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
        weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetIA_vz952","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Des_Vojak10: B_soldier_LAT_F
    {
        _generalMacro = "B_soldier_LAT_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        backpack = "ACR_A3_B_AssaultPack_rgr_LAT";
        displayName = "$STR_B_SOLDIER_AT_F0"; // Raketometčík
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
        weapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","CUP_MAAWS_HEAT_M"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","CUP_MAAWS_HEAT_M"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier1_rgr","NVGoggles_OPFOR","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_rgr","NVGoggles_OPFOR","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };


    // vz.95 Průzkum
    class ACRP_Vojak01: B_recon_F // Zvěd
    {
        _generalMacro = "B_recon_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0"; //RECON
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_vest";
        weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier1_vz95","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_vz95","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Vojak02: B_recon_JTAC_F // JTAC
    {
        _generalMacro = "B_recon_JTAC_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0"; //RECON
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_vest";
        weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Laserdesignator"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","Laserbatteries"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","Laserbatteries"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Vojak03: B_soldier_AR_F // Kulometčík
    {
        _generalMacro = "B_soldier_AR_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0"; //RECON
        displayName = "$STR_ACR_KULOMET_F";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_tshirt";
        weapons[] = {"acr_a3_M60E4","acr_a3_SP01","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_M60E4","acr_a3_SP01","Throw","Put","Binocular"};
        magazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_O_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Vojak04: B_recon_M_F  // Ostrostřelec
    {
        _generalMacro = "B_recon_M_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0"; //RECON
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_vest";
        weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"H_ACR_A3_Booniehat_fold_vz95","V_ACR_A3_PlateCarrier1_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"H_ACR_A3_Booniehat_fold_vz95","V_ACR_A3_PlateCarrier1_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Vojak05: B_recon_medic_F // Zdravotník
    {
        _generalMacro = "B_recon_medic_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        scope = 2;
        scopeCurator = 2;
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0"; //RECON
        backpack = "B_AssaultPack_rgr_Medic";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_vest";
        weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Vojak06: B_recon_TL_F // Velitel týmu
    {
        _generalMacro = "B_recon_TL_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0"; //RECON
        backpack = "ACR_A3_Backpack_Carryall_vz95";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_tshirt";
        weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_SP01","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_SP01","Throw","Put","Rangefinder"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier2_vz95","H_ACR_A3_Cap_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier2_vz95","H_ACR_A3_Cap_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Vojak07: B_recon_exp_F // Exp. specialsta
    {
        _generalMacro = "B_recon_exp_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0"; //RECON
        backpack = "ACR_A3_Backpack_Kitbag_vz95";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_vest";
        weapons[] = {"SMG_02_ACO_F","acr_a3_SP01","Throw","Put","Binocular"};
        respawnWeapons[] = {"SMG_02_ACO_F","acr_a3_SP01","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier1_vz95","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_vz95","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_L","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_L","FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Vojak10: B_recon_LAT_F // Raketometčík
    {
        _generalMacro = "B_recon_LAT_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0"; //RECON
        backpack = "ACR_A3_B_AssaultPack_rgr_LAT";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_tshirt";
        weapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_SP01","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_SP01","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","CUP_MAAWS_HEAT_M"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","CUP_MAAWS_HEAT_M"};
        linkedItems[] = {"H_ACR_A3_HelmetIA_Goggles_vz95","V_ACR_A3_PlateCarrier2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"H_ACR_A3_HelmetIA_Goggles_vz95","V_ACR_A3_PlateCarrier2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };

    // vz.95 Pouštní Průzkum
    class ACRP_Des_Vojak01: B_recon_F // Zvěd
    {
        _generalMacro = "B_recon_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0_Des"; //RECON
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
        weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier1_khk","H_ACR_A3_Pakol_grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_khk","H_ACR_A3_Pakol_grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Des_Vojak02: B_recon_JTAC_F // JTAC
    {
        _generalMacro = "B_recon_JTAC_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0_Des"; //RECON
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
        weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Laserdesignator"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","Laserbatteries"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","Laserbatteries"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_Booniehat_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_Booniehat_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Des_Vojak03: B_soldier_AR_F // Kulometčík
    {
        _generalMacro = "B_soldier_AR_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0_Des"; //RECON
        displayName = "$STR_ACR_KULOMET_F";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
        weapons[] = {"acr_a3_M60E4","acr_a3_SP01","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_M60E4","acr_a3_SP01","Throw","Put","Binocular"};
        magazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","acr_a3_100Rnd_762x51_B_M60E4","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier1_khk","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_khk","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_O_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Des_Vojak04: B_recon_M_F  // Ostrostřelec
    {
        _generalMacro = "B_recon_M_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0_Des"; //RECON
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
        weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"H_ACR_A3_Cap_khk","V_ACR_A3_PlateCarrier1_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"H_ACR_A3_Cap_khk","V_ACR_A3_PlateCarrier1_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Des_Vojak05: B_recon_medic_F // Zdravotník
    {
        _generalMacro = "B_recon_medic_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        scope = 2;
        scopeCurator = 2;
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0_Des"; //RECON
        backpack = "B_AssaultPack_cbr";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
        weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Des_Vojak06: B_recon_TL_F // Velitel týmu
    {
        _generalMacro = "B_recon_TL_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0_Des"; //RECON
        backpack = "B_Carryall_cbr";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
        weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_SP01","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_SP01","Throw","Put","Rangefinder"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_Cap_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_Cap_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Des_Vojak07: B_recon_exp_F // Exp. specialsta
    {
        _generalMacro = "B_recon_exp_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0_Des"; //RECON
        backpack = "B_Kitbag_cbr";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
        weapons[] = {"SMG_02_ACO_F","acr_a3_SP01","Throw","Put","Binocular"};
        respawnWeapons[] = {"SMG_02_ACO_F","acr_a3_SP01","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier1_khk","H_ACR_A3_Pakol_grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_khk","H_ACR_A3_Pakol_grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_L","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_L","FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Des_Vojak10: B_recon_LAT_F // Raketometčík
    {
        _generalMacro = "B_recon_LAT_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0_Des"; //RECON
        backpack = "ACR_A3_B_AssaultPack_cbr_LAT";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
        weapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_SP01","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_SP01","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","CUP_MAAWS_HEAT_M"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","CUP_MAAWS_HEAT_M"};
        linkedItems[] = {"H_ACR_A3_HelmetIA_Goggles_vz95_des","V_ACR_A3_PlateCarrier2_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"H_ACR_A3_HelmetIA_Goggles_vz95_des","V_ACR_A3_PlateCarrier2_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };

	// Ostatni
    class ACR_Sniper: B_spotter_F
    {
        _generalMacro = "B_spotter_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX04"; //SNIPERI
        displayName = "$STR_B_SPOTTER_F0";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SniperGhillie";
		model = "\A3\characters_f\Common\ghillie.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_ghillie.paa"};
        weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        Items[] = {"optic_hamr","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"optic_hamr","FirstAidKit","FirstAidKit"};
        linkedItems[] = {"V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_Sniper2: B_sniper_F
    {
        _generalMacro = "B_sniper_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX04"; //SNIPERI
        displayName = "$STR_B_SNIPER_F0";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SniperGhillie";
        weapons[] = {"acr_a3_CZ750_SOS","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_CZ750_SOS","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","16Rnd_9x21_Mag","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","Chemlight_green","Chemlight_green"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        linkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_Sniper_Des: B_spotter_F
    {
        _generalMacro = "B_spotter_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX04"; //SNIPERI
        displayName = "$STR_ACR_SPOTTER_DES";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SniperGhillie_des";
        model = "\A3\characters_f\Common\ghillie.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_ghillie_des.paa"};
        weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        Items[] = {"optic_hamr","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"optic_hamr","FirstAidKit","FirstAidKit"};
        linkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_Sniper2_Des: B_sniper_F
    {
        _generalMacro = "B_sniper_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX04"; //SNIPERI
        displayName = "$STR_ACR_SNIPER_DES";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SniperGhillie_des";
        weapons[] = {"acr_a3_CZ750_SOS","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_CZ750_SOS","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","Chemlight_green","Chemlight_green"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        linkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };

	class ACR_Pilot: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX00"; //zaklad
		displayName = "$STR_B_HELIPILOT_F0";
		genericNames = "CzechMen";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_HeliPilotCoveralls_rgr";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Pilot.paa"};
		weapons[] = {"CUP_smg_EVO","acr_a3_P07","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"CUP_smg_EVO","acr_a3_P07","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"V_TacVestIR_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_TacVestIR_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
	};
    class ACR_Pilot_des: B_Soldier_F
    {
        _generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX00"; //zaklad
        displayName = "$STR_ACR_HELIPILOT_DES";
        genericNames = "CzechMen";
        model = "\A3\Characters_F\Common\coveralls.p3d";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_HeliPilotCoveralls_khk";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Pilot_des.paa"};
        weapons[] = {"CUP_smg_EVO","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"CUP_smg_EVO","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"V_TacVestIR_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVestIR_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
    };
	class ACR_Dustojnik: B_Soldier_F //znackablabla
	{
		_generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX00"; //zaklad
		displayName = "$STR_B_OFFICER_F0";
		genericNames = "CzechMen";
		model = "\A3\Characters_F_beta\indep\ia_officer.p3d";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_OfficerUniform_vz95";
		weapons[] = {"acr_a3_P07","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"acr_a3_P07","Throw","Put","Rangefinder"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_ACR_A3_Beret_red","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_ACR_A3_Beret_red","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		icon = "iconManOfficer";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Offic.paa","\acr_a3\acr_a3_characters\data\ACR_Uniforma_Svetr.paa"};
	};
    class ACR_Dustojnik_des: B_Soldier_F //znackablabla
    {
        _generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX00"; //zaklad
        displayName = "$STR_ACR_OFFICER_DES";
        genericNames = "CzechMen";
        model = "\A3\Characters_F_beta\indep\ia_officer.p3d";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_OfficerUniform_des";
        weapons[] = {"acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"H_ACR_A3_Beret_red","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"H_ACR_A3_Beret_red","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
        icon = "iconManOfficer";
        hiddenSelections[] = {"Camo1","Camo2","insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Offic_des.paa","\acr_a3\acr_a3_characters\data\ACR_Uniforma_Svetr_des.paa"};
    };
    class ACR_Neozbrojeny: B_Soldier_F
    {
        _generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX00"; //zaklad
        displayName = "$STR_B_SOLDIER_LITE_F0";
		genericNames = "CzechMen";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SweaterUniform_vz95";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Svetr.paa"};
        weapons[] = {"Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Throw","Put","Rangefinder"};
        magazines[] = {"Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Flag'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_Neozbrojeny_des: B_Soldier_F
    {
        _generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX00"; //zaklad
        displayName = "$STR_ACR_SOLDIER_LITE_DES";
        genericNames = "CzechMen";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SweaterUniform_des";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Svetr_des.paa"};
        weapons[] = {"Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Throw","Put","Rangefinder"};
        magazines[] = {"Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Flag'] call BIS_fnc_setUnitInsignia;";
        };
    };

    // Bedna
    class ACR_A3_GearBox: B_supplyCrate_F
    {
        displayName = "$STR_ACR_GEAR";
        maximumLoad = 999999;
        transportMaxWeapons = 50000;
        transportMaxMagazines = 200000;
        transportMaxBackpacks = 2000;
//        class eventHandlers
//        {
//            init = "[""AmmoboxInit"",[_this select 0,false,{true}]] call BIS_fnc_arsenal;";
//        };
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {
            class _xx_U_ACR_A3_CombatUniform
            {
                name = "U_ACR_A3_CombatUniform";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_vest
            {
                name = "U_ACR_A3_CombatUniform_vest";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_tshirt
            {
                name = "U_ACR_A3_CombatUniform_tshirt";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_Des
            {
                name = "U_ACR_A3_CombatUniform_Des";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_Des_vest
            {
                name = "U_ACR_A3_CombatUniform_Des_vest";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_Des_tshirt
            {
                name = "U_ACR_A3_CombatUniform_Des_tshirt";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_MOUT
            {
                name = "U_ACR_A3_CombatUniform_MOUT";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_MOUT_vest
            {
                name = "U_ACR_A3_CombatUniform_MOUT_vest";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_MOUT_Des
            {
                name = "U_ACR_A3_CombatUniform_MOUT_Des";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_MOUT_Des_vest
            {
                name = "U_ACR_A3_CombatUniform_MOUT_Des_vest";
                count = 30;
            };
            class _xx_U_ACR_A3_SniperGhillie
            {
                name = "U_ACR_A3_SniperGhillie";
                count = 30;
            };
            class _xx_U_ACR_A3_SniperGhillie_Des
            {
                name = "U_ACR_A3_SniperGhillie_Des";
                count = 30;
            };
            class _xx_U_ACR_A3_HeliPilotCoveralls_rgr
            {
                name = "U_ACR_A3_HeliPilotCoveralls_rgr";
                count = 30;
            };
            class _xx_U_ACR_A3_HeliPilotCoveralls_khk
            {
                name = "U_ACR_A3_HeliPilotCoveralls_khk";
                count = 30;
            };
            class _xx_U_ACR_A3_OfficerUniform_vz95
            {
                name = "U_ACR_A3_OfficerUniform_vz95";
                count = 30;
            };
            class _xx_U_ACR_A3_OfficerUniform_des
            {
                name = "U_ACR_A3_OfficerUniform_des";
                count = 30;
            };
            class _xx_U_ACR_A3_SweaterUniform_vz95
            {
                name = "U_ACR_A3_SweaterUniform_vz95";
                count = 30;
            };
            class _xx_U_ACR_A3_SweaterUniform_des
            {
                name = "";
                count = 30;
            };
            class _xx_V_ACR_A3_PlateCarrierIA2_vz95
            {
                name = "V_ACR_A3_PlateCarrierIA2_vz95";
                count = 30;
            };
            class _xx_V_ACR_A3_PlateCarrier1_vz95
            {
                name = "V_ACR_A3_PlateCarrier1_vz95";
                count = 30;
            };
            class _xx_V_ACR_A3_PlateCarrier2_vz95
            {
                name = "V_ACR_A3_PlateCarrier2_vz95";
                count = 30;
            };
            class _xx_V_ACR_A3_PlateCarrier1_rgr
            {
                name = "V_ACR_A3_PlateCarrier1_rgr";
                count = 30;
            };
            class _xx_V_ACR_A3_PlateCarrier2_rgr
            {
                name = "V_ACR_A3_PlateCarrier2_rgr";
                count = 30;
            };
            class _xx_V_ACR_A3_PlateCarrier1_khk
            {
                name = "V_ACR_A3_PlateCarrier1_khk";
                count = 30;
            };
            class _xx_V_ACR_A3_PlateCarrier2_khk
            {
                name = "V_ACR_A3_PlateCarrier2_khk";
                count = 30;
            };
            class _xx_V_TacVestIR_blk
            {
                name = "V_TacVestIR_blk";
                count = 30;
            };
            class _xx_V_TacVest_khk
            {
                name = "V_TacVest_khk";
                count = 30;
            };
            class _xx_V_TacVest_oli
            {
                name = "V_TacVest_oli";
                count = 30;
            };
            class _xx_V_Chestrig_khk
            {
                name = "V_Chestrig_khk";
                count = 30;
            };
            class _xx_V_Chestrig_rgr
            {
                name = "V_Chestrig_rgr";
                count = 30;
            };
            class _xx_V_BandollierB_khk
            {
                name = "V_BandollierB_khk";
                count = 30;
            };
            class _xx_V_BandollierB_rgr
            {
                name = "V_BandollierB_rgr";
                count = 30;
            };
            class _xx_H_ACR_A3_HelmetIA_vz95
            {
                name = "H_ACR_A3_HelmetIA_vz95";
                count = 30;
            };
            class _xx_H_ACR_A3_HelmetIA_vz95_des
            {
                name = "H_ACR_A3_HelmetIA_vz95_des";
                count = 30;
            };
            class _xx_H_ACR_A3_HelmetIA_Goggles_vz95
            {
                name = "H_ACR_A3_HelmetIA_Goggles_vz95";
                count = 30;
            };
            class _xx_H_ACR_A3_HelmetIA_Goggles_vz95_des
            {
                name = "H_ACR_A3_HelmetIA_Goggles_vz95_des";
                count = 30;
            };
            class _xx_H_ACR_A3_HelmetB_rgr
            {
                name = "H_ACR_A3_HelmetB_rgr";
                count = 30;
            };
            class _xx_H_ACR_A3_Beret_red
            {
                name = "H_ACR_A3_Beret_red";
                count = 30;
            };
            class _xx_H_ACR_A3_Booniehat_vz95
            {
                name = "H_ACR_A3_Booniehat_vz95";
                count = 30;
            };
			class _xx_H_ACR_A3_Booniehat_vz95_des
            {
                name = "H_ACR_A3_Booniehat_vz95_des";
                count = 30;
            };
            class _xx_H_ACR_A3_Booniehat_fold_vz95
            {
                name = "H_ACR_A3_Booniehat_fold_vz95";
                count = 30;
            };
            class _xx_H_ACR_A3_Cap_rgr
            {
                name = "H_ACR_A3_Cap_rgr";
                count = 30;
            };
            class _xx_H_ACR_A3_Cap_khk
            {
                name = "H_ACR_A3_Cap_khk";
                count = 30;
            };
            class _xx_H_ACR_A3_Pakol_grey
            {
                name = "H_ACR_A3_Pakol_grey";
                count = 30;
            };
        };
        class TransportBackpacks  {
            class _xx_ACR_A3_Backpack_Carryall_vz95
            {
                backpack = "ACR_A3_Backpack_Carryall_vz95";
                count = 30;
            };
            class _xx_ACR_A3_Backpack_Kitbag_vz95
            {
                backpack = "ACR_A3_Backpack_Kitbag_vz95";
                count = 30;
            };
            class _xx_B_Carryall_cbr
            {
                backpack = "B_Carryall_cbr";
                count = 30;
            };
            class _xx_B_Carryall_oli
            {
                backpack = "B_Carryall_oli";
                count = 30;
            };
            class _xx_B_Kitbag_cbr
            {
                backpack = "B_Kitbag_cbr";
                count = 30;
            };
            class _xx_B_Kitbag_rgr
            {
                backpack = "B_Kitbag_rgr";
                count = 30;
            };
            class _xx_B_FieldPack_cbr
            {
                backpack = "B_FieldPack_cbr";
                count = 30;
            };
            class _xx_B_FieldPack_oli
            {
                backpack = "B_FieldPack_oli";
                count = 30;
            };
            class _xx_B_AssaultPack_cbr
            {
                backpack = "B_AssaultPack_cbr";
                count = 30;
            };
            class _xx_B_AssaultPack_rgr
            {
                backpack = "B_AssaultPack_rgr";
                count = 30;
            };
            class _xx_B_TacticalPack_Base
            {
                backpack = "B_TacticalPack_Base";
                count = 30;
            };
            class _xx_B_TacticalPack_oli
            {
                backpack = "B_TacticalPack_oli";
                count = 30;
            };
            class _xx_B_Kitbag_mcamo
            {
                backpack = "B_Kitbag_mcamo";
                count = 0;
            };
        };
    };
};
class CfgGroups
{
    class West
    {
        name = "$STR_A3_CfgGroups_West0";
        class ACR_A3_ACRP_Group
        {
            name = "$STR_ACR_FACTION";
            class Infantry_ACR_A3
            {
                name = "$STR_A3_CFGGROUPS_WEST_BLU_F_INFANTRY0";
                class Infantry_ACR_A3_ACR_VZ95
                {
                    faction = "ACR";
                    name = "$STR_ACR_INF_VZ95";
                    side = 1;
                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = SERGEANT;
                        side = 1;
                        vehicle = "ACR_Vojak06";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = CORPORAL;
                        side = 1;
                        vehicle = "ACR_Vojak03";
                    };
                    class Unit2
                    {
                        position[] = {-5, -5, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_Vojak01";
                    };
                    class Unit3
                    {
                        position[] = {10, -10, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_Vojak05";
                    };
                    class Unit4
                    {
                        position[] = {-10, -10, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_Vojak02";
                    };
                    class Unit5 {
                        position[] = {15, -15, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_Vojak04";
                    };
                    class Unit6
                    {
                        position[] = {-15, -15, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_Vojak07";
                    };
                    class Unit7
                    {
                        position[] = {20, -20, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_Vojak10";
                    };
                };
                class Infantry_ACR_A3_ACR_VZ95_DES
                {
                    faction = "ACR";
                    name = "$STR_ACR_INF_DES";
                    side = 1;
                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = SERGEANT;
                        side = 1;
                        vehicle = "ACR_Des_Vojak06";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = CORPORAL;
                        side = 1;
                        vehicle = "ACR_Des_Vojak03";
                    };
                    class Unit2
                    {
                        position[] = {-5, -5, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_Des_Vojak01";
                    };
                    class Unit3
                    {
                        position[] = {10, -10, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_Des_Vojak05";
                    };
                    class Unit4
                    {
                        position[] = {-10, -10, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_Des_Vojak02";
                    };
                    class Unit5 {
                        position[] = {15, -15, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_Des_Vojak04";
                    };
                    class Unit6
                    {
                        position[] = {-15, -15, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_Des_Vojak07";
                    };
                    class Unit7
                    {
                        position[] = {20, -20, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_Des_Vojak10";
                    };
                };
                class Infantry_ACR_A3_ACR_MOUT
                {
                    faction = "ACR";
                    name = "$STR_ACR_INF_MOUT";
                    side = 1;
                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = SERGEANT;
                        side = 1;
                        vehicle = "ACR_MOUT_Vojak06";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = CORPORAL;
                        side = 1;
                        vehicle = "ACR_MOUT_Vojak03";
                    };
                    class Unit2
                    {
                        position[] = {-5, -5, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_MOUT_Vojak01";
                    };
                    class Unit3
                    {
                        position[] = {10, -10, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_MOUT_Vojak05";
                    };
                    class Unit4
                    {
                        position[] = {-10, -10, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_MOUT_Vojak02";
                    };
                    class Unit5 {
                        position[] = {15, -15, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_MOUT_Vojak04";
                    };
                    class Unit6
                    {
                        position[] = {-15, -15, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_MOUT_Vojak07";
                    };
                    class Unit7
                    {
                        position[] = {20, -20, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_MOUT_Vojak10";
                    };
                };
                class Infantry_ACR_A3_ACR_MOUT_Des
                {
                    faction = "ACR";
                    name = "$STR_ACR_INF_MOUT_DES";
                    side = 1;
                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = SERGEANT;
                        side = 1;
                        vehicle = "ACR_MOUT_Des_Vojak06";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = CORPORAL;
                        side = 1;
                        vehicle = "ACR_MOUT_Des_Vojak03";
                    };
                    class Unit2
                    {
                        position[] = {-5, -5, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_MOUT_Des_Vojak01";
                    };
                    class Unit3
                    {
                        position[] = {10, -10, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_MOUT_Des_Vojak05";
                    };
                    class Unit4
                    {
                        position[] = {-10, -10, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_MOUT_Des_Vojak02";
                    };
                    class Unit5 {
                        position[] = {15, -15, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_MOUT_Des_Vojak04";
                    };
                    class Unit6
                    {
                        position[] = {-15, -15, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_MOUT_Des_Vojak07";
                    };
                    class Unit7
                    {
                        position[] = {20, -20, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACR_MOUT_Des_Vojak10";
                    };
                };
                class Infantry_ACR_A3_ACRP
                {
                    faction = "ACR";
                    name = "$STR_ACR_RECON_VZ95";
                    side = 1;
                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = SERGEANT;
                        side = 1;
                        vehicle = "ACRP_Vojak06";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = CORPORAL;
                        side = 1;
                        vehicle = "ACRP_Vojak01";
                    };
                    class Unit2
                    {
                        position[] = {-5, -5, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACRP_Vojak02";
                    };
                    class Unit3
                    {
                        position[] = {10, -10, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACRP_Vojak03";
                    };
                    class Unit4
                    {
                        position[] = {-10, -10, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACRP_Vojak04";
                    };
                    class Unit5 {
                        position[] = {15, -15, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACRP_Vojak05";
                    };
                    class Unit6
                    {
                        position[] = {-15, -15, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACRP_Vojak07";
                    };
                    class Unit7
                    {
                        position[] = {20, -20, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACRP_Vojak10";
                    };
                };
                class Infantry_ACR_A3_ACRP_Des
                {
                    faction = "ACR";
                    name = "$STR_ACR_RECON_DES";
                    side = 1;
                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = SERGEANT;
                        side = 1;
                        vehicle = "ACRP_Des_Vojak06";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = CORPORAL;
                        side = 1;
                        vehicle = "ACRP_Des_Vojak01";
                    };
                    class Unit2
                    {
                        position[] = {-5, -5, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACRP_Des_Vojak02";
                    };
                    class Unit3
                    {
                        position[] = {10, -10, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACRP_Des_Vojak03";
                    };
                    class Unit4
                    {
                        position[] = {-10, -10, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACRP_Des_Vojak04";
                    };
                    class Unit5
                    {
                        position[] = {15, -15, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACRP_Des_Vojak05";
                    };
                    class Unit6
                    {
                        position[] = {-15, -15, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACRP_Des_Vojak07";
                    };
                    class Unit7
                    {
                        position[] = {20, -20, 0};
                        rank = PRIVATE;
                        side = 1;
                        vehicle = "ACRP_Des_Vojak10";
                    };
                };
                class Infantry_ACR_SNIPER
                {
                    faction = "ACR";
                    name = "$STR_ACR_SNIPERS";
                    side = 1;
                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = SERGEANT;
                        side = 1;
                        vehicle = "ACR_Sniper2";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = CORPORAL;
                        side = 1;
                        vehicle = "ACR_Sniper";
                    };
                };
                class Infantry_ACR_SNIPER_Des
                {
                    faction = "ACR";
                    name = "$STR_ACR_SNIPERS_DES";
                    side = 1;
                    class Unit0
                    {
                        position[] = {0, 0, 0};
                        rank = SERGEANT;
                        side = 1;
                        vehicle = "ACR_Sniper2_Des";
                    };
                    class Unit1
                    {
                        position[] = {5, -5, 0};
                        rank = CORPORAL;
                        side = 1;
                        vehicle = "ACR_Sniper_Des";
                    };
                };
            };
        };
    };
};
class CfgUnitInsignia
{
    class ACR_Flag
    {
        displayName = "$STR_ACR_FLAG";
        texture = "\acr_a3\acr_a3_characters\data\insignia\acr_flag.paa";
        author = "$STR_ACR";
    };
    class ACR_Medic
    {
        displayName = "$STR_ACR_MEDIC";
        texture = "\acr_a3\acr_a3_characters\data\insignia\acr_medic.paa";
        author = "$STR_ACR";
    };
	class ACR_Patch
	{
		displayName = "$STR_ACR_LOGO1";
		texture = "\acr_a3\acr_a3_characters\data\insignia\acr_patch.paa";
		author = "$STR_ACR";
	};
    class ACR_Patch2
	{
		displayName = "$STR_ACR_LOGO2";
		texture = "\acr_a3\acr_a3_characters\data\insignia\acr_patch2.paa";
		author = "$STR_ACR";
	};
    class ACR_Patch3
	{
		displayName = "$STR_ACR_LOGO3";
		texture = "\acr_a3\acr_a3_characters\data\insignia\acr_patch3.paa";
		author = "$STR_ACR";
	};

    // Krev
    class ACR_Patch_A_Neg
    {
        displayName = "$STR_ACR_A_NEG";
        texture = "\acr_a3\acr_a3_characters\data\insignia\blood\A_Neg.paa";
        author = "$STR_ACR";
        scope = 0;
    };
    class ACR_Patch_A_Pos
    {
        displayName = "$STR_ACR_A_POS";
        texture = "\acr_a3\acr_a3_characters\data\insignia\blood\A_Pos.paa";
        author = "$STR_ACR";
        scope = 0;
    };
    class ACR_Patch_B_Neg
    {
        displayName = "$STR_ACR_B_NEG";
        texture = "\acr_a3\acr_a3_characters\data\insignia\blood\B_Neg.paa";
        author = "$STR_ACR";
        scope = 0;
    };
    class ACR_Patch_B_Pos
    {
        displayName = "$STR_ACR_B_POS";
        texture = "\acr_a3\acr_a3_characters\data\insignia\blood\B_Pos.paa";
        author = "$STR_ACR";
        scope = 0;
    };
    class ACR_Patch_AB_Neg
    {
        displayName = "$STR_ACR_AB_NEG";
        texture = "\acr_a3\acr_a3_characters\data\insignia\blood\AB_Neg.paa";
        author = "$STR_ACR";
        scope = 0;
    };
    class ACR_Patch_AB_Pos
    {
        displayName = "$STR_ACR_AB_POS";
        texture = "\acr_a3\acr_a3_characters\data\insignia\blood\AB_Pos.paa";
        author = "$STR_ACR";
        scope = 0;
    };
    class ACR_Patch_O_Neg
    {
        displayName = "$STR_ACR_O_NEG";
        texture = "\acr_a3\acr_a3_characters\data\insignia\blood\O_Neg.paa";
        author = "$STR_ACR";
        scope = 0;
    };
    class ACR_Patch_O_Pos
    {
        displayName = "$STR_ACR_O_POS";
        texture = "\acr_a3\acr_a3_characters\data\insignia\blood\O_Pos.paa";
        author = "$STR_ACR";
        scope = 0;
    };
};