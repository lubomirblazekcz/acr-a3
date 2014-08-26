////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.55
//Sat Jul 26 23:12:19 2014 : Source 'file' date Sat Jul 26 23:12:19 2014
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

//Class P:\acr_a3_weapons\CZ805\config.bin{
class CfgPatches
{
	class acr_a3_CZ805
	{
		units[] = {};
		weapons[] = {"acr_a3_CZ805_GL","acr_a3_CZ805_A1","acr_a3_CZ805_A2","acr_a3_CZ805_A2_Holo_Laser","acr_a3_CZ805_A1_Holo_Laser"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","asdg_jointrails"};
		magazines[] = {};
		ammo[] = {};
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
class CfgWeapons
{
	class Rifle;
	class UGL_F;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class acr_a3_CZ805_Base: Rifle_Base_F
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		reloadAction = "GestureReloadMX";
		discreteDistanceInitIndex = 3;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				effectName = "RifleAssaultCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_M"};
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class asdg_FrontSideRail_acr_a3_Sa58RIS1: asdg_FrontSideRail{};
			class asdg_OpticRail_acr_a3_Sa58RIS1: asdg_OpticRail1913_short{};
		};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		handAnim[] = {"OFP2_ManSkeleton","acr_a3_weapons\CZ805\Anims\CZ805.rtm"};
		dexterity = 1.7;
		selectionFireAnim = "muzzleFlash";
		modes[] = {"Single","Burst","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.562341,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.562341,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\mk20\mk20-st-full-1",1.0,1,1200};
				begin2[] = {"A3\sounds_f\weapons\mk20\mk20-st-full-2",1.0,1,1200};
				begin3[] = {"A3\sounds_f\weapons\mk20\mk20-st-full-3",1.0,1,1200};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1.0,1,240};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1.0,1,240};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1.0,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.078947;
			dispersion = 0.0011;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.562341,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.562341,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\mk20\mk20-st-full-1",1.0,1,1200};
				begin2[] = {"A3\sounds_f\weapons\mk20\mk20-st-full-2",1.0,1,1200};
				begin3[] = {"A3\sounds_f\weapons\mk20\mk20-st-full-3",1.0,1,1200};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1.0,1,240};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1.0,1,240};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1.0,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.078947;
			dispersion = 0.0011;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.562341,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.562341,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\mk20\mk20-st-full-1",1.0,1,1200};
				begin2[] = {"A3\sounds_f\weapons\mk20\mk20-st-full-2",1.0,1,1200};
				begin3[] = {"A3\sounds_f\weapons\mk20\mk20-st-full-3",1.0,1,1200};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1.0,1,240};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1.0,1,240};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1.0,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.078947;
			dispersion = 0.0011;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 700;
		};
		class acr_a3_CZ_805_G1: UGL_F
		{
			displayName = "CZ 805 G1";
			descriptionShort = "CZ 805 G1 Grenade launcher";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			cameraDir = "GL_look";
			discreteDistance[] = {100, 200, 300, 400};
//			discreteDistance[] = {50,100,150,175,200,225,250,275,300,325,350,375,400};
			discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"};
			discreteDistanceInitIndex = 1;
		};
		aiDispersionCoefY = 6.0;
		aiDispersionCoefX = 4.0;
		drySound[] = {"A3\sounds_f\weapons\Other\dry_1","db-5",1,10};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX","db-8",1,30};
	};
	class acr_a3_CZ805_A2: acr_a3_CZ805_Base
	{
		scope = 2;
		displayName = "CZ 805 A2";
		model = "acr_a3_weapons\CZ805\CZ_805_A2.p3d";
		descriptionShort = "CZ 805 A2 BREN Carabine";
		picture = "\acr_a3_weapons\CZ805\data\UI\gear_cz805_a2_x_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 4;
		};
	};
	class acr_a3_CZ805_A1: acr_a3_CZ805_Base
	{
		scope = 2;
		displayName = "CZ 805 A1";
		model = "acr_a3_weapons\CZ805\CZ_805_A1.p3d";
		descriptionShort = "CZ 805 A1 BREN";
		picture = "\acr_a3_weapons\CZ805\data\UI\gear_cz805_a1_x_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 4;
		};
	};
	class acr_a3_CZ805_GL: acr_a3_CZ805_Base
	{
		scope = 2;
		displayName = "CZ 805 A1 GL";
		model = "acr_a3_weapons\CZ805\CZ_805_GL.p3d";
		handAnim[] = {"OFP2_ManSkeleton","acr_a3_weapons\CZ805\Anims\CZ805GL.rtm"};
		descriptionShort = "CZ 805 A1 GL BREN";
		picture = "\acr_a3_weapons\CZ805\data\UI\gear_cz805_a1gl_x_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		muzzles[] = {"this","acr_a3_CZ_805_G1"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 4;
		};
	};
	class acr_a3_CZ805_A2_Holo_Laser: acr_a3_CZ805_A2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class acr_a3_CZ805_A1_Holo_Laser: acr_a3_CZ805_A1
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
};
//};
