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

class CfgMods
{
  class Mod_Base;
  class ACR_A3: Mod_Base
  {
    picture = "\acr_a3\acr_a3_main\data\logo.paa";
    logo = "\acr_a3\acr_a3_main\data\logo.paa";
    logoOver = "\acr_a3\acr_a3_main\data\logo_glow.paa";
    logoSmall = "\acr_a3\acr_a3_main\data\logo.paa";
    tooltipOwned = "Army of the Czech Republic A3 - ACR_A3";
    action = "https://forums.bistudio.com/topic/172582-army-of-the-czech-republic-a3-acr-a3/";
    dlcColor[] = {0.31,0.78,0.78,1};
    overview = "This mod contains various infantry units, weapons and equipment. Weapons are ports from Arma 2 and part of CUP. Vehicles are also ports from Arma 2. Our goal is to include all of the content from the Arma 2 ACR DLC in Arma 3 standards.";
    hideName = 1;
    hidePicture = 0;
    name = "Army of the Czech Republic A3 - ACR_A3";
    dir = "acr_a3";
  };
};