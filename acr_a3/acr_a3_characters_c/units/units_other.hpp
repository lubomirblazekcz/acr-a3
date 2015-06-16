class B_ACR_A3_Spotter: B_spotter_F
{
    _generalMacro = "B_spotter_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR_A3";
    author = "$STR_ACR";
    vehicleClass = "MenSniper"; //SNIPERI
    displayName = "$STR_B_SPOTTER_F0";
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_SniperGhillie";
    model = "\A3\characters_f\Common\ghillie.p3d";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_ghillie.paa"};
    weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
    respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    Items[] = {"optic_hamr","FirstAidKit","FirstAidKit"};
    respawnItems[] = {"optic_hamr","FirstAidKit","FirstAidKit"};
    linkedItems[] = {"V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};
class B_ACR_A3_Sniper: B_sniper_F
{
    _generalMacro = "B_sniper_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR_A3";
    author = "$STR_ACR";
    vehicleClass = "MenSniper"; //SNIPERI
    displayName = "$STR_B_SNIPER_F0";
    genericNames = "CzechMen";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_SniperGhillie";
    weapons[] = {"acr_a3_CZ750_SOS","acr_a3_P07","Throw","Put","Rangefinder"};
    respawnWeapons[] = {"acr_a3_CZ750_SOS","acr_a3_P07","Throw","Put","Rangefinder"};
    magazines[] = {"CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag"};
    respawnMagazines[] = {"CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","16Rnd_9x21_Mag","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    respawnItems[] = {"FirstAidKit","FirstAidKit"};
    linkedItems[] = {"V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
    };
};
class B_ACR_A3_Spotter_des: B_ACR_A3_Spotter
{
    displayName = "$STR_ACR_SPOTTER_DES";
    uniformClass = "U_ACR_A3_SniperGhillie_des";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_ghillie_des.paa"};
    linkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};
class B_ACR_A3_Sniper_des: B_ACR_A3_Sniper
{
    displayName = "$STR_ACR_SNIPER_DES";
    uniformClass = "U_ACR_A3_SniperGhillie_des";
    linkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
    };
};
class B_ACR_A3_Pilot: B_Helipilot_F
{
    _generalMacro = "B_Helipilot_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR_A3";
    author = "$STR_ACR";
    vehicleClass = "Men"; //zaklad
    displayName = "$STR_B_HELIPILOT_F0";
    genericNames = "CzechMen";
    model = "\acr_a3\acr_a3_characters\coverall_ACR.p3d";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_HeliPilotCoveralls_rgr";
    hiddenSelections[] = {"Camo", "insignia"};
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\coverall_co.paa"};
    weapons[] = {"CUP_smg_EVO","acr_a3_P07","Throw","Put","Rangefinder"};
    respawnWeapons[] = {"CUP_smg_EVO","acr_a3_P07","Throw","Put","Rangefinder"};
    magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
    respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
    linkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    respawnItems[] = {"FirstAidKit","FirstAidKit"};
    class Wounds
    {
        tex[]={"acr_a3\acr_a3_characters\data\w1_coverall_mc.paa" , "acr_a3\acr_a3_characters\data\w2_coverall_mc.paa"};
        mat[]={"acr_a3\acr_a3_characters\data\coverall.rvmat" , "acr_a3\acr_a3_characters\data\w1_coverall.rvmat" , "acr_a3\acr_a3_characters\data\w2_coverall.rvmat"};
    };
};
class B_ACR_A3_Pilot_des: B_ACR_A3_Pilot
{
    vehicleClass = "ACR_A3_Men_vz95_D";
    model = "\acr_a3\acr_a3_characters\coverall_des_ACR.p3d";
    uniformClass = "U_ACR_A3_HeliPilotCoveralls_khk";
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\coverall_des_co.paa"};
    linkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
};
class B_ACR_A3_Officer: B_officer_F //znackablabla
{
    _generalMacro = "B_officer_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR_A3";
    author = "$STR_ACR";
    vehicleClass = "Men";
    displayName = "$STR_B_OFFICER_F0";
    genericNames = "CzechMen";
    model = "\A3\Characters_F_beta\indep\ia_officer.p3d";
    uniformAccessories[] = {};
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_OfficerUniform_vz95";
    weapons[] = {"acr_a3_P07","Throw","Put","Rangefinder"};
    respawnWeapons[] = {"acr_a3_P07","Throw","Put","Rangefinder"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_green","Chemlight_green"};
    respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"H_ACR_A3_Beret_red","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"H_ACR_A3_Beret_red","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"FirstAidKit"};
    respawnItems[] = {"FirstAidKit"};
    icon = "iconManOfficer";
    hiddenSelections[] = {"Camo1","Camo2","insignia"};
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Offic.paa","\acr_a3\acr_a3_characters\data\ACR_Uniforma_Svetr.paa"};
};
class B_ACR_A3_Officer_des: B_ACR_A3_Officer //znackablabla
{
    vehicleClass = "ACR_A3_Men_vz95_D";
    uniformClass = "U_ACR_A3_OfficerUniform_des";
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Offic_des.paa","\acr_a3\acr_a3_characters\data\ACR_Uniforma_Svetr_des.paa"};
};
class B_ACR_A3_Soldier_lite: B_Soldier_lite_F
{
    _generalMacro = "B_Soldier_lite_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR_A3";
    author = "$STR_ACR";
    vehicleClass = "Men";
    displayName = "$STR_B_SOLDIER_LITE_F0";
    genericNames = "CzechMen";
    model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_SweaterUniform_vz95";
    hiddenSelections[] = {"Camo", "insignia"};
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Svetr.paa"};
    weapons[] = {"Throw","Put","Rangefinder"};
    respawnWeapons[] = {"Throw","Put","Rangefinder"};
    magazines[] = {"Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
    respawnMagazines[] = {"Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
    linkedItems[] = {"V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"FirstAidKit"};
    respawnItems[] = {"FirstAidKit"};
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_unit = _this select 0;[_unit,'ACR_Flag'] call BIS_fnc_setUnitInsignia;";
    };
};
class B_ACR_A3_Soldier_lite_des: B_ACR_A3_Soldier_lite
{
    vehicleClass = "ACR_A3_Men_vz95_D";
    uniformClass = "U_ACR_A3_SweaterUniform_des";
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Svetr_des.paa"};
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_unit = _this select 0;[_unit,'ACR_Flag'] call BIS_fnc_setUnitInsignia;";
    };
};
class B_ACR_A3_crew: B_crew_F
{
    _generalMacro = "B_Soldier_lite_F";
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    faction = "ACR_A3";
    author = "$STR_ACR";
    vehicleClass = "Men";
    genericNames = "CzechMen";
    model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    uniformClass = "U_ACR_A3_SweaterUniform_vz95";
    hiddenSelections[] = {"Camo", "insignia"};
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Svetr.paa"};
    weapons[] = {"CUP_arifle_Sa58V","Throw","Put","Rangefinder"};
    respawnWeapons[] = {"CUP_arifle_Sa58V","Throw","Put","Rangefinder"};
    magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
    respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
    linkedItems[] = {"rhs_tsh4","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"rhs_tsh4","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    Items[] = {"FirstAidKit"};
    respawnItems[] = {"FirstAidKit"};
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_unit = _this select 0;[_unit,'ACR_Flag'] call BIS_fnc_setUnitInsignia;";
    };
};
class B_ACR_A3_crew_des: B_ACR_A3_crew
{
    vehicleClass = "ACR_A3_Men_vz95_D";
    uniformClass = "U_ACR_A3_SweaterUniform_des";
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Svetr_des.paa"};
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_unit = _this select 0;[_unit,'ACR_Flag'] call BIS_fnc_setUnitInsignia;";
    };
};

class B_Soldier_diver_base_F: B_Soldier_base_F {};
class B_diver_F: B_Soldier_diver_base_F {};
class B_diver_TL_F: B_Soldier_diver_base_F {};
class B_diver_exp_F: B_Soldier_diver_base_F {};
class B_ACR_A3_diver: B_diver_F
{
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    genericNames = "CzechMen";
    faction = "ACR_A3";
    author = "$STR_ACR";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    backpack = "B_Assault_Diver";
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_unit = _this select 0;[_unit,'ACR_Patch'] call BIS_fnc_setUnitInsignia;";
    };
};
class B_ACR_A3_diver_TL: B_diver_TL_F
{
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    genericNames = "CzechMen";
    faction = "ACR_A3";
    author = "$STR_ACR";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_unit = _this select 0;[_unit,'ACR_Patch'] call BIS_fnc_setUnitInsignia;";
    };
};
class B_ACR_A3_diver_exp: B_diver_exp_F
{
    identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
    genericNames = "CzechMen";
    faction = "ACR_A3";
    author = "$STR_ACR";
    nakedUniform = "U_ACR_A3_BasicBody_blk";
    backpack = "B_AssaultPack_blk_DiverExp";
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_unit = _this select 0;[_unit,'ACR_Patch'] call BIS_fnc_setUnitInsignia;";
    };
};