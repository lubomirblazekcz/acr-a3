////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.55
//Sat Jul 26 23:19:29 2014 : Source 'file' date Sat Jul 26 23:19:29 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=5
enum {
	StabilizedInAxesNone = 0,
	StabilizedInAxisX = 1,
	StabilizedInAxisY = 2,
	StabilizedInAxesBoth = 3,
	StabilizedInAxesXYZ = 4
};

//Class P:\acr_a3_weapons\CZ750\config.bin{
class CfgPatches
{
	class acr_a3_CZ750_srifle
	{
		units[] = {};
		weapons[] = {"acr_a3_CZ750"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","asdg_jointrails"};
		magazines[] = {"acr_a3_10Rnd_cz750_mag","acr_a3_10Rnd_cz750_mag_Tracer"};
		ammo[] = {};
	};
};
class Mode_SemiAuto;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class acr_a3_10Rnd_cz750_mag: CA_Magazine
	{
		scope = 2;
		displayName = "7.62x51mm 10rnd CZ 750 Mag";
		picture = "\acr_a3_weapons\CZ750\data\UI\cz750_mag_ca.paa";
		ammo = "B_762x51_Ball";
		count = 10;
		initSpeed = 790;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "7.62x51mm CZ750 magazine";
	};
	class acr_a3_10Rnd_cz750_mag_Tracer: acr_a3_10Rnd_cz750_mag
	{
		tracersEvery = 1;
		lastRoundsTracer = 10;
		displayName = "7.62x51mm 10rnd CZ 750 Tracer Mag";
		picture = "\acr_a3_weapons\CZ750\data\UI\cz750_tracer_mag_ca.paa";
		descriptionShort = "7.62x51mm CZ750 Tracer magazine";
		displaynameshort = "Tracers";
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class acr_a3_CZ750_base: Rifle_Long_Base_F
	{
		scope = 0;
		magazines[] = {"acr_a3_10Rnd_CZ750_mag_Tracer","acr_a3_10Rnd_CZ750_mag"};
		reloadAction = "GestureReloadLRR";
		maxZeroing = 2000;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.891251,1,25};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.891251,1,25};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.891251,1,25};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.891251,1,25};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.794328,1,25};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.794328,1,25};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.794328,1,25};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.794328,1,25};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.707946,1,25};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.707946,1,25};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.707946,1,25};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.707946,1,25};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
		descriptionShort = "CZ 750 S1 M1 Sniper rifle";
		handAnim[] = {"OFP2_ManSkeleton","acr_a3_weapons\CZ750\Anims\M24.rtm"};
		dexterity = 1.2;
		selectionFireAnim = "muzzleFlash";
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00018;
			soundContinuous = 0;
			reloadTime = 1;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",1.778279,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",1.778279,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\M320\M320_st_1",1.0,1,1200};
				begin2[] = {"A3\sounds_f\weapons\M320\M320_st_2",1.0,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 150;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 700;
			requiredOpticType = 1;
		};
		class medium_optic2: Single
		{
			showToPlayer = 0;
			minRange = 250;
			minRangeProbab = 0.1;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 6.0;
			aiRateOfFireDistance = 1000;
			requiredOpticType = 2;
		};
		class far_optic2: far_optic1
		{
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 1050;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 2000;
			requiredOpticType = 2;
		};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\M320\M320_reload",1.0,1,10};
		drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.501187,1,20};
	};
	class acr_a3_CZ750: acr_a3_CZ750_base
	{
		scope = 2;
		displayName = "CZ 750 S1 M1";
		model = "acr_a3_weapons\CZ750\CZ750.p3d";
		picture = "\acr_a3_weapons\CZ750\data\UI\cz750_ca.paa";
		weaponInfoType = "RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo{};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class asdg_OpticRail_acr_a3_CZ750RIS1: asdg_OpticRail1913_short{};
		};
	};
};
//};
