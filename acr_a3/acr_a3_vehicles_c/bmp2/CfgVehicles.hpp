

/*	Vehicle classes	*/
class CfgVehicles {
	class LandVehicle;
	class Tank: LandVehicle {
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
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
		class EventHandlers;
	};
	class APC_Tracked_02_base_F: Tank_F {};
	class acr_a3_BMP1_base: APC_Tracked_02_base_F {
		vehicleClass = "Armored";
		author="reyhard (BIS port)";
		displayName = "BMP-1";
		accuracy = 0.3;
		model="acr_a3\acr_a3_vehicles\bmp2\BMP2";
		destrType=DestructDefault;
		maxFordingDepth=1;
		//takie tam
		canfloat = 1; //czy może być łodzią podwodną
 		commanderCanSee = 1+2+4+8+16+31;
 		gunnerCanSee = 2+4+8+16;
		drivercompartments = "Compartment1";
		castdrivershadow = 1;
		attenuationEffectType = "TankAttenuation"; //echo fix
		insideSoundCoef=0.89999998;
		forceHideDriver = 0;
		driverForceOptics = 0;
		driverAction = "BMP2_DriverOut";
		driverInAction = "BMP2_Driver";
		cargoAction[] = {"Stryker_Cargo01"};
		hideWeaponsCargo = false;

		driverDoor="hatchD";
		cargoDoors[]=
		{
			"BackDoor"
		};

		picture ="\acr_a3\acr_a3_vehicles\bmp2\Data\ico\bmp2_ca.paa";
		Icon = "\acr_a3\acr_a3_vehicles\bmp2\data\map_ico\icomap_bmp2_ca.paa";
		mapSize = 6.5;

		//#include "sounds.hpp"	// not covered by this tutorial
		#include "physx.hpp"
		driveOnComponent[] = {};

		// AI references
		cost = 700000;
		damageResistance = 0.02;
		crewVulnerable = false;

		// Damage setup
		armor = 200;
		armorStructural=600;

		class HitPoints: HitPoints {
			class HitHull: HitHull {
				armor=0.4;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=0;
				minimalHit = 0.14;
				explosionShielding=0.5;
				radius = 0.25;
			};
			class HitEngine: HitEngine {
				armor=0.45;
				material=-1;
				name="motor";
				passThrough=0;
				minimalHit = 0.139;
				explosionShielding=0.009;
				radius = 0.27;
			};
			class HitLTrack: HitLTrack {
				armor=0.5;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit = 0.15;
				explosionShielding=0.5;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack {
				armor=0.5;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit = 0.15;
				explosionShielding=0.5;
				radius = 0.3;
			};
		};
		class Turrets: Turrets {

			class CommanderOptics: CommanderOptics {

				commanding=2;
						// Animation class
						body = "obsTurret";
						gun = "obsGun";
						forceHideGunner=0;


						// Animation source
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						gunnerDoor="hatchC";

						// Servos
						maxHorizontalRotSpeed = 1.8;	// 1 = 45°/sec
						maxVerticalRotSpeed = 1.8;		// 1 = 45°/sec
						stabilizedInAxes = StabilizedInAxesBoth;
						soundServo[] = {"\acr_a3\acr_a3_vehicles\bmp2\data\gun_elevate2",0.0177828,1,10};
						minElev = -6;
						maxElev = 45;
						initElev=0;
						minTurn=-360;
						maxTurn=+360;
						initTurn=0;

						// Weapon and magazines
						gunBeg = "commanderview_dir";
						gunEnd = "commanderview";
						memoryPointGun = "commanderview";

						weapons[] = {};
						magazines[] = {};


						// FCS
						//turretInfoType = "RscWeaponZeroing";
						turretInfoType = "RscWeaponZeroing";
						discreteDistance[] = {600};
						discreteDistanceInitIndex = 0;

						// Optics view
						memoryPointGunnerOutOptics = "commander_weapon_view";
						gunnerForceOptics = 0;
						memoryPointGunnerOptics= "commanderview";
						gunnerOutForceOptics = 0;
						gunnerOutOpticsModel = "";	// leave "" to disable optics view
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};	// post processing effets
						gunnerHasFlares = 1;	// flare visual effect when looking at light source
						class ViewOptics: ViewOptics
						{
							initAngleX=0; minAngleX=-30; maxAngleX=+30;
							initAngleY=0; minAngleY=-100; maxAngleY=+100;
							initFov=0.101; minFov=0.102; maxFov=0.102;
							visionMode[] = {"Normal","NVG"};
						};
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								initFov = 0.7/4.75;
								gunnerOpticsModel = "\acr_a3\acr_a3_vehicles\bmp2\optika_T72_commander";
								gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
								visionMode[] = {"Normal"};
							};
							class Periscope: ViewOptics
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=+30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=+100;
								initFov = 0.7;
								minFov = 0.26;
								maxFov =0.26;
								visionMode[] = {"Normal"};
								gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
								gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
							};
							class NVG: Wide
							{
								initFov = 0.7/4;
								visionMode[] = {"NVG"};
							};

						};

