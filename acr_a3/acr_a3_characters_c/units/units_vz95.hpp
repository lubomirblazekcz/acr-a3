class acr_a3_soldier_01: B_Soldier_F
{
    _generalMacro = "B_Soldier_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR"; author = "$STR_ACR";
    vehicleClass = "ACRX01"; //LESNI
    displayName = "$STR_A3_CFGVEHICLES_B_SOLDIER_F0"; // Střelec
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform";
    weapons[] = {"acr_a3_Sa58RIS2_Arco_Laser","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_Sa58RIS2_Arco_Laser","Throw","Put","Binocular"};
    magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
    respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    respawnItems[] = {"FirstAidKit","FirstAidKit"};
    hiddenSelections[] = {"Camo", "insignia"};
    hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.rvmat"};
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.paa"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_O_Pos'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'CUP_B_ACRScout_m95';_unit addMagazines ['CUP_30Rnd_Sa58_M',2];";
    };
};
class acr_a3_soldier_GL: B_Soldier_GL_F // Granátometčík
{
    _generalMacro = "B_Soldier_GL_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    backpack = "CUP_B_ACRScout_m95";
    faction = "ACR"; author = "$STR_ACR";
    vehicleClass = "ACRX01"; //LESNI
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform_tshirt";
    weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    respawnItems[] = {"FirstAidKit","FirstAidKit"};
    model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
    hiddenSelections[] = {"camo", "camo2", "insignia"};
    hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.rvmat"};
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.paa","\acr_a3\acr_a3_characters\data\ACR_Basicbody.paa"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Neg'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_AR: B_soldier_AR_F
{
    _generalMacro = "B_soldier_AR_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR"; author = "$STR_ACR";
    vehicleClass = "ACRX01"; //LESNI
    displayName = "$STR_B_SOLDIER_AR_F0";
    genericNames = "CzechMen";
    uniformAccessories[] = {};
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform_vest"; // Kulometčík
    weapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
    magazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade"};
    respawnMagazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade"};
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    respawnItems[] = {"FirstAidKit","FirstAidKit"};
    model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
    hiddenSelections[] = {"Camo", "insignia"};
    hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.rvmat"};
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.paa"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_O_Pos'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'CUP_B_ACRScout_m95';_unit addMagazines ['acr_a3_100Rnd_762x51_B_M60E4',3];";
    };
};
class acr_a3_soldier_M: B_soldier_M_F
{
    _generalMacro = "B_soldier_M_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR"; author = "$STR_ACR";
    backpack = "CUP_B_ACRScout_m95";
    vehicleClass = "ACRX01"; //LESNI
    head = "H_ACR_A3_HelmetIA_vz95";
    displayName = "$STR_B_SOLDIER_M_F0"; // Ostrostřelec
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform";
    weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"H_ACR_A3_HelmetIA_vz95","V_ACR_A3_PlateCarrierIA1_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"H_ACR_A3_HelmetIA_vz95","V_ACR_A3_PlateCarrierIA1_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    respawnItems[] = {"FirstAidKit","FirstAidKit"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_medic: B_medic_F
{
    _generalMacro = "B_medic_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR"; author = "$STR_ACR";
    vehicleClass = "ACRX01"; //LESNI
    backpack = "B_AssaultPack_rgr_Medic";
    displayName = "$STR_B_MEDIC_F0"; // Zdravotník
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform";
    weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    respawnItems[] = {"FirstAidKit","FirstAidKit"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_TL: B_Soldier_TL_F
{
    _generalMacro = "B_Soldier_TL_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR"; author = "$STR_ACR";
    vehicleClass = "ACRX01"; //LESNI
    displayName = "$STR_B_SOLDIER_TL_F0"; // Velitel týmu
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform";
    weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
    respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    respawnItems[] = {"FirstAidKit","FirstAidKit"};
    icon = "iconManLeader";
    canDeactivateMines = "true";
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'ACR_A3_Backpack_Carryall_vz95';_unit addMagazines ['30Rnd_556x45_Stanag',7];";
    };
};
class acr_a3_soldier_SL: B_Soldier_SL_F
{
    _generalMacro = "B_Soldier_SL_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR"; author = "$STR_ACR";
    vehicleClass = "ACRX01"; //LESNI
    displayName = "$STR_B_Soldier_SL_F0"; // Velitel družstva
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform";
    weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
    respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    respawnItems[] = {"FirstAidKit","FirstAidKit"};
    icon = "iconManLeader";
    canDeactivateMines = "true";
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'CUP_B_ACRPara_m95';_unit addMagazines ['30Rnd_556x45_Stanag',7];";
    };
};
class acr_a3_soldier_repair: B_soldier_repair_F
{
    _generalMacro = "B_soldier_repair_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR"; author = "$STR_ACR";
    vehicleClass = "ACRX01"; //LESNI
    backpack = "";
    displayName = "$STR_B_ENGINEER_F0"; // Ženista
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform";
    weapons[] = {"acr_a3_Sa58RIS1_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_Sa58RIS1_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
    magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade"};
    respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade"};
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    respawnItems[] = {"FirstAidKit","FirstAidKit"};
    canDeactivateMines = "true";
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'ACR_A3_Backpack_Kitbag_vz95';_unit addMagazines [""CUP_30Rnd_Sa58_M"",3];_unit addItem 'ToolKit';";
    };
};
class acr_a3_soldier_MAT: B_soldier_LAT_F
{
    _generalMacro = "B_soldier_LAT_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR"; author = "$STR_ACR";
    vehicleClass = "ACRX01"; //LESNI
    backpack = "ACR_A3_B_AssaultPack_rgr_LAT";
    displayName = "$STR_B_SOLDIER_AT_F0"; // Raketometčík
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform";
    weapons[] = {"acr_a3_Sa58RIS2_Arco_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
    respawnWeapons[] = {"acr_a3_Sa58RIS2_Arco_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
    magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","SmokeShell","SmokeShell","HandGrenade","CUP_MAAWS_HEAT_M"};
    respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","SmokeShell","SmokeShell","HandGrenade","CUP_MAAWS_HEAT_M"};
    linkedItems[] = {"H_ACR_A3_HelmetIA_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"H_ACR_A3_HelmetIA_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    respawnItems[] = {"FirstAidKit","FirstAidKit"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};

// vz.95 Poust
class acr_a3_soldier_01_des: acr_a3_soldier_01
{
    vehicleClass = "ACRX03"; //POUST
    uniformClass = "U_ACR_A3_CombatUniform_Des";
    weapons[] = {"acr_a3_Sa58RIS1_camo_Aco_Laser","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_Sa58RIS1_camo_Aco_Laser","Throw","Put","Binocular"};
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.rvmat"};
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'CUP_B_ACRScout_m95';_unit addMagazines ['CUP_30Rnd_Sa58_M',2];";
    };
};
class acr_a3_soldier_GL_des: acr_a3_soldier_GL // Granátometčík
{
    backpack = "CUP_B_ACRScout_m95";
    vehicleClass = "ACRX03"; //POUST
    uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.rvmat"};
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Des.paa","\acr_a3\acr_a3_characters\data\ACR_Basicbody_des.paa"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_AR_des: acr_a3_soldier_AR
{
    vehicleClass = "ACRX03"; //POUST
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.rvmat"};
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'CUP_B_ACRScout_m95';_unit addMagazines ['acr_a3_100Rnd_762x51_B_M60E4',3];";
    };
};
class acr_a3_soldier_M_des: acr_a3_soldier_M
{
    backpack = "CUP_B_ACRScout_m95";
    vehicleClass = "ACRX03"; //POUST
    uniformClass = "U_ACR_A3_CombatUniform_Des";
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_medic_des: acr_a3_soldier_medic
{
    vehicleClass = "ACRX03"; //POUST
    backpack = "B_AssaultPack_rgr_Medic";
    uniformClass = "U_ACR_A3_CombatUniform_Des";
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_TL_des: acr_a3_soldier_TL
{
    vehicleClass = "ACRX03"; //POUST
    backpack = "ACR_A3_Backpack_Carryall_vz95";
    uniformClass = "U_ACR_A3_CombatUniform_Des";
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_O_Neg'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_SL_des: acr_a3_soldier_SL
{
    vehicleClass = "ACRX03"; //POUST
    backpack = "ACR_A3_Backpack_Carryall_vz95";
    uniformClass = "U_ACR_A3_CombatUniform_Des";
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_O_Neg'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_repair_des: acr_a3_soldier_repair
{
    vehicleClass = "ACRX03"; //POUST
    backpack = "";
    uniformClass = "U_ACR_A3_CombatUniform_Des";
    weapons[] = {"acr_a3_Sa58RIS1_camo_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_Sa58RIS1_camo_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'ACR_A3_Backpack_Kitbag_vz95';_unit addMagazines [""CUP_30Rnd_Sa58_M"",3];_unit addItem 'ToolKit';";
    };
};
class acr_a3_soldier_MAT_des: acr_a3_soldier_MAT
{
    vehicleClass = "ACRX03"; //POUST
    backpack = "ACR_A3_B_AssaultPack_rgr_LAT";
    uniformClass = "U_ACR_A3_CombatUniform_Des";
    weapons[] = {"acr_a3_Sa58RIS2_camo_Arco_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
    respawnWeapons[] = {"acr_a3_Sa58RIS2_camo_Arco_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
    linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Neg'] call BIS_fnc_setUnitInsignia;";
    };
};