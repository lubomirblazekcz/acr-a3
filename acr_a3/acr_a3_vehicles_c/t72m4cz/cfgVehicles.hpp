class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle {
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank {
		class Turrets {
			class MainTurret:NewTurret {
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints {
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds {
			class Engine;
			class Movement;
		};
	};
	class MBT_02_base_F: Tank_F {};
	class acr_a3_T72M4CZ: MBT_02_base_F
	{
		AGM_FCSEnabled = 0;
		scope = 2;
		author="ACR A3";
		vehicleClass = "Armored";
		model = "\acr_a3\acr_a3_vehicles\t72m4cz\T72_ACR.p3d";
		picture =	"\A3\armor_f_gamma\MBT_02\Data\UI\MBT_02_Base_ca.paa";
		Icon = "\acr_a3\acr_a3_vehicles\t72m4cz\data\icomap_t72_CA.paa";
		mapSize = 9.5;
		displayName = "T-72M4CZ";

        commanderCanSee = 1+2+4+8+16+31;
        gunnerCanSee = 2+4+8+16;
        drivercompartments = "Compartment1";
        castdrivershadow = 0;
        attenuationEffectType = "TankAttenuation"; //echo fix
        insideSoundCoef=0.89999998;
        forceHideDriver = 1;
        driverForceOptics = 1;
        driverAction = "T72_DriverOut";
        driverInAction = "T72_Driver";
		LODTurnedOut = 1;
		driverDoor="hatchD";

		destrType=DestructDefault;

		#include "physx.hpp"
		driveOnComponent[] = {};

		side = 1;
		faction = "ACR";
		crew = "ACR_neozbrojeny";
		typicalCargo[] = {"ACR_neozbrojeny"};
		LockDetectionSystem = 4;
		IncommingMisslieDetectionSystem = 16;
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\t72m4cz\data\T72_1_co.paa","\acr_a3\acr_a3_vehicles\t72m4cz\data\T72_2_co.paa","\acr_a3\acr_a3_vehicles\t72m4cz\data\T72_3_co.paa"};
		armor = 500;
		armorStructural=1000;	// Two hulls of same type should take same amount of damage. Use armorStructural to counter the effect of vehicle size on its armor.
		damageResistance = 0.005;
		maxSpeed = 70;
		cost = 1200000;

		// Sounds
		soundGetIn[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_inside_door1.wss",0.56234133,1};
		soundGetOut[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_inside_door1.wss",0.56234133,1,60};
		soundEngineOnInt[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_inside_start1.wss",1.0,1.0};
		soundEngineOnExt[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_outside-m_start1.wss",2.5118864,1.0,500};
		soundEngineOffInt[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_inside_stop1.wss",1.0,1.0};
		soundEngineOffExt[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_outside-m_stop1.wss",1.0,1.0,500};
		buildCrash0[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_building_01.wss",0.70794576,1,150};
		buildCrash1[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_building_02.wss",0.70794576,1,150};
		buildCrash2[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_building_03.wss",0.70794576,1,150};
		buildCrash3[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_building_04.wss",0.70794576,1,150};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_wood_01.wss",0.70794576,1,150};
		WoodCrash1[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_wood_02.wss",0.70794576,1,150};
		WoodCrash2[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_wood_03.wss",0.70794576,1,150};
		WoodCrash3[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_wood_04.wss",0.70794576,1,150};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		ArmorCrash0[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_vehicle_01.wss",0.70794576,1,150};
		ArmorCrash1[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_vehicle_02.wss",0.70794576,1,150};
		ArmorCrash2[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_vehicle_03.wss",0.70794576,1,150};
		ArmorCrash3[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_vehicle_04.wss",0.70794576,1,150};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
        class HitPoints: HitPoints {
                class HitHull: HitHull {	// Handle internal damage
                    armor=0.8;
                    material=-1;
                    name="telo";
                    visual="zbytek";
                    passThrough=0;
                    minimalHit = 0.14;
                    explosionShielding=0.009;
                    radius = 0.25;
                };
                class HitEngine: HitEngine {
                    armor=1;
                    material=-1;
                    name="motor";
                    passThrough=0;
                    minimalHit = 0.24;
                    explosionShielding=0.009;
                    radius = 0.33;
                };
                class HitLTrack: HitLTrack {
                    armor=0.5;
                    material=-1;
                    name="pas_L";
                    passThrough=0;
                    minimalHit = 0.25;
                    explosionShielding=0.5;
                    radius = 0.3;
                };
                class HitRTrack: HitRTrack {
                    armor=0.5;
                    material=-1;
                    name="pas_P";
                    passThrough=0;
                    minimalHit = 0.25;
                    explosionShielding=0.5;
                    radius = 0.3;
                };
        };
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                gunnerAction = "T72_GunnerOut";
                gunnerInAction = "T72_Gunner";
                gunnerDoor="hatchG";
                soundServo[] = {"\acr_a3\acr_a3_vehicles\bmp2\data\gun_elevate2",0.01,1,10};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
                        LODTurnedOut = 1100;
                        gunnerAction = "T72_CommanderOut";
                        gunnerInAction = "T72_Commander";

                        //Turn out commander has bugged view
                        forceHideCommander = 1;

                        // Animation class
                        body = "obsTurret";
                        gun = "obsGun";
                        gunnerDoor="hatchC";


                        // Animation source
                        animationSourceBody = "obsTurret";
                        animationSourceGun = "obsGun";
                        //gunnerLeftHandAnimName="Commander_Gun"; //nie działa :<

                        // Servos
                        maxHorizontalRotSpeed = 1.8;	// 1 = 45°/sec
                        maxVerticalRotSpeed = 1.8;		// 1 = 45°/sec
						stabilizedInAxes = "StabilizedInAxesBoth";
						soundServo[] = {"\acr_a3\acr_a3_vehicles\bmp2\data\gun_elevate2",0.0177828,1,10};
						minElev = -25;
						maxElev = 60;
						initElev=0;
						minTurn=-360;
						maxTurn=+360;
						initTurn=0;

						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex = 2;

                        memoryPointGun = "machinegun";
                        gunBeg = "gun_muzzle";
                        gunEnd = "gun_chamber";
						weapons[] = {"ACR_A3_KORD","SmokeLauncher"};
						magazines[] = {"150Rnd_127x108_Ball","150Rnd_127x108_Ball","150Rnd_127x108_Ball","150Rnd_127x108_Ball","SmokeLauncherMag","SmokeLauncherMag"};
						selectionFireAnim = "zasleh3";

                        //memoryPointGunnerOutOptics = "commander_weapon_view";
                        memoryPointGunnerOptics= "commanderview";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						gunnerHasFlares = 1;	// flare visual effect when looking at light source
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.155;
							minFov = 0.034;
							maxFov = 0.155;
							visionMode[] = {"Normal","TI"};
							thermalMode[] = {4,5};
						};
  						class OpticsIn: Optics_Commander_02
  						{
  							class Wide: Wide{};
  							class Medium: Medium{};
  							class Narrow: Narrow{};
  						};
                        // Gunner operations
                        gunnerGetInAction = GetInHigh;
                        gunnerGetOutAction = GetOutHigh;
                        startEngine = 0;	// Turning this turret should not turn engine on.
                        viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.
                        outGunnerMayFire = 0;	// Turn off to make player able to look around freely outside optics view.
                        inGunnerMayFire = 1;	// Turn off to make player able to look around freely outside optics view.

                        class HitPoints {
                            class HitTurret	{
                                armor = 0.3;
                                material = -1;
                                name = "vez2";
                                visual="vez2";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding=0.001;
                                radius = 0.25;
                            };
                            class HitGun	{
                                armor = 0.3;
                                material = -1;
                                name = "zbranVelitele"; //potreba doplnit
                                visual="zbranVelitele";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding=0.001;
                                radius = 0.25;
                            };
                        };
					};
				};

                LODTurnedOut = 1100;
                maxHorizontalRotSpeed = 0.32;	// 1 = 45°/sec
                maxVerticalRotSpeed = 0.1;		// 1 = 45°/sec

                // Coaxial gun
                memoryPointGun = "kulas";
                selectionFireAnim = "zasleh";

                // Main gun
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";

				weapons[] = {"ACR_A3_D81CZ","ACR_A3_PKT"};
				magazines[] = {"24Rnd_125mm_APFSDS","12Rnd_125mm_HE","12Rnd_125mm_HE","ACR_A3_2000Rnd_762x54_PKT","ACR_A3_2000Rnd_762x54_PKT","ACR_A3_2000Rnd_762x54_PKT"};

                // Turret servos
                minElev=-5;
                maxElev=+20;
                initElev=10;

                // Optics view
                memoryPointGunnerOptics= "gunnerview";
                gunnerOutOpticsModel = "";
                gunnerOutOpticsEffect[] = {};
                gunnerOpticsEffect[] = {};
                gunnerForceOptics = 1;

                // Field of view values: 1 = 120°

                class OpticsIn {
                    class Periscope: ViewOptics {
                        initAngleX=0;
                        minAngleX=-30;
                        maxAngleX=+30;
                        initAngleY=0;
                        minAngleY=-100;
                        maxAngleY=+100;
                        initFov = 0.466666;
                        minFov = 0.466666;
                        maxFov = 0.466666;
                        visionMode[] = {"Normal","NVG"};
                        gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
                    };
                    class Wide: ViewOptics {
                        initAngleX=0;
                        minAngleX=-30;
                        maxAngleX=+30;
                        initAngleY=0;
                        minAngleY=-100;
                        maxAngleY=+100;
                        initFov=0.3;
                        minFov=0.3;
                        maxFov=0.3;
                        visionMode[] = {"Normal","Ti","NVG"};
                        thermalMode[] = {4,5}; //red hot chilli
                        gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
                        gunnerOpticsEffect[] = {};
                    };
                    class Medium: Wide {
                        gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";
                        initFov=0.07;
                        minFov=0.07;
                        maxFov=0.07;
                    };
                    class Narrow: Wide {
                        gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_n_F.p3d";
                        initFov=0.028;
                        minFov=0.028;
                        maxFov=0.028;
                    };
                };
                // Gunner operations and animations
                forceHideGunner = 0;
                inGunnerMayFire = 1;	// set to 0 to let gunner look around the internal compartment if modeled
                viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.

                class HitPoints {
                    class HitTurret	{
                        armor = 0.7;
                        material = -1;
                        name = "vez";
                        visual="vez";
                        passThrough = 0;
                        minimalHit = 0.15;
                        explosionShielding=0.009;
                        radius = 0.25;
                    };
                    class HitGun	{
                        armor = 0.6;
                        material = -1;
                        name = "zbran";
                        visual="";
                        passThrough = 0;
                        minimalHit = 0.15;
                        explosionShielding=0.001;
                        radius = 0.25;
                    };
                };
			};
		};
        class AnimationSources: AnimationSources
        {
            class ReloadAnim {source = "reload";weapon = "ACR_A3_KORD";};
            class ReloadMagazine {source = "reloadmagazine";weapon = "ACR_A3_KORD";};
            class Revolving {source = "revolving";weapon = "ACR_A3_KORD";};
            class muzzle_rot_cannon {source = "ammorandom"; weapon = "ACR_A3_D81CZ";};
            class muzzle_rot_coax {source = "ammorandom"; weapon = "ACR_A3_PKT";};
            class muzzle_rot_HMG {source = "ammorandom"; weapon = "ACR_A3_KORD";};
            class recoil_source {source = "reload"; weapon = "ACR_A3_D81CZ";};
            class comm_g
            {
                    source = "user";
                    animPeriod = 22.5; // seconds per mil
                    initPhase=0;
            };
            class HatchC
            {
                source="door";
                animPeriod=0.80000001;
            };
            class HatchG: HatchC {};
            class HatchD: HatchC {};
        };
		class Damage
		{
			tex[] = {};
			mat[] = {
			"acr_a3\acr_a3_vehicles\t72m4cz\data\t72_track.rvmat",
            "acr_a3\acr_a3_vehicles\t72m4cz\data\t72_track_damage.rvmat",
            "acr_a3\acr_a3_vehicles\t72m4cz\data\t72_track_destruct.rvmat",
            "acr_a3\acr_a3_vehicles\t72m4cz\data\t72_1.rvmat",
            "acr_a3\acr_a3_vehicles\t72m4cz\data\t72_1_damage.rvmat",
            "acr_a3\acr_a3_vehicles\t72m4cz\data\t72_1_destruct.rvmat",
            "acr_a3\acr_a3_vehicles\t72m4cz\data\t72_2.rvmat",
            "acr_a3\acr_a3_vehicles\t72m4cz\data\t72_2_damage.rvmat",
            "acr_a3\acr_a3_vehicles\t72m4cz\data\t72_2_destruct.rvmat",
            "acr_a3\acr_a3_vehicles\t72m4cz\data\t72_3.rvmat",
            "acr_a3\acr_a3_vehicles\t72m4cz\data\t72_3_damage.rvmat",
            "acr_a3\acr_a3_vehicles\t72m4cz\data\t72_3_destruct.rvmat",
            "acr_a3\acr_a3_vehicles\t72m4cz\data\dshk.rvmat",
            "acr_a3\acr_a3_vehicles\t72m4cz\data\dshk_damage.rvmat",
            "acr_a3\acr_a3_vehicles\t72m4cz\data\dshk_destruct.rvmat",

            "a3\data_f\default.rvmat",
            "a3\data_f\default.rvmat",
            "a3\data_f\default_destruct.rvmat"
            };
		};
        smokeLauncherGrenadeCount = 8; //Number of smoke shells launched at once
        smokeLauncherVelocity = 14; //Velocity which smoke shells are launched at
        smokeLauncherOnTurret = 1; //0 if smoke launchers are on hull, 1 if on turret
        smokeLauncherAngle = 120; //Angle within which smoke grenades are launched (actual spacing may end up smaller so use slighty higher number)

        class ViewOptics: ViewOptics {
            visionMode[] = {"Normal","NVG"};
        };

        class Exhausts {
            class Exhaust1 {
                position = "vyfuk start";
                direction = "vyfuk konec";
                effect = "ExhaustEffectTankBack";
            };
        };

        class Reflectors {
            class Left {
                color[] 	= {1900, 1300, 950};
                ambient[]	= {5,5,5};
                position 	= "L svetlo";
                direction 	= "Konec L svetla";
                hitpoint 	= "L svetlo";
                selection	= "L svetlo";
                size 		= 1;
                innerAngle 	= 100;
                outerAngle 	= 179;
                coneFadeCoef = 10;
                intensity 	= 1; //17.5
                useFlare 	= 0;
                dayLight 	= 0;
                flareSize 	= 1.0;
                class Attenuation {
                    start 		= 1.0;
                    constant 	= 0;
                    linear 		= 0;
                    quadratic 	= 0.25;
                    hardLimitStart = 30;
                    hardLimitEnd = 60;
                };
            };
            class Right: Left {
                position 	= "P svetlo";
                direction 	= "konec P svetla";
                hitpoint 	= "P svetlo";
                selection 	= "P svetlo";
            };
            class Right2: Right {
                position 	= "light_R_flare";
                useFlare 	= 1;
            };
            class Left2: Left {
                position 	= "light_L_flare";
                useFlare 	= 1;
            };
            class GunnerLight: Left2
            {
                position = "gunner light";
                direction = "konec gunner light";
                hitpoint = "gunner light";
                selection = "gunner light";
                ambient[] = {0.1,0.1,0.1,0.1};
            };
        };
        aggregateReflectors[] = {{"Left","Right","Left2","Right2"}};
	};
};