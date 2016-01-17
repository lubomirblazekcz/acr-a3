class cfgVehicles
{
	class Land;
	class Man: Land {
		class Eventhandlers;
	};
	class CAManBase: Man {};
    class SoldierWB: CAManBase {};
    class B_Soldier_base_F: SoldierWB {
		class EventHandlers;
    };
    class B_Soldier_02_f: B_Soldier_base_F {};
    class B_Soldier_03_f: B_Soldier_base_F {};
    class B_Soldier_04_f: B_Soldier_base_F {};
    class B_Soldier_recon_base: B_Soldier_base_F {};
    class B_Soldier_sniper_base_F: B_Soldier_base_F {};

	class B_Soldier_F: B_Soldier_base_F {};
    class B_soldier_LAT_F: B_Soldier_base_F {};
    class B_soldier_repair_F: B_Soldier_base_F {};
    class B_Soldier_TL_F: B_Soldier_03_f {};
    class B_medic_F: B_Soldier_02_f {};
    class B_soldier_M_F: B_Soldier_base_F {};
    class B_Soldier_GL_F: B_Soldier_base_F {};
    class B_Soldier_SL_F: B_Soldier_03_f {};
    class B_recon_TL_F: B_Soldier_recon_base {};
    class B_recon_M_F: B_Soldier_recon_base {};
    class B_recon_medic_F: B_Soldier_recon_base {};
    class B_recon_F: B_Soldier_recon_base {};
    class B_recon_JTAC_F: B_Soldier_recon_base {};
    class B_recon_LAT_F: B_Soldier_recon_base {};
    class B_recon_exp_F: B_Soldier_recon_base {};
    class B_soldier_AR_F: B_Soldier_02_f {};
    class B_Helipilot_F: B_Soldier_04_f {};
    class B_officer_F: B_Soldier_base_F {};
    class B_Soldier_lite_F: B_Soldier_03_f {};
    class B_soldier_AA_F: B_Soldier_base_F {};
    class B_crew_F: B_Soldier_03_f {};
	class B_spotter_F: B_Soldier_sniper_base_F {};
	class B_sniper_F: B_Soldier_sniper_base_F {};

	class B_supplyCrate_F;
	class B_Kitbag_rgr_Exp;
	class B_Kitbag_rgr;
    class B_Carryall_mcamo;
    class B_Kitbag_cbr;

	// Backpacks
	class Bag_Base;
    class CUP_B_ACRPara_Base: Bag_Base
    {
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_CUPbatoh.paa"; //ikona
		hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\backpack_acr_co.paa"};
        model = "\acr_a3\acr_a3_characters\CUP_Backpack_ACR.p3d";
		author = "$STR_ACR"; dlc = "ACR_A3";
    };
    class CUP_B_ACRPara_m95: CUP_B_ACRPara_Base
    {
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_CUPbatoh.paa"; //ikona
		displayName = "$STR_ACR_BACKPACK_A2";
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\backpack_acr_co.paa"};
		author = "$STR_ACR"; dlc = "ACR_A3";
    };
    class CUP_B_ACRScout_Base: Bag_Base
    {
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_CUPbatoh02.paa"; //ikona
		hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\acr_equip2_co.paa"};
        model = "\acr_a3\acr_a3_characters\CUP_Scoutpack_ACR.p3d";
		author = "$STR_ACR"; dlc = "ACR_A3";
        maximumLoad = 80;
        mass = 15;
    };
    class CUP_B_ACRScout_m95: CUP_B_ACRScout_Base
    {
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_CUPbatoh02.paa"; //ikona
		displayName = "$STR_ACR_KITBAG_A2";
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\acr_equip2_co.paa"};
		author = "$STR_ACR"; dlc = "ACR_A3";
        maximumLoad = 80;
        mass = 15;
    };
	class ACR_A3_Backpack_Carryall_vz95: B_Carryall_mcamo
	{
		scope = 2;
		displayName = "$STR_ACR_BACKPACK";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_batoh02.paa"; //ikona
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Batoh02.paa"};
		author = "$STR_ACR"; dlc = "ACR_A3";
	};
	class ACR_A3_Backpack_Kitbag_vz95: B_Kitbag_rgr {
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        displayName = "$STR_ACR_KITBAG";
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Batoh.paa"};
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_batoh.paa"; //ikona
		author = "$STR_ACR"; dlc = "ACR_A3";
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
    class B_ACR_A3_Soldier_Base: B_Soldier_base_F //The soldier who appears wearing your underwear class
    {
        scope = 1;//1 = private and ensures it doesnt list as a character in the editor
        scopeCurator = 0;
        displayName = "ACR Example Underwear Character";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        model = "\A3\Characters_F\Common\basicbody";
		genericNames = "CzechMen";
        uniformClass = "U_ACR_A3_BasicBody_blk"; //Your underwear class in cfgweapons
        weapons[] = {};
        magazines[] = {};
        respawnWeapons[] = {};
        respawnMagazines[] = {};
        items[] = {};
        linkeditems[] = {};
        respawnlinkeditems[] = {};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Basicbody.paa"};
    };

	// vz.95 - Woodland / Desert
    #include "units\units_vz95.hpp"

    // vz.95 MOUT - Woodland / Desert
    #include "units\units_mout.hpp"

    // vz.95 Recon - Woodland / Desert
    #include "units\units_recon.hpp"

	// Other
    #include "units\units_other.hpp"

    // Dummy for compability
    #include "units\units_dummy.hpp"


    // Bedna
    class ACR_A3_GearBox: B_supplyCrate_F
    {
        displayName = "$STR_ACR_GEAR";
        maximumLoad = 999999;
        transportMaxWeapons = 50000;
        transportMaxMagazines = 200000;
        transportMaxBackpacks = 2000;
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