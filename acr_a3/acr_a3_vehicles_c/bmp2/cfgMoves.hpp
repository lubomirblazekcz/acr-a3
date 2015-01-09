
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		BMP2_Commander = "BMP2_Commander";
		BMP2_CommanderOUT = "BMP2_CommanderOUT";
		BMP2_Driver = "BMP2_Driver";
		BMP2_DriverOUT = "BMP2_DriverOUT";
		BMP2_Gunner = "BMP2_Gunner";
		BMP2_GunnerOUT = "BMP2_GunnerOUT";
		BMP2_Cargo04 = "BMP2_Cargo04";
		Stryker_Cargo01 = "Stryker_Cargo01";
		HMMWV_Gunner04 = "HMMWV_Gunner04";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_BMP2_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\KIA_BMP2_Commander.rtm";
			connectTo[] = {"Unconscious",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class BMP2_Commander: Crew
		{
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\BMP2_Commander.rtm";
			interpolateTo[] = {"KIA_BMP2_Commander",1};
		};
		class BMP2_CommanderOut: BMP2_Commander
		{
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\BMP2_CommanderOut.rtm";
		};
		class KIA_BMP2_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\KIA_BMP2_Driver.rtm";
			connectTo[] = {"Unconscious",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class BMP2_Driver: Crew
		{
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\BMP2_Driver.rtm";
			interpolateTo[] = {"KIA_BMP2_Driver",1};
		};
		class BMP2_DriverOut: BMP2_Driver
		{
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\BMP2_DriverOut.rtm";
		};
		class KIA_BMP2_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\KIA_BMP2_Gunner.rtm";
			connectTo[] = {"Unconscious",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class BMP2_Gunner: Crew
		{
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\BMP2_Gunner.rtm";
			interpolateTo[] = {"KIA_BMP2_Gunner",1};
		};
		class BMP2_GunnerOut: BMP2_Gunner
		{
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\BMP2_GunnerOut.rtm";
		};
		class KIA_Stryker_Cargo01: KIA_BMP2_Gunner
		{
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\KIA_Stryker_Cargo01.rtm";
		};
		class Stryker_Cargo01: Crew
		{
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\Stryker_Cargo01_V0.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1,"Stryker_Cargo01_V1",0.1,"Stryker_Cargo01_V2",0.1,"Stryker_Cargo01_V3",0.1,"Stryker_Cargo01_V4",0.1};
			equivalentTo = "Stryker_Cargo01";
			variantsAI[] = {"Stryker_Cargo01",0.6,"Stryker_Cargo01_V1",0.1,"Stryker_Cargo01_V2",0.1,"Stryker_Cargo01_V3",0.1,"Stryker_Cargo01_V4",0.1};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class Stryker_Cargo01_V1: Stryker_Cargo01
		{
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\Stryker_Cargo01_V1.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.236;
			variantAfter[] = {4,4,4};
		};
		class Stryker_Cargo01_V2: Stryker_Cargo01
		{
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\Stryker_Cargo01_V2.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.169;
			variantAfter[] = {6,6,6};
		};
		class Stryker_Cargo01_V3: Stryker_Cargo01
		{
			file = "\acr_a3\acr_a3_vehicles\bmp2\Stryker_Cargo01_V3.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
		};
		class Stryker_Cargo01_V4: Stryker_Cargo01
		{
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\Stryker_Cargo01_V4.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
		};
		class KIA_BMP2_Cargo04: DefaultDie
		{
			actions = "DeadActions";
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\KIA_BMP2_Cargo.rtm";
			connectTo[] = {"Unconscious",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class BMP2_Cargo04: Crew
		{
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\BMP2_Cargo04.rtm";
			interpolateTo[] = {"KIA_BMP2_Cargo04",1};
		};
		class HMMWV_Gunner04: Crew
		{
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\hmmwv_M240gunner.rtm";
			interpolateTo[] = {"KIA_HMMWV_Gunner04",1};
		};
		class KIA_HMMWV_Gunner04: KIA_BMP2_Cargo04
		{
			file = "\acr_a3\acr_a3_vehicles\bmp2\anim\KIA_hmmwv_M240gunner.rtm";
		};

	};
};