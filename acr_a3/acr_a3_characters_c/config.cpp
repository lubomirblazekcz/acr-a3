class CfgPatches
{
	class acr_a3_characters_c
	{
		units[] = {"ACR_A3_GearBox","ACR_A3_Backpack_Carryall_vz95","ACR_A3_Backpack_Kitbag_vz95","ACRP_Vojak01","ACRP_Vojak02","ACRP_Vojak07","ACRP_Vojak03","ACRP_Vojak04","ACRP_Vojak05","ACRP_Vojak10","ACRP_Vojak06","ACRP_Des_Vojak06","ACRP_Des_Vojak01","ACRP_Des_Vojak02","ACRP_Des_Vojak03","ACRP_Des_Vojak04","ACRP_Des_Vojak05","ACRP_Des_Vojak07","ACRP_Des_Vojak10","ACR_Vojak01","ACR_Vojak02","ACR_Vojak07","ACR_Vojak03","ACR_Vojak04","ACR_Vojak05","ACR_Sniper","ACR_Sniper2","ACR_Sniper_Des","ACR_Sniper2_Des","ACR_Vojak10","ACR_Vojak06","ACR_Vojak12","ACR_MOUT_Vojak01","ACR_MOUT_Vojak02","ACR_MOUT_Vojak07","ACR_MOUT_Vojak03","ACR_MOUT_Vojak04","ACR_MOUT_Vojak05","ACR_MOUT_Vojak10","ACR_MOUT_Vojak06","ACR_MOUT_Des_Vojak01","ACR_MOUT_Des_Vojak02","ACR_MOUT_Des_Vojak07","ACR_MOUT_Des_Vojak03","ACR_MOUT_Des_Vojak04","ACR_MOUT_Des_Vojak05","ACR_MOUT_Des_Vojak10","ACR_MOUT_Des_Vojak06","ACR_Des_Vojak01","ACR_Des_Vojak02","ACR_Des_Vojak07","ACR_Des_Vojak03","ACR_Des_Vojak04","ACR_Des_Vojak05","ACR_Des_Vojak10","ACR_Des_Vojak06","ACR_Pilot","ACR_Dustojnik","ACR_Neozbrojeny","ACR_Pilot_des","ACR_Dustojnik_des","ACR_Neozbrojeny_des"};
		weapons[] = {"V_ACR_A3_PlateCarrierIA2_vz95","V_ACR_A3_PlateCarrier1_vz95","V_ACR_A3_PlateCarrier2_vz95","V_ACR_A3_PlateCarrier1_rgr","V_ACR_A3_PlateCarrier2_rgr","V_ACR_A3_PlateCarrier1_khk","V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_HelmetIA_vz95","H_ACR_A3_HelmetIA_vz95_des","H_ACR_A3_HelmetB_rgr","H_ACR_A3_Beret_red","H_ACR_A3_Booniehat_vz95","H_ACR_A3_Cap_rgr","U_ACR_A3_CombatUniform","U_ACR_A3_CombatUniform_tshirt","U_ACR_A3_CombatUniform_vest","U_ACR_A3_CombatUniform_MOUT","U_ACR_A3_CombatUniform_MOUT_vest","U_ACR_A3_CombatUniform_Des","U_ACR_A3_CombatUniform_Des_tshirt","U_ACR_A3_CombatUniform_Des_vest","U_ACR_A3_HeliPilotCoveralls_rgr","U_ACR_A3_OfficerUniform_vz95","U_ACR_A3_SweaterUniform_vz95","U_ACR_A3_HeliPilotCoveralls_khk","U_ACR_A3_OfficerUniform_des","U_ACR_A3_SweaterUniform_des","U_ACR_A3_SniperGhillie","U_ACR_A3_SniperGhillie_Des","U_ACR_A3_CombatUniform_MOUT_Des","U_ACR_A3_CombatUniform_MOUT_Des_vest"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Characters_F_BLUFOR","CUP_Weapons_Backpacks","acr_a3_dubbingradio"};
	};
};
class GenericNames
{
    #include "CzechMen.hpp"
};
class UniformSlotInfo;

#include "cfgWeapons.hpp"
#include "cfgVehicles.hpp"
#include "cfgGroups.hpp"
#include "CfgUnitInsignia.hpp"