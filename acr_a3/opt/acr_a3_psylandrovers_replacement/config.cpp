class CfgPatches
{
	class acr_a3_psylandrovers_replacement
	{
		units[] = {"LandRover_CZ_EP1", "LandRover_ACR", "ACR_Offroad_HMG", "ACR_Offroad_HMG_Desert", "ACR_LandRover_AMB"};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] = {"PansyLandRovers"};
	};
};
class CfgVehicles {
    class BAF_Offroad_D;
    class LandRover_MG_Base_EP1;
    class BAF_Offroad_W_HMG;
    class LandRover_AMB_Base;
	class LandRover_CZ_EP1: BAF_Offroad_D
	{
		displayname = "Land Rover (Desert)";
		faction = "ACR";
        crew = "ACR_Des_Vojak01";
        typicalCargo[] = {"ACR_Des_Vojak01"};
		hiddenSelectionsTextures[] = {"pansy\LandRover\data\lr_base_acrs_co","pansy\LandRover\data\lr_special_acr_co"};
	};
	class LandRover_ACR: LandRover_CZ_EP1
	{
		displayname = "Land Rover";
		faction = "ACR";
        crew = "ACR_Vojak01";
        typicalCargo[] = {"ACR_Vojak01"};
		hiddenSelectionsTextures[] = {"pansy\LandRover\data\lr_acr_base_co","pansy\LandRover\data\lr_acr_spec_co"};
	};
	class ACR_Offroad_HMG: BAF_Offroad_W_HMG
	{
		scope = 2;
		displayname = "Land Rover HMG";
		faction = "ACR";
        crew = "ACR_Vojak01";
        typicalCargo[] = {"ACR_Vojak01"};
		hiddenSelectionsTextures[] = {"pansy\LandRover\data\lr_acr_base_co","pansy\LandRover\data\lr_acr_spec_co","pansy\LandRover\data\lr_mg-spg9_ind_co"};
	};
	class ACR_Offroad_HMG_Desert: BAF_Offroad_W_HMG
	{
		scope = 2;
		displayname = "Land Rover HMG (Desert)";
		faction = "ACR";
        crew = "ACR_Des_Vojak01";
        typicalCargo[] = {"ACR_Des_Vojak01"};
		hiddenSelectionsTextures[] = {"pansy\LandRover\data\lr_base_acrs_co","pansy\LandRover\data\lr_acr_spec_co","pansy\LandRover\data\lr_mg-spg9_ind_co"};
	};
	class ACR_LandRover_AMB: LandRover_AMB_Base
	{
		displayName = "Land Rover Ambulance";
		scope = 2;
		faction = "ACR";
        crew = "ACR_Vojak01";
        typicalCargo[] = {"ACR_Vojak01"};
	};
};