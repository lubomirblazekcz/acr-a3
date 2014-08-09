////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.55
//Sat Jul 26 23:13:09 2014 : Source 'file' date Sat Jul 26 23:13:09 2014
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

//Class P:\acr_a3_weapons\Sa58\config.bin{
class CfgPatches
{
	class acr_a3_Sa58
	{
		units[] = {};
		weapons[] = {"acr_a3_Sa58P","acr_a3_Sa58P_camo","acr_a3_Sa58V","acr_a3_Sa58V_camo","acr_a3_Sa58RIS1","acr_a3_Sa58RIS1_camo","acr_a3_Sa58RIS2","acr_a3_Sa58RIS2_camo"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","asdg_jointrails"};
		magazines[] = {"acr_a3_30Rnd_Sa58_mag","acr_a3_30Rnd_Sa58_mag_TracerG","acr_a3_30Rnd_Sa58_mag_TracerR","acr_a3_30Rnd_Sa58_mag_TracerY"};
		ammo[] = {"B_762x39mm_KLT","B_762x39_TRACER_R_KLT","B_762x39_TRACER_Y_KLT"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
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
	class acr_a3_30Rnd_Sa58_mag: CA_Magazine
	{
		scope = 2;
		displayName = "7.62x39mm 30rnd Sa vz. 58 Mag";
		picture = "\acr_a3_weapons\Sa58\data\UI\m_sa58_ca.paa";
		ammo = "B_762x39mm_KLT";
		count = 30;
		initSpeed = 705;
		tracersEvery = 0;
		lastRoundsTracer = 4;
		descriptionShort = "7.62x39mm Sa 58 magazine";
	};
	class acr_a3_30Rnd_Sa58_mag_TracerG: acr_a3_30Rnd_Sa58_mag
	{
		tracersEvery = 1;
		lastRoundsTracer = 30;
		displayName = "7.62x39mm 30rnd Sa vz. 58 Tracer G Mag";
		picture = "\acr_a3_weapons\Sa58\data\UI\m_sa58_green_ca.paa";
		descriptionShort = "7.62x39mm 30rnd Sa vz. 58 Tracer G magazine";
		displaynameshort = "Tracers";
	};
	class acr_a3_30Rnd_Sa58_mag_TracerR: acr_a3_30Rnd_Sa58_mag_TracerG
	{
		displayName = "7.62x39mm 30rnd Sa vz. 58 Tracer R Mag";
		picture = "\acr_a3_weapons\Sa58\data\UI\m_sa58_red_ca.paa";
		descriptionShort = "7.62x39mm 30rnd Sa vz. 58 Tracer R magazine";
		ammo = "B_762x39_TRACER_R_KLT";
	};
	class acr_a3_30Rnd_Sa58_mag_TracerY: acr_a3_30Rnd_Sa58_mag_TracerG
	{
		displayName = "7.62x39mm 30rnd Sa vz. 58 Tracer Y Mag";
		picture = "\acr_a3_weapons\Sa58\data\UI\m_sa58_yellow_ca.paa";
		descriptionShort = "7.62x39mm 30rnd Sa vz. 58 Tracer Y magazine";
		ammo = "B_762x39_TRACER_Y_KLT";
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_762x39mm_KLT: BulletBase
	{
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 5;
		audibleFire = 8;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 705;
		caliber = 1.0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.0;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		airFriction = -0.000296;
		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
	class B_762x39_TRACER_R_KLT: B_762x39mm_KLT
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_762x39_TRACER_Y_KLT: B_762x39mm_KLT
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class acr_a3_Sa58_base: Rifle_Base_F
	{
		magazines[] = {"acr_a3_30Rnd_Sa58_mag_TracerG","acr_a3_30Rnd_Sa58_mag_TracerR","acr_a3_30Rnd_Sa58_mag_TracerY","acr_a3_30Rnd_Sa58_mag"};
		reloadAction = "HLC_GestureReloadAK";
		discreteDistance[] = {100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex = 3;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "RifleAssaultCloud";
			};
		};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		descriptionShort = "Samočinný automat vz. 58";
		handAnim[] = {"OFP2_ManSkeleton","acr_a3_weapons\Sa58\Anims\AK.rtm"};
		dexterity = 1.8;
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_1",0.562341,1,20};
		selectionFireAnim = "muzzleFlash";
		modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.122018,1.2,30};
				closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.122018,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\EBR\EBR_st_4",1.0,1,1200};
				begin2[] = {"A3\sounds_f\weapons\EBR\EBR_st_5",1.0,1,1200};
				begin3[] = {"A3\sounds_f\weapons\EBR\EBR_st_6",1.0,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.075;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.00087;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",1.122018,1.2,30};
				closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",1.122018,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\EBR\EBR_st_4",1.0,1,1200};
				begin2[] = {"A3\sounds_f\weapons\EBR\EBR_st_5",1.0,1,1200};
				begin3[] = {"A3\sounds_f\weapons\EBR\EBR_st_6",1.0,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.075;
			recoil = "recoil_auto_ebr";
			recoilProne = "recoil_auto_prone_ebr";
			dispersion = 0.00087;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
		};
		class single_close_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.01;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.05;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
		};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 2;
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr",1.0,1,10};
	};
	class acr_a3_Sa58P: acr_a3_Sa58_base
	{
		scope = 2;
		displayName = "vz. 58 P";
		model = "acr_a3_weapons\Sa58\sa58p.p3d";
		picture = "\acr_a3_weapons\Sa58\data\UI\sa58p_ca.paa";
		weaponInfoType = "RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_B"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
		};
		sections[] = {"camo"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"acr_a3_weapons\Sa58\data\sa58_co.paa"};
	};
	class acr_a3_Sa58P_camo: acr_a3_Sa58P
	{
		scope = 2;
		displayName = "vz. 58 P Desert";
		sections[] = {"camo"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"acr_a3_weapons\Sa58\data\sa58camo_co.paa"};
	};
	class acr_a3_Sa58V: acr_a3_Sa58P
	{
		displayName = "vz. 58 V";
		model = "acr_a3_weapons\Sa58\sa58V.p3d";
		picture = "\acr_a3_weapons\Sa58\data\UI\sa58v_ca.paa";
		sections[] = {"camo"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"acr_a3_weapons\Sa58\data\sa58_co.paa"};
	};
	class acr_a3_Sa58V_camo: acr_a3_Sa58V
	{
		displayName = "vz. 58 V Desert";
		picture = "\acr_a3_weapons\Sa58\data\UI\sa58v_ca.paa";
		sections[] = {"camo"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"acr_a3_weapons\Sa58\data\sa58camo_co.paa"};
	};
	class acr_a3_Sa58RIS1: acr_a3_Sa58_base
	{
		scope = 2;
		displayName = "vz. 58 RIS";
		model = "acr_a3_weapons\Sa58\sa58ris.p3d";
		handAnim[] = {"OFP2_ManSkeleton","acr_a3_weapons\Sa58\Anims\Mk48.rtm"};
		picture = "\acr_a3_weapons\Sa58\data\UI\sa58ref_ca.paa";
		weaponInfoType = "RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			allowedSlots[] = {901};
			class asdg_FrontSideRail_acr_a3_Sa58RIS1: asdg_FrontSideRail{};
			class asdg_OpticRail_acr_a3_Sa58RIS1: asdg_OpticRail1913_short{};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_B"};
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
			};
		};
		sections[] = {"camo","RIS"};
		hiddenSelections[] = {"camo","RIS"};
		hiddenSelectionsTextures[] = {"acr_a3_weapons\Sa58\data\sa58_co.paa","acr_a3_weapons\Sa58\data\sa58sfcamo1_co.paa"};
	};
	class acr_a3_Sa58RIS1_camo: acr_a3_Sa58RIS1
	{
		displayName = "vz. 58 RIS Desert";
		picture = "\acr_a3_weapons\Sa58\data\UI\sa58ref_ca.paa";
		sections[] = {"camo","RIS"};
		hiddenSelections[] = {"camo","RIS"};
		hiddenSelectionsTextures[] = {"acr_a3_weapons\Sa58\data\sa58camo_co.paa","acr_a3_weapons\Sa58\data\sa58sfcamo_co.paa"};
	};
	class acr_a3_Sa58RIS2: acr_a3_Sa58RIS1
	{
		displayName = "vz. 58 RIS2";
		model = "acr_a3_weapons\Sa58\sa58ris_back.p3d";
		picture = "\acr_a3_weapons\Sa58\data\UI\sa58ref_ca.paa";
		sections[] = {"camo","RIS"};
		hiddenSelections[] = {"camo","RIS"};
		hiddenSelectionsTextures[] = {"acr_a3_weapons\Sa58\data\sa58_co.paa","acr_a3_weapons\Sa58\data\sa58sfcamo1_co.paa"};
	};
	class acr_a3_Sa58RIS2_camo: acr_a3_Sa58RIS2
	{
		displayName = "vz. 58 RIS2 Desert";
		sections[] = {"camo","RIS"};
		hiddenSelections[] = {"camo","RIS"};
		hiddenSelectionsTextures[] = {"acr_a3_weapons\Sa58\data\sa58camo_co.paa","acr_a3_weapons\Sa58\data\sa58sfcamo_co.paa"};
	};
};
//};
