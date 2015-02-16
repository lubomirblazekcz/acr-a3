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
        HMMWV_Gunner_EP1 = "HMMWV_Gunner_EP1";
		LR_gunner01_EP1="LR_gunner01_EP1";
        BMP2_Commander = "BMP2_Commander";
        BMP2_CommanderOUT = "BMP2_CommanderOUT";
        BMP2_Driver = "BMP2_Driver";
        BMP2_DriverOUT = "BMP2_DriverOUT";
        BMP2_Gunner = "BMP2_Gunner";
        BMP2_GunnerOUT = "BMP2_GunnerOUT";
        BMP2_Cargo04 = "BMP2_Cargo04";
        Stryker_Cargo01 = "Stryker_Cargo01";
        ACR_A3_BRDM2_Driver = "ACR_A3_BRDM2_Driver";
        ACR_A3_BRDM2_Gunner = "ACR_A3_BRDM2_Gunner";
        ACR_A3_BRDM2_Cargo01 = "ACR_A3_BRDM2_Cargo01";
        ACR_A3_BRDM2_Cargo02 = "ACR_A3_BRDM2_Cargo02";
        ACR_A3_GAZ_Gunner = "ACR_A3_GAZ_Gunner";
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
		class LR_gunner01_EP1: Crew
		{
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\LR_gunner01.rtm";
            connectTo[] = {"Stryker_Dead",1};
            speed = 1e+010;
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
            file = "\acr_a3\acr_a3_vehicles\Data\Anim\Stryker_Cargo01_V3.rtm";
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

		class ACR_A3_KIA_BRDM2_Driver:DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped=false;
			terminal = 1;
			file="\acr_a3\acr_a3_vehicles\Data\Anim\KIA_BRDM2_Driver.rtm";
			connectTo[] = {"Unconscious",0.1};
		};
		class ACR_A3_BRDM2_Driver: Crew
		{
			file="\acr_a3\acr_a3_vehicles\Data\Anim\BRDM2_Driver.rtm";
			interpolateTo[]={"ACR_A3_KIA_BRDM2_Driver",1};
		};
		class ACR_A3_KIA_BRDM2_Gunner:DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped=false;
			terminal = 1;
			file="\acr_a3\acr_a3_vehicles\Data\Anim\KIA_BRDM2_Gunner.rtm";
			soundEnabled=0;
			connectTo[] = {"Unconscious",0.1};
		};
		class ACR_A3_BRDM2_Gunner: Crew
		{
			file="\acr_a3\acr_a3_vehicles\Data\Anim\BRDM2_Gunner.rtm";
			interpolateTo[]={"ACR_A3_KIA_BRDM2_Gunner",1};
		};
		class ACR_A3_KIA_BRDM2_Cargo01:DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped=false;
			terminal = 1;
			file="\acr_a3\acr_a3_vehicles\Data\Anim\KIA_BRDM2_Cargo01.rtm";
			soundEnabled=0;
			connectTo[] = {"Unconscious",0.1};
		};
		class ACR_A3_BRDM2_Cargo01: Crew
		{
			file="\acr_a3\acr_a3_vehicles\Data\Anim\BRDM2_Cargo01.rtm";
			interpolateTo[]={"ACR_A3_KIA_BRDM2_Cargo01",1};
		};
		class ACR_A3_KIA_BRDM2_Cargo02:DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped=false;
			terminal = 1;
			file="\acr_a3\acr_a3_vehicles\Data\Anim\KIA_BRDM2_Cargo02.rtm";
			soundEnabled=0;
			connectTo[] = {"Unconscious",0.1};
		};
		class ACR_A3_BRDM2_Cargo02: Crew
		{
			file="\acr_a3\acr_a3_vehicles\Data\Anim\BRDM2_Cargo02.rtm";
			interpolateTo[]={"ACR_A3_KIA_BRDM2_Cargo02",1};
		};
		class ACR_A3_KIA_GAZ_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file="\acr_a3\acr_a3_vehicles\Data\Anim\KIA_GAZ_Gunner.rtm";
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {"Unconscious",0.1};
		};
		class ACR_A3_GAZ_Gunner: Crew
		{
			file="\acr_a3\acr_a3_vehicles\Data\Anim\Stryker_GunnerOut.rtm";
			interpolateTo[]={"ACR_A3_KIA_GAZ_Gunner",1};
		};
	};
};