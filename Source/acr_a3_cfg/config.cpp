class CfgPatches
{
	class ACR_A3_Characters
	{
		units[] = {"ACR_A3_Backpack_Carryall_vz95","ACRP_Vojak01","ACRP_Vojak02","ACRP_Vojak07","ACRP_Vojak03","ACRP_Vojak04","ACRP_Vojak05","ACRP_Vojak10","ACRP_Vojak06","ACR_Vojak01","ACR_Vojak02","ACR_Vojak07","ACR_Vojak03","ACR_Vojak04","ACR_Vojak05","ACR_Vojak09","ACR_Vojak10","ACR_Vojak11","ACR_Vojak06","ACR_Vojak12","ACR_MOUT_Vojak01","ACR_MOUT_Vojak02","ACR_MOUT_Vojak07","ACR_MOUT_Vojak03","ACR_MOUT_Vojak04","ACR_MOUT_Vojak05","ACR_MOUT_Vojak10","ACR_MOUT_Vojak06","ACR_Des_Vojak01","ACR_Des_Vojak02","ACR_Des_Vojak07","ACR_Des_Vojak03","ACR_Des_Vojak04","ACR_Des_Vojak05","ACR_Des_Vojak10","ACR_Des_Vojak06","ACR_Pilot","ACR_Dustojnik","ACR_Neozbrojeny"};
		weapons[] = {"V_ACR_A3_PlateCarrierIA2_vz95","V_ACR_A3_PlateCarrier1_vz95","V_ACR_A3_PlateCarrier2_vz95","V_ACR_A3_PlateCarrier1_rgr","V_ACR_A3_PlateCarrier2_rgr","V_ACR_A3_PlateCarrier1_khk","V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_HelmetIA_vz95","H_ACR_A3_HelmetIA_vz95_des","H_ACR_A3_HelmetB_rgr","H_ACR_A3_Beret_red","H_ACR_A3_Booniehat_vz95","H_ACR_A3_Cap_rgr","U_ACR_A3_CombatUniform","U_ACR_A3_CombatUniform_tshirt","U_ACR_A3_CombatUniform_vest","U_ACR_A3_CombatUniform_MOUT","U_ACR_A3_CombatUniform_MOUT_tshirt","U_ACR_A3_CombatUniform_MOUT_vest","U_ACR_A3_CombatUniform_Des","U_ACR_A3_CombatUniform_Des_tshirt","U_ACR_A3_CombatUniform_Des_vest","U_ACR_A3_HeliPilotCoveralls_rgr","U_ACR_A3_OfficerUniform_vz95","U_ACR_A3_SweaterUniform_vz95"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Characters_F_BLUFOR"};
	};
};
class CfgVehicleClasses
{
	class ACRX0
	{
		displayName = "$STR_ACR_MENVZ95REC"; //Maj bonnie hatku a co ja vim
	};
	class ACRX00
	{
		displayName = "$STR_ACR_MEN"; //vz. 95 zakladni vojaci a pilot STRINGTABLETEXT: Men
	};
	class ACRX01
	{
		displayName = "$STR_ACR_MENVZ95"; //lesni kokoti STRINGTABLETEXT: Men (vz. 95)
	};
	class ACRX02
	{
		displayName = "$STR_ACR_MEN_MOUT"; //MOUT kokoti
	};
	class ACRX03
	{
		displayName = "$STR_ACR_MEN_DESERT"; //poustni curaci
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
		displayName = "$STR_ACR"; //jmeno frakce v editoru STRINGTABLETEXT: ACR
		priority = 3;
		side = "TWest";
		icon = "\acr_a3_characters\data\ACR_odznak.paa";
	};
};
class cfgWeapons
{
	class ItemCore;
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier2_rgr;
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
    class V_ACR_A3_PlateCarrierIA2_vz95: ItemCore //Vesta
	{
		scope = 2;
		model = "\A3\Characters_F_beta\Indep\equip_ia_vest02";
		picture = "\acr_a3_characters\data\ikona_ACR_Vesta.paa";
		displayName = "$STR_ACR_VEST";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Vesta.paa"};
		author = "$STR_ACR";
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_beta\Indep\equip_ia_vest02";
			containerClass = "Supply200";
			mass = 50;
			armor = "5*0.5";
			passThrough = 0.7;
			hiddenSelections[] = {"camo"};
		};
	};
	class V_ACR_A3_PlateCarrier1_vz95: V_PlateCarrier1_rgr //Vesta2
	{
		scope = 2;
		picture = "\acr_a3_characters\data\ikona_ACR_Vesta2.paa";
		displayName = "$STR_ACR_VEST2";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Vesta2.paa"};
		author = "$STR_ACR";
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply200";
			mass = 50;
			armor = "5*0.5";
			passThrough = 0.7;
			hiddenSelections[] = {"camo"};
		};
	};
    class V_ACR_A3_PlateCarrier2_vz95: V_PlateCarrier2_rgr //Vesta2
    {
        scope = 2;
        picture = "\acr_a3_characters\data\ikona_ACR_Vesta2.paa";
        displayName = "AČR Taktická Vesta (vz.95, těžká)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Vesta2.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply200";
            mass = 50;
            armor = "5*0.5";
            passThrough = 0.7;
            hiddenSelections[] = {"camo"};
        };
    };
    class V_ACR_A3_PlateCarrier1_rgr: V_PlateCarrier1_rgr
    {
        picture = "\acr_a3_characters\data\ikona_ACR_Vesta_olive.paa";
        displayName = "AČR Taktická Vesta (zelená)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Vesta_olive.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            armor = 20;
            containerclass = "Supply140";
            mass = 60;
            passthrough = 0.5;
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            hiddenSelections[] = {"camo"};
        };
    };
    class V_ACR_A3_PlateCarrier2_rgr: V_PlateCarrier2_rgr
    {
        picture = "\acr_a3_characters\data\ikona_ACR_Vesta_olive.paa";
        displayName = "AČR Taktická Vesta (zelená, těžká)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Vesta_olive.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            armor = 30;
            containerclass = "Supply120";
            mass = 80;
            passthrough = 0.5;
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            hiddenSelections[] = {"camo"};
        };
    };
    class V_ACR_A3_PlateCarrier1_khk: V_PlateCarrier1_rgr
    {
        picture = "\acr_a3_characters\data\ikona_ACR_Vesta_khk.paa";
        displayName = "AČR Taktická Vesta (khaki)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Vesta_khk.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            armor = 20;
            containerclass = "Supply140";
            mass = 60;
            passthrough = 0.5;
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            hiddenSelections[] = {"camo"};
        };
    };
    class V_ACR_A3_PlateCarrier2_khk: V_PlateCarrier2_rgr
    {
        picture = "\acr_a3_characters\data\ikona_ACR_Vesta_khk.paa";
        displayName = "AČR Taktická Vesta (khaki, těžká)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Vesta_khk.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            armor = 30;
            containerclass = "Supply120";
            mass = 80;
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
		picture = "\acr_a3_characters\data\ikona_ACR_Prilba.paa";
		model = "\A3\Characters_F_beta\Indep\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Prilba.paa"};
		author = "$STR_ACR";
		class ItemInfo: HeadGearItem
		{
			uniformModel = "\A3\Characters_F_beta\Indep\headgear_helmet_canvas";
			mass = 70;
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};
    class H_ACR_A3_HelmetIA_vz95_des: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "AČR MICH 2000 (pouštní)";
        picture = "\acr_a3_characters\data\ikona_ACR_Prilba.paa";
        model = "\A3\Characters_F_beta\Indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Prilba_Des.paa"};
        author = "$STR_ACR";
        class ItemInfo: HeadGearItem
        {
            uniformModel = "\A3\Characters_F_beta\Indep\headgear_helmet_canvas";
            mass = 70;
            modelSides[] = {3,1};
            armor = "3*0.5";
            passThrough = 0.8;
            hiddenSelections[] = {"camo"};
        };
    };
    class H_ACR_A3_HelmetB_rgr: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "AČR Taktická Helma (zelená)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Prilba2.paa"};
        class ItemInfo: HeadGearItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            mass = 70;
            modelSides[] = {3,1};
            armor = "3*0.5";
            passThrough = 0.8;
            hiddenSelections[] = {"camo"};
        };
    };
    class H_ACR_A3_Beret_red: H_HelmetB
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "AČR Baret (červený)";
        picture = "\acr_a3_characters\data\Klobouk_95icon.paa";
        model = "\a3\characters_f\Common\headgear_beret01";
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Baret.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 6;
            uniformModel = "\a3\characters_f\Common\headgear_beret01";
            modelSides[] = {6};
            armor = 0;
            passThrough = 1;
        };
    };
	class H_ACR_A3_Booniehat_vz95: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_ACR_BOONIEHAT";
		picture = "\acr_a3_characters\data\Klobouk_95icon.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\Klobouk_95.paa"};
		author = "$STR_ACR";
		class ItemInfo: HeadGearItem
		{
			uniformModel = "\A3\Characters_F\Common\booniehat";
			mass = 10;
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};
	class H_ACR_A3_Cap_rgr: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_ACR_CAP";
		picture = "\A3\Characters_F\data\ui\icon_h_cap_grn_ca.paa";
		model = "\A3\Characters_F\Common\capb";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\Ksiltovka_95.paa"};
		author = "$STR_ACR";
		class ItemInfo: HeadGearItem
		{
			uniformModel = "\A3\Characters_F\Common\capb";
			mass = 10;
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};

	// vz. 95 Lesní Uniformy
	class U_ACR_A3_CombatUniform: Uniform_Base // Klasická
	{
		scope = 2;
		displayName = "$STR_ACR_UNIFORM";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		picture = "\acr_a3_characters\data\ikona_ACR_vz95.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		author = "$STR_ACR";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_Vojak01";
			containerClass = "Supply20";
			mass = 30;
		};
	};
    class U_ACR_A3_CombatUniform_tshirt: U_B_CombatUniform_mcam_tshirt // Tričko
    {
        displayName = "AČR Uniforma (vz.95, triko)";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
        picture = "\acr_a3_characters\data\ikona_ACR_vz95.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Vojak02";
            containerClass = "Supply20";
            mass = 30;
        };
    };
    class U_ACR_A3_CombatUniform_vest: U_B_CombatUniform_mcam_vest // Rukávy
    {
        displayName = "AČR Uniforma (vz.95, rukávy)";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
        picture = "\acr_a3_characters\data\ikona_ACR_vz95.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Vojak03";
            containerClass = "Supply20";
            mass = 30;
        };
    };

    // MOUT Uniformy
	class U_ACR_A3_CombatUniform_MOUT: Uniform_Base
	{
		scope = 2;
		displayName = "$STR_ACR_UNIFORM_MOUT";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
		picture = "\acr_a3_characters\data\ikona_ACR_MOUT.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		author = "$STR_ACR";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_MOUT_Vojak01";
			containerClass = "Supply20";
			mass = 30;
		};
	};
    class U_ACR_A3_CombatUniform_MOUT_tshirt: U_B_CombatUniform_mcam_tshirt // Tričko
    {
        displayName = "AČR Uniforma (MOUT, triko)";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
        picture = "\acr_a3_characters\data\ikona_ACR_MOUT.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_MOUT_Vojak02";
            containerClass = "Supply20";
            mass = 30;
        };
    };
    class U_ACR_A3_CombatUniform_MOUT_vest: U_B_CombatUniform_mcam_vest // Rukávy
    {
        displayName = "AČR Uniforma (MOUT, rukávy)";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
        picture = "\acr_a3_characters\data\ikona_ACR_MOUT.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_MOUT_Vojak03";
            containerClass = "Supply20";
            mass = 30;
        };
    };

    // vz.95 Pouštní Uniformy
	class U_ACR_A3_CombatUniform_Des: Uniform_Base
	{
		scope = 2;
		displayName = "$STR_ACR_UNIFORM_DESERT";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
		picture = "\acr_a3_characters\data\ikona_ACR_DESERT.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		author = "$STR_ACR";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_Des_Vojak01";
			containerClass = "Supply20";
			mass = 30;
		};
	};
    class U_ACR_A3_CombatUniform_Des_tshirt: U_B_CombatUniform_mcam_tshirt // Tričko
    {
        displayName = "AČR Uniforma (Pouštní, triko)";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
        picture = "\acr_a3_characters\data\ikona_ACR_DESERT.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Des_Vojak02";
            containerClass = "Supply20";
            mass = 30;
        };
    };
    class U_ACR_A3_CombatUniform_Des_vest: U_B_CombatUniform_mcam_vest // Rukávy
    {
        displayName = "AČR Uniforma (Pouštní, rukávy)";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
        picture = "\acr_a3_characters\data\ikona_ACR_DESERT.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Des_Vojak03";
            containerClass = "Supply20";
            mass = 30;
        };
    };
	class U_ACR_A3_HeliPilotCoveralls_rgr: Uniform_Base
	{
		scope = 2;
		displayName = "$STR_ACR_UNIFORM_PILOT";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Pilot.paa"};
		picture = "\acr_a3_characters\data\ikona_ACR_vz95.paa";
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
	class U_ACR_A3_OfficerUniform_vz95: Uniform_Base //pracuju na tom
	{
		scope = 2;
		displayName = "AČR Uniforma (Důstojnická, vz. 95)"; //WIP
		texture = "\acr_a3_characters\data\ACR_Uniforma_Offic.paa";
		picture = "\acr_a3_characters\data\ikona_ACR_vz95.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Offic.paa","\acr_a3_characters\data\ACR_Uniforma_Svetr"};
		author = "$STR_ACR";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_Dustojnik"; //znackablabla
			containerClass = "Supply20";
			mass = 30;
			hiddenSelections[] = {"Camo1","Camo2"};
		};
	};
    class U_ACR_A3_SweaterUniform_vz95: Uniform_Base
    {
        scope = 2;
        author = "$STR_ACR";
        displayName = "AČR Uniforma (Svetr, vz. 95)";
        picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Svetr.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Neozbrojeny";
            containerClass = "Supply30";
            mass = 30;
        };
    };
};
class cfgVehicles
{
	class B_Soldier_F;
    class B_Soldier_02_f;
    class B_Soldier_03_f;
    class Man;
	class B_Carryall_mcamo;
	class ACR_A3_Backpack_Carryall_vz95: B_Carryall_mcamo
	{
		scope = 2;
		displayName = "$STR_ACR_BACKPACK"; //mel 2 textury na batoh ale ma v configu jen 1 wtf?
		picture = "\acr_a3_characters\data\ikona_ACR_batoh02.paa"; //ikona
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\Batoh02_ACR.paa"};
		author = "$STR_ACR";
	};
	class ACRP_Vojak01: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		displayName = "Střelec";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak02: B_Soldier_F
	{
		_generalMacro = "B_Soldier_GL_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		displayName = "Radista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		hiddenSelections[] = {"Camo", ,"insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC119"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC119"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak07: B_Soldier_F
	{
		_generalMacro = "B_soldier_exp_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		backpack = "B_Bergen_sgg";
		displayName = "Ženista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		engineer = 1;
		icon = "iconManEngineer";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak03: B_Soldier_F
	{
		_generalMacro = "B_soldier_AR_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		displayName = "Kulometčík";
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		hiddenSelections[] = {"Camo", ,"insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		icon = "iconManMG";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak04: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		head = "H_ACR_A3_Booniehat_vz95";
		displayName = "Ostrostřelec";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_ACR_A3_Booniehat_vz95","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_ACR_A3_Booniehat_vz95","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak05: B_Soldier_F
	{
		_generalMacro = "B_medic_F";
		attendant = "true";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "Zdravotník";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		icon = "iconManMedic";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak10: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		displayName = "Střelec - AT";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		linkedItems[] = {"H_ACR_A3_Booniehat_vz95","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		respawnlinkedItems[] = {"H_ACR_A3_Booniehat_vz95","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManAT";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak06: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		displayName = "Velitel";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManLeader";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak01: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_AssaultPack_rgr";
		displayName = "Střelec";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak02: B_Soldier_02_f
	{
		_generalMacro = "B_Soldier_GL_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_AssaultPack_rgr";
		displayName = "Radista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_tshirt";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC119"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC119"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak07: B_Soldier_F
	{
		_generalMacro = "B_soldier_exp_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_Bergen_sgg";
		displayName = "Ženista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		engineer = 1;
		icon = "iconManEngineer";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak03: B_Soldier_03_f
	{
		_generalMacro = "B_soldier_AR_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		displayName = "Kulometčík";
		backpack = "B_AssaultPack_rgr";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_vest";
		weapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		icon = "iconManMG";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak04: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_AssaultPack_rgr";
		head = "H_ACR_A3_HelmetIA_vz95";
		displayName = "Ostrostřelec";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_ACR_A3_HelmetIA_vz95","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_ACR_A3_HelmetIA_vz95","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak05: B_Soldier_F
	{
		_generalMacro = "B_medic_F";
		attendant = "true";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "Zdravotník";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		icon = "iconManMedic";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak09: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX04"; //SNIPERI
		displayName = "Spotter";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_B_GhillieSuit";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		Items[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		linkedItems[] = {"H_Cap_headphones","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_Cap_headphones","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		canDeactivateMines = "true";
		camouflage = 0.6;
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak10: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_Kitbag_Base";
		displayName = "Střelec - AT";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		linkedItems[] = {"H_ACR_A3_HelmetIA_vz95","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		respawnlinkedItems[] = {"H_ACR_A3_HelmetIA_vz95","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManAT";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak11: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		faction = "ACR";
		vehicleClass = "ACRX04"; //SNIPERI
		scope = 2;
		scopeCurator = 2;
		displayName = "Odstřelovač";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_B_GhillieSuit";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"srifle_LRR_SOS_F","RH_cz75","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_SOS_F","RH_cz75","Throw","Put","Rangefinder"};
		magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","HandGrenade","HandGrenade","SmokeShell","SmokeShell","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","HandGrenade","HandGrenade","SmokeShell","SmokeShell","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","Chemlight_green","Chemlight_green"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		linkedItems[] = {"H_Cap_headphones","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_Cap_headphones","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		canDeactivateMines = "true";
		camouflage = 0.6;
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak06: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		displayName = "Velitel";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManLeader";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak12: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		displayName = "Průzkumník";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak01: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_AssaultPack_rgr";
		displayName = "Střelec";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_MOUT";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak02: B_Soldier_02_f
	{
		_generalMacro = "B_Soldier_GL_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_AssaultPack_rgr";
		displayName = "Radista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_MOUT_tshirt";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC119"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC119"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak07: B_Soldier_F
	{
		_generalMacro = "B_soldier_exp_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_Bergen_sgg";
		displayName = "Ženista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_MOUT";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz952","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		engineer = 1;
		icon = "iconManEngineer";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak03: B_Soldier_03_f
	{
		_generalMacro = "B_soldier_AR_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		displayName = "Kulometčík";
		backpack = "B_AssaultPack_rgr";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_MOUT_vest";
		weapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
		icon = "iconManMG";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak04: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_AssaultPack_rgr";
		head = "H_ACR_A3_HelmetB_rgr";
		displayName = "Ostrostřelec";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_MOUT";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
		weapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak05: B_Soldier_F
	{
		_generalMacro = "B_medic_F";
		attendant = "true";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "Zdravotník";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_MOUT";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		icon = "iconManMedic";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak10: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_Kitbag_Base";
		displayName = "Střelec - AT";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_MOUT";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		linkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		respawnlinkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManAT";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak06: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_AssaultPack_rgr";
		displayName = "Velitel";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_MOUT";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManLeader";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak01: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr";
		displayName = "Střelec";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak02: B_Soldier_02_f
	{
		_generalMacro = "B_Soldier_GL_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr";
		displayName = "Radista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC119"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC119"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak07: B_Soldier_F
	{
		_generalMacro = "B_soldier_exp_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_Bergen_sgg";
		displayName = "Ženista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		engineer = 1;
		icon = "iconManEngineer";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak03: B_Soldier_03_f
	{
		_generalMacro = "B_soldier_AR_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		displayName = "Kulometčík";
		backpack = "B_AssaultPack_rgr";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
		weapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
		icon = "iconManMG";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak04: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr";
		head = "H_HelmetB_light_sand";
		displayName = "Ostrostřelec";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
		weapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak05: B_Soldier_F
	{
		_generalMacro = "B_medic_F";
		attendant = "true";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "Zdravotník";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		icon = "iconManMedic";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak10: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_Kitbag_Base";
		displayName = "Střelec - AT";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManAT";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak06: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr";
		displayName = "Velitel";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManLeader";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Pilot: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX00"; //zaklad
		displayName = "Pilot";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_HeliPilotCoveralls_rgr";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Pilot.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"V_TacVestIR_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_TacVestIR_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Dustojnik: B_Soldier_F //znackablabla
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX00"; //zaklad
		displayName = "Důstojník";
		model = "\A3\Characters_F_beta\indep\ia_officer.p3d";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_ACR_A3_OfficerUniform_vz95";
		weapons[] = {"RH_cz75","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		magazines[] = {"RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_Rangemaster_belt","H_ACR_A3_Beret_red","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_Rangemaster_belt","H_ACR_A3_Beret_red","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManOfficer";
		canDeactivateMines = "true";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Offic.paa","\acr_a3_characters\data\ACR_Uniforma_Svetr.paa"};
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
    class ACR_Neozbrojeny: B_Soldier_F
    {
        _generalMacro = "B_Soldier_F";
        scope = 2;
		scopeCurator = 2;
        faction = "ACR";
        vehicleClass = "ACRX00"; //zaklad
        displayName = "Voják (neozbrojený)";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody";
        uniformClass = "U_ACR_A3_SweaterUniform_vz95";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Svetr.paa"};
        weapons[] = {"Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Throw","Put","Rangefinder"};
        magazines[] = {"Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
        respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
        canDeactivateMines = "true";
        class UniformInfo
        {
            class SlotsInfo
            {
                class NVG: UniformSlotInfo
                {
                    slotType = 602;
                };
                class Scuba: UniformSlotInfo
                {
                    slotType = 604;
                };
                class Headgear: UniformSlotInfo
                {
                    slotType = 605;
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
        texture = "\acr_a3_characters\data\insignia\acr_flag.paa";
        author = "$STR_ACR";
    };
	class ACR_Patch
	{
		displayName = "$STR_ACR_LOGO1";
		texture = "\acr_a3_characters\data\insignia\acr_patch.paa";
		author = "$STR_ACR";
	};
    class ACR_Patch2
	{
		displayName = "$STR_ACR_LOGO2";
		texture = "\acr_a3_characters\data\insignia\acr_patch2.paa";
		author = "$STR_ACR";
	};
    class ACR_Patch3
	{
		displayName = "$STR_ACR_LOGO3";
		texture = "\acr_a3_characters\data\insignia\acr_patch3.paa";
		author = "$STR_ACR";
	};

};
