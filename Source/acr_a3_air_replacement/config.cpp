#define _ARMA_

class CfgPatches
{
	class acr_a3_air_replacement
	{
		units[] = {"ACR_A3_Mi_24v", "ACR_A3_Mi_24v_aa", "ACR_A3_Mi_24v_bmb", "ACR_A3_Mi_24p","ACR_A3_Mi_24vp","ACR_A3_Mi17_base_CZ_EP1","ACR_A3_Mi171Sh_rockets_CZ_EP1"};
		weapons[] = {};
		requiredVersion = 0.1;
		author = "$STR_ACR";
		requiredAddons[] = {"A3_Air_F","kae_SZ_air","Cha_Mi8"};
	};
};
class CfgVehicles
{
     class Kae_Mi_24v_CDF;
     class Kae_Mi_24v_CDF_aa;
     class Kae_Mi_24v_CDF_bmb;
     class Kae_Mi_24p_CDF;
     class Kae_Mi_24vp_CDF;
     class Cha_Mi171Sh_CZ_EP1;
     class Cha_Mi171Sh_rockets_CZ_EP1;
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
        class ACR_A3_Mi17_base_CZ_EP1: Cha_Mi171Sh_CZ_EP1
        {
            author = "$STR_ACR";
            faction = "ACR";
            crew = "ACR_Pilot";
            scope = 2;
            displayName = "Mi-17";
        };
        class ACR_A3_Mi171Sh_rockets_CZ_EP1: Cha_Mi171Sh_rockets_CZ_EP1
        {
            scope = 2;
            displayName = "Mi-17 (Rockets)";
            author = "$STR_ACR";
            crew = "ACR_Pilot";
            faction = "ACR";
        };
};
