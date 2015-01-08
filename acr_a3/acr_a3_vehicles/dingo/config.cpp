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
		wheelCircumference = 3.5168;
		model = "\acr_a3\acr_a3_vehicles\dingo\AMT_Dingo2a2_MG.p3d";
		Picture = "\acr_a3\acr_a3_vehicles\dingo\data\Picture_Dingo2MG_CA.paa";
		Icon = "acr_a3\acr_a3_vehicles\dingo\data\icon_dingo2_ca.paa";
		mapSize = 5;
		displayName = "$STR_ACR_DN_DINGO_MG";
		crew = "ACR_Vojak01";
		typicalCargo[] = {"ACR_Vojak01","ACR_Vojak01","ACR_Vojak01"};
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 200;
		armor = 40;
		armorGlass = 0.05;
		armorWheels = 0.1;
		damageResistance = 0.00562;
		turnCoef = 4;
		steerAheadPlan = 0.2;
		steerAheadSimul = 0.4;
		predictTurnPlan = 0.9;
		predictTurnSimul = 0.5;
		brakeDistance = 8.5;
		terrainCoef = 2.0;
		enableGPS = 1;
		type = 1;
		cost = 100000;
		soundServo[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\turret-1.wss","db-40",1.0,10};
		soundEnviron[] = {"db-5",1};
		transportSoldier = 4;
		transportMaxBackpacks = 6;
		class TransportWeapons{};
		class TransportMagazines{};
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_DINGO";
		};
		driverAction = "HMMWV_Driver_EP1";
		cargoAction[] = {"HMMWV_Cargo_EP1","HMMWV_Cargo02_EP1"};
		cargoIsCoDriver[] = {1,0};
		castDriverShadow = 0;
		radarType = 4;
		unitInfoType = "UnitInfoShip";
		threat[] = {1,0.1,0.4};

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
		class AnimationSources: AnimationSources
		{
			class HitGlass1;
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass5";
			};
		};
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 1;
			};
			class HitGlass2: HitGlass2
			{
				armor = 1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 1;
			};
			class HitGlass4: HitGlass4
			{
				armor = 1;
			};
			class HitGlass5: HitGlass4
			{
				name = "glass5";
				visual = "glass5";
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.15;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.15;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.15;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.15;
			};
			class HitFuel
			{
				armor = 0.14;
				material = -1;
				name = "fueltank";
				visual = "";
				passThrough = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"acr_a3\acr_a3_vehicles\dingo\data\karrosse.rvmat","acr_a3\acr_a3_vehicles\dingo\data\karrosse_dam.rvmat","acr_a3\acr_a3_vehicles\dingo\data\karrosse_des.rvmat","acr_a3\acr_a3_vehicles\dingo\data\karrosse_innen.rvmat","acr_a3\acr_a3_vehicles\dingo\data\karrosse_innen.rvmat","acr_a3\acr_a3_vehicles\dingo\data\karrosse_innen_des.rvmat","acr_a3\acr_a3_vehicles\dingo\data\teile.rvmat","acr_a3\acr_a3_vehicles\dingo\data\teile_dam.rvmat","acr_a3\acr_a3_vehicles\dingo\data\teile_des.rvmat","acr_a3\acr_a3_vehicles\dingo\data\teile_innen.rvmat","acr_a3\acr_a3_vehicles\dingo\data\teile_innen.rvmat","acr_a3\acr_a3_vehicles\dingo\data\teile_innen_des.rvmat","acr_a3\acr_a3_vehicles\dingo\data\FLW200.rvmat","acr_a3\acr_a3_vehicles\dingo\data\FLW200_dam.rvmat","acr_a3\acr_a3_vehicles\dingo\data\FLW200_des.rvmat","acr_a3\acr_a3_vehicles\dingo\data\plane.rvmat","acr_a3\acr_a3_vehicles\dingo\data\plane_dam.rvmat","acr_a3\acr_a3_vehicles\dingo\data\FLW200_des.rvmat","acr_a3\acr_a3_vehicles\dingo\data\alpha_glass.rvmat","acr_a3\acr_a3_vehicles\dingo\data\alpha_glass_dam.rvmat","acr_a3\acr_a3_vehicles\dingo\data\alpha_glass_des.rvmat"};
		};
		HiddenSelections[] = {"camo1","camo2","camo5","camo6"};
		HiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\dingo\data\acr_karosse_wdl_co.paa","\acr_a3\acr_a3_vehicles\dingo\data\a_teile_co.paa","\acr_a3\acr_a3_vehicles\dingo\data\FLW100_co.paa","\acr_a3\acr_a3_vehicles\dingo\data\FLW200_co.paa"};
		soundGear[] = {"db-75",1};
		insideSoundCoef = 0.8;
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
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\Dingo_int_acce.wss","db-20",1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\Dingo_ext_acce.wss","db-20",1.0,200};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\Dingo_ext_mid.wss","db0",1.5,200};
				frequency = "(1.0+rpm)*0.3";
				volume = "engineOn*camPos*((rpm factor[0.2, 0.4])+ (rpm factor[0.8, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\Dingo_ext_high.wss","db0",1.5,250};
				frequency = "(1.0+rpm)*0.3";
				volume = "engineOn*camPos*(rpm factor[0.3, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\Dingo_ext_idle.wss","db0",1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.05])";
			};
			class TiresRockOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\ext-tires-rock2.wss","db-10",1.0,30};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\ext-tires-sand2.wss","db-10",1.0,30};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\ext-tires-grass2.wss","db-10",1.0,30};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\ext-tires-mud2.wss","db-10",1.0,30};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\ext-tires-gravel2.wss","db-10",1.0,30};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\ext-tires-asphalt3.wss","db-10",1.0,30};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\noise2.wss","db-25",1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\Dingo_int_mid.wss","db0",1.0,200};
				frequency = "(1.0+rpm)*0.3";
				volume = "engineOn*(1-camPos)*((rpm factor[0.4, 0.2])+ (rpm factor[0.8, 0.5]))";
			};
			class EngineHighIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\Dingo_int_high.wss","db0",1.0,250};
				frequency = "(1.0+rpm)*0.3";
				volume = "engineOn*(1-camPos)*(rpm factor[0.3, 0.9])";
			};
			class IdleIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\dingo\Sounds\Dingo_int_idle.wss","db0",1.0,200};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.3, 0.05])";
			};
			class TiresRockIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\int-tires-rock2.wss","db-0",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\int-tires-sand2.wss","db-0",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\int-tires-grass2.wss","db-0",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\int-tires-mud2.wss","db-0",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\int-tires-gravel2.wss","db-0",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\int-tires-asphalt3.wss","db-0",1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\dingo\Sounds\noise2.wss","db-45",1.0};
				frequency = "1";
				volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
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
				weapon = "MG3A1_veh_ACR";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "MG3A1_veh_ACR";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "MG3A1_veh_ACR";
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
				weapon = "GMG_veh_ACR";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "GMG_veh_ACR";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "GMG_veh_ACR";
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
