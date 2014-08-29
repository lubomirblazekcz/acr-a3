class CfgPatches
{
	class acr_a3_SP01Phantom
	{
		units[] = {};
		weapons[] = {"acr_a3_SP01"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {};
		ammo[] = {};
	};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class asdg_FrontSideRail;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class acr_a3_SP01: Pistol_Base_F
	{
		scope = 2;
		model = "acr_a3_weapons\SP01Phantom\Phantom.p3d";
		picture = "\acr_a3_weapons\SP01Phantom\data\UI\gear_phantom_x_ca.paa";
		magazines[] = {"16Rnd_9x21_Mag"};
		reloadAction = "GestureReloadPistol";
		displayname = "CZ 75 SP-01 Phantom";
		author = "$STR_ACR";
		dexterity = 2;
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.398107,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.223872,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.223872,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.223872,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.223872,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.035142,1,10};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.035142,1.1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\pistols\pistol_st_1",0.562341,1,700};
			begin2[] = {"A3\sounds_f\weapons\pistols\pistol_st_2",0.562341,1,700};
			begin3[] = {"A3\sounds_f\weapons\pistols\pistol_st_3",0.562341,1,700};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.562341,1,200};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.562341,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		reloadtime = 0.13;
		dispersion = 0.003;
		drySound[] = {"A3\sounds_f\weapons\other\dry1",0.398107,1,20};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\pistols\p07_reload",1.0,1,10};
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		selectionFireAnim = "zasleh";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"ACR_A3_Phantom_Supp"};
			};
			class CowsSlot{};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"RH_x2","RH_m6x","RH_x300"};
			};
		};
		inertia = 0.1;
		class ItemInfo
		{
			priority = 2;
		};
	};
	#include "accessory.h"
};