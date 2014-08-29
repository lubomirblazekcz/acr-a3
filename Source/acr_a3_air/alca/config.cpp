#define _ARMA_

class CfgPatches
{
	class acr_a3_alca
	{
		units[] = {"ACR_A3_L159_Alca_CAS", "ACR_A3_L159_Alca_AA", "ACR_A3_L39_Albatros_CAS", "ACR_A3_L39_Albatros_AA"};
		weapons[] = {};
		requiredVersion = 0.1;
		author = "$STR_ACR";
		requiredAddons[] = {"A3_Air_F"};
	};
};
class CfgVehicles
{
	class I_Plane_Fighter_03_CAS_F;
	class I_Plane_Fighter_03_AA_F;
    class ACR_A3_L159_Alca_CAS: I_Plane_Fighter_03_CAS_F
    {
		author = "$STR_ACR";
        scope = 2;
        vehicleclass = "Air";
        displayName = "$STR_ACR_ALCA_CAS";
        crew = "ACR_Pilot";
        typicalCargo[] = {"ACR_Pilot"};
		side = 1;
		faction = "ACR";
		_generalMacro = "I_Plane_Fighter_03_CAS_F";
        hiddenSelectionsTextures[] = {"\acr_a3_air\alca\data\l159_body_1_co.paa","\acr_a3_air\alca\data\l159_body_2_co.paa"};

    };
    class ACR_A3_L159_Alca_AA: I_Plane_Fighter_03_AA_F
    {
        author = "$STR_ACR";
        scope = 2;
        vehicleclass = "Air";
        displayName = "$STR_ACR_ALCA_AA";
        crew = "ACR_Pilot";
        typicalCargo[] = {"ACR_Pilot"};
        side = 1;
        faction = "ACR";
        _generalMacro = "I_Plane_Fighter_03_AA_F";
        hiddenSelectionsTextures[] = {"\acr_a3_air\alca\data\l159_body_1_co.paa","\acr_a3_air\alca\data\l159_body_2_co.paa"};

    };
    class ACR_A3_L39_Albatros_CAS: I_Plane_Fighter_03_CAS_F
    {
        author = "$STR_ACR";
        scope = 2;
        vehicleclass = "Air";
        displayName = "$STR_ACR_ALBATROS_CAS";
        crew = "ACR_Pilot";
        typicalCargo[] = {"ACR_Pilot"};
        side = 1;
        faction = "ACR";
        _generalMacro = "I_Plane_Fighter_03_CAS_F";
        hiddenSelectionsTextures[] = {"\acr_a3_air\alca\data\l-39_body_acr_green_co.paa","\acr_a3_air\alca\data\l-39_body_1_acr_green_co.paa"};

    };
    class ACR_A3_L39_Albatros_AA: I_Plane_Fighter_03_AA_F
    {
        author = "$STR_ACR";
        scope = 2;
        vehicleclass = "Air";
        displayName = "$STR_ACR_ALBATROS_AA";
        crew = "ACR_Pilot";
        typicalCargo[] = {"ACR_Pilot"};
        side = 1;
        faction = "ACR";
        _generalMacro = "I_Plane_Fighter_03_AA_F";
        hiddenSelectionsTextures[] = {"\acr_a3_air\alca\data\l-39_body_acr_green_co.paa","\acr_a3_air\alca\data\l-39_body_1_acr_green_co.paa"};

    };
};
//};