						// Gunner operations
						gunnerAction = "BMP2_CommanderOUT";
						gunnerInAction = "BMP2_Commander";
						gunnerGetInAction = "GetInMedium";
						gunnerGetOutAction = "GetOutMedium";

						startEngine = 0;
						viewGunnerInExternal = 1;
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						class HitPoints {
							class HitTurret	{
								armor = 0.3;
								material = -1;
								name = "vezVelitele";
								visual="vezVelitele";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding=0.001;
								radius = 0.25;
							};
							class HitGun	{
								armor = 0.3;
								material = -1;
								name = "zbranVelitele";
								visual="zbranVelitele";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding=0.001;
								radius = 0.25;
							};
						};
				};
			class MainTurret: MainTurret {
				class Turrets {};

				commanding=1;
				gunnerAction = "BMP2_GunnerOut";
				gunnerInAction = "BMP2_Gunner";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				soundServo[] = {"acr_a3\acr_a3_vehicles\bmp2\data\gun_elevate2",0.01,1,10};
				gunnerDoor="hatchG";
				startEngine=0;

				maxHorizontalRotSpeed = 0.54;	// 1 = 45°/sec
				maxVerticalRotSpeed = 0.24;		// 1 = 45°/sec

				// Coaxial gun
				memoryPointGun = "usti hlavne2";
				selectionFireAnim = "zasleh";

				// Main gun
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";

				// Weapons and magazines

				// Turret servos
				minElev=-4;
				maxElev=+33;
				initElev=10;

				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;	// start at 600 meters

				// Optics view
				memoryPointGunnerOptics= "gunnerview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 0;

				// Field of view values: 1 = 120°

				class OpticsIn {

					class Wide: ViewOptics {
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=+30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=+100;
						initFov = 0.7/6;
						minFov = 0.07;
						maxFov = 0.07;
						//initFov = 0.0511; //0.03
						//minFov = 0.0511;
						//maxFov = 0.0511;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsEffect[] = 	{"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
					};

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
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
					};




				};

				// Gunner operations and animations
				forceHideGunner = 0;
				inGunnerMayFire = 1;	// set to 0 to let gunner look around the internal compartment if modeled
				viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.

				class HitPoints {
					class HitTurret	{
						armor = 0.5;
						material = -1;
						name = "vez";
						visual="vez";
						passThrough = 0;
						minimalHit = 0.14;
						explosionShielding=0.001;
						radius = 0.25;
					};
					class HitGun	{
						armor = 0.6;
						material = -1;
						name = "zbran";
						visual="";
						passThrough = 0;
						minimalHit = 0.13;
						explosionShielding=0.001;
						radius = 0.25;
					};
				};
			};
		};

		class AnimationSources: AnimationSources
		{
			class recoil {
				source = "reload";
				weapon = "ACR_A3_2A28";
			};
			class muzzle_rot_coax {source = "ammorandom"; weapon = "ACR_A3_PKT";};
			class acr_a3_AT5_Launcher {
				source = "reload";
				weapon = "acr_a3_AT5_Launcher";
			};
			class BackDoor
			{
				source="door";
				animPeriod=0.80000001;
			};
			class BackDoor2: BackDoor {};
			class HatchC: BackDoor{};
			class HatchG: HatchC {};
			class HatchD: HatchC {};
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
				position = "l svetlo";
				direction = "konec l svetla";
				hitpoint = "l svetlo";
				selection = "L svetlo";
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
				position = "p svetlo";
				direction = "konec p svetla";
				hitpoint = "p svetlo";
				selection = "P svetlo";
			};
			class Right2: Right {
				direction = "konec p svetla";
				useFlare 	= 1;
			};
			class Left2: Left {
				direction = "konec l svetla";
				useFlare 	= 1;
			};
			class SearchLight: Left {
				color[] 	= {19, 13, 9.5};
				position = "S svetlo";
				direction = "konec S svetla";
				hitpoint = "S svetlo";
				selection = "S svetlo";
				size = 0.5;
				brightness = 0.6;
				ambient[] = {0.1,0.1,0.1,0.1};
			};
			class TurretLight: Left {
				color[] 	= {19, 13, 9.5};
				position = "V svetlo";
				direction = "konec V svetla";
				hitpoint = "V svetlo";
				selection = "V svetlo";
				size = 0.4;
				brightness = 0.6;
				ambient[] = {0.1,0.1,0.1,0.1};
			};
		};
		aggregateReflectors[] = {{"Left","Right"},{"SearchLight"},{"TurretLight"}};
		#include "pip.hpp"
	};

	class acr_a3_BMP2_base: acr_a3_BMP1_base {
		vehicleClass = "Armored";
		author="reyhard (BIS port)";
		accuracy = 1000;
		displayName = "BMP-2";
		model="acr_a3\acr_a3_vehicles\bmp2\BMP2";
		transportSoldier = 7;
		hiddenselections[] = {"Camo1", "Camo2"};
		hiddenselectionstextures[] = {"\acr_a3\acr_a3_vehicles\bmp2\data\bmp2_01_acr_co.paa", "\acr_a3\acr_a3_vehicles\bmp2\data\bmp2_02_acr_co.paa"};

		class Reflectors
		{
			class Left {
				color[] 	= {1900, 1300, 950};
				ambient[]	= {5,5,5};
				position = "l svetlo";
				direction = "konec l svetla";
				hitpoint = "l svetlo";
				selection = "L svetlo";
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
				position = "p svetlo";
				direction = "konec p svetla";
				hitpoint = "p svetlo";
				selection = "P svetlo";
			};
			class Right2: Right {
				direction = "konec p svetla";
				useFlare 	= 1;
			};
			class Left2: Left {
				direction = "konec l svetla";
				useFlare 	= 1;
			};
			class GunnerLight:Left
			{
				color[] 	= {19, 13, 9.5};
				position = "gunner svetlo";
				direction = "konec gunner svetlo";
				hitpoint = "gunner svetlo";
				selection = "gunner svetlo";
			};
		};
		aggregateReflectors[] = {{"GunnerLight"},{"LeftLight","RightLight"}};

		class AnimationSources: AnimationSources
		{
			class recoil_source {
				source = "reload";
				weapon = "ACR_A3_2A24";
			};
            class muzzle_hide_hmg: recoil_source {};
            class muzzle_rot_hmg: recoil_source
            {
                source="ammorandom";
            };
		};

		class Turrets: Turrets {
			//class CommanderOptics: CommanderOptics {};

			class MainTurret: MainTurret {
				maxelev = 74;
				minelev = -5;
				maxhorizontalrotspeed = 0.61;
				maxverticalrotspeed = 0.104;

				gunnerForceOptics = 1;

				turretInfoType = "acr_a3_RscWeaponBMP2_FCS";
				class ViewOptics: ViewOptics
				{
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.101; minFov=0.102; maxFov=0.102;
					visionMode[] = {"Normal"};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initFov = 0.7/5.6;
						gunneropticseffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
						//gunneropticsmodel = "\acr_a3\acr_a3_vehicles\bmp2\2Dscope_BMPgun";
						gunnerOpticsModel = "\acr_a3\acr_a3_vehicles\bmp2\bmp2_noreticle";
						gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
					};
					class Periscope: ViewOptics
					{
						initFov = 0.7;
						minFov = 0.7;
						maxFov =0.7;
						gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
					};
					class NightVision: Wide
					{
						initFov = 0.7/5;
						gunnerOpticsModel = "\acr_a3\acr_a3_vehicles\bmp2\bmp2_night_sight";
						visionMode[] = {"NVG"};
					};

				};
				weapons[]={ACR_A3_2A24,ACR_A3_PKT,acr_a3_AT5_Launcher};
				magazines[]={
					ACR_A3_30mm_2A42_HE,
					ACR_A3_30mm_2A42_AP,
					ACR_A3_8Rnd_AT5,
					ACR_A3_250Rnd_762x54_PKT,
					ACR_A3_250Rnd_762x54_PKT,
					ACR_A3_250Rnd_762x54_PKT,
					ACR_A3_250Rnd_762x54_PKT,
					ACR_A3_250Rnd_762x54_PKT,
					ACR_A3_250Rnd_762x54_PKT,
					ACR_A3_250Rnd_762x54_PKT,
					ACR_A3_250Rnd_762x54_PKT
				};

				class Turrets: Turrets {
					class CommanderOptics: CommanderOptics {
						commanding=2;
						gunnerForceOptics = 1;
						gunbeg = "gun_muzzle";
						gunend = "gun_chamber";
						magazines[] = {"SmokeLauncherMag"};
						weapons[] = {"SmokeLauncher"};
					};
				};
			};

		};

		smokeLauncherGrenadeCount = 6;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 100;

		class Damage {
			mat[] = {
				"acr_a3\acr_a3_vehicles\bmp2\data\BMP2_01.rvmat",
				"acr_a3\acr_a3_vehicles\bmp2\data\BMP2_01_damage.rvmat",
				"acr_a3\acr_a3_vehicles\bmp2\data\BMP2_01_destruct.rvmat",

				"acr_a3\acr_a3_vehicles\bmp2\data\BMP2_02.rvmat",
				"acr_a3\acr_a3_vehicles\bmp2\data\BMP2_02_damage.rvmat",
				"acr_a3\acr_a3_vehicles\bmp2\data\BMP2_02_destruct.rvmat",

				"acr_a3\acr_a3_vehicles\bmp2\data\bmp2_pasy.rvmat",
				"acr_a3\acr_a3_vehicles\bmp2\data\bmp2_pasy_damage.rvmat",
				"acr_a3\acr_a3_vehicles\bmp2\data\bmp2_pasy_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
			tex[] = {};
		};

		#include "pip2.hpp"
	};

	class acr_a3_bmp2: acr_a3_BMP2_base {
		scope = 2;
		side = 1;
		faction="ACR";
		accuracy = 1000;
		typicalCargo[] = {"ACR_Neozbrojeny"};
		crew = "ACR_Neozbrojeny";
		displayName = "BMP-2";
	};

};