#define _ARMA_

class CfgPatches
{
	class acr_a3_mi17_replacement
	{
		units[] = {"ACR_A3_Mi17_base_CZ_EP1","ACR_A3_Mi171Sh_rockets_CZ_EP1"};
		weapons[] = {};
		requiredVersion = 0.1;
		author = "$STR_ACR";
		requiredAddons[] = {"A3_Air_F","Cha_Mi8"};
	};
};
class CfgVehicles
{
    class Cha_Mi171Sh_CZ_EP1;
    class Cha_Mi171Sh_rockets_CZ_EP1;
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
