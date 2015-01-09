////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.88
//Fri Jan 09 15:40:31 2015 : Source 'file' date Fri Jan 09 15:40:31 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	DestructNo = 0,
	DestructBuilding = 1,
	DestructEngine = 2,
	DestructTree = 3,
	DestructTent = 4,
	DestructMan = 5,
	DestructDefault = 6,
	DestructWreck = 7
};

//Class P:\acr_a3\acr_a3_vehicles\t810\config.bin{
class CfgPatches
{
	class acr_a3_T810
	{
		units[] = {"T810A_MG_ACR","T810_ACR","T810_Open_ACR","T810Refuel_ACR","T810Reammo_ACR","T810Repair_ACR","T810A_Des_MG_ACR","T810_Des_ACR","T810_Open_Des_ACR","T810Refuel_Des_ACR","T810Repair_Des_ACR","T810Reammo_Des_ACR"};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAWheeled_ACR"};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		T810Driver = "T810Driver";
		T810gunner = "T810gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class t810Driver_d: DefaultDie
		{
			actions = "DeadActions";
			file = "\acr_a3\acr_a3_vehicles\t810\Anims\acr_t810Driver_d.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class t810gunner_d: t810Driver_d
		{
			file = "\acr_a3\acr_a3_vehicles\t810\Anims\acr_t810gunner_d.rtm";
		};
		class t810Driver: Crew
		{
			file = "\acr_a3\acr_a3_vehicles\t810\Anims\acr_t810Driver.rtm";
			interpolateTo[] = {"t810Driver_d",1};
		};
		class t810Gunner: Crew
		{
			file = "\acr_a3\acr_a3_vehicles\t810\Anims\acr_t810gunner.rtm";
			interpolateTo[] = {"t810gunner_d",1};
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
	};
	class Truck: Car
	{
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class DestructionEffects;
		class Turrets;
	};
	class T810_Turrets_Base_ACR: Truck
	{
		mapSize = 8;
		picture = "\acr_a3\acr_a3_vehicles\t810\data\Picture_T810_CA.paa";
		Icon = "\acr_a3\acr_a3_vehicles\t810\data\Icon_T810_CA.paa";
		vehicleClass = "Car";
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_T810";
		};
		side = 1;
		faction = "BIS_CZ";
		fuelCapacity = 320;
		maxSpeed = 106;
		wheelCircumference = 3.5814157;
		cost = 70000;
		turnCoef = 5.0;
		steerAheadSimul = 0.2;
		steerAheadPlan = 0.3;
		predictTurnSimul = 0.9;
		predictTurnPlan = 1.0;
		brakeDistance = 9.5;
		armor = 100;
		damageResistance = 0.03;
		enableGPS = 1;
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		threat[] = {1,0.1,0.4};
		class DestructionEffects: DestructionEffects{};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.3;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.3;
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 0.3;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.3;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.3;
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 0.3;
			};
			class HitFuel
			{
				armor = 1.4;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.003;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.02;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.02;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.02;
			};
		};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 11;
		crew = "CZ_Soldier_805_Wdl_ACR";
		driverAction = "MTVR_Driver";
		typicalCargo[] = {"CZ_Soldier_Leader_Wdl_ACR","CZ_Soldier_MG2_Wdl_ACR","CZ_Soldier_RPG_Wdl_ACR","CZ_Sharpshooter_Wdl_ACR","CZ_Soldier_RPG_Ass_Wdl_ACR","CZ_Soldier_Medic_Wdl_ACR","CZ_Soldier_805_Wdl_ACR"};
		cargoAction[] = {"Truck_Cargo01","Truck_Cargo01","Truck_Cargo04","Truck_Cargo04","Truck_Cargo02","Truck_Cargo03","Truck_Cargo04","Truck_Cargo02","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04"};
		initCargoAngleY = "+185";
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoIsCoDriver[] = {1,0,0};
		class Turrets: Turrets
		{
			class MainTurret;
			class PKBTurret: MainTurret
			{
				startEngine = 0;
				hasGunner = 1;
				memoryPointGunnerOptics = "eye";
				gunnerForceOptics = 0;
				gunnerOpticsShowCursor = 0;
				selectionFireAnim = "zasleh";
				gunnerAction = "T810gunner";
				gunnerInAction = "T810gunner";
				gunnerName = "PKB Gunner";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				weapons[] = {"PKT"};
				magazines[] = {"200Rnd_762x54_PKT","200Rnd_762x54_PKT","200Rnd_762x54_PKT","200Rnd_762x54_PKT","200Rnd_762x54_PKT"};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "OtocVez";
				animationSourceGun = "OtocHlaven";
				memoryPointGun = "usti hlavne";
				body = "OtocVez";
				gun = "OtocHlaven";
				gunAxis = "osa_hlavne";
				turretAxis = "osa_veze";
				minElev = -15;
				maxElev = 35;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				soundServo[] = {};
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				castGunnerShadow = 1;
				class ViewGunner
				{
					initAngleX = 7;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 60;
					initFov = 0.8;
					minFov = 0.5;
					maxFov = 0.7;
				};
			};
		};
		SoundGear[] = {"","db-55",1};
		soundGetIn[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\ext-truck-getin.wss","db-3",1};
		soundGetOut[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\ext-truck-getout.wss","db-5",1,50};
		soundEngineOnInt[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\t810_int_start.wss","db-5",1.0};
		soundEngineOnExt[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\t810_ext_start.wss","db-5",1.0,350};
		soundEngineOffInt[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\t810_int_stop.wss","db-5",1.0};
		soundEngineOffExt[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\t810_ext_stop.wss","db-5",1.0,350};
		buildCrash0[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\crash_building_01.wss","db-3",1,200};
		buildCrash1[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\crash_building_02.wss","db-3",1,200};
		buildCrash2[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\crash_building_03.wss","db-3",1,200};
		buildCrash3[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\crash_building_04.wss","db-3",1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\crash_mix_wood_01.wss","db-3",1,200};
		WoodCrash1[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\crash_mix_wood_02.wss","db-3",1,200};
		WoodCrash2[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\crash_mix_wood_03.wss","db-3",1,200};
		WoodCrash3[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\crash_mix_wood_04.wss","db-3",1,200};
		WoodCrash4[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\crash_mix_wood_05.wss","db-3",1,200};
		WoodCrash5[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\crash_mix_wood_06.wss","db-3",1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\crash_vehicle_01.wss","db-3",1,200};
		ArmorCrash1[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\crash_vehicle_02.wss","db-3",1,200};
		ArmorCrash2[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\crash_vehicle_03.wss","db-3",1,200};
		ArmorCrash3[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\crash_vehicle_04.wss","db-3",1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\t810_int_acceleration.wss","db-8",1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\t810_ext_acceleration.wss","db-5",1.0,390};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\t810_ext_low.wss","db0",1.0,450};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.7, 0.2])";
			};
			class EngineHighOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\t810_ext_high.wss","db0",1.0,550};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.5, 0.95])";
			};
			class IdleOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\t810_ext_idle.wss","db-5",1.0,350};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\ext-tires-rock2.wss","db-20",1.0,50};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\ext-tires-sand2.wss","db-20",1.0,50};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\ext-tires-grass3.wss","db-20",1.0,50};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\ext-tires-mud2.wss","db-20",1.0,50};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\ext-tires-gravel2.wss","db-20",1.0,50};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\ext-tires-asphalt3.wss","db-20",1.0,50};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\ext-noise2.wss","db-40",1.0,50};
				frequency = "1";
				volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\t810_int_low.wss","db0",1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "((engineOn*rpm) factor[0.65, 0.2])*(1-camPos)";
			};
			class EngineHighIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\t810_int_high.wss","db0",1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "((engineOn*rpm) factor[0.4, 1.0])*(1-camPos)";
			};
			class IdleIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\t810_int_idle.wss","db-8",1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\int-tires-rock2.wss","db-15",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\int-tires-sand2.wss","db-15",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\int-tires-grass3.wss","db-15",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\int-tires-mud2.wss","db-15",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\int-tires-gravel2.wss","db-15",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\int-tires-asphalt3.wss","db-15",1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t810\Sounds\int-noise2.wss","db-35",1.0};
				frequency = "1";
				volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
		memoryPointExhaust = "vyfuk start";
		memoryPointExhaustDir = "vyfuk konec";
		class Damage
		{
			tex[] = {};
			mat[] = {"acr_a3\acr_a3_vehicles\t810\data\auta_skla.rvmat","acr_a3\acr_a3_vehicles\t810\data\auta_skla_damage.rvmat","acr_a3\acr_a3_vehicles\t810\data\auta_skla_damage.rvmat","acr_a3\acr_a3_vehicles\t810\data\auta_skla_in.rvmat","acr_a3\acr_a3_vehicles\t810\data\auta_skla_in_damage.rvmat","acr_a3\acr_a3_vehicles\t810\data\auta_skla_in_damage.rvmat","acr_a3\acr_a3_vehicles\t810\data\bed.rvmat","acr_a3\acr_a3_vehicles\t810\data\bed_damage.rvmat","acr_a3\acr_a3_vehicles\t810\data\bed_destruct.rvmat","acr_a3\acr_a3_vehicles\t810\data\cabin.rvmat","acr_a3\acr_a3_vehicles\t810\data\cabin_damage.rvmat","acr_a3\acr_a3_vehicles\t810\data\cabin_destruct.rvmat","acr_a3\acr_a3_vehicles\t810\data\cabin2.rvmat","acr_a3\acr_a3_vehicles\t810\data\cabin2_damage.rvmat","acr_a3\acr_a3_vehicles\t810\data\cabin2_destruct.rvmat","acr_a3\acr_a3_vehicles\t810\data\undercarriage.rvmat","acr_a3\acr_a3_vehicles\t810\data\undercarriage_damage.rvmat","acr_a3\acr_a3_vehicles\t810\data\undercarriage_destruct.rvmat","acr_a3\acr_a3_vehicles\t810\data\default.rvmat","acr_a3\acr_a3_vehicles\t810\data\default.rvmat","acr_a3\acr_a3_vehicles\t810\data\default_destruct.rvmat"};
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
		class AnimationSources;
	};
	class T810_Base_ACR: T810_Turrets_Base_ACR
	{
		transportSoldier = 12;
		cargoIsCoDriver[] = {1,1,0};
		type = 0;
		threat[] = {0.0,0.0,0.0};
		armor = 40;
		damageResistance = 0.002;
		class Turrets{};
		class AnimationSources;
	};
	class T810A_MG_ACR: T810_Turrets_Base_ACR
	{
		scope = 2;
		vehicleClass = "CarW";
		displayname = "$STR_ACR_DN_T810_MG";
		model = "\acr_a3\acr_a3_vehicles\t810\t810_vp2_acr.p3d";
		picture = "\acr_a3\acr_a3_vehicles\t810\data\Picture_T810_MG_CA.paa";
		class AnimationSources: AnimationSources
		{
			class Select_plachta
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "PKT";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "PKT";
			};
			class belt_rotation
			{
				source = "reload";
				weapon = "PKT";
			};
			class recoil
			{
				source = "reload";
				weapon = "PKT";
			};
			class bolt
			{
				source = "reload";
				weapon = "PKT";
			};
		};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"acr_a3\acr_a3_vehicles\t810\data\cabin2_co.paa","acr_a3\acr_a3_vehicles\t810\data\bed2_co.paa","acr_a3\acr_a3_vehicles\t810\data\undercarriage_co.paa"};
		class Damage;
	};
	class T810_ACR: T810_Base_ACR
	{
		scope = 2;
		vehicleClass = "CarW";
		displayname = "$STR_ACR_DN_T810";
		model = "\acr_a3\acr_a3_vehicles\t810\t810_v_acr.p3d";
		class AnimationSources: AnimationSources
		{
			class Select_plachta
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};
		};
	};
	class T810_Open_ACR: T810_ACR
	{
		scope = 2;
		vehicleClass = "CarW";
		displayname = "$STR_ACR_DN_T810_OPEN";
		class AnimationSources: AnimationSources
		{
			class Select_plachta
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 1;
			};
		};
	};
	class T810Refuel_ACR: T810_Base_ACR
	{
		scope = 2;
		vehicleClass = "SupportWoodland_ACR";
		displayName = "$STR_ACR_DN_T810_FUEL";
		typicalCargo[] = {"CZ_Soldier_805_Wdl_ACR"};
		model = "\acr_a3\acr_a3_vehicles\t810\t810_refuel_acr.p3d";
		picture = "\acr_a3\acr_a3_vehicles\t810\data\Picture_T810refuel_CA.paa";
		Icon = "\acr_a3\acr_a3_vehicles\t810\data\Icon_T810fuel_CA.paa";
		accuracy = 0.8;
		transportFuel = 3000;
		transportAmmo = 0;
		supplyRadius = 6.3;
		transportSoldier = 2;
		cargoAction[] = {"Truck_Cargo01"};
		class Damage
		{
			tex[] = {};
			mat[] = {"acr_a3\acr_a3_vehicles\t810\data\auta_skla.rvmat","acr_a3\acr_a3_vehicles\t810\data\auta_skla_damage.rvmat","acr_a3\acr_a3_vehicles\t810\data\auta_skla_damage.rvmat","acr_a3\acr_a3_vehicles\t810\data\auta_skla_in.rvmat","acr_a3\acr_a3_vehicles\t810\data\auta_skla_in_damage.rvmat","acr_a3\acr_a3_vehicles\t810\data\auta_skla_in_damage.rvmat","acr_a3\acr_a3_vehicles\t810\data\t810_fueltank.rvmat","acr_a3\acr_a3_vehicles\t810\data\t810_fueltank_damage.rvmat","acr_a3\acr_a3_vehicles\t810\data\t810_fueltank_destruct.rvmat","acr_a3\acr_a3_vehicles\t810\data\cabin.rvmat","acr_a3\acr_a3_vehicles\t810\data\cabin_damage.rvmat","acr_a3\acr_a3_vehicles\t810\data\cabin_destruct.rvmat","acr_a3\acr_a3_vehicles\t810\data\undercarriage.rvmat","acr_a3\acr_a3_vehicles\t810\data\undercarriage_damage.rvmat","acr_a3\acr_a3_vehicles\t810\data\undercarriage_destruct.rvmat","acr_a3\acr_a3_vehicles\t810\data\default.rvmat","acr_a3\acr_a3_vehicles\t810\data\default.rvmat","acr_a3\acr_a3_vehicles\t810\data\default_destruct.rvmat"};
		};
		class TransportWeapons{};
		class TransportMagazines{};
	};
	class T810Reammo_ACR: T810_Base_ACR
	{
		scope = 2;
		vehicleClass = "SupportWoodland_ACR";
		displayName = "$STR_ACR_DN_T810_AMMO";
		model = "\acr_a3\acr_a3_vehicles\t810\t810_reammo_acr.p3d";
		accuracy = 0.9;
		transportAmmo = 300000;
		transportSoldier = 2;
		typicalCargo[] = {"CZ_Soldier_805_Wdl_ACR"};
		cargoAction[] = {"Truck_Cargo01"};
		class TransportWeapons{};
		class TransportMagazines{};
	};
	class T810Repair_ACR: T810_Base_ACR
	{
		scope = 2;
		vehicleClass = "SupportWoodland_ACR";
		displayName = "$STR_ACR_DN_T810_REPAIR";
		model = "\acr_a3\acr_a3_vehicles\t810\t810_repair_acr.p3d";
		Icon = "\acr_a3\acr_a3_vehicles\t810\data\Icon_T810repair_CA.paa";
		accuracy = 0.9;
		transportRepair = 200000000;
		supplyRadius = 7.5;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportSoldier = 2;
		typicalCargo[] = {"CZ_Soldier_805_Wdl_ACR"};
		cargoAction[] = {"Truck_Cargo01"};
		class TransportWeapons{};
		class TransportMagazines{};
	};
	class T810A_Des_MG_ACR: T810A_MG_ACR
	{
		vehicleClass = "Car";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_SL_DES_EP1","CZ_Soldier_MG_DES_EP1","CZ_Soldier_RPG_Dst_ACR","CZ_Sharpshooter_DES_ACR","CZ_Soldier_RPG_Ass_Dst_ACR","CZ_Soldier_Medic_Wdl_ACR","CZ_Soldier_DES_EP1"};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"acr_a3\acr_a3_vehicles\t810\data\cabin2_des_CO.paa","acr_a3\acr_a3_vehicles\t810\data\bed_desert_co.paa","acr_a3\acr_a3_vehicles\t810\data\undercarriage_des_CO.paa"};
	};
	class T810_Des_ACR: T810_ACR
	{
		vehicleClass = "Car";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_SL_DES_EP1","CZ_Soldier_MG_DES_EP1","CZ_Soldier_RPG_Dst_ACR","CZ_Sharpshooter_DES_ACR","CZ_Soldier_RPG_Ass_Dst_ACR","CZ_Soldier_Medic_Wdl_ACR","CZ_Soldier_DES_EP1"};
		hiddenSelections[] = {"camo1","camo2","camo3","camo6"};
		hiddenSelectionsTextures[] = {"acr_a3\acr_a3_vehicles\t810\data\cabin_desert_co.paa","acr_a3\acr_a3_vehicles\t810\data\bed_desert_co.paa","acr_a3\acr_a3_vehicles\t810\data\undercarriage_des_CO.paa","acr_a3\acr_a3_vehicles\t810\data\T810_desert_mlod_CO.paa"};
	};
	class T810_Open_Des_ACR: T810_Open_ACR
	{
		vehicleClass = "Car";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_SL_DES_EP1","CZ_Soldier_MG_DES_EP1","CZ_Soldier_RPG_Dst_ACR","CZ_Sharpshooter_DES_ACR","CZ_Soldier_RPG_Ass_Dst_ACR","CZ_Soldier_Medic_Wdl_ACR","CZ_Soldier_DES_EP1"};
		hiddenSelections[] = {"camo1","camo2","camo3","camo6"};
		hiddenSelectionsTextures[] = {"acr_a3\acr_a3_vehicles\t810\data\cabin_desert_co.paa","acr_a3\acr_a3_vehicles\t810\data\bed_desert_co.paa","acr_a3\acr_a3_vehicles\t810\data\undercarriage_des_CO.paa","acr_a3\acr_a3_vehicles\t810\data\T810_desert_mlod_CO.paa"};
	};
	class T810Refuel_Des_ACR: T810Refuel_ACR
	{
		vehicleClass = "Support";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1"};
		hiddenSelections[] = {"camo1","camo2","camo3","camo6"};
		hiddenSelectionsTextures[] = {"acr_a3\acr_a3_vehicles\t810\data\cabin_desert_co.paa","acr_a3\acr_a3_vehicles\t810\data\t810_fueltank_desert_co.paa","acr_a3\acr_a3_vehicles\t810\data\undercarriage_des_CO.paa","acr_a3\acr_a3_vehicles\t810\data\T810_desert_mlod_CO.paa"};
	};
	class T810Repair_Des_ACR: T810Repair_ACR
	{
		vehicleClass = "Support";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1"};
		hiddenSelections[] = {"camo1","camo2","camo3","camo6"};
		hiddenSelectionsTextures[] = {"acr_a3\acr_a3_vehicles\t810\data\cabin_desert_co.paa","acr_a3\acr_a3_vehicles\t810\data\bed_desert_co.paa","acr_a3\acr_a3_vehicles\t810\data\undercarriage_des_CO.paa","acr_a3\acr_a3_vehicles\t810\data\T810_desert_mlod_CO.paa"};
	};
	class T810Reammo_Des_ACR: T810Reammo_ACR
	{
		vehicleClass = "Support";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1"};
		hiddenSelections[] = {"camo1","camo2","camo3","camo6"};
		hiddenSelectionsTextures[] = {"acr_a3\acr_a3_vehicles\t810\data\cabin_desert_co.paa","acr_a3\acr_a3_vehicles\t810\data\bed_desert_co.paa","acr_a3\acr_a3_vehicles\t810\data\undercarriage_des_CO.paa","acr_a3\acr_a3_vehicles\t810\data\T810_desert_mlod_CO.paa"};
	};
};
//};
