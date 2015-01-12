class DefaultEventhandlers;
class CfgPatches
{
	class acr_a3_rhs_replacement_c
	{
		units[] = {"ACR_A3_Mi_24v", "ACR_A3_Mi_24p", "ACR_A3_Mi17_base_CZ_EP1", "ACR_A3_Mi171Sh_rockets_CZ_EP1", "ACR_A3_Mi171Sh_medevac_CZ_EP1", "ACR_A3_UAZ_469", "ACR_A3_UAZ_469_Open"};
		weapons[] = {};
		requiredVersion = 0.1;
		author = "$STR_ACR";
		requiredAddons[] = {"RHS_A2_AirImport"};
	};
};
class CfgVehicles
{
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
            "\acr_a3\acr_a3_rhs_replacement\data\mi35_acr_1_co.paa",
            "\acr_a3\acr_a3_rhs_replacement\data\mi35_acr_2_co.paa",
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
            "\acr_a3\acr_a3_rhs_replacement\data\mi35_acr_1_co.paa",
            "\acr_a3\acr_a3_rhs_replacement\data\mi35_acr_2_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
    };
    class RHS_Mi8AMT_base;
    class RHS_Mi8AMTSh_base;
    class RHS_Mi8_base;
    class ACR_A3_Mi17_base_CZ_EP1: RHS_Mi8_base
    {
        author = "$STR_ACR";
        faction = "ACR_A3";
        crew = "B_ACR_A3_Pilot";
		typicalCargo[] = {"B_ACR_A3_Pilot"};
        scope = 2;
        displayName = "Mi-17";
        side = 1;
        vehicleclass = "Air";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
        hiddenselectionstextures[] =
        {
            "\acr_a3\acr_a3_rhs_replacement\data\mi17_body_acr_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa"
        };
    };
    class ACR_A3_Mi171Sh_rockets_CZ_EP1: RHS_Mi8AMTSh_base
    {
        scope = 2;
        displayName = "Mi-17 (Rockets)";
        author = "$STR_ACR";
        crew = "B_ACR_A3_Pilot";
		typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        side = 1;
        vehicleclass = "Air";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
        hiddenselectionstextures[] =
        {
            "\acr_a3\acr_a3_rhs_replacement\data\mi17_body_acr_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa"
        };
    };
    class ACR_A3_Mi171Sh_medevac_CZ_EP1: RHS_Mi8AMT_base
    {
        scope = 2;
        displayName = "Mi-17 (Medevac)";
        author = "$STR_ACR";
        crew = "B_ACR_A3_Pilot";
		typicalCargo[] = {"B_ACR_A3_Pilot"};
        faction = "ACR_A3";
        side = 1;
        vehicleclass = "Air";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
        hiddenselectionstextures[] =
        {
            "\acr_a3\acr_a3_rhs_replacement\data\mi17_body_acr_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
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
    class LandVehicle;
    class Car: LandVehicle
    {
        class HitPoints;
        class NewTurret;
    };
    class Car_F: Car
    {
        class Turrets
        {
            class MainTurret: NewTurret
            {
                disableSoundAttenuation = 1;
                class ViewOptics;
            };
        };
        class HitPoints
        {
            class HitLFWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRF2Wheel;
            class HitBody;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
        };
        class EventHandlers;
        class AnimationSources;
    };
    class Offroad_01_base_F: Car_F{};
    class RHS_UAZ_Base:Offroad_01_base_F{};
    class rhs_uaz_open_Base: RHS_UAZ_Base{};
    class ACR_A3_UAZ_469: RHS_UAZ_Base
    {
		accuracy = 0.5;
        author = "$STR_ACR";
        vehicleClass = "Car";
        displayName = "UAZ-469";
        scope = 2;
        side = 1;
        crew = "B_ACR_A3_Soldier_01";
		typicalCargo[] = {"B_ACR_A3_Soldier_01"};
        faction = "ACR_A3";
        hiddenSelections[]=
        {
            "camo1",
            "camog1",
            "camog2",
            "n1",				// 2 - 4 number system
            "n2",
            "n3",
            "n4",
            "i1",				// 6 - right army
            "i2",				// 7 - left army
            "i3",				// 8 - right platoon
            "i4"				// 9 - left platoon
        };

        hiddenSelectionsTextures[] =
        {
            "\acr_a3\acr_a3_rhs_replacement\data\uaz_acr_main_co.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa"
        };
        class EventHandlers: EventHandlers
        {
            init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\acr_a3\acr_a3_rhs_replacement_c\scripts\rhs_decal_init.sqf'";
            engine="_this call SLX_XEH_EH_Engine;if(_this select 1)then{_this call RHS_fnc_gearSound};";
            //getIn="_this call SLX_XEH_EH_GetIn;_this spawn rhs_fnc_rainSound";
            dammaged="_this call SLX_XEH_EH_Dammaged;_this call rhs_fnc_fuelLeak;";
            hitpart = "_this call SLX_XEH_EH_HitPart;_this call rhs_fnc_hitHandler";
        };
    };
    class ACR_A3_UAZ_469_Open: rhs_uaz_open_Base
    {
		accuracy = 0.5;
        author = "$STR_ACR";
        vehicleClass = "Car";
        displayName = "UAZ-469 (Open)";
        scope = 2;
        side = 1;
        crew = "B_ACR_A3_Soldier_01";
		typicalCargo[] = {"B_ACR_A3_Soldier_01"};
        faction = "ACR_A3";
        hiddenSelections[]=
        {
            "camo1",
            "camog1",
            "camog2",
            "n1",				// 2 - 4 number system
            "n2",
            "n3",
            "n4",
            "i1",				// 6 - right army
            "i2",				// 7 - left army
            "i3",				// 8 - right platoon
            "i4"				// 9 - left platoon
        };

        hiddenSelectionsTextures[] =
        {
            "\acr_a3\acr_a3_rhs_replacement\data\uaz_acr_main_co.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa"
        };
        class EventHandlers: EventHandlers
        {
            init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\acr_a3\acr_a3_rhs_replacement_c\scripts\rhs_decal_init.sqf'";
            engine="_this call SLX_XEH_EH_Engine;if(_this select 1)then{_this call RHS_fnc_gearSound};";
            //getIn="_this call SLX_XEH_EH_GetIn;_this spawn rhs_fnc_rainSound";
            dammaged="_this call SLX_XEH_EH_Dammaged;_this call rhs_fnc_fuelLeak;";
            hitpart = "_this call SLX_XEH_EH_HitPart;_this call rhs_fnc_hitHandler";
        };
    };
};
