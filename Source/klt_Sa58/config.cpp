#include "basicdefines_A3.hpp"
class CfgPatches
{
        class KLT_Sa58
        {
                units[]={};
                weapons[]={"KLT_Sa58P"};
                requiredVersion=0.1;
                requiredAddons[]={"A3_Weapons_F","asdg_jointrails"};
        };
};
/// All firemodes, to be sure
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_FrontSideRail ;
class asdg_OpticRail1913 ;
class asdg_OpticRail1913_short ;
 
/// Weapon slots
class SlotInfo;
class CowsSlot;
class PointerSlot;
 
//#include "cfgRecoils.hpp" /// specific recoil patterns for this rifle
#include "cfgMagazines.hpp" /// specific magazines for this rifle
#include "cfgAmmo.hpp" /// specific ammo for this rifle
 
class CfgWeapons
{
        class Rifle;
        class Rifle_Base_F: Rifle
        {
                class WeaponSlotsInfo;
                class GunParticles;
        };
 
        class KLT_Sa58_base: Rifle_Base_F /// Just basic values common for all testing rifle variants
        {
                magazines[] = {klt_30Rnd_Sa58_mag_TracerG, klt_30Rnd_Sa58_mag_TracerR, klt_30Rnd_Sa58_mag_TracerY, klt_30Rnd_Sa58_mag}; /// original custom made magazines
                reloadAction = "HLC_GestureReloadAK"; /// MX hand animation actually fits this rifle well (GestureReloadMX)
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
                discreteDistanceInitIndex = 3; /// Ironsight zeroing is the lowest value by default
 
                // Size of recoil sway of the cursor
                maxRecoilSway=0.0125;
        // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
        swayDecaySpeed=1.25;
 
                class GunParticles : GunParticles
                {
                        class SecondEffect
                        {
                                positionName = "usti hlavne";
                                directionName = "konec hlavne";
                                effectName = "RifleAssaultCloud";
                        };
                };
               
               
                opticsZoomMin=0.375;
                opticsZoomMax=1.1;
                opticsZoomInit=0.75;
 
                distanceZoomMin = 300;
                distanceZoomMax = 300;

 
                descriptionShort = "Samočinný automat vz. 58"; /// displayed on mouseOver in Inventory
                handAnim[] = {"OFP2_ManSkeleton", "\klt_Sa58\Data\Anim\AK.rtm"}; /// MX hand animation actually fits this rifle well
                dexterity = 1.8;
 
                changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_1", 0.562341, 1, 20};
 
                selectionFireAnim = "muzzleFlash"; /// are we able to get rid of all the zaslehs?
               
                modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium"};

    
               
        class Single : Mode_SemiAuto
        {
            sounds[] = {
                    "StandardSound", "SilencedSound"
            };

            class BaseSoundModeType 
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {
                        "A3\sounds_f\weapons\closure\ebr-3", 1.122018, 1.200000, 30
                };
                closure2[] = {
                        "A3\sounds_f\weapons\closure\ebr-3", 1.122018, 1, 30
                };
                soundClosure[] = {
                        "closure1", 0.500000, "closure2", 0.500000
                };
            };

            class StandardSound : BaseSoundModeType
            {
                begin1[] = {
                        "A3\sounds_f\weapons\EBR\EBR_st_4", 1.000000, 1, 1200
                };
                begin2[] = {
                        "A3\sounds_f\weapons\EBR\EBR_st_5", 1.000000, 1, 1200
                };
                begin3[] = {
                        "A3\sounds_f\weapons\EBR\EBR_st_6", 1.000000, 1, 1200
                };
                soundBegin[] = {
                        "begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000
                };
            };

            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {
                        "A3\sounds_f\weapons\silenced\silent-23", 1.000000, 1, 200
                };
                begin2[] = {
                        "A3\sounds_f\weapons\silenced\silent-24", 1.000000, 1, 200
                };
                soundBegin[] = {
                        "begin1", 0.500000, "begin2", 0.500000
                };
            };
            reloadTime = 0.075000;
            recoil = "recoil_single_ebr";
            recoilProne = "recoil_single_prone_ebr";
            dispersion = 0.00087;
            minRange = 2;
            minRangeProbab = 0.300000;
            midRange = 350;
            midRangeProbab = 0.700000;
            maxRange = 500;
            maxRangeProbab = 0.050000;
        };

        class FullAuto : Mode_FullAuto
        {
            sounds[] = {"StandardSound", "SilencedSound"};

            class BaseSoundModeType 
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\ebr-3", 1.122018, 1.200000, 30};
                closure2[] = {"A3\sounds_f\weapons\closure\ebr-3", 1.122018, 1, 30};
                soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
            };

            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\EBR\EBR_st_4", 1.000000, 1, 1200};
                begin2[] = {"A3\sounds_f\weapons\EBR\EBR_st_5", 1.000000, 1, 1200};
                begin3[] = {"A3\sounds_f\weapons\EBR\EBR_st_6", 1.000000, 1, 1200};
                soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
            };

            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-23", 1.000000, 1, 200};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-24", 1.000000, 1, 200};
                soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
            };
            reloadTime = 0.075000;
            recoil = "recoil_auto_ebr";
            recoilProne = "recoil_auto_prone_ebr";
            dispersion = 0.00087;
            minRange = 0;
            minRangeProbab = 0.900000;
            midRange = 15;
            midRangeProbab = 0.700000;
            maxRange = 30;
            maxRangeProbab = 0.050000;
            aiRateOfFire = 0.000001;
        };

        class single_close_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.050000;
            midRange = 300;
            midRangeProbab = 0.800000;
            maxRange = 500;
            maxRangeProbab = 0.010000;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
        };

        class single_medium_optics1 : single_close_optics1
        {
            minRange = 300;
            minRangeProbab = 0.050000;
            midRange = 500;
            midRangeProbab = 0.700000;
            maxRange = 700;
            maxRangeProbab = 0.050000;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };

        class single_far_optics1 : single_medium_optics1
        {
            requiredOpticType = 2;
            minRange = 300;
            minRangeProbab = 0.050000;
            midRange = 600;
            midRangeProbab = 0.400000;
            maxRange = 900;
            maxRangeProbab = 0.050000;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
        };

        class fullauto_medium : FullAuto
        {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.500000;
            midRange = 50;
            midRangeProbab = 0.700000;
            maxRange = 100;
            maxRangeProbab = 0.050000;
            aiRateOfFire = 2.000000;
        };
        aiDispersionCoefY = 3;
        aiDispersionCoefX = 2;
        reloadMagazineSound[] = {
                "A3\sounds_f\weapons\reloads\new_ebr", 1.000000, 1, 10
        };
};
        class KLT_Sa58P: KLT_Sa58_base
        {
                scope = 2; /// should be visible and useable in game
                displayName = "vz. 58 P"; /// some name
                model = "\klt_Sa58\sa58p.p3d"; /// path to model
 
                picture = "\klt_Sa58\Data\UI\sa58p_ca.paa"; /// different accessories have M, S, T instead of X
                //UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa"; /// weapon with grenade launcher should be marked such way
 
                weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights
 
                //muzzles[] = {this, Test_GL_F}; /// to be able to switch between bullet muzzle and TGL
 
                class WeaponSlotsInfo: WeaponSlotsInfo
                {
                        mass = 100; /// some rough estimate
                class MuzzleSlot: SlotInfo
                        {
                                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE"; /// this can be set, but having some common helps a bit
                                compatibleItems[] = {"muzzle_snds_B"}; /// A custom made suppressor for this weapon
                        };
                        class CowsSlot: CowsSlot {
                                compatibleItems[] = {};
                        }; /// default accessories for this slot
                        class PointerSlot: PointerSlot {
                                compatibleItems[] = {};
                        }; /// default accessories for this slot
                };
				
				sections[]={"camo"};
				hiddenSelections[] = {"camo"}; 
				hiddenSelectionsTextures[] = {"\klt_sa58\data\sa58_co.paa"};
        };
		
		class KLT_Sa58P_camo: KLT_Sa58P
        {
                scope = 2; /// should be visible and useable in game
                displayName = "vz. 58 P Desert"; /// some name				
				sections[]={"camo"};
				hiddenSelections[] = {"camo"}; 
				hiddenSelectionsTextures[] = {"\klt_sa58\data\sa58camo_co.paa"};
        };
 
        class KLT_Sa58V: KLT_Sa58P
        {
                displayName = "vz. 58 V"; /// some name
                model = "\klt_Sa58\sa58V.p3d"; /// path to model
                picture = "\klt_Sa58\Data\UI\sa58v_ca.paa"; /// different accessories have M, S, T instead of X
				sections[]={"camo"};
				hiddenSelections[] = {"camo"}; 
				hiddenSelectionsTextures[] = {"\klt_sa58\data\sa58_co.paa"};
 
        };
		
		class KLT_Sa58V_camo: KLT_Sa58V
        {
                displayName = "vz. 58 V Desert"; /// some name
                picture = "\klt_Sa58\Data\UI\sa58v_ca.paa"; /// different accessories have M, S, T instead of X
				sections[]={"camo"};
				hiddenSelections[] = {"camo"}; 
				hiddenSelectionsTextures[] = {"\klt_sa58\data\sa58camo_co.paa"};
        };
 
        class KLT_Sa58RIS1: KLT_Sa58_base
        {
                scope = 2;
                displayName = "vz. 58 RIS";
                model = "\klt_Sa58\sa58ris.p3d";
 
                handAnim[] = {"OFP2_ManSkeleton", "\klt_Sa58\Data\Anim\Mk48.rtm"}; /// MX hand animation actually fits this rifle well
 
                picture = "\klt_Sa58\Data\UI\sa58ref_ca.paa";
 
                weaponInfoType = "RscWeaponZeroing";
 
                class WeaponSlotsInfo: WeaponSlotsInfo
                {
                        mass = 100;
                        allowedSlots[] = {901};
                    class asdg_FrontSideRail_KLT_Sa58RIS1: asdg_FrontSideRail {};
                    class asdg_OpticRail_KLT_Sa58RIS1: asdg_OpticRail1913_short {};
                    class MuzzleSlot: SlotInfo
                        {
                                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE"; /// this can be set, but having some common helps a bit
                                compatibleItems[] = {"muzzle_snds_B"}; /// A custom made suppressor for this weapon
                        };
                        class CowsSlot: CowsSlot {}; /// default accessories for this slot
                        class PointerSlot: PointerSlot
                        {
                            linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                        }; /// default accessories for this slot
                };
				sections[]={"camo","RIS"};
				hiddenSelections[] = {"camo","RIS"}; 
				hiddenSelectionsTextures[] = {"\klt_sa58\data\sa58_co.paa", "\klt_sa58\data\sa58sfcamo1_co.paa"};
        };
		
		class KLT_Sa58RIS1_camo: KLT_Sa58RIS1
        {
                displayName = "vz. 58 RIS Desert"; /// some name
                picture = "\klt_Sa58\Data\UI\sa58acog_ca.paa"; /// different accessories have M, S, T instead of X
				sections[]={"camo","RIS"};
				hiddenSelections[] = {"camo","RIS"}; 
				hiddenSelectionsTextures[] = {"\klt_sa58\data\sa58camo_co.paa", "\klt_sa58\data\sa58sfcamo_co.paa"};
        };
 
        class KLT_Sa58RIS2: KLT_Sa58RIS1
        {
                displayName = "vz. 58 RIS2"; /// some name
                model = "\klt_Sa58\sa58ris_back.p3d"; /// path to model
                picture = "\klt_Sa58\Data\UI\sa58acog_ca.paa"; /// different accessories have M, S, T instead of X
				sections[]={"camo","RIS"};
				hiddenSelections[] = {"camo","RIS"}; 
				hiddenSelectionsTextures[] = {"\klt_sa58\data\sa58_co.paa", "\klt_sa58\data\sa58sfcamo1_co.paa"};
        };
		
		class KLT_Sa58RIS2_camo: KLT_Sa58RIS2
        {
                displayName = "vz. 58 RIS2 Desert"; /// some name
				sections[]={"camo","RIS"};
				hiddenSelections[] = {"camo","RIS"}; 
				hiddenSelectionsTextures[] = {"\klt_sa58\data\sa58camo_co.paa", "\klt_sa58\data\sa58sfcamo_co.paa"};
        };       
        /// include accessory from separate file to not clutter this one
        //#include "accessory.hpp"
};