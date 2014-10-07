#include "\Ca\Wheeled_ACR\basicDefines.hpp"
#include "\ca\Wheeled_ACR\transportGear.hpp"
#include "\Ca\CrewAnimations.hpp"

class DefaultEventhandlers;

class CfgPatches
{
	class CaWheeled_ACR_RM70
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {CAWheeled_E};
	};
};

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}

#define DefaultWestMagazines(x) \
	class TransportMagazines \
	{ \
		mag_xx(30Rnd_556x45_Stanag,30*x); \
		mag_xx(200Rnd_556x45_M249,5*x); \
		mag_xx(HandGrenadeTimed,10*x); \
		mag_xx(5Rnd_762x51_M24,10*x); \
		mag_xx(15rnd_9x19_M9,15*x); \
		mag_xx(10Rnd_127x99_m107,10*x); \
		mag_xx(M136,3*x); \
		mag_xx(1Rnd_HE_M203,3*x); \
		mag_xx(FlareWhite_M203,3*x); \
		mag_xx(FlareGreen_M203,3*x); \
		mag_xx(FlareRed_M203,3*x); \
		mag_xx(FlareYellow_M203,3*x); \
		mag_xx(SmokeShell,3*x); \
		mag_xx(SmokeShellRed,3*x); \
		mag_xx(SmokeShellGreen,3*x); \
	};
#define DefaultEastMagazines(x) \
	class TransportMagazines \
	{ \
		mag_xx(30Rnd_545x39_AK,30*x); \
		mag_xx(100Rnd_762x54_PK,5*x); \
		mag_xx(8Rnd_9x18_Makarov,20*x); \
		mag_xx(HandGrenade,10*x); \
		mag_xx(10Rnd_762x54_SVD,10*x); \
		mag_xx(5Rnd_127x108_KSVK,10*x); \
		mag_xx(PG7VR,3*x); \
		mag_xx(1Rnd_HE_GP25,3*x); \
		mag_xx(FlareWhite_GP25,3*x); \
		mag_xx(FlareGreen_GP25,3*x); \
		mag_xx(FlareRed_GP25,3*x); \
		mag_xx(FlareYellow_GP25,3*x); \
		mag_xx(SmokeShell,3*x); \
		mag_xx(SmokeShellRed,3*x); \
		mag_xx(SmokeShellGreen,3*x); \
	};

class WeaponCloudsMGun;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;

			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
	};
	class Truck: Car{};
	class Ural_Base_withTurret: Truck{};
	class GRAD_Base: Ural_Base_withTurret{};
/*
	- Podivat se na stary BM21 grad, jak zabranuje otaceni veze s raketami behem jizdy, a udelat to same i pro RM-70
*/
	class RM70_ACR: GRAD_Base
	{
		expansion = 3;
		scope = public;
		side = TWest;
		faction = BIS_CZ;
		vehicleClass = CarW;
		displayName = $STR_ACR_DN_RM70;
		picture = "\Ca\Wheeled_ACR\Data\UI\Picture_RM70_CA";
		icon = "\Ca\Wheeled_ACR\Data\UI\Icon_RM70_CA";
		model = "\Ca\Wheeled_ACR\RM70\rm70";
		class Library {libTextDesc = $STR_ACR_LIB_RM70;};

		maxSpeed = 85;
		enableGPS = true;

		class TransportWeapons
		{
			addACRWeapons(1)
		};
		
		class TransportMagazines
		{
			addACRMagazines(1)
		};		

		class NewTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerName = $STR_POSITION_GUNNER;
				proxyType = CPGunner;
				proxyIndex = 1;
				gunnerAction = "UAZ_Cargo01";
				gunnerInAction = "UAZ_Cargo01";
				gunnerGetInAction = GetInHigh;
				gunnerGetOutAction = GetOutHigh;

				primaryGunner = 1;
				primaryObserver = 0;
				gunnerForceOptics = 1;

				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunBeg = "usti_hlavne2";
				gunEnd = "konec_hlavne2";
				minElev=0; maxElev=+85;initElev=6;
				weapons[]={GRAD_ACR};
				magazines[]={40Rnd_GRAD_ACR};
				gunnerOpticsModel = "\ca\weapons\2Dscope_RUAA5";
				stabilizedInAxes = StabilizedInAxesNone;
				class ViewOptics
				{
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.093; minFov=0.093; maxFov=0.093; // 5x zoom
				};
				lockWhenVehicleSpeed  = 5; // m/s
				class Turrets
				{
					class UkTurret: NewTurret
					{
						gunnerName = $STR_POSITION_FRONTGUNNER;
						proxyType = CPGunner;
						proxyIndex = 2;
						gunnerAction = "datsun_Gunner01";
						gunnerInAction = "datsun_Gunner01";
						gunnerGetInAction = GetInHigh;
						gunnerGetOutAction = GetOutHigh;
						castGunnerShadow = 1;
						viewGunnerInExternal = true;
						outGunnerMayFire = true;
						inGunnerMayFire = false;
						LODTurnedOut = 1000;

						primaryGunner = 0;
						primaryObserver = 1;

						body = "OtocVez";
						gun = "OtocHlaven";
						animationSourceBody = "OtocVez";
						animationSourceGun = "OtocHlaven";
						animationSourceHatch = "HatchCommander";

						gunnerOpticsModel = \ca\Weapons\optika_empty;
						gunnerForceOptics = 0;
						gunnerOutOpticsModel = \ca\Weapons\optika_empty;
						memoryPointGunnerOptics= "eye";
						memoryPointsGetInGunner= "pos commander";
						memoryPointsGetInGunnerDir= "pos commander dir";

						minElev=-40; maxElev=+10; initElev=0;
						minTurn=-360; maxTurn=+360; initTurn=0;
						stabilizedInAxes = StabilizedInAxesNone;

						weapons[] = {UK59_ACR};
						magazines[] = {100Rnd_762x54_PK,100Rnd_762x54_PK,100Rnd_762x54_PK};

						startEngine = 0;
						soundServo[]={};
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim     {source="reload";         weapon="UK59_ACR";};
			class ReloadMagazine {source="reloadmagazine"; weapon="UK59_ACR";};
			class Revolving      {source="revolving";      weapon="UK59_ACR";};
		};
		crew = CZ_Soldier805_DES_ACR;
		typicalCargo[] = {CZ_Soldier805_DES_ACR}; // Sleeper: check
		cargoAction[] = {"UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo02","UAZ_Cargo01","UAZ_Cargo02"}; // Sleeper: check
// Sleeper: vlozeni v editoru ma jen driver a raketak
		transportSoldier = 1; // Sleeper: check
		accuracy = 0.30;
		armor = 50;

		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {
			"\ca\wheeled_acr\RM70\data\RM70body1_co",
			"\ca\wheeled_acr\RM70\data\RM70body2_co",
			"\ca\wheeled_acr\RM70\data\RM70body3_co"
		};
		dammageHalf[] = {"\ca\wheeled_acr\RM70\data\RM70alfa_ca.paa","\ca\wheeled_acr\RM70\Data\RM70alfa_dam_ca.paa"};
		dammageFull[] = {"\ca\wheeled_acr\RM70\data\RM70alfa_ca.paa","\ca\wheeled_acr\RM70\Data\RM70alfa_des_ca.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"ca\wheeled_acr\RM70\data\RM70alfa.rvmat",
				"ca\wheeled_acr\RM70\data\RM70alfa_damage.rvmat",
				"ca\wheeled_acr\RM70\data\RM70alfa_destruct.rvmat",

				"ca\wheeled_acr\RM70\data\RM70body1.rvmat",
				"ca\wheeled_acr\RM70\data\RM70body1_damage.rvmat",
				"ca\wheeled_acr\RM70\data\RM70body1_destruct.rvmat",

				"ca\wheeled_acr\RM70\data\RM70body2.rvmat",
				"ca\wheeled_acr\RM70\data\RM70body2_damage.rvmat",
				"ca\wheeled_acr\RM70\data\RM70body2_destruct.rvmat",

				"ca\wheeled_acr\RM70\data\RM70body3.rvmat",
				"ca\wheeled_acr\RM70\data\RM70body3_damage.rvmat",
				"ca\wheeled_acr\RM70\data\RM70body3_destruct.rvmat",

				"ca\wheeled_acr\RM70\data\RM70int.rvmat",
				"ca\wheeled_acr\RM70\data\RM70int_damage.rvmat",
				"ca\wheeled_acr\RM70\data\RM70int_destruct.rvmat",

				"ca\wheeled_acr\RM70\data\RM70uc.rvmat",
				"ca\wheeled_acr\RM70\data\RM70uc_damage.rvmat",
				"ca\wheeled_acr\RM70\data\RM70uc_destruct.rvmat"
			};
		};

		class HitPoints: HitPoints
		{
			#define WheelArmor 0.04
			class HitLFWheel:  HitLFWheel  {armor=WheelArmor;};
			class HitLBWheel:  HitLBWheel  {armor=WheelArmor;};
			class HitLMWheel:  HitLMWheel  {armor=WheelArmor;};
			class HitLF2Wheel: HitLF2Wheel {armor=WheelArmor;};

			class HitRFWheel:  HitRFWheel  {armor=WheelArmor;};
			class HitRBWheel:  HitRBWheel  {armor=WheelArmor;};
			class HitRMWheel:  HitRMWheel  {armor=WheelArmor;};
			class HitRF2Wheel: HitRF2Wheel {armor=WheelArmor;};
		};

		class Reflectors
		{
			class SearchLight
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "S svetlo";
				direction = "konec S svetla";
				hitpoint = "S svetlo";
				selection = "S svetlo";
				size = 0.4;
				brightness = 0.6;
			};
			class Left
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "l svetlo";
				direction = "konec l svetla";
				hitpoint = "l svetlo";
				selection = "L svetlo";
				size = 0.35;
				brightness = 0.3;
			};
			class Left_2: Left {position = "l svetlo 2"; direction = "konec l svetla 2"; hitpoint = "l svetlo 2"; selection = "L svetlo 2";};
			class Left_3: Left {position = "l svetlo 3"; direction = "konec l svetla 3"; hitpoint = "l svetlo 3"; selection = "L svetlo 3";};
			class Right: Left {position = "p svetlo"; direction = "konec p svetla"; hitpoint = "p svetlo"; selection = "P svetlo";};
			class Right_2: Left {position = "p svetlo 2"; direction = "konec p svetla 2"; hitpoint = "p svetlo 2"; selection = "P svetlo 2";};
			class Right_3: Left {position = "p svetlo 3"; direction = "konec p svetla 3"; hitpoint = "p svetlo 3"; selection = "P svetlo 3";};
		};
	};
};
