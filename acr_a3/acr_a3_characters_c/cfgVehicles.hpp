class cfgVehicles
{
	class B_Soldier_F;
    class B_Soldier_base_F;
    class B_soldier_LAT_F;
    class B_soldier_repair_F;
    class B_Soldier_TL_F;
    class B_medic_F;
    class B_soldier_M_F;
    class B_Soldier_GL_F;
    class B_recon_TL_F;
    class B_recon_M_F;
    class B_recon_medic_F;
    class B_recon_F;
    class B_recon_JTAC_F;
    class B_recon_LAT_F;
    class B_recon_exp_F;
    class B_soldier_AR_F;
    class Man;
	class B_Carryall_mcamo;
	class B_Kitbag_cbr;
	class B_spotter_F;
	class B_sniper_F;
	class B_supplyCrate_F;
	class B_Kitbag_rgr_Exp;
	class B_Kitbag_rgr;
	// Batohy
	class Bag_Base;
    class CUP_B_ACRPara_Base: Bag_Base
    {
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_CUPbatoh.paa"; //ikona
		hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\backpack_acr_co.paa"};
        model = "\acr_a3\acr_a3_characters\CUP_Backpack_ACR.p3d";
		author = "$STR_ACR";
    };
    class CUP_B_ACRPara_m95: CUP_B_ACRPara_Base
    {
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_CUPbatoh.paa"; //ikona
		displayName = "$STR_ACR_BACKPACK_A2";
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\backpack_acr_co.paa"};
		author = "$STR_ACR";
    };
    class CUP_B_ACRScout_Base: Bag_Base
    {
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_CUPbatoh02.paa"; //ikona
		hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\acr_equip2_co.paa"};
        model = "\acr_a3\acr_a3_characters\CUP_Scoutpack_ACR.p3d";
		author = "$STR_ACR";
        maximumLoad = 80;
        mass = 15;
    };
    class CUP_B_ACRScout_m95: CUP_B_ACRScout_Base
    {
        picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_CUPbatoh02.paa"; //ikona
		displayName = "$STR_ACR_KITBAG_A2";
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\acr_equip2_co.paa"};
		author = "$STR_ACR";
        maximumLoad = 80;
        mass = 15;
    };
	class ACR_A3_Backpack_Carryall_vz95: B_Carryall_mcamo
	{
		scope = 2;
		displayName = "$STR_ACR_BACKPACK";
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_batoh02.paa"; //ikona
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Batoh02.paa"};
		author = "$STR_ACR";
	};
	class ACR_A3_Backpack_Kitbag_vz95: B_Kitbag_rgr {
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        displayName = "$STR_ACR_KITBAG";
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Batoh.paa"};
		picture = "\acr_a3\acr_a3_characters\data\UI\ikona_ACR_batoh.paa"; //ikona
		author = "$STR_ACR";
        maximumLoad = 200;
        mass = 25;
    };
    class B_AssaultPack_rgr;
    class ACR_A3_B_AssaultPack_rgr_LAT: B_AssaultPack_rgr {
        scope = 1;
        class TransportMagazines
        {
            class _xx_Titan_AT
            {
                magazine = "CUP_MAAWS_HEAT_M";
                count = 2;
            };
            class _xx_Titan_AP
            {
                magazine = "CUP_MAAWS_HEDP_M";
                count = 1;
            };
        };
    };
    class B_AssaultPack_cbr;
    class ACR_A3_B_AssaultPack_cbr_LAT: B_AssaultPack_cbr {
        scope = 1;
        class TransportMagazines
        {
            class _xx_Titan_AT
            {
                magazine = "CUP_MAAWS_HEAT_M";
                count = 2;
            };
            class _xx_Titan_AP
            {
                magazine = "CUP_MAAWS_HEDP_M";
                count = 1;
            };
        };
    };
    // Base Class
    class ACR_Underwear_Character: B_Soldier_base_F //The soldier who appears wearing your underwear class
    {
        scope = 1;//1 = private and ensures it doesnt list as a character in the editor
        displayName = "ACR Example Underwear Character";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        model = "\A3\Characters_F\Common\basicbody";
		genericNames = "CzechMen";
        uniformClass = "ACR_blk_BasicBody"; //Your underwear class in cfgweapons
        weapons[] = {};
        magazines[] = {};
        respawnWeapons[] = {};
        respawnMagazines[] = {};
        items[] = {};
        linkeditems[] = {};
        respawnlinkeditems[] = {};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Basicbody.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
    };

	// vz.95 Lesni
	class ACR_Vojak01: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX01"; //LESNI
		displayName = "$STR_A3_CFGVEHICLES_B_SOLDIER_F0"; // Střelec
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
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
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_O_Pos'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'CUP_B_ACRScout_m95';_unit addMagazines ['CUP_30Rnd_Sa58_M',2];";
        };
	};
	class ACR_Vojak02: B_Soldier_GL_F // Granátometčík
	{
		_generalMacro = "B_Soldier_GL_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		backpack = "CUP_B_ACRScout_m95";
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX01"; //LESNI
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
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
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Neg'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Vojak03: B_soldier_AR_F
	{
		_generalMacro = "B_soldier_AR_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX01"; //LESNI
		displayName = "$STR_B_SOLDIER_AR_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
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
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_O_Pos'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'CUP_B_ACRScout_m95';_unit addMagazines ['acr_a3_100Rnd_762x51_B_M60E4',3];";
        };
	};
	class ACR_Vojak04: B_soldier_M_F
	{
		_generalMacro = "B_soldier_M_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		backpack = "CUP_B_ACRScout_m95";
		vehicleClass = "ACRX01"; //LESNI
		head = "H_ACR_A3_HelmetIA_vz95";
		displayName = "$STR_B_SOLDIER_M_F0"; // Ostrostřelec
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
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
	class ACR_Vojak05: B_medic_F
	{
		_generalMacro = "B_medic_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "$STR_B_MEDIC_F0"; // Zdravotník
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
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
	class ACR_Vojak06: B_Soldier_TL_F
	{
		_generalMacro = "B_Soldier_TL_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX01"; //LESNI
		displayName = "$STR_B_SOLDIER_TL_F0"; // Velitel týmu
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
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
	class ACR_Vojak07: B_soldier_repair_F
	{
		_generalMacro = "B_soldier_repair_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "";
		displayName = "$STR_B_ENGINEER_F0"; // Ženista
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
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
	class ACR_Vojak10: B_soldier_LAT_F
	{
		_generalMacro = "B_soldier_LAT_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "ACR_A3_B_AssaultPack_rgr_LAT";
		displayName = "$STR_B_SOLDIER_AT_F0"; // Raketometčík
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
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
	class ACR_Des_Vojak01: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX03"; //POUST
		displayName = "$STR_A3_CFGVEHICLES_B_SOLDIER_F0"; // Střelec
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"acr_a3_Sa58RIS1_camo_Aco_Laser","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_Sa58RIS1_camo_Aco_Laser","Throw","Put","Binocular"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","SmokeShell","SmokeShell","HandGrenade"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","SmokeShell","SmokeShell","HandGrenade"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.rvmat"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'CUP_B_ACRScout_m95';_unit addMagazines ['CUP_30Rnd_Sa58_M',2];";
        };
	};
	class ACR_Des_Vojak02: B_Soldier_GL_F // Granátometčík
	{
		_generalMacro = "B_Soldier_GL_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		backpack = "CUP_B_ACRScout_m95";
		vehicleClass = "ACRX03"; //POUST
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
		weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[] = {"camo", "camo2", "insignia"};
		hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.rvmat"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Des.paa","\acr_a3\acr_a3_characters\data\ACR_Basicbody_des.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Des_Vojak03: B_soldier_AR_F
	{
		_generalMacro = "B_soldier_AR_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX03"; //POUST
		displayName = "$STR_B_SOLDIER_AR_F0"; // Kulometčík
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
		weapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade"};
		respawnMagazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma.rvmat"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'CUP_B_ACRScout_m95';_unit addMagazines ['acr_a3_100Rnd_762x51_B_M60E4',3];";
        };
	};
	class ACR_Des_Vojak04: B_soldier_M_F
	{
		_generalMacro = "B_soldier_M_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		backpack = "CUP_B_ACRScout_m95";
		vehicleClass = "ACRX03"; //POUST
		displayName = "$STR_B_SOLDIER_M_F0"; // Ostrostřelec
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Des_Vojak05: B_medic_F
	{
		_generalMacro = "B_medic_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "$STR_B_MEDIC_F0"; // Zdravotník
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA1_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Des_Vojak06: B_Soldier_TL_F
	{
		_generalMacro = "B_Soldier_TL_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		displayName = "$STR_B_SOLDIER_TL_F0"; // Velitel týmu
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_O_Neg'] call BIS_fnc_setUnitInsignia;";
        };
	};
	class ACR_Des_Vojak07: B_soldier_repair_F
	{
		_generalMacro = "B_soldier_repair_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "";
		displayName = "$STR_B_ENGINEER_F0"; // Ženista
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"acr_a3_Sa58RIS1_camo_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"acr_a3_Sa58RIS1_camo_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'ACR_A3_Backpack_Kitbag_vz95';_unit addMagazines [""CUP_30Rnd_Sa58_M"",3];_unit addItem 'ToolKit';";
        };
	};
	class ACR_Des_Vojak10: B_soldier_LAT_F
	{
		_generalMacro = "B_soldier_LAT_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "ACR_A3_B_AssaultPack_rgr_LAT";
		displayName = "$STR_B_SOLDIER_AT_F0"; // Raketometčík
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"acr_a3_Sa58RIS2_camo_Arco_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
		respawnWeapons[] = {"acr_a3_Sa58RIS2_camo_Arco_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","SmokeShell","SmokeShell","HandGrenade","CUP_MAAWS_HEAT_M"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","SmokeShell","SmokeShell","HandGrenade","CUP_MAAWS_HEAT_M"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Neg'] call BIS_fnc_setUnitInsignia;";
        };
	};

    // vz.95 MOUT
    class ACR_MOUT_Vojak01: B_Soldier_F
    {
        _generalMacro = "B_Soldier_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        displayName = "$STR_A3_CFGVEHICLES_B_SOLDIER_F0"; // Střelec
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT";
        weapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.rvmat"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Vojak02: B_Soldier_GL_F // Granátometčík
    {
        _generalMacro = "B_Soldier_GL_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_tshirt";
        weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Vojak03: B_soldier_AR_F
    {
        _generalMacro = "B_soldier_AR_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        displayName = "$STR_B_SOLDIER_AR_F0"; // Kulometčík
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_vest";
        weapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade"};
        respawnMagazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.rvmat"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'CUP_B_ACRScout_m95';_unit addMagazines ['acr_a3_100Rnd_762x51_B_M60E4',3];";
        };
    };
    class ACR_MOUT_Vojak04: B_soldier_M_F
    {
        _generalMacro = "B_soldier_M_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        scope = 2;
        scopeCurator = 2;
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        backpack = "B_AssaultPack_rgr";
        head = "H_ACR_A3_HelmetB_rgr";
        displayName = "$STR_B_SOLDIER_M_F0"; // Ostrostřelec
        genericNames = "CzechMen";
        uniformAccessories[] = {};
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT";
        weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Vojak05: B_medic_F
    {
        _generalMacro = "B_medic_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        backpack = "B_AssaultPack_rgr_Medic"; // Zdravotník
        displayName = "$STR_B_MEDIC_F0";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT";
        weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Vojak06: B_Soldier_TL_F
    {
        _generalMacro = "B_Soldier_TL_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        backpack = "B_Carryall_oli";
        displayName = "$STR_B_SOLDIER_TL_F0"; // Velitel týmu
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT";
        weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Vojak07: B_soldier_repair_F
    {
        _generalMacro = "B_soldier_repair_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        backpack = "";
        displayName = "$STR_B_ENGINEER_F0"; // Ženista
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT";
        weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetIA_vz952","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        canDeactivateMines = "true";
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'B_Kitbag_rgr';_unit addItem 'ToolKit';";
        };
    };
    class ACR_MOUT_Vojak10: B_soldier_LAT_F
    {
        _generalMacro = "B_soldier_LAT_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02"; //MOUT
        backpack = "ACR_A3_B_AssaultPack_rgr_LAT";
        displayName = "$STR_B_SOLDIER_AT_F0"; // Raketometčík
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT";
        weapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell","HandGrenade","CUP_MAAWS_HEAT_M"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell","HandGrenade","CUP_MAAWS_HEAT_M"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier1_rgr","NVGoggles_OPFOR","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_rgr","NVGoggles_OPFOR","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };

    // vz.95 MOUT DES
    class ACR_MOUT_Des_Vojak01: B_Soldier_F
    {
        _generalMacro = "B_Soldier_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        displayName = "$STR_A3_CFGVEHICLES_B_SOLDIER_F0"; // Střelec
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
        weapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.rvmat"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT_des.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Des_Vojak02: B_Soldier_GL_F // Granátometčík
    {
        _generalMacro = "B_Soldier_GL_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
        weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Des_Vojak03: B_soldier_AR_F
    {
        _generalMacro = "B_soldier_AR_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        displayName = "$STR_B_SOLDIER_AR_F0"; // Kulometčík
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des_vest";
        weapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade"};
        respawnMagazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.rvmat"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT_des.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'B_AssaultPack_rgr';_unit addMagazines ['acr_a3_100Rnd_762x51_B_M60E4',3];";
        };
    };
    class ACR_MOUT_Des_Vojak04: B_soldier_M_F
    {
        _generalMacro = "B_soldier_M_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        scope = 2;
        scopeCurator = 2;
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        backpack = "B_AssaultPack_rgr";
        head = "H_ACR_A3_HelmetB_rgr";
        displayName = "$STR_B_SOLDIER_M_F0"; // Ostrostřelec
        genericNames = "CzechMen";
        uniformAccessories[] = {};
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
        weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Des_Vojak05: B_medic_F
    {
        _generalMacro = "B_medic_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        backpack = "B_AssaultPack_rgr_Medic"; // Zdravotník
        displayName = "$STR_B_MEDIC_F0";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
        weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Des_Vojak06: B_Soldier_TL_F
    {
        _generalMacro = "B_Soldier_TL_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        backpack = "B_Carryall_oli";
        displayName = "$STR_B_SOLDIER_TL_F0"; // Velitel týmu
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
        weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_MOUT_Des_Vojak07: B_soldier_repair_F
    {
        _generalMacro = "B_soldier_repair_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        backpack = "";
        displayName = "$STR_B_ENGINEER_F0"; // Ženista
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
        weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetIA_vz952","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        canDeactivateMines = "true";
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'B_Kitbag_rgr';_unit addItem 'ToolKit';";
        };
    };
    class ACR_MOUT_Des_Vojak10: B_soldier_LAT_F
    {
        _generalMacro = "B_soldier_LAT_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX02_DES"; //MOUT
        backpack = "ACR_A3_B_AssaultPack_rgr_LAT";
        displayName = "$STR_B_SOLDIER_AT_F0"; // Raketometčík
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
        weapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell","HandGrenade","CUP_MAAWS_HEAT_M"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell","HandGrenade","CUP_MAAWS_HEAT_M"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier1_rgr","NVGoggles_OPFOR","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_rgr","NVGoggles_OPFOR","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };


    // vz.95 Průzkum
    class ACRP_Vojak01: B_recon_F // Zvěd
    {
        _generalMacro = "B_recon_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        backpack = "ACR_A3_Backpack_Kitbag_vz95";
        vehicleClass = "ACRX0"; //RECON
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
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
    class ACRP_Vojak02: B_recon_JTAC_F // JTAC
    {
        _generalMacro = "B_recon_JTAC_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0"; //RECON
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
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
    class ACRP_Vojak03: B_soldier_AR_F // Kulometčík
    {
        _generalMacro = "B_soldier_AR_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0"; //RECON
        displayName = "$STR_ACR_KULOMET_F";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
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
    class ACRP_Vojak04: B_recon_M_F  // Ostrostřelec
    {
        _generalMacro = "B_recon_M_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        backpack = "ACR_A3_Backpack_Kitbag_vz95";
        vehicleClass = "ACRX0"; //RECON
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
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
    class ACRP_Vojak05: B_recon_medic_F // Zdravotník
    {
        _generalMacro = "B_recon_medic_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        scope = 2;
        scopeCurator = 2;
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0"; //RECON
        backpack = "B_AssaultPack_rgr_Medic";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
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
    class ACRP_Vojak06: B_recon_TL_F // Velitel týmu
    {
        _generalMacro = "B_recon_TL_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0"; //RECON
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
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
    class ACRP_Vojak07: B_recon_exp_F // Exp. specialsta
    {
        _generalMacro = "B_recon_exp_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0"; //RECON
        backpack = "ACR_A3_Backpack_Kitbag_vz95";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
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
    class ACRP_Vojak10: B_recon_LAT_F // Raketometčík
    {
        _generalMacro = "B_recon_LAT_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0"; //RECON
        backpack = "ACR_A3_B_AssaultPack_rgr_LAT";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
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
    class ACRP_Des_Vojak01: B_recon_F // Zvěd
    {
        _generalMacro = "B_recon_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        backpack = "B_Kitbag_cbr";
        vehicleClass = "ACRX0_Des"; //RECON
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
        weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_PlateCarrierIA2_khk","H_ACR_A3_Pakol_grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierIA2_khk","H_ACR_A3_Pakol_grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        canDeactivateMines = "true";
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Des_Vojak02: B_recon_JTAC_F // JTAC
    {
        _generalMacro = "B_recon_JTAC_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0_Des"; //RECON
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
        weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Laserdesignator"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","Laserbatteries"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","Laserbatteries"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_Booniehat_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_Booniehat_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Des_Vojak03: B_soldier_AR_F // Kulometčík
    {
        _generalMacro = "B_soldier_AR_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0_Des"; //RECON
        displayName = "$STR_ACR_KULOMET_F";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
        weapons[] = {"acr_a3_M60E4","acr_a3_SP01","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_M60E4","acr_a3_SP01","Throw","Put","Binocular"};
        magazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade"};
        respawnMagazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier1_khk","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_khk","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_O_Pos'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'B_AssaultPack_cbr';_unit addMagazines ['acr_a3_100Rnd_762x51_B_M60E4',3];";
        };
    };
    class ACRP_Des_Vojak04: B_recon_M_F  // Ostrostřelec
    {
        _generalMacro = "B_recon_M_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        backpack = "B_Kitbag_cbr";
        vehicleClass = "ACRX0_Des"; //RECON
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
        weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"H_ACR_A3_Cap_khk","V_PlateCarrierIA1_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"H_ACR_A3_Cap_khk","V_PlateCarrierIA1_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        canDeactivateMines = "true";
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Des_Vojak05: B_recon_medic_F // Zdravotník
    {
        _generalMacro = "B_recon_medic_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        scope = 2;
        scopeCurator = 2;
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0_Des"; //RECON
        backpack = "B_AssaultPack_cbr";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
        weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_SP01","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Des_Vojak06: B_recon_TL_F // Velitel týmu
    {
        _generalMacro = "B_recon_TL_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0_Des"; //RECON
        backpack = "B_Carryall_cbr";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
        weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_SP01","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_SP01","Throw","Put","Rangefinder"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_Cap_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_Cap_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        canDeactivateMines = "true";
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'B_Carryall_cbr';_unit addMagazines ['30Rnd_556x45_Stanag',5];";
        };
    };
    class ACRP_Des_Vojak07: B_recon_exp_F // Exp. specialsta
    {
        _generalMacro = "B_recon_exp_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0_Des"; //RECON
        backpack = "B_Kitbag_cbr";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
        weapons[] = {"SMG_02_ACO_F","acr_a3_SP01","Throw","Put","Binocular"};
        respawnWeapons[] = {"SMG_02_ACO_F","acr_a3_SP01","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","CUP_18Rnd_9x19_Phantom","CUP_18Rnd_9x19_Phantom","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier1_khk","H_ACR_A3_Pakol_grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_khk","H_ACR_A3_Pakol_grey","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_L","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_L","FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACRP_Des_Vojak10: B_recon_LAT_F // Raketometčík
    {
        _generalMacro = "B_recon_LAT_F";
        identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX0_Des"; //RECON
        backpack = "ACR_A3_B_AssaultPack_cbr_LAT";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
        weapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
        respawnWeapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell","HandGrenade","CUP_MAAWS_HEAT_M"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell","HandGrenade","CUP_MAAWS_HEAT_M"};
        linkedItems[] = {"H_ACR_A3_HelmetIA_Goggles_vz95_des","V_PlateCarrierIA2_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"H_ACR_A3_HelmetIA_Goggles_vz95_des","V_PlateCarrierIA2_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"muzzle_snds_M","FirstAidKit","FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };

	// Ostatni
    class ACR_Sniper: B_spotter_F
    {
        _generalMacro = "B_spotter_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX04"; //SNIPERI
        displayName = "$STR_B_SPOTTER_F0";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
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
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_Sniper2: B_sniper_F
    {
        _generalMacro = "B_sniper_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX04"; //SNIPERI
        displayName = "$STR_B_SNIPER_F0";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SniperGhillie";
        weapons[] = {"acr_a3_CZ750_SOS","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_CZ750_SOS","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag"};
        respawnMagazines[] = {"CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","16Rnd_9x21_Mag","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        linkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier2_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_Sniper_Des: B_spotter_F
    {
        _generalMacro = "B_spotter_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX04"; //SNIPERI
        displayName = "$STR_ACR_SPOTTER_DES";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SniperGhillie_des";
        model = "\A3\characters_f\Common\ghillie.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_ghillie_des.paa"};
        weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        Items[] = {"optic_hamr","FirstAidKit","FirstAidKit"};
        respawnItems[] = {"optic_hamr","FirstAidKit","FirstAidKit"};
        linkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_Sniper2_Des: B_sniper_F
    {
        _generalMacro = "B_sniper_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX04"; //SNIPERI
        displayName = "$STR_ACR_SNIPER_DES";
        genericNames = "CzechMen";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SniperGhillie_des";
        weapons[] = {"acr_a3_CZ750_SOS","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_CZ750_SOS","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag"};
        respawnMagazines[] = {"CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","16Rnd_9x21_Mag","CUP_10Rnd_762x51_CZ750_Tracer","CUP_10Rnd_762x51_CZ750_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        respawnItems[] = {"FirstAidKit","FirstAidKit"};
        linkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
    };

	class ACR_Pilot: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX00"; //zaklad
		displayName = "$STR_B_HELIPILOT_F0";
		genericNames = "CzechMen";
		model = "\acr_a3\acr_a3_characters\coverall_ACR.p3d";
		nakedUniform = "ACR_blk_BasicBody";
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
    class ACR_Pilot_des: B_Soldier_F
    {
        _generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX00"; //zaklad
        displayName = "$STR_ACR_HELIPILOT_DES";
        genericNames = "CzechMen";
        model = "\acr_a3\acr_a3_characters\coverall_des_ACR.p3d";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_HeliPilotCoveralls_khk";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\coverall_des_co.paa"};
        weapons[] = {"CUP_smg_EVO","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"CUP_smg_EVO","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
	class Wounds
	{
		tex[]={"acr_a3\acr_a3_characters\data\w1_coverall_mc.paa" , "acr_a3\acr_a3_characters\data\w2_coverall_mc.paa"};
		mat[]={"acr_a3\acr_a3_characters\data\coverall.rvmat" , "acr_a3\acr_a3_characters\data\w1_coverall.rvmat" , "acr_a3\acr_a3_characters\data\w2_coverall.rvmat"};
	};
	};
	class ACR_Dustojnik: B_Soldier_F //znackablabla
	{
		_generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		faction = "ACR"; author = "$STR_ACR";
		vehicleClass = "ACRX00"; //zaklad
		displayName = "$STR_B_OFFICER_F0";
		genericNames = "CzechMen";
		model = "\A3\Characters_F_beta\indep\ia_officer.p3d";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
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
    class ACR_Dustojnik_des: B_Soldier_F //znackablabla
    {
        _generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX00"; //zaklad
        displayName = "$STR_ACR_OFFICER_DES";
        genericNames = "CzechMen";
        model = "\A3\Characters_F_beta\indep\ia_officer.p3d";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_OfficerUniform_des";
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
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Offic_des.paa","\acr_a3\acr_a3_characters\data\ACR_Uniforma_Svetr_des.paa"};
    };
    class ACR_Neozbrojeny: B_Soldier_F
    {
        _generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX00"; //zaklad
        displayName = "$STR_B_SOLDIER_LITE_F0";
		genericNames = "CzechMen";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
        nakedUniform = "ACR_blk_BasicBody";
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
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Flag'] call BIS_fnc_setUnitInsignia;";
        };
    };
    class ACR_Neozbrojeny_des: B_Soldier_F
    {
        _generalMacro = "B_Soldier_F";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
        faction = "ACR"; author = "$STR_ACR";
        vehicleClass = "ACRX00"; //zaklad
        displayName = "$STR_ACR_SOLDIER_LITE_DES";
        genericNames = "CzechMen";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SweaterUniform_des";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_Svetr_des.paa"};
        weapons[] = {"CUP_arifle_Sa58V","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_Sa58V","Throw","Put","Rangefinder"};
        magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"rhs_tsh4","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"rhs_tsh4","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit"};
        respawnItems[] = {"FirstAidKit"};
        class eventHandlers
        {
            init = "_unit = _this select 0;[_unit,'ACR_Flag'] call BIS_fnc_setUnitInsignia;";
        };
    };

    // Bedna
    class ACR_A3_GearBox: B_supplyCrate_F
    {
        displayName = "$STR_ACR_GEAR";
        maximumLoad = 999999;
        transportMaxWeapons = 50000;
        transportMaxMagazines = 200000;
        transportMaxBackpacks = 2000;
//        class eventHandlers
//        {
//            init = "[""AmmoboxInit"",[_this select 0,false,{true}]] call BIS_fnc_arsenal;";
//        };
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {
            class _xx_U_ACR_A3_CombatUniform
            {
                name = "U_ACR_A3_CombatUniform";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_vest
            {
                name = "U_ACR_A3_CombatUniform_vest";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_tshirt
            {
                name = "U_ACR_A3_CombatUniform_tshirt";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_Des
            {
                name = "U_ACR_A3_CombatUniform_Des";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_Des_vest
            {
                name = "U_ACR_A3_CombatUniform_Des_vest";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_Des_tshirt
            {
                name = "U_ACR_A3_CombatUniform_Des_tshirt";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_MOUT
            {
                name = "U_ACR_A3_CombatUniform_MOUT";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_MOUT_vest
            {
                name = "U_ACR_A3_CombatUniform_MOUT_vest";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_MOUT_Des
            {
                name = "U_ACR_A3_CombatUniform_MOUT_Des";
                count = 30;
            };
            class _xx_U_ACR_A3_CombatUniform_MOUT_Des_vest
            {
                name = "U_ACR_A3_CombatUniform_MOUT_Des_vest";
                count = 30;
            };
            class _xx_U_ACR_A3_SniperGhillie
            {
                name = "U_ACR_A3_SniperGhillie";
                count = 30;
            };
            class _xx_U_ACR_A3_SniperGhillie_Des
            {
                name = "U_ACR_A3_SniperGhillie_Des";
                count = 30;
            };
            class _xx_U_ACR_A3_HeliPilotCoveralls_rgr
            {
                name = "U_ACR_A3_HeliPilotCoveralls_rgr";
                count = 30;
            };
            class _xx_U_ACR_A3_HeliPilotCoveralls_khk
            {
                name = "U_ACR_A3_HeliPilotCoveralls_khk";
                count = 30;
            };
            class _xx_U_ACR_A3_OfficerUniform_vz95
            {
                name = "U_ACR_A3_OfficerUniform_vz95";
                count = 30;
            };
            class _xx_U_ACR_A3_OfficerUniform_des
            {
                name = "U_ACR_A3_OfficerUniform_des";
                count = 30;
            };
            class _xx_U_ACR_A3_SweaterUniform_vz95
            {
                name = "U_ACR_A3_SweaterUniform_vz95";
                count = 30;
            };
            class _xx_U_ACR_A3_SweaterUniform_des
            {
                name = "";
                count = 30;
            };
            class _xx_V_ACR_A3_PlateCarrierIA2_vz95
            {
                name = "V_ACR_A3_PlateCarrierIA2_vz95";
                count = 30;
            };
            class _xx_V_ACR_A3_PlateCarrier1_vz95
            {
                name = "V_ACR_A3_PlateCarrier1_vz95";
                count = 30;
            };
            class _xx_V_ACR_A3_PlateCarrier2_vz95
            {
                name = "V_ACR_A3_PlateCarrier2_vz95";
                count = 30;
            };
            class _xx_V_ACR_A3_PlateCarrier1_rgr
            {
                name = "V_ACR_A3_PlateCarrier1_rgr";
                count = 30;
            };
            class _xx_V_ACR_A3_PlateCarrier2_rgr
            {
                name = "V_ACR_A3_PlateCarrier2_rgr";
                count = 30;
            };
            class _xx_V_ACR_A3_PlateCarrier1_khk
            {
                name = "V_ACR_A3_PlateCarrier1_khk";
                count = 30;
            };
            class _xx_V_ACR_A3_PlateCarrier2_khk
            {
                name = "V_ACR_A3_PlateCarrier2_khk";
                count = 30;
            };
            class _xx_V_TacVestIR_blk
            {
                name = "V_TacVestIR_blk";
                count = 30;
            };
            class _xx_V_TacVest_khk
            {
                name = "V_TacVest_khk";
                count = 30;
            };
            class _xx_V_TacVest_oli
            {
                name = "V_TacVest_oli";
                count = 30;
            };
            class _xx_V_Chestrig_khk
            {
                name = "V_Chestrig_khk";
                count = 30;
            };
            class _xx_V_Chestrig_rgr
            {
                name = "V_Chestrig_rgr";
                count = 30;
            };
            class _xx_V_BandollierB_khk
            {
                name = "V_BandollierB_khk";
                count = 30;
            };
            class _xx_V_BandollierB_rgr
            {
                name = "V_BandollierB_rgr";
                count = 30;
            };
            class _xx_H_ACR_A3_HelmetIA_vz95
            {
                name = "H_ACR_A3_HelmetIA_vz95";
                count = 30;
            };
            class _xx_H_ACR_A3_HelmetIA_vz95_des
            {
                name = "H_ACR_A3_HelmetIA_vz95_des";
                count = 30;
            };
            class _xx_H_ACR_A3_HelmetIA_Goggles_vz95
            {
                name = "H_ACR_A3_HelmetIA_Goggles_vz95";
                count = 30;
            };
            class _xx_H_ACR_A3_HelmetIA_Goggles_vz95_des
            {
                name = "H_ACR_A3_HelmetIA_Goggles_vz95_des";
                count = 30;
            };
            class _xx_H_ACR_A3_HelmetB_rgr
            {
                name = "H_ACR_A3_HelmetB_rgr";
                count = 30;
            };
            class _xx_H_ACR_A3_Beret_red
            {
                name = "H_ACR_A3_Beret_red";
                count = 30;
            };
            class _xx_H_ACR_A3_Booniehat_vz95
            {
                name = "H_ACR_A3_Booniehat_vz95";
                count = 30;
            };
			class _xx_H_ACR_A3_Booniehat_vz95_des
            {
                name = "H_ACR_A3_Booniehat_vz95_des";
                count = 30;
            };
            class _xx_H_ACR_A3_Booniehat_fold_vz95
            {
                name = "H_ACR_A3_Booniehat_fold_vz95";
                count = 30;
            };
            class _xx_H_ACR_A3_Cap_rgr
            {
                name = "H_ACR_A3_Cap_rgr";
                count = 30;
            };
            class _xx_H_ACR_A3_Cap_khk
            {
                name = "H_ACR_A3_Cap_khk";
                count = 30;
            };
            class _xx_H_ACR_A3_Pakol_grey
            {
                name = "H_ACR_A3_Pakol_grey";
                count = 30;
            };
        };
        class TransportBackpacks  {
            class _xx_ACR_A3_Backpack_Carryall_vz95
            {
                backpack = "ACR_A3_Backpack_Carryall_vz95";
                count = 30;
            };
            class _xx_ACR_A3_Backpack_Kitbag_vz95
            {
                backpack = "ACR_A3_Backpack_Kitbag_vz95";
                count = 30;
            };
            class _xx_B_Carryall_cbr
            {
                backpack = "B_Carryall_cbr";
                count = 30;
            };
            class _xx_B_Carryall_oli
            {
                backpack = "B_Carryall_oli";
                count = 30;
            };
            class _xx_B_Kitbag_cbr
            {
                backpack = "B_Kitbag_cbr";
                count = 30;
            };
            class _xx_B_Kitbag_rgr
            {
                backpack = "B_Kitbag_rgr";
                count = 30;
            };
            class _xx_B_FieldPack_cbr
            {
                backpack = "B_FieldPack_cbr";
                count = 30;
            };
            class _xx_B_FieldPack_oli
            {
                backpack = "B_FieldPack_oli";
                count = 30;
            };
            class _xx_B_AssaultPack_cbr
            {
                backpack = "B_AssaultPack_cbr";
                count = 30;
            };
            class _xx_B_AssaultPack_rgr
            {
                backpack = "B_AssaultPack_rgr";
                count = 30;
            };
            class _xx_B_TacticalPack_Base
            {
                backpack = "B_TacticalPack_Base";
                count = 30;
            };
            class _xx_B_TacticalPack_oli
            {
                backpack = "B_TacticalPack_oli";
                count = 30;
            };
            class _xx_B_Kitbag_mcamo
            {
                backpack = "B_Kitbag_mcamo";
                count = 0;
            };
        };
    };
};