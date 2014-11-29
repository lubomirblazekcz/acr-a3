class CfgPatches
{
	class acr_a3_tfar
	{
		units[] = {
			"tf_anprc155_big_acr_a3",
			"tf_anprc155_acr_a3"
		};
	};
};
class CfgVehicles {
    class tf_anprc155;
	class tf_anprc155_big_acr_a3: tf_anprc155
	{
		displayName = "AN/PRC 155 Big ACR";
		descriptionShort = "AN/PRC 155 Big ACR long range radio 20km";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\opt\acr_a3_tfar\data\clf_nicecomm2_big_ACR_vz95_co.paa"};
	};
	class tf_anprc155_acr_a3: tf_anprc155 {
		displayName = "AN/PRC 155 ACR";
		descriptionShort = "AN/PRC 155 ACR long range radio 20km";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\opt\acr_a3_tfar\data\clf_nicecomm2_ACR_vz95_co.paa"};
        model="\task_force_radio_items\models\clf_prc117g_ap";
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