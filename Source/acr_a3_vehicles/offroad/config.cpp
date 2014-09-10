class CfgPatches
{
	class acr_a3_Offroad
	{
		units[] = {"Offroad01"};
		author = "$STR_ACR";
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class Offroad_01_base_F;
	class Offroad_01_armed_base_F;
	class ACR_Offroad: Offroad_01_base_F
	{
		side = 1;
		scope = 2;
		author = "$STR_ACR";
		faction = "ACR";
		displayName = "Offroad";
		crew = "ACR_MOUT_Vojak01";
		typicalCargo[] = {"ACR_MOUT_Vojak01"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\offroad\data\Offroad01.paa","\acr_a3_vehicles\offroad\data\Offroad01.paa"};
        class EventHandlers
        {
            init = "(_this select 0) execVM ""\acr_a3_vehicles\offroad\randomize_colors.sqf""";
            killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
        };
	};
    class ACR_Offroad_Armed: Offroad_01_armed_base_F
    {
        side = 1;
        scope = 2;
        author = "$STR_ACR";
        faction = "ACR";
        displayName = "$STR_A3_CFGVEHICLES_OFFROAD_ARMED_BASE0";
        crew = "ACR_MOUT_Vojak01";
        typicalCargo[] = {"ACR_MOUT_Vojak01"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\acr_a3_vehicles\offroad\data\Offroad01.paa","\acr_a3_vehicles\offroad\data\Offroad01.paa"};
        class EventHandlers
        {
            init = "(_this select 0) execVM ""\acr_a3_vehicles\offroad\randomize_colors.sqf""";
            killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
        };
    };
};
