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
	class ACR //class pod jakou frakci budou
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
	class ACRX0
	{
		displayName = "$STR_ACR_MENVZ95REC"; // VZ95 Specialni
	};
    class ACRX0_Des
    {
        displayName = "$STR_ACR_MENVZ95REC_DES"; // VZ95 Des Specialni
    };
	class ACRX00
	{
		displayName = "$STR_ACR_MEN"; //vz. 95 zakladni vojaci a piloti STRINGTABLETEXT: Men
	};
	class ACRX01
	{
		displayName = "$STR_ACR_MENVZ95"; // vz.95 STRINGTABLETEXT: Men (vz. 95)
	};
	class ACRX02
	{
		displayName = "$STR_ACR_MEN_MOUT"; //MOUT
	};
	class ACRX02_DES
	{
		displayName = "$STR_ACR_MEN_MOUT_DES"; //MOUT Des
	};
	class ACRX03
	{
		displayName = "$STR_ACR_MEN_DESERT"; // vz.95 Des
	};
	class ACRX04
	{
		displayName = "$STR_ACR_SNIP"; //sniperi se krovim
	};
};