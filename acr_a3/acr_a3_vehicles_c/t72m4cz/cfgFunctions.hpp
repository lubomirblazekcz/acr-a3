
class CfgFunctions
{
	class RDS
	{
		tag = "RDS";
		class functions
		{
			//T72
			class comm_t72 
			{
				file = "\RDS_Tank\t72\RDS_comm_t72.sqf";
				description = "T72 Commander periscope anims";
			};
			class rF_t72 
			{
				file = "\RDS_Tank\t72\RDS_rF_t72.sqf";
				description = "FCS for T72";
			};
			class rF_t72_Animate
			{
				file = "\RDS_Tank\t72\RDS_rF_T72_anim.sqf";
				description = "FCS for T72 Animation";
			};
			//T55
			class sight_t55 
			{
				file = "\RDS_Tank\t55\RDS_sight_T55.sqf";
				description = "FCS for T55";
			};
			//T34
			class sight_t34
			{
				file = "\RDS_Tank\t34\RDS_sight_T34.sqf";
				description = "FCS for T34";
			};
			//Misc
			class getFov
			{
				file = "\RDS_Tank\t72\RDS_rF_T72_fov.sqf";
				description = "Get FOV Function";
			};
		};
	};
};


class CfgSounds
{
	class RDS_Error
	{
		name="Tank beep";
		sound[]=
		{
			"\RDS_StaticW\data\alarm_loop1.wss",
			21,
			1
		};
		titles[]={};
	};
};