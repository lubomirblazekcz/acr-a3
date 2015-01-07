class CfgPatches
{
	class acr_a3_tfar
	{
		units[] = {
			"tf_anprc155_big_acr_a3",
			"tf_anprc155_acr_a3"
		};
		requiredAddons[] = {"A3_Modules_F", "A3_UI_F", "A3_Structures_F_Items_Electronics", "A3_Weapons_F_ItemHolders"};
	};
};
class CfgVehicles {
	class ReammoBox;
    class Bag_Base: ReammoBox {};
    class TFAR_Bag_Base: Bag_Base
    {
        scope = 1;
        scopeCurator = 1;
    };
    class tf_anprc155: TFAR_Bag_Base {};
	class tf_anprc155_big_acr_a3: tf_anprc155
	{
		displayName = "AN/PRC 155 Big ACR";
		descriptionShort = "AN/PRC 155 Big ACR long range radio 20km";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_tfar\data\clf_nicecomm2_big_ACR_vz95_co.paa"};
        author = "Raspu, Gandi, Nkey";
        picture = "\acr_a3\acr_a3_tfar\data\155_icon.paa";
        model="\acr_a3\acr_a3_tfar\clf_nicecomm2";
        scope = 2;
        scopeCurator = 2;
        maximumLoad = 160;
        mass = 160;
	};
	class tf_anprc155_acr_a3: tf_anprc155 {
		displayName = "AN/PRC 155 ACR";
		descriptionShort = "AN/PRC 155 ACR long range radio 20km";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_tfar\data\clf_nicecomm2_ACR_vz95_co.paa"};
        model="\acr_a3\acr_a3_tfar\clf_prc117g_ap";
        author = "Raspu, Gandi, Nkey";
        picture = "\acr_a3\acr_a3_tfar\data\155_icon.paa";
        scope = 2;
        scopeCurator = 2;
        maximumLoad = 160;
        mass = 160;
	};

	class Box_IND_Support_F;
    class TF_IND_Radio_Crate: Box_IND_Support_F
    {
    	class TransportBackpacks
    	{
    		class _xx_tf_anprc155_big_acr_a3 {
    			count = 1;
    			backpack = "tf_rt1523g_big_acr_a3";
    		};
    		class _xx_tf_anprc155_acr_a3 {
    			count = 1;
    			backpack = "tf_rt1523g_acr_a3";
    		};
    	};
    };
};