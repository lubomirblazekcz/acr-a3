class CfgPatches {
    class CSAT_Vests {
	units[] = {};
        weapons[] =
		{};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };
};

class cfgWeapons {
	class Vest_Camo_Base;

	class VestItem;

class Czech_Bare : Vest_Camo_Base
	{
		scope = 2;
		displayName = "Czech Vest (Bare)";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "YOURPATHHERE\vestbase";
        
	class ItemInfo : VestItem
	{
		uniformModel = "YOURPATHHERE\vestbase";
		containerClass = "Supply40";
		mass = 60;
		armor = 5*0.5;
		passThrough = 0.7;
		};
	};
};