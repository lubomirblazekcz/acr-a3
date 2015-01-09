class CfgPatches
{
	class acr_a3_Offroad
	{
		units[] = {"ACR_Offroad", "ACR_Offroad_Armed"};
		author = "$STR_ACR";
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] = {"A3_Soft_F"};
	};
};
class Turrets;
class CfgVehicles
{
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
            class HitGlass1{};
            class HitGlass2;
        };
        class EventHandlers;
        class AnimationSources;
    };
	class Offroad_01_base_F;
	class Offroad_01_armed_base_F;
	class ACR_Offroad: Offroad_01_base_F
	{
		side = 1;
		scope = 2;
		_generalMacro = "ACR_Offroad";
		author = "$STR_ACR";
		faction = "ACR";
		displayName = "Offroad";
		crew = "ACR_Vojak01";
		typicalCargo[] = {"ACR_Vojak01"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\offroad\data\Offroad01.paa","\acr_a3\acr_a3_vehicles\offroad\data\Offroad01.paa"};
		transportSoldier = 1;
        cargoProxyIndexes[] = {1};
        getInProxyOrder[] = {1,2,3,4,5};
        class CargoTurret;
        class Turrets: Turrets
        {
            class CargoTurret_01: CargoTurret
            {
                gunnerAction = "passenger_flatground_3";
                gunnerCompartments = "Compartment1";
                memoryPointsGetInGunner = "pos cargo RR";
                memoryPointsGetInGunnerDir = "pos cargo RR dir";
                gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R2";
                proxyIndex = 2;
                maxElev = 45;
                minElev = -5;
                maxTurn = 95;
                minTurn = -95;
                isPersonTurret = 1;
                class dynamicViewLimits
                {
                    CargoTurret_02[] = {-65,95};
                };
            };
            class CargoTurret_02: CargoTurret_01
            {
                gunnerAction = "passenger_flatground_2";
                gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L2";
                memoryPointsGetInGunner = "pos cargo LR";
                memoryPointsGetInGunnerDir = "pos cargo LR dir";
                proxyIndex = 3;
                class dynamicViewLimits
                {
                    CargoTurret_01[] = {-95,65};
                };
            };
            class CargoTurret_03: CargoTurret_01
            {
                gunnerAction = "passenger_flatground_1";
                gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R1";
                memoryPointsGetInGunner = "pos cargo RF";
                memoryPointsGetInGunnerDir = "pos cargo RF dir";
                proxyIndex = 4;
                class dynamicViewLimits
                {
                    CargoTurret_01[] = {5,95};
                    CargoTurret_02[] = {-15,95};
                    CargoTurret_04[] = {-75,95};
                };
            };
            class CargoTurret_04: CargoTurret_03
            {
                gunnerAction = "passenger_flatground_4";
                gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L1";
                memoryPointsGetInGunner = "pos cargo LF";
                memoryPointsGetInGunnerDir = "pos cargo LF dir";
                proxyIndex = 5;
                minElev = 0;
                class dynamicViewLimits
                {
                    CargoTurret_01[] = {-95,15};
                    CargoTurret_02[] = {-95,-5};
                    CargoTurret_03[] = {-95,75};
                };
            };
        };
        class EventHandlers
        {
            init = "(_this select 0) execVM ""\acr_a3\acr_a3_vehicles_c\offroad\randomize_colors.sqf""";
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
        crew = "ACR_Vojak01";
        typicalCargo[] = {"ACR_Vojak01"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\offroad\data\Offroad01.paa","\acr_a3\acr_a3_vehicles\offroad\data\Offroad01.paa"};
        class EventHandlers
        {
            init = "(_this select 0) execVM ""\acr_a3\acr_a3_vehicles_c\offroad\randomize_colors.sqf""";
            killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
        };
    };
};
