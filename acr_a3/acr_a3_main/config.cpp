class CfgPatches
{
	class acr_a3_main
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class cfgFactionClasses
{
	class ACR_A3 //class pod jakou frakci budou
	{
		displayName = "$STR_ACR_FACTION"; //jmeno frakce v editoru STRINGTABLETEXT: ACR
		priority = -6;
		side = 1;
		genericNames = "CzechMen";
		identityTypes[] = {"Language_ACR_CZ","Head_Euro"};
		icon = "\acr_a3\acr_a3_main\data\icon_cz_co.paa";
		backpack_tf_faction_radio_api = "tf_anprc155_big_acr_a3";
	};
};

class CfgVehicleClasses
{
	class ACR_A3_Men_vz95_D
	{
		displayName = "$STR_ACR_MEN_DESERT"; // vz.95 Des
	};
	class ACR_A3_Men_MOUT
	{
		displayName = "$STR_ACR_MEN_MOUT"; //MOUT
	};
	class ACR_A3_Men_MOUT_D
	{
		displayName = "$STR_ACR_MEN_MOUT_DES"; //MOUT Des
	};
};