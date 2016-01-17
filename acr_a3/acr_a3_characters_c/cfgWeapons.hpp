class UniformSlotInfo;
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
    class U_ACR_A3_BasicBody_blk: Uniform_Base
    {
        scope = 1;
        scopeArsenal = 0;
        displayName = "$STR_ACR_UNDERWEAR";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_underwear.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
		author = "$STR_ACR"; dlc = "ACR_A3";

        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_ACR_A3_Soldier_Base";
            containerClass = "Supply0";
            mass = 1;
        };
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
    };
    class V_ACR_A3_BN2013_vz95: V_PlateCarrierIA1_dgtl //Vesta Test
    {
        scope = 2;
        model = "\acr_a3\acr_a3_characters\vesta_ACR";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Vesta.paa";
        displayName = "Balistický nosič BN-2013"; //TODO
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Vesta.paa"};
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: VestItem
        {

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
            uniformModel = "\acr_a3\acr_a3_characters\vesta_ACR";
            containerClass = "Supply140";
            mass = 60;
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Vesta.paa"};
        };
    };
    class V_ACR_A3_BN2013_vz95_black: V_PlateCarrierIA1_dgtl //Vesta Test
    {
        scope = 2;
        model = "\acr_a3\acr_a3_characters\vesta_ACR";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Vesta.paa";
        displayName = "Balistický nosič BN-2013 (BLACK)"; //TODO
        hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\acr_dst_soldier2_co_BLACK.paa","acr_a3\acr_a3_characters\data\equip1_co_BLACK.paa","acr_a3\acr_a3_characters\data\equip2_des_co.paa","acr_a3\acr_a3_characters\data\equip3_co_BLACK.paa","acr_a3\acr_a3_characters\data\equip4_co_BLACK.paa"};
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: VestItem
        {

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
            uniformModel = "\acr_a3\acr_a3_characters\vesta_ACR";
            containerClass = "Supply140";
            mass = 60;
            hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\acr_dst_soldier2_co_BLACK.paa","acr_a3\acr_a3_characters\data\equip1_co_BLACK.paa","acr_a3\acr_a3_characters\data\equip2_des_co.paa","acr_a3\acr_a3_characters\data\equip3_co_BLACK.paa","acr_a3\acr_a3_characters\data\equip4_co_BLACK.paa"};
        };
    };
    class V_ACR_A3_BN2013_vz95_des: V_PlateCarrierIA1_dgtl //Vesta Test
    {
        scope = 2;
        model = "\acr_a3\acr_a3_characters\vesta_ACR";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Vesta.paa";
        displayName = "Balistický nosič BN-2013 (DES)"; //TODO
        hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\acr_dst_soldier2_co_DESERT.paa","acr_a3\acr_a3_characters\data\equip1_co_DESERT.paa","acr_a3\acr_a3_characters\data\equip2_des_co.paa","acr_a3\acr_a3_characters\data\equip3_co_DESERT.paa","acr_a3\acr_a3_characters\data\equip4_co_DESERT.paa"};
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: VestItem
        {

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
            uniformModel = "\acr_a3\acr_a3_characters\vesta_ACR";
            containerClass = "Supply140";
            mass = 60;
            hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\acr_dst_soldier2_co_DESERT.paa","acr_a3\acr_a3_characters\data\equip1_co_DESERT.paa","acr_a3\acr_a3_characters\data\equip2_des_co.paa","acr_a3\acr_a3_characters\data\equip3_co_DESERT.paa","acr_a3\acr_a3_characters\data\equip4_co_DESERT.paa"};
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
		author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: VestItem
        {

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
    		uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_vest01";
            containerClass = "Supply140";
            mass = 60;
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: VestItem
        {

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
            uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_vest02";
            containerClass = "Supply140";
            mass = 80;
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

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
            uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_vest01";
            containerClass = "Supply140";
            mass = 60;
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

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
            uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_vest02";
            containerClass = "Supply140";
            mass = 80;
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
		author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: VestItem
        {

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
            containerclass = "Supply140";
            mass = 80;
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: VestItem
        {

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
            containerclass = "Supply140";
            mass = 100;
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: VestItem
        {

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
            containerclass = "Supply140";
            mass = 80;
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: VestItem
        {

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
            containerclass = "Supply140";
            mass = 100;
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: VestItem
        {

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
            containerclass = "Supply140";
            mass = 80;
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: VestItem
        {

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
            containerclass = "Supply140";
            mass = 100;
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            hiddenSelections[] = {"camo"};
        };
    };
    class V_PlateCarrierSpec_rgr;
    class V_ACR_A3_PlateCarrierSpec_rgr: V_PlateCarrierSpec_rgr
    {
        displayName = "$STR_ACR_VEST3_rgr";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Vesta_heavy_olive.paa";
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Vesta_heavy_olive.paa"};
        author = "$STR_ACR"; dlc = "ACR_A3";
    };
    class V_ACR_A3_PlateCarrierSpec_khk: V_PlateCarrierSpec_rgr
    {
        displayName = "$STR_ACR_VEST3_khk";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Vesta_heavy_khk.paa";
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Vesta_heavy_khk.paa"};
        author = "$STR_ACR"; dlc = "ACR_A3";
    };
    class V_PlateCarrierIAGL_oli;
    class V_ACR_A3_PlateCarrierIAGL_oli: V_PlateCarrierIAGL_oli
    {
        displayName = "$STR_ACR_VEST";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_Vesta_heavy.paa";
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Vesta.paa","\acr_a3\acr_a3_characters\data\ACR_Vesta_heavy.paa"};
        author = "$STR_ACR"; dlc = "ACR_A3";
    };
    class V_PlateCarrierIAGL_khk: V_PlateCarrierIAGL_oli
    {
        displayName = "$STR_a3_v_platecarrieria2_khkl0";
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip_ia_vest01_khk_co.paa", "\acr_a3\acr_a3_characters\data\equip_ia_vest01_heavy_khk_co.paa"};
        author = "$STR_A3_Bohemia_Interactive";
    };
	class H_ACR_A3_HelmetIA_vz95: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_ACR_MICH2000";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_helma.paa";
        model   = "\acr_a3\acr_a3_characters\mich2000nogoggles_ACR"; /// what model does the cap use
		author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_wood_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadGearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
            uniformModel = "\acr_a3\acr_a3_characters\mich2000nogoggles_ACR.p3d";  /// what model is used for this cap
			mass = 40;
			modelSides[] = {6};
            allowedSlots[] = {901,605};
			armor = 4;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_wood_co.paa"}; /// what texture is going to be used
		};
	};
	class H_ACR_A3_HelmetIA_Headset_vz95: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_ACR_MICH2000_HEADSET";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_helma.paa";
        model   = "\acr_a3\acr_a3_characters\mich2000headsetnogoggles_ACR"; /// what model does the cap use
		author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_wood_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadGearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
            uniformModel = "\acr_a3\acr_a3_characters\mich2000headsetnogoggles_ACR.p3d";  /// what model is used for this cap
			mass = 40;
			modelSides[] = {6};
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_des_co.paa"}; /// what texture is going to be used
        class ItemInfo: HeadGearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
            uniformModel = "\acr_a3\acr_a3_characters\mich2000nogoggles_ACR.p3d";  /// what model is used for this cap
            mass = 40;
            modelSides[] = {6};
            allowedSlots[] = {901,605};
            armor = 4;
            passThrough = 0.5;
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_des_co.paa"}; /// what texture is going to be used
        };
    };
    class H_ACR_A3_HelmetIA_Headset_vz95_des: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "$STR_ACR_MICH2000_HEADSET_Des";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_helma_poust.paa";
        model   = "\acr_a3\acr_a3_characters\mich2000headsetgoggles_ACR"; /// what model does the cap use
        author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_des_co.paa"}; /// what texture is going to be used
        class ItemInfo: HeadGearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
            uniformModel = "\acr_a3\acr_a3_characters\mich2000headsetgoggles_ACR.p3d";  /// what model is used for this cap
            mass = 40;
            modelSides[] = {6};
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
		author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_wood_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
            mass = 40; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\mich2000_ACR.p3d";  /// what model is used for this cap
            allowedSlots[] = {901,605};   /// this cap is so small and flexible that it fits everywhere
            modelSides[] = {6}; /// available for all sides
            armor = 4;
            passThrough = 0.5;
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_wood_co.paa"}; /// what texture is going to be used
        };
    };
	class H_ACR_A3_HelmetIA_Goggles_Headset_vz95: ItemCore
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_MICH2000_HS_GOGGLES"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_helmabryle.paa"; /// this looks fairly similar
        model   = "\acr_a3\acr_a3_characters\mich2000headsetgoggles_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_wood_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
            mass = 40; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\mich2000headsetgoggles_ACR.p3d";  /// what model is used for this cap
            allowedSlots[] = {901,605};   /// this cap is so small and flexible that it fits everywhere
            modelSides[] = {6}; /// available for all sides
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
		author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_des_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
            mass = 40; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\mich2000_ACR.p3d";  /// what model is used for this cap
            allowedSlots[] = {901,605};   /// this cap is so small and flexible that it fits everywhere
            modelSides[] = {6}; /// available for all sides
			armor = 4;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_des_co.paa"}; /// what texture is going to be used
        };
    };
    class H_ACR_A3_HelmetIA_Goggles_Headset_vz95_des: ItemCore
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_MICH2000_HS_GOGGLES_Des"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_helmabryle_poust.paa"; /// this looks fairly similar
        model   = "\acr_a3\acr_a3_characters\mich2000headsetgoggles_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_des_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
            mass = 40; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\mich2000headsetgoggles_ACR.p3d";  /// what model is used for this cap
            allowedSlots[] = {901,605};   /// this cap is so small and flexible that it fits everywhere
            modelSides[] = {6}; /// available for all sides
			armor = 4;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_des_co.paa"}; /// what texture is going to be used
        };
    };
    class H_ACR_A3_HelmetB_rgr: ItemCore
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_MICH2000WOCOVER"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_helma_WOCOVER.paa"; /// this looks fairly similar
        model   = "\acr_a3\acr_a3_characters\mich2000wocovernogoggles_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip3_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
            mass = 40; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\mich2000wocovernogoggles_ACR.p3d";  /// what model is used for this cap
            allowedSlots[] = {901,605};   /// this cap is so small and flexible that it fits everywhere
            modelSides[] = {6}; /// available for all sides
            armor = 4;
            passThrough = 0.5;
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip3_co.paa"}; /// what texture is going to be used
        };
    };
    class H_ACR_A3_HelmetB_des: ItemCore
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_MICH2000WOCOVER_DES"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_helma_WOCOVER_DES.paa"; /// this looks fairly similar
        model   = "\acr_a3\acr_a3_characters\mich2000wocovernogoggles_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip3_co_DESHELMET.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
            mass = 40; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\mich2000wocovernogoggles_ACR.p3d";  /// what model is used for this cap
            allowedSlots[] = {901,605};   /// this cap is so small and flexible that it fits everywhere
            modelSides[] = {6}; /// available for all sides
            armor = 4;
            passThrough = 0.5;
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip3_co_DESHELMET.paa"}; /// what texture is going to be used
        };
    };
	class H_ACR_A3_HelmetB_rgl_Goggles: ItemCore
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_MICH2000WOCOVER_GOGGLES"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_helma_WOCOVERGOGGLES.paa"; /// this looks fairly similar
        model   = "\acr_a3\acr_a3_characters\mich2000wocover_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip3_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
            mass = 40; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\mich2000wocover_ACR.p3d";  /// what model is used for this cap
            allowedSlots[] = {901,605};   /// this cap is so small and flexible that it fits everywhere
            modelSides[] = {6}; /// available for all sides
            armor = 4;
            passThrough = 0.5;
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip3_co.paa"}; /// what texture is going to be used
        };
    };
	class H_ACR_A3_HelmetB_des_Goggles: ItemCore
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_MICH2000WOCOVER_GOGGLES_DES"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_helma_WOCOVERGOGGLES_DES.paa"; /// this looks fairly similar
        model   = "\acr_a3\acr_a3_characters\mich2000wocover_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip3_co_DESHELMET.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
            mass = 40; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\mich2000wocover_ACR.p3d";  /// what model is used for this cap
            allowedSlots[] = {901,605};   /// this cap is so small and flexible that it fits everywhere
            modelSides[] = {6}; /// available for all sides
            armor = 4;
            passThrough = 0.5;
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
            hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip3_co_DESHELMET.paa"}; /// what texture is going to be used
        };
    };
    class H_ACR_A3_Beret_red: ItemCore
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_Beret_red"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_beret.paa"; /// this looks fairly similar
        model   = "\acr_a3\acr_a3_characters\beret_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ins_bardak_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
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
		author = "$STR_ACR"; dlc = "ACR_A3";
		class ItemInfo: HeadGearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 0.8;
				};
			};
			uniformModel = "\A3\Characters_F_epb\Common\booniehat_hs";
			allowedSlots[] = {801,901,701,605};
			mass = 10;
			modelSides[] = {6};
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
		author = "$STR_ACR"; dlc = "ACR_A3";
		class ItemInfo: HeadGearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 0.8;
				};
			};
			uniformModel = "\A3\Characters_F_epb\Common\booniehat_hs";
			allowedSlots[] = {801,901,701,605};
			mass = 10;
			modelSides[] = {6};
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
		author = "$STR_ACR"; dlc = "ACR_A3";
		class ItemInfo: HeadGearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 0.8;
				};
			};
			uniformModel = "\A3\Characters_F_epb\Common\capb_hs";
			allowedSlots[] = {801,901,701,605};
			mass = 10;
			modelSides[] = {6};
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: HeadGearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 0.8;
				};
			};
            uniformModel = "\A3\Characters_F_epb\Common\capb_hs";
			allowedSlots[] = {801,901,701,605};
            mass = 10;
            modelSides[] = {6};
            armor = 0;
            passThrough = 0.8;
            hiddenSelections[] = {"camo"};
        };
    };
    class H_ACR_A3_Cap_Headphones: ItemCore //headphones
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "$STR_ACR_CAP_HEADPHONES";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_cap_headphones.paa";
        model = "\A3\Characters_F_epb\Common\capb_hs";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_headphones.paa"};
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: HeadGearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 0.8;
				};
			};
            uniformModel = "\A3\Characters_F\Common\capb_headphones.p3d";
			allowedSlots[] = {801,901,701,605};
            mass = 10;
            modelSides[] = {6};
            armor = 0;
            passThrough = 0.8;
            hiddenSelections[] = {"camo"};
        };
    };
    class H_ACR_A3_Cap_Headphones_des: ItemCore //headphones
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "$STR_ACR_CAP_HEADPHONES_DES";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_cap_headphones_des.paa";
        model = "\A3\Characters_F_epb\Common\capb_hs";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_headphones_des.paa"};
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: HeadGearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 0.8;
				};
			};
            uniformModel = "\A3\Characters_F\Common\capb_headphones.p3d";
			allowedSlots[] = {801,901,701,605};
            mass = 10;
            modelSides[] = {6};
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
		author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo","camo1"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip4_co.paa","\acr_a3\acr_a3_characters\data\equip1_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 0.8;
				};
			};
            mass = 10; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\pakol_mic_ACR.p3d";  /// what model is used for this cap
			allowedSlots[] = {801,901,701,605};
            modelSides[] = {6}; /// available for all sides
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
		author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_wood_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 0.8;
				};
			};
            mass = 10; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\boonie_ACR.p3d";  /// what model is used for this cap
			allowedSlots[] = {801,901,701,605};
            modelSides[] = {6}; /// available for all sides
            armor = 0;  /// this cap doesn't provide any protection
            passThrough = 0.8; /// this cap doesn't provide any protection
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        };
    };
    class H_ACR_A3_Booniehat_fold_des: ItemCore
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_BOONIEHAT_DES_FOLD"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_booniefold_des.paa"; /// this looks fairly similar
        model   = "\acr_a3\acr_a3_characters\boonie_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR"; dlc = "ACR_A3";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\equip2_des_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 0.8;
				};
			};
            mass = 10; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "\acr_a3\acr_a3_characters\boonie_ACR.p3d";  /// what model is used for this cap
			allowedSlots[] = {801,901,701,605};
            modelSides[] = {6}; /// available for all sides
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
		author = "$STR_ACR"; dlc = "ACR_A3";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ACR_A3_Soldier_01";
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_ACR_A3_Soldier_GL";
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_ACR_A3_Soldier_AR";
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
		author = "$STR_ACR"; dlc = "ACR_A3";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ACR_A3_Soldier_01_des";
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_ACR_A3_Soldier_GL_des";
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_ACR_A3_Soldier_AR_des";
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_ACR_A3_Soldier_01_mout";
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_ACR_A3_Soldier_AR_mout";
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_ACR_A3_Soldier_01_mout_des";
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_ACR_A3_Soldier_AR_mout_des";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // Ostatni uniformy
    class U_ACR_A3_SniperGhillie: U_B_GhillieSuit // Sniper ghillie
    {
        displayName = "$STR_ACR_UNIFORM_GHILLIE";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_ghillie.paa";
        author = "$STR_ACR"; dlc = "ACR_A3";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_LES.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_ACR_A3_Spotter";
            containerClass = "Supply60";
            mass = 60;
        };
    };
    class U_ACR_A3_SniperGhillie_Des: U_B_GhillieSuit // Sniper ghillie poust
    {
        displayName = "$STR_ACR_UNIFORM_GHILLIE_DES";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_ghillie_des.paa";
        author = "$STR_ACR"; dlc = "ACR_A3";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_POUST.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_ACR_A3_Spotter_des";
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
		author = "$STR_ACR"; dlc = "ACR_A3";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_pilot.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ACR_A3_Pilot";
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
        author = "$STR_ACR"; dlc = "ACR_A3";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_pilot_DES.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_ACR_A3_Pilot_des";
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
		author = "$STR_ACR"; dlc = "ACR_A3";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ACR_A3_Officer"; //znackablabla
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
        author = "$STR_ACR"; dlc = "ACR_A3";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_ACR_A3_Officer_des"; //znackablabla
            containerClass = "Supply40";
            mass = 40;
            hiddenSelections[] = {"Camo1","Camo2"};
        };
    };
    class U_ACR_A3_SweaterUniform_vz95: Uniform_Base
    {
        scope = 2;
        author = "$STR_ACR"; dlc = "ACR_A3";
        displayName = "$STR_ACR_UNIFORM_SWEATER";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_svetr.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_LES.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_ACR_A3_Soldier_lite";
            containerClass = "Supply30";
            mass = 30;
        };
    };
    class U_ACR_A3_SweaterUniform_des: Uniform_Base
    {
        scope = 2;
        author = "$STR_ACR"; dlc = "ACR_A3";
        displayName = "$STR_ACR_UNIFORM_SWEATER_DES";
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_svetr_des.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\Suitpacks\suitpack_POUST.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_ACR_A3_Soldier_lite_des";
            containerClass = "Supply30";
            mass = 30;
        };
    };
};