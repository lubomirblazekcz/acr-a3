class CfgPatches
{
	class task_force_radio_items
	{
		units[] = {
			"tf_rt1523g_big_acr_a3",
			"tf_rt1523g_acr_a3"
		};
	};
};
class CfgVehicles {
    class tf_rt1523g;
	class tf_rt1523g_acr_a3: tf_rt1523g
	{
		displayName = "RT-1523G (ASIP) ACR";
		descriptionShort = "RT-1523G (ASIP) ACR long range radio 20km";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3_tfar\data\clf_nicecomm2_ACR_vz95_co.paa"};
	};
	class tf_rt1523g_big_acr_a3: tf_rt1523g {
		displayName = "RT-1523G (ASIP) Big ACR";
		descriptionShort = "RT-1523G (ASIP) Big ACR long range radio 20km";
		maximumLoad = 160;
		mass = 30;		
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_tfar\data\clf_nicecomm2_ACR_vz95_co.paa"};
		model="\task_force_radio_items\models\clf_nicecomm2";
	};

	class Box_NATO_Support_F;
    class TF_NATO_Radio_Crate: Box_NATO_Support_F
    {
    	class TransportBackpacks
    	{
    		class _xx_tf_rt1523g_big_acr_a3 {
    			count = 1;
    			backpack = "tf_rt1523g_big_acr_a3";
    		};
    		class _xx_tf_rt1523g_acr_a3 {
    			count = 1;
    			backpack = "tf_rt1523g_acr_a3";
    		};
    	};
    };
};