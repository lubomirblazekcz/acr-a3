#define _ARMA_

class CfgPatches
{
	class acr_a3_rhs_replacement
	{
		units[] = {"ACR_A3_Mi_24v", "ACR_A3_Mi_24p", "ACR_A3_Mi17_base_CZ_EP1", "ACR_A3_Mi171Sh_rockets_CZ_EP1", "ACR_A3_Mi171Sh_medevac_CZ_EP1"};
		weapons[] = {};
		requiredVersion = 0.1;
		author = "$STR_ACR";
		requiredAddons[] = {"RHS_A2_AirImport"};
	};
};
class CfgVehicles
{
     class RHS_Mi24P_vvs;
     class RHS_Mi24V_vvs;
     class ACR_A3_Mi_24v: RHS_Mi24V_vvs
    {
        author = "$STR_ACR";
        scope = 2;
        side = 1;
        crew = "ACR_Pilot";
        faction = "ACR";
        vehicleclass = "Air";
        hiddenselectionstextures[] =
        {
            "\acr_a3_rhs_replacement\data\mi35_acr_1_co.paa",
            "\acr_a3_rhs_replacement\data\mi35_acr_2_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
        };
    };
    class ACR_A3_Mi_24p: RHS_Mi24P_vvs
    {
        author = "$STR_ACR";
        scope = 2;
        side = 1;
        crew = "ACR_Pilot";
        faction = "ACR";
        vehicleclass = "Air";
        hiddenselectionstextures[] =
        {
            "\acr_a3_rhs_replacement\data\mi35_acr_1_co.paa",
            "\acr_a3_rhs_replacement\data\mi35_acr_2_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
        };
    };
        class RHS_Mi8AMT_vvs;
        class RHS_Mi8AMTSh_vvs;
        class RHS_Mi8mt_vvs;
        class ACR_A3_Mi17_base_CZ_EP1: RHS_Mi8mt_vvs
        {
            author = "$STR_ACR";
            faction = "ACR";
            crew = "ACR_Pilot";
            scope = 2;
            displayName = "Mi-17";
            side = 1;
            vehicleclass = "Air";
            hiddenselectionstextures[] =
            {
                "\acr_a3_rhs_replacement\data\mi17_body_acr_co.paa",
                "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
                "a3\data_f\clear_empty.paa",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
                "a3\data_f\clear_empty.paa",
                "a3\data_f\clear_empty.paa"
            };
        };
        class ACR_A3_Mi171Sh_rockets_CZ_EP1: RHS_Mi8AMTSh_vvs
        {
            scope = 2;
            displayName = "Mi-17 (Rockets)";
            author = "$STR_ACR";
            crew = "ACR_Pilot";
            faction = "ACR";
            side = 1;
            vehicleclass = "Air";
            hiddenselectionstextures[] =
            {
                "\acr_a3_rhs_replacement\data\mi17_body_acr_co.paa",
                "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
                "a3\data_f\clear_empty.paa",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
                "a3\data_f\clear_empty.paa",
                "a3\data_f\clear_empty.paa"
            };
        };
        class ACR_A3_Mi171Sh_medevac_CZ_EP1: RHS_Mi8AMT_vvs
        {
            scope = 2;
            displayName = "Mi-17 (Medevac)";
            author = "$STR_ACR";
            crew = "ACR_Pilot";
            faction = "ACR";
            side = 1;
            vehicleclass = "Air";
            hiddenselectionstextures[] =
            {
                "\acr_a3_rhs_replacement\data\mi17_body_acr_co.paa",
                "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
                "a3\data_f\clear_empty.paa",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
                "a3\data_f\clear_empty.paa",
                "a3\data_f\clear_empty.paa"
            };
            class TransportItems
            {
                class _xx_FirstAidKit
                {
                    name = "FirstAidKit";
                    count = 30;
                };
                class _xx_Medikit
                {
                    name = "Medikit";
                    count = 15;
                };
            };
        };
};
