#define _ARMA_

class CfgPatches
{
	class acr_a3_Hunter
	{
		units[] = {"ACR_Hunter_Unarmed", "ACR_Hunter_HMG", "ACR_Hunter_GMG"};
		author = "$STR_ACR";
//		authorUrl = "http://505skss.team-forum.net/";
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class B_MRAP_01_F;
	class B_MRAP_01_hmg_F;
	class B_MRAP_01_gmg_F;
	class ACR_Hunter_Unarmed: B_MRAP_01_F
	{
		side = 1;
		faction = "ACR";
		vehicleclass = "Car";
		displayName = "M-ATV";
		author = "$STR_ACR";
		crew = "ACR_MOUT_Vojak01";
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\hunter\data\Hunter_Kastle.paa","\acr_a3_vehicles\hunter\data\Hunter_ostatni.paa",""};
/*		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 8;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
		};
*/	};
	class ACR_Hunter_HMG: B_MRAP_01_hmg_F
	{
		side = 1;
		faction = "ACR";
		vehicleclass = "Car";
		displayName = "M-ATV HMG";
		author = "$STR_ACR";
		crew = "ACR_MOUT_Vojak01";
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\hunter\data\Hunter_Kastle.paa","\acr_a3_vehicles\hunter\data\Hunter_ostatni.paa","\A3\Data_F\Vehicles\Turret_CO.paa"};
/*		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 8;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
		};
*/	};
	class ACR_Hunter_GMG: B_MRAP_01_gmg_F
	{
		side = 1;
		faction = "ACR";
		vehicleclass = "Car";
		displayName = "M-ATV GMG";
		author = "$STR_ACR";
		crew = "ACR_MOUT_Vojak01";
		hiddenSelectionsTextures[] = {"\acr_a3_vehicles\hunter\data\Hunter_Kastle.paa","\acr_a3_vehicles\hunter\data\Hunter_ostatni.paa","\A3\Data_F\Vehicles\Turret_CO.paa"};
/*		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 8;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
		};
*/	};
};
//};
