class CfgPatches
{
	class acr_a3_dingo
	{
		units[] = {"acr_a3_dingo_wdl","acr_a3_dingo_des","acr_a3_dingo_gl_wdl","acr_a3_dingo_gl_des"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgVehicles
{
    class LandVehicle;
    class Car: LandVehicle
    {
        class NewTurret;
    };
    class Car_F: Car
    {
        class AnimationSources;
        class Turrets
        {
            class MainTurret: NewTurret{};
        };
        class HitPoints
        {
            class HitLFWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRF2Wheel;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
        };
    };
    class MRAP_01_base_F: Car_F {};
	class acr_a3dingo_base: MRAP_01_base_F
	{
		expansion = 3;
		scope = 0;
		side = 1;
		accuracy = 0.3;
		faction = "ACR";
		model = "\acr_a3\acr_a3_vehicles\dingo\AMT_Dingo2a2_MG.p3d";
		Picture = "\acr_a3\acr_a3_vehicles\dingo\data\Picture_Dingo2MG_CA.paa";
		Icon = "\acr_a3\acr_a3_vehicles\dingo\data\icon_dingo2_ca.paa";
		mapSize = 5;
		displayName = "$STR_ACR_DN_DINGO_MG";
		crew = "ACR_Vojak01";
		typicalCargo[] = {"ACR_Vojak01","ACR_Vojak01","ACR_Vojak01"};
		armor = 150;
		armorStructural = 4
		enableGPS = 1;
		cost = 100000;
		transportSoldier = 4;
		transportMaxBackpacks = 6;
		class TransportWeapons{};
		class TransportMagazines{};
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_DINGO";
		};
		driverAction = "HMMWV_Driver";
		cargoAction[] = {"HMMWV_Cargo_EP1","HMMWV_Cargo02_EP1"};
		cargoIsCoDriver[] = {1,0};
		castDriverShadow = 0;
		radarType = 8;
		unitInfoType = "RscUnitInfoTank";
		threat[] = {1.0,0.4,0.6};
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "";

        dustFrontLeftPos = "stopa PLL";
        dustFrontRightPos = "stopa PPP";
        dustBackLeftPos = "stopa ZLL";
        dustBackRightPos = "stopa ZPP";

        slingLoadCargoMemoryPoints[] = {"wheel_1_1_axis","wheel_1_2_axis","wheel_2_1_axis","wheel_2_2_axis"};
        class Reflectors
        {
            class Left
            {
                color[] = {1900,1800,1700};
                ambient[] = {5,5,5};
                position = "L svetlo";
                direction = "Konec L svetla";
                hitpoint = "L svetlo";
                selection = "L svetlo";
                size = 1;
                innerAngle = 100;
                outerAngle = 179;
                coneFadeCoef = 10;
                intensity = 1;
                useFlare = 0;
                dayLight = 0;
                flareSize = 1.0;
                class Attenuation
                {
                    start = 1.0;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 30;
                    hardLimitEnd = 60;
                };
            };
            class Right: Left
            {
                position = "P svetlo";
                direction = "Konec P svetla";
                hitpoint = "P svetlo";
                selection = "P svetlo";
            };
            class Right2: Right
            {
                position = "P svetlo";
                useFlare = 1;
            };
            class Left2: Left
            {
                position = "L svetlo";
                useFlare = 1;
            };
        };
        aggregateReflectors[] = {{ "Left","Right","Left2","Right2" }};

		//PhyshX
        #include "physx.hpp"

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gun = "mainGun";
				body = "mainTurret";
				weapons[] = {"HMG_127"};
				magazines[] = {"200Rnd_127x99_mag_Tracer_Red","200Rnd_127x99_mag_Tracer_Red"};
				minElev = -25;
				maxElev = "+60";
				gunnerAction = "HMMWV_Gunner04_EP1";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 3;
				turretInfoType = "RscOptics_crows";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerForceOptics = 1;
				class ViewOptics: RCWSOptics{};
                class ViewGunner: ViewOptics
                {
                    initAngleX = -15;
                    minAngleX = -45;
                    maxAngleX = 45;
                    initFov = 0.9;
                    minFov = 0.42;
                    maxFov = 0.9;
                    visionMode[] = {};
                };
				soundServo[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\turret-1.wss","db-40",1.0,10};
			};
		};
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor = 0.8;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 0;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.45;
			};
			class HitGlass1: HitGlass1
			{
				armor = 2;
				explosionShielding = 3;
				radius = 0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor = 2;
				explosionShielding = 3;
				radius = 0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor = 2;
				explosionShielding = 3;
				radius = 0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor = 2;
				explosionShielding = 3;
				radius = 0.25;
			};
			class HitGlass5: HitGlass4
			{
			    armor = 2;
				explosionShielding = 3;
				radius = 0.25;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 1;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 1;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 1;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 1;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitFuel
			{
				armor = 0.6;
				material = -1;
				name = "fueltank";
				visual = "";
				passThrough = 1;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.25;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"acr_a3\acr_a3_vehicles\dingo\data\karrosse.rvmat","acr_a3\acr_a3_vehicles\dingo\data\karrosse_dam.rvmat","acr_a3\acr_a3_vehicles\dingo\data\karrosse_des.rvmat","acr_a3\acr_a3_vehicles\dingo\data\karrosse_innen.rvmat","acr_a3\acr_a3_vehicles\dingo\data\karrosse_innen.rvmat","acr_a3\acr_a3_vehicles\dingo\data\karrosse_innen_des.rvmat","acr_a3\acr_a3_vehicles\dingo\data\teile.rvmat","acr_a3\acr_a3_vehicles\dingo\data\teile_dam.rvmat","acr_a3\acr_a3_vehicles\dingo\data\teile_des.rvmat","acr_a3\acr_a3_vehicles\dingo\data\teile_innen.rvmat","acr_a3\acr_a3_vehicles\dingo\data\teile_innen.rvmat","acr_a3\acr_a3_vehicles\dingo\data\teile_innen_des.rvmat","acr_a3\acr_a3_vehicles\dingo\data\FLW200.rvmat","acr_a3\acr_a3_vehicles\dingo\data\FLW200_dam.rvmat","acr_a3\acr_a3_vehicles\dingo\data\FLW200_des.rvmat","acr_a3\acr_a3_vehicles\dingo\data\plane.rvmat","acr_a3\acr_a3_vehicles\dingo\data\plane_dam.rvmat","acr_a3\acr_a3_vehicles\dingo\data\FLW200_des.rvmat","acr_a3\acr_a3_vehicles\dingo\data\alpha_glass.rvmat","acr_a3\acr_a3_vehicles\dingo\data\alpha_glass_dam.rvmat","acr_a3\acr_a3_vehicles\dingo\data\alpha_glass_des.rvmat"};
		};
		HiddenSelections[] = {"camo1","camo2","camo5","camo6"};
		HiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\dingo\data\acr_karosse_wdl_co.paa","\acr_a3\acr_a3_vehicles\dingo\data\a_teile_co.paa","\acr_a3\acr_a3_vehicles\dingo\data\FLW100_co.paa","\acr_a3\acr_a3_vehicles\dingo\data\FLW200_co.paa"};
		SoundGetIn[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\door.wss","db-5",1};
		SoundGetOut[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\door.wss","db-5",1,40};
		soundEngineOnInt[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\Dingo_int_start.wss","db-5",1.0};
		soundEngineOnExt[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\Dingo_ext_start.wss","db-5",1.0,250};
		soundEngineOffInt[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\Dingo_int_stop.wss","db-5",1.0};
		soundEngineOffExt[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\Dingo_ext_stop.wss","db-5",1.0,250};
		buildCrash0[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\crash_building_01.wss","db-3",1,200};
		buildCrash1[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\crash_building_02.wss","db-3",1,200};
		buildCrash2[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\crash_building_03.wss","db-3",1,200};
		buildCrash3[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\crash_building_04.wss","db-3",1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\crash_mix_wood_01.wss","db-3",1,200};
		WoodCrash1[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\crash_mix_wood_02.wss","db-3",1,200};
		WoodCrash2[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\crash_mix_wood_03.wss","db-3",1,200};
		WoodCrash3[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\crash_mix_wood_04.wss","db-3",1,200};
		WoodCrash4[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\crash_mix_wood_05.wss","db-3",1,200};
		WoodCrash5[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\crash_mix_wood_06.wss","db-3",1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\crash_vehicle_01.wss","db-3",1,200};
		ArmorCrash1[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\crash_vehicle_02.wss","db-3",1,200};
		ArmorCrash2[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\crash_vehicle_03.wss","db-3",1,200};
		ArmorCrash3[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\crash_vehicle_04.wss","db-3",1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
        {
            class Idle_ext
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle",0.39810717,1,150};
                frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
                volume = "engineOn*camPos*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
            };
            class Engine
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1",0.4466836,1,250};
                frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
                volume = "engineOn*camPos*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
            };
            class Engine1_ext
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2",0.56234133,1,300};
                frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
                volume = "engineOn*camPos*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
            };
            class Engine2_ext
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid",0.70794576,1,350};
                frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
                volume = "engineOn*camPos*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
            };
            class Engine3_ext
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high",1.0,1,400};
                frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
                volume = "engineOn*camPos*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
            };
            class IdleThrust
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle",0.56234133,1,200};
                frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
            };
            class EngineThrust
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",0.70794576,1,350};
                frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
            };
            class Engine1_Thrust_ext
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2",0.8912509,1,400};
                frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
            };
            class Engine2_Thrust_ext
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid",1.1220185,1,425};
                frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
            };
            class Engine3_Thrust_ext
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high",1.2589254,1,450};
                frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
            };
            class Idle_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle",0.25118864,1};
                frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
                volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
            };
            class Engine_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1",0.31622776,1};
                frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
            };
            class Engine1_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2",0.39810717,1};
                frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
            };
            class Engine2_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid",0.5011872,1};
                frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
            };
            class Engine3_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high",0.63095737,1};
                frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
                volume = "engineOn*(1-camPos)*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
            };
            class IdleThrust_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle",0.35481337,1};
                frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
            };
            class EngineThrust_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",0.4466836,1};
                frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
            };
            class Engine1_Thrust_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2",0.56234133,1};
                frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
            };
            class Engine2_Thrust_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid",0.70794576,1};
                frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
            };
            class Engine3_Thrust_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high",0.7943282,1};
                frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
            };
            class TiresRockOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.4125376,1.0,60};
                frequency = "1";
                volume = "camPos*rock*(speed factor[2, 20])";
            };
            class TiresSandOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.4125376,1.0,60};
                frequency = "1";
                volume = "camPos*sand*(speed factor[2, 20])";
            };
            class TiresGrassOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.2589254,1.0,60};
                frequency = "1";
                volume = "camPos*grass*(speed factor[2, 20])";
            };
            class TiresMudOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.1220185,1.0,60};
                frequency = "1";
                volume = "camPos*mud*(speed factor[2, 20])";
            };
            class TiresGravelOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.2589254,1.0,60};
                frequency = "1";
                volume = "camPos*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.1220185,1.0,60};
                frequency = "1";
                volume = "camPos*asphalt*(speed factor[2, 20])";
            };
            class NoiseOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",1.1220185,1.0,90};
                frequency = "1";
                volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
            };
            class TiresRockIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.70794576,1.0};
                frequency = "1";
                volume = "(1-camPos)*rock*(speed factor[2, 20])";
            };
            class TiresSandIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.70794576,1.0};
                frequency = "1";
                volume = "(1-camPos)*sand*(speed factor[2, 20])";
            };
            class TiresGrassIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.70794576,1.0};
                frequency = "1";
                volume = "(1-camPos)*grass*(speed factor[2, 20])";
            };
            class TiresMudIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.70794576,1.0};
                frequency = "1";
                volume = "(1-camPos)*mud*(speed factor[2, 20])";
            };
            class TiresGravelIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.70794576,1.0};
                frequency = "1";
                volume = "(1-camPos)*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.70794576,1.0};
                frequency = "1";
                volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
            };
            class NoiseIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.56234133,1.0};
                frequency = "1";
                volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
            };
            class breaking_ext_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.70794576,1,80};
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
            };
            class acceleration_ext_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_ext_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_ext_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_ext_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.70794576,1,60};
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
            };
            class acceleration_ext_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",0.70794576,1,60};
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_ext_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_ext_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_int_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.63095737,1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
            };
            class acceleration_int_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.63095737,1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_int_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.63095737,1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_int_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.63095737,1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_int_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.63095737,1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
            };
            class acceleration_int_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",0.63095737,1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_int_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.63095737,1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_int_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.63095737,1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
        };
	};
	class acr_a3_dingo_wdl: acr_a3dingo_base
	{
		scope = 2;
		side = 1;
		faction = "ACR";
		vehicleClass = "Car";
		class TransportMagazines{};
		class TransportWeapons{};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "HMG_127";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "HMG_127";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "HMG_127";
			};
		};
	};
	class acr_a3_dingo_des: acr_a3_dingo_wdl
	{
		vehicleClass = "Car";
		HiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\dingo\data\ACR_karosse_des_co.paa","\acr_a3\acr_a3_vehicles\dingo\data\ACR_DES_a_teile_co.paa","\acr_a3\acr_a3_vehicles\dingo\data\FLW100_DES_co.paa","\acr_a3\acr_a3_vehicles\dingo\data\FLW200_DES_co.paa"};
		crew = "ACR_Des_Vojak01";
		typicalCargo[] = {"ACR_Des_Vojak01","ACR_Des_Vojak01","ACR_Des_Vojak01"};
	};
	class acr_a3_dingo_gl_wdl: acr_a3dingo_base
	{
		scope = 2;
		side = 1;
		faction = "ACR";
		vehicleClass = "Car";
		displayname = "$STR_ACR_DN_DINGO_GL";
		model = "\acr_a3\acr_a3_vehicles\dingo\AMT_Dingo2a2.p3d";
		Picture = "\acr_a3\acr_a3_vehicles\dingo\data\Picture_Dingo2_CA.paa";
		class TransportMagazines{};
		class TransportWeapons{};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gun = "mainGun";
				body = "mainTurret";
				weapons[] = {"GMG_40mm"};
				magazines[] = {"96Rnd_40mm_G_belt","96Rnd_40mm_G_belt"};
				minElev = -25;
				maxElev = "+60";
				gunnerAction = "HMMWV_Gunner04_EP1";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 3;
				turretInfoType = "RscOptics_crows";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 5;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerForceOptics = 1;
				class ViewOptics: RCWSOptics{};
				class ViewGunner: ViewOptics
				{
					initAngleX = -15;
					minAngleX = -45;
					maxAngleX = 45;
					initFov = 0.9;
					minFov = 0.42;
					maxFov = 0.9;
					visionMode[] = {};
				};
				soundServo[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\turret-1.wss","db-40",1.0,10};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "GMG_40mm";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "GMG_40mm";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "GMG_40mm";
			};
		};
	};
	class acr_a3_dingo_gl_des: acr_a3_dingo_gl_wdl
	{
		vehicleClass = "Car";
		HiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\dingo\data\ACR_karosse_des_co.paa","\acr_a3\acr_a3_vehicles\dingo\data\ACR_DES_a_teile_co.paa","\acr_a3\acr_a3_vehicles\dingo\data\FLW100_DES_co.paa","\acr_a3\acr_a3_vehicles\dingo\data\FLW200_DES_co.paa"};
		crew = "ACR_Des_Vojak01";
		typicalCargo[] = {"ACR_Des_Vojak01","ACR_Des_Vojak01","ACR_Des_Vojak01"};
	};
};
//};
