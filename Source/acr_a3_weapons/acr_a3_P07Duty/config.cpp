#include "basicdefines_A3.hpp"
class CfgPatches 
{

	class acr_a3_P07Duty
	{
		units[] = { };
		weapons[] = {
				"acr_a3_P07"
		};
		requiredVersion = 0.100000;
		requiredAddons[] = {
				"A3_Weapons_F"
		};
	};
};

class Mode_SemiAuto ;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class asdg_FrontSideRail ;

class CfgWeapons 
{

	class Pistol ;

	class Pistol_Base_F : Pistol
	{

		class WeaponSlotsInfo ;
	};

	class acr_a3_P07 : Pistol_Base_F
	{
		scope = 2;
		model = "acr_a3_weapons\acr_a3_P07Duty\Duty.p3d";
		picture = "acr_a3_weapons\acr_a3_P07Duty\Data\UI\duty_ca.paa";
		//UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[] = {"16Rnd_9x21_Mag"};
		reloadAction = "GestureReloadPistol";
		displayname = "CZ 75 P-07 Duty";
		dexterity = 2;
		bullet1[] = {
				"A3\sounds_f\weapons\shells\9mm\metal_9mm_01", 0.501187, 1, 15
		};
		bullet2[] = {
				"A3\sounds_f\weapons\shells\9mm\metal_9mm_02", 0.501187, 1, 15
		};
		bullet3[] = {
				"A3\sounds_f\weapons\shells\9mm\metal_9mm_03", 0.501187, 1, 15
		};
		bullet4[] = {
				"A3\sounds_f\weapons\shells\9mm\metal_9mm_04", 0.501187, 1, 15
		};
		bullet5[] = {
				"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01", 0.398107, 1, 15
		};
		bullet6[] = {
				"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02", 0.398107, 1, 15
		};
		bullet7[] = {
				"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03", 0.398107, 1, 15
		};
		bullet8[] = {
				"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04", 0.398107, 1, 15
		};
		bullet9[] = {
				"A3\sounds_f\weapons\shells\9mm\grass_9mm_01", 0.223872, 1, 15
		};
		bullet10[] = {
				"A3\sounds_f\weapons\shells\9mm\grass_9mm_02", 0.223872, 1, 15
		};
		bullet11[] = {
				"A3\sounds_f\weapons\shells\9mm\grass_9mm_03", 0.223872, 1, 15
		};
		bullet12[] = {
				"A3\sounds_f\weapons\shells\9mm\grass_9mm_04", 0.223872, 1, 15
		};
		soundBullet[] = {
				"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000
		};
		sounds[] = {
				"StandardSound", "SilencedSound"
		};

		class BaseSoundModeType 
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {
					"A3\sounds_f\weapons\closure\closure_handgun_3", 1.035142, 1, 10
			};
			closure2[] = {
					"A3\sounds_f\weapons\closure\closure_handgun_3", 1.035142, 1.100000, 10
			};
			soundClosure[] = {
					"closure1", 0.500000, "closure2", 0.500000
			};
		};

		class StandardSound : BaseSoundModeType
		{
			begin1[] = {
					"A3\sounds_f\weapons\pistols\pistol_st_1", 0.562341, 1, 700
			};
			begin2[] = {
					"A3\sounds_f\weapons\pistols\pistol_st_2", 0.562341, 1, 700
			};
			begin3[] = {
					"A3\sounds_f\weapons\pistols\pistol_st_3", 0.562341, 1, 700
			};
			soundBegin[] = {
					"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000
			};
		};

		class SilencedSound : BaseSoundModeType
		{
			begin1[] = {
					"A3\sounds_f\weapons\silenced\silent-07", 0.562341, 1, 200
			};
			begin2[] = {
					"A3\sounds_f\weapons\silenced\silent-08", 0.562341, 1, 200
			};
			soundBegin[] = {
					"begin1", 0.500000, "begin2", 0.500000
			};
		};
		reloadtime = 0.130000;
		dispersion = 0.003000;
		drySound[] = {
				"A3\sounds_f\weapons\other\dry1", 0.398107, 1, 20
		};
		reloadMagazineSound[] = {
				"A3\sounds_f\weapons\pistols\p07_reload", 1.000000, 1, 10
		};
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";

		selectionFireAnim = "zasleh"; /// are we able to get rid of all the zaslehs?
/*		class Library 
		{
			libTextDesc = "$STR_A3_CfgWeapons_hgun_P07_Library0";
		};
		descriptionShort = "$STR_A3_CfgWeapons_hgun_P071";
*/
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 20;
			class MuzzleSlot : SlotInfo
			{
				compatibleItems[] ={};
			};

			class CowsSlot: CowsSlot 
			{
				compatibleItems[] ={};
			};
			class PointerSlot: PointerSlot 
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\side";
				compatibleItems[] = {"RH_A26"};
			};
            class asdg_FrontSideRail_acr_a3_Sa58RIS1: asdg_FrontSideRail {};
		};
		inertia = 0.100000;

		class ItemInfo 
		{
			priority = 2;
		};
	};
};
