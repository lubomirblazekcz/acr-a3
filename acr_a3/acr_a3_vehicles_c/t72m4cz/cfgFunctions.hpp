
class CfgFunctions
{
	class ACR_A3
	{
		tag = "ACR_A3";
		class functions
		{
			class rF_t72 
			{
				file = "\acr_a3\acr_a3_vehicles_c\t72m4cz\RDS_rF_t72.sqf";
				description = "FCS for T72";
			};
			class rF_t72_Animate
			{
				file = "\acr_a3\acr_a3_vehicles_c\t72m4cz\RDS_rF_T72_anim.sqf";
				description = "FCS for T72 Animation";
			};
			class getFov
			{
				file = "\acr_a3\acr_a3_vehicles_c\t72m4cz\RDS_rF_T72_fov.sqf";
				description = "Get FOV Function";
			};
		};
	};
};


class CfgSounds
{
	class ACR_A3_RDS_Error
	{
		name="Tank beep";
		sound[]=
		{
			"\acr_a3\acr_a3_vehicles\t72m4cz\Sounds\alarm_loop1.wss",
			21,
			1
		};
		titles[]={};
	};
};