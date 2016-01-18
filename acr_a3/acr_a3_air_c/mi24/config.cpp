class CfgPatches {
	class acr_a3_mi24 {
		units[] = {"ACR_A3_Mi_24v","ACR_A3_Mi_24p","ACR_A3_Mi_24v_des","ACR_A3_Mi_24v_ram","ACR_A3_Mi_24p_des","ACR_A3_Mi_24p_ram"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"RHS_A2_AirImport"};
	};
};
class cfgVehicles {
     class RHS_Mi24_base;
     class RHS_Mi24V_base;
     class ACR_A3_Mi_24v: RHS_Mi24V_base
    {
        accuracy = 0.5;
        author = "$STR_ACR";
        displayName = "Mi-24V";
        scope = 2;
        side = 1;
        crew = "B_ACR_A3_Pilot";
		typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        vehicleclass = "Air";
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "exhaust",
            "tail_decals"
        };
        hiddenselectionstextures[] =
        {
            "\acr_a3\acr_a3_rhs_replacement\data\15_cz_dark_001_co.paa",
            "\acr_a3\acr_a3_rhs_replacement\data\15_cz_dark_002_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
    };
     class ACR_A3_Mi_24v_des: ACR_A3_Mi_24v //desert
    {
        accuracy = 0.5;
        author = "$STR_ACR";
        displayName = "Mi-24V (Desert)";
        scope = 2;
        side = 1;
        crew = "B_ACR_A3_Pilot_des";
		typicalCargo[] = {"B_ACR_A3_Pilot_des"};
        faction = "ACR_A3";
        vehicleclass = "Air";
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "exhaust",
            "tail_decals"
        };
        hiddenselectionstextures[] =
        {
            "\acr_a3\acr_a3_rhs_replacement\data\16_cz_desert_001_co.paa",
            "\acr_a3\acr_a3_rhs_replacement\data\16_cz_desert_002_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
    };
     class ACR_A3_Mi_24v_ram: ACR_A3_Mi_24v_des //ram
    {
        accuracy = 0.5;
        author = "$STR_ACR";
        displayName = "Mi-24V (Ram)";
        scope = 2;
        side = 1;
        crew = "B_ACR_A3_Pilot";
		typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        vehicleclass = "Air";
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "exhaust",
            "tail_decals"
        };
        hiddenselectionstextures[] =
        {
            "\acr_a3\acr_a3_rhs_replacement\data\17_cz_experimantalram_001_co.paa",
            "\acr_a3\acr_a3_rhs_replacement\data\17_cz_experimantalram_002_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
    };
    class ACR_A3_Mi_24p: RHS_Mi24_base
    {
        accuracy = 0.5;
        author = "$STR_ACR";
        displayName = "Mi-24P";
        scope = 2;
        side = 1;
        crew = "B_ACR_A3_Pilot";
		typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        vehicleclass = "Air";
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "exhaust",
            "tail_decals"
        };
        hiddenselectionstextures[] =
        {
            "\acr_a3\acr_a3_rhs_replacement\data\15_cz_dark_001_co.paa",
            "\acr_a3\acr_a3_rhs_replacement\data\15_cz_dark_002_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
    };
    class ACR_A3_Mi_24p_des: ACR_A3_Mi_24p //desert
    {
        accuracy = 0.5;
        author = "$STR_ACR";
        displayName = "Mi-24P (Desert)";
        scope = 2;
        side = 1;
        crew = "B_ACR_A3_Pilot_des";
		typicalCargo[] = {"B_ACR_A3_Pilot_des"};
        faction = "ACR_A3";
        vehicleclass = "Air";
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "exhaust",
            "tail_decals"
        };
        hiddenselectionstextures[] =
        {
            "\acr_a3\acr_a3_rhs_replacement\data\16_cz_desert_001_co.paa",
            "\acr_a3\acr_a3_rhs_replacement\data\16_cz_desert_002_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
    };
    class ACR_A3_Mi_24p_ram: ACR_A3_Mi_24p_des //ram
    {
        accuracy = 0.5;
        author = "$STR_ACR";
        displayName = "Mi-24P (Ram)";
        scope = 2;
        side = 1;
        crew = "B_ACR_A3_Pilot";
		typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        vehicleclass = "Air";
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "exhaust",
            "tail_decals"
        };
        hiddenselectionstextures[] =
        {
            "\acr_a3\acr_a3_rhs_replacement\data\17_cz_experimantalram_001_co.paa",
            "\acr_a3\acr_a3_rhs_replacement\data\17_cz_experimantalram_002_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
    };
};