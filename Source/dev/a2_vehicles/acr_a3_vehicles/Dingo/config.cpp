#include "\ca\Wheeled_ACR\basicdefines.hpp"
#include "\ca\Wheeled_ACR\transportGear.hpp"

/*
	1.) P3D potrebuje upravit firegeometry - udelat okna.
		Selekce na okna sice jsou a "rozbijeji se", ale v miste oken nejsou ve firegometry diry,
		takze ani po "rozbiti" oken nevleti kulka dovnitr.
		!! Miira - firegeometrie je hotová !! 
		
	2.) Pri rozstrileni kol si auto neseda jak by melo, pouze se natahnou dumpery dolu.
*/

class CfgPatches
{
	class CAWheeled_ACR_Dingo
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.50;
		requiredAddons[] = {"CAWheeled_ACR"};
	};
};

class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class Sounds;
	};
	class Car: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class Dingo_Base_ACR: Car
	{
		expansion = 3;
		scope = private;
		side = TWest;

		accuracy = 0.3;
		faction = USMC;
		wheelCircumference = 3.5168;
		model = "\CA\Wheeled_ACR\Dingo\AMT_Dingo2a2_MG";
		Picture = "\Ca\Wheeled_ACR\Data\UI\Picture_Dingo2MG_CA.paa";
		Icon = "\Ca\Wheeled_ACR\Data\UI\Icon_Dingo2_CA.paa";
		mapSize = 5;
		displayName = $STR_ACR_DN_DINGO_MG;
		crew = "CZ_Soldier_805_Wdl_ACR";
		typicalCargo[] = {CZ_Soldier_805_Wdl_ACR,CZ_Soldier_805_Wdl_ACR,CZ_Soldier_805_Wdl_ACR};
		damperSize = 0.2; // max. damper amplitude
		damperForce = 1; // damper reaction force (bigger is more visible)
		damperDamping = 1; // schock absorbers bigger => more tough

		htMin = 60;          // Minimum half-cooling time (in seconds)
		htMax = 1800;        // Maximum half-cooling time (in seconds)
		afMax = 200; 				// Maximum temperature in case the model is alive (in celsius)
		mfMax = 100; 					// Maximum temperature when the model is moving (in celsius)
		mFact = 1;           // Metabolism factor - number from interval <0, 1> (0 - metabolism has no influence, 1 - metabolism has full influence (no other temperature source will be considered)).
		tBody = 200;           // Metabolism temperature of the model (in celsius)

		armor = 40; // Sleeper: check
		armorGlass = 0.05; // Sleeper: check
		armorWheels = 0.1; // Sleeper: check
		damageResistance = 0.00562; // Sleeper: check

		// Steering values
		turnCoef = 4; // Sleeper: originaly 2, check if the new value is working with other steering/driving related vars bellow
		steerAheadPlan = 0.2; // steering point	
    	steerAheadSimul = 0.4; // steering point	
		predictTurnPlan = 0.9; // braking point
        predictTurnSimul = 0.5; // braking point
		brakeDistance = 8.5;
		terrainCoef = 2.0;

		enableGPS = true;
		type = VArmor;
		cost = 100000;

		soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1", db-40, 1.0,10};
		soundEnviron[] = {, db-5, 1};

		transportSoldier = 4; //driver, gunner + 4 cargo
		transportMaxBackpacks = 6;

		class TransportWeapons
		{
			addACRWeapons(1)
		};
		class TransportMagazines
		{
			addACRMagazines(1)
		};

		class Library {libTextDesc = $STR_ACR_LIB_DINGO;}; 

		//driverAction = HMMWV_Driver;
		//cargoAction[] = {HMMWV_Cargo01,HMMWV_Cargo01,UAZ_Cargo01};
		driverAction = HMMWV_Driver_EP1; // Sleeper: check
		cargoAction[] = {HMMWV_Cargo_EP1,HMMWV_Cargo02_EP1}; // Sleeper: check
		cargoIsCoDriver[] = {true,false}; // Sleeper: check

		castDriverShadow = false;


		radarType = 4;
		unitInfoType = UnitInfoShip;
		threat[] = {1, 0.1, 0.4}; // Sleeper: check

		class Turrets: Turrets
		{
			class MainTurret : MainTurret
			{
				gun = "mainGun";
				body = "mainTurret";
				hasGunner = 1;
				//weapons[] = {M2BC,SmokeLauncher}; // Sleeper: make a new mgun, check if dingo has smokelaunchers (probably yes)
				//magazines[] = {100Rnd_127x99_M2,SmokeLauncherMag}; // Sleeper: make and add mags for the new mgun
				weapons[] = {MG3A1_veh_ACR};
				magazines[] = {100Rnd_762x51_M240,100Rnd_762x51_M240,100Rnd_762x51_M240,100Rnd_762x51_M240};

				minElev = -25; maxElev = +60;
				//gunnerAction = HMMWV_Gunner01;
				gunnerAction = HMMWV_Gunner04_EP1; // Sleeper: check
				viewGunnerInExternal = false;
				castGunnerShadow = 1;

				stabilizedInAxes = StabilizedInAxesBoth; // Sleeper: check
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
				gunnerForceOptics = 1;
				class ViewOptics
				{
					initAngleX = 0; minAngleX = -30; maxAngleX = +60;
					initAngleY = 0; minAngleY = -100; maxAngleY = +100;
					initFov = 0.300; minFov = 0.015; maxFov = 0.300;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
				};
				soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1", db-40, 1.0,10};
			};
		};
		class AnimationSources: AnimationSources
		{
			class HitGlass1;
			class HitGlass5: HitGlass1 {hitpoint="HitGlass5";};
		};
 		class HitPoints: HitPoints
		{
			class HitEngine {armor=0.5;material=-1;name="engine";visual="";passThrough=1;};
			class HitGlass1:HitGlass1 {armor=1;};
			class HitGlass2:HitGlass2 {armor=1;};
			class HitGlass3:HitGlass3 {armor=1;};
			class HitGlass4:HitGlass4 {armor=1;};
			class HitGlass5:HitGlass4 {name="glass5";visual="glass5";};
			class HitLFWheel:HitLFWheel{armor=0.15;};
			class HitLBWheel:HitLBWheel{armor=0.15;};
			class HitRFWheel:HitRFWheel{armor=0.15;};
			class HitRBWheel:HitRBWheel{armor=0.15;};
			class HitFuel {armor=0.14;material=-1;name="fueltank";visual="";passThrough=1;};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"CA\Wheeled_ACR\Dingo\Data\karrosse.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\karrosse_dam.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\karrosse_des.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\karrosse_innen.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\karrosse_innen.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\karrosse_innen_des.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\teile.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\teile_dam.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\teile_des.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\teile_innen.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\teile_innen.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\teile_innen_des.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\FLW200.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\FLW200_dam.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\FLW200_des.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\plane.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\plane_dam.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\FLW200_des.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\alpha_glass.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\alpha_glass_dam.rvmat",
				"CA\Wheeled_ACR\Dingo\Data\alpha_glass_des.rvmat"
			};
		};
		HiddenSelections[] = {camo1,camo2,camo5,camo6};
		HiddenSelectionsTextures[] = {
			"\ca\wheeled_acr\dingo\data\acr_karosse_wdl_co",
			"\ca\wheeled_acr\dingo\data\a_teile_co",
			"\ca\wheeled_acr\dingo\data\FLW100_co",
			"\ca\wheeled_acr\dingo\data\FLW200_co"
		};

		soundGear[]={,db-75,1};
		insideSoundCoef = 0.8;
		SoundGetIn[]={"ca\Sounds_ACR\wheeled\Dingo\door",db-5,1};
		SoundGetOut[]={"ca\Sounds_ACR\wheeled\Dingo\door",db-5,1, 40};
		soundEngineOnInt[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_start", db-5, 1.0};
		soundEngineOnExt[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_start", db-5, 1.0, 250};
		soundEngineOffInt[] ={"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_stop", db-5, 1.0};
		soundEngineOffExt[] ={"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_stop", db-5, 1.0, 250};

		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", db-3, 1,200};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", db-3, 1,200};
 		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", db-3, 1,200};
 		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", db-3, 1,200};
 		soundBuildingCrash[] = {buildCrash0, 0.25, buildCrash1, 0.25, buildCrash2, 0.25, buildCrash3, 0.25};

		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", db-3, 1,200};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", db-3, 1,200};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", db-3, 1,200};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", db-3, 1,200};
		WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", db-3, 1,200};
		WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", db-3, 1,200};
		soundWoodCrash[] = {woodCrash0, 0.166, woodCrash1, 0.166, woodCrash2, 0.166, woodCrash3, 0.166,woodCrash4, 0.166,woodCrash5, 0.166};

		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", db-3, 1,200};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", db-3, 1,200};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", db-3, 1,200};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", db-3, 1,200};
		soundArmorCrash[] = {ArmorCrash0, 0.25, ArmorCrash1, 0.25, ArmorCrash2, 0.25, ArmorCrash3, 0.25};

		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_acce", db-20, 1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_acce", db-20, 1.0, 200};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};

		class Sounds
		{
// EXTERNAL SOUNDS
			class Engine
			{
				sound[] =  {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_mid", db0, 1.5, 200};
				frequency = "(1.0+rpm)*0.3"; 
				volume = "engineOn*camPos*((rpm factor[0.2, 0.4])+ (rpm factor[0.8, 0.5]))"; 
			};
			class EngineHighOut
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_high", db0, 1.5, 250};
				frequency = "(1.0+rpm)*0.3";
				volume = "engineOn*camPos*(rpm factor[0.3, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_ext_idle", db0, 1.0, 200};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.05])"; 
			};
			class TiresRockOut{sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", db-10, 1.0, 30};frequency = "1";volume = "camPos*rock*(speed factor[2, 20])";};
			class TiresSandOut{sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", db-10, 1.0, 30};frequency = "1";volume = "camPos*sand*(speed factor[2, 20])";};
			class TiresGrassOut{sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2", db-10, 1.0, 30};frequency = "1";volume = "camPos*grass*(speed factor[2, 20])";};
			class TiresMudOut{sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", db-10, 1.0, 30};frequency = "1";volume = "camPos*mud*(speed factor[2, 20])";};
			class TiresGravelOut{sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", db-10, 1.0, 30};frequency = "1";volume = "camPos*gravel*(speed factor[2, 20])";};
			class TiresAsphaltOut{sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", db-10, 1.0, 30};frequency = "1";volume = "camPos*asphalt*(speed factor[2, 20])";};
			class NoiseOut
				{
					sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2", db-25, 1.0, 30};
					frequency = "1";
					volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";}
				;
// INTERNAL SOUNDS
			class EngineLowIn
			{
				sound[] =  {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_mid", db0, 1.0, 200};
				frequency = "(1.0+rpm)*0.3"; 
				volume = "engineOn*(1-camPos)*((rpm factor[0.4, 0.2])+ (rpm factor[0.8, 0.5]))"; 
			};
			class EngineHighIn
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_high", db0, 1.0, 250};
				frequency = "(1.0+rpm)*0.3";
				volume = "engineOn*(1-camPos)*(rpm factor[0.3, 0.9])";
			};
			class IdleIn
			{
				sound[] = {"ca\Sounds_ACR\wheeled\Dingo\Dingo_int_idle", db0, 1.0, 200};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.3, 0.05])"; 
			};
			class TiresRockIn{sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", db-0, 1.0};frequency = "1";volume = "(1-camPos)*rock*(speed factor[2, 20])";};
			class TiresSandIn{sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", db-0, 1.0};frequency = "1";volume = "(1-camPos)*sand*(speed factor[2, 20])";};
			class TiresGrassIn{sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2", db-0, 1.0};frequency = "1";volume = "(1-camPos)*grass*(speed factor[2, 20])";};
			class TiresMudIn{sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", db-0, 1.0};frequency = "1";volume = "(1-camPos)*mud*(speed factor[2, 20])";};
			class TiresGravelIn{sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", db-0, 1.0};frequency = "1";volume = "(1-camPos)*gravel*(speed factor[2, 20])";};
			class TiresAsphaltIn{sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", db-0, 1.0};frequency = "1";volume = "(1-camPos)*asphalt*(speed factor[2, 20])";};
			class NoiseIn
				{
					sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", db-45, 1.0};
					frequency = "1";
					volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
				};
			// original environment sound, suppressed now
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
		// Sleeper: check if dingo has smokelauncher...
		//smokeLauncherGrenadeCount = 4; //Number of smoke shells launched at once
		//smokeLauncherVelocity = 8; //Velocity which smoke shells are launched at
		//smokeLauncherOnTurret = 1; //0 if smoke launchers are on hull, 1 if on turret
		//smokeLauncherAngle = 120; //Angle within which smoke grenades are launched (actual spacing may end up smaller so use slighty higher number)
/*
		// Sleeper: check if we want NVGMarker
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03, 0.003, 0.003, 1};
				ambient[] = {0.003, 0.0003, 0.0003, 1};
				brightness = 0.001;
				blinking = 1;
			};
		};
*/
	};
	class Dingo_WDL_ACR: Dingo_Base_ACR
	{
		scope = public;
		side = TWest;
		faction = BIS_CZ;
		vehicleClass = ArmouredW;
		class TransportMagazines {}; // Sleeper: add magazines
		class TransportWeapons {};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim{source="reload";weapon="MG3A1_veh_ACR";}; // Sleeper: check
			class ReloadMagazine{source="reloadmagazine";weapon="MG3A1_veh_ACR";}; // Sleeper: check
			class Revolving{source="revolving";weapon="MG3A1_veh_ACR";}; // Sleeper: check
		};
	};
	class Dingo_DST_ACR: Dingo_WDL_ACR
	{
		vehicleClass = "Armored";
		HiddenSelectionsTextures[] = {
			"\ca\wheeled_acr\dingo\data\ACR_karosse_des_co",
			"\ca\wheeled_acr\dingo\data\ACR_DES_a_teile_co",
			"\ca\wheeled_acr\dingo\data\FLW100_DES_co",
			"\ca\wheeled_acr\dingo\data\FLW200_DES_co"
		};
		crew = CZ_Soldier805_DES_ACR;
		typicalCargo[] = {CZ_Soldier805_DES_ACR, CZ_Soldier805_DES_ACR, CZ_Soldier805_DES_ACR};
	};
	// TODO verze Dinga s Granátometem WDL i DST
	// displayname = $STR_ACR_DN_DINGO_GL;
	// zbran "GMG_veh_ACR" + 4x magazine "48Rnd_40mm_MK19"
	class Dingo_GL_Wdl_ACR: Dingo_Base_ACR
	{
		scope = public;
		side = TWest;
		faction = BIS_CZ;
		vehicleClass = ArmouredW;
		displayname = $STR_ACR_DN_DINGO_GL;
		model = "\CA\Wheeled_ACR\Dingo\AMT_Dingo2a2";
		Picture = "\Ca\Wheeled_ACR\Data\UI\Picture_Dingo2_CA.paa";
		class TransportMagazines {}; // Sleeper: add magazines
		class TransportWeapons {};

		class Turrets: Turrets
		{
			class MainTurret : MainTurret
			{
				gun = "mainGun";
				body = "mainTurret";
				hasGunner = 1;
				weapons[] = {GMG_veh_ACR};
				magazines[] = {48Rnd_40mm_MK19, 48Rnd_40mm_MK19, 48Rnd_40mm_MK19, 48Rnd_40mm_MK19};
				minElev = -25; maxElev = +60;
				gunnerAction = HMMWV_Gunner04_EP1; // Sleeper: check
				viewGunnerInExternal = false;
				castGunnerShadow = 1;
				stabilizedInAxes = StabilizedInAxesBoth; // Sleeper: check
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
				gunnerForceOptics = 1;
				class ViewOptics
				{
					initAngleX = 0; minAngleX = -30; maxAngleX = +60;
					initAngleY = 0; minAngleY = -100; maxAngleY = +100;
					initFov = 0.300; minFov = 0.015; maxFov = 0.300;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
				};
				soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1", db-40, 1.0,10};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim{source="reload";weapon="GMG_veh_ACR";};
			class ReloadMagazine{source="reloadmagazine";weapon="GMG_veh_ACR";};
			class Revolving{source="revolving";weapon="GMG_veh_ACR";};
		};
	};
	class Dingo_GL_DST_ACR: Dingo_GL_Wdl_ACR
	{
		vehicleClass = "Armored";
		HiddenSelectionsTextures[] = {
			"\ca\wheeled_acr\dingo\data\ACR_karosse_des_co",
			"\ca\wheeled_acr\dingo\data\ACR_DES_a_teile_co",
			"\ca\wheeled_acr\dingo\data\FLW100_DES_co",
			"\ca\wheeled_acr\dingo\data\FLW200_DES_co"
		};
		crew = CZ_Soldier805_DES_ACR;
		typicalCargo[] = {CZ_Soldier805_DES_ACR, CZ_Soldier805_DES_ACR, CZ_Soldier805_DES_ACR};
	};
};
