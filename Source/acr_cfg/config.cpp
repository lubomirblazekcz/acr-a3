class CfgPatches
{
	class ACR
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Characters_F_BLUFOR"};
	};
};
class CfgVehicleClasses
{
	class ACRX0
	{
		displayName = "Men (vz. 95 Recon)"; //Maj bonnie hatku a co ja vim
	};
	class ACRX00
	{
		displayName = "$STR_MEN"; //vz. 95 zakladni vojaci a pilot STRINGTABLETEXT: Men
	};
	class ACRX01
	{
		displayName = "$STR_MENVZ95"; //lesni kokoti STRINGTABLETEXT: Men (vz. 95)
	};
	class ACRX02
	{
		displayName = "Men (MOUT)"; //MOUT kokoti
	};
	class ACRX03
	{
		displayName = "Men (Desert)"; //poustni curaci
	};
	class ACRX04
	{
		displayName = "Men (Sniper)"; //sniperi se krovim
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class cfgFactionClasses
{
	class ACR //class pod jakou frakci budou
	{
		displayName = "$STR_ACR"; //jmeno frakce v editoru STRINGTABLETEXT: ACR
		priority = 3;
		side = "TWest";
		icon = "ACR\data\ACR_odznak.paa";
	};
};
class cfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class AnimationSources;
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class SoldierGB: CAManBase
	{
		threat[] = {1,0.1,0.1};
	};
	class B_Carryall_mcamo;
	class ACRbatoh: B_Carryall_mcamo
	{
		scope = 2;
		displayName = "Batoh vz.95"; //mel 2 textury na batoh ale ma v configu jen 1 wtf?
		picture = "\ACR\data\ikona_ACR_batoh02.paa"; //ikona
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ACR\data\Batoh02_ACR.paa"};
	};
	class ACR_Vojak_Base: SoldierGB
	{
		_generalMacro = "B_Soldier_base_F";
		expansion = 1;
		identityTypes[] = {"Language_EN_EP1","Head_Euro","G_NATO_default"};
		faceType = "Man_A3";
		side = 1;
		faction = "ACR";
		genericNames = "NATOMen";
		vehicleClass = "Men";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 2.3;
		sensitivity = 3;
		threat[] = {1,0.1,0.1};
		camouflage = 1.4;
		minFireTime = 7;
		cost = 40000;
		canCarryBackPack = 1;
		scope = 0;
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,1};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_vest";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Googles: UniformSlotInfo
				{
					slotType = 603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = "0.3*3";
			};
			class HitBody: HitBody
			{
				armor = "0.5*10";
			};
			class HitHands: HitHands
			{
				armor = "0.8*5";
			};
			class HitLegs: HitLegs
			{
				armor = "0.8*5";
			};
		};
		class EventHandlers;
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
	};
	class ACR_Vojak00Z: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		vehicleClass = "ACRX00"; //zaklad
		displayName = "Velitel";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
		Items[] = {};
		respawnItems[] = {};
		canDeactivateMines = "true";
		icon = "iconManLeader";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak01Z: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		vehicleClass = "ACRX00"; //zaklad
		displayName = "Střelec";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
		Items[] = {};
		respawnItems[] = {};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak02Z: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_F";
		attendant = "true";
		scope = 2;
		vehicleClass = "ACRX00"; //zaklad
		displayName = "Zdravotník";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
		Items[] = {};
		respawnItems[] = {};
		canDeactivateMines = "true";
		icon = "iconManMedic";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak03Z: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		vehicleClass = "ACRX00"; //zaklad
		displayName = "Ženista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
		Items[] = {};
		respawnItems[] = {};
		canDeactivateMines = "true";
		engineer = 1;
		icon = "iconManEngineer";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak01: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		vehicleClass = "ACRX0"; //RECON
		backpack = "ACRbatoh";
		displayName = "Střelec";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","Klobouk_95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","Klobouk_95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak02: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_GL_F";
		scope = 2;
		vehicleClass = "ACRX0"; //RECON
		backpack = "ACRbatoh";
		displayName = "Radista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", ,"insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","Klobouk_95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","Klobouk_95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC119"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC119"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak07: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_exp_F";
		scope = 2;
		vehicleClass = "ACRX0"; //RECON
		backpack = "B_Bergen_sgg";
		displayName = "Ženista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","Klobouk_95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","Klobouk_95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		engineer = 1;
		icon = "iconManEngineer";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak03: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_AR_F";
		scope = 2;
		vehicleClass = "ACRX0"; //RECON
		displayName = "Kulometčík";
		backpack = "ACRbatoh";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		weapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","Klobouk_95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","Klobouk_95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		hiddenSelections[] = {"Camo", ,"insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		icon = "iconManMG";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak04: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		vehicleClass = "ACRX0"; //RECON
		backpack = "ACRbatoh";
		head = "Klobouk_95";
		displayName = "Ostrostřelec";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"Klobouk_95","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"Klobouk_95","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak05: ACR_Vojak_Base
	{
		_generalMacro = "B_medic_F";
		attendant = "true";
		scope = 2;
		vehicleClass = "ACRX0"; //RECON
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "Zdravotník";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","Klobouk_95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		icon = "iconManMedic";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak10: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		vehicleClass = "ACRX0"; //RECON
		backpack = "ACRbatoh";
		displayName = "Střelec - AT";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		linkedItems[] = {"Klobouk_95","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		respawnlinkedItems[] = {"Klobouk_95","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManAT";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak06: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		vehicleClass = "ACRX0"; //RECON
		backpack = "ACRbatoh";
		displayName = "Velitel";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","Klobouk_95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","Klobouk_95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManLeader";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak01: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_AssaultPack_rgr";
		displayName = "Střelec";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak02: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_GL_F";
		scope = 2;
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_AssaultPack_rgr";
		displayName = "Radista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC119"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC119"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak07: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_exp_F";
		scope = 2;
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_Bergen_sgg";
		displayName = "Ženista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		engineer = 1;
		icon = "iconManEngineer";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak03: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_AR_F";
		scope = 2;
		vehicleClass = "ACRX01"; //LESNI
		displayName = "Kulometčík";
		backpack = "B_AssaultPack_rgr";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		weapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		icon = "iconManMG";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak04: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_AssaultPack_rgr";
		head = "H_HelmetB_light_black";
		displayName = "Ostrostřelec";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_light_black","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_HelmetB_light_black","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak05: ACR_Vojak_Base
	{
		_generalMacro = "B_medic_F";
		attendant = "true";
		scope = 2;
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "Zdravotník";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		icon = "iconManMedic";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak09: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		vehicleClass = "ACRX04"; //SNIPERI
		displayName = "Spotter";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_B_GhillieSuit";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		Items[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		linkedItems[] = {"H_Cap_headphones","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_Cap_headphones","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		canDeactivateMines = "true";
		camouflage = 0.6;
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak10: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_Kitbag_Base";
		displayName = "Střelec - AT";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		linkedItems[] = {"H_HelmetB_light_black","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		respawnlinkedItems[] = {"H_HelmetB_light_black","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManAT";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak11: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_M_F";
		vehicleClass = "ACRX04"; //SNIPERI
		scope = 2;
		displayName = "Odstřelovač";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_B_GhillieSuit";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"srifle_LRR_SOS_F","RH_cz75","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_SOS_F","RH_cz75","Throw","Put","Rangefinder"};
		magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","HandGrenade","HandGrenade","SmokeShell","SmokeShell","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","HandGrenade","HandGrenade","SmokeShell","SmokeShell","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","Chemlight_green","Chemlight_green"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		linkedItems[] = {"H_Cap_headphones","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_Cap_headphones","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		canDeactivateMines = "true";
		camouflage = 0.6;
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak06: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		vehicleClass = "ACRX01"; //LESNI
		backpack = "ACRbatoh";
		displayName = "Velitel";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManLeader";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak12: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		vehicleClass = "ACRX01"; //LESNI
		backpack = "ACRbatoh";
		displayName = "Průzkumník";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","Klobouk_95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","Klobouk_95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak01: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_AssaultPack_rgr";
		displayName = "Střelec";
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_MOUT";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_MOUT.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak02: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_GL_F";
		scope = 2;
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_AssaultPack_rgr";
		displayName = "Radista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_MOUT";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_MOUT.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC119"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC119"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak07: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_exp_F";
		scope = 2;
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_Bergen_sgg";
		displayName = "Ženista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_MOUT";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_MOUT.paa"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		engineer = 1;
		icon = "iconManEngineer";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak03: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_AR_F";
		scope = 2;
		vehicleClass = "ACRX02"; //MOUT
		displayName = "Kulometčík";
		backpack = "B_AssaultPack_rgr";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_MOUT";
		weapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_MOUT.paa"};
		icon = "iconManMG";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak04: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_AssaultPack_rgr";
		head = "H_HelmetB_light_black";
		displayName = "Ostrostřelec";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_MOUT";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_MOUT.paa"};
		weapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_light_black","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_HelmetB_light_black","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak05: ACR_Vojak_Base
	{
		_generalMacro = "B_medic_F";
		attendant = "true";
		scope = 2;
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "Zdravotník";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_MOUT";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_MOUT.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		icon = "iconManMedic";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak10: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_Kitbag_Base";
		displayName = "Střelec - AT";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_MOUT";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_MOUT.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		linkedItems[] = {"H_HelmetB_light_black","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		respawnlinkedItems[] = {"H_HelmetB_light_black","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManAT";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak06: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_AssaultPack_rgr";
		displayName = "Velitel";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_MOUT";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_MOUT.paa"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManLeader";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak01: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr";
		displayName = "Střelec";
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_Des";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_Des.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak02: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_GL_F";
		scope = 2;
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr";
		displayName = "Radista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_Des";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_Des.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC119"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC119"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak07: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_exp_F";
		scope = 2;
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_Bergen_sgg";
		displayName = "Ženista";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_Des";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_Des.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		engineer = 1;
		icon = "iconManEngineer";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak03: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_AR_F";
		scope = 2;
		vehicleClass = "ACRX03"; //POUST
		displayName = "Kulometčík";
		backpack = "B_AssaultPack_rgr";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_Des";
		weapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"LMG_Zafir_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_762x51_Box","150Rnd_762x51_Box","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_Des.paa"};
		icon = "iconManMG";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak04: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr";
		head = "H_HelmetB_light_sand";
		displayName = "Ostrostřelec";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_Des";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_Des.paa"};
		weapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MXM_Black_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_light_sand","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_HelmetB_light_sand","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"optic_hamr","FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak05: ACR_Vojak_Base
	{
		_generalMacro = "B_medic_F";
		attendant = "true";
		scope = 2;
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "Zdravotník";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_Des";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_Des.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		icon = "iconManMedic";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak10: ACR_Vojak_Base
	{
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_Kitbag_Base";
		displayName = "Střelec - AT";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_Des";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_Des.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Binocular","launch_NLAW_F"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		linkedItems[] = {"H_HelmetB_light_sand","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		respawnlinkedItems[] = {"H_HelmetB_light_sand","NVGoggles_OPFOR","ACR_Vesta","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManAT";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak06: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr";
		displayName = "Velitel";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "CombatUniform_ACR_Des";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ACR\data\ACR_Uniforma_Des.paa"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		icon = "iconManLeader";
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Pilot: ACR_Vojak_Base
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		vehicleClass = "ACRX00"; //zaklad
		displayName = "Pilot";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "ACR_Uniform_Pilot";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\ACR\data\ACR_Uniforma_Pilot.paa"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","RH_cz75","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","RH_16Rnd_9x19_cz","RH_16Rnd_9x19_cz","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","ACR_Vesta","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		respawnItems[] = {"FirstAidKit","ACRE_PRC148_UHF"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
};
class cfgWeapons
{
	class ItemCore;
	class HeadGearItem;
	class UniformItem;
	class ItemInfo;
	class Uniform_Base;
	class VestItem;
	class BagItem;
    class ACR_Vesta: ItemCore //Vesta
	{
		scope = 2;
		model = "\A3\Characters_F_beta\Indep\equip_ia_vest02";
		picture = "\ACR\data\ikona_ACR_Vesta.paa";
		displayName = "Vesta (vz.95)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ACR\data\ACR_Vesta.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_beta\Indep\equip_ia_vest02";
			containerClass = "Supply200";
			mass = 50;
			armor = "5*0.5";
			passThrough = 0.7;
			hiddenSelections[] = {"camo"};
		};
	};
	class ACR_Vesta2: ItemCore //Vesta2
	{
		scope = 2;
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture = "\ACR\data\ikona_ACR_Vesta2.paa";
		displayName = "Vesta2 (vz.95)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ACR\data\ACR_Vesta2.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply200";
			mass = 50;
			armor = "5*0.5";
			passThrough = 0.7;
			hiddenSelections[] = {"camo"};
		};
	};
	class ACR_Prilba: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MICH 2000 (vz.95)";
		picture = "\ACR\data\ikona_ACR_Prilba.paa";
		model = "\A3\Characters_F_beta\Indep\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ACR\data\ACR_Prilba.paa"};
		class ItemInfo: HeadGearItem
		{
			uniformModel = "\A3\Characters_F_beta\Indep\headgear_helmet_canvas";
			mass = 70;
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};
	class Klobouk_95: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Klobouk vz.95";
		picture = "\ACR\data\Klobouk_95icon.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ACR\data\Klobouk_95.paa"};
		class ItemInfo: HeadGearItem
		{
			uniformModel = "\A3\Characters_F\Common\booniehat";
			mass = 10;
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};
	class Ksiltovka_95: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Kšiltovka 505.skss";
		picture = "\A3\Characters_F\data\ui\icon_h_cap_grn_ca.paa";
		model = "\A3\Characters_F\Common\capb";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ACR\data\Ksiltovka_95.paa"};
		class ItemInfo: HeadGearItem
		{
			uniformModel = "\A3\Characters_F\Common\capb";
			mass = 10;
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};
	class CombatUniform_ACR: Uniform_Base
	{
		scope = 2;
		displayName = "AČR Uniforma";
		texture = "\ACR\data\ACR\data\ACR_Uniforma.paa";
		picture = "\ACR\data\ikona_ACR_vz95.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_Vojak01";
			containerClass = "Supply20";
			mass = 30;
		};
	};
	class CombatUniform_ACR_MOUT: Uniform_Base
	{
		scope = 2;
		displayName = "AČR MOUT Uniforma";
		texture = "\ACR\data\ACR_Uniforma_MOUT.paa";
		picture = "\ACR\data\ikona_ACR_MOUT.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_MOUT_Vojak01";
			containerClass = "Supply20";
			mass = 30;
		};
	};
	class CombatUniform_ACR_Des: Uniform_Base
	{
		scope = 2;
		displayName = "AČR Pouštní Uniforma";
		texture = "\ACR\data\ACR_Uniforma_Des.paa";
		picture = "\ACR\data\ikona_ACR_DESERT.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_Des_Vojak01";
			containerClass = "Supply20";
			mass = 30;
		};
	};
	class ACR_Uniform_Pilot: Uniform_Base
	{
		scope = 2;
		displayName = "AČR Pilotní Uniforma";
		texture = "\ACR\data\ACR_Uniforma_Pilot.paa";
		picture = "\ACR\data\ikona_ACR_vz95.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_pilot";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_Pilot";
			containerClass = "Supply20";
			mass = 30;
		};
	};
};
