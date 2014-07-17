#include "basicdefines_A3.hpp"
class CfgPatches
{
        class acr_a3_CZ750_srifle
        {
                units[]={};
                weapons[]={"acr_a3_CZ750"};
                requiredVersion=0.1;
                requiredAddons[]={"A3_Weapons_F","asdg_jointrails"};
        };
};
/// All firemodes, to be sure
class Mode_SemiAuto;
class asdg_FrontSideRail ;
class asdg_OpticRail1913 ;
class asdg_OpticRail1913_short ;
 
/// Weapon slots
class SlotInfo;
class CowsSlot;
class PointerSlot;
 
//#include "cfgRecoils.hpp" /// specific recoil patterns for this rifle
#include "cfgMagazines.hpp" /// specific magazines for this rifle
//#include "cfgAmmo.hpp" /// specific ammo for this rifle
 
class CfgWeapons
{
        class Rifle_Base_F;
        class Rifle_Long_Base_F : Rifle_Base_F
        {

            class WeaponSlotsInfo ;
        };
        class UGL_F ;

 
        class acr_a3_CZ750_base: Rifle_Long_Base_F /// Just basic values common for all testing rifle variants
        {
                scope=0;
                magazines[] = {acr_a3_10Rnd_CZ750_mag_Tracer, acr_a3_10Rnd_CZ750_mag}; /// original custom made magazines
                reloadAction = "GestureReloadLRR"; /// MX hand animation actually fits this rifle well (GestureReloadMX)
                maxZeroing = 2000;
 
                // Size of recoil sway of the cursor
                maxRecoilSway=0.0125;
                // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
                swayDecaySpeed=1.25;
 
                class GunParticles 
                {

                    class FirstEffect 
                    {
                        effectName = "SniperCloud";
                        positionName = "Usti hlavne";
                        directionName = "Konec hlavne";
                    };
                };
               
                opticsZoomMin = 0.375000;
                opticsZoomMax = 1.100000;
                opticsZoomInit = 0.750000;
                distanceZoomMin = 300;
                distanceZoomMax = 300;
                bullet1[] = {
                        "A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 25
                };
                bullet2[] = {
                        "A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 25
                };
                bullet3[] = {
                        "A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 25
                };
                bullet4[] = {
                        "A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 25
                };
                bullet5[] = {
                        "A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 25
                };
                bullet6[] = {
                        "A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 25
                };
                bullet7[] = {
                        "A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 25
                };
                bullet8[] = {
                        "A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 25
                };
                bullet9[] = {
                        "A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 25
                };
                bullet10[] = {
                        "A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 25
                };
                bullet11[] = {
                        "A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 25
                };
                bullet12[] = {
                        "A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 25
                };
                soundBullet[] = {
                        "bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000
                };
                modes[] = {
                        "Single", "far_optic1", "medium_optic2", "far_optic2"
                };

 
                descriptionShort = "CZ 750 S1 M1 Sniper rifle"; /// displayed on mouseOver in Inventory
                handAnim[] = {"OFP2_ManSkeleton", "acr_a3_weapons\acr_a3_CZ750\Data\Anim\M24.rtm"}; /// MX hand animation actually fits this rifle well
                dexterity = 1.2;
 
                selectionFireAnim = "muzzleFlash"; /// are we able to get rid of all the zaslehs?
                  
                class Single : Mode_SemiAuto
                {
                    dispersion = 0.000180;
                    soundContinuous = 0;
                    reloadTime = 1;
                    recoil = "recoil_single_gm6";
                    recoilProne = "recoil_single_prone_gm6";
                    sounds[] = {
                            "StandardSound"
                    };

                    class BaseSoundModeType 
                    {
                        weaponSoundEffect = "DefaultRifle";
                        closure1[] = {
                                "A3\sounds_f\weapons\closure\closure_rifle_2", 1.778279, 1, 10
                        };
                        closure2[] = {
                                "A3\sounds_f\weapons\closure\closure_rifle_3", 1.778279, 1, 10
                        };
                        soundClosure[] = {
                                "closure1", 0.500000, "closure2", 0.500000
                        };
                    };

                    class StandardSound : BaseSoundModeType
                    {
                        begin1[] = {
                                "A3\sounds_f\weapons\M320\M320_st_1", 1.000000, 1, 1200
                        };
                        begin2[] = {
                                "A3\sounds_f\weapons\M320\M320_st_2", 1.000000, 1, 1200
                        };
                        soundBegin[] = {
                                "begin1", 0.500000, "begin2", 0.500000
                        };
                    };
                    minRange = 2;
                    minRangeProbab = 0.100000;
                    midRange = 250;
                    midRangeProbab = 0.700000;
                    maxRange = 350;
                    maxRangeProbab = 0.050000;
                    aiRateOfFire = 3;
                    aiRateOfFireDistance = 500;
                };

                class far_optic1 : Single
                {
                    showToPlayer = 0;
                    minRange = 150;
                    minRangeProbab = 0.100000;
                    midRange = 500;
                    midRangeProbab = 0.700000;
                    maxRange = 1000;
                    maxRangeProbab = 0.300000;
                    aiRateOfFire = 5;
                    aiRateOfFireDistance = 700;
                    requiredOpticType = 1;
                };

                class medium_optic2 : Single
                {
                    showToPlayer = 0;
                    minRange = 250;
                    minRangeProbab = 0.100000;
                    midRange = 750;
                    midRangeProbab = 0.700000;
                    maxRange = 1000;
                    maxRangeProbab = 0.300000;
                    aiRateOfFire = 6.000000;
                    aiRateOfFireDistance = 1000;
                    requiredOpticType = 2;
                };

                class far_optic2 : far_optic1
                {
                    minRange = 500;
                    minRangeProbab = 0.100000;
                    midRange = 1050;
                    midRangeProbab = 0.700000;
                    maxRange = 2000;
                    maxRangeProbab = 0.300000;
                    aiRateOfFire = 8;
                    aiRateOfFireDistance = 2000;
                    requiredOpticType = 2;
                };
                reloadMagazineSound[] = {
                        "A3\Sounds_F\weapons\M320\M320_reload", 1.000000, 1, 10
                };
                drySound[] = {
                        "A3\sounds_f\weapons\Other\dry_1", 0.501187, 1, 20
                };
        };
        class acr_a3_CZ750: acr_a3_CZ750_base
        {
                scope = 2; /// should be visible and useable in game
                displayName = "CZ 750 S1 M1"; /// some name
                model = "acr_a3_weapons\acr_a3_CZ750\CZ750.p3d"; /// path to model
 
                picture = "acr_a3_weapons\acr_a3_CZ750\Data\UI\cz750_ca.paa"; /// different accessories have M, S, T instead of X
                //UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa"; /// weapon with grenade launcher should be marked such way
 
                weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights
 
                //muzzles[] = {this, Test_GL_F}; /// to be able to switch between bullet muzzle and TGL
 
                class WeaponSlotsInfo: WeaponSlotsInfo
                {
                    mass = 100;
                    allowedSlots[] = {901};
                    class MuzzleSlot: SlotInfo
                        {
                            /*    linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE"; /// this can be set, but having some common helps a bit
                                compatibleItems[] = {"muzzle_snds_B"}; /// A custom made suppressor for this weapon */
                        };
                        class CowsSlot: CowsSlot {
                                compatibleItems[] = {};
                        }; /// default accessories for this slot
                        class PointerSlot: PointerSlot {
                                compatibleItems[] = {};
                        }; /// default accessories for this slot
                        class asdg_OpticRail_acr_a3_CZ750RIS1: asdg_OpticRail1913_short {};
                };
        };
        /// include accessory from separate file to not clutter this one
        //#include "accessory.hpp"
};