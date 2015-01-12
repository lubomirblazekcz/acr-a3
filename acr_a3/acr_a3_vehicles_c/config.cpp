class CfgPatches
{

	class acr_a3_vehicles_c
	{
		units[] = {"B_ACR_A3_Quadbike_01", "B_ACR_A3_Boat_Transport_01"};
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_Armor_F","A3_Soft_F"};
	};
};

#include "CrewAnimations.hpp"
class cfgVehicles {
    class B_Quadbike_01_F;
    class B_Boat_Transport_01_F;
    class B_ACR_A3_Quadbike_01: B_Quadbike_01_F
    {
        faction = "ACR_A3";
        crew = "B_ACR_A3_Soldier_lite";
        typicalCargo[] = {"B_ACR_A3_Soldier_lite"};
    };


    class B_ACR_A3_Boat_Transport_01: B_Boat_Transport_01_F
    {
        crew = "B_ACR_A3_Soldier_lite";
        faction = "ACR_A3";
        typicalCargo[] = {"B_ACR_A3_Soldier_lite","B_ACR_A3_Soldier_lite"};
    };
};