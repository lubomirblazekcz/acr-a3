class acr_a3_recon: B_recon_F // Zvěd
{
    _generalMacro = "B_recon_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR";
    author = "$STR_ACR";
    backpack = "ACR_A3_Backpack_Kitbag_vz95";
    vehicleClass = "ACRX0"; //RECON
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform_vest";
    weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
    respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
    canDeactivateMines = "true";
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_recon_JTAC: B_recon_JTAC_F // JTAC
{
    _generalMacro = "B_recon_JTAC_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR";
    author = "$STR_ACR";
    vehicleClass = "ACRX0"; //RECON
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform_vest";
    weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Laserdesignator"};
    respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Laserdesignator"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","Laserbatteries"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","Laserbatteries"};
    linkedItems[] = {"V_ACR_A3_PlateCarrier2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
    respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_recon_AR: B_soldier_AR_F // Kulometčík
{
    _generalMacro = "B_soldier_AR_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR";
    author = "$STR_ACR";
    vehicleClass = "ACRX0"; //RECON
    displayName = "$STR_ACR_KULOMET_F";
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform_tshirt";
    weapons[] = {"acr_a3_M60E4","acr_a3_SP01","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_M60E4","acr_a3_SP01","Throw","Put","Binocular"};
    magazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade"};
    respawnMagazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade"};
    linkedItems[] = {"V_ACR_A3_PlateCarrier1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    respawnItems[] = {"FirstAidKit","FirstAidKit"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_O_Pos'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'CUP_B_ACRScout_m95';_unit addMagazines ['acr_a3_100Rnd_762x51_B_M60E4',3];";
    };
};
class acr_a3_recon_M: B_recon_M_F  // Ostrostřelec
{
    _generalMacro = "B_recon_M_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR";
    author = "$STR_ACR";
    backpack = "ACR_A3_Backpack_Kitbag_vz95";
    vehicleClass = "ACRX0"; //RECON
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform_vest";
    weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Binocular"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"H_ACR_A3_Booniehat_fold_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"H_ACR_A3_Booniehat_fold_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
    respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
    canDeactivateMines = "true";
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_recon_medic: B_recon_medic_F // Zdravotník
{
    _generalMacro = "B_recon_medic_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR";
    author = "$STR_ACR";
    vehicleClass = "ACRX0"; //RECON
    backpack = "B_AssaultPack_rgr_Medic";
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform_vest";
    weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"V_ACR_A3_PlateCarrier2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
    respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_recon_TL: B_recon_TL_F // Velitel týmu
{
    _generalMacro = "B_recon_TL_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR";
    author = "$STR_ACR";
    vehicleClass = "ACRX0"; //RECON
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform_tshirt";
    weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_SP01","Throw","Put","Rangefinder"};
    respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_SP01","Throw","Put","Rangefinder"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
    linkedItems[] = {"V_ACR_A3_PlateCarrier2_vz95","H_ACR_A3_Cap_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier2_vz95","H_ACR_A3_Cap_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
    respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
    canDeactivateMines = "true";
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'ACR_A3_Backpack_Carryall_vz95';_unit addMagazines ['30Rnd_556x45_Stanag',5];";
    };
};
class acr_a3_recon_exp: B_recon_exp_F // Exp. specialsta
{
    _generalMacro = "B_recon_exp_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR"; author = "$STR_ACR";
    vehicleClass = "ACRX0"; //RECON
    backpack = "ACR_A3_Backpack_Kitbag_vz95";
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform_vest";
    weapons[] = {"SMG_02_ACO_F","acr_a3_SP01","Throw","Put","Binocular"};
    respawnWeapons[] = {"SMG_02_ACO_F","acr_a3_SP01","Throw","Put","Binocular"};
    magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"V_ACR_A3_PlateCarrier1_vz95","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_vz95","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"muzzle_snds_L","FirstAidKit","FirstAidKit"};
    respawnItems[] = {"muzzle_snds_L","FirstAidKit","FirstAidKit"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_recon_MAT: B_recon_LAT_F // Raketometčík
{
    _generalMacro = "B_recon_LAT_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR";
    author = "$STR_ACR";
    vehicleClass = "ACRX0"; //RECON
    backpack = "ACR_A3_B_AssaultPack_rgr_LAT";
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform_tshirt";
    weapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
    respawnWeapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell","HandGrenade","CUP_MAAWS_HEAT_M"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell","HandGrenade","CUP_MAAWS_HEAT_M"};
    linkedItems[] = {"H_ACR_A3_HelmetIA_Goggles_vz95","V_ACR_A3_PlateCarrierIA1_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"H_ACR_A3_HelmetIA_Goggles_vz95","V_ACR_A3_PlateCarrierIA1_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
    respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};

// vz.95 Pouštní Průzkum
class acr_a3_recon_des: acr_a3_recon // Zvěd
{
    backpack = "B_Kitbag_cbr";
    vehicleClass = "ACRX0_Des"; //RECON
    uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
    linkedItems[] = {"V_PlateCarrierIA2_khk","H_ACR_A3_Pakol_grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_PlateCarrierIA2_khk","H_ACR_A3_Pakol_grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_recon_JTAC_des: acr_a3_recon_JTAC // JTAC
{
    vehicleClass = "ACRX0_Des"; //RECON
    uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
    linkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_Booniehat_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_Booniehat_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_recon_AR_des: acr_a3_recon_AR // Kulometčík
{
    vehicleClass = "ACRX0_Des"; //RECON
    uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
    linkedItems[] = {"V_ACR_A3_PlateCarrier1_khk","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_khk","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_O_Pos'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'B_AssaultPack_cbr';_unit addMagazines ['acr_a3_100Rnd_762x51_B_M60E4',3];";
    };
};
class acr_a3_recon_M_des: acr_a3_recon_M  // Ostrostřelec
{
    backpack = "B_Kitbag_cbr";
    vehicleClass = "ACRX0_Des"; //RECON
    uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
    linkedItems[] = {"H_ACR_A3_Cap_khk","V_PlateCarrierIA1_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"H_ACR_A3_Cap_khk","V_PlateCarrierIA1_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_recon_medic_des: acr_a3_recon_medic // Zdravotník
{
    vehicleClass = "ACRX0_Des"; //RECON
    backpack = "";
    uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
    linkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Medic'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'B_AssaultPack_cbr';_unit addItem 'Medikit'";
    };
};
class acr_a3_recon_TL_des: acr_a3_recon_TL // Velitel týmu
{
    vehicleClass = "ACRX0_Des"; //RECON
    backpack = "";
    uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
    linkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_Cap_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_Cap_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'B_Carryall_cbr';_unit addMagazines ['30Rnd_556x45_Stanag',5];";
    };
};
class acr_a3_recon_exp_des: acr_a3_recon_exp // Exp. specialsta
{
    vehicleClass = "ACRX0_Des"; //RECON
    backpack = "B_Kitbag_cbr";
    uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
    linkedItems[] = {"V_ACR_A3_PlateCarrier1_khk","H_ACR_A3_Pakol_grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_khk","H_ACR_A3_Pakol_grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_recon_MAT_des: acr_a3_recon_MAT // Raketometčík
{
    vehicleClass = "ACRX0_Des"; //RECON
    backpack = "ACR_A3_B_AssaultPack_cbr_LAT";
    uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
    linkedItems[] = {"H_ACR_A3_HelmetIA_Goggles_vz95_des","V_PlateCarrierIA2_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"H_ACR_A3_HelmetIA_Goggles_vz95_des","V_PlateCarrierIA2_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};