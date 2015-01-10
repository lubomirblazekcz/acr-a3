class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
        T72_Commander = "T72_Commander";
        T72_CommanderOUT = "T72_CommanderOUT";
        T72_Driver = "T72_Driver";
        T72_DriverOUT = "T72_DriverOUT";
        T72_Gunner = "T72_Gunner";
        T72_GunnerOut = "T72_GunnerOut";
        HMMWV_Driver = "HMMWV_Driver";
        HMMWV_Gunner01 = "HMMWV_Gunner01";
        HMMWV_Gunner02 = "HMMWV_Gunner02";
        HMMWV_Gunner03 = "HMMWV_Gunner03";
        HMMWV_Gunner04 = "HMMWV_Gunner04";
        HMMWV_Cargo01 = "HMMWV_Cargo01";
        HMMWV_Gunner_EP1 = "HMMWV_Gunner_EP1";
        HMMWV_Cargo_EP1 = "HMMWV_Cargo_EP1";
        HMMWV_Cargo01_EP1 = "HMMWV_Cargo01_EP1";
        HMMWV_Cargo02_EP1 = "HMMWV_Cargo02_EP1";
        HMMWV_Cargo03_EP1 = "HMMWV_Cargo03_EP1";
        HMMWV_Cargo04_EP1 = "HMMWV_Cargo04_EP1";
        HMMWV_Driver_EP1 = "HMMWV_Driver_EP1";
        HMMWV_Gunner02_EP1 = "HMMWV_Gunner02_EP1";
        HMMWV_Gunner03_EP1 = "HMMWV_Gunner03_EP1";
        HMMWV_Gunner04_EP1 = "HMMWV_Gunner04_EP1";
		LR_driver_EP1="LR_driver_EP1";
		LR_gunner_EP1="LR_gunner_EP1";
		LR_gunner01_EP1="LR_gunner01_EP1";
		LR_gunner02_EP1="LR_gunner02_EP1";
		LR_gunner03_EP1="LR_gunner03_EP1";
		LR_Cargo01_EP1="LR_Cargo01_EP1";
		LR_Cargo02_EP1="LR_Cargo02_EP1";
		LR_Cargo03_EP1="LR_Cargo03_EP1";
		LR_Cargo04_EP1="LR_Cargo04_EP1";
		LR_Cargo05_EP1="LR_Cargo05_EP1";
        BMP2_Commander = "BMP2_Commander";
        BMP2_CommanderOUT = "BMP2_CommanderOUT";
        BMP2_Driver = "BMP2_Driver";
        BMP2_DriverOUT = "BMP2_DriverOUT";
        BMP2_Gunner = "BMP2_Gunner";
        BMP2_GunnerOUT = "BMP2_GunnerOUT";
        BMP2_Cargo04 = "BMP2_Cargo04";
        Stryker_Cargo01 = "Stryker_Cargo01";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
	    class Stryker_Dead: DefaultDie
        {
            actions = "DeadActions";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\Stryker_Dead.rtm";
            connectTo[] = {"Unconscious",0.1};
        };
        class Crew;
        class AmovPercMstpSnonWnonDnon;
        class KIA_T72_Commander: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\KIA_T72_Commander.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[]=
            {
                "Unconscious",
                0.1
            };
        };
        class KIA_T72_CommanderOUT: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\KIA_T72_CommanderOut.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[]=
            {
                "Unconscious",
                0.1
            };
        };
        class T72_Commander: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\T72_Commander.rtm";
            interpolateTo[] = {"KIA_T72_Commander",1};
        };

        class T72_CommanderOut: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\T72_CommanderOut.rtm";
            interpolateTo[] = {"KIA_T72_CommanderOut",1};
            leftHandIKCurve[] = {1};
            //leftHandIKBeg = true;
            //leftHandIKEnd = true;
            //rightHandIKCurve[] = {1};
        };
        class KIA_T72_Driver: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\KIA_T72_Driver.rtm";
            connectTo[]=
            {
                "Unconscious",
                0.1
            };
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
        };
        class T72_Driver: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\T72_Driver.rtm";
            interpolateTo[] = {"KIA_T72_Driver",1};
        };
        class T72_DriverOut: T72_Driver
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\T72_DriverOut.rtm";
        };
        class KIA_T72_Gunner: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\KIA_T72_Gunner.rtm";
            connectTo[]=
            {
                "Unconscious",
                0.1
            };
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
        };
        class T72_Gunner: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\T72_Gunner.rtm";
            interpolateTo[] = {"KIA_T72_Gunner",1};
        };
        class KIA_T72_GunnerOut: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\KIA_T72_GunnerOut.rtm";
            connectTo[]=
            {
                "Unconscious",
                0.1
            };
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
        };
        class T72_GunnerOut: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\T72_GunnerOut.rtm";
            interpolateTo[] = {"KIA_T72_GunnerOut",1};
        };
        class KIA_HMMWV_Driver: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\KIA_HMMWV_Driver.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            connectTo[] = {"Unconscious",0.1};
            soundEnabled = 0;
        };
        class HMMWV_Driver: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMMWV_Driver.rtm";
            interpolateTo[] = {"KIA_HMMWV_Driver",1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
        };
        class KIA_HMMWV_Gunner: KIA_HMMWV_Driver
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\KIA_hmmwv_gunnerOUT.rtm";
        };
        class HMMWV_Gunner01: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\hmmwv_M2gunnerOUT.rtm";
            interpolateTo[] = {"KIA_HMMWV_Gunner",1};
        };
        class HMMWV_Gunner02: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\hmmwv_mk19gunnerOUT.rtm";
            interpolateTo[] = {"KIA_HMMWV_Gunner",1};
        };
        class HMMWV_Gunner03: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\hmmwv_TOW_gunnerOUT.rtm";
            interpolateTo[] = {"KIA_HMMWV_Gunner",1};
        };

        class HMMWV_Gunner04: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\hmmwv_M240gunner.rtm";
            interpolateTo[] = {"KIA_HMMWV_Gunner04",1};
        };
        class KIA_HMMWV_Gunner04: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\KIA_hmmwv_M240gunner.rtm";
            interpolateTo[] = {"KIA_BMP2_Cargo04",1};
        };
        class HMMWV_Gunner04_EP1: Crew
        {
            file="\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_Gunner04";
            interpolateTo[]=
            {
                "HMMWV_KIA_Cargo_EP1",
                1
            };
            speed=1e+010;
        };
        class KIA_HMMWV_Cargo01: KIA_HMMWV_Driver
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\KIA_HMMWV_Cargo01.rtm";
        };
        class HMMWV_Cargo01: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\hmmwv_Cargo01_V0.rtm";
            interpolateTo[] = {"KIA_HMMWV_Cargo01",0.1};
        };
        class HMMWV_Gunner_EP1: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_Gunner.rtm";
            interpolateTo[] = {"HMMWV_KIA_Gunner_EP1",1};
            speed = 1e+010;
        };
        class HMMWV_KIA_Gunner_EP1: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_KIA_Gunner.rtm";
            speed = 1e+010;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious",0.1};
        };
        class HMMWV_Cargo01_EP1: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_Cargo01.rtm";
            interpolateTo[] = {"HMMWV_KIA_Cargo01_EP1",0.1};
            speed = 1e+010;
        };
        class HMMWV_Cargo_EP1: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_Cargo.rtm";
            interpolateTo[] = {"HMMWV_KIA_Cargo01_EP1",0.1};
            speed = 1e+010;
        };
        class HMMWV_KIA_Cargo_EP1: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_KIA_Cargo.rtm";
            speed = 1e+010;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious",0.1};
        };
        class HMMWV_KIA_Cargo01_EP1: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_KIA_Cargo01.rtm";
            speed = 1e+010;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious",0.1};
        };
        class HMMWV_Cargo02_EP1: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_Cargo02.rtm";
            interpolateTo[] = {"HMMWV_KIA_Cargo02_EP1",0.1};
            speed = 1e+010;
        };
        class HMMWV_KIA_Cargo02_EP1: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_KIA_Cargo02.rtm";
            speed = 1e+010;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious",0.1};
        };
        class HMMWV_Cargo03_EP1: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_Cargo03.rtm";
            interpolateTo[] = {"HMMWV_KIA_Cargo03_EP1",0.1};
            speed = 1e+010;
        };
        class HMMWV_KIA_Cargo03_EP1: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_KIA_Cargo03.rtm";
            speed = 1e+010;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious",0.1};
        };
        class HMMWV_Cargo04_EP1: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_Cargo04.rtm";
            interpolateTo[] = {"HMMWV_KIA_Cargo04_EP1",0.1};
            speed = 1e+010;
        };
        class HMMWV_KIA_Cargo04_EP1: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_KIA_Cargo04.rtm";
            speed = 1e+010;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious",0.1};
        };
        class HMMWV_Driver_EP1: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_Driver.rtm";
            interpolateTo[] = {"HMMWV_KIA_Driver_EP1",1};
            speed = 1e+010;
        };
        class HMMWV_KIA_Driver_EP1: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_KIA_Driver.rtm";
            speed = 1e+010;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious",0.1};
        };
        class HMMWV_Gunner02_EP1: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_Gunner02.rtm";
            connectTo[] = {"Stryker_Dead",1};
            speed = 1e+010;
        };
        class HMMWV_Gunner03_EP1: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\HMWVW_Gunner03.rtm";
            connectTo[] = {"Stryker_Dead",1};
            speed = 1e+010;
        };
		class LR_driver_EP1: Crew
		{
			file="\acr_a3\acr_a3_vehicles\Data\Anim\LR_driver";
			interpolateTo[]=
			{
				"KIA_LR_driver_EP1",
				1
			};
			speed=1e+010;
		};
		class KIA_LR_driver_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\acr_a3\acr_a3_vehicles\Data\Anim\KIA_LR_driver";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class LR_gunner_EP1: Crew
		{
			file="\acr_a3\acr_a3_vehicles\Data\Anim\LR_gunner";
			connectTo[]=
			{
				"Stryker_Dead",
				1
			};
			speed=1e+010;
		};
		class LR_gunner01_EP1: Crew
		{
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\LR_gunner01.rtm";
            connectTo[] = {"Stryker_Dead",1};
            speed = 1e+010;
		};
		class LR_gunner02_EP1: Crew
		{
			file="\acr_a3\acr_a3_vehicles\Data\Anim\LR_gunner02";
			connectTo[]=
			{
				"Stryker_Dead",
				1
			};
			speed=1e+010;
		};
		class LR_gunner03_EP1: Crew
		{
			file="\acr_a3\acr_a3_vehicles\Data\Anim\LR_gunner03";
			connectTo[]=
			{
				"Stryker_Dead",
				1
			};
			speed=1e+010;
		};
		class LR_Cargo01_EP1: Crew
		{
			file="\acr_a3\acr_a3_vehicles\Data\Anim\LR_Cargo01";
			interpolateTo[]=
			{
				"KIA_LR_Cargo01_EP1",
				1
			};
			speed=1e+010;
		};
		class KIA_LR_Cargo01_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\acr_a3\acr_a3_vehicles\Data\Anim\KIA_LR_Cargo01";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};

		class LR_Cargo02_EP1: Crew
		{
			file="\acr_a3\acr_a3_vehicles\Data\Anim\LR_Cargo02";
			interpolateTo[]={KIA_LR_Cargo02_EP1,0.1};
			connectTo[]=
			{
				LR_Cargo02_EP1, 0.1,
				LR_Cargo02_V1_EP1, 0.1,
				LR_Cargo02_V2_EP1, 0.1,
				LR_Cargo02_V3_EP1, 0.1,
				LR_Cargo02_V4_EP1, 0.1,
				LR_Cargo02_V5_EP1, 0.1
			};
			equivalentTo="LR_Cargo02_EP1";
			variantsAI[] =
			{
				LR_Cargo02_EP1, 0.5,
				LR_Cargo02_V1_EP1, 0.12,
				LR_Cargo02_V2_EP1, 0.11,
				LR_Cargo02_V3_EP1, 0.10,
				LR_Cargo02_V4_EP1, 0.09,
				LR_Cargo02_V5_EP1, 0.08
			};
			variantAfter[] = {5, 10, 20};
			speed=1e+010;
		};

		class KIA_LR_Cargo02_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\acr_a3\acr_a3_vehicles\Data\Anim\KIA_LR_Cargo02";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};


		class LR_Cargo03_EP1: Crew
		{
			file="\acr_a3\acr_a3_vehicles\Data\Anim\LR_Cargo03";
			interpolateTo[]={KIA_LR_Cargo03_EP1,0.1};
			connectTo[]=
			{
				LR_Cargo03_EP1, 0.1,
				LR_Cargo03_V1_EP1, 0.1,
				LR_Cargo03_V2_EP1, 0.1,
				LR_Cargo03_V3_EP1, 0.1,
				LR_Cargo03_V4_EP1, 0.1,
				LR_Cargo03_V5_EP1, 0.1
			};
			equivalentTo="LR_Cargo03_EP1";
			variantsAI[] =
			{
				LR_Cargo03_EP1, 0.5,
				LR_Cargo03_V1_EP1, 0.12,
				LR_Cargo03_V2_EP1, 0.11,
				LR_Cargo03_V3_EP1, 0.10,
				LR_Cargo03_V4_EP1, 0.09,
				LR_Cargo03_V5_EP1, 0.08
			};
			variantAfter[] = {5, 10, 20};
			speed=1e+010;
		};

		class KIA_LR_Cargo03_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\acr_a3\acr_a3_vehicles\Data\Anim\KIA_LR_Cargo03";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};

		class LR_Cargo04_EP1: Crew
		{
			file="\acr_a3\acr_a3_vehicles\Data\Anim\LR_Cargo04";
			interpolateTo[]={KIA_LR_Cargo04_EP1,0.1};
			connectTo[]=
			{
				LR_Cargo04_EP1, 0.1,
				LR_Cargo04_V1_EP1, 0.1,
				LR_Cargo04_V2_EP1, 0.1,
				LR_Cargo04_V3_EP1, 0.1,
				LR_Cargo04_V4_EP1, 0.1,
				LR_Cargo04_V5_EP1, 0.1
			};
			equivalentTo="LR_Cargo04_EP1";
			variantsAI[] =
			{
				LR_Cargo04_EP1, 0.5,
				LR_Cargo04_V1_EP1, 0.12,
				LR_Cargo04_V2_EP1, 0.11,
				LR_Cargo04_V3_EP1, 0.10,
				LR_Cargo04_V4_EP1, 0.09,
				LR_Cargo04_V5_EP1, 0.08
			};
			variantAfter[] = {5, 10, 20};
			speed=1e+010;
		};

		class KIA_LR_Cargo04_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\acr_a3\acr_a3_vehicles\Data\Anim\KIA_LR_Cargo04";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};

		class LR_Cargo05_EP1: Crew
		{
			file="\acr_a3\acr_a3_vehicles\Data\Anim\LR_Cargo05";
			interpolateTo[]={KIA_LR_Cargo05_EP1,0.1};
			connectTo[]=
			{
				LR_Cargo05_EP1, 0.1,
				LR_Cargo05_V1_EP1, 0.1,
				LR_Cargo05_V2_EP1, 0.1,
				LR_Cargo05_V3_EP1, 0.1,
				LR_Cargo05_V4_EP1, 0.1,
				LR_Cargo05_V5_EP1, 0.1
			};
			equivalentTo="LR_Cargo05_EP1";
			variantsAI[] =
			{
				LR_Cargo05_EP1, 0.5,
				LR_Cargo05_V1_EP1, 0.12,
				LR_Cargo05_V2_EP1, 0.11,
				LR_Cargo05_V3_EP1, 0.10,
				LR_Cargo05_V4_EP1, 0.09,
				LR_Cargo05_V5_EP1, 0.08
			};
			variantAfter[] = {5, 10, 20};
			speed=1e+010;
		};

		class KIA_LR_Cargo05_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\acr_a3\acr_a3_vehicles\Data\Anim\KIA_LR_Cargo05";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};

        class KIA_BMP2_Commander: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\KIA_BMP2_Commander.rtm";
            connectTo[] = {"Unconscious",0.1};
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
        };
        class BMP2_Commander: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\BMP2_Commander.rtm";
            interpolateTo[] = {"KIA_BMP2_Commander",1};
        };
        class BMP2_CommanderOut: BMP2_Commander
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\BMP2_CommanderOut.rtm";
        };
        class KIA_BMP2_Driver: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\KIA_BMP2_Driver.rtm";
            connectTo[] = {"Unconscious",0.1};
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
        };
        class BMP2_Driver: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\BMP2_Driver.rtm";
            interpolateTo[] = {"KIA_BMP2_Driver",1};
        };
        class BMP2_DriverOut: BMP2_Driver
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\BMP2_DriverOut.rtm";
        };
        class KIA_BMP2_Gunner: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\KIA_BMP2_Gunner.rtm";
            connectTo[] = {"Unconscious",0.1};
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
        };
        class BMP2_Gunner: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\BMP2_Gunner.rtm";
            interpolateTo[] = {"KIA_BMP2_Gunner",1};
        };
        class BMP2_GunnerOut: BMP2_Gunner
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\BMP2_GunnerOut.rtm";
        };
        class KIA_Stryker_Cargo01: KIA_BMP2_Gunner
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\KIA_Stryker_Cargo01.rtm";
        };
        class Stryker_Cargo01: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\Stryker_Cargo01_V0.rtm";
            interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
            connectTo[] = {"Stryker_Cargo01",0.1,"Stryker_Cargo01_V1",0.1,"Stryker_Cargo01_V2",0.1,"Stryker_Cargo01_V3",0.1,"Stryker_Cargo01_V4",0.1};
            equivalentTo = "Stryker_Cargo01";
            variantsAI[] = {"Stryker_Cargo01",0.6,"Stryker_Cargo01_V1",0.1,"Stryker_Cargo01_V2",0.1,"Stryker_Cargo01_V3",0.1,"Stryker_Cargo01_V4",0.1};
            variantAfter[] = {5,10,20};
            speed = 0.3;
        };
        class Stryker_Cargo01_V1: Stryker_Cargo01
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\Stryker_Cargo01_V1.rtm";
            interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
            connectTo[] = {"Stryker_Cargo01",0.1};
            speed = 0.236;
            variantAfter[] = {4,4,4};
        };
        class Stryker_Cargo01_V2: Stryker_Cargo01
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\Stryker_Cargo01_V2.rtm";
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
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\Stryker_Cargo01_V4.rtm";
            interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
            connectTo[] = {"Stryker_Cargo01",0.1};
            speed = 0.197;
            variantAfter[] = {5,5,5};
        };
        class KIA_BMP2_Cargo04: DefaultDie
        {
            actions = "DeadActions";
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\KIA_BMP2_Cargo.rtm";
            connectTo[] = {"Unconscious",0.1};
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
        };
        class BMP2_Cargo04: Crew
        {
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\BMP2_Cargo04.rtm";
            interpolateTo[] = {"KIA_BMP2_Cargo04",1};
        };

	};
};