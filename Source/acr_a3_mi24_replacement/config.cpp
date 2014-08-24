#define _ARMA_

class CfgPatches
{
	class acr_a3_mi24_replacement
	{
		units[] = {"ACR_A3_Mi_24v", "ACR_A3_Mi_24v_aa", "ACR_A3_Mi_24v_bmb", "ACR_A3_Mi_24p","ACR_A3_Mi_24vp"};
		weapons[] = {};
		requiredVersion = 0.1;
		author = "$STR_ACR";
		requiredAddons[] = {"A3_Air_F","kae_SZ_air"};
	};
};
class CfgVehicles
{
     class Kae_Mi_24v_CDF;
     class Kae_Mi_24v_CDF_aa;
     class Kae_Mi_24v_CDF_bmb;
     class Kae_Mi_24p_CDF;
     class Kae_Mi_24vp_CDF;
     class ACR_A3_Mi_24v: Kae_Mi_24v_CDF
        {
            author = "$STR_ACR";
            scope = 2;
            side = 1;
            crew = "ACR_Pilot";
            faction = "ACR";
            hiddenSelectionsTextures[] = {"\acr_a3_air_replacement\data\mi35_acr_1_co.paa","\acr_a3_air_replacement\data\mi35_acr_2_co.paa"};
        };
        class ACR_A3_Mi_24v_aa: Kae_Mi_24v_CDF_aa
        {
            author = "$STR_ACR";
            scope = 2;
            side = 1;
            crew = "ACR_Pilot";
            faction = "ACR";
            hiddenSelectionsTextures[] = {"\acr_a3_air_replacement\data\mi35_acr_1_co.paa","\acr_a3_air_replacement\data\mi35_acr_2_co.paa"};
        };
        class ACR_A3_Mi_24v_bmb: Kae_Mi_24v_CDF_bmb
        {
            author = "$STR_ACR";
            scope = 2;
            side = 1;
            crew = "ACR_Pilot";
            faction = "ACR";
            hiddenSelectionsTextures[] = {"\acr_a3_air_replacement\data\mi35_acr_1_co.paa","\acr_a3_air_replacement\data\mi35_acr_2_co.paa"};
        };
        class ACR_A3_Mi_24p: Kae_Mi_24p_CDF
        {
            author = "$STR_ACR";
            scope = 2;
            side = 1;
            crew = "ACR_Pilot";
            faction = "ACR";
            hiddenSelectionsTextures[] = {"\acr_a3_air_replacement\data\mi35_acr_1_co.paa","\acr_a3_air_replacement\data\mi35_acr_2_co.paa"};
        };
        class ACR_A3_Mi_24vp: Kae_Mi_24vp_CDF
        {
            author = "$STR_ACR";
            scope = 2;
            side = 1;
            crew = "ACR_Pilot";
            faction = "ACR";
            hiddenSelectionsTextures[] = {"\acr_a3_air_replacement\data\mi35_acr_1_co.paa","\acr_a3_air_replacement\data\mi35_acr_2_co.paa"};
        };
};
