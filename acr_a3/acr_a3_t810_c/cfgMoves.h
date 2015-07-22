class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		T810Driver = "T810Driver";
		T810gunner = "T810gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class t810Driver_d: DefaultDie
		{
			actions = "DeadActions";
			file = "\acr_a3\acr_a3_t810\Anims\acr_t810Driver_d.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class t810gunner_d: t810Driver_d
		{
			file = "\acr_a3\acr_a3_t810\Anims\acr_t810gunner_d.rtm";
		};
		class t810Driver: Crew
		{
			file = "\acr_a3\acr_a3_t810\Anims\acr_t810Driver.rtm";
			interpolateTo[] = {"t810Driver_d",1};
		};
		class t810Gunner: Crew
		{
			file = "\acr_a3\acr_a3_t810\Anims\acr_t810gunner.rtm";
			interpolateTo[] = {"t810gunner_d",1};
		};
	};
};