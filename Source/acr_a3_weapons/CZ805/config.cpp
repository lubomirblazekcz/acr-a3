#include "basicdefines_A3.hpp"
class CfgPatches
{
	class ACR_A3_Weapons_CZ805
	{
		units[]={};
		weapons[]={"ACR_A3_CZ805_GL", "ACR_A3_CZ805_A1", "ACR_A3_CZ805_A2", "ACR_A3_CZ805_A2_Holo_Laser"};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F","asdg_jointrails"};
	};
};
/// All firemodes, to be sure
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;

/// Weapon slots
class SlotInfo;
class CowsSlot;
class PointerSlot;

class CfgWeapons
{
	class Rifle;
	class UGL_F ;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class ACR_A3_CZ805_Base: Rifle_Base_F /// Just basic values common for all testing rifle variants
	{
		magazines[] =  {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Yellow"}; /// original custom made magazines
		reloadAction = "GestureReloadMX"; /// MX hand animation actually fits this rifle well
		discreteDistanceInitIndex = 3; /// Ironsight zeroing is the lowest value by default

		// Size of recoil sway of the cursor
		maxRecoilSway=0.0125;
        // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
        swayDecaySpeed=1.25;

		class GunParticles : GunParticles
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
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] =
				{
					"muzzle_snds_M"
				};
			};

			class CowsSlot: CowsSlot 
			{
			};
			class PointerSlot: PointerSlot 
			{
			};
            class asdg_FrontSideRail_KLT_Sa58RIS1: asdg_FrontSideRail {};
            class asdg_OpticRail_KLT_Sa58RIS1: asdg_OpticRail1913_short {};			
		};
		
/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;

		distanceZoomMin = 300;
		distanceZoomMax = 300;
/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////

		handAnim[] = {"OFP2_ManSkeleton", "\acr_a3_weapons\CZ805\data\anims\CZ805.rtm"}; /// MX hand animation actually fits this rifle well
		dexterity = 1.7;
		selectionFireAnim = "muzzleFlash";
		modes[] = {Single, Burst, FullAuto, fullauto_medium, single_medium_optics1, single_far_optics2}; /// Includes fire modes for AI

////////////////////////////////////////////////////// NO OPTICS ///////////////////////////////////////////////////////////		
		
		class Single : Mode_SemiAuto
		{
			sounds[] = {
					"StandardSound", "SilencedSound"
			};

			class BaseSoundModeType 
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {
						"A3\sounds_f\weapons\closure\closure_rifle_2", 0.562341, 1, 10
				};
				closure2[] = {
						"A3\sounds_f\weapons\closure\closure_rifle_3", 0.562341, 1, 10
				};
				soundClosure[] = {
						"closure1", 0.500000, "closure2", 0.500000
				};
			};

			class StandardSound : BaseSoundModeType
			{
				begin1[] = {
						"A3\sounds_f\weapons\mk20\mk20-st-full-1", 1.000000, 1, 1200
				};
				begin2[] = {
						"A3\sounds_f\weapons\mk20\mk20-st-full-2", 1.000000, 1, 1200
				};
				begin3[] = {
						"A3\sounds_f\weapons\mk20\mk20-st-full-3", 1.000000, 1, 1200
				};
				soundBegin[] = {
						"begin1", 0.333000, "begin2", 0.333000, "begin3", 0.333000
				};
			};

			class SilencedSound : BaseSoundModeType
			{
				begin1[] = {
						"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 240
				};
				begin2[] = {
						"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 240
				};
				begin3[] = {
						"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 240
				};
				soundBegin[] = {
						"begin1", 0.333000, "begin2", 0.333000, "begin3", 0.333000
				};
			};
			reloadTime = 0.078947;
			dispersion = 0.001100;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.500000;
			midRange = 150;
			midRangeProbab = 0.700000;
			maxRange = 300;
			maxRangeProbab = 0.200000;
		};

		class Burst : Mode_Burst
		{
			sounds[] = {
					"StandardSound", "SilencedSound"
			};

			class BaseSoundModeType 
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {
						"A3\sounds_f\weapons\closure\closure_rifle_2", 0.562341, 1, 10
				};
				closure2[] = {
						"A3\sounds_f\weapons\closure\closure_rifle_3", 0.562341, 1, 10
				};
				soundClosure[] = {
						"closure1", 0.500000, "closure2", 0.500000
				};
			};

			class StandardSound : BaseSoundModeType
			{
				begin1[] = {
						"A3\sounds_f\weapons\mk20\mk20-st-full-1", 1.000000, 1, 1200
				};
				begin2[] = {
						"A3\sounds_f\weapons\mk20\mk20-st-full-2", 1.000000, 1, 1200
				};
				begin3[] = {
						"A3\sounds_f\weapons\mk20\mk20-st-full-3", 1.000000, 1, 1200
				};
				soundBegin[] = {
						"begin1", 0.333000, "begin2", 0.333000, "begin3", 0.333000
				};
			};

			class SilencedSound : BaseSoundModeType
			{
				begin1[] = {
						"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 240
				};
				begin2[] = {
						"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 240
				};
				begin3[] = {
						"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 240
				};
				soundBegin[] = {
						"begin1", 0.333000, "begin2", 0.333000, "begin3", 0.333000
				};
			};
			reloadTime = 0.078947;
			dispersion = 0.001100;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.900000;
			midRange = 15;
			midRangeProbab = 0.700000;
			maxRange = 30;
			maxRangeProbab = 0.100000;
			aiRateOfFire = 0.000001;
		};		

		class FullAuto : Mode_FullAuto
		{
			sounds[] = {
					"StandardSound", "SilencedSound"
			};

			class BaseSoundModeType 
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {
						"A3\sounds_f\weapons\closure\closure_rifle_2", 0.562341, 1, 10
				};
				closure2[] = {
						"A3\sounds_f\weapons\closure\closure_rifle_3", 0.562341, 1, 10
				};
				soundClosure[] = {
						"closure1", 0.500000, "closure2", 0.500000
				};
			};

			class StandardSound : BaseSoundModeType
			{
				begin1[] = {
						"A3\sounds_f\weapons\mk20\mk20-st-full-1", 1.000000, 1, 1200
				};
				begin2[] = {
						"A3\sounds_f\weapons\mk20\mk20-st-full-2", 1.000000, 1, 1200
				};
				begin3[] = {
						"A3\sounds_f\weapons\mk20\mk20-st-full-3", 1.000000, 1, 1200
				};
				soundBegin[] = {
						"begin1", 0.333000, "begin2", 0.333000, "begin3", 0.333000
				};
			};

			class SilencedSound : BaseSoundModeType
			{
				begin1[] = {
						"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 240
				};
				begin2[] = {
						"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 240
				};
				begin3[] = {
						"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 240
				};
				soundBegin[] = {
						"begin1", 0.333000, "begin2", 0.333000, "begin3", 0.333000
				};
			};
			reloadTime = 0.078947;
			dispersion = 0.001100;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.900000;
			midRange = 15;
			midRangeProbab = 0.700000;
			maxRange = 30;
			maxRangeProbab = 0.100000;
			aiRateOfFire = 0.000001;
		};

		class fullauto_medium : FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.500000;
			midRange = 75;
			midRangeProbab = 0.700000;
			maxRange = 100;
			maxRangeProbab = 0.050000;
			aiRateOfFire = 2.000000;
			aiRateOfFireDistance = 200;
		};

		class single_medium_optics1 : Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 5;
			minRangeProbab = 0.200000;
			midRange = 350;
			midRangeProbab = 0.700000;
			maxRange = 500;
			maxRangeProbab = 0.300000;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};

		class single_far_optics2 : single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.200000;
			midRange = 550;
			midRangeProbab = 0.700000;
			maxRange = 700;
			maxRangeProbab = 0.050000;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 700;
		};

	class KLT_CZ_805_G1 : UGL_F
		{
			displayName = "CZ 805 G1";
			descriptionShort = "CZ 805 G1 Grenade launcher";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazines[] = {
					"1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"
			};
			cameraDir = "GL_look";
			discreteDistance[] = {
					50, 100, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400
			};
			discreteDistanceCameraPoint[] = {
					"GL_eye", "GL_eye", "GL_eye", "GL_eye", "GL_eye"
			};
			discreteDistanceInitIndex = 1;
		};
		aiDispersionCoefY=6.0; /// AI should have some degree of greater dispersion for initial shoots
		aiDispersionCoefX=4.0; /// AI should have some degree of greater dispersion for initial shoots
		drySound[]={"A3\sounds_f\weapons\Other\dry_1", db-5, 1, 10}; /// custom made sounds
		reloadMagazineSound[]={"A3\sounds_f\weapons\reloads\new_MX",db-8,1, 30}; /// custom made sounds
	};

	class ACR_A3_CZ805_A2: ACR_A3_CZ805_Base
	{
		scope = 2; /// should be visible and useable in game
		displayName = "CZ 805 A2"; /// some name
		model = "\acr_a3_weapons\CZ805\CZ_805_A2.p3d"; /// path to model
		
		descriptionShort = "CZ 805 A2 BREN Carabine"; /// displayed on mouseOver in Inventory
		picture = "\acr_a3_weapons\CZ805\data\UI\gear_test_weapon_01_x_ca.paa"; /// different accessories have M, S, T instead of X
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa"; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 4; /// some rough estimate
		};
	};
	class ACR_A3_CZ805_A1: ACR_A3_CZ805_Base
	{
		scope = 2; /// should be visible and useable in game
		displayName = "CZ 805 A1"; /// some name
		model = "\acr_a3_weapons\CZ805\CZ_805_A1.p3d"; /// path to model
		
		descriptionShort = "CZ 805 A1 BREN"; /// displayed on mouseOver in Inventory
		picture = "\acr_a3_weapons\CZ805\data\UI\gear_test_weapon_01_x_ca.paa"; /// different accessories have M, S, T instead of X
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa"; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 4; /// some rough estimate
		};
	};
	class ACR_A3_CZ805_GL: ACR_A3_CZ805_Base
	{
		scope = 2; /// should be visible and useable in game
		displayName = "CZ 805 A1 GL"; /// some name
		model = "\acr_a3_weapons\CZ805\CZ_805_GL.p3d"; /// path to model
		
		handAnim[] = {"OFP2_ManSkeleton", "\acr_a3_weapons\CZ805\data\anims\CZ805GL.rtm"}; /// MX hand animation actually fits this rifle well

		descriptionShort = "CZ 805 A1 GL BREN"; /// displayed on mouseOver in Inventory
		picture = "\acr_a3_weapons\CZ805\data\UI\gear_test_weapon_01_x_ca.paa"; /// different accessories have M, S, T instead of X
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa"; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		muzzles[] = {"this", "KLT_CZ_805_G1"}; /// to be able to switch between bullet muzzle and TGL

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 4; /// some rough estimate
		};
	};

	/**** SLOTABLE WEAPONS ****/

	class ACR_A3_CZ805_A2_Holo_Laser: ACR_A3_CZ805_A2 /// standard issue variant with holo optics and laser pointer
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
	class ACR_A3_CZ805_A1_Holo_Laser: ACR_A3_CZ805_A1 /// standard issue variant with holo optics and laser pointer
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
