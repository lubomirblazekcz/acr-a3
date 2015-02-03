class CfgPatches
{
	class acr_a3_dubbingradio_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Dubbing_Radio_F"};
	};
};

class CfgVoice
{
	voices[] +=
	{
		"Male01CZ_ACR",
		"Male02CZ_ACR",
		"Male03CZ_ACR",
		"Male04CZ_ACR",
        "Male05CZ_ACR"
	};
	class Base;
    class BaseACR: Base
    {
        variants[]={0.94999999,1,1.05};
        voiceType="";
        scope=0;
        directories[]=
        {
            "",
            ""
        };
        protocol="RadioProtocolBase_ACR_CZ";
    };
    class CZ_ACR: BaseACR
    {
        protocol="RadioProtocol_ACR_CZ";
		icon = "\a3\Ui_f\data\Map\Markers\Flags\czechrepublic_ca.paa";
		identityTypes[] = {"Language_ACR_CZ"};
    };
	class Male01CZ_ACR: CZ_ACR
	{
		directories[] = {
		"\acr_a3\acr_a3_dubbingradio\RADIO\Male01CZ\",
		"\acr_a3\acr_a3_dubbingradio\RADIO\Male01CZ\"
		};
		displayName = "$STR_A3_CfgVoiceTypes_Male01_F0";
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
	};
	class Male02CZ_ACR: CZ_ACR
	{
		directories[] = {
		"\acr_a3\acr_a3_dubbingradio\RADIO\Male02CZ\",
		"\acr_a3\acr_a3_dubbingradio\RADIO\Male02CZ\"
		};
		displayName = "$STR_A3_CfgVoiceTypes_Male02_F0";
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
	};
	class Male03CZ_ACR: CZ_ACR
	{
		directories[] = {
		"\acr_a3\acr_a3_dubbingradio\RADIO\Male03CZ\",
		"\acr_a3\acr_a3_dubbingradio\RADIO\Male03CZ\"
		};
		voiceType = "Male03";
		displayName = "$STR_A3_CfgVoiceTypes_Male03_F0";
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
	};
	class Male04CZ_ACR: CZ_ACR
	{
		directories[] = {
		"\acr_a3\acr_a3_dubbingradio\RADIO\Male04CZ\",
		"\acr_a3\acr_a3_dubbingradio\RADIO\Male04CZ\"
		};
		displayName = "$STR_A3_CfgVoiceTypes_Male04_F0";
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
	};
	class Male05CZ_ACR: CZ_ACR
	{
		directories[] = {
		"\acr_a3\acr_a3_dubbingradio\RADIO\Male03CZ\",
		"\acr_a3\acr_a3_dubbingradio\RADIO\Male03CZ\"
		};
		displayName = "$STR_A3_CfgVoiceTypes_Male05_F0";
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
	};
};
class cfgVoiceTypes
{
	class Male01_F
	{
		voices[]+=
		{
			"Male01CZ_ACR"
		};
	};
	class Male02_F
	{
		voices[]+=
		{
			"Male02CZ_ACR"
		};
		preview="Male02CZ_ACR";
	};
	class Male03_F
	{
		voices[]+=
		{
			"Male03CZ_ACR"
		};
	};
	class Male04_F
	{
		voices[]+=
		{
			"Male04CZ_ACR"
		};
	};
	class Male05_F
	{
		voices[]+=
		{
			"Male05CZ_ACR"
		};
	};
	class Male06_F
	{
		voices[]+=
		{
			"Male05CZ_ACR"
		};
	};
	class Male07_F
	{
		voices[]+=
		{
			"Male03CZ_ACR"
		};
	};
	class Male08_F
	{
		voices[]+=
		{
			"Male03CZ_ACR"
		};
	};
	class Male09_F
	{
		voices[]+=
		{
			"Male02CZ_ACR"
		};
	};
	class Male10_F
	{
		voices[]+=
		{
			"Male01CZ_ACR"
		};
	};
	class Male11_F
	{
		voices[]+=
		{
			"Male02CZ_ACR"
		};
	};
	class Male12_F
	{
		voices[]+=
		{
			"Male03CZ_ACR"
		};
	};
};
class RadioProtocolBase
{
	class Words;
};
class RadioProtocolBase_ACR_CZ: RadioProtocolBase
{
	class Default;
	class Report;
	class PriorityReport;
	class Confirmation;
	class Completition;
	class JoinCompleted;
	class Failure;
	class Notify;
	class Detected;
	class NormalCommand;
	class CriticalReport;
	class UrgentCommand;
	class UICommand;
	class Design;
	class CombatShout: Default
	{
		noRadio=1;
	};
	class SentUnitKilled;
	class SentSupportAskHeal;
	class SentSupportAskRepair;
	class SentSupportAskRefuel;
	class SentSupportAskRearm;
	class SentSupportConfirm;
	class SentSupportReady;
	class SentSupportDone;
	class SentSupportNotAvailable;
	class SentHealthCritical;
	class SentHealthNormal;
	class SentHealthUnconscious;
	class SentDammageCritical;
	class SentOutOfFirstAidKits;
	class SentFuelCritical;
	class SentFuelLow;
	class SentAmmoCritical;
	class SentAmmoLow;
	class SentReportPosition;
	class SentIsLeader;
	class SentCommandCompleted;
	class SentJoinCompleted;
	class SentFireReady;
	class SentDetectedMine;
	class SentDetectedBomb;
	class SentDetectedExplosive;
	class SentFireNegative;
	class SentCommandFailed;
	class SentDestinationUnreacheable;
	class SelectEnemyDetectedSentence;
	class SentEnemyDetectedGroupCoreRelative;
	class SentEnemyDetectedOnGridReference;
	class SentEnemyDetectedLocationRelative;
	class SentEnemyDetectedUnitRelative;
	class SentEnemyDetectedSenderRelative;
	class SentObjectDestroyed;
	class SentObjectDestroyedUnknown;
	class SentContact;
	class SentUnderFire;
	class SentCoverMe;
	class SentCovering;
	class SentSuppressing;
	class SentReloading;
	class SentThrowingGrenade;
	class SentThrowingSmoke;
	class SentIncomingGrenade;
	class SentEnemyContact;
	class SentEndangered;
	class SentRouted;
	class SentWitnessDeadBody;
	class SentWitnessKilled;
	class SentCombatGeneric;
	class SentCheering;
	class SentScreaming;
	class SentClear;
	class SentRepeatCommand;
	class SentWhereAreYou;
	class SentReturnToFormation;
	class SentFormColumn;
	class SentFormStaggeredColumn;
	class SentFormWedge;
	class SentFormEcholonLeft;
	class SentFormEcholonRight;
	class SentFormVee;
	class SentFormLine;
	class SentFormFile;
	class SentFormDiamond;
	class SentBehaviourCareless;
	class SentBehaviourSafe;
	class SentBehaviourAware;
	class SentBehaviourCombat;
	class SentBehaviourStealth;
	class SentOpenFire;
	class SentOpenFireInCombat;
	class SentHoldFire;
	class SentHoldFireInCombat;
	class SentCeaseFireInsideGroup;
	class SentCeaseFire;
	class SentLooseFormation;
	class SentKeepFormation;
	class SentUnitPosDown;
	class SentUnitPosMiddle;
	class SentUnitPosUp;
	class SentUnitPosAuto;
	class SentFormPosAdvance;
	class SentFormPosStayBack;
	class SentFormPosFlankLeft;
	class SentFormPosFlankRight;
	class SentReportStatus;
	class SentTeam;
	class SentTeamPlural;
	class SentWatchTgt;
	class SentWatchDir;
	class SentWatchPos;
	class SentWatchAround;
	class SentNoTarget;
	class SentTarget;
	class SentEngage;
	class SentFire;
	class SentEngageNoTarget;
	class SentFireNoTarget;
	class SelectCmdMoveSentence;
	class SentCmdMoveGroupRelative;
	class SentCmdMoveRecipientsRelative;
	class SentCmdMoveToGrid;
	class SentCmdMoveToTarget;
	class SentCmdMoveToObject;
	class SentCmdMoveLocationRelative;
	class SentCmdHealSomeone;
	class SentCmdHealSelf;
	class SentAssemble;
	class SentDisassemble;
	class SentCmdActionTakeBag;
	class SentCmdActionDropBag;
	class SentCmdActionOpenBag;
	class SentLightsOn;
	class SentLightsOff;
	class SentPointersOn;
	class SentPointersOff;
	class SentCmdHeal;
	class SentCmdHealFar;
	class SentCmdHealAt;
	class SentCmdRepair;
	class SentCmdRepairFar;
	class SentCmdRepairAt;
	class SentCmdRefuel;
	class SentCmdRefuelFar;
	class SentCmdRefuelAt;
	class SentCmdRearm;
	class SentCmdRearmFar;
	class SentCmdRearmAt;
	class SentCmdSupport;
	class SentCmdSupportFar;
	class SentCmdSupportAt;
	class SentCmdDropWeapon;
	class SentCmdDropMagazine;
	class SentCmdTakeWeapon;
	class SentCmdTakeWeaponFar;
	class SentCmdTakeWeaponAt;
	class SentCmdTakeMagazine;
	class SentCmdTakeMagazineFar;
	class SentCmdTakeMagazineAt;
	class SentCmdAction;
	class SentCmdActionNear;
	class SentCmdActionFar;
	class SentCmdActionAt;
	class SentCmdTakeFlag;
	class SentCmdTakeFlagFar;
	class SentCmdTakeFlagAt;
	class SentCmdReturnFlag;
	class SentCmdReturnFlagFar;
	class SentCmdReturnFlagAt;
	class SentCmdEject;
	class SentCmdPlaceCharge;
	class SentCmdDetonate;
	class SentCmdActivateTimer;
	class SentCmdDeactivateBomb;
	class SentCmdDeactivateMine;
	class SentCmdTakeMine;
	class SentCmdLightFire;
	class SentCmdLightFireFar;
	class SentCmdLightFireAt;
	class SentCmdPutOutFire;
	class SentCmdPutOutFireFar;
	class SentCmdPutOutFireAt;
	class SentCmdOpenDoor;
	class SentCmdOpenDoorFar;
	class SentCmdOpenDoorAt;
	class SentCmdCloseDoor;
	class SentCmdCloseDoorFar;
	class SentCmdCloseDoorAt;
	class SentCmdFollowMe;
	class SentCmdFollow;
	class SentCmdAttack;
	class SentAttackNoTarget;
	class SentCmdFire;
	class SentCmdGetIn;
	class SentCmdGetInCommander;
	class SentCmdGetInDriver;
	class SentCmdGetInPilot;
	class SentCmdGetInGunner;
	class SentCmdGetInCargo;
	class SentCmdSwitchToDriver;
	class SentCmdSwitchToGunner;
	class SentCmdSwitchToCommander;
	class SentCmdSwitchToCargo;
	class SentCmdGetOut;
	class SentCmdStop;
	class SentCmdExpect;
	class SentCmdHide;
	class SentCmdDismiss;
	class SentNotifyAttack;
	class SentNotifyAttackSubgroup;
	class SentNotifySupport;
	class SentConfirmMove;
	class SentConfirmAttack;
	class SentConfirmOther;
	class SentRepairThat;
	class SentARTYFireAt;
	class SentARTYFireAtWithAmmo;
	class SentARTYRoundsComplete;
	class SentARTYCannotExecuteAdjustCoordinates;
	class SentARTYCannotExecuteThatsOutsideOurFiringEnvelope;
	class SelectVehicleMoveSentence;
	class VehicleMoveGroupRelative;
	class VehicleMoveRecipientsRelative;
	class VehicleMoveToGrid;
	class VehicleMoveToObject;
	class VehicleMoveLocationRelative;
	class VehicleWatchTgt;
	class VehicleWatchPos;
	class VehicleJoin;
	class VehicleFire;
	class VehicleTarget;
	class VehicleNoTarget;
	class VehicleCeaseFire;
	class VehicleForward;
	class VehicleStop;
	class VehicleBackward;
	class VehicleFaster;
	class VehicleSlower;
	class VehicleLeft;
	class VehicleRight;
	class VehicleManualFire;
	class VehicleCancelManualFire;
	class VehicleDirectFire;
	class VehicleLoad;
	class VehicleLoadMagazine;
	class VehicleAzimut;
	class VehicleFireFailed;
	class ClausePosition;
	class ClausePositionNear;
	class SentObjectUnconscious;
	class SentObjectUnconsciousUnknown;
	class SentCmdPatchSomeone;
	class SentCmdCarrySomeone;
	class Words;
	class Arguments
	{
		class Direction;
		class Distance1;
		class AggrTargets;
	};
};
class RadioProtocol_ACR_CZ: RadioProtocolBase_ACR_CZ
{
	class Words
	{
		ALICE_Scream_01[] = {"DEFAULT\alice\screams\Scream_01.ogg"};
		ALICE_Scream_02[] = {"DEFAULT\alice\screams\Scream_02.ogg"};
		ALICE_Scream_03[] = {"DEFAULT\alice\screams\Scream_03.ogg"};
		ALICE_Scream_04[] = {"DEFAULT\alice\screams\Scream_04.ogg"};
		ALICE_Scream_05[] = {"DEFAULT\alice\screams\Scream_05.ogg"};
		ALICE_Scream_06[] = {"DEFAULT\alice\screams\Scream_06.ogg"};
		ALICE_Scream_07[] = {"DEFAULT\alice\screams\Scream_07.ogg"};
		ALICE_Scream_08[] = {"DEFAULT\alice\screams\Scream_08.ogg"};
		ALICE_Neutral_01[] = {"DEFAULT\alice\AliceWord01.ogg"};
		ALICE_Neutral_02[] = {"DEFAULT\alice\AliceWord02.ogg"};
		ALICE_Neutral_03[] = {"DEFAULT\alice\AliceWord03.ogg"};
		ALICE_Neutral_04[] = {"DEFAULT\alice\AliceWord04.ogg"};
		ALICE_Neutral_05[] = {"DEFAULT\alice\AliceWord05.ogg"};
		ALICE_Neutral_06[] = {"DEFAULT\alice\AliceWord06.ogg"};
		ALICE_Neutral_07[] = {"DEFAULT\alice\AliceWord07.ogg"};
		ALICE_Neutral_08[] = {"DEFAULT\alice\AliceWord08.ogg"};
		ALICE_Neutral_09[] = {"DEFAULT\alice\AliceWord09.ogg"};
		ALICE_Neutral_10[] = {"DEFAULT\alice\AliceWord10.ogg"};
		ALICE_Neutral_11[] = {"DEFAULT\alice\AliceWord11.ogg"};
		ALICE_Neutral_12[] = {"DEFAULT\alice\AliceWord12.ogg"};
		ALICE_Neutral_13[] = {"DEFAULT\alice\AliceWord13.ogg"};
		ALICE_Neutral_14[] = {"DEFAULT\alice\AliceWord14.ogg"};
		ALICE_Neutral_15[] = {"DEFAULT\alice\AliceWord15.ogg"};
		ALICE_Neutral_16[] = {"DEFAULT\alice\AliceWord16.ogg"};
		ALICE_Neutral_17[] = {"DEFAULT\alice\AliceWord17.ogg"};
		ALICE_Neutral_18[] = {"DEFAULT\alice\AliceWord18.ogg"};
		ALICE_Neutral_19[] = {"DEFAULT\alice\AliceWord19.ogg"};
		ALICE_Neutral_20[] = {"DEFAULT\alice\AliceWord20.ogg"};
		ALICE_Neutral_21[] = {"DEFAULT\alice\AliceWord21.ogg"};
		ALICE_Neutral_22[] = {"DEFAULT\alice\AliceWord22.ogg"};
		ALICE_Neutral_23[] = {"DEFAULT\alice\AliceWord23.ogg"};
		ALICE_Neutral_24[] = {"DEFAULT\alice\AliceWord24.ogg"};
		ALICE_Neutral_25[] = {"DEFAULT\alice\AliceWord25.ogg"};
		ALICE_Neutral_26[] = {"DEFAULT\alice\AliceWord26.ogg"};
		ALICE_Neutral_27[] = {"DEFAULT\alice\AliceWord27.ogg"};
		ALICE_Neutral_28[] = {"DEFAULT\alice\AliceWord28.ogg"};
		ALICE_Neutral_29[] = {"DEFAULT\alice\AliceWord29.ogg"};
		ALICE_Neutral_30[] = {"DEFAULT\alice\AliceWord30.ogg"};
		ALICE_Neutral_31[] = {"DEFAULT\alice\AliceWord31.ogg"};
//        micOut[] = {"\A3\Dubbing_Radio_F\Data\static\out2a.ogg"};
//        micOut1[] = {"\A3\Dubbing_Radio_F\Data\static\in2a.ogg"};
//        micOut2[] = {"\A3\Dubbing_Radio_F\Data\static\in2b.ogg"};
//        micOut3[] = {"\A3\Dubbing_Radio_F\Data\static\in2c.ogg"};
        micOut[] = {"\acr_a3\acr_a3_dubbingradio\Data\Mic_Out1.ogg"};
        micOut1[] = {"\acr_a3\acr_a3_dubbingradio\Data\over01.ogg"};
        micOut2[] = {"\acr_a3\acr_a3_dubbingradio\Data\over02.ogg"};
        micOut3[] = {"\acr_a3\acr_a3_dubbingradio\Data\over03.ogg"};
        micOut4[] = {"\A3\Dubbing_Radio_F\Data\static\out2a.ogg"};
        micOut5[] = {"\A3\Dubbing_Radio_F\Data\static\out2b.ogg"};
        micOut6[] = {"\A3\Dubbing_Radio_F\Data\static\out2c.ogg"};
        loop[] = {"\acr_a3\acr_a3_dubbingradio\Data\radionoise1.ogg"};
        beepBeep[] = {"\acr_a3\acr_a3_dubbingradio\Data\beep.ogg"};
        pause[] = {"\acr_a3\acr_a3_dubbingradio\Data\empty01sec.ogg"};
        xmit[] = {"\acr_a3\acr_a3_dubbingradio\Data\beep.ogg"};
//        loop[] = {"\A3\Dubbing_Radio_F\Data\static\radionoise1.ogg"};
//        beepBeep[] = {"\A3\Dubbing_Radio_F\Data\static\out2a.ogg"};
//        pause[] = {"\A3\Dubbing_Radio_F\Data\static\empty01sec.ogg"};
//        xmit[] = {"\A3\Dubbing_Radio_F\Data\static\in2a.ogg"};
		sabot[] = {"DEFAULT\weapons\cannonLow.ogg"};
		mgun[] = {"DEFAULT\weapons\MachineGun.ogg"};
		NO_SPEECH[] = {};
		empty[] = {};
		VezmiSiTenBatoh[] = {"DEFAULT\VezmiSiTenBatoh.ogg"};
		OdlozBatoh[] = {"DEFAULT\OdlozBatoh.ogg"};
		OtevriBatoh[] = {"DEFAULT\OtevriBatoh.ogg"};
		LeftOrder[] = {"DEFAULT\LeftOrder.ogg"};
		RightOrder[] = {"DEFAULT\RightOrder.ogg"};
		GetSupport[] = {"DEFAULT\GetSupportAt.ogg"};
		GetHelp[] = {"DEFAULT\GetSupportAt.ogg"};
		GetHelpAt[] = {"DEFAULT\GetSupportAt.ogg"};
		MoveToPosition[] = {"DEFAULT\MoveToThat.ogg"};
		veh_enemy[] = {"DEFAULT\side\Enemy.ogg"};
		Direction[] = {"DEFAULT\ToOur.ogg"};
		FromLocation[] = {"DEFAULT\Core\From.ogg"};
		Grid2[] = {"DEFAULT\Position.ogg"};
		Advance[] = {"DEFAULT\Advance.ogg"};
		And[] = {"DEFAULT\And.ogg"};
		Are[] = {"DEFAULT\Are.ogg"};
		AreaClear[] = {"DEFAULT\AreaClear.ogg"};
		At[] = {"DEFAULT\At.ogg"};
		AtEase[] = {"DEFAULT\AtEase.ogg"};
		AttackE[] = {"DEFAULT\AttackE.ogg"};
		AttackingE[] = {"DEFAULT\AttackingE.ogg"};
		AttackThat[] = {"DEFAULT\AttackThat.ogg"};
		BailOutE[] = {"DEFAULT\BailOutE.ogg"};
		BeAdvised[] = {"DEFAULT\BeAdvised.ogg"};
		BingoFuel[] = {"DEFAULT\BingoFuel.ogg"};
		BlueOnBlueE[] = {"DEFAULT\BlueOnBlueE.ogg"};
		BoardThat[] = {"DEFAULT\BoardThat.ogg"};
		CancelManualFire[] = {"DEFAULT\CancelManualFire.ogg"};
		CancelTarget[] = {"DEFAULT\CancelTarget.ogg"};
		CannotFire[] = {"DEFAULT\CannotFire.ogg"};
		CantGetThereE[] = {"DEFAULT\CantGetThereE.ogg"};
		CantMakeItThere[] = {"DEFAULT\CantMakeItThere.ogg"};
		CantShoot[] = {"DEFAULT\CantShoot.ogg"};
		CeaseFireE[] = {"DEFAULT\CeaseFireE.ogg"};
		Clear[] = {"DEFAULT\Clear.ogg"};
		CloseThatDoor[] = {"DEFAULT\CloseThatDoor.ogg"};
		Commander[] = {"DEFAULT\Commander.ogg"};
		ContactE[] = {"DEFAULT\ContactE.ogg"};
		Copy[] = {"DEFAULT\Copy.ogg"};
		CopyMyStance[] = {"DEFAULT\CopyMyStance.ogg"};
		CriticalDamageE[] = {"DEFAULT\CriticalDamageE.ogg"};
		DangerE[] = {"DEFAULT\DangerE.ogg"};
		DeactivateCharge[] = {"DEFAULT\DeactivateCharge.ogg"};
		DetonateCharge[] = {"DEFAULT\DetonateCharge.ogg"};
		DisarmThatMine[] = {"DEFAULT\DisarmThatMine.ogg"};
		Disembark[] = {"DEFAULT\Disembark.ogg"};
		Disengage[] = {"DEFAULT\Disengage.ogg"};
		Dismount[] = {"DEFAULT\Dismount.ogg"};
		DoYouReadQ[] = {"DEFAULT\DoYouReadQ.ogg"};
		Driver[] = {"DEFAULT\Driver.ogg"};
		DropThat[] = {"DEFAULT\DropThat.ogg"};
		EjectE[] = {"DEFAULT\EjectE.ogg"};
		EnemyFireE[] = {"DEFAULT\EnemyFireE.ogg"};
		EngageAtWill[] = {"DEFAULT\EngageAtWill.ogg"};
		EngageE[] = {"DEFAULT\EngageE.ogg"};
		EngageThat[] = {"DEFAULT\EngageThat.ogg"};
		EngagingE[] = {"DEFAULT\EngagingE.ogg"};
		EngagingTargetE[] = {"DEFAULT\EngagingTargetE.ogg"};
		EyesOnTarget[] = {"DEFAULT\EyesOnTarget.ogg"};
		FallBackE[] = {"DEFAULT\FallBackE.ogg"};
		Fast[] = {"DEFAULT\Fast.ogg"};
		Fire[] = {"DEFAULT\Fire.ogg"};
		FireAtThat[] = {"DEFAULT\FireAtThat.ogg"};
		FireAtWill[] = {"DEFAULT\FireAtWill.ogg"};
		FireOnMyLead[] = {"DEFAULT\FireOnMyLead.ogg"};
		FlankLeft[] = {"DEFAULT\FlankLeft.ogg"};
		FlankRight[] = {"DEFAULT\FlankRight.ogg"};
		Follow[] = {"DEFAULT\Follow.ogg"};
		FormColumn[] = {"DEFAULT\formation\FormColumn.ogg"};
		FormDiamond[] = {"DEFAULT\formation\FormDiamond.ogg"};
		FormEcholonLeft[] = {"DEFAULT\formation\FormEcholonLeft.ogg"};
		FormEcholonRight[] = {"DEFAULT\formation\FormEcholonRight.ogg"};
		FormFile[] = {"DEFAULT\formation\FormFile.ogg"};
		FormLine[] = {"DEFAULT\formation\FormLine.ogg"};
		FormStaggeredColumn[] = {"DEFAULT\formation\FormStaggeredColumn.ogg"};
		FormVee[] = {"DEFAULT\formation\FormVee.ogg"};
		FormWedge[] = {"DEFAULT\formation\FormWedge.ogg"};
		FormOnMeE[] = {"DEFAULT\FormOnMeE.ogg"};
		Forward[] = {"DEFAULT\Forward.ogg"};
		FreeToEngage[] = {"DEFAULT\FreeToEngage.ogg"};
		GetBackE[] = {"DEFAULT\GetBackE.ogg"};
		GetDownE[] = {"DEFAULT\GetDownE.ogg"};
		GetInThat[] = {"DEFAULT\GetInThat.ogg"};
		GetSupportAt[] = {"DEFAULT\GetSupportAt.ogg"};
		GiveEmHellE[] = {"DEFAULT\GiveEmHellE.ogg"};
		GoGoGoE[] = {"DEFAULT\GoGoGoE.ogg"};
		GoProne[] = {"DEFAULT\GoProne.ogg"};
		Gunner[] = {"DEFAULT\Gunner.ogg"};
		Halt[] = {"DEFAULT\Halt.ogg"};
		HealThat[] = {"DEFAULT\HealThat.ogg"};
		HealYourself[] = {"DEFAULT\HealYourself.ogg"};
		HesDownE[] = {"DEFAULT\HesDownE.ogg"};
		HitTheDirt[] = {"DEFAULT\HitTheDirt.ogg"};
		HoldFire[] = {"DEFAULT\HoldFire.ogg"};
		HostileDownE[] = {"DEFAULT\HostileDownE.ogg"};
		HostilesE[] = {"DEFAULT\HostilesE.ogg"};
		CheckYourFireE[] = {"DEFAULT\CheckYourFireE.ogg"};
		ImAtGrid[] = {"DEFAULT\ImAtGrid.ogg"};
		Grid[] = {"DEFAULT\Grid.ogg"};
		ImOnHim[] = {"DEFAULT\ImOnHim.ogg"};
		ImTheNewActual[] = {"DEFAULT\ImTheNewActual.ogg"};
		Is[] = {"DEFAULT\Is.ogg"};
		IsDownE[] = {"DEFAULT\IsDownE.ogg"};
		IsDead[] = {"DEFAULT\IsDead.ogg"};
		IsHistory[] = {"DEFAULT\IsHistory.ogg"};
		Injured[] = {"DEFAULT\Injured.ogg"};
		IveGotHimE[] = {"DEFAULT\IveGotHimE.ogg"};
		Left[] = {"DEFAULT\Left.ogg"};
		LightEmUpE[] = {"DEFAULT\LightEmUpE.ogg"};
		LightThatFire[] = {"DEFAULT\LightThatFire.ogg"};
		MaintainFormation[] = {"DEFAULT\MaintainFormation.ogg"};
		ManualFire[] = {"DEFAULT\ManualFire.ogg"};
		MedicE[] = {"DEFAULT\MedicE.ogg"};
		NeedHelpE[] = {"DEFAULT\NeedHelpE.ogg"};
		Negative[] = {"DEFAULT\Negative.ogg"};
		NoCanDo[] = {"DEFAULT\NoCanDo.ogg"};
		NoMoreAmmoE[] = {"DEFAULT\NoMoreAmmoE.ogg"};
		NoTarget[] = {"DEFAULT\NoTarget.ogg"};
		ObserveThat[] = {"DEFAULT\ObserveThat.ogg"};
		ObserveThatPosition[] = {"DEFAULT\ObserveThatPosition.ogg"};
		OnTheWay[] = {"DEFAULT\OnTheWay.ogg"};
		OpenThatDoor[] = {"DEFAULT\OpenThatDoor.ogg"};
		OpenUpE[] = {"DEFAULT\OpenUpE.ogg"};
		OscarMike[] = {"DEFAULT\OscarMike.ogg"};
		OutOfAmmoE[] = {"DEFAULT\OutOfAmmoE.ogg"};
		OutOfFuelE[] = {"DEFAULT\OutOfFuelE.ogg"};
		Over[] = {"DEFAULT\Over.ogg"};
		Pilot[] = {"DEFAULT\Pilot.ogg"};
		PutOutThatFire[] = {"DEFAULT\PutOutThatFire.ogg"};
		PlaceAMine[] = {"DEFAULT\PlaceAMine.ogg"};
		Ready[] = {"DEFAULT\Ready.ogg"};
		ReadyToFire[] = {"DEFAULT\ReadyToFire.ogg"};
		RegroupE[] = {"DEFAULT\RegroupE.ogg"};
		RepeatLast[] = {"DEFAULT\RepeatLast.ogg"};
		ReportPositionE[] = {"DEFAULT\ReportPositionE.ogg"};
		Position[] = {"DEFAULT\Position.ogg"};
		ReportStatus[] = {"DEFAULT\ReportStatus.ogg"};
		RequestingSupportTo[] = {"DEFAULT\RequestingSupportTo.ogg"};
		ReturnTheFlag[] = {"DEFAULT\ReturnTheFlag.ogg"};
		ReturnToFormationE[] = {"DEFAULT\ReturnToFormationE.ogg"};
		Reverse[] = {"DEFAULT\Reverse.ogg"};
		Right[] = {"DEFAULT\Right.ogg"};
		Roger[] = {"DEFAULT\Roger.ogg"};
		RunningOutOfAmmo[] = {"DEFAULT\RunningOutOfAmmo.ogg"};
		RunningOutOfFuel[] = {"DEFAULT\RunningOutOfFuel.ogg"};
		SayAgain[] = {"DEFAULT\SayAgain.ogg"};
		ScanHorizon[] = {"DEFAULT\ScanHorizon.ogg"};
		ScratchOneE[] = {"DEFAULT\ScratchOneE.ogg"};
		SetACharge[] = {"DEFAULT\SetACharge.ogg"};
		SetTheTimer[] = {"DEFAULT\SetTheTimer.ogg"};
		Slow[] = {"DEFAULT\Slow.ogg"};
		SolidCopy[] = {"DEFAULT\SolidCopy.ogg"};
		SomebodyHelpMeE[] = {"DEFAULT\SomebodyHelpMeE.ogg"};
		StandingBy[] = {"DEFAULT\StandingBy.ogg"};
		StandUp[] = {"DEFAULT\StandUp.ogg"};
		StatusRedE[] = {"DEFAULT\StatusRedE.ogg"};
		StayAlert[] = {"DEFAULT\StayAlert.ogg"};
		StayBack[] = {"DEFAULT\StayBack.ogg"};
		StayCrouched[] = {"DEFAULT\StayCrouched.ogg"};
		StayInFormationE[] = {"DEFAULT\StayInFormationE.ogg"};
		Stealth[] = {"DEFAULT\Stealth.ogg"};
		StopE[] = {"DEFAULT\StopE.ogg"};
		Supporting[] = {"DEFAULT\Supporting.ogg"};
		SuppressiveFireE[] = {"DEFAULT\SuppressiveFireE.ogg"};
		TakeCoverE[] = {"DEFAULT\TakeCoverE.ogg"};
		TakeThat[] = {"DEFAULT\TakeThat.ogg"};
		TakeThatMine[] = {"DEFAULT\TakeThatMine.ogg"};
		TakeTheFlag[] = {"DEFAULT\TakeTheFlag.ogg"};
		TakingCommand[] = {"DEFAULT\TakingCommand.ogg"};
		TakingFireE[] = {"DEFAULT\TakingFireE.ogg"};
		TargetAcquired[] = {"DEFAULT\TargetAcquired.ogg"};
		TargetEliminated[] = {"DEFAULT\TargetEliminated.ogg"};
		TargetInSight[] = {"DEFAULT\TargetInSight.ogg"};
		TargetThat[] = {"DEFAULT\TargetThat.ogg"};
		UnderFireE[] = {"DEFAULT\UnderFireE.ogg"};
		Understood[] = {"DEFAULT\Understood.ogg"};
		Waiting[] = {"DEFAULT\Waiting.ogg"};
		WaitForMe[] = {"DEFAULT\WaitForMe.ogg"};
		Watch[] = {"DEFAULT\Watch.ogg"};
		WatchThat[] = {"DEFAULT\WatchThat.ogg"};
		WeaponsFree[] = {"DEFAULT\WeaponsFree.ogg"};
		WeaponsHot[] = {"DEFAULT\WeaponsHot.ogg"};
		WeLost[] = {"DEFAULT\WeLost.ogg"};
		WhereAreYouQ[] = {"DEFAULT\WhereAreYouQ.ogg"};
		WoundedE[] = {"DEFAULT\WoundedE.ogg"};
		AssembleThat[] = {"DEFAULT\AssembleThat.ogg"};
		DisassembleThat[] = {"DEFAULT\DisassembleThat.ogg"};
		FlashlightsOn[] = {"DEFAULT\FlashlightsOn.ogg"};
		FlashlightsOff[] = {"DEFAULT\FlashlightsOff.ogg"};
		LasersOn[] = {"DEFAULT\LasersOn.ogg"};
		LasersOff[] = {"DEFAULT\LasersOff.ogg"};
		FuckE[] = {"DEFAULT\FuckE.ogg"};
		Enemy[] = {"DEFAULT\side\Enemy.ogg"};
		Unknown[] = {};
		Friendly[] = {"DEFAULT\side\Friendly.ogg"};
		Neutral[] = {"DEFAULT\side\Neutral.ogg"};
		Of[] = {"DEFAULT\Of.ogg"};
		OfYou[] = {"DEFAULT\OfYou.ogg"};
		OfMe[] = {"DEFAULT\OfMe.ogg"};
		Move[] = {"DEFAULT\Move.ogg"};
		MoveTo[] = {"DEFAULT\MoveTo.ogg"};
		MoveToThat[] = {"DEFAULT\MoveToThat.ogg"};
		GoTo[] = {"DEFAULT\GoTo.ogg"};
		GoToThat[] = {"DEFAULT\GoToThat.ogg"};
		That[] = {"DEFAULT\That.ogg"};
		ToOur[] = {"DEFAULT\ToOur.ogg"};
		ToThe[] = {"DEFAULT\ToThe.ogg"};
		FromMe[] = {"DEFAULT\FromMe.ogg"};
		OfYourPosition[] = {"DEFAULT\OfYourPosition.ogg"};
		In[] = {"DEFAULT\In.ogg"};
		Us[] = {"DEFAULT\Us.ogg"};
		inFrontOf[] = {"DEFAULT\inFrontOf.ogg"};
		rightOf[] = {"DEFAULT\rightOf.ogg"};
		behind[] = {"DEFAULT\behind.ogg"};
		leftOf[] = {"DEFAULT\leftOf.ogg"};
		rightFlank[] = {"DEFAULT\rightFlank.ogg"};
		leftFlank[] = {"DEFAULT\leftFlank.ogg"};
		DangerouslyCloseTo[] = {"DEFAULT\dangerCloseTo.ogg"};
		dangerCloseTo[] = {"DEFAULT\dangerCloseTo.ogg"};
		closeTo[] = {"DEFAULT\closeTo.ogg"};
		notFarFrom[] = {"DEFAULT\notFarFrom.ogg"};
		farFrom[] = {"DEFAULT\farFrom.ogg"};
		Just[] = {"DEFAULT\Just.ogg"};
		Way[] = {"DEFAULT\Way.ogg"};
		damnClose[] = {"DEFAULT\damnClose.ogg"};
		All[] = {"DEFAULT\numbers\All.ogg"};
		Zero[] = {"DEFAULT\numbers\Zero.ogg"};
		One[] = {"DEFAULT\numbers\One.ogg"};
		Two[] = {"DEFAULT\numbers\Two.ogg"};
		Three[] = {"DEFAULT\numbers\Three.ogg"};
		Four[] = {"DEFAULT\numbers\Four.ogg"};
		Five[] = {"DEFAULT\numbers\Five.ogg"};
		Six[] = {"DEFAULT\numbers\Six.ogg"};
		Seven[] = {"DEFAULT\numbers\Seven.ogg"};
		Eight[] = {"DEFAULT\numbers\Eight.ogg"};
		nine[] = {"DEFAULT\numbers\nine.ogg"};
		Ten[] = {"DEFAULT\numbers\Ten.ogg"};
		Eleven[] = {"DEFAULT\numbers\Eleven.ogg"};
		Twelve[] = {"DEFAULT\numbers\Twelve.ogg"};
		Thirteen[] = {"DEFAULT\numbers\Thirteen.ogg"};
		Fourteen[] = {"DEFAULT\numbers\Fourteen.ogg"};
		Fifteen[] = {"DEFAULT\numbers\Fifteen.ogg"};
		Sixteen[] = {"DEFAULT\numbers\Sixteen.ogg"};
		Seventeen[] = {"DEFAULT\numbers\Seventeen.ogg"};
		Eighteen[] = {"DEFAULT\numbers\Eighteen.ogg"};
		Nineteen[] = {"DEFAULT\numbers\Nineteen.ogg"};
		Twenty[] = {"DEFAULT\numbers\Twenty.ogg"};
		Thirty[] = {"DEFAULT\numbers\Thirty.ogg"};
		Forty[] = {"DEFAULT\numbers\Forty.ogg"};
		Fifty[] = {"DEFAULT\numbers\Fifty.ogg"};
		Sixty[] = {"DEFAULT\numbers\Sixty.ogg"};
		Seventy[] = {"DEFAULT\numbers\Seventy.ogg"};
		Eighty[] = {"DEFAULT\numbers\Eighty.ogg"};
		Ninety[] = {"DEFAULT\numbers\Ninety.ogg"};
		Hundred[] = {"DEFAULT\numbers\Hundred.ogg"};
		zero2[] = {"DEFAULT\mapcoords\zero2.ogg"};
		one2[] = {"DEFAULT\mapcoords\one2.ogg"};
		two2[] = {"DEFAULT\mapcoords\two2.ogg"};
		three2[] = {"DEFAULT\mapcoords\three2.ogg"};
		four2[] = {"DEFAULT\mapcoords\four2.ogg"};
		five2[] = {"DEFAULT\mapcoords\five2.ogg"};
		six2[] = {"DEFAULT\mapcoords\six2.ogg"};
		seven2[] = {"DEFAULT\mapcoords\seven2.ogg"};
		eight2[] = {"DEFAULT\mapcoords\eight2.ogg"};
		nine2[] = {"DEFAULT\mapcoords\nine2.ogg"};
		Alpha[] = {"DEFAULT\alphabet\Alpha.ogg"};
		Bravo[] = {"DEFAULT\alphabet\Bravo.ogg"};
		Charlie[] = {"DEFAULT\alphabet\Charlie.ogg"};
		Delta[] = {"DEFAULT\alphabet\Delta.ogg"};
		Echo[] = {"DEFAULT\alphabet\Echo.ogg"};
		Fotxtrot[] = {"DEFAULT\alphabet\Fotxtrot.ogg"};
		Golf[] = {"DEFAULT\alphabet\Golf.ogg"};
		Hotel[] = {"DEFAULT\alphabet\Hotel.ogg"};
		India[] = {"DEFAULT\alphabet\India.ogg"};
		Juliet[] = {"DEFAULT\alphabet\Juliet.ogg"};
		Kilo[] = {"DEFAULT\alphabet\Kilo.ogg"};
		Lima[] = {"DEFAULT\alphabet\Lima.ogg"};
		Mike[] = {"DEFAULT\alphabet\Mike.ogg"};
		November[] = {"DEFAULT\alphabet\November.ogg"};
		Oscar[] = {"DEFAULT\alphabet\Oscar.ogg"};
		Papa[] = {"DEFAULT\alphabet\Papa.ogg"};
		Quebec[] = {"DEFAULT\alphabet\Quebec.ogg"};
		Romeo[] = {"DEFAULT\alphabet\Romeo.ogg"};
		Sierra[] = {"DEFAULT\alphabet\Sierra.ogg"};
		Tango[] = {"DEFAULT\alphabet\Tango.ogg"};
		Uniform[] = {"DEFAULT\alphabet\Uniform.ogg"};
		Victor[] = {"DEFAULT\alphabet\Victor.ogg"};
		Whiskey[] = {"DEFAULT\alphabet\Whiskey.ogg"};
		Xray[] = {"DEFAULT\alphabet\Xray.ogg"};
		Yankee[] = {"DEFAULT\alphabet\Yankee.ogg"};
		Zulu[] = {"DEFAULT\alphabet\Zulu.ogg"};
		Angel[] = {"DEFAULT\alphabet\Angel.ogg"};
		Bride[] = {"DEFAULT\alphabet\Bride.ogg"};
		Chocolate[] = {"DEFAULT\alphabet\Chocolate.ogg"};
		Dad[] = {"DEFAULT\alphabet\Dad.ogg"};
		HQ[] = {"DEFAULT\team\HQ.ogg"};
		Frostbite[] = {"DEFAULT\team\Frostbite.ogg"};
		Base[] = {"DEFAULT\team\Base.ogg"};
		Command[] = {"DEFAULT\team\Command.ogg"};
		Battlemage[] = {"DEFAULT\team\Battlemage.ogg"};
		Manhattan[] = {"DEFAULT\team\Manhattan.ogg"};
		Firefly[] = {"DEFAULT\team\Firefly.ogg"};
		Razor[] = {"DEFAULT\team\Razor.ogg"};
		Swordsman[] = {"DEFAULT\team\Swordsman.ogg"};
		Sabre[] = {"DEFAULT\team\Sabre.ogg"};
		StarForce[] = {"DEFAULT\team\StarForce.ogg"};
		Super[] = {"DEFAULT\team\Super.ogg"};
		Hammer[] = {"DEFAULT\team\Hammer.ogg"};
		Reaper[] = {"DEFAULT\team\Reaper.ogg"};
		Fatman[] = {"DEFAULT\team\Fatman.ogg"};
		Fortune[] = {"DEFAULT\team\Fortune.ogg"};
		Anvil[] = {"DEFAULT\team\Anvil.ogg"};
		Revolver[] = {"DEFAULT\team\Revolver.ogg"};
		Winchester[] = {"DEFAULT\team\Winchester.ogg"};
		Arizona[] = {"DEFAULT\team\Arizona.ogg"};
		Warmonger[] = {"DEFAULT\team\Warmonger.ogg"};
		Citizen[] = {"DEFAULT\team\Citizen.ogg"};
		Utah[] = {"DEFAULT\team\Utah.ogg"};
		Demon[] = {"DEFAULT\team\Demon.ogg"};
		Bandit[] = {"DEFAULT\team\Bandit.ogg"};
		Mohican[] = {"DEFAULT\team\Mohican.ogg"};
		Dustoff[] = {"DEFAULT\team\Dustoff.ogg"};
		whiteTeam[] = {"DEFAULT\team\whiteTeam.ogg"};
		redTeam[] = {"DEFAULT\team\redTeam.ogg"};
		greenTeam[] = {"DEFAULT\team\greenTeam.ogg"};
		blueTeam[] = {"DEFAULT\team\blueTeam.ogg"};
		yellowTeam[] = {"DEFAULT\team\yellowTeam.ogg"};
		allGroup[] = {"DEFAULT\team\allGroup.ogg"};
		at1[] = {"DEFAULT\clockfacing\at1.ogg"};
		at2[] = {"DEFAULT\clockfacing\at2.ogg"};
		at3[] = {"DEFAULT\clockfacing\at3.ogg"};
		at4[] = {"DEFAULT\clockfacing\at4.ogg"};
		at5[] = {"DEFAULT\clockfacing\at5.ogg"};
		at6[] = {"DEFAULT\clockfacing\at6.ogg"};
		at7[] = {"DEFAULT\clockfacing\at7.ogg"};
		at8[] = {"DEFAULT\clockfacing\at8.ogg"};
		at9[] = {"DEFAULT\clockfacing\at9.ogg"};
		at10[] = {"DEFAULT\clockfacing\at10.ogg"};
		at11[] = {"DEFAULT\clockfacing\at11.ogg"};
		at12[] = {"DEFAULT\clockfacing\at12.ogg"};
		dist50[] = {"DEFAULT\distance\dist50.ogg"};
		dist100[] = {"DEFAULT\distance\dist100.ogg"};
		dist200[] = {"DEFAULT\distance\dist200.ogg"};
		dist500[] = {"DEFAULT\distance\dist500.ogg"};
		dist1000[] = {"DEFAULT\distance\dist1000.ogg"};
		dist2000[] = {"DEFAULT\distance\dist2000.ogg"};
		distFar[] = {"DEFAULT\distance\distFar.ogg"};
		Meters[] = {"DEFAULT\distance\Meters.ogg"};
		North[] = {"DEFAULT\direction\North.ogg"};
		South[] = {"DEFAULT\direction\South.ogg"};
		West[] = {"DEFAULT\direction\West.ogg"};
		East[] = {"DEFAULT\direction\East.ogg"};
		Northwest[] = {"DEFAULT\direction\Northwest.ogg"};
		Southwest[] = {"DEFAULT\direction\Southwest.ogg"};
		Northeast[] = {"DEFAULT\direction\Northeast.ogg"};
		Southeast[] = {"DEFAULT\direction\Southeast.ogg"};
		NorthOf[] = {"DEFAULT\direction\NorthOf.ogg"};
		SouthOf[] = {"DEFAULT\direction\SouthOf.ogg"};
		WestOf[] = {"DEFAULT\direction\WestOf.ogg"};
		EastOf[] = {"DEFAULT\direction\EastOf.ogg"};
		NorthEastOf[] = {"DEFAULT\direction\NorthEastOf.ogg"};
		SouthEastOf[] = {"DEFAULT\direction\SouthEastOf.ogg"};
		NorthWestOf[] = {"DEFAULT\direction\NorthWestOf.ogg"};
		SouthWestOf[] = {"DEFAULT\direction\SouthWestOf.ogg"};
		front[] = {"DEFAULT\direction\front.ogg"};
		rear[] = {"DEFAULT\direction\rear.ogg"};
		Close[] = {"DEFAULT\direction\Close.ogg"};
		MediumRange[] = {"DEFAULT\direction\MediumRange.ogg"};
		Far[] = {"DEFAULT\direction\Far.ogg"};
		Bombs[] = {"DEFAULT\weapons\Bombs.ogg"};
		cannonHigh[] = {"DEFAULT\weapons\cannonHigh.ogg"};
		cannonLow[] = {"DEFAULT\weapons\cannonLow.ogg"};
		Flares[] = {"DEFAULT\weapons\Flares.ogg"};
		Missiles[] = {"DEFAULT\weapons\Missiles.ogg"};
		Rockets[] = {"DEFAULT\weapons\Rockets.ogg"};
		Smoke[] = {"DEFAULT\weapons\Smoke.ogg"};
		AALauncher[] = {"DEFAULT\weapons\AALauncher.ogg"};
		ATLauncher[] = {"DEFAULT\weapons\ATLauncher.ogg"};
		Backpack[] = {"DEFAULT\weapons\Backpack.ogg"};
		Binocular[] = {"DEFAULT\weapons\Binocular.ogg"};
		Flare[] = {"DEFAULT\weapons\Flare.ogg"};
		Grenade[] = {"DEFAULT\weapons\Grenade.ogg"};
		GrenadeLauncher[] = {"DEFAULT\weapons\GrenadeLauncher.ogg"};
		HandGrenade[] = {"DEFAULT\weapons\HandGrenade.ogg"};
		LaserDesignator[] = {"DEFAULT\weapons\LaserDesignator.ogg"};
		Magazine[] = {"DEFAULT\weapons\Magazine.ogg"};
		MachineGun[] = {"DEFAULT\weapons\MachineGun.ogg"};
		Mine[] = {"DEFAULT\weapons\Mine.ogg"};
		NVG[] = {"DEFAULT\weapons\NVG.ogg"};
		Rifle[] = {"DEFAULT\weapons\Rifle.ogg"};
		Charge[] = {"DEFAULT\weapons\Charge.ogg"};
		Handgun[] = {"DEFAULT\weapons\Handgun.ogg"};
		SmokeShell[] = {"DEFAULT\weapons\SmokeShell.ogg"};
		SniperRifle[] = {"DEFAULT\weapons\SniperRifle.ogg"};
		veh_man[] = {"DEFAULT\vehicles\man.ogg"};
		veh_woman[] = {"DEFAULT\vehicles\woman.ogg"};
		veh_soldier[] = {"DEFAULT\vehicles\soldier.ogg"};
		veh_launcherSoldier[] = {"DEFAULT\vehicles\launcherSoldier.ogg"};
		veh_Sniper[] = {"DEFAULT\vehicles\Sniper.ogg"};
		veh_Medic[] = {"DEFAULT\vehicles\Medic.ogg"};
		veh_SpecialForce[] = {"DEFAULT\vehicles\SpecialForce.ogg"};
		veh_MGunner[] = {"DEFAULT\vehicles\MGunner.ogg"};
		veh_officer[] = {"DEFAULT\vehicles\officer.ogg"};
		veh_crew[] = {"DEFAULT\vehicles\crew.ogg"};
		veh_pilot[] = {"DEFAULT\vehicles\pilot.ogg"};
		veh_vehicle[] = {"DEFAULT\vehicles\vehicle.ogg"};
		veh_bike[] = {"DEFAULT\vehicles\bike.ogg"};
		veh_motorcycle[] = {"DEFAULT\vehicles\motorcycle.ogg"};
		veh_car[] = {"DEFAULT\vehicles\car.ogg"};
		veh_technical[] = {"DEFAULT\vehicles\technical.ogg"};
		veh_supportTruck[] = {"DEFAULT\vehicles\supportTruck.ogg"};
		veh_truck[] = {"DEFAULT\vehicles\truck.ogg"};
		veh_APC[] = {"DEFAULT\vehicles\APC.ogg"};
		veh_WheeledAPC[] = {"DEFAULT\vehicles\APC.ogg"};
		veh_TrackedAPC[] = {"DEFAULT\vehicles\APC.ogg"};
		veh_unknown[] = {"DEFAULT\side\unknown.ogg"};
		veh_tractor[] = {"DEFAULT\vehicles\tractor.ogg"};
		veh_bus[] = {"DEFAULT\vehicles\bus.ogg"};
		veh_tank[] = {"DEFAULT\vehicles\tank.ogg"};
		veh_MobileHQ[] = {"DEFAULT\vehicles\MobileHQ.ogg"};
		veh_ship[] = {"DEFAULT\vehicles\ship.ogg"};
		veh_mobileArtillery[] = {"DEFAULT\vehicles\mobileArtillery.ogg"};
		veh_StaticWeapon[] = {"DEFAULT\vehicles\StaticMGWeapon.ogg"};
		veh_StaticMGWeapon[] = {"DEFAULT\vehicles\StaticMGWeapon.ogg"};
		veh_StaticMortar[] = {"DEFAULT\vehicles\StaticMortar.ogg"};
		veh_searchLight[] = {"DEFAULT\vehicles\searchLight.ogg"};
		veh_staticgrenadelauncher[] = {"DEFAULT\vehicles\staticgrenadelauncher.ogg"};
		veh_staticCannon[] = {"DEFAULT\vehicles\staticCannon.ogg"};
		veh_staticATLauncher[] = {"DEFAULT\vehicles\staticATLauncher.ogg"};
		veh_staticAALauncher[] = {"DEFAULT\vehicles\staticAALauncher.ogg"};
		veh_aircraft[] = {"DEFAULT\vehicles\aircraft.ogg"};
		veh_parachute[] = {"DEFAULT\vehicles\parachute.ogg"};
		veh_airplane[] = {"DEFAULT\vehicles\airplane.ogg"};
		veh_cargoAirplane[] = {"DEFAULT\vehicles\cargoAirplane.ogg"};
		veh_attackAirplane[] = {"DEFAULT\vehicles\attackAirplane.ogg"};
		veh_UAV[] = {"DEFAULT\vehicles\UAV.ogg"};
		veh_helicopter[] = {"DEFAULT\vehicles\helicopter.ogg"};
		veh_gunship[] = {"DEFAULT\vehicles\gunship.ogg"};
		veh_animal[] = {"DEFAULT\vehicles\animal.ogg"};
		veh_boat[] = {"DEFAULT\vehicles\boat.ogg"};
		veh_men[] = {"DEFAULT\vehicles\men.ogg"};
		veh_women[] = {"DEFAULT\vehicles\women.ogg"};
		veh_soldiers[] = {"DEFAULT\vehicles\soldiers.ogg"};
		veh_launcherSoldiers[] = {"DEFAULT\vehicles\launcherSoldiers.ogg"};
		veh_Snipers[] = {"DEFAULT\vehicles\Snipers.ogg"};
		veh_Medics[] = {"DEFAULT\vehicles\Medics.ogg"};
		veh_SpecialForces[] = {"DEFAULT\vehicles\SpecialForces.ogg"};
		veh_Mgunners[] = {"DEFAULT\vehicles\Mgunners.ogg"};
		veh_officers[] = {"DEFAULT\vehicles\officers.ogg"};
		veh_crews[] = {"DEFAULT\vehicles\crews.ogg"};
		veh_pilots[] = {"DEFAULT\vehicles\pilots.ogg"};
		veh_vehicles[] = {"DEFAULT\vehicles\vehicles.ogg"};
		veh_bikes[] = {"DEFAULT\vehicles\bikes.ogg"};
		veh_motorcycles[] = {"DEFAULT\vehicles\motorcycles.ogg"};
		veh_cars[] = {"DEFAULT\vehicles\cars.ogg"};
		veh_technicals[] = {"DEFAULT\vehicles\technicals.ogg"};
		veh_supportTrucks[] = {"DEFAULT\vehicles\supportTrucks.ogg"};
		veh_trucks[] = {"DEFAULT\vehicles\trucks.ogg"};
		veh_APCs[] = {"DEFAULT\vehicles\APCs.ogg"};
		veh_WheeledAPCs[] = {"DEFAULT\vehicles\APCs.ogg"};
		veh_TrackedAPCs[] = {"DEFAULT\vehicles\APC.ogg"};
		veh_unknowns[] = {"DEFAULT\side\unknown.ogg"};
		veh_tractors[] = {"DEFAULT\vehicles\tractors.ogg"};
		veh_buses[] = {"DEFAULT\vehicles\buses.ogg"};
		veh_tanks[] = {"DEFAULT\vehicles\tanks.ogg"};
		veh_MobileHQs[] = {"DEFAULT\vehicles\MobileHQs.ogg"};
		veh_ships[] = {"DEFAULT\vehicles\ships.ogg"};
		veh_mobileArtilleryUnits[] = {"DEFAULT\vehicles\mobileArtilleryUnits.ogg"};
		veh_StaticMGWeapons[] = {"DEFAULT\vehicles\StaticMGWeapons.ogg"};
		veh_StaticMortars[] = {"DEFAULT\vehicles\StaticMortars.ogg"};
		veh_searchLights[] = {"DEFAULT\vehicles\searchLights.ogg"};
		veh_staticgrenadelaunchers[] = {"DEFAULT\vehicles\staticgrenadelaunchers.ogg"};
		veh_staticCannons[] = {"DEFAULT\vehicles\staticCannons.ogg"};
		veh_staticATLaunchers[] = {"DEFAULT\vehicles\staticATLaunchers.ogg"};
		veh_staticAALaunchers[] = {"DEFAULT\vehicles\staticAALaunchers.ogg"};
		veh_aircrafts[] = {"DEFAULT\vehicles\aircrafts.ogg"};
		veh_parachutes[] = {"DEFAULT\vehicles\parachutes.ogg"};
		veh_airplanes[] = {"DEFAULT\vehicles\airplanes.ogg"};
		veh_cargoAirplanes[] = {"DEFAULT\vehicles\cargoAirplanes.ogg"};
		veh_attackAirplanes[] = {"DEFAULT\vehicles\attackAirplanes.ogg"};
		veh_UAVs[] = {"DEFAULT\vehicles\UAVs.ogg"};
		veh_helicopters[] = {"DEFAULT\vehicles\helicopters.ogg"};
		veh_gunships[] = {"DEFAULT\vehicles\gunships.ogg"};
		veh_animals[] = {"DEFAULT\vehicles\animals.ogg"};
		veh_boats[] = {"DEFAULT\vehicles\boats.ogg"};
		obj_ammocrate[] = {"DEFAULT\objects\ammocrate.ogg"};
		obj_building[] = {"DEFAULT\objects\building.ogg"};
		obj_bunker[] = {"DEFAULT\objects\bunker.ogg"};
		obj_bush[] = {"DEFAULT\objects\bush.ogg"};
		obj_cargoContainer[] = {"DEFAULT\objects\cargoContainer.ogg"};
		obj_cross[] = {"DEFAULT\objects\cross.ogg"};
		obj_fence[] = {"DEFAULT\objects\fence.ogg"};
		obj_flag[] = {"DEFAULT\objects\flag.ogg"};
		obj_house[] = {"DEFAULT\objects\house.ogg"};
		obj_church[] = {"DEFAULT\objects\church.ogg"};
		obj_LaserTarget[] = {"DEFAULT\objects\LaserTarget.ogg"};
		obj_object[] = {"DEFAULT\objects\object.ogg"};
		obj_rock[] = {"DEFAULT\objects\rock.ogg"};
		obj_ruin[] = {"DEFAULT\objects\ruin.ogg"};
		obj_structure[] = {"DEFAULT\objects\structure.ogg"};
		obj_target[] = {"DEFAULT\objects\target.ogg"};
		obj_tent[] = {"DEFAULT\objects\tent.ogg"};
		obj_tower[] = {"DEFAULT\objects\tower.ogg"};
		obj_tree[] = {"DEFAULT\objects\tree.ogg"};
		obj_wall[] = {"DEFAULT\objects\wall.ogg"};
		obj_wreck[] = {"DEFAULT\objects\wreck.ogg"};
		Kamenyy[] = {"DEFAULT\core\maploc\Kamenyy.ogg"};
		Strelka[] = {"DEFAULT\core\maploc\Strelka.ogg"};
		Elektrozavodsk[] = {"DEFAULT\core\maploc\Elektrozavodsk.ogg"};
		Gorka[] = {"DEFAULT\core\maploc\Gorka.ogg"};
		Chernogorsk[] = {"DEFAULT\core\maploc\Chernogorsk.ogg"};
		Krasnostav[] = {"DEFAULT\core\maploc\Krasnostav.ogg"};
		Solnichniy[] = {"DEFAULT\core\maploc\Solnichniy.ogg"};
		StarySobor[] = {"DEFAULT\core\maploc\StarySobor.ogg"};
		Vybor[] = {"DEFAULT\core\maploc\Vybor.ogg"};
		Zelenogorsk[] = {"DEFAULT\core\maploc\Zelenogorsk.ogg"};
		Pusta[] = {"DEFAULT\core\maploc\Pusta.ogg"};
		Vyshnoe[] = {"DEFAULT\core\maploc\Vyshnoe.ogg"};
		Balota[] = {"DEFAULT\core\maploc\Balota.ogg"};
		Bor[] = {"DEFAULT\core\maploc\Bor.ogg"};
		Dolina[] = {"DEFAULT\core\maploc\Dolina.ogg"};
		Drozhino[] = {"DEFAULT\core\maploc\Drozhino.ogg"};
		Dubrovka[] = {"DEFAULT\core\maploc\Dubrovka.ogg"};
		Grishino[] = {"DEFAULT\core\maploc\Grishino.ogg"};
		Guglovo[] = {"DEFAULT\core\maploc\Guglovo.ogg"};
		Gvozdno[] = {"DEFAULT\core\maploc\Gvozdno.ogg"};
		Kabanino[] = {"DEFAULT\core\maploc\Kabanino.ogg"};
		Kamenka[] = {"DEFAULT\core\maploc\Kamenka.ogg"};
		Kamyshovo[] = {"DEFAULT\core\maploc\Kamyshovo.ogg"};
		Khelm[] = {"DEFAULT\core\maploc\Khelm.ogg"};
		Komarovo[] = {"DEFAULT\core\maploc\Komarovo.ogg"};
		Kozlovka[] = {"DEFAULT\core\maploc\Kozlovka.ogg"};
		Lopatino[] = {"DEFAULT\core\maploc\Lopatino.ogg"};
		Mogilevka[] = {"DEFAULT\core\maploc\Mogilevka.ogg"};
		Msta[] = {"DEFAULT\core\maploc\Msta.ogg"};
		Myshkino[] = {"DEFAULT\core\maploc\Myshkino.ogg"};
		Nadezhdino[] = {"DEFAULT\core\maploc\Nadezhdino.ogg"};
		Nizhnoye[] = {"DEFAULT\core\maploc\Nizhnoye.ogg"};
		NovySobor[] = {"DEFAULT\core\maploc\NovySobor.ogg"};
		Olsha[] = {"DEFAULT\core\maploc\Olsha.ogg"};
		Orlovets[] = {"DEFAULT\core\maploc\Orlovets.ogg"};
		Pavlovo[] = {"DEFAULT\core\maploc\Pavlovo.ogg"};
		Petrovka[] = {"DEFAULT\core\maploc\Petrovka.ogg"};
		Pogorevka[] = {"DEFAULT\core\maploc\Pogorevka.ogg"};
		Polana[] = {"DEFAULT\core\maploc\Polana.ogg"};
		Prigorodki[] = {"DEFAULT\core\maploc\Prigorodki.ogg"};
		Pulkovo[] = {"DEFAULT\core\maploc\Pulkovo.ogg"};
		Pustoshka[] = {"DEFAULT\core\maploc\Pustoshka.ogg"};
		Rogovo[] = {"DEFAULT\core\maploc\Rogovo.ogg"};
		Shakhovka[] = {"DEFAULT\core\maploc\Shakhovka.ogg"};
		Sosnovka[] = {"DEFAULT\core\maploc\Sosnovka.ogg"};
		Staroye[] = {"DEFAULT\core\maploc\Staroye.ogg"};
		Tulga[] = {"DEFAULT\core\maploc\Tulga.ogg"};
		Town[] = {"DEFAULT\core\maploc\Town.ogg"};
		Village[] = {"DEFAULT\core\maploc\Village.ogg"};
		Airfield[] = {"DEFAULT\core\maploc\Airfield.ogg"};
		Factory[] = {"DEFAULT\core\maploc\Factory.ogg"};
		Crossroad[] = {"DEFAULT\core\maploc\Crossroad.ogg"};
		Oilfield[] = {"DEFAULT\core\maploc\Oilfield.ogg"};
		mineplace[] = {"DEFAULT\core\maploc\mineplace.ogg"};
		Harbor[] = {"DEFAULT\core\maploc\Harbor.ogg"};
		Zargabad[] = {"DEFAULT\core\maploc\Zargabad.ogg"};
		Azizajt[] = {"DEFAULT\core\maploc\Azizajt.ogg"};
		Nango[] = {"DEFAULT\core\maploc\Nango.ogg"};
		Yarum[] = {"DEFAULT\core\maploc\Yarum.ogg"};
		HazarBagh[] = {"DEFAULT\core\maploc\HazarBagh.ogg"};
		Anar[] = {"DEFAULT\core\maploc\Anar.ogg"};
		Kakaru[] = {"DEFAULT\core\maploc\Kakaru.ogg"};
		Bastam[] = {"DEFAULT\core\maploc\Bastam.ogg"};
		Falar[] = {"DEFAULT\core\maploc\Falar.ogg"};
		FeeruzAbad[] = {"DEFAULT\core\maploc\FeeruzAbad.ogg"};
		Garmarud[] = {"DEFAULT\core\maploc\Garmarud.ogg"};
		Garmsar[] = {"DEFAULT\core\maploc\Garmsar.ogg"};
		Gospandi[] = {"DEFAULT\core\maploc\Gospandi.ogg"};
		ChakChak[] = {"DEFAULT\core\maploc\ChakChak.ogg"};
		Chaman[] = {"DEFAULT\core\maploc\Chaman.ogg"};
		LoyManara[] = {"DEFAULT\core\maploc\LoyManara.ogg"};
		Nagara[] = {"DEFAULT\core\maploc\Nagara.ogg"};
		Nur[] = {"DEFAULT\core\maploc\Nur.ogg"};
		Rasman[] = {"DEFAULT\core\maploc\Rasman.ogg"};
		Sakhee[] = {"DEFAULT\core\maploc\Sakhee.ogg"};
		Zavarak[] = {"DEFAULT\core\maploc\Zavarak.ogg"};
		Karachinar[] = {"DEFAULT\core\maploc\Karachinar.ogg"};
		Shamali[] = {"DEFAULT\core\maploc\Shamali.ogg"};
		Mulladoost[] = {"DEFAULT\core\maploc\Mulladoost.ogg"};
		Khushab[] = {"DEFAULT\core\maploc\Khushab.ogg"};
		Shukurkalay[] = {"DEFAULT\core\maploc\Shukurkalay.ogg"};
		Jilavur[] = {"DEFAULT\core\maploc\Jilavur.ogg"};
		Landay[] = {"DEFAULT\core\maploc\Landay.ogg"};
		Sultansafee[] = {"DEFAULT\core\maploc\Sultansafee.ogg"};
		Jaza[] = {"DEFAULT\core\maploc\Jaza.ogg"};
		Huzrutimam[] = {"DEFAULT\core\maploc\Huzrutimam.ogg"};
		Chardarakht[] = {"DEFAULT\core\maploc\Chardarakht.ogg"};
		Timurkalay[] = {"DEFAULT\core\maploc\Timurkalay.ogg"};
		Imarat[] = {"DEFAULT\core\maploc\Imarat.ogg"};
		Ravanay[] = {"DEFAULT\core\maploc\Ravanay.ogg"};
		CS_SuppressiveFireE[] = {"DEFAULT\combat\CS_SuppressiveFireE.ogg"};
		CS_HangOnIllSuppressEmE[] = {"DEFAULT\combat\CS_HangOnIllSuppressEmE.ogg"};
		CS_SuppressingE[] = {"DEFAULT\combat\CS_SuppressingE.ogg"};
		CS_CoveringFireE[] = {"DEFAULT\combat\CS_CoveringFireE.ogg"};
		CS_GoImCoveringE[] = {"DEFAULT\combat\CS_GoImCoveringE.ogg"};
		CS_GoIllCoverE[] = {"DEFAULT\combat\CS_GoIllCoverE.ogg"};
		CS_CoveringFire2E[] = {"DEFAULT\combat\CS_CoveringFire2E.ogg"};
		CS_CoveringGoE[] = {"DEFAULT\combat\CS_CoveringGoE.ogg"};
		CS_MoveOutE[] = {"DEFAULT\combat\CS_MoveOutE.ogg"};
		CS_GoE[] = {"DEFAULT\combat\CS_GoE.ogg"};
		CS_MoveE[] = {"DEFAULT\combat\CS_MoveE.ogg"};
		CS_EngagingE[] = {"DEFAULT\combat\CS_EngagingE.ogg"};
		CS_CoverMeE[] = {"DEFAULT\combat\CS_CoverMeE.ogg"};
		CS_OKLetsGo[] = {"DEFAULT\combat\CS_OKLetsGo.ogg"};
		CS_MovingE[] = {"DEFAULT\combat\CS_MovingE.ogg"};
		CS_MovinOutE[] = {"DEFAULT\combat\CS_MovinOutE.ogg"};
		CS_ReloadingE[] = {"DEFAULT\combat\CS_ReloadingE.ogg"};
		CS_GottaReloadE[] = {"DEFAULT\combat\CS_GottaReloadE.ogg"};
		CS_CoverMeReloadingE[] = {"DEFAULT\combat\CS_CoverMeReloadingE.ogg"};
		CS_ChangingMagsE[] = {"DEFAULT\combat\CS_ChangingMagsE.ogg"};
		CS_FireInTheHoleE[] = {"DEFAULT\combat\CS_FireInTheHoleE.ogg"};
		CS_ThrowingFragE[] = {"DEFAULT\combat\CS_ThrowingFragE.ogg"};
		CS_ThrowingSmokeE[] = {"DEFAULT\combat\CS_ThrowingSmokeE.ogg"};
		CS_SmokeOutE[] = {"DEFAULT\combat\CS_SmokeOutE.ogg"};
		CS_FragOutE[] = {"DEFAULT\combat\CS_FragOutE.ogg"};
		CS_GrenadeE[] = {"DEFAULT\combat\CS_GrenadeE.ogg"};
		CS_WatchTheGrenadeE[] = {"DEFAULT\combat\CS_WatchTheGrenadeE.ogg"};
		CS_IncomingFragE[] = {"DEFAULT\combat\CS_IncomingFragE.ogg"};
		CS_ContactE[] = {"DEFAULT\combat\CS_ContactE.ogg"};
		CS_HostilesE[] = {"DEFAULT\combat\CS_HostilesE.ogg"};
		CS_EnemyE[] = {"DEFAULT\combat\CS_EnemyE.ogg"};
		CS_DidYouSeeThatQ[] = {"DEFAULT\combat\CS_DidYouSeeThatQ.ogg"};
		CS_FocusE[] = {"DEFAULT\combat\CS_FocusE.ogg"};
		CS_CheckThatOut[] = {"DEFAULT\combat\CS_CheckThatOut.ogg"};
		CS_MotherfuckerE[] = {"DEFAULT\combat\CS_MotherfuckerE.ogg"};
		CS_SeeThatQE[] = {"DEFAULT\combat\CS_SeeThatQE.ogg"};
		CS_ARGHHE[] = {"DEFAULT\combat\CS_ARGHHE.ogg"};
		CS_OOFE[] = {"DEFAULT\combat\CS_OOFE.ogg"};
		CS_UGHE[] = {"DEFAULT\combat\CS_UGHE.ogg"};
		CS_NoE[] = {"DEFAULT\combat\CS_NoE.ogg"};
		CS_WoohooE[] = {"DEFAULT\combat\CS_WoohooE.ogg"};
		CS_YahooE[] = {"DEFAULT\combat\CS_YahooE.ogg"};
		CS_HeeeyE[] = {"DEFAULT\combat\CS_HeeeyE.ogg"};
		CS_YeehawEGreatE[] = {"DEFAULT\combat\CS_YeehawEGreatE.ogg"};
		HC_ReportingIn[] = {"DEFAULT\hc\HC_ReportingIn.ogg"};
		HC_StandingByForOrders[] = {"DEFAULT\hc\HC_StandingByForOrders.ogg"};
		HC_CombatReady[] = {"DEFAULT\hc\HC_CombatReady.ogg"};
		HC_WaitingForOrders[] = {"DEFAULT\hc\HC_WaitingForOrders.ogg"};
		HC_Advancing[] = {"DEFAULT\hc\HC_Advancing.ogg"};
		HC_Affirmative[] = {"DEFAULT\hc\HC_Affirmative.ogg"};
		HC_MovingToPosition[] = {"DEFAULT\hc\HC_MovingToPosition.ogg"};
		HC_OrderReceived[] = {"DEFAULT\hc\HC_OrderReceived.ogg"};
		HC_EngagingE[] = {"DEFAULT\hc\HC_EngagingE.ogg"};
		HC_AttackingE[] = {"DEFAULT\hc\HC_AttackingE.ogg"};
		SeveralAdv[] = {"DEFAULT\Core\Several.ogg"};
		Several_EN[] = {"DEFAULT\Core\Several.ogg"};
		Single_EN[] = {"DEFAULT\Core\Single.ogg"};
		None_EN[] = {"DEFAULT\Core\None.ogg"};
		Some_EN[] = {"DEFAULT\Core\Some.ogg"};
		ALotOf_EN[] = {"DEFAULT\Core\ALotOf.ogg"};
		Independent_EN[] = {"DEFAULT\Core\Independent.ogg"};
		Civilian_EN[] = {"DEFAULT\Core\Civilian.ogg"};
		OfThem_EN[] = {"DEFAULT\Core\OfThem.ogg"};
		One_EN[] = {"DEFAULT\Core\One.ogg"};
		In_EN[] = {"DEFAULT\Core\In.ogg"};
		Near_EN[] = {"DEFAULT\Core\Near.ogg"};
		NotFar_EN[] = {"DEFAULT\Core\NotFar.ogg"};
		From_EN[] = {"DEFAULT\Core\From.ogg"};
		Around_EN[] = {"DEFAULT\Core\Around.ogg"};
		Here_EN[] = {"DEFAULT\Core\Here.ogg"};
		There_EN[] = {"DEFAULT\Core\There.ogg"};
		Probably_EN[] = {"DEFAULT\Core\Probably.ogg"};
		ToThe_EN[] = {"DEFAULT\Core\ToThe.ogg"};
		IsProbablyToThe_EN[] = {"DEFAULT\Core\IsProbablyToThe.ogg"};
		JustNow_EN[] = {"DEFAULT\Core\JustNow.ogg"};
		AFewMinutesAgo_EN[] = {"DEFAULT\Core\AFewMinutesAgo.ogg"};
		AFewHoursAgo_EN[] = {"DEFAULT\Core\AFewHoursAgo.ogg"};
		Today_EN[] = {"DEFAULT\Core\Today.ogg"};
		Yesterday_EN[] = {"DEFAULT\Core\Yesterday.ogg"};
		SeveralDaysAgo_EN[] = {"DEFAULT\Core\SeveralDaysAgo.ogg"};
		EnglishQ[] = {"DEFAULT\Core\EnglishQ.ogg"};
		RussianQ[] = {"DEFAULT\Core\RussianQ.ogg"};
		CzechQ[] = {"DEFAULT\Core\CzechQ.ogg"};
		TakistaniQ[] = {"DEFAULT\Core\TakistaniQ.ogg"};
		North_EN[] = {"DEFAULT\Core\North.ogg"};
		South_EN[] = {"DEFAULT\Core\South.ogg"};
		West_EN[] = {"DEFAULT\Core\West.ogg"};
		East_EN[] = {"DEFAULT\Core\East.ogg"};
		Northwest_EN[] = {"DEFAULT\Core\Northwest.ogg"};
		Southwest_EN[] = {"DEFAULT\Core\Southwest.ogg"};
		Northeast_EN[] = {"DEFAULT\Core\Northeast.ogg"};
		Southeast_EN[] = {"DEFAULT\Core\Southeast.ogg"};
		DidYouSeeAnythingRecentlyQ_EN[] = {"DEFAULT\Core\DidYouSeeAnythingRecentlyQ.ogg"};
		YesISawSomething_EN[] = {"DEFAULT\Core\YesISawSomething.ogg"};
		NoIDidntSeeAnything_EN[] = {"DEFAULT\Core\NoIDidntSeeAnything.ogg"};
		WhatsTheWeatherForecastQ_EN[] = {"DEFAULT\Core\WhatsTheWeatherForecastQ.ogg"};
		NiceWeatherHuhQ_EN[] = {"DEFAULT\Core\NiceWeatherHuhQ.ogg"};
		NastyWeatherHuhQ_EN[] = {"DEFAULT\Core\NastyWeatherHuhQ.ogg"};
		ShouldBeClearingUpSoon_EN[] = {"DEFAULT\Core\ShouldBeClearingUpSoon.ogg"};
		IReckonWellGetSomeRainSoon_EN[] = {"DEFAULT\Core\IReckonWellGetSomeRainSoon.ogg"};
		TheySayItllStayLikeThisForAWhile_EN[] = {"DEFAULT\Core\TheySayItllStayLikeThisForAWhile.ogg"};
		WhatsTheClosestSettlementQ_EN[] = {"DEFAULT\Core\WhatsTheClosestSettlementQ.ogg"};
		TheClosestOneIs_EN[] = {"DEFAULT\Core\TheClosestOneIs.ogg"};
		ImNotFromAroundHere_EN[] = {"DEFAULT\Core\ImNotFromAroundHere.ogg"};
		NoIdeaIDontLiveHere_EN[] = {"DEFAULT\Core\NoIdeaIDontLiveHere.ogg"};
		YouAlreadyAskedMeThat_EN[] = {"DEFAULT\Core\YouAlreadyAskedMeThat.ogg"};
		AreYouKiddingQ_EN[] = {"DEFAULT\Core\AreYouKiddingQ.ogg"};
		StopAskingMeThat_EN[] = {"DEFAULT\Core\StopAskingMeThat.ogg"};
		SorryIDontUnderstand_EN[] = {"DEFAULT\Core\SorryIDontUnderstand.ogg"};
		UhWhatQ_EN[] = {"DEFAULT\Core\UhWhatQ.ogg"};
		IWillOnlyTellYouMyNameRankAndSerialNumber_EN[] = {"DEFAULT\Core\IWillOnlyTellYouMyNameRankAndSerialNumber.ogg"};
		SirQ_EN[] = {"DEFAULT\Core\SirQ.ogg"};
		PrivateQ_EN[] = {"DEFAULT\Core\PrivateQ.ogg"};
		CorporalQ_EN[] = {"DEFAULT\Core\CorporalQ.ogg"};
		SergeantQ_EN[] = {"DEFAULT\Core\SergeantQ.ogg"};
		LieutenantQ_EN[] = {"DEFAULT\Core\LieutenantQ.ogg"};
		CaptainQ_EN[] = {"DEFAULT\Core\CaptainQ.ogg"};
		MajorQ_EN[] = {"DEFAULT\Core\MajorQ.ogg"};
		ColonelQ_EN[] = {"DEFAULT\Core\ColonelQ.ogg"};
		YesPrivate_EN[] = {"DEFAULT\Core\YesPrivate.ogg"};
		YesCorporal_EN[] = {"DEFAULT\Core\YesCorporal.ogg"};
		YesSergeant_EN[] = {"DEFAULT\Core\YesSergeant.ogg"};
		YesLieutenant_EN[] = {"DEFAULT\Core\YesLieutenant.ogg"};
		YesCaptain_EN[] = {"DEFAULT\Core\YesCaptain.ogg"};
		YesMajor_EN[] = {"DEFAULT\Core\YesMajor.ogg"};
		YesColonel_EN[] = {"DEFAULT\Core\YesColonel.ogg"};
		SoldierQ_EN[] = {"DEFAULT\Core\SoldierQ.ogg"};
		MorninSoldier_EN[] = {"DEFAULT\Core\MorninSoldier.ogg"};
		EveninSoldier_EN[] = {"DEFAULT\Core\EveninSoldier.ogg"};
		GoodDaySir_EN[] = {"DEFAULT\Core\GoodDaySir.ogg"};
		GoodEveningSir_EN[] = {"DEFAULT\Core\GoodEveningSir.ogg"};
		GoodMorningSir_EN[] = {"DEFAULT\Core\GoodMorningSir.ogg"};
		GoodDay_EN[] = {"DEFAULT\Core\GoodDay.ogg"};
		GoodMorning_EN[] = {"DEFAULT\Core\GoodMorning.ogg"};
		GoodEvening_EN[] = {"DEFAULT\Core\GoodEvening.ogg"};
		WhatQ_EN[] = {"DEFAULT\Core\WhatQ.ogg"};
		YesSir_EN[] = {"DEFAULT\Core\YesSir.ogg"};
		HelloSir_EN[] = {"DEFAULT\Core\HelloSir.ogg"};
		Yep_EN[] = {"DEFAULT\Core\Yep.ogg"};
		YeahQ_EN[] = {"DEFAULT\Core\YeahQ.ogg"};
		Hi_EN[] = {"DEFAULT\Core\Hi.ogg"};
		HiThereE_EN[] = {"DEFAULT\Core\HiThereE.ogg"};
		HeyMan_EN[] = {"DEFAULT\Core\HeyMan.ogg"};
		HiDude_EN[] = {"DEFAULT\Core\HiDude.ogg"};
		Hello_EN[] = {"DEFAULT\Core\Hello.ogg"};
		HowsThingsQ_EN[] = {"DEFAULT\Core\HowsThingsQ.ogg"};
		HowAreYouQ_EN[] = {"DEFAULT\Core\HowAreYouQ.ogg"};
		HeyE_EN[] = {"DEFAULT\Core\HeyE.ogg"};
		WhatDoYouWantQ_EN[] = {"DEFAULT\Core\WhatDoYouWantQ.ogg"};
		WhatDoYouNeedQ_EN[] = {"DEFAULT\Core\WhatDoYouNeedQ.ogg"};
		WhatsUpQ_EN[] = {"DEFAULT\Core\WhatsUpQ.ogg"};
		YesQ_EN[] = {"DEFAULT\Core\YesQ.ogg"};
		MaamQ_EN[] = {"DEFAULT\Core\MaamQ.ogg"};
		HaveANiceDay_EN[] = {"DEFAULT\Core\HaveANiceDay.ogg"};
		MorningMaam_EN[] = {"DEFAULT\Core\MorningMaam.ogg"};
		HelloThere_EN[] = {"DEFAULT\Core\HelloThere.ogg"};
		HowYouDoinQ_EN[] = {"DEFAULT\Core\HowYouDoinQ.ogg"};
		DontTouchMeE_EN[] = {"DEFAULT\Core\DontTouchMeE.ogg"};
		NotNowE_EN[] = {"DEFAULT\Core\NotNowE.ogg"};
		Later_EN[] = {"DEFAULT\Core\Later.ogg"};
		NoTimeE_EN[] = {"DEFAULT\Core\NoTimeE.ogg"};
		HushE_EN[] = {"DEFAULT\Core\HushE.ogg"};
		SsshhE_EN[] = {"DEFAULT\Core\SsshhE.ogg"};
		CantYouSeeImBusyQ_EN[] = {"DEFAULT\Core\CantYouSeeImBusyQ.ogg"};
		BitOccupiedAtTheMomentDude_EN[] = {"DEFAULT\Core\BitOccupiedAtTheMomentDude.ogg"};
		ImBusyE_EN[] = {"DEFAULT\Core\ImBusyE.ogg"};
		PissOffE_EN[] = {"DEFAULT\Core\PissOffE.ogg"};
		NiceToSeeYou_EN[] = {"DEFAULT\Core\NiceToSeeYou.ogg"};
		GoodToSeeYou_EN[] = {"DEFAULT\Core\GoodToSeeYou.ogg"};
		HeyGladYoureHere_EN[] = {"DEFAULT\Core\HeyGladYoureHere.ogg"};
		CanIHelpYouQ_EN[] = {"DEFAULT\Core\CanIHelpYouQ.ogg"};
		GetLostE_EN[] = {"DEFAULT\Core\GetLostE.ogg"};
		LeaveMeAloneE_EN[] = {"DEFAULT\Core\LeaveMeAloneE.ogg"};
		LeaveUsAloneE_EN[] = {"DEFAULT\Core\LeaveUsAloneE.ogg"};
		FuckingPig_EN[] = {"DEFAULT\Core\FuckingPig.ogg"};
		SonOfABitchE_EN[] = {"DEFAULT\Core\SonOfABitchE.ogg"};
		DamnYouE_EN[] = {"DEFAULT\Core\DamnYouE.ogg"};
		CanIAskYouSomethingQ_EN[] = {"DEFAULT\Core\CanIAskYouSomethingQ.ogg"};
		PleaseCanYouHelpQ_EN[] = {"DEFAULT\Core\PleaseCanYouHelpQ.ogg"};
		Speak_EN[] = {"DEFAULT\Core\Speak.ogg"};
		HelpUs_EN[] = {"DEFAULT\Core\HelpUs.ogg"};
		IWontSayAnotherWord_EN[] = {"DEFAULT\Core\IWontSayAnotherWord.ogg"};
		MindYourOwnBusiness_EN[] = {"DEFAULT\Core\MindYourOwnBusiness.ogg"};
		GoBotherSomeoneElse_EN[] = {"DEFAULT\Core\GoBotherSomeoneElse.ogg"};
		CopyThat[] = {"DEFAULT\SOM\CopyThat.ogg"};
		ObjectiveFailed[] = {"DEFAULT\SOM\ObjectiveFailed.ogg"};
		DoYouCopyQ[] = {"DEFAULT\SOM\DoYouCopyQ.ogg"};
		RequestingFireSupportAtGrid[] = {"DEFAULT\SOM\RequestingFireSupportAtGrid.ogg"};
		FiringAtTargetLocation[] = {"DEFAULT\SOM\FiringAtTargetLocation.ogg"};
		ArtilleryNotAvailableRightNow[] = {"DEFAULT\SOM\ArtilleryNotAvailableRightNow.ogg"};
		RequestingContinuousIlluminationAtGrid[] = {"DEFAULT\SOM\RequestingContinuousIlluminationAtGrid.ogg"};
		IlluminatingTargetLocation[] = {"DEFAULT\SOM\IlluminatingTargetLocation.ogg"};
		NoFireMissionAvailableAtThisTime[] = {"DEFAULT\SOM\NoFireMissionAvailableAtThisTime.ogg"};
		ThisIs[] = {"DEFAULT\SOM\ThisIs.ogg"};
		RequestingReinforcementsToOurPositionGrid[] = {"DEFAULT\SOM\RequestingReinforcementsToOurPositionGrid.ogg"};
		WeCanFlyInReinforcmentsAsNeeded[] = {"DEFAULT\SOM\WeCanFlyInReinforcmentsAsNeeded.ogg"};
		YouWillHaveToManageYourself[] = {"DEFAULT\SOM\YouWillHaveToManageYourself.ogg"};
		RequestingSupplyDropAtGrid[] = {"DEFAULT\SOM\RequestingSupplyDropAtGrid.ogg"};
		SupportOnWayStandBy[] = {"DEFAULT\SOM\SupportOnWayStandBy.ogg"};
		RequestingCloseAirSupportAtGrid[] = {"DEFAULT\SOM\RequestingCloseAirSupportAtGrid.ogg"};
		RogerAircraftOnTheWay[] = {"DEFAULT\SOM\RogerAircraftOnTheWay.ogg"};
		NegativeOnTheCloseAirSupport[] = {"DEFAULT\SOM\NegativeOnTheCloseAirSupport.ogg"};
		IntelShowsAConvoyEnrouteNearYourPositionAreYouFreeToInterceptAndDestroyItQ[] = {"DEFAULT\SOM\IntelShowsAConvoyEnrouteNearYourPositionAreYouFreeToInterceptAndDestroyItQ.ogg"};
		BeAdvisedOtherUnitsWillHandleTheConvoy[] = {"DEFAULT\SOM\BeAdvisedOtherUnitsWillHandleTheConvoy.ogg"};
		UAVConfirmsAllVehiclesDestroyed[] = {"DEFAULT\SOM\UAVConfirmsAllVehiclesDestroyed.ogg"};
		BeAdvisedTargetVehicleHasReachedItsDestination[] = {"DEFAULT\SOM\BeAdvisedTargetVehicleHasReachedItsDestination.ogg"};
		BeAdvisedTargetVehicleIsDisabled[] = {"DEFAULT\SOM\BeAdvisedTargetVehicleIsDisabled.ogg"};
		EnemyPositionInCloseProximityCanYouAssaultTheLocationQ[] = {"DEFAULT\SOM\EnemyPositionInCloseProximityCanYouAssaultTheLocationQ.ogg"};
		BeAdvisedEnemyHasChangedPositionAttackCancelled[] = {"DEFAULT\SOM\BeAdvisedEnemyHasChangedPositionAttackCancelled.ogg"};
		EnemyPositionNeutralized[] = {"DEFAULT\SOM\EnemyPositionNeutralized.ogg"};
		BeAdvisedFriendlyUnitsUnderAttackCanYouAssistQ[] = {"DEFAULT\SOM\BeAdvisedFriendlyUnitsUnderAttackCanYouAssistQ.ogg"};
		EnemyAttackRepelled[] = {"DEFAULT\SOM\EnemyAttackRepelled.ogg"};
		GoodWorkWeSeeNoMoreHostilesInTheArea[] = {"DEFAULT\SOM\GoodWorkWeSeeNoMoreHostilesInTheArea.ogg"};
		ZeroHostilesAttackHalted[] = {"DEFAULT\SOM\ZeroHostilesAttackHalted.ogg"};
		WereUnableToHoldPositionFallingBack[] = {"DEFAULT\SOM\WereUnableToHoldPositionFallingBack.ogg"};
		BeAdvisedAHighValueTargetHasBeenMarkedOnYourMapCanYouInterceptAndDestroyQ[] = {"DEFAULT\SOM\BeAdvisedAHighValueTargetHasBeenMarkedOnYourMapCanYouInterceptAndDestroyQ.ogg"};
		CancellingTheDestroyOrderBadIntelHowCopyQ[] = {"DEFAULT\SOM\CancellingTheDestroyOrderBadIntelHowCopyQ.ogg"};
		HighValueTargetDestroyedOver[] = {"DEFAULT\SOM\HighValueTargetDestroyedOver.ogg"};
		FriendlyTroopsRequestingEscortThroughHostileZoneCanYouOfferSupportAlongTheDesignatedRouteQ[] = {"DEFAULT\SOM\FriendlyTroopsRequestingEscortThroughHostileZoneCanYouOfferSupportAlongTheDesignatedRouteQ.ogg"};
		WeHaveAssignedAnotherUnitToThisEscortOp[] = {"DEFAULT\SOM\WeHaveAssignedAnotherUnitToThisEscortOp.ogg"};
		TargetInSightCommencingEscort[] = {"DEFAULT\SOM\TargetInSightCommencingEscort.ogg"};
		BeAdvisedEnemyPatrolsInCloseProximityHowCopyQ[] = {"DEFAULT\SOM\BeAdvisedEnemyPatrolsInCloseProximityHowCopyQ.ogg"};
		SolidCopyThanksForTheIntel[] = {"DEFAULT\SOM\SolidCopyThanksForTheIntel.ogg"};
		DestinationReachedEveryoneAccountedForOver[] = {"DEFAULT\SOM\DestinationReachedEveryoneAccountedForOver.ogg"};
		WereAtTheDestinationReportingLowCasualtiesOver[] = {"DEFAULT\SOM\WereAtTheDestinationReportingLowCasualtiesOver.ogg"};
		BeAdvisedEscortFailedWeLostThemOver[] = {"DEFAULT\SOM\BeAdvisedEscortFailedWeLostThemOver.ogg"};
		BeAdvisedHostilesReportedNearYourLocationCanYouMakeASweepOfTheCheckpointsQ[] = {"DEFAULT\SOM\BeAdvisedHostilesReportedNearYourLocationCanYouMakeASweepOfTheCheckpointsQ.ogg"};
		CancelThePatrolBadIntelOver[] = {"DEFAULT\SOM\CancelThePatrolBadIntelOver.ogg"};
		BeAdvisedImPassingCheckpointOne[] = {"DEFAULT\SOM\BeAdvisedImPassingCheckpointOne.ogg"};
		SitrepPassingCheckpointTwo[] = {"DEFAULT\SOM\SitrepPassingCheckpointTwo.ogg"};
		ReportingPatrolComplete[] = {"DEFAULT\SOM\ReportingPatrolComplete.ogg"};
		ThereAreFriendlyPOWsHeldInCloseProximityCanYouExtractThemQ[] = {"DEFAULT\SOM\ThereAreFriendlyPOWsHeldInCloseProximityCanYouExtractThemQ.ogg"};
		BeAdvisedPOWsWereTransportedToUnknownLocationMissionCanceled[] = {"DEFAULT\SOM\BeAdvisedPOWsWereTransportedToUnknownLocationMissionCanceled.ogg"};
		ExtractionConfirmedPOWsRecovered[] = {"DEFAULT\SOM\ExtractionConfirmedPOWsRecovered.ogg"};
		RequestingTransportForTheRecoveredPOWsOver[] = {"DEFAULT\SOM\RequestingTransportForTheRecoveredPOWsOver.ogg"};
		POWsAreKIAISayAgainAllFriendliesKIAOver[] = {"DEFAULT\SOM\POWsAreKIAISayAgainAllFriendliesKIAOver.ogg"};
		LocalsReportEnemyCachesInYourAOCanYouSearchForTheseCachesQ[] = {"DEFAULT\SOM\LocalsReportEnemyCachesInYourAOCanYouSearchForTheseCachesQ.ogg"};
		BeAdvisedFindingTheCachesIsNoLongerAPriority[] = {"DEFAULT\SOM\BeAdvisedFindingTheCachesIsNoLongerAPriority.ogg"};
		SearchCompleteSeveralStorageCachesUncoveredAndMarkedForCollectionHowCopyQ[] = {"DEFAULT\SOM\SearchCompleteSeveralStorageCachesUncoveredAndMarkedForCollectionHowCopyQ.ogg"};
		SearchCompleteALargeNumberOfCachesWereLocatedAndMarkedForCollectionOver[] = {"DEFAULT\SOM\SearchCompleteALargeNumberOfCachesWereLocatedAndMarkedForCollectionOver.ogg"};
		SearchCompleteNothingToReportZeroCachesFoundOver[] = {"DEFAULT\SOM\SearchCompleteNothingToReportZeroCachesFoundOver.ogg"};
		WeHaveAnAircraftDownInYourVicinityCanYouLocateAndSecureTheCrashSiteQ[] = {"DEFAULT\SOM\WeHaveAnAircraftDownInYourVicinityCanYouLocateAndSecureTheCrashSiteQ.ogg"};
		ReturnToYourPrimarySARTeamsOnRouteToTheCrashSite[] = {"DEFAULT\SOM\ReturnToYourPrimarySARTeamsOnRouteToTheCrashSite.ogg"};
		SurvivorsOnBoardTransportResumingPrimary[] = {"DEFAULT\SOM\SurvivorsOnBoardTransportResumingPrimary.ogg"};
		CrashSiteSecuredNoSurvivors[] = {"DEFAULT\SOM\CrashSiteSecuredNoSurvivors.ogg"};
		BeAdvisedCrashSiteCompromisedOver[] = {"DEFAULT\SOM\BeAdvisedCrashSiteCompromisedOver.ogg"};
		CrashSiteSecuredWeveGotSurvivorsRequestingCASEVACOver[] = {"DEFAULT\SOM\CrashSiteSecuredWeveGotSurvivorsRequestingCASEVACOver.ogg"};
		IGotARequestForTransportHereThePickUpIsCloseByCanYouHandleItQ[] = {"DEFAULT\SOM\IGotARequestForTransportHereThePickUpIsCloseByCanYouHandleItQ.ogg"};
		CancelThatRequestAlternateTransportFoundOver[] = {"DEFAULT\SOM\CancelThatRequestAlternateTransportFoundOver.ogg"};
		WeHavePickUpPointInSightOver[] = {"DEFAULT\SOM\WeHavePickUpPointInSightOver.ogg"};
		RogerThatThoseTroopsAreNeededElsewhereDoubleTimeGentlemen[] = {"DEFAULT\SOM\RogerThatThoseTroopsAreNeededElsewhereDoubleTimeGentlemen.ogg"};
		WeLostOurTransportISayAgainTransportDisabled[] = {"DEFAULT\SOM\WeLostOurTransportISayAgainTransportDisabled.ogg"};
		BeAdvisedAllPassengersAreKIAOver[] = {"DEFAULT\SOM\BeAdvisedAllPassengersAreKIAOver.ogg"};
		WereAtOurDestinationEveryoneAccountedForOver[] = {"DEFAULT\SOM\WereAtOurDestinationEveryoneAccountedForOver.ogg"};
		WereAtOurDestinationTookSomeCasualtiesButTheMajorityIsSafeOver[] = {"DEFAULT\SOM\WereAtOurDestinationTookSomeCasualtiesButTheMajorityIsSafeOver.ogg"};
		RequestingSupplyDrop[] = {"DEFAULT\SOM\RequestingSupplyDrop.ogg"};
		SupplyDropReadyRequestingDropZoneLocationOver[] = {"DEFAULT\SOM\SupplyDropReadyRequestingDropZoneLocationOver.ogg"};
		PositionConfirmedSuppliesInbound[] = {"DEFAULT\SOM\PositionConfirmedSuppliesInbound.ogg"};
		BeAdvisedWeLostContactWithTheTransportVehicleOut[] = {"DEFAULT\SOM\BeAdvisedWeLostContactWithTheTransportVehicleOut.ogg"};
		SuppliesDeliveredOut[] = {"DEFAULT\SOM\SuppliesDeliveredOut.ogg"};
		TheSuppliesHaveBeenDroppedOut[] = {"DEFAULT\SOM\TheSuppliesHaveBeenDroppedOut.ogg"};
		RequestingFastTransportOver[] = {"DEFAULT\SOM\RequestingFastTransportOver.ogg"};
		RogerTransportIsAvailableSendDestinationOver[] = {"DEFAULT\SOM\RogerTransportIsAvailableSendDestinationOver.ogg"};
		NegativeTransportUnavailableEnemyActivityInYourSectorOut[] = {"DEFAULT\SOM\NegativeTransportUnavailableEnemyActivityInYourSectorOut.ogg"};
		NegativeTransportUnavailableOut[] = {"DEFAULT\SOM\NegativeTransportUnavailableOut.ogg"};
		NegativeTransportIsUnavailableAtYourLocationOut[] = {"DEFAULT\SOM\NegativeTransportIsUnavailableAtYourLocationOut.ogg"};
		DestinationReachedThanksForTheAssistanceOut[] = {"DEFAULT\SOM\DestinationReachedThanksForTheAssistanceOut.ogg"};
		RequestingAerialReconOver[] = {"DEFAULT\SOM\RequestingAerialReconOver.ogg"};
		UAVReadyRequestingTargetLocationOver[] = {"DEFAULT\SOM\UAVReadyRequestingTargetLocationOver.ogg"};
		CoordinatesReceivedDroneIsEnrouteOver[] = {"DEFAULT\SOM\CoordinatesReceivedDroneIsEnrouteOver.ogg"};
		DroneIsBingoFuelAndRTBOver[] = {"DEFAULT\SOM\DroneIsBingoFuelAndRTBOver.ogg"};
		ThanksForTheUpdateOut[] = {"DEFAULT\SOM\ThanksForTheUpdateOut.ogg"};
		WeRequireLongRangeTransportHowCopyQ[] = {"DEFAULT\SOM\WeRequireLongRangeTransportHowCopyQ.ogg"};
		RogerThatTransportAvailableRequestingLZOver[] = {"DEFAULT\SOM\RogerThatTransportAvailableRequestingLZOver.ogg"};
		CopyTransportIsInboundOut[] = {"DEFAULT\SOM\CopyTransportIsInboundOut.ogg"};
		AllAboardSendingCoordinatesOver[] = {"DEFAULT\SOM\AllAboardSendingCoordinatesOver.ogg"};
		ReportingSuccessfulInsertionThanksForTheRideOut[] = {"DEFAULT\SOM\ReportingSuccessfulInsertionThanksForTheRideOut.ogg"};
		BeAdvisedTransportWasImmobilizedOut[] = {"DEFAULT\SOM\BeAdvisedTransportWasImmobilizedOut.ogg"};
		RequestingImmediateCloseAirSupportHowCopyQ[] = {"DEFAULT\SOM\RequestingImmediateCloseAirSupportHowCopyQ.ogg"};
		CopyThatAirstrikeIsReadyTransmitTargetLocationOver[] = {"DEFAULT\SOM\CopyThatAirstrikeIsReadyTransmitTargetLocationOver.ogg"};
		TargetLocationMarkedOver[] = {"DEFAULT\SOM\TargetLocationMarkedOver.ogg"};
		CoordinatesReceivedAircraftAreInboundContactOnLaserDesignatorOut[] = {"DEFAULT\SOM\CoordinatesReceivedAircraftAreInboundContactOnLaserDesignatorOut.ogg"};
		BeAdvisedWeHaveABirdStandingByWeCanFlyInReinforcementsIfNeededCheckYourMapForTheRendezvousPointAndConfirmOver[] = {"DEFAULT\SOM\BeAdvisedWeHaveABirdStandingByWeCanFlyInReinforcementsIfNeededCheckYourMapForTheRendezvousPointAndConfirmOver.ogg"};
		TheBirdHadToRTBForFuelOver[] = {"DEFAULT\SOM\TheBirdHadToRTBForFuelOver.ogg"};
		WeLinkedUpWithTheReinforcementsThanksForTheSupport[] = {"DEFAULT\SOM\WeLinkedUpWithTheReinforcementsThanksForTheSupport.ogg"};
		WeLostCommunicationWithThePilotBirdCouldBeDownOver[] = {"DEFAULT\SOM\WeLostCommunicationWithThePilotBirdCouldBeDownOver.ogg"};
		YourReinforcementsDidntMakeItToTheRendezvousYoullHaveToManageOver[] = {"DEFAULT\SOM\YourReinforcementsDidntMakeItToTheRendezvousYoullHaveToManageOver.ogg"};
		RequestingReleaseOfAnAttackHelicopterNearOurPositionOver[] = {"DEFAULT\SOM\RequestingReleaseOfAnAttackHelicopterNearOurPositionOver.ogg"};
		ReleaseAuthorizedSendStrikeTargetOver[] = {"DEFAULT\SOM\ReleaseAuthorizedSendStrikeTargetOver.ogg"};
		StrikeTargetSentOver[] = {"DEFAULT\SOM\StrikeTargetSentOver.ogg"};
		CoordinatesReceivedHeloIsAttackingTheTargetOut[] = {"DEFAULT\SOM\CoordinatesReceivedHeloIsAttackingTheTargetOut.ogg"};
		RequestingImmediateArtillerySuppressionHighExplosiveHowCopyQ[] = {"DEFAULT\SOM\RequestingImmediateArtillerySuppressionHighExplosiveHowCopyQ.ogg"};
		WithAnImmediateArtillerySuppressionRequestSmokeOver[] = {"DEFAULT\SOM\WithAnImmediateArtillerySuppressionRequestSmokeOver.ogg"};
		RequestingImmediateCoverWithWilliePeteOver[] = {"DEFAULT\SOM\RequestingImmediateCoverWithWilliePeteOver.ogg"};
		RequestingContinuousIlluminationAtTheTargetLocationHowCopyQ[] = {"DEFAULT\SOM\RequestingContinuousIlluminationAtTheTargetLocationHowCopyQ.ogg"};
		WeNeedLaserGuidedOrdnanceOver[] = {"DEFAULT\SOM\WeNeedLaserGuidedOrdnanceOver.ogg"};
		WeNeedAGuidedAntiArmorStrikeOver[] = {"DEFAULT\SOM\WeNeedAGuidedAntiArmorStrikeOver.ogg"};
		RequestingFireSupportFireForEffectOver[] = {"DEFAULT\SOM\RequestingFireSupportFireForEffectOver.ogg"};
		RequestingFireSupportAtTheTargetLocationWilliePeteInEffectHowCopyQ[] = {"DEFAULT\SOM\RequestingFireSupportAtTheTargetLocationWilliePeteInEffectHowCopyQ.ogg"};
		AdjustFireAtTheTargetLocationOver[] = {"DEFAULT\SOM\AdjustFireAtTheTargetLocationOver.ogg"};
		ArtilleryAvailableTransmitTargetLocationOver[] = {"DEFAULT\SOM\ArtilleryAvailableTransmitTargetLocationOver.ogg"};
		RogerThatTargetLocationReceivedOrdnanceIsInboundOver[] = {"DEFAULT\SOM\RogerThatTargetLocationReceivedOrdnanceIsInboundOver.ogg"};
		BeAdvisedArtilleryIsUnavailableAtThisTimeOut[] = {"DEFAULT\SOM\BeAdvisedArtilleryIsUnavailableAtThisTimeOut.ogg"};
		NegativeWeLostContactWithTheBatteryOut[] = {"DEFAULT\SOM\NegativeWeLostContactWithTheBatteryOut.ogg"};
		BeAdvisedTheBatteryCannotTargetThatGridOut[] = {"DEFAULT\SOM\BeAdvisedTheBatteryCannotTargetThatGridOut.ogg"};
		CannotExecuteAdjustCoordinatesOut[] = {"DEFAULT\SOM\CannotExecuteAdjustCoordinatesOut.ogg"};
		ThatsOutsideOurFiringEnvelopeOut[] = {"DEFAULT\SOM\ThatsOutsideOurFiringEnvelopeOut.ogg"};
		ShotOver[] = {"DEFAULT\SOM\ShotOver.ogg"};
		ShotOut[] = {"DEFAULT\SOM\ShotOut.ogg"};
		SplashOver[] = {"DEFAULT\SOM\SplashOver.ogg"};
		SplashOut[] = {"DEFAULT\SOM\SplashOut.ogg"};
		RoundsComplete[] = {"DEFAULT\SOM\RoundsComplete.ogg"};
		CheckFireE[] = {"DEFAULT\SOM\CheckFireE.ogg"};
		CeasingFire[] = {"DEFAULT\SOM\CeasingFire.ogg"};
		BeAdvisedTheBatteryJustDroppedOffTheCommGridYoureOnYourOwnOver[] = {"DEFAULT\SOM\BeAdvisedTheBatteryJustDroppedOffTheCommGridYoureOnYourOwnOver.ogg"};
		RogerWellHandleItOurselvesOut[] = {"DEFAULT\SOM\RogerWellHandleItOurselvesOut.ogg"};
		StandByForMissionUpdate[] = {"DEFAULT\SOM\StandByForMissionUpdate.ogg"};
		Out[] = {"DEFAULT\SOM\Out.ogg"};
		RogerThat[] = {"DEFAULT\SOM\RogerThat.ogg"};
		JobWellDone[] = {"DEFAULT\SOM\JobWellDone.ogg"};
		GoodJobOut[] = {"DEFAULT\SOM\GoodJobOut.ogg"};
		WellDoneOut[] = {"DEFAULT\SOM\WellDoneOut.ogg"};
		MissionFailure[] = {"DEFAULT\SOM\MissionFailure.ogg"};
		MessageOver[] = {"DEFAULT\SOM\MessageOver.ogg"};
		ComeIn[] = {"DEFAULT\SOM\ComeIn.ogg"};
		GoAheadOver[] = {"DEFAULT\SOM\GoAheadOver.ogg"};
		CopyGoAhead[] = {"DEFAULT\SOM\CopyGoAhead.ogg"};
		Here[] = {"DEFAULT\SOM\Here.ogg"};
		WeCopyYouLoudAndClear[] = {"DEFAULT\SOM\WeCopyYouLoudAndClear.ogg"};
		WeCannotDivertAtThisTimeOut[] = {"DEFAULT\SOM\WeCannotDivertAtThisTimeOut.ogg"};
		Sorry[] = {"DEFAULT\SOM\Sorry.ogg"};
		NoWayWeCanHelpWithThatRightNowOut[] = {"DEFAULT\SOM\NoWayWeCanHelpWithThatRightNowOut.ogg"};
		WereOnTheWayOut[] = {"DEFAULT\SOM\WereOnTheWayOut.ogg"};
		WereOscarMikeOut[] = {"DEFAULT\SOM\WereOscarMikeOut.ogg"};
		UnableToCompleteTheObjectiveAbortingOver[] = {"DEFAULT\SOM\UnableToCompleteTheObjectiveAbortingOver.ogg"};
		WeHaveToAbortOver[] = {"DEFAULT\SOM\WeHaveToAbortOver.ogg"};
		ContinueYourPreviousMissionOver[] = {"DEFAULT\SOM\ContinueYourPreviousMissionOver.ogg"};
		AbortTheOpOver[] = {"DEFAULT\SOM\AbortTheOpOver.ogg"};
		ReturnToYourPrimaryOver[] = {"DEFAULT\SOM\ReturnToYourPrimaryOver.ogg"};
		CarryOnWithYourPriorTasksOver[] = {"DEFAULT\SOM\CarryOnWithYourPriorTasksOver.ogg"};
		StandByOver[] = {"DEFAULT\SOM\StandByOver.ogg"};
		Affirmative[] = {"DEFAULT\SOM\Affirmative.ogg"};
		SupportIsNotAvailableOut[] = {"DEFAULT\SOM\SupportIsNotAvailableOut.ogg"};
		YourRequestHasBeenRejectedOut[] = {"DEFAULT\SOM\YourRequestHasBeenRejectedOut.ogg"};
		CannotExecuteThatsOutsideOurFiringEnvelope[] = {"DEFAULT\SOM\CannotExecuteThatsOutsideOurFiringEnvelope.ogg"};
		CannotExecuteAdjustCoordinates[] = {"DEFAULT\SOM\CannotExecuteAdjustCoordinates.ogg"};
		FireAt[] = {"DEFAULT\FireAt.ogg"};
		RepairThat[] = {"DEFAULT\RepairThat.ogg"};
		Several_TK[] = {"DEFAULT\Core_TK\Several.ogg"};
		Single_TK[] = {"DEFAULT\Core_TK\Single.ogg"};
		None_TK[] = {"DEFAULT\Core_TK\None.ogg"};
		Some_TK[] = {"DEFAULT\Core_TK\Some.ogg"};
		ALotOf_TK[] = {"DEFAULT\Core_TK\ALotOf.ogg"};
		Independent_TK[] = {"DEFAULT\Core_TK\Independent.ogg"};
		Civilian_TK[] = {"DEFAULT\Core_TK\Civilian.ogg"};
		OfThem_TK[] = {"DEFAULT\Core_TK\OfThem.ogg"};
		One_TK[] = {"DEFAULT\Core_TK\One.ogg"};
		In_TK[] = {"DEFAULT\Core_TK\In.ogg"};
		Near_TK[] = {"DEFAULT\Core_TK\Near.ogg"};
		NotFar_TK[] = {"DEFAULT\Core_TK\NotFar.ogg"};
		From_TK[] = {"DEFAULT\Core_TK\From.ogg"};
		Around_TK[] = {"DEFAULT\Core_TK\Around.ogg"};
		Here_TK[] = {"DEFAULT\Core_TK\Here.ogg"};
		There_TK[] = {"DEFAULT\Core_TK\There.ogg"};
		Probably_TK[] = {"DEFAULT\Core_TK\Probably.ogg"};
		ToThe_TK[] = {"DEFAULT\Core_TK\ToThe.ogg"};
		IsProbablyToThe_TK[] = {"DEFAULT\Core_TK\IsProbablyToThe.ogg"};
		JustNow_TK[] = {"DEFAULT\Core_TK\JustNow.ogg"};
		AFewMinutesAgo_TK[] = {"DEFAULT\Core_TK\AFewMinutesAgo.ogg"};
		AFewHoursAgo_TK[] = {"DEFAULT\Core_TK\AFewHoursAgo.ogg"};
		Today_TK[] = {"DEFAULT\Core_TK\Today.ogg"};
		Yesterday_TK[] = {"DEFAULT\Core_TK\Yesterday.ogg"};
		SeveralDaysAgo_TK[] = {"DEFAULT\Core_TK\SeveralDaysAgo.ogg"};
		EnglishQ_TK[] = {"DEFAULT\Core_TK\EnglishQ.ogg"};
		RussianQ_TK[] = {"DEFAULT\Core_TK\RussianQ.ogg"};
		CzechQ_TK[] = {"DEFAULT\Core_TK\CzechQ.ogg"};
		TakistaniQ_TK[] = {"DEFAULT\Core_TK\TakistaniQ.ogg"};
		North_TK[] = {"DEFAULT\Core_TK\North.ogg"};
		South_TK[] = {"DEFAULT\Core_TK\South.ogg"};
		West_TK[] = {"DEFAULT\Core_TK\West.ogg"};
		East_TK[] = {"DEFAULT\Core_TK\East.ogg"};
		Northwest_TK[] = {"DEFAULT\Core_TK\Northwest.ogg"};
		Southwest_TK[] = {"DEFAULT\Core_TK\Southwest.ogg"};
		Northeast_TK[] = {"DEFAULT\Core_TK\Northeast.ogg"};
		Southeast_TK[] = {"DEFAULT\Core_TK\Southeast.ogg"};
		DidYouSeeAnythingRecentlyQ_TK[] = {"DEFAULT\Core_TK\DidYouSeeAnythingRecentlyQ.ogg"};
		YesISawSomething_TK[] = {"DEFAULT\Core_TK\YesISawSomething.ogg"};
		NoIDidntSeeAnything_TK[] = {"DEFAULT\Core_TK\NoIDidntSeeAnything.ogg"};
		WhatsTheWeatherForecastQ_TK[] = {"DEFAULT\Core_TK\WhatsTheWeatherForecastQ.ogg"};
		NiceWeatherHuhQ_TK[] = {"DEFAULT\Core_TK\NiceWeatherHuhQ.ogg"};
		NastyWeatherHuhQ_TK[] = {"DEFAULT\Core_TK\NastyWeatherHuhQ.ogg"};
		ShouldBeClearingUpSoon_TK[] = {"DEFAULT\Core_TK\ShouldBeClearingUpSoon.ogg"};
		IReckonWellGetSomeRainSoon_TK[] = {"DEFAULT\Core_TK\IReckonWellGetSomeRainSoon.ogg"};
		TheySayItllStayLikeThisForAWhile_TK[] = {"DEFAULT\Core_TK\TheySayItllStayLikeThisForAWhile.ogg"};
		WhatsTheClosestSettlementQ_TK[] = {"DEFAULT\Core_TK\WhatsTheClosestSettlementQ.ogg"};
		TheClosestOneIs_TK[] = {"DEFAULT\Core_TK\TheClosestOneIs.ogg"};
		ImNotFromAroundHere_TK[] = {"DEFAULT\Core_TK\ImNotFromAroundHere.ogg"};
		NoIdeaIDontLiveHere_TK[] = {"DEFAULT\Core_TK\NoIdeaIDontLiveHere.ogg"};
		YouAlreadyAskedMeThat_TK[] = {"DEFAULT\Core_TK\YouAlreadyAskedMeThat.ogg"};
		AreYouKiddingQ_TK[] = {"DEFAULT\Core_TK\AreYouKiddingQ.ogg"};
		StopAskingMeThat_TK[] = {"DEFAULT\Core_TK\StopAskingMeThat.ogg"};
		SorryIDontUnderstand_TK[] = {"DEFAULT\Core_TK\SorryIDontUnderstand.ogg"};
		UhWhatQ_TK[] = {"DEFAULT\Core_TK\UhWhatQ.ogg"};
		IWillOnlyTellYouMyNameRankAndSerialNumber_TK[] = {"DEFAULT\Core_TK\IWillOnlyTellYouMyNameRankAndSerialNumber.ogg"};
		SirQ_TK[] = {"DEFAULT\Core_TK\SirQ.ogg"};
		PrivateQ_TK[] = {"DEFAULT\Core_TK\PrivateQ.ogg"};
		CorporalQ_TK[] = {"DEFAULT\Core_TK\CorporalQ.ogg"};
		SergeantQ_TK[] = {"DEFAULT\Core_TK\SergeantQ.ogg"};
		LieutenantQ_TK[] = {"DEFAULT\Core_TK\LieutenantQ.ogg"};
		CaptainQ_TK[] = {"DEFAULT\Core_TK\CaptainQ.ogg"};
		MajorQ_TK[] = {"DEFAULT\Core_TK\MajorQ.ogg"};
		ColonelQ_TK[] = {"DEFAULT\Core_TK\ColonelQ.ogg"};
		YesPrivate_TK[] = {"DEFAULT\Core_TK\YesPrivate.ogg"};
		YesCorporal_TK[] = {"DEFAULT\Core_TK\YesCorporal.ogg"};
		YesSergeant_TK[] = {"DEFAULT\Core_TK\YesSergeant.ogg"};
		YesLieutenant_TK[] = {"DEFAULT\Core_TK\YesLieutenant.ogg"};
		YesCaptain_TK[] = {"DEFAULT\Core_TK\YesCaptain.ogg"};
		YesMajor_TK[] = {"DEFAULT\Core_TK\YesMajor.ogg"};
		YesColonel_TK[] = {"DEFAULT\Core_TK\YesColonel.ogg"};
		SoldierQ_TK[] = {"DEFAULT\Core_TK\SoldierQ.ogg"};
		MorninSoldier_TK[] = {"DEFAULT\Core_TK\MorninSoldier.ogg"};
		EveninSoldier_TK[] = {"DEFAULT\Core_TK\EveninSoldier.ogg"};
		GoodDaySir_TK[] = {"DEFAULT\Core_TK\GoodDaySir.ogg"};
		GoodEveningSir_TK[] = {"DEFAULT\Core_TK\GoodEveningSir.ogg"};
		GoodMorningSir_TK[] = {"DEFAULT\Core_TK\GoodMorningSir.ogg"};
		GoodDay_TK[] = {"DEFAULT\Core_TK\GoodDay.ogg"};
		GoodMorning_TK[] = {"DEFAULT\Core_TK\GoodMorning.ogg"};
		GoodEvening_TK[] = {"DEFAULT\Core_TK\GoodEvening.ogg"};
		WhatQ_TK[] = {"DEFAULT\Core_TK\WhatQ.ogg"};
		YesSir_TK[] = {"DEFAULT\Core_TK\YesSir.ogg"};
		HelloSir_TK[] = {"DEFAULT\Core_TK\HelloSir.ogg"};
		Yep_TK[] = {"DEFAULT\Core_TK\Yep.ogg"};
		YeahQ_TK[] = {"DEFAULT\Core_TK\YeahQ.ogg"};
		Hi_TK[] = {"DEFAULT\Core_TK\Hi.ogg"};
		HiThereE_TK[] = {"DEFAULT\Core_TK\HiThereE.ogg"};
		HeyMan_TK[] = {"DEFAULT\Core_TK\HeyMan.ogg"};
		HiDude_TK[] = {"DEFAULT\Core_TK\HiDude.ogg"};
		Hello_TK[] = {"DEFAULT\Core_TK\Hello.ogg"};
		HowsThingsQ_TK[] = {"DEFAULT\Core_TK\HowsThingsQ.ogg"};
		HowAreYouQ_TK[] = {"DEFAULT\Core_TK\HowAreYouQ.ogg"};
		HeyE_TK[] = {"DEFAULT\Core_TK\HeyE.ogg"};
		WhatDoYouWantQ_TK[] = {"DEFAULT\Core_TK\WhatDoYouWantQ.ogg"};
		WhatDoYouNeedQ_TK[] = {"DEFAULT\Core_TK\WhatDoYouNeedQ.ogg"};
		WhatsUpQ_TK[] = {"DEFAULT\Core_TK\WhatsUpQ.ogg"};
		YesQ_TK[] = {"DEFAULT\Core_TK\YesQ.ogg"};
		MaamQ_TK[] = {"DEFAULT\Core_TK\MaamQ.ogg"};
		HaveANiceDay_TK[] = {"DEFAULT\Core_TK\HaveANiceDay.ogg"};
		MorningMaam_TK[] = {"DEFAULT\Core_TK\MorningMaam.ogg"};
		HelloThere_TK[] = {"DEFAULT\Core_TK\HelloThere.ogg"};
		HowYouDoinQ_TK[] = {"DEFAULT\Core_TK\HowYouDoinQ.ogg"};
		DontTouchMeE_TK[] = {"DEFAULT\Core_TK\DontTouchMeE.ogg"};
		NotNowE_TK[] = {"DEFAULT\Core_TK\NotNowE.ogg"};
		Later_TK[] = {"DEFAULT\Core_TK\Later.ogg"};
		NoTimeE_TK[] = {"DEFAULT\Core_TK\NoTimeE.ogg"};
		HushE_TK[] = {"DEFAULT\Core_TK\HushE.ogg"};
		SsshhE_TK[] = {"DEFAULT\Core_TK\SsshhE.ogg"};
		CantYouSeeImBusyQ_TK[] = {"DEFAULT\Core_TK\CantYouSeeImBusyQ.ogg"};
		BitOccupiedAtTheMomentDude_TK[] = {"DEFAULT\Core_TK\BitOccupiedAtTheMomentDude.ogg"};
		ImBusyE_TK[] = {"DEFAULT\Core_TK\ImBusyE.ogg"};
		PissOffE_TK[] = {"DEFAULT\Core_TK\PissOffE.ogg"};
		NiceToSeeYou_TK[] = {"DEFAULT\Core_TK\NiceToSeeYou.ogg"};
		GoodToSeeYou_TK[] = {"DEFAULT\Core_TK\GoodToSeeYou.ogg"};
		HeyGladYoureHere_TK[] = {"DEFAULT\Core_TK\HeyGladYoureHere.ogg"};
		CanIHelpYouQ_TK[] = {"DEFAULT\Core_TK\CanIHelpYouQ.ogg"};
		GetLostE_TK[] = {"DEFAULT\Core_TK\GetLostE.ogg"};
		LeaveMeAloneE_TK[] = {"DEFAULT\Core_TK\LeaveMeAloneE.ogg"};
		LeaveUsAloneE_TK[] = {"DEFAULT\Core_TK\LeaveUsAloneE.ogg"};
		FuckingPig_TK[] = {"DEFAULT\Core_TK\FuckingPig.ogg"};
		SonOfABitchE_TK[] = {"DEFAULT\Core_TK\SonOfABitchE.ogg"};
		DamnYouE_TK[] = {"DEFAULT\Core_TK\DamnYouE.ogg"};
		CanIAskYouSomethingQ_TK[] = {"DEFAULT\Core_TK\CanIAskYouSomethingQ.ogg"};
		PleaseCanYouHelpQ_TK[] = {"DEFAULT\Core_TK\PleaseCanYouHelpQ.ogg"};
		Speak_TK[] = {"DEFAULT\Core_TK\Speak.ogg"};
		HelpUs_TK[] = {"DEFAULT\Core_TK\HelpUs.ogg"};
		IWontSayAnotherWord_TK[] = {"DEFAULT\Core_TK\IWontSayAnotherWord.ogg"};
		MindYourOwnBusiness_TK[] = {"DEFAULT\Core_TK\MindYourOwnBusiness.ogg"};
		GoBotherSomeoneElse_TK[] = {"DEFAULT\Core_TK\GoBotherSomeoneElse.ogg"};
		10minutesleft[] = {"DEFAULT\warfare\OperationTerminatesIn10Minutes.ogg"};
		20minutesleft[] = {"DEFAULT\warfare\OperationTerminatesIn20Minutes.ogg"};
		5minutesleft[] = {"DEFAULT\warfare\OperationTerminatesIn5Minutes.ogg"};
		BaseUnderAtack[] = {"DEFAULT\warfare\BaseUnderAttackE.ogg"};
		BaseUnderAttack[] = {"DEFAULT\warfare\BaseUnderAttackE.ogg"};
		CanDoWereOnIt[] = {"DEFAULT\warfare\CanDoWereOnIt.ogg"};
		Captured[] = {"DEFAULT\warfare\Captured.ogg"};
		CapturedNear[] = {"DEFAULT\warfare\CapturedNear.ogg"};
		CiviliansUnderEnemyFireIn[] = {"DEFAULT\warfare\CiviliansUnderEnemyFireIn.ogg"};
		Constructed[] = {"DEFAULT\warfare\Constructed.ogg"};
		Deployed[] = {"DEFAULT\warfare\Deployed.ogg"};
		Destroyed[] = {"DEFAULT\warfare\Destroyed.ogg"};
		EnemyBaseLocated[] = {"DEFAULT\warfare\EnemyBaseLocated.ogg"};
		EnemyForcesDetected[] = {"DEFAULT\warfare\EnemyForcesDetected.ogg"};
		HostilesDetectedNear[] = {"DEFAULT\warfare\HostilesDetectedNear.ogg"};
		InsufficientFunds[] = {"DEFAULT\warfare\InsufficientFunds.ogg"};
		InsufficientResources[] = {"DEFAULT\warfare\InsufficientResources.ogg"};
		InsufficientSupplies[] = {"DEFAULT\warfare\InsufficientSupplies.ogg"};
		IsUnderAttack[] = {"DEFAULT\warfare\IsUnderAttack.ogg"};
		Lost[] = {"DEFAULT\warfare\Lost.ogg"};
		LostAt[] = {"DEFAULT\warfare\LostAt.ogg"};
		Mobilized[] = {"DEFAULT\warfare\Mobilized.ogg"};
		NegativeWeCannotDivertAtThisTime[] = {"DEFAULT\warfare\Mobilized.ogg"};
		NegativeWeCannotDivert[] = {"DEFAULT\warfare\Mobilized.ogg"};
		NewIntelAvailable[] = {"DEFAULT\warfare\NewIntelAvailable.ogg"};
		NewMissionAvailable[] = {"DEFAULT\warfare\NewMissionAvailable.ogg"};
		NewSupportAvailable[] = {"DEFAULT\warfare\NewSupportAvailable.ogg"};
		UnderAttack[] = {"DEFAULT\warfare\UnderAttackE.ogg"};
		VotingForNewCommander[] = {"DEFAULT\warfare\VotingForANewCommander.ogg"};
		AntiAirRadar[] = {"DEFAULT\warfare\AntiAirRadar.ogg"};
		ArtilleryBattery[] = {"DEFAULT\warfare\ArtilleryBattery.ogg"};
		ArtilleryRadar[] = {"DEFAULT\warfare\ArtilleryRadar.ogg"};
		Barracks[] = {"DEFAULT\warfare\Barracks.ogg"};
		Headquarters[] = {"DEFAULT\warfare\Headquarters.ogg"};
		HeavyVehicleSupply[] = {"DEFAULT\warfare\HeavyVehicleSupplyPoint.ogg"};
		Helipad[] = {"DEFAULT\warfare\Helipad.ogg"};
		LightVehicleSupply[] = {"DEFAULT\warfare\LightVehicleSupplyPoint.ogg"};
		ServicePoint[] = {"DEFAULT\warfare\ServicePoint.ogg"};
		Strongpoint[] = {"DEFAULT\warfare\StrongPoint.ogg"};
		UAVTerminal[] = {"DEFAULT\warfare\UAVTerminal.ogg"};
		PermissionGranted[] = {"DEFAULT\warfare\PermissionGranted.ogg"};
		RequestingAssistance[] = {"DEFAULT\warfare\RequestingAssistance.ogg"};
		RequestingPermissionToJoin[] = {"DEFAULT\warfare\RequestingPermissionToJoinYourTeam.ogg"};
		RequestingPermissionToLeave[] = {"DEFAULT\warfare\RequestingPermissionToLeaveYourTeam.ogg"};
		RequestRejected[] = {"DEFAULT\warfare\RequestRejected.ogg"};
		AllianceFormed[] = {"DEFAULT\warfare\AllianceFormed.ogg"};
		AllianceHasEnded[] = {"DEFAULT\warfare\AllianceHasEnded.ogg"};
		AnotherTeamHasTransferredFundsToYou[] = {"DEFAULT\warfare\AnotherTeamHasTransferredFundsToYou.ogg"};
		BLUFORCommanderRequestsACeaseFire[] = {"DEFAULT\warfare\BLUFORCommanderRequestsACeaseFire.ogg"};
		BLUFORCommanderRequestsAnAlliance[] = {"DEFAULT\warfare\BLUFORCommanderRequestsAnAlliance.ogg"};
		CeaseFireHasEnded[] = {"DEFAULT\warfare\CeaseFireHasEnded.ogg"};
		CeaseFireInEffect[] = {"DEFAULT\warfare\CeaseFireInEffect.ogg"};
		CommandPost[] = {"DEFAULT\warfare\CommandPost.ogg"};
		NeutralCommanderRequestsACeaseFire[] = {"DEFAULT\warfare\NeutralCommanderRequestsACeaseFire.ogg"};
		NeutralCommanderRequestsAnAlliance[] = {"DEFAULT\warfare\NeutralCommanderRequestsAnAlliance.ogg"};
		OPFORCommanderRequestsACeaseFire[] = {"DEFAULT\warfare\OPFORCommanderRequestsACeaseFire.ogg"};
		OPFORCommanderRequestsAnAlliance[] = {"DEFAULT\warfare\OPFORCommanderRequestsAnAlliance.ogg"};
		StrongpointCapturedNear[] = {"DEFAULT\warfare\StrongpointCapturedNear.ogg"};
		StrongpointLostAt[] = {"DEFAULT\warfare\StrongpointLostAt.ogg"};
		aborting[] = {"DEFAULT\SOM\WeHaveToAbortOver.ogg"};
		aborttheop[] = {"DEFAULT\SOM\AbortTheOpOver.ogg"};
		attack[] = {"DEFAULT\AttackE.ogg"};
		awaitingorders[] = {"DEFAULT\hc\HC_StandingByForOrders.ogg"};
		atthistime[] = {"DEFAULT\Core\JustNow.ogg"};
		binoculars[] = {"DEFAULT\weapons\Binocular.ogg"};
		cannon[] = {"DEFAULT\weapons\cannonHigh.ogg"};
		cannotfirenowe[] = {"DEFAULT\CannotFire.ogg"};
		cantshoote[] = {"DEFAULT\CantShoot.ogg"};
		ceasefire[] = {"DEFAULT\CeaseFireE.ogg"};
		ceasefiregoddamnite[] = {"DEFAULT\CeaseFireE.ogg"};
		civilian[] = {"DEFAULT\Core\Civilian.ogg"};
		clearedtoengage[] = {"DEFAULT\Clear.ogg"};
		corpsmane[] = {"DEFAULT\MedicE.ogg"};
		healyourselfe[] = {"DEFAULT\HealYourself.ogg"};
		contact[] = {"DEFAULT\ContactE.ogg"};
		damne[] = {"DEFAULT\Core\DamnYouE.ogg"};
		damnitweloste[] = {"DEFAULT\WeLost.ogg"};
		dangerouslyclose[] = {"DEFAULT\dangerCloseTo.ogg"};
		deactivatethatcharge[] = {"DEFAULT\DeactivateCharge.ogg"};
		detonatechargenowe[] = {"DEFAULT\DetonateCharge.ogg"};
		disablingmanualfire[] = {"DEFAULT\CancelManualFire.ogg"};
		donotfiree[] = {"DEFAULT\HoldFire.ogg"};
		downandquiet[] = {"DEFAULT\Stealth.ogg"};
		enemiese[] = {"DEFAULT\combat\CS_EnemyE.ogg"};
		firee[] = {"DEFAULT\Fire.ogg"};
		followmylead[] = {"DEFAULT\Follow.ogg"};
		formationcolumn[] = {"DEFAULT\formation\FormColumn.ogg"};
		formationdiamond[] = {"DEFAULT\formation\FormDiamond.ogg"};
		formationechelonleft[] = {"DEFAULT\formation\FormEcholonLeft.ogg"};
		formationechelonright[] = {"DEFAULT\formation\FormEcholonRight.ogg"};
		formationfile[] = {"DEFAULT\formation\FormFile.ogg"};
		formationline[] = {"DEFAULT\formation\FormLine.ogg"};
		formationstaggeredcolumn[] = {"DEFAULT\formation\FormStaggeredColumn.ogg"};
		formationvee[] = {"DEFAULT\formation\FormVee.ogg"};
		formationwedge[] = {"DEFAULT\formation\FormWedge.ogg"};
		foxtrot[] = {"DEFAULT\alphabet\Fotxtrot.ogg"};
		from[] = {"DEFAULT\Core\From.ogg"};
		fuckthatsclosee[] = {"DEFAULT\damnClose.ogg"};
		gaginge[] = {"DEFAULT\EngagingE.ogg"};
		getmeacorpsmannowe[] = {"DEFAULT\MedicE.ogg"};
		goddamne[] = {"DEFAULT\FuckE.ogg"};
		halte[] = {"DEFAULT\Halt.ogg"};
		hc_assaultingenemyposition[] = {"DEFAULT\hc\HC_EngagingE.ogg"};
		hc_pinneddowne[] = {"DEFAULT\HesDownE.ogg"};
		hc_takingheavyfiree[] = {"DEFAULT\TakingFireE.ogg"};
		healat[] = {"DEFAULT\NeedHelpE.ogg"};
		healsomeone[] = {"DEFAULT\NeedHelpE.ogg"};
		holdfiree[] = {"DEFAULT\HoldFire.ogg"};
		icantgetthere[] = {"DEFAULT\CantGetThereE.ogg"};
		imbleedinge[] = {"DEFAULT\WoundedE.ogg"};
		imoutoffuele[] = {"DEFAULT\OutOfFuelE.ogg"};
		imrunningoutoffuel[] = {"DEFAULT\OutOfFuelE.ogg"};
		imtakingcommand[] = {"DEFAULT\TakingCommand.ogg"};
		mandowne[] = {"DEFAULT\HesDownE.ogg"};
		nomoretarget[] = {"DEFAULT\NoTarget.ogg"};
		east2[] = {"DEFAULT\direction\East.ogg"};
		north2[] = {"DEFAULT\direction\North.ogg"};
		northwest2[] = {"DEFAULT\direction\Northwest.ogg"};
		northeast2[] = {"DEFAULT\direction\Northeast.ogg"};
		south2[] = {"DEFAULT\direction\South.ogg"};
		west2[] = {"DEFAULT\direction\West.ogg"};
		southeast2[] = {"DEFAULT\direction\Southeast.ogg"};
		southwest2[] = {"DEFAULT\direction\Southwest.ogg"};
		nosupportavailableatthistime[] = {"DEFAULT\SOM\SupportIsNotAvailableOut.ogg"};
		nowaywecandivertnow[] = {"DEFAULT\SOM\WeCannotDivertAtThisTimeOut.ogg"};
		obj_ammocrates[] = {"DEFAULT\objects\ammocrate.ogg"};
		obj_buildings[] = {"DEFAULT\objects\building.ogg"};
		obj_bunkers[] = {"DEFAULT\objects\bunker.ogg"};
		obj_bushes[] = {"DEFAULT\objects\bush.ogg"};
		obj_churches[] = {"DEFAULT\objects\church.ogg"};
		obj_crosses[] = {"DEFAULT\objects\cross.ogg"};
		obj_fences[] = {"DEFAULT\objects\fence.ogg"};
		obj_flags[] = {"DEFAULT\objects\flag.ogg"};
		obj_houses[] = {"DEFAULT\objects\house.ogg"};
		obj_objects[] = {"DEFAULT\objects\object.ogg"};
		obj_rocks[] = {"DEFAULT\objects\rock.ogg"};
		obj_structures[] = {"DEFAULT\objects\structure.ogg"};
		obj_targets[] = {"DEFAULT\objects\target.ogg"};
		obj_tents[] = {"DEFAULT\objects\tent.ogg"};
		obj_trees[] = {"DEFAULT\objects\tree.ogg"};
		obj_walls[] = {"DEFAULT\objects\wall.ogg"};
		out1[] = {"DEFAULT\SOM\Out.ogg"};
		over1[] = {"DEFAULT\Over.ogg"};
		over2[] = {"DEFAULT\Over.ogg"};
		ten2[] = {"DEFAULT\numbers\Ten.ogg"};
		eleven2[] = {"DEFAULT\numbers\Eleven.ogg"};
		twelve2[] = {"DEFAULT\numbers\Twelve.ogg"};
		readyfororders[] = {"DEFAULT\Ready.ogg"};
		runningoutofammoe[] = {"DEFAULT\RunningOutOfAmmo.ogg"};
		switchingtomanualfire[] = {"DEFAULT\ManualFire.ogg"};
		targetdestroyede[] = {"DEFAULT\TargetEliminated.ogg"};
		unabletocompletetheobjective[] = {"DEFAULT\SOM\UnableToCompleteTheObjectiveAbortingOver.ogg"};
		unabletofiree[] = {"DEFAULT\CannotFire.ogg"};
		underheavyfiree[] = {"DEFAULT\UnderFireE.ogg"};
		veh_armedcar[] = {"DEFAULT\vehicles\technical.ogg"};
		veh_armedcars[] = {"DEFAULT\vehicles\technicals.ogg"};
		veh_civilian[] = {"DEFAULT\Core\Civilian.ogg"};
		veh_civilians[] = {"DEFAULT\vehicles\men.ogg"};
		veh_staticaaweapon[] = {"DEFAULT\vehicles\staticAALauncher.ogg"};
		veh_staticaaweapons[] = {"DEFAULT\vehicles\staticAALaunchers.ogg"};
		veh_staticatweapon[] = {"DEFAULT\vehicles\staticATLauncher.ogg"};
		veh_staticatweapons[] = {"DEFAULT\vehicles\staticATLaunchers.ogg"};
		veh_transporthelicopter[] = {"DEFAULT\vehicles\helicopter.ogg"};
		veh_transporthelicopters[] = {"DEFAULT\vehicles\helicopters.ogg"};
		veh_wreck[] = {"DEFAULT\objects\wreck.ogg"};
		veh_wrecks[] = {"DEFAULT\objects\wreck.ogg"};
		watchthatposition[] = {"DEFAULT\WatchThat.ogg"};
		weaponshote[] = {"DEFAULT\WeaponsHot.ogg"};
		wecannotcompletethismission[] = {"DEFAULT\SOM\UnableToCompleteTheObjectiveAbortingOver.ogg"};
		wecannotdivert[] = {"DEFAULT\SOM\WeCannotDivertAtThisTimeOut.ogg"};
		wehavetoabort[] = {"DEFAULT\SOM\WeHaveToAbortOver.ogg"};
		welldone[] = {"DEFAULT\SOM\JobWellDone.ogg"};
		wereheavilydamagede[] = {"DEFAULT\CriticalDamageE.ogg"};
		wereonit[] = {"DEFAULT\warfare\CanDoWereOnIt.ogg"};
		yourefreetoengage[] = {"DEFAULT\FreeToEngage.ogg"};
		heat[] = {"DEFAULT\weapons\cannonLow.ogg"};
		ImAtThisPosition[] = {"DEFAULT\weapons\cannonLow.ogg"};
		class StealthWords
		{
			VezmiSiTenBatoh[] = {"DEFAULT\VezmiSiTenBatoh.ogg"};
			OdlozBatoh[] = {"DEFAULT\OdlozBatoh.ogg"};
			OtevriBatoh[] = {"DEFAULT\OtevriBatoh.ogg"};
			LeftOrder[] = {"DEFAULT\LeftOrder.ogg"};
			RightOrder[] = {"DEFAULT\RightOrder.ogg"};
			GetSupport[] = {"DEFAULT\GetSupportAt.ogg"};
			GetHelp[] = {"DEFAULT\GetSupportAt.ogg"};
			GetHelpAt[] = {"DEFAULT\GetSupportAt.ogg"};
			MoveToPosition[] = {"DEFAULT\MoveToThat.ogg"};
			veh_enemy[] = {"DEFAULT\side\Enemy.ogg"};
			Direction[] = {"DEFAULT\ToOur.ogg"};
			FromLocation[] = {"DEFAULT\Core\From.ogg"};
			Grid2[] = {"DEFAULT\Position.ogg"};
			Advance[] = {"STEALTH\Advance.ogg"};
			And[] = {"STEALTH\And.ogg"};
			Are[] = {"STEALTH\Are.ogg"};
			AreaClear[] = {"DEFAULT\AreaClear.ogg"};
			At[] = {"DEFAULT\At.ogg"};
			AtEase[] = {"STEALTH\AtEase.ogg"};
			AttackE[] = {"STEALTH\AttackE.ogg"};
			AttackingE[] = {"DEFAULT\AttackingE.ogg"};
			AttackThat[] = {"STEALTH\AttackThat.ogg"};
			BailOutE[] = {"DEFAULT\BailOutE.ogg"};
			BeAdvised[] = {"STEALTH\BeAdvised.ogg"};
			BingoFuel[] = {"DEFAULT\BingoFuel.ogg"};
			BlueOnBlueE[] = {"DEFAULT\BlueOnBlueE.ogg"};
			BoardThat[] = {"STEALTH\BoardThat.ogg"};
			CancelManualFire[] = {"DEFAULT\CancelManualFire.ogg"};
			CancelTarget[] = {"DEFAULT\CancelTarget.ogg"};
			CannotFire[] = {"STEALTH\CannotFire.ogg"};
			CantGetThereE[] = {"STEALTH\CantGetThereE.ogg"};
			CantMakeItThere[] = {"DEFAULT\CantMakeItThere.ogg"};
			CantShoot[] = {"DEFAULT\CantShoot.ogg"};
			CeaseFireE[] = {"DEFAULT\CeaseFireE.ogg"};
			Clear[] = {"STEALTH\Clear.ogg"};
			CloseThatDoor[] = {"STEALTH\CloseThatDoor.ogg"};
			Commander[] = {"STEALTH\Commander.ogg"};
			ContactE[] = {"STEALTH\ContactE.ogg"};
			Copy[] = {"STEALTH\Copy.ogg"};
			CopyMyStance[] = {"STEALTH\CopyMyStance.ogg"};
			CriticalDamageE[] = {"DEFAULT\CriticalDamageE.ogg"};
			DangerE[] = {"STEALTH\DangerE.ogg"};
			DeactivateCharge[] = {"STEALTH\DeactivateCharge.ogg"};
			DetonateCharge[] = {"STEALTH\DetonateCharge.ogg"};
			DisarmThatMine[] = {"STEALTH\DisarmThatMine.ogg"};
			Disembark[] = {"DEFAULT\Disembark.ogg"};
			Disengage[] = {"STEALTH\Disengage.ogg"};
			Dismount[] = {"STEALTH\Dismount.ogg"};
			DoYouReadQ[] = {"DEFAULT\DoYouReadQ.ogg"};
			Driver[] = {"STEALTH\Driver.ogg"};
			DropThat[] = {"STEALTH\DropThat.ogg"};
			EjectE[] = {"STEALTH\EjectE.ogg"};
			EnemyFireE[] = {"DEFAULT\EnemyFireE.ogg"};
			EngageAtWill[] = {"STEALTH\EngageAtWill.ogg"};
			EngageE[] = {"STEALTH\EngageE.ogg"};
			EngageThat[] = {"STEALTH\EngageThat.ogg"};
			EngagingE[] = {"STEALTH\EngagingE.ogg"};
			EngagingTargetE[] = {"DEFAULT\EngagingTargetE.ogg"};
			EyesOnTarget[] = {"STEALTH\EyesOnTarget.ogg"};
			FallBackE[] = {"STEALTH\FallBackE.ogg"};
			Fast[] = {"DEFAULT\Fast.ogg"};
			Fire[] = {"STEALTH\Fire.ogg"};
			FireAtThat[] = {"STEALTH\FireAtThat.ogg"};
			FireAtWill[] = {"STEALTH\FireAtWill.ogg"};
			FireOnMyLead[] = {"DEFAULT\FireOnMyLead.ogg"};
			FlankLeft[] = {"STEALTH\FlankLeft.ogg"};
			FlankRight[] = {"STEALTH\FlankRight.ogg"};
			Follow[] = {"STEALTH\Follow.ogg"};
			FormColumn[] = {"STEALTH\formation\FormColumn.ogg"};
			FormDiamond[] = {"STEALTH\formation\FormDiamond.ogg"};
			FormEcholonLeft[] = {"STEALTH\formation\FormEcholonLeft.ogg"};
			FormEcholonRight[] = {"STEALTH\formation\FormEcholonRight.ogg"};
			FormFile[] = {"STEALTH\formation\FormFile.ogg"};
			FormLine[] = {"STEALTH\formation\FormLine.ogg"};
			FormStaggeredColumn[] = {"STEALTH\formation\FormStaggeredColumn.ogg"};
			FormVee[] = {"STEALTH\formation\FormVee.ogg"};
			FormWedge[] = {"STEALTH\formation\FormWedge.ogg"};
			FormOnMeE[] = {"DEFAULT\FormOnMeE.ogg"};
			Forward[] = {"DEFAULT\Forward.ogg"};
			FreeToEngage[] = {"DEFAULT\FreeToEngage.ogg"};
			GetBackE[] = {"STEALTH\GetBackE.ogg"};
			GetDownE[] = {"STEALTH\GetDownE.ogg"};
			GetInThat[] = {"STEALTH\GetInThat.ogg"};
			GetSupportAt[] = {"STEALTH\GetSupportAt.ogg"};
			GiveEmHellE[] = {"DEFAULT\GiveEmHellE.ogg"};
			GoGoGoE[] = {"DEFAULT\GoGoGoE.ogg"};
			GoProne[] = {"STEALTH\GoProne.ogg"};
			Gunner[] = {"STEALTH\Gunner.ogg"};
			Halt[] = {"STEALTH\Halt.ogg"};
			HealThat[] = {"STEALTH\HealThat.ogg"};
			HealYourself[] = {"STEALTH\HealYourself.ogg"};
			HesDownE[] = {"STEALTH\HesDownE.ogg"};
			HitTheDirt[] = {"STEALTH\HitTheDirt.ogg"};
			HoldFire[] = {"STEALTH\HoldFire.ogg"};
			HostileDownE[] = {"DEFAULT\HostileDownE.ogg"};
			HostilesE[] = {"STEALTH\HostilesE.ogg"};
			CheckYourFireE[] = {"STEALTH\CheckYourFireE.ogg"};
			ImAtGrid[] = {"STEALTH\ImAtGrid.ogg"};
			Grid[] = {"STEALTH\Grid.ogg"};
			ImOnHim[] = {"DEFAULT\ImOnHim.ogg"};
			ImTheNewActual[] = {"DEFAULT\ImTheNewActual.ogg"};
			Is[] = {"STEALTH\Is.ogg"};
			IsDownE[] = {"STEALTH\IsDownE.ogg"};
			IsDead[] = {"DEFAULT\IsDead.ogg"};
			IsHistory[] = {"DEFAULT\IsHistory.ogg"};
			Injured[] = {"STEALTH\Injured.ogg"};
			IveGotHimE[] = {"STEALTH\IveGotHimE.ogg"};
			Left[] = {"STEALTH\Left.ogg"};
			LightEmUpE[] = {"DEFAULT\LightEmUpE.ogg"};
			LightThatFire[] = {"STEALTH\LightThatFire.ogg"};
			MaintainFormation[] = {"DEFAULT\MaintainFormation.ogg"};
			ManualFire[] = {"DEFAULT\ManualFire.ogg"};
			MedicE[] = {"STEALTH\MedicE.ogg"};
			NeedHelpE[] = {"STEALTH\NeedHelpE.ogg"};
			Negative[] = {"STEALTH\Negative.ogg"};
			NoCanDo[] = {"STEALTH\NoCanDo.ogg"};
			NoMoreAmmoE[] = {"DEFAULT\NoMoreAmmoE.ogg"};
			NoTarget[] = {"STEALTH\NoTarget.ogg"};
			ObserveThat[] = {"DEFAULT\ObserveThat.ogg"};
			ObserveThatPosition[] = {"STEALTH\ObserveThatPosition.ogg"};
			OnTheWay[] = {"STEALTH\OnTheWay.ogg"};
			OpenThatDoor[] = {"STEALTH\OpenThatDoor.ogg"};
			OpenUpE[] = {"DEFAULT\OpenUpE.ogg"};
			OscarMike[] = {"STEALTH\OscarMike.ogg"};
			OutOfAmmoE[] = {"STEALTH\OutOfAmmoE.ogg"};
			OutOfFuelE[] = {"DEFAULT\OutOfFuelE.ogg"};
			Over[] = {"STEALTH\Over.ogg"};
			Pilot[] = {"STEALTH\Pilot.ogg"};
			PutOutThatFire[] = {"STEALTH\PutOutThatFire.ogg"};
			PlaceAMine[] = {"DEFAULT\PlaceAMine.ogg"};
			Ready[] = {"STEALTH\Ready.ogg"};
			ReadyToFire[] = {"STEALTH\ReadyToFire.ogg"};
			RegroupE[] = {"DEFAULT\RegroupE.ogg"};
			RepeatLast[] = {"STEALTH\RepeatLast.ogg"};
			ReportPositionE[] = {"DEFAULT\ReportPositionE.ogg"};
			Position[] = {"STEALTH\Position.ogg"};
			ReportStatus[] = {"STEALTH\ReportStatus.ogg"};
			RequestingSupportTo[] = {"STEALTH\RequestingSupportTo.ogg"};
			ReturnTheFlag[] = {"DEFAULT\ReturnTheFlag.ogg"};
			ReturnToFormationE[] = {"DEFAULT\ReturnToFormationE.ogg"};
			Reverse[] = {"DEFAULT\Reverse.ogg"};
			Right[] = {"DEFAULT\Right.ogg"};
			Roger[] = {"STEALTH\Roger.ogg"};
			RunningOutOfAmmo[] = {"STEALTH\RunningOutOfAmmo.ogg"};
			RunningOutOfFuel[] = {"DEFAULT\RunningOutOfFuel.ogg"};
			SayAgain[] = {"STEALTH\SayAgain.ogg"};
			ScanHorizon[] = {"STEALTH\ScanHorizon.ogg"};
			ScratchOneE[] = {"DEFAULT\ScratchOneE.ogg"};
			SetACharge[] = {"STEALTH\SetACharge.ogg"};
			SetTheTimer[] = {"STEALTH\SetTheTimer.ogg"};
			Slow[] = {"DEFAULT\Slow.ogg"};
			SolidCopy[] = {"STEALTH\SolidCopy.ogg"};
			SomebodyHelpMeE[] = {"DEFAULT\SomebodyHelpMeE.ogg"};
			StandingBy[] = {"STEALTH\StandingBy.ogg"};
			StandUp[] = {"STEALTH\StandUp.ogg"};
			StatusRedE[] = {"STEALTH\StatusRedE.ogg"};
			StayAlert[] = {"STEALTH\StayAlert.ogg"};
			StayBack[] = {"STEALTH\StayBack.ogg"};
			StayCrouched[] = {"STEALTH\StayCrouched.ogg"};
			StayInFormationE[] = {"DEFAULT\StayInFormationE.ogg"};
			Stealth[] = {"STEALTH\Stealth.ogg"};
			StopE[] = {"STEALTH\StopE.ogg"};
			Supporting[] = {"STEALTH\Supporting.ogg"};
			SuppressiveFireE[] = {"DEFAULT\SuppressiveFireE.ogg"};
			TakeCoverE[] = {"STEALTH\TakeCoverE.ogg"};
			TakeThat[] = {"STEALTH\TakeThat.ogg"};
			TakeThatMine[] = {"STEALTH\TakeThatMine.ogg"};
			TakeTheFlag[] = {"STEALTH\TakeTheFlag.ogg"};
			TakingCommand[] = {"STEALTH\TakingCommand.ogg"};
			TakingFireE[] = {"STEALTH\TakingFireE.ogg"};
			TargetAcquired[] = {"DEFAULT\TargetAcquired.ogg"};
			TargetEliminated[] = {"STEALTH\TargetEliminated.ogg"};
			TargetInSight[] = {"STEALTH\TargetInSight.ogg"};
			TargetThat[] = {"STEALTH\TargetThat.ogg"};
			UnderFireE[] = {"STEALTH\UnderFireE.ogg"};
			Understood[] = {"STEALTH\Understood.ogg"};
			Waiting[] = {"STEALTH\Waiting.ogg"};
			WaitForMe[] = {"DEFAULT\WaitForMe.ogg"};
			Watch[] = {"STEALTH\Watch.ogg"};
			WatchThat[] = {"STEALTH\WatchThat.ogg"};
			WeaponsFree[] = {"STEALTH\WeaponsFree.ogg"};
			WeaponsHot[] = {"DEFAULT\WeaponsHot.ogg"};
			WeLost[] = {"STEALTH\WeLost.ogg"};
			WhereAreYouQ[] = {"STEALTH\WhereAreYouQ.ogg"};
			WoundedE[] = {"STEALTH\WoundedE.ogg"};
			AssembleThat[] = {"STEALTH\AssembleThat.ogg"};
			DisassembleThat[] = {"STEALTH\DisassembleThat.ogg"};
			FlashlightsOn[] = {"STEALTH\FlashlightsOn.ogg"};
			FlashlightsOff[] = {"STEALTH\FlashlightsOff.ogg"};
			LasersOn[] = {"STEALTH\LasersOn.ogg"};
			LasersOff[] = {"STEALTH\LasersOff.ogg"};
			FuckE[] = {"STEALTH\FuckE.ogg"};
			Enemy[] = {"STEALTH\side\Enemy.ogg"};
			Unknown[] = {};
			Friendly[] = {"STEALTH\side\Friendly.ogg"};
			Neutral[] = {"STEALTH\side\Neutral.ogg"};
			Of[] = {"STEALTH\Of.ogg"};
			OfYou[] = {"STEALTH\OfYou.ogg"};
			OfMe[] = {"STEALTH\OfMe.ogg"};
			Move[] = {"STEALTH\Move.ogg"};
			MoveTo[] = {"STEALTH\MoveTo.ogg"};
			MoveToThat[] = {"STEALTH\MoveToThat.ogg"};
			GoTo[] = {"STEALTH\GoTo.ogg"};
			GoToThat[] = {"STEALTH\GoToThat.ogg"};
			That[] = {"STEALTH\That.ogg"};
			ToOur[] = {"STEALTH\ToOur.ogg"};
			ToThe[] = {"STEALTH\ToThe.ogg"};
			FromMe[] = {"STEALTH\FromMe.ogg"};
			OfYourPosition[] = {"STEALTH\OfYourPosition.ogg"};
			In[] = {"STEALTH\In.ogg"};
			Us[] = {"STEALTH\Us.ogg"};
			inFrontOf[] = {"STEALTH\inFrontOf.ogg"};
			rightOf[] = {"STEALTH\rightOf.ogg"};
			behind[] = {"STEALTH\behind.ogg"};
			leftOf[] = {"STEALTH\leftOf.ogg"};
			rightFlank[] = {"STEALTH\rightFlank.ogg"};
			leftFlank[] = {"STEALTH\leftFlank.ogg"};
			dangerCloseTo[] = {"STEALTH\dangerCloseTo.ogg"};
			closeTo[] = {"STEALTH\closeTo.ogg"};
			notFarFrom[] = {"STEALTH\notFarFrom.ogg"};
			farFrom[] = {"STEALTH\farFrom.ogg"};
			Just[] = {"STEALTH\Just.ogg"};
			Way[] = {"STEALTH\Way.ogg"};
			damnClose[] = {"STEALTH\damnClose.ogg"};
			All[] = {"STEALTH\numbers\All.ogg"};
			Zero[] = {"STEALTH\numbers\Zero.ogg"};
			One[] = {"STEALTH\numbers\One.ogg"};
			Two[] = {"STEALTH\numbers\Two.ogg"};
			Three[] = {"STEALTH\numbers\Three.ogg"};
			Four[] = {"STEALTH\numbers\Four.ogg"};
			Five[] = {"STEALTH\numbers\Five.ogg"};
			Six[] = {"STEALTH\numbers\Six.ogg"};
			Seven[] = {"STEALTH\numbers\Seven.ogg"};
			Eight[] = {"STEALTH\numbers\Eight.ogg"};
			nine[] = {"STEALTH\numbers\nine.ogg"};
			Ten[] = {"STEALTH\numbers\Ten.ogg"};
			Eleven[] = {"STEALTH\numbers\Eleven.ogg"};
			Twelve[] = {"STEALTH\numbers\Twelve.ogg"};
			Thirteen[] = {"STEALTH\numbers\Thirteen.ogg"};
			Fourteen[] = {"STEALTH\numbers\Fourteen.ogg"};
			Fifteen[] = {"STEALTH\numbers\Fifteen.ogg"};
			Sixteen[] = {"STEALTH\numbers\Sixteen.ogg"};
			Seventeen[] = {"STEALTH\numbers\Seventeen.ogg"};
			Eighteen[] = {"STEALTH\numbers\Eighteen.ogg"};
			Nineteen[] = {"STEALTH\numbers\Nineteen.ogg"};
			Twenty[] = {"STEALTH\numbers\Twenty.ogg"};
			Thirty[] = {"STEALTH\numbers\Thirty.ogg"};
			Forty[] = {"STEALTH\numbers\Forty.ogg"};
			Fifty[] = {"STEALTH\numbers\Fifty.ogg"};
			Sixty[] = {"STEALTH\numbers\Sixty.ogg"};
			Seventy[] = {"STEALTH\numbers\Seventy.ogg"};
			Eighty[] = {"STEALTH\numbers\Eighty.ogg"};
			Ninety[] = {"STEALTH\numbers\Ninety.ogg"};
			Hundred[] = {"STEALTH\numbers\Hundred.ogg"};
			zero2[] = {"STEALTH\mapcoords\zero2.ogg"};
			one2[] = {"STEALTH\mapcoords\one2.ogg"};
			two2[] = {"STEALTH\mapcoords\two2.ogg"};
			three2[] = {"STEALTH\mapcoords\three2.ogg"};
			four2[] = {"STEALTH\mapcoords\four2.ogg"};
			five2[] = {"STEALTH\mapcoords\five2.ogg"};
			six2[] = {"STEALTH\mapcoords\six2.ogg"};
			seven2[] = {"STEALTH\mapcoords\seven2.ogg"};
			eight2[] = {"STEALTH\mapcoords\eight2.ogg"};
			nine2[] = {"STEALTH\mapcoords\nine2.ogg"};
			Alpha[] = {"STEALTH\alphabet\Alpha.ogg"};
			Bravo[] = {"STEALTH\alphabet\Bravo.ogg"};
			Charlie[] = {"STEALTH\alphabet\Charlie.ogg"};
			Delta[] = {"STEALTH\alphabet\Delta.ogg"};
			Echo[] = {"STEALTH\alphabet\Echo.ogg"};
			Fotxtrot[] = {"STEALTH\alphabet\Fotxtrot.ogg"};
			Golf[] = {"STEALTH\alphabet\Golf.ogg"};
			Hotel[] = {"STEALTH\alphabet\Hotel.ogg"};
			India[] = {"STEALTH\alphabet\India.ogg"};
			Juliet[] = {"STEALTH\alphabet\Juliet.ogg"};
			Kilo[] = {"STEALTH\alphabet\Kilo.ogg"};
			Lima[] = {"STEALTH\alphabet\Lima.ogg"};
			Mike[] = {"STEALTH\alphabet\Mike.ogg"};
			November[] = {"STEALTH\alphabet\November.ogg"};
			Oscar[] = {"STEALTH\alphabet\Oscar.ogg"};
			Papa[] = {"STEALTH\alphabet\Papa.ogg"};
			Quebec[] = {"STEALTH\alphabet\Quebec.ogg"};
			Romeo[] = {"STEALTH\alphabet\Romeo.ogg"};
			Sierra[] = {"STEALTH\alphabet\Sierra.ogg"};
			Tango[] = {"STEALTH\alphabet\Tango.ogg"};
			Uniform[] = {"STEALTH\alphabet\Uniform.ogg"};
			Victor[] = {"STEALTH\alphabet\Victor.ogg"};
			Whiskey[] = {"STEALTH\alphabet\Whiskey.ogg"};
			Xray[] = {"STEALTH\alphabet\Xray.ogg"};
			Yankee[] = {"STEALTH\alphabet\Yankee.ogg"};
			Zulu[] = {"STEALTH\alphabet\Zulu.ogg"};
			Angel[] = {"DEFAULT\alphabet\Angel.ogg"};
			Bride[] = {"DEFAULT\alphabet\Bride.ogg"};
			Chocolate[] = {"DEFAULT\alphabet\Chocolate.ogg"};
			Dad[] = {"DEFAULT\alphabet\Dad.ogg"};
			HQ[] = {"DEFAULT\team\HQ.ogg"};
			Frostbite[] = {"DEFAULT\team\Frostbite.ogg"};
			Base[] = {"DEFAULT\team\Base.ogg"};
			Command[] = {"DEFAULT\team\Command.ogg"};
			Battlemage[] = {"DEFAULT\team\Battlemage.ogg"};
			Manhattan[] = {"DEFAULT\team\Manhattan.ogg"};
			Firefly[] = {"DEFAULT\team\Firefly.ogg"};
			Razor[] = {"DEFAULT\team\Razor.ogg"};
			Swordsman[] = {"DEFAULT\team\Swordsman.ogg"};
			Sabre[] = {"DEFAULT\team\Sabre.ogg"};
			StarForce[] = {"DEFAULT\team\StarForce.ogg"};
			Super[] = {"DEFAULT\team\Super.ogg"};
			Hammer[] = {"DEFAULT\team\Hammer.ogg"};
			Reaper[] = {"DEFAULT\team\Reaper.ogg"};
			Fatman[] = {"DEFAULT\team\Fatman.ogg"};
			Fortune[] = {"DEFAULT\team\Fortune.ogg"};
			Anvil[] = {"DEFAULT\team\Anvil.ogg"};
			Revolver[] = {"DEFAULT\team\Revolver.ogg"};
			Winchester[] = {"DEFAULT\team\Winchester.ogg"};
			Arizona[] = {"DEFAULT\team\Arizona.ogg"};
			Warmonger[] = {"DEFAULT\team\Warmonger.ogg"};
			Citizen[] = {"DEFAULT\team\Citizen.ogg"};
			Utah[] = {"DEFAULT\team\Utah.ogg"};
			Demon[] = {"DEFAULT\team\Demon.ogg"};
			Bandit[] = {"DEFAULT\team\Bandit.ogg"};
			Mohican[] = {"DEFAULT\team\Mohican.ogg"};
			Dustoff[] = {"DEFAULT\team\Dustoff.ogg"};
			whiteTeam[] = {"STEALTH\team\whiteTeam.ogg"};
			redTeam[] = {"STEALTH\team\redTeam.ogg"};
			greenTeam[] = {"STEALTH\team\greenTeam.ogg"};
			blueTeam[] = {"STEALTH\team\blueTeam.ogg"};
			yellowTeam[] = {"STEALTH\team\yellowTeam.ogg"};
			allGroup[] = {"STEALTH\team\allGroup.ogg"};
			at1[] = {"STEALTH\clockfacing\at1.ogg"};
			at2[] = {"STEALTH\clockfacing\at2.ogg"};
			at3[] = {"STEALTH\clockfacing\at3.ogg"};
			at4[] = {"STEALTH\clockfacing\at4.ogg"};
			at5[] = {"STEALTH\clockfacing\at5.ogg"};
			at6[] = {"STEALTH\clockfacing\at6.ogg"};
			at7[] = {"STEALTH\clockfacing\at7.ogg"};
			at8[] = {"STEALTH\clockfacing\at8.ogg"};
			at9[] = {"STEALTH\clockfacing\at9.ogg"};
			at10[] = {"STEALTH\clockfacing\at10.ogg"};
			at11[] = {"STEALTH\clockfacing\at11.ogg"};
			at12[] = {"STEALTH\clockfacing\at12.ogg"};
			dist50[] = {"STEALTH\distance\dist50.ogg"};
			dist100[] = {"STEALTH\distance\dist100.ogg"};
			dist200[] = {"STEALTH\distance\dist200.ogg"};
			dist500[] = {"STEALTH\distance\dist500.ogg"};
			dist1000[] = {"STEALTH\distance\dist1000.ogg"};
			dist2000[] = {"STEALTH\distance\dist2000.ogg"};
			distFar[] = {"STEALTH\distance\distFar.ogg"};
			Meters[] = {"STEALTH\distance\Meters.ogg"};
			North[] = {"STEALTH\direction\North.ogg"};
			South[] = {"STEALTH\direction\South.ogg"};
			West[] = {"STEALTH\direction\West.ogg"};
			East[] = {"STEALTH\direction\East.ogg"};
			Northwest[] = {"STEALTH\direction\Northwest.ogg"};
			Southwest[] = {"STEALTH\direction\Southwest.ogg"};
			Northeast[] = {"STEALTH\direction\Northeast.ogg"};
			Southeast[] = {"STEALTH\direction\Southeast.ogg"};
			NorthOf[] = {"STEALTH\direction\NorthOf.ogg"};
			SouthOf[] = {"STEALTH\direction\SouthOf.ogg"};
			WestOf[] = {"STEALTH\direction\WestOf.ogg"};
			EastOf[] = {"STEALTH\direction\EastOf.ogg"};
			NorthEastOf[] = {"STEALTH\direction\NorthEastOf.ogg"};
			SouthEastOf[] = {"STEALTH\direction\SouthEastOf.ogg"};
			NorthWestOf[] = {"STEALTH\direction\NorthWestOf.ogg"};
			SouthWestOf[] = {"STEALTH\direction\SouthWestOf.ogg"};
			front[] = {"STEALTH\direction\front.ogg"};
			rear[] = {"STEALTH\direction\rear.ogg"};
			Close[] = {"STEALTH\direction\Close.ogg"};
			MediumRange[] = {"STEALTH\direction\MediumRange.ogg"};
			Far[] = {"STEALTH\direction\Far.ogg"};
			Bombs[] = {"STEALTH\weapons\Bombs.ogg"};
			cannonHigh[] = {"STEALTH\weapons\cannonHigh.ogg"};
			cannonLow[] = {"STEALTH\weapons\cannonLow.ogg"};
			Flares[] = {"STEALTH\weapons\Flares.ogg"};
			Missiles[] = {"STEALTH\weapons\Missiles.ogg"};
			Rockets[] = {"STEALTH\weapons\Rockets.ogg"};
			Smoke[] = {"STEALTH\weapons\Smoke.ogg"};
			AALauncher[] = {"STEALTH\weapons\AALauncher.ogg"};
			ATLauncher[] = {"STEALTH\weapons\ATLauncher.ogg"};
			Backpack[] = {"STEALTH\weapons\Backpack.ogg"};
			Binocular[] = {"STEALTH\weapons\Binocular.ogg"};
			Flare[] = {"STEALTH\weapons\Flare.ogg"};
			Grenade[] = {"STEALTH\weapons\Grenade.ogg"};
			GrenadeLauncher[] = {"STEALTH\weapons\GrenadeLauncher.ogg"};
			HandGrenade[] = {"STEALTH\weapons\HandGrenade.ogg"};
			LaserDesignator[] = {"STEALTH\weapons\LaserDesignator.ogg"};
			Magazine[] = {"STEALTH\weapons\Magazine.ogg"};
			MachineGun[] = {"STEALTH\weapons\MachineGun.ogg"};
			Mine[] = {"STEALTH\weapons\Mine.ogg"};
			NVG[] = {"STEALTH\weapons\NVG.ogg"};
			Rifle[] = {"STEALTH\weapons\Rifle.ogg"};
			Charge[] = {"STEALTH\weapons\Charge.ogg"};
			Handgun[] = {"STEALTH\weapons\Handgun.ogg"};
			SmokeShell[] = {"STEALTH\weapons\SmokeShell.ogg"};
			SniperRifle[] = {"STEALTH\weapons\SniperRifle.ogg"};
			veh_man[] = {"STEALTH\vehicles\man.ogg"};
			veh_woman[] = {"STEALTH\vehicles\woman.ogg"};
			veh_soldier[] = {"STEALTH\vehicles\soldier.ogg"};
			veh_launcherSoldier[] = {"STEALTH\vehicles\launcherSoldier.ogg"};
			veh_Sniper[] = {"STEALTH\vehicles\Sniper.ogg"};
			veh_Medic[] = {"STEALTH\vehicles\Medic.ogg"};
			veh_SpecialForce[] = {"STEALTH\vehicles\SpecialForce.ogg"};
			veh_MGunner[] = {"STEALTH\vehicles\MGunner.ogg"};
			veh_officer[] = {"STEALTH\vehicles\officer.ogg"};
			veh_crew[] = {"STEALTH\vehicles\crew.ogg"};
			veh_pilot[] = {"STEALTH\vehicles\pilot.ogg"};
			veh_vehicle[] = {"STEALTH\vehicles\vehicle.ogg"};
			veh_bike[] = {"STEALTH\vehicles\bike.ogg"};
			veh_motorcycle[] = {"STEALTH\vehicles\motorcycle.ogg"};
			veh_car[] = {"STEALTH\vehicles\car.ogg"};
			veh_technical[] = {"STEALTH\vehicles\technical.ogg"};
			veh_supportTruck[] = {"STEALTH\vehicles\supportTruck.ogg"};
			veh_truck[] = {"STEALTH\vehicles\truck.ogg"};
			veh_APC[] = {"STEALTH\vehicles\APC.ogg"};
			veh_WheeledAPC[] = {"STEALTH\vehicles\APC.ogg"};
			veh_TrackedAPC[] = {"STEALTH\vehicles\APC.ogg"};
			veh_unknown[] = {"STEALTH\side\unknown.ogg"};
			veh_tractor[] = {"STEALTH\vehicles\tractor.ogg"};
			veh_bus[] = {"STEALTH\vehicles\bus.ogg"};
			veh_tank[] = {"STEALTH\vehicles\tank.ogg"};
			veh_MobileHQ[] = {"STEALTH\vehicles\MobileHQ.ogg"};
			veh_ship[] = {"STEALTH\vehicles\ship.ogg"};
			veh_mobileArtillery[] = {"STEALTH\vehicles\mobileArtillery.ogg"};
			veh_StaticMGWeapon[] = {"STEALTH\vehicles\StaticMGWeapon.ogg"};
			veh_StaticMortar[] = {"STEALTH\vehicles\StaticMortar.ogg"};
			veh_searchLight[] = {"STEALTH\vehicles\searchLight.ogg"};
			veh_staticgrenadelauncher[] = {"STEALTH\vehicles\staticgrenadelauncher.ogg"};
			veh_staticCannon[] = {"STEALTH\vehicles\staticCannon.ogg"};
			veh_staticATLauncher[] = {"STEALTH\vehicles\staticATLauncher.ogg"};
			veh_staticAALauncher[] = {"STEALTH\vehicles\staticAALauncher.ogg"};
			veh_aircraft[] = {"STEALTH\vehicles\aircraft.ogg"};
			veh_parachute[] = {"STEALTH\vehicles\parachute.ogg"};
			veh_airplane[] = {"STEALTH\vehicles\airplane.ogg"};
			veh_cargoAirplane[] = {"STEALTH\vehicles\cargoAirplane.ogg"};
			veh_attackAirplane[] = {"STEALTH\vehicles\attackAirplane.ogg"};
			veh_UAV[] = {"STEALTH\vehicles\UAV.ogg"};
			veh_helicopter[] = {"STEALTH\vehicles\helicopter.ogg"};
			veh_gunship[] = {"STEALTH\vehicles\gunship.ogg"};
			veh_animal[] = {"STEALTH\vehicles\animal.ogg"};
			veh_boat[] = {"STEALTH\vehicles\boat.ogg"};
			veh_men[] = {"STEALTH\vehicles\men.ogg"};
			veh_women[] = {"STEALTH\vehicles\women.ogg"};
			veh_soldiers[] = {"STEALTH\vehicles\soldiers.ogg"};
			veh_launcherSoldiers[] = {"STEALTH\vehicles\launcherSoldiers.ogg"};
			veh_Snipers[] = {"STEALTH\vehicles\Snipers.ogg"};
			veh_Medics[] = {"STEALTH\vehicles\Medics.ogg"};
			veh_SpecialForces[] = {"STEALTH\vehicles\SpecialForces.ogg"};
			veh_Mgunners[] = {"STEALTH\vehicles\Mgunners.ogg"};
			veh_officers[] = {"STEALTH\vehicles\officers.ogg"};
			veh_crews[] = {"STEALTH\vehicles\crews.ogg"};
			veh_pilots[] = {"STEALTH\vehicles\pilots.ogg"};
			veh_vehicles[] = {"STEALTH\vehicles\vehicles.ogg"};
			veh_bikes[] = {"STEALTH\vehicles\bikes.ogg"};
			veh_motorcycles[] = {"STEALTH\vehicles\motorcycles.ogg"};
			veh_cars[] = {"STEALTH\vehicles\cars.ogg"};
			veh_technicals[] = {"STEALTH\vehicles\technicals.ogg"};
			veh_supportTrucks[] = {"STEALTH\vehicles\supportTrucks.ogg"};
			veh_trucks[] = {"STEALTH\vehicles\trucks.ogg"};
			veh_APCs[] = {"STEALTH\vehicles\APCs.ogg"};
			veh_WheeledAPCs[] = {"STEALTH\vehicles\APCs.ogg"};
			veh_TrackedAPCs[] = {"STEALTH\vehicles\APC.ogg"};
			veh_unknowns[] = {"STEALTH\side\unknown.ogg"};
			veh_tractors[] = {"STEALTH\vehicles\tractors.ogg"};
			veh_buses[] = {"STEALTH\vehicles\buses.ogg"};
			veh_tanks[] = {"STEALTH\vehicles\tanks.ogg"};
			veh_MobileHQs[] = {"STEALTH\vehicles\MobileHQs.ogg"};
			veh_ships[] = {"STEALTH\vehicles\ships.ogg"};
			veh_mobileArtilleryUnits[] = {"STEALTH\vehicles\mobileArtilleryUnits.ogg"};
			veh_StaticMGWeapons[] = {"STEALTH\vehicles\StaticMGWeapons.ogg"};
			veh_StaticMortars[] = {"STEALTH\vehicles\StaticMortars.ogg"};
			veh_searchLights[] = {"STEALTH\vehicles\searchLights.ogg"};
			veh_staticgrenadelaunchers[] = {"STEALTH\vehicles\staticgrenadelaunchers.ogg"};
			veh_staticCannons[] = {"STEALTH\vehicles\staticCannons.ogg"};
			veh_staticATLaunchers[] = {"STEALTH\vehicles\staticATLaunchers.ogg"};
			veh_staticAALaunchers[] = {"STEALTH\vehicles\staticAALaunchers.ogg"};
			veh_aircrafts[] = {"STEALTH\vehicles\aircrafts.ogg"};
			veh_parachutes[] = {"STEALTH\vehicles\parachutes.ogg"};
			veh_airplanes[] = {"STEALTH\vehicles\airplanes.ogg"};
			veh_cargoAirplanes[] = {"STEALTH\vehicles\cargoAirplanes.ogg"};
			veh_attackAirplanes[] = {"STEALTH\vehicles\attackAirplanes.ogg"};
			veh_UAVs[] = {"STEALTH\vehicles\UAVs.ogg"};
			veh_helicopters[] = {"STEALTH\vehicles\helicopters.ogg"};
			veh_gunships[] = {"STEALTH\vehicles\gunships.ogg"};
			veh_animals[] = {"STEALTH\vehicles\animals.ogg"};
			veh_boats[] = {"STEALTH\vehicles\boats.ogg"};
			obj_ammocrate[] = {"STEALTH\objects\ammocrate.ogg"};
			obj_building[] = {"STEALTH\objects\building.ogg"};
			obj_bunker[] = {"STEALTH\objects\bunker.ogg"};
			obj_bush[] = {"STEALTH\objects\bush.ogg"};
			obj_cargoContainer[] = {"STEALTH\objects\cargoContainer.ogg"};
			obj_cross[] = {"STEALTH\objects\cross.ogg"};
			obj_fence[] = {"STEALTH\objects\fence.ogg"};
			obj_flag[] = {"STEALTH\objects\flag.ogg"};
			obj_house[] = {"STEALTH\objects\house.ogg"};
			obj_church[] = {"STEALTH\objects\church.ogg"};
			obj_LaserTarget[] = {"STEALTH\objects\LaserTarget.ogg"};
			obj_object[] = {"STEALTH\objects\object.ogg"};
			obj_rock[] = {"STEALTH\objects\rock.ogg"};
			obj_ruin[] = {"STEALTH\objects\ruin.ogg"};
			obj_structure[] = {"STEALTH\objects\structure.ogg"};
			obj_target[] = {"STEALTH\objects\target.ogg"};
			obj_tent[] = {"STEALTH\objects\tent.ogg"};
			obj_tower[] = {"STEALTH\objects\tower.ogg"};
			obj_tree[] = {"STEALTH\objects\tree.ogg"};
			obj_wall[] = {"STEALTH\objects\wall.ogg"};
			obj_wreck[] = {"STEALTH\objects\wreck.ogg"};
			Kamenyy[] = {"STEALTH\core\maploc\Kamenyy.ogg"};
			Strelka[] = {"STEALTH\core\maploc\Strelka.ogg"};
			Elektrozavodsk[] = {"STEALTH\core\maploc\Elektrozavodsk.ogg"};
			Gorka[] = {"STEALTH\core\maploc\Gorka.ogg"};
			Chernogorsk[] = {"STEALTH\core\maploc\Chernogorsk.ogg"};
			Krasnostav[] = {"STEALTH\core\maploc\Krasnostav.ogg"};
			Solnichniy[] = {"STEALTH\core\maploc\Solnichniy.ogg"};
			StarySobor[] = {"STEALTH\core\maploc\StarySobor.ogg"};
			Vybor[] = {"STEALTH\core\maploc\Vybor.ogg"};
			Zelenogorsk[] = {"STEALTH\core\maploc\Zelenogorsk.ogg"};
			Pusta[] = {"STEALTH\core\maploc\Pusta.ogg"};
			Vyshnoe[] = {"STEALTH\core\maploc\Vyshnoe.ogg"};
			Balota[] = {"STEALTH\core\maploc\Balota.ogg"};
			Bor[] = {"STEALTH\core\maploc\Bor.ogg"};
			Dolina[] = {"STEALTH\core\maploc\Dolina.ogg"};
			Drozhino[] = {"STEALTH\core\maploc\Drozhino.ogg"};
			Dubrovka[] = {"STEALTH\core\maploc\Dubrovka.ogg"};
			Grishino[] = {"STEALTH\core\maploc\Grishino.ogg"};
			Guglovo[] = {"STEALTH\core\maploc\Guglovo.ogg"};
			Gvozdno[] = {"STEALTH\core\maploc\Gvozdno.ogg"};
			Kabanino[] = {"STEALTH\core\maploc\Kabanino.ogg"};
			Kamenka[] = {"STEALTH\core\maploc\Kamenka.ogg"};
			Kamyshovo[] = {"STEALTH\core\maploc\Kamyshovo.ogg"};
			Khelm[] = {"STEALTH\core\maploc\Khelm.ogg"};
			Komarovo[] = {"STEALTH\core\maploc\Komarovo.ogg"};
			Kozlovka[] = {"STEALTH\core\maploc\Kozlovka.ogg"};
			Lopatino[] = {"STEALTH\core\maploc\Lopatino.ogg"};
			Mogilevka[] = {"STEALTH\core\maploc\Mogilevka.ogg"};
			Msta[] = {"STEALTH\core\maploc\Msta.ogg"};
			Myshkino[] = {"STEALTH\core\maploc\Myshkino.ogg"};
			Nadezhdino[] = {"STEALTH\core\maploc\Nadezhdino.ogg"};
			Nizhnoye[] = {"STEALTH\core\maploc\Nizhnoye.ogg"};
			NovySobor[] = {"STEALTH\core\maploc\NovySobor.ogg"};
			Olsha[] = {"STEALTH\core\maploc\Olsha.ogg"};
			Orlovets[] = {"STEALTH\core\maploc\Orlovets.ogg"};
			Pavlovo[] = {"STEALTH\core\maploc\Pavlovo.ogg"};
			Petrovka[] = {"STEALTH\core\maploc\Petrovka.ogg"};
			Pogorevka[] = {"STEALTH\core\maploc\Pogorevka.ogg"};
			Polana[] = {"STEALTH\core\maploc\Polana.ogg"};
			Prigorodki[] = {"STEALTH\core\maploc\Prigorodki.ogg"};
			Pulkovo[] = {"STEALTH\core\maploc\Pulkovo.ogg"};
			Pustoshka[] = {"STEALTH\core\maploc\Pustoshka.ogg"};
			Rogovo[] = {"STEALTH\core\maploc\Rogovo.ogg"};
			Shakhovka[] = {"STEALTH\core\maploc\Shakhovka.ogg"};
			Sosnovka[] = {"STEALTH\core\maploc\Sosnovka.ogg"};
			Staroye[] = {"STEALTH\core\maploc\Staroye.ogg"};
			Tulga[] = {"STEALTH\core\maploc\Tulga.ogg"};
			Town[] = {"STEALTH\core\maploc\Town.ogg"};
			Village[] = {"STEALTH\core\maploc\Village.ogg"};
			Airfield[] = {"STEALTH\core\maploc\Airfield.ogg"};
			Factory[] = {"STEALTH\core\maploc\Factory.ogg"};
			Crossroad[] = {"STEALTH\core\maploc\Crossroad.ogg"};
			Oilfield[] = {"STEALTH\core\maploc\Oilfield.ogg"};
			mineplace[] = {"STEALTH\core\maploc\mineplace.ogg"};
			Harbor[] = {"STEALTH\core\maploc\Harbor.ogg"};
			Zargabad[] = {"STEALTH\core\maploc\Zargabad.ogg"};
			Azizajt[] = {"STEALTH\core\maploc\Azizajt.ogg"};
			Nango[] = {"STEALTH\core\maploc\Nango.ogg"};
			Yarum[] = {"STEALTH\core\maploc\Yarum.ogg"};
			HazarBagh[] = {"STEALTH\core\maploc\HazarBagh.ogg"};
			Anar[] = {"STEALTH\core\maploc\Anar.ogg"};
			Kakaru[] = {"STEALTH\core\maploc\Kakaru.ogg"};
			Bastam[] = {"STEALTH\core\maploc\Bastam.ogg"};
			Falar[] = {"STEALTH\core\maploc\Falar.ogg"};
			FeeruzAbad[] = {"STEALTH\core\maploc\FeeruzAbad.ogg"};
			Garmarud[] = {"STEALTH\core\maploc\Garmarud.ogg"};
			Garmsar[] = {"STEALTH\core\maploc\Garmsar.ogg"};
			Gospandi[] = {"STEALTH\core\maploc\Gospandi.ogg"};
			ChakChak[] = {"STEALTH\core\maploc\ChakChak.ogg"};
			Chaman[] = {"STEALTH\core\maploc\Chaman.ogg"};
			LoyManara[] = {"STEALTH\core\maploc\LoyManara.ogg"};
			Nagara[] = {"STEALTH\core\maploc\Nagara.ogg"};
			Nur[] = {"STEALTH\core\maploc\Nur.ogg"};
			Rasman[] = {"STEALTH\core\maploc\Rasman.ogg"};
			Sakhee[] = {"STEALTH\core\maploc\Sakhee.ogg"};
			Zavarak[] = {"STEALTH\core\maploc\Zavarak.ogg"};
			Karachinar[] = {"STEALTH\core\maploc\Karachinar.ogg"};
			Shamali[] = {"STEALTH\core\maploc\Shamali.ogg"};
			Mulladoost[] = {"STEALTH\core\maploc\Mulladoost.ogg"};
			Khushab[] = {"STEALTH\core\maploc\Khushab.ogg"};
			Shukurkalay[] = {"STEALTH\core\maploc\Shukurkalay.ogg"};
			Jilavur[] = {"STEALTH\core\maploc\Jilavur.ogg"};
			Landay[] = {"STEALTH\core\maploc\Landay.ogg"};
			Sultansafee[] = {"STEALTH\core\maploc\Sultansafee.ogg"};
			Jaza[] = {"STEALTH\core\maploc\Jaza.ogg"};
			Huzrutimam[] = {"STEALTH\core\maploc\Huzrutimam.ogg"};
			Chardarakht[] = {"STEALTH\core\maploc\Chardarakht.ogg"};
			Timurkalay[] = {"STEALTH\core\maploc\Timurkalay.ogg"};
			Imarat[] = {"STEALTH\core\maploc\Imarat.ogg"};
			Ravanay[] = {"STEALTH\core\maploc\Ravanay.ogg"};
			CS_SuppressiveFireE[] = {"DEFAULT\combat\CS_SuppressiveFireE.ogg"};
			CS_HangOnIllSuppressEmE[] = {"DEFAULT\combat\CS_HangOnIllSuppressEmE.ogg"};
			CS_SuppressingE[] = {"DEFAULT\combat\CS_SuppressingE.ogg"};
			CS_CoveringFireE[] = {"DEFAULT\combat\CS_CoveringFireE.ogg"};
			CS_GoImCoveringE[] = {"DEFAULT\combat\CS_GoImCoveringE.ogg"};
			CS_GoIllCoverE[] = {"DEFAULT\combat\CS_GoIllCoverE.ogg"};
			CS_CoveringFire2E[] = {"DEFAULT\combat\CS_CoveringFire2E.ogg"};
			CS_CoveringGoE[] = {"DEFAULT\combat\CS_CoveringGoE.ogg"};
			CS_MoveOutE[] = {"DEFAULT\combat\CS_MoveOutE.ogg"};
			CS_GoE[] = {"DEFAULT\combat\CS_GoE.ogg"};
			CS_MoveE[] = {"DEFAULT\combat\CS_MoveE.ogg"};
			CS_EngagingE[] = {"DEFAULT\combat\CS_EngagingE.ogg"};
			CS_CoverMeE[] = {"DEFAULT\combat\CS_CoverMeE.ogg"};
			CS_OKLetsGo[] = {"DEFAULT\combat\CS_OKLetsGo.ogg"};
			CS_MovingE[] = {"DEFAULT\combat\CS_MovingE.ogg"};
			CS_MovinOutE[] = {"DEFAULT\combat\CS_MovinOutE.ogg"};
			CS_ReloadingE[] = {"DEFAULT\combat\CS_ReloadingE.ogg"};
			CS_GottaReloadE[] = {"DEFAULT\combat\CS_GottaReloadE.ogg"};
			CS_CoverMeReloadingE[] = {"DEFAULT\combat\CS_CoverMeReloadingE.ogg"};
			CS_ChangingMagsE[] = {"DEFAULT\combat\CS_ChangingMagsE.ogg"};
			CS_FireInTheHoleE[] = {"DEFAULT\combat\CS_FireInTheHoleE.ogg"};
			CS_ThrowingFragE[] = {"DEFAULT\combat\CS_ThrowingFragE.ogg"};
			CS_ThrowingSmokeE[] = {"DEFAULT\combat\CS_ThrowingSmokeE.ogg"};
			CS_SmokeOutE[] = {"DEFAULT\combat\CS_SmokeOutE.ogg"};
			CS_FragOutE[] = {"DEFAULT\combat\CS_FragOutE.ogg"};
			CS_GrenadeE[] = {"DEFAULT\combat\CS_GrenadeE.ogg"};
			CS_WatchTheGrenadeE[] = {"DEFAULT\combat\CS_WatchTheGrenadeE.ogg"};
			CS_IncomingFragE[] = {"DEFAULT\combat\CS_IncomingFragE.ogg"};
			CS_ContactE[] = {"DEFAULT\combat\CS_ContactE.ogg"};
			CS_HostilesE[] = {"DEFAULT\combat\CS_HostilesE.ogg"};
			CS_EnemyE[] = {"DEFAULT\combat\CS_EnemyE.ogg"};
			CS_DidYouSeeThatQ[] = {"DEFAULT\combat\CS_DidYouSeeThatQ.ogg"};
			CS_FocusE[] = {"DEFAULT\combat\CS_FocusE.ogg"};
			CS_CheckThatOut[] = {"DEFAULT\combat\CS_CheckThatOut.ogg"};
			CS_MotherfuckerE[] = {"DEFAULT\combat\CS_MotherfuckerE.ogg"};
			CS_SeeThatQE[] = {"DEFAULT\combat\CS_SeeThatQE.ogg"};
			CS_ARGHHE[] = {"DEFAULT\combat\CS_ARGHHE.ogg"};
			CS_OOFE[] = {"DEFAULT\combat\CS_OOFE.ogg"};
			CS_UGHE[] = {"DEFAULT\combat\CS_UGHE.ogg"};
			CS_NoE[] = {"DEFAULT\combat\CS_NoE.ogg"};
			CS_WoohooE[] = {"DEFAULT\combat\CS_WoohooE.ogg"};
			CS_YahooE[] = {"DEFAULT\combat\CS_YahooE.ogg"};
			CS_HeeeyE[] = {"DEFAULT\combat\CS_HeeeyE.ogg"};
			CS_YeehawEGreatE[] = {"DEFAULT\combat\CS_YeehawEGreatE.ogg"};
			BaseUnderAttackE[] = {"DEFAULT\warfare\BaseUnderAttackE.ogg"};
			UnderAttackE[] = {"DEFAULT\warfare\UnderAttackE.ogg"};
			InsufficientFunds[] = {"DEFAULT\warfare\InsufficientFunds.ogg"};
			InsufficientSupplies[] = {"DEFAULT\warfare\InsufficientSupplies.ogg"};
			InsufficientResources[] = {"DEFAULT\warfare\InsufficientResources.ogg"};
			VotingForANewCommander[] = {"DEFAULT\warfare\VotingForANewCommander.ogg"};
			EnemyBaseLocated[] = {"DEFAULT\warfare\EnemyBaseLocated.ogg"};
			EnemyForcesDetected[] = {"DEFAULT\warfare\EnemyForcesDetected.ogg"};
			HostilesDetectedNear[] = {"DEFAULT\warfare\HostilesDetectedNear.ogg"};
			NewIntelAvailable[] = {"DEFAULT\warfare\NewIntelAvailable.ogg"};
			NewSupportAvailable[] = {"DEFAULT\warfare\NewSupportAvailable.ogg"};
			StrongpointCapturedNear[] = {"DEFAULT\warfare\StrongpointCapturedNear.ogg"};
			StrongpointLostAt[] = {"DEFAULT\warfare\StrongpointLostAt.ogg"};
			Captured[] = {"DEFAULT\warfare\Captured.ogg"};
			CapturedNear[] = {"DEFAULT\warfare\CapturedNear.ogg"};
			Lost[] = {"DEFAULT\warfare\Lost.ogg"};
			LostAt[] = {"DEFAULT\warfare\LostAt.ogg"};
			IsUnderAttack[] = {"DEFAULT\warfare\IsUnderAttack.ogg"};
			Funds[] = {"DEFAULT\warfare\Funds.ogg"};
			Resources[] = {"DEFAULT\warfare\Resources.ogg"};
			Supplys[] = {"DEFAULT\warfare\Supplys.ogg"};
			StrongPoint[] = {"DEFAULT\warfare\StrongPoint.ogg"};
			OperationTerminatesIn20Minutes[] = {"DEFAULT\warfare\OperationTerminatesIn20Minutes.ogg"};
			OperationTerminatesIn10Minutes[] = {"DEFAULT\warfare\OperationTerminatesIn10Minutes.ogg"};
			OperationTerminatesIn5Minutes[] = {"DEFAULT\warfare\OperationTerminatesIn5Minutes.ogg"};
			MissionAccomplished[] = {"DEFAULT\warfare\MissionAccomplished.ogg"};
			MissionFailed[] = {"DEFAULT\warfare\MissionFailed.ogg"};
			MissionCanceled[] = {"DEFAULT\warfare\MissionCanceled.ogg"};
			NewMissionAvailable[] = {"DEFAULT\warfare\NewMissionAvailable.ogg"};
			Mission[] = {"DEFAULT\warfare\Mission.ogg"};
			Mobilized[] = {"DEFAULT\warfare\Mobilized.ogg"};
			Deployed[] = {"DEFAULT\warfare\Deployed.ogg"};
			Constructed[] = {"DEFAULT\warfare\Constructed.ogg"};
			Destroyed[] = {"DEFAULT\warfare\Destroyed.ogg"};
			CommandPost[] = {"DEFAULT\warfare\CommandPost.ogg"};
			Headquarters[] = {"DEFAULT\warfare\Headquarters.ogg"};
			Barracks[] = {"DEFAULT\warfare\Barracks.ogg"};
			LightVehicleSupplyPoint[] = {"DEFAULT\warfare\LightVehicleSupplyPoint.ogg"};
			HeavyVehicleSupplyPoint[] = {"DEFAULT\warfare\HeavyVehicleSupplyPoint.ogg"};
			Helipad[] = {"DEFAULT\warfare\Helipad.ogg"};
			ArtilleryBattery[] = {"DEFAULT\warfare\ArtilleryBattery.ogg"};
			AntiAirRadar[] = {"DEFAULT\warfare\AntiAirRadar.ogg"};
			ArtilleryRadar[] = {"DEFAULT\warfare\ArtilleryRadar.ogg"};
			UAVTerminal[] = {"DEFAULT\warfare\UAVTerminal.ogg"};
			ServicePoint[] = {"DEFAULT\warfare\ServicePoint.ogg"};
			CiviliansUnderEnemyFireIn[] = {"DEFAULT\warfare\CiviliansUnderEnemyFireIn.ogg"};
			RequestingAssistance[] = {"DEFAULT\warfare\RequestingAssistance.ogg"};
			NegativeWeCannotDivertAtThisTime[] = {"DEFAULT\warfare\NegativeWeCannotDivertAtThisTime.ogg"};
			CanDoWereOnIt[] = {"DEFAULT\warfare\CanDoWereOnIt.ogg"};
			RequestingPermissionToJoinYourTeam[] = {"DEFAULT\warfare\RequestingPermissionToJoinYourTeam.ogg"};
			PermissionGranted[] = {"DEFAULT\warfare\PermissionGranted.ogg"};
			RequestRejected[] = {"DEFAULT\warfare\RequestRejected.ogg"};
			RequestingPermissionToLeaveYourTeam[] = {"DEFAULT\warfare\RequestingPermissionToLeaveYourTeam.ogg"};
			BLUFORCommanderRequestsAnAlliance[] = {"DEFAULT\warfare\BLUFORCommanderRequestsAnAlliance.ogg"};
			OPFORCommanderRequestsAnAlliance[] = {"DEFAULT\warfare\OPFORCommanderRequestsAnAlliance.ogg"};
			NeutralCommanderRequestsAnAlliance[] = {"DEFAULT\warfare\NeutralCommanderRequestsAnAlliance.ogg"};
			BLUFORCommanderRequestsACeaseFire[] = {"DEFAULT\warfare\BLUFORCommanderRequestsACeaseFire.ogg"};
			OPFORCommanderRequestsACeaseFire[] = {"DEFAULT\warfare\OPFORCommanderRequestsACeaseFire.ogg"};
			NeutralCommanderRequestsACeaseFire[] = {"DEFAULT\warfare\NeutralCommanderRequestsACeaseFire.ogg"};
			AllianceFormed[] = {"DEFAULT\warfare\AllianceFormed.ogg"};
			AllianceHasEnded[] = {"DEFAULT\warfare\AllianceHasEnded.ogg"};
			CeaseFireInEffect[] = {"DEFAULT\warfare\CeaseFireInEffect.ogg"};
			CeaseFireHasEnded[] = {"DEFAULT\warfare\CeaseFireHasEnded.ogg"};
			AnotherTeamHasTransferredFundsToYou[] = {"DEFAULT\warfare\AnotherTeamHasTransferredFundsToYou.ogg"};
			HC_ReportingIn[] = {"STEALTH\hc\HC_ReportingIn.ogg"};
			HC_StandingByForOrders[] = {"STEALTH\hc\HC_StandingByForOrders.ogg"};
			HC_CombatReady[] = {"STEALTH\hc\HC_CombatReady.ogg"};
			HC_WaitingForOrders[] = {"STEALTH\hc\HC_WaitingForOrders.ogg"};
			HC_Advancing[] = {"STEALTH\hc\HC_Advancing.ogg"};
			HC_Affirmative[] = {"STEALTH\hc\HC_Affirmative.ogg"};
			HC_MovingToPosition[] = {"STEALTH\hc\HC_MovingToPosition.ogg"};
			HC_OrderReceived[] = {"STEALTH\hc\HC_OrderReceived.ogg"};
			HC_EngagingE[] = {"STEALTH\hc\HC_EngagingE.ogg"};
			HC_AttackingE[] = {"STEALTH\hc\HC_AttackingE.ogg"};
			SeveralAdv[] = {"DEFAULT\Core\Several.ogg"};
			Single_EN[] = {"DEFAULT\Core\Single.ogg"};
			None_EN[] = {"DEFAULT\Core\None.ogg"};
			Some_EN[] = {"DEFAULT\Core\Some.ogg"};
			ALotOf_EN[] = {"DEFAULT\Core\ALotOf.ogg"};
			Independent_EN[] = {"DEFAULT\Core\Independent.ogg"};
			Civilian_EN[] = {"DEFAULT\Core\Civilian.ogg"};
			OfThem_EN[] = {"DEFAULT\Core\OfThem.ogg"};
			One_EN[] = {"DEFAULT\Core\One.ogg"};
			In_EN[] = {"DEFAULT\Core\In.ogg"};
			Near_EN[] = {"DEFAULT\Core\Near.ogg"};
			NotFar_EN[] = {"DEFAULT\Core\NotFar.ogg"};
			From_EN[] = {"DEFAULT\Core\From.ogg"};
			Around_EN[] = {"DEFAULT\Core\Around.ogg"};
			Here_EN[] = {"DEFAULT\Core\Here.ogg"};
			There_EN[] = {"DEFAULT\Core\There.ogg"};
			Probably_EN[] = {"DEFAULT\Core\Probably.ogg"};
			ToThe_EN[] = {"DEFAULT\Core\ToThe.ogg"};
			IsProbablyToThe_EN[] = {"DEFAULT\Core\IsProbablyToThe.ogg"};
			JustNow_EN[] = {"DEFAULT\Core\JustNow.ogg"};
			AFewMinutesAgo_EN[] = {"DEFAULT\Core\AFewMinutesAgo.ogg"};
			AFewHoursAgo_EN[] = {"DEFAULT\Core\AFewHoursAgo.ogg"};
			Today_EN[] = {"DEFAULT\Core\Today.ogg"};
			Yesterday_EN[] = {"DEFAULT\Core\Yesterday.ogg"};
			SeveralDaysAgo_EN[] = {"DEFAULT\Core\SeveralDaysAgo.ogg"};
			EnglishQ[] = {"DEFAULT\Core\EnglishQ.ogg"};
			RussianQ[] = {"DEFAULT\Core\RussianQ.ogg"};
			CzechQ[] = {"DEFAULT\Core\CzechQ.ogg"};
			TakistaniQ[] = {"DEFAULT\Core\TakistaniQ.ogg"};
			North_EN[] = {"DEFAULT\direction\North.ogg"};
			South_EN[] = {"DEFAULT\direction\South.ogg"};
			West_EN[] = {"DEFAULT\direction\West.ogg"};
			East_EN[] = {"DEFAULT\direction\East.ogg"};
			Northwest_EN[] = {"DEFAULT\direction\Northwest.ogg"};
			Southwest_EN[] = {"DEFAULT\direction\Southwest.ogg"};
			Northeast_EN[] = {"DEFAULT\direction\Northeast.ogg"};
			Southeast_EN[] = {"DEFAULT\direction\Southeast.ogg"};
			DidYouSeeAnythingRecentlyQ_EN[] = {"DEFAULT\Core\DidYouSeeAnythingRecentlyQ.ogg"};
			YesISawSomething_EN[] = {"DEFAULT\Core\YesISawSomething.ogg"};
			NoIDidntSeeAnything_EN[] = {"DEFAULT\Core\NoIDidntSeeAnything.ogg"};
			WhatsTheWeatherForecastQ_EN[] = {"DEFAULT\Core\WhatsTheWeatherForecastQ.ogg"};
			NiceWeatherHuhQ_EN[] = {"DEFAULT\Core\NiceWeatherHuhQ.ogg"};
			NastyWeatherHuhQ_EN[] = {"DEFAULT\Core\NastyWeatherHuhQ.ogg"};
			ShouldBeClearingUpSoon_EN[] = {"DEFAULT\Core\ShouldBeClearingUpSoon.ogg"};
			IReckonWellGetSomeRainSoon_EN[] = {"DEFAULT\Core\IReckonWellGetSomeRainSoon.ogg"};
			TheySayItllStayLikeThisForAWhile_EN[] = {"DEFAULT\Core\TheySayItllStayLikeThisForAWhile.ogg"};
			WhatsTheClosestSettlementQ_EN[] = {"DEFAULT\Core\WhatsTheClosestSettlementQ.ogg"};
			TheClosestOneIs_EN[] = {"DEFAULT\Core\TheClosestOneIs.ogg"};
			ImNotFromAroundHere_EN[] = {"DEFAULT\Core\ImNotFromAroundHere.ogg"};
			NoIdeaIDontLiveHere_EN[] = {"DEFAULT\Core\NoIdeaIDontLiveHere.ogg"};
			YouAlreadyAskedMeThat_EN[] = {"DEFAULT\Core\YouAlreadyAskedMeThat.ogg"};
			AreYouKiddingQ_EN[] = {"DEFAULT\Core\AreYouKiddingQ.ogg"};
			StopAskingMeThat_EN[] = {"DEFAULT\Core\StopAskingMeThat.ogg"};
			SorryIDontUnderstand_EN[] = {"DEFAULT\Core\SorryIDontUnderstand.ogg"};
			UhWhatQ_EN[] = {"DEFAULT\Core\UhWhatQ.ogg"};
			IWillOnlyTellYouMyNameRankAndSerialNumber_EN[] = {"DEFAULT\Core\IWillOnlyTellYouMyNameRankAndSerialNumber.ogg"};
			SirQ_EN[] = {"DEFAULT\Core\SirQ.ogg"};
			PrivateQ_EN[] = {"DEFAULT\Core\PrivateQ.ogg"};
			CorporalQ_EN[] = {"DEFAULT\Core\CorporalQ.ogg"};
			SergeantQ_EN[] = {"DEFAULT\Core\SergeantQ.ogg"};
			LieutenantQ_EN[] = {"DEFAULT\Core\LieutenantQ.ogg"};
			CaptainQ_EN[] = {"DEFAULT\Core\CaptainQ.ogg"};
			MajorQ_EN[] = {"DEFAULT\Core\MajorQ.ogg"};
			ColonelQ_EN[] = {"DEFAULT\Core\ColonelQ.ogg"};
			YesPrivate_EN[] = {"DEFAULT\Core\YesPrivate.ogg"};
			YesCorporal_EN[] = {"DEFAULT\Core\YesCorporal.ogg"};
			YesSergeant_EN[] = {"DEFAULT\Core\YesSergeant.ogg"};
			YesLieutenant_EN[] = {"DEFAULT\Core\YesLieutenant.ogg"};
			YesCaptain_EN[] = {"DEFAULT\Core\YesCaptain.ogg"};
			YesMajor_EN[] = {"DEFAULT\Core\YesMajor.ogg"};
			YesColonel_EN[] = {"DEFAULT\Core\YesColonel.ogg"};
			SoldierQ_EN[] = {"DEFAULT\Core\SoldierQ.ogg"};
			MorninSoldier_EN[] = {"DEFAULT\Core\MorninSoldier.ogg"};
			EveninSoldier_EN[] = {"DEFAULT\Core\EveninSoldier.ogg"};
			GoodDaySir_EN[] = {"DEFAULT\Core\GoodDaySir.ogg"};
			GoodEveningSir_EN[] = {"DEFAULT\Core\GoodEveningSir.ogg"};
			GoodMorningSir_EN[] = {"DEFAULT\Core\GoodMorningSir.ogg"};
			GoodDay_EN[] = {"DEFAULT\Core\GoodDay.ogg"};
			GoodMorning_EN[] = {"DEFAULT\Core\GoodMorning.ogg"};
			GoodEvening_EN[] = {"DEFAULT\Core\GoodEvening.ogg"};
			WhatQ_EN[] = {"DEFAULT\Core\WhatQ.ogg"};
			YesSir_EN[] = {"DEFAULT\Core\YesSir.ogg"};
			HelloSir_EN[] = {"DEFAULT\Core\HelloSir.ogg"};
			Yep_EN[] = {"DEFAULT\Core\Yep.ogg"};
			YeahQ_EN[] = {"DEFAULT\Core\YeahQ.ogg"};
			Hi_EN[] = {"DEFAULT\Core\Hi.ogg"};
			HiThereE_EN[] = {"DEFAULT\Core\HiThereE.ogg"};
			HeyMan_EN[] = {"DEFAULT\Core\HeyMan.ogg"};
			HiDude_EN[] = {"DEFAULT\Core\HiDude.ogg"};
			Hello_EN[] = {"DEFAULT\Core\Hello.ogg"};
			HowsThingsQ_EN[] = {"DEFAULT\Core\HowsThingsQ.ogg"};
			HowAreYouQ_EN[] = {"DEFAULT\Core\HowAreYouQ.ogg"};
			HeyE_EN[] = {"DEFAULT\Core\HeyE.ogg"};
			WhatDoYouWantQ_EN[] = {"DEFAULT\Core\WhatDoYouWantQ.ogg"};
			WhatDoYouNeedQ_EN[] = {"DEFAULT\Core\WhatDoYouNeedQ.ogg"};
			WhatsUpQ_EN[] = {"DEFAULT\Core\WhatsUpQ.ogg"};
			YesQ_EN[] = {"DEFAULT\Core\YesQ.ogg"};
			MaamQ_EN[] = {"DEFAULT\Core\MaamQ.ogg"};
			HaveANiceDay_EN[] = {"DEFAULT\Core\HaveANiceDay.ogg"};
			MorningMaam_EN[] = {"DEFAULT\Core\MorningMaam.ogg"};
			HelloThere_EN[] = {"DEFAULT\Core\HelloThere.ogg"};
			HowYouDoinQ_EN[] = {"DEFAULT\Core\HowYouDoinQ.ogg"};
			DontTouchMeE_EN[] = {"DEFAULT\Core\DontTouchMeE.ogg"};
			NotNowE_EN[] = {"DEFAULT\Core\NotNowE.ogg"};
			Later_EN[] = {"DEFAULT\Core\Later.ogg"};
			NoTimeE_EN[] = {"DEFAULT\Core\NoTimeE.ogg"};
			HushE_EN[] = {"DEFAULT\Core\HushE.ogg"};
			SsshhE_EN[] = {"DEFAULT\Core\SsshhE.ogg"};
			CantYouSeeImBusyQ_EN[] = {"DEFAULT\Core\CantYouSeeImBusyQ.ogg"};
			BitOccupiedAtTheMomentDude_EN[] = {"DEFAULT\Core\BitOccupiedAtTheMomentDude.ogg"};
			ImBusyE_EN[] = {"DEFAULT\Core\ImBusyE.ogg"};
			PissOffE_EN[] = {"DEFAULT\Core\PissOffE.ogg"};
			NiceToSeeYou_EN[] = {"DEFAULT\Core\NiceToSeeYou.ogg"};
			GoodToSeeYou_EN[] = {"DEFAULT\Core\GoodToSeeYou.ogg"};
			HeyGladYoureHere_EN[] = {"DEFAULT\Core\HeyGladYoureHere.ogg"};
			CanIHelpYouQ_EN[] = {"DEFAULT\Core\CanIHelpYouQ.ogg"};
			GetLostE_EN[] = {"DEFAULT\Core\GetLostE.ogg"};
			LeaveMeAloneE_EN[] = {"DEFAULT\Core\LeaveMeAloneE.ogg"};
			LeaveUsAloneE_EN[] = {"DEFAULT\Core\LeaveUsAloneE.ogg"};
			FuckingPig_EN[] = {"DEFAULT\Core\FuckingPig.ogg"};
			SonOfABitchE_EN[] = {"DEFAULT\Core\SonOfABitchE.ogg"};
			DamnYouE_EN[] = {"DEFAULT\Core\DamnYouE.ogg"};
			CanIAskYouSomethingQ_EN[] = {"DEFAULT\Core\CanIAskYouSomethingQ.ogg"};
			PleaseCanYouHelpQ_EN[] = {"DEFAULT\Core\PleaseCanYouHelpQ.ogg"};
			Speak_EN[] = {"DEFAULT\Core\Speak.ogg"};
			HelpUs_EN[] = {"DEFAULT\Core\HelpUs.ogg"};
			IWontSayAnotherWord_EN[] = {"DEFAULT\Core\IWontSayAnotherWord.ogg"};
			MindYourOwnBusiness_EN[] = {"DEFAULT\Core\MindYourOwnBusiness.ogg"};
			GoBotherSomeoneElse_EN[] = {"DEFAULT\Core\GoBotherSomeoneElse.ogg"};
			CopyThat[] = {"DEFAULT\SOM\CopyThat.ogg"};
			ObjectiveFailed[] = {"DEFAULT\SOM\ObjectiveFailed.ogg"};
			DoYouCopyQ[] = {"DEFAULT\SOM\DoYouCopyQ.ogg"};
			RequestingFireSupportAtGrid[] = {"DEFAULT\SOM\RequestingFireSupportAtGrid.ogg"};
			FiringAtTargetLocation[] = {"DEFAULT\SOM\FiringAtTargetLocation.ogg"};
			ArtilleryNotAvailableRightNow[] = {"DEFAULT\SOM\ArtilleryNotAvailableRightNow.ogg"};
			RequestingContinuousIlluminationAtGrid[] = {"DEFAULT\SOM\RequestingContinuousIlluminationAtGrid.ogg"};
			IlluminatingTargetLocation[] = {"DEFAULT\SOM\IlluminatingTargetLocation.ogg"};
			NoFireMissionAvailableAtThisTime[] = {"DEFAULT\SOM\NoFireMissionAvailableAtThisTime.ogg"};
			ThisIs[] = {"DEFAULT\SOM\ThisIs.ogg"};
			RequestingReinforcementsToOurPositionGrid[] = {"DEFAULT\SOM\RequestingReinforcementsToOurPositionGrid.ogg"};
			WeCanFlyInReinforcmentsAsNeeded[] = {"DEFAULT\SOM\WeCanFlyInReinforcmentsAsNeeded.ogg"};
			YouWillHaveToManageYourself[] = {"DEFAULT\SOM\YouWillHaveToManageYourself.ogg"};
			RequestingSupplyDropAtGrid[] = {"DEFAULT\SOM\RequestingSupplyDropAtGrid.ogg"};
			SupportOnWayStandBy[] = {"DEFAULT\SOM\SupportOnWayStandBy.ogg"};
			RequestingCloseAirSupportAtGrid[] = {"DEFAULT\SOM\RequestingCloseAirSupportAtGrid.ogg"};
			RogerAircraftOnTheWay[] = {"DEFAULT\SOM\RogerAircraftOnTheWay.ogg"};
			NegativeOnTheCloseAirSupport[] = {"DEFAULT\SOM\NegativeOnTheCloseAirSupport.ogg"};
			IntelShowsAConvoyEnrouteNearYourPositionAreYouFreeToInterceptAndDestroyItQ[] = {"DEFAULT\SOM\IntelShowsAConvoyEnrouteNearYourPositionAreYouFreeToInterceptAndDestroyItQ.ogg"};
			BeAdvisedOtherUnitsWillHandleTheConvoy[] = {"DEFAULT\SOM\BeAdvisedOtherUnitsWillHandleTheConvoy.ogg"};
			UAVConfirmsAllVehiclesDestroyed[] = {"DEFAULT\SOM\UAVConfirmsAllVehiclesDestroyed.ogg"};
			BeAdvisedTargetVehicleHasReachedItsDestination[] = {"DEFAULT\SOM\BeAdvisedTargetVehicleHasReachedItsDestination.ogg"};
			BeAdvisedTargetVehicleIsDisabled[] = {"DEFAULT\SOM\BeAdvisedTargetVehicleIsDisabled.ogg"};
			EnemyPositionInCloseProximityCanYouAssaultTheLocationQ[] = {"DEFAULT\SOM\EnemyPositionInCloseProximityCanYouAssaultTheLocationQ.ogg"};
			BeAdvisedEnemyHasChangedPositionAttackCancelled[] = {"DEFAULT\SOM\BeAdvisedEnemyHasChangedPositionAttackCancelled.ogg"};
			EnemyPositionNeutralized[] = {"DEFAULT\SOM\EnemyPositionNeutralized.ogg"};
			BeAdvisedFriendlyUnitsUnderAttackCanYouAssistQ[] = {"DEFAULT\SOM\BeAdvisedFriendlyUnitsUnderAttackCanYouAssistQ.ogg"};
			EnemyAttackRepelled[] = {"DEFAULT\SOM\EnemyAttackRepelled.ogg"};
			GoodWorkWeSeeNoMoreHostilesInTheArea[] = {"DEFAULT\SOM\GoodWorkWeSeeNoMoreHostilesInTheArea.ogg"};
			ZeroHostilesAttackHalted[] = {"DEFAULT\SOM\ZeroHostilesAttackHalted.ogg"};
			WereUnableToHoldPositionFallingBack[] = {"DEFAULT\SOM\WereUnableToHoldPositionFallingBack.ogg"};
			BeAdvisedAHighValueTargetHasBeenMarkedOnYourMapCanYouInterceptAndDestroyQ[] = {"DEFAULT\SOM\BeAdvisedAHighValueTargetHasBeenMarkedOnYourMapCanYouInterceptAndDestroyQ.ogg"};
			CancellingTheDestroyOrderBadIntelHowCopyQ[] = {"DEFAULT\SOM\CancellingTheDestroyOrderBadIntelHowCopyQ.ogg"};
			HighValueTargetDestroyedOver[] = {"DEFAULT\SOM\HighValueTargetDestroyedOver.ogg"};
			FriendlyTroopsRequestingEscortThroughHostileZoneCanYouOfferSupportAlongTheDesignatedRouteQ[] = {"DEFAULT\SOM\FriendlyTroopsRequestingEscortThroughHostileZoneCanYouOfferSupportAlongTheDesignatedRouteQ.ogg"};
			WeHaveAssignedAnotherUnitToThisEscortOp[] = {"DEFAULT\SOM\WeHaveAssignedAnotherUnitToThisEscortOp.ogg"};
			TargetInSightCommencingEscort[] = {"DEFAULT\SOM\TargetInSightCommencingEscort.ogg"};
			BeAdvisedEnemyPatrolsInCloseProximityHowCopyQ[] = {"DEFAULT\SOM\BeAdvisedEnemyPatrolsInCloseProximityHowCopyQ.ogg"};
			SolidCopyThanksForTheIntel[] = {"DEFAULT\SOM\SolidCopyThanksForTheIntel.ogg"};
			DestinationReachedEveryoneAccountedForOver[] = {"DEFAULT\SOM\DestinationReachedEveryoneAccountedForOver.ogg"};
			WereAtTheDestinationReportingLowCasualtiesOver[] = {"DEFAULT\SOM\WereAtTheDestinationReportingLowCasualtiesOver.ogg"};
			BeAdvisedEscortFailedWeLostThemOver[] = {"DEFAULT\SOM\BeAdvisedEscortFailedWeLostThemOver.ogg"};
			BeAdvisedHostilesReportedNearYourLocationCanYouMakeASweepOfTheCheckpointsQ[] = {"DEFAULT\SOM\BeAdvisedHostilesReportedNearYourLocationCanYouMakeASweepOfTheCheckpointsQ.ogg"};
			CancelThePatrolBadIntelOver[] = {"DEFAULT\SOM\CancelThePatrolBadIntelOver.ogg"};
			BeAdvisedImPassingCheckpointOne[] = {"DEFAULT\SOM\BeAdvisedImPassingCheckpointOne.ogg"};
			SitrepPassingCheckpointTwo[] = {"DEFAULT\SOM\SitrepPassingCheckpointTwo.ogg"};
			ReportingPatrolComplete[] = {"DEFAULT\SOM\ReportingPatrolComplete.ogg"};
			ThereAreFriendlyPOWsHeldInCloseProximityCanYouExtractThemQ[] = {"DEFAULT\SOM\ThereAreFriendlyPOWsHeldInCloseProximityCanYouExtractThemQ.ogg"};
			BeAdvisedPOWsWereTransportedToUnknownLocationMissionCanceled[] = {"DEFAULT\SOM\BeAdvisedPOWsWereTransportedToUnknownLocationMissionCanceled.ogg"};
			ExtractionConfirmedPOWsRecovered[] = {"DEFAULT\SOM\ExtractionConfirmedPOWsRecovered.ogg"};
			RequestingTransportForTheRecoveredPOWsOver[] = {"DEFAULT\SOM\RequestingTransportForTheRecoveredPOWsOver.ogg"};
			POWsAreKIAISayAgainAllFriendliesKIAOver[] = {"DEFAULT\SOM\POWsAreKIAISayAgainAllFriendliesKIAOver.ogg"};
			LocalsReportEnemyCachesInYourAOCanYouSearchForTheseCachesQ[] = {"DEFAULT\SOM\LocalsReportEnemyCachesInYourAOCanYouSearchForTheseCachesQ.ogg"};
			BeAdvisedFindingTheCachesIsNoLongerAPriority[] = {"DEFAULT\SOM\BeAdvisedFindingTheCachesIsNoLongerAPriority.ogg"};
			SearchCompleteSeveralStorageCachesUncoveredAndMarkedForCollectionHowCopyQ[] = {"DEFAULT\SOM\SearchCompleteSeveralStorageCachesUncoveredAndMarkedForCollectionHowCopyQ.ogg"};
			SearchCompleteALargeNumberOfCachesWereLocatedAndMarkedForCollectionOver[] = {"DEFAULT\SOM\SearchCompleteALargeNumberOfCachesWereLocatedAndMarkedForCollectionOver.ogg"};
			SearchCompleteNothingToReportZeroCachesFoundOver[] = {"DEFAULT\SOM\SearchCompleteNothingToReportZeroCachesFoundOver.ogg"};
			WeHaveAnAircraftDownInYourVicinityCanYouLocateAndSecureTheCrashSiteQ[] = {"DEFAULT\SOM\WeHaveAnAircraftDownInYourVicinityCanYouLocateAndSecureTheCrashSiteQ.ogg"};
			ReturnToYourPrimarySARTeamsOnRouteToTheCrashSite[] = {"DEFAULT\SOM\ReturnToYourPrimarySARTeamsOnRouteToTheCrashSite.ogg"};
			SurvivorsOnBoardTransportResumingPrimary[] = {"DEFAULT\SOM\SurvivorsOnBoardTransportResumingPrimary.ogg"};
			CrashSiteSecuredNoSurvivors[] = {"DEFAULT\SOM\CrashSiteSecuredNoSurvivors.ogg"};
			BeAdvisedCrashSiteCompromisedOver[] = {"DEFAULT\SOM\BeAdvisedCrashSiteCompromisedOver.ogg"};
			CrashSiteSecuredWeveGotSurvivorsRequestingCASEVACOver[] = {"DEFAULT\SOM\CrashSiteSecuredWeveGotSurvivorsRequestingCASEVACOver.ogg"};
			IGotARequestForTransportHereThePickUpIsCloseByCanYouHandleItQ[] = {"DEFAULT\SOM\IGotARequestForTransportHereThePickUpIsCloseByCanYouHandleItQ.ogg"};
			CancelThatRequestAlternateTransportFoundOver[] = {"DEFAULT\SOM\CancelThatRequestAlternateTransportFoundOver.ogg"};
			WeHavePickUpPointInSightOver[] = {"DEFAULT\SOM\WeHavePickUpPointInSightOver.ogg"};
			RogerThatThoseTroopsAreNeededElsewhereDoubleTimeGentlemen[] = {"DEFAULT\SOM\RogerThatThoseTroopsAreNeededElsewhereDoubleTimeGentlemen.ogg"};
			WeLostOurTransportISayAgainTransportDisabled[] = {"DEFAULT\SOM\WeLostOurTransportISayAgainTransportDisabled.ogg"};
			BeAdvisedAllPassengersAreKIAOver[] = {"DEFAULT\SOM\BeAdvisedAllPassengersAreKIAOver.ogg"};
			WereAtOurDestinationEveryoneAccountedForOver[] = {"DEFAULT\SOM\WereAtOurDestinationEveryoneAccountedForOver.ogg"};
			WereAtOurDestinationTookSomeCasualtiesButTheMajorityIsSafeOver[] = {"DEFAULT\SOM\WereAtOurDestinationTookSomeCasualtiesButTheMajorityIsSafeOver.ogg"};
			RequestingSupplyDrop[] = {"DEFAULT\SOM\RequestingSupplyDrop.ogg"};
			SupplyDropReadyRequestingDropZoneLocationOver[] = {"DEFAULT\SOM\SupplyDropReadyRequestingDropZoneLocationOver.ogg"};
			PositionConfirmedSuppliesInbound[] = {"DEFAULT\SOM\PositionConfirmedSuppliesInbound.ogg"};
			BeAdvisedWeLostContactWithTheTransportVehicleOut[] = {"DEFAULT\SOM\BeAdvisedWeLostContactWithTheTransportVehicleOut.ogg"};
			SuppliesDeliveredOut[] = {"DEFAULT\SOM\SuppliesDeliveredOut.ogg"};
			TheSuppliesHaveBeenDroppedOut[] = {"DEFAULT\SOM\TheSuppliesHaveBeenDroppedOut.ogg"};
			RequestingFastTransportOver[] = {"DEFAULT\SOM\RequestingFastTransportOver.ogg"};
			RogerTransportIsAvailableSendDestinationOver[] = {"DEFAULT\SOM\RogerTransportIsAvailableSendDestinationOver.ogg"};
			NegativeTransportUnavailableEnemyActivityInYourSectorOut[] = {"DEFAULT\SOM\NegativeTransportUnavailableEnemyActivityInYourSectorOut.ogg"};
			NegativeTransportUnavailableOut[] = {"DEFAULT\SOM\NegativeTransportUnavailableOut.ogg"};
			NegativeTransportIsUnavailableAtYourLocationOut[] = {"DEFAULT\SOM\NegativeTransportIsUnavailableAtYourLocationOut.ogg"};
			DestinationReachedThanksForTheAssistanceOut[] = {"DEFAULT\SOM\DestinationReachedThanksForTheAssistanceOut.ogg"};
			RequestingAerialReconOver[] = {"DEFAULT\SOM\RequestingAerialReconOver.ogg"};
			UAVReadyRequestingTargetLocationOver[] = {"DEFAULT\SOM\UAVReadyRequestingTargetLocationOver.ogg"};
			CoordinatesReceivedDroneIsEnrouteOver[] = {"DEFAULT\SOM\CoordinatesReceivedDroneIsEnrouteOver.ogg"};
			DroneIsBingoFuelAndRTBOver[] = {"DEFAULT\SOM\DroneIsBingoFuelAndRTBOver.ogg"};
			ThanksForTheUpdateOut[] = {"DEFAULT\SOM\ThanksForTheUpdateOut.ogg"};
			WeRequireLongRangeTransportHowCopyQ[] = {"DEFAULT\SOM\WeRequireLongRangeTransportHowCopyQ.ogg"};
			RogerThatTransportAvailableRequestingLZOver[] = {"DEFAULT\SOM\RogerThatTransportAvailableRequestingLZOver.ogg"};
			CopyTransportIsInboundOut[] = {"DEFAULT\SOM\CopyTransportIsInboundOut.ogg"};
			AllAboardSendingCoordinatesOver[] = {"DEFAULT\SOM\AllAboardSendingCoordinatesOver.ogg"};
			ReportingSuccessfulInsertionThanksForTheRideOut[] = {"DEFAULT\SOM\ReportingSuccessfulInsertionThanksForTheRideOut.ogg"};
			BeAdvisedTransportWasImmobilizedOut[] = {"DEFAULT\SOM\BeAdvisedTransportWasImmobilizedOut.ogg"};
			RequestingImmediateCloseAirSupportHowCopyQ[] = {"DEFAULT\SOM\RequestingImmediateCloseAirSupportHowCopyQ.ogg"};
			CopyThatAirstrikeIsReadyTransmitTargetLocationOver[] = {"DEFAULT\SOM\CopyThatAirstrikeIsReadyTransmitTargetLocationOver.ogg"};
			TargetLocationMarkedOver[] = {"DEFAULT\SOM\TargetLocationMarkedOver.ogg"};
			CoordinatesReceivedAircraftAreInboundContactOnLaserDesignatorOut[] = {"DEFAULT\SOM\CoordinatesReceivedAircraftAreInboundContactOnLaserDesignatorOut.ogg"};
			BeAdvisedWeHaveABirdStandingByWeCanFlyInReinforcementsIfNeededCheckYourMapForTheRendezvousPointAndConfirmOver[] = {"DEFAULT\SOM\BeAdvisedWeHaveABirdStandingByWeCanFlyInReinforcementsIfNeededCheckYourMapForTheRendezvousPointAndConfirmOver.ogg"};
			TheBirdHadToRTBForFuelOver[] = {"DEFAULT\SOM\TheBirdHadToRTBForFuelOver.ogg"};
			WeLinkedUpWithTheReinforcementsThanksForTheSupport[] = {"DEFAULT\SOM\WeLinkedUpWithTheReinforcementsThanksForTheSupport.ogg"};
			WeLostCommunicationWithThePilotBirdCouldBeDownOver[] = {"DEFAULT\SOM\WeLostCommunicationWithThePilotBirdCouldBeDownOver.ogg"};
			YourReinforcementsDidntMakeItToTheRendezvousYoullHaveToManageOver[] = {"DEFAULT\SOM\YourReinforcementsDidntMakeItToTheRendezvousYoullHaveToManageOver.ogg"};
			RequestingReleaseOfAnAttackHelicopterNearOurPositionOver[] = {"DEFAULT\SOM\RequestingReleaseOfAnAttackHelicopterNearOurPositionOver.ogg"};
			ReleaseAuthorizedSendStrikeTargetOver[] = {"DEFAULT\SOM\ReleaseAuthorizedSendStrikeTargetOver.ogg"};
			StrikeTargetSentOver[] = {"DEFAULT\SOM\StrikeTargetSentOver.ogg"};
			CoordinatesReceivedHeloIsAttackingTheTargetOut[] = {"DEFAULT\SOM\CoordinatesReceivedHeloIsAttackingTheTargetOut.ogg"};
			RequestingImmediateArtillerySuppressionHighExplosiveHowCopyQ[] = {"DEFAULT\SOM\RequestingImmediateArtillerySuppressionHighExplosiveHowCopyQ.ogg"};
			WithAnImmediateArtillerySuppressionRequestSmokeOver[] = {"DEFAULT\SOM\WithAnImmediateArtillerySuppressionRequestSmokeOver.ogg"};
			RequestingImmediateCoverWithWilliePeteOver[] = {"DEFAULT\SOM\RequestingImmediateCoverWithWilliePeteOver.ogg"};
			RequestingContinuousIlluminationAtTheTargetLocationHowCopyQ[] = {"DEFAULT\SOM\RequestingContinuousIlluminationAtTheTargetLocationHowCopyQ.ogg"};
			WeNeedLaserGuidedOrdnanceOver[] = {"DEFAULT\SOM\WeNeedLaserGuidedOrdnanceOver.ogg"};
			WeNeedAGuidedAntiArmorStrikeOver[] = {"DEFAULT\SOM\WeNeedAGuidedAntiArmorStrikeOver.ogg"};
			RequestingFireSupportFireForEffectOver[] = {"DEFAULT\SOM\RequestingFireSupportFireForEffectOver.ogg"};
			RequestingFireSupportAtTheTargetLocationWilliePeteInEffectHowCopyQ[] = {"DEFAULT\SOM\RequestingFireSupportAtTheTargetLocationWilliePeteInEffectHowCopyQ.ogg"};
			AdjustFireAtTheTargetLocationOver[] = {"DEFAULT\SOM\AdjustFireAtTheTargetLocationOver.ogg"};
			ArtilleryAvailableTransmitTargetLocationOver[] = {"DEFAULT\SOM\ArtilleryAvailableTransmitTargetLocationOver.ogg"};
			RogerThatTargetLocationReceivedOrdnanceIsInboundOver[] = {"DEFAULT\SOM\RogerThatTargetLocationReceivedOrdnanceIsInboundOver.ogg"};
			BeAdvisedArtilleryIsUnavailableAtThisTimeOut[] = {"DEFAULT\SOM\BeAdvisedArtilleryIsUnavailableAtThisTimeOut.ogg"};
			NegativeWeLostContactWithTheBatteryOut[] = {"DEFAULT\SOM\NegativeWeLostContactWithTheBatteryOut.ogg"};
			BeAdvisedTheBatteryCannotTargetThatGridOut[] = {"DEFAULT\SOM\BeAdvisedTheBatteryCannotTargetThatGridOut.ogg"};
			CannotExecuteAdjustCoordinatesOut[] = {"DEFAULT\SOM\CannotExecuteAdjustCoordinatesOut.ogg"};
			ThatsOutsideOurFiringEnvelopeOut[] = {"DEFAULT\SOM\ThatsOutsideOurFiringEnvelopeOut.ogg"};
			ShotOver[] = {"DEFAULT\SOM\ShotOver.ogg"};
			ShotOut[] = {"DEFAULT\SOM\ShotOut.ogg"};
			SplashOver[] = {"DEFAULT\SOM\SplashOver.ogg"};
			SplashOut[] = {"DEFAULT\SOM\SplashOut.ogg"};
			RoundsComplete[] = {"DEFAULT\SOM\RoundsComplete.ogg"};
			CheckFireE[] = {"DEFAULT\SOM\CheckFireE.ogg"};
			CeasingFire[] = {"DEFAULT\SOM\CeasingFire.ogg"};
			BeAdvisedTheBatteryJustDroppedOffTheCommGridYoureOnYourOwnOver[] = {"DEFAULT\SOM\BeAdvisedTheBatteryJustDroppedOffTheCommGridYoureOnYourOwnOver.ogg"};
			RogerWellHandleItOurselvesOut[] = {"DEFAULT\SOM\RogerWellHandleItOurselvesOut.ogg"};
			StandByForMissionUpdate[] = {"DEFAULT\SOM\StandByForMissionUpdate.ogg"};
			Out[] = {"DEFAULT\SOM\Out.ogg"};
			RogerThat[] = {"DEFAULT\SOM\RogerThat.ogg"};
			JobWellDone[] = {"DEFAULT\SOM\JobWellDone.ogg"};
			GoodJobOut[] = {"DEFAULT\SOM\GoodJobOut.ogg"};
			WellDoneOut[] = {"DEFAULT\SOM\WellDoneOut.ogg"};
			MissionFailure[] = {"DEFAULT\SOM\MissionFailure.ogg"};
			MessageOver[] = {"DEFAULT\SOM\MessageOver.ogg"};
			ComeIn[] = {"DEFAULT\SOM\ComeIn.ogg"};
			GoAheadOver[] = {"DEFAULT\SOM\GoAheadOver.ogg"};
			CopyGoAhead[] = {"DEFAULT\SOM\CopyGoAhead.ogg"};
			WeCopyYouLoudAndClear[] = {"DEFAULT\SOM\WeCopyYouLoudAndClear.ogg"};
			WeCannotDivertAtThisTimeOut[] = {"DEFAULT\SOM\WeCannotDivertAtThisTimeOut.ogg"};
			Sorry[] = {"DEFAULT\SOM\Sorry.ogg"};
			NoWayWeCanHelpWithThatRightNowOut[] = {"DEFAULT\SOM\NoWayWeCanHelpWithThatRightNowOut.ogg"};
			WereOnTheWayOut[] = {"DEFAULT\SOM\WereOnTheWayOut.ogg"};
			WereOscarMikeOut[] = {"DEFAULT\SOM\WereOscarMikeOut.ogg"};
			UnableToCompleteTheObjectiveAbortingOver[] = {"DEFAULT\SOM\UnableToCompleteTheObjectiveAbortingOver.ogg"};
			WeHaveToAbortOver[] = {"DEFAULT\SOM\WeHaveToAbortOver.ogg"};
			ContinueYourPreviousMissionOver[] = {"DEFAULT\SOM\ContinueYourPreviousMissionOver.ogg"};
			AbortTheOpOver[] = {"DEFAULT\SOM\AbortTheOpOver.ogg"};
			ReturnToYourPrimaryOver[] = {"DEFAULT\SOM\ReturnToYourPrimaryOver.ogg"};
			CarryOnWithYourPriorTasksOver[] = {"DEFAULT\SOM\CarryOnWithYourPriorTasksOver.ogg"};
			StandByOver[] = {"DEFAULT\SOM\StandByOver.ogg"};
			Affirmative[] = {"DEFAULT\SOM\Affirmative.ogg"};
			SupportIsNotAvailableOut[] = {"DEFAULT\SOM\SupportIsNotAvailableOut.ogg"};
			YourRequestHasBeenRejectedOut[] = {"DEFAULT\SOM\YourRequestHasBeenRejectedOut.ogg"};
		};
	};
	class Arguments
	{
		class Direction
		{
			class Relative1
			{
				class 0
				{
					text = "$STR_EP1_WORDINFRONTOF";
					speech[] = {"InFrontOf"};
				};
				class 90
				{
					text = "$STR_EP1_WORDRIGHTOF";
					speech[] = {"RightOf"};
				};
				class 180
				{
					text = "$STR_EP1_WORDBEHIND";
					speech[] = {"Behind"};
				};
				class 270
				{
					text = "$STR_EP1_WORDLEFTOF";
					speech[] = {"LeftOf"};
				};
			};
			class Relative2
			{
				class 0
				{
					text = "$STR_EP1_WORDFRONT";
					speech[] = {"Front"};
				};
				class 90
				{
					text = "$STR_EP1_WORDRIGHT";
					speech[] = {"Right"};
				};
				class 180
				{
					text = "$STR_EP1_WORDREAR";
					speech[] = {"Rear"};
				};
				class 270
				{
					text = "$STR_EP1_WORDLEFT";
					speech[] = {"Left"};
				};
			};
			class Relative3
			{
				class 0
				{
					text = "$STR_EP1_WORDFRONT";
					speech[] = {"Front"};
				};
				class 90
				{
					text = "$STR_EP1_WORDRIGHTFLANK";
					speech[] = {"RightFlank"};
				};
				class 180
				{
					text = "$STR_EP1_WORDREAR";
					speech[] = {"Rear"};
				};
				class 270
				{
					text = "$STR_EP1_WORDLEFTFLANK";
					speech[] = {"LeftFlank"};
				};
			};
			class Compass1
			{
				class 0
				{
					text = "$STR_EP1_WORDNORTH";
					speech[] = {"North"};
				};
				class 45
				{
					text = "$STR_EP1_WORDNORTHEAST";
					speech[] = {"NorthEast"};
				};
				class 90
				{
					text = "$STR_EP1_WORDEAST";
					speech[] = {"East"};
				};
				class 135
				{
					text = "$STR_EP1_WORDSOUTHEAST";
					speech[] = {"SouthEast"};
				};
				class 180
				{
					text = "$STR_EP1_WORDSOUTH";
					speech[] = {"South"};
				};
				class 225
				{
					text = "$STR_EP1_WORDSOUTHWEST";
					speech[] = {"SouthWest"};
				};
				class 270
				{
					text = "$STR_EP1_WORDWEST";
					speech[] = {"West"};
				};
				class 315
				{
					text = "$STR_EP1_WORDNORTHWEST";
					speech[] = {"NorthWest"};
				};
			};
			class Compass2
			{
				class 0
				{
					text = "$STR_EP1_WORDNORTHOF";
					speech[] = {"NorthOf"};
				};
				class 45
				{
					text = "$STR_EP1_WORDNORTHEASTOF";
					speech[] = {"NorthEastOf"};
				};
				class 90
				{
					text = "$STR_EP1_WORDEASTOF";
					speech[] = {"EastOf"};
				};
				class 135
				{
					text = "$STR_EP1_WORDSOUTHEASTOF";
					speech[] = {"SouthEastOf"};
				};
				class 180
				{
					text = "$STR_EP1_WORDSOUTHOF";
					speech[] = {"SouthOf"};
				};
				class 225
				{
					text = "$STR_EP1_WORDSOUTHWESTOF";
					speech[] = {"SouthWestOf"};
				};
				class 270
				{
					text = "$STR_EP1_WORDWESTOF";
					speech[] = {"WestOf"};
				};
				class 315
				{
					text = "$STR_EP1_WORDNORTHWESTOF";
					speech[] = {"NorthWestOf"};
				};
			};
		};
		class Distance1
		{
			class Level0
			{
				text = "$STR_EP1_WORDDANGEROUSLYCLOSETO";
				speech[] = {"DangerouslyCloseTo"};
			};
			class Level1
			{
				text = "$STR_EP1_WORDNOTFARFROM";
				speech[] = {"NotFarFrom"};
			};
			class Level2
			{
				text = "$STR_EP1_WORDFARFROM";
				speech[] = {"FarFrom"};
			};
		};
		class Distance2
		{
			class Level0
			{
				text = "$STR_EP1_WORDJUST";
				speech[] = {"Just"};
			};
			class Level1
			{
				text = "$STR_EP1_WORDWAY";
				speech[] = {"Way"};
			};
			class Level2
			{
				text = "$STR_EP1_WORDDISTFAR";
				speech[] = {"Far"};
			};
		};
		class Distance3
		{
			class Level0
			{
				text = "$STR_EP1_WORDCLOSE";
				speech[] = {"Close"};
			};
			class Level1
			{
				text = "$STR_EP1_WORDMEDIUMRANGE";
				speech[] = {"MediumRange"};
			};
			class Level2
			{
				text = "$STR_EP1_WORDFAR";
				speech[] = {"Far"};
			};
		};
	};
	class SelectEnemyDetectedSentence
	{
		sentences[] = {"SentEnemyToOur","0.1 + (1 - (DistanceToGroup factor [1200-1/2, 1200+1/2]))","SentEnemyOnGrid","DistanceToGroup factor [1200-1/2, 1200+1/2]"};
	};
	class SelectCmdMoveSentence
	{
		sentences[] = {"SentCmdMoveToOur","0.1 + (1-MoveToObject) * (1 - (DistanceToGroup factor [1200-1/2, 1200+1/2]))","SentCmdMoveNearObject","MoveToObject * (1 - (DistanceToGroup factor [1200-1/2, 1200+1/2]))","SentCmdMoveToGridPos","DistanceToGroup factor [1200-1/2, 1200+1/2]"};
	};
	class SelectVehicleMoveSentence
	{
		sentences[] = {"VehicleMoveGroupRelative","GroupCompactness","VehicleMoveToGrid","((DistanceToGroup factor [750,1000]) + (1 - GroupCompactness)/2) / 2","VehicleMoveRecipientsRelative","(DistanceToRecipients / RecipientsRadius) factor [1.5, 3]","VehicleMoveToObject","3*MoveToObject","VehicleMoveLocationRelative","5 * ( ( GroupCompactness * ((DistanceToLocation/DistanceToGroup) factor [0.4,0.2]) ) + ( DistanceToLocation/DistanceToUnit factor [0.5,0.3] ) )"};
	};
	class SentEnemyDetectedSenderRelative
	{
		sentences[] = {"SentEnemyDetectedSenderRelativeDefault","(1-Stealth)","SentEnemyDetectedSenderRelativeStealth","Stealth"};
	};
	class SentEnemyDetectedSenderRelativeDefault
	{
		versions[] = {"SentEnemyDetectedSenderRelative_1",0.5,"SentEnemyDetectedSenderRelative_2",0.5};
		class SentEnemyDetectedSenderRelative_1
		{
			text = "$STR_EP1_SENTENEMYDETECTEDSENDERRELATIVE_1";
			speech[] = {"ContactE","%4","%2","%7.2","%6.3","Us"};
		};
		class SentEnemyDetectedSenderRelative_2
		{
			text = "$STR_EP1_SENTENEMYDETECTEDSENDERRELATIVE_2";
			speech[] = {"ContactE","%4","%2","%7.101","FromMe","ToThe","%8.101"};
		};
	};
	class SentEnemyDetectedSenderRelativeStealth
	{
		versions[] = {"SentEnemyDetectedSenderRelative_1",0.5,"SentEnemyDetectedSenderRelative_2",0.5};
		class SentEnemyDetectedSenderRelative_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYDETECTEDSENDERRELATIVE_1";
			speech[] = {"ContactE","%4","%2","%7.2","%6.3","Us"};
		};
		class SentEnemyDetectedSenderRelative_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYDETECTEDSENDERRELATIVE_2";
			speech[] = {"ContactE","%4","%2","%7.101","FromMe","ToThe","%8.101"};
		};
	};
	class SentEnemyDetectedUnitRelative
	{
		sentences[] = {"SentEnemyDetectedUnitRelativeDefault","(1-Stealth)","SentEnemyDetectedUnitRelativeStealth","Stealth"};
	};
	class SentEnemyDetectedUnitRelativeDefault
	{
		versions[] = {"SentEnemyDetectedUnitRelative_1",0.33,"SentEnemyDetectedUnitRelative_2",0.33,"SentEnemyDetectedUnitRelative_3",0.33};
		class SentEnemyDetectedUnitRelative_1
		{
			text = "$STR_EP1_SENTENEMYDETECTEDUNITRELATIVE_1";
			speech[] = {"BeAdvised","%13","%4","%2","%9.2","ToOur","%10.1"};
		};
		class SentEnemyDetectedUnitRelative_2
		{
			text = "$STR_EP1_SENTENEMYDETECTEDUNITRELATIVE_2";
			speech[] = {"%13","%4","%2","%9.2","ToOur","%10.1","OfYourPosition"};
		};
		class SentEnemyDetectedUnitRelative_3
		{
			text = "$STR_EP1_SENTENEMYDETECTEDUNITRELATIVE_3";
			speech[] = {"BeAdvised","%13","%4","%2","%10.1","%9.3","OfYourPosition"};
		};
	};
	class SentEnemyDetectedUnitRelativeStealth
	{
		versions[] = {"SentEnemyDetectedUnitRelative_1",0.33,"SentEnemyDetectedUnitRelative_2",0.33,"SentEnemyDetectedUnitRelative_3",0.33};
		class SentEnemyDetectedUnitRelative_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYDETECTEDUNITRELATIVE_1";
			speech[] = {"BeAdvised","%13","%4","%2","%9.2","ToOur","%10.1"};
		};
		class SentEnemyDetectedUnitRelative_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYDETECTEDUNITRELATIVE_2";
			speech[] = {"%13","%4","%2","%9.2","ToOur","%10.1","OfYourPosition"};
		};
		class SentEnemyDetectedUnitRelative_3
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYDETECTEDUNITRELATIVE_3";
			speech[] = {"BeAdvised","%13","%4","%2","%10.1","%9.3","OfYourPosition"};
		};
	};
	class SentEnemyDetectedLocationRelative
	{
		sentences[] = {"SentEnemyDetectedLocationRelativeDefault","(1-Stealth)","SentEnemyDetectedLocationRelativeStealth","Stealth"};
	};
	class SentEnemyDetectedLocationRelativeDefault
	{
		versions[] = {"SentEnemyDetectedLocationRelative_1",1};
		class SentEnemyDetectedLocationRelative_1
		{
			text = "$STR_EP1_SENTENEMYDETECTEDLOCATIONRELATIVE_1";
			speech[] = {"%4","%2","In","%14"};
		};
	};
	class SentEnemyDetectedLocationRelativeStealth
	{
		versions[] = {"SentEnemyDetectedLocationRelative_1",1};
		class SentEnemyDetectedLocationRelative_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYDETECTEDLOCATIONRELATIVE_1";
			speech[] = {"%4","%2","In","%14"};
		};
	};
	class SentEnemyDetectedGroupCoreRelative
	{
		sentences[] = {"SentEnemyDetectedGroupCoreRelativeDefault","(1-Stealth)","SentEnemyDetectedGroupCoreRelativeStealth","Stealth"};
	};
	class SentEnemyDetectedGroupCoreRelativeDefault
	{
		versions[] = {"SentEnemyDetectedGroupCoreRelative_1",0.2,"SentEnemyDetectedGroupCoreRelative_2",0.2,"SentEnemyDetectedGroupCoreRelative_3",0.2,"SentEnemyDetectedGroupCoreRelative_4",0.2,"SentEnemyDetectedGroupCoreRelative_5",0.2};
		class SentEnemyDetectedGroupCoreRelative_1
		{
			text = "$STR_EP1_SENTENEMYDETECTEDGROUPCORERELATIVE_1";
			speech[] = {"%6.3","%5.101","%4","%2"};
		};
		class SentEnemyDetectedGroupCoreRelative_2
		{
			text = "$STR_EP1_SENTENEMYDETECTEDGROUPCORERELATIVE_2";
			speech[] = {"%4","%2","ToOur","%6.2","%5.3"};
		};
		class SentEnemyDetectedGroupCoreRelative_3
		{
			text = "$STR_EP1_SENTENEMYDETECTEDGROUPCORERELATIVE_3";
			speech[] = {"%4","%2","ToOur","%6.3","%5.3"};
		};
		class SentEnemyDetectedGroupCoreRelative_4
		{
			text = "$STR_EP1_SENTENEMYDETECTEDGROUPCORERELATIVE_4";
			speech[] = {"%4","%2","%5.2","%6.1","Us"};
		};
		class SentEnemyDetectedGroupCoreRelative_5
		{
			text = "$STR_EP1_SENTENEMYDETECTEDGROUPCORERELATIVE_5";
			speech[] = {"%4","%2","%5.2","ToOur","%6.2"};
		};
	};
	class SentEnemyDetectedGroupCoreRelativeStealth
	{
		versions[] = {"SentEnemyDetectedGroupCoreRelative_1",0.2,"SentEnemyDetectedGroupCoreRelative_2",0.2,"SentEnemyDetectedGroupCoreRelative_3",0.2,"SentEnemyDetectedGroupCoreRelative_4",0.2,"SentEnemyDetectedGroupCoreRelative_5",0.2};
		class SentEnemyDetectedGroupCoreRelative_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYDETECTEDGROUPCORERELATIVE_1";
			speech[] = {"%6.3","%5.101","%4","%2"};
		};
		class SentEnemyDetectedGroupCoreRelative_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYDETECTEDGROUPCORERELATIVE_2";
			speech[] = {"%4","%2","ToOur","%6.2","%5.3"};
		};
		class SentEnemyDetectedGroupCoreRelative_3
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYDETECTEDGROUPCORERELATIVE_3";
			speech[] = {"%4","%2","ToOur","%6.3","%5.3"};
		};
		class SentEnemyDetectedGroupCoreRelative_4
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYDETECTEDGROUPCORERELATIVE_4";
			speech[] = {"%4","%2","%5.2","%6.1","Us"};
		};
		class SentEnemyDetectedGroupCoreRelative_5
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYDETECTEDGROUPCORERELATIVE_5";
			speech[] = {"%4","%2","%5.2","ToOur","%6.2"};
		};
	};
	class SentEnemyDetectedOnGridReference
	{
		sentences[] = {"SentEnemyDetectedOnGridReferenceDefault","(1-Stealth)","SentEnemyDetectedOnGridReferenceStealth","Stealth"};
	};
	class SentEnemyDetectedOnGridReferenceDefault
	{
		versions[] = {"SentEnemyDetectedOnGridReference_1",1};
		class SentEnemyDetectedOnGridReference_1
		{
			text = "$STR_EP1_SENTENEMYDETECTEDONGRIDREFERENCE_1";
			speech[] = {"%4","%2","Grid2","%4"};
		};
	};
	class SentEnemyDetectedOnGridReferenceStealth
	{
		versions[] = {"SentEnemyDetectedOnGridReference_1",1};
		class SentEnemyDetectedOnGridReference_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYDETECTEDONGRIDREFERENCE_1";
			speech[] = {"%4","%2","Grid2","%4"};
		};
	};
	class SentCmdMoveGroupRelative
	{
		sentences[] = {"SentCmdMoveGroupRelativeDefault","(1-Stealth)","SentCmdMoveGroupRelativeStealth","Stealth"};
	};
	class SentCmdMoveGroupRelativeDefault
	{
		versions[] = {"SentCmdMoveGroupRelative_1",1};
		class SentCmdMoveGroupRelative_1
		{
			text = "$STR_EP1_SENTCMDMOVEGROUPRELATIVE_1";
			speech[] = {"%1.1","Move","%3.101","%4.2"};
		};
	};
	class SentCmdMoveGroupRelativeStealth
	{
		versions[] = {"SentCmdMoveGroupRelative_1",1};
		class SentCmdMoveGroupRelative_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDMOVEGROUPRELATIVE_1";
			speech[] = {"%1.1","Move","%3.101","%4.2"};
		};
	};
	class SentCmdMoveToGrid
	{
		sentences[] = {"SentCmdMoveToGridDefault","(1-Stealth)","SentCmdMoveToGridStealth","Stealth"};
	};
	class SentCmdMoveToGridDefault
	{
		versions[] = {"SentCmdMoveToGrid_1",0.5,"SentCmdMoveToGrid_2",0.5};
		class SentCmdMoveToGrid_1
		{
			text = "$STR_EP1_SENTCMDMOVETOGRID_1";
			speech[] = {"%1.1","MoveTo","Position","%2"};
		};
		class SentCmdMoveToGrid_2
		{
			text = "$STR_EP1_SENTCMDMOVETOGRID_2";
			speech[] = {"%1.1","GoTo","Grid2","%2"};
		};
	};
	class SentCmdMoveToGridStealth
	{
		versions[] = {"SentCmdMoveToGrid_1",0.5,"SentCmdMoveToGrid_2",0.5};
		class SentCmdMoveToGrid_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDMOVETOGRID_1";
			speech[] = {"%1.1","MoveTo","Position","%2"};
		};
		class SentCmdMoveToGrid_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDMOVETOGRID_2";
			speech[] = {"%1.1","GoTo","Grid2","%2"};
		};
	};
	class SentCmdMoveRecipientsRelative
	{
		sentences[] = {"SentCmdMoveRecipientsRelativeDefault","(1-Stealth)","SentCmdMoveRecipientsRelativeStealth","Stealth"};
	};
	class SentCmdMoveRecipientsRelativeDefault
	{
		versions[] = {"SentCmdMoveRecipientsRelative_1",1};
		class SentCmdMoveRecipientsRelative_1
		{
			text = "$STR_EP1_SENTCMDMOVERECIPIENTSRELATIVE_1";
			speech[] = {"%1.1","Move","%10.101","%11.101"};
		};
	};
	class SentCmdMoveRecipientsRelativeStealth
	{
		versions[] = {"SentCmdMoveRecipientsRelative_1",1};
		class SentCmdMoveRecipientsRelative_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDMOVERECIPIENTSRELATIVE_1";
			speech[] = {"%1.1","Move","%10.101","%11.101"};
		};
	};
	class SentCmdMoveToObject
	{
		sentences[] = {"SentCmdMoveToObjectDefault","(1-Stealth)","SentCmdMoveToObjectStealth","Stealth"};
	};
	class SentCmdMoveToObjectDefault
	{
		versions[] = {"SentCmdMoveToObject_1",0.5,"SentCmdMoveToObject_2",0.5};
		class SentCmdMoveToObject_1
		{
			text = "$STR_EP1_SENTCMDMOVETOOBJECT_1";
			speech[] = {"%1.1","MoveTo","%8"};
		};
		class SentCmdMoveToObject_2
		{
			text = "$STR_EP1_SENTCMDMOVETOOBJECT_2";
			speech[] = {"%1.1","GoTo","%8","%9.2","Us"};
		};
	};
	class SentCmdMoveToObjectStealth
	{
		versions[] = {"SentCmdMoveToObject_1",0.5,"SentCmdMoveToObject_2",0.5};
		class SentCmdMoveToObject_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDMOVETOOBJECT_1";
			speech[] = {"%1.1","MoveTo","%8"};
		};
		class SentCmdMoveToObject_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDMOVETOOBJECT_2";
			speech[] = {"%1.1","GoTo","%8","%9.2","Us"};
		};
	};
	class SentCmdMoveLocationRelative
	{
		sentences[] = {"SentCmdMoveLocationRelativeDefault","(1-Stealth)","SentCmdMoveLocationRelativeStealth","Stealth"};
	};
	class SentCmdMoveLocationRelativeDefault
	{
		versions[] = {"SentCmdMoveLocationRelative_1",0.5,"SentCmdMoveLocationRelative_2",0.5};
		class SentCmdMoveLocationRelative_1
		{
			text = "$STR_EP1_SENTCMDMOVELOCATIONRELATIVE_1";
			speech[] = {"%1.1","Move","%5.101","%6","FromLocation","%7"};
		};
		class SentCmdMoveLocationRelative_2
		{
			text = "$STR_EP1_SENTCMDMOVELOCATIONRELATIVE_2";
			speech[] = {"%1.1","MoveTo","Direction","%7"};
		};
	};
	class SentCmdMoveLocationRelativeStealth
	{
		versions[] = {"SentCmdMoveLocationRelative_1",0.5,"SentCmdMoveLocationRelative_2",0.5};
		class SentCmdMoveLocationRelative_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDMOVELOCATIONRELATIVE_1";
			speech[] = {"%1.1","Move","%5.101","%6","FromLocation","%7"};
		};
		class SentCmdMoveLocationRelative_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDMOVELOCATIONRELATIVE_2";
			speech[] = {"%1.1","MoveTo","Direction","%7"};
		};
	};
	class VehicleMoveGroupRelative
	{
		sentences[] = {"VehicleMoveGroupRelativeDefault","(1-Stealth)","VehicleMoveGroupRelativeStealth","Stealth"};
	};
	class VehicleMoveGroupRelativeDefault
	{
		versions[] = {"VehicleMoveGroupRelative_1",1};
		class VehicleMoveGroupRelative_1
		{
			text = "$STR_EP1_VEHICLEMOVEGROUPRELATIVE_1";
			speech[] = {"XMIT","MoveTo","%2.101","%3.2","Us"};
		};
	};
	class VehicleMoveGroupRelativeStealth
	{
		versions[] = {"VehicleMoveGroupRelative_1",1};
		class VehicleMoveGroupRelative_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_VEHICLEMOVEGROUPRELATIVE_1";
			speech[] = {"XMIT","MoveTo","%2.101","%3.2","Us"};
		};
	};
	class VehicleMoveToGrid
	{
		sentences[] = {"VehicleMoveToGridDefault","(1-Stealth)","VehicleMoveToGridStealth","Stealth"};
	};
	class VehicleMoveToGridDefault
	{
		versions[] = {"VehicleMoveToGrid_1",0.5,"VehicleMoveToGrid_2",0.5};
		class VehicleMoveToGrid_1
		{
			text = "$STR_EP1_VEHICLEMOVETOGRID_1";
			speech[] = {"XMIT","MoveTo","Position","%1"};
		};
		class VehicleMoveToGrid_2
		{
			text = "$STR_EP1_VEHICLEMOVETOGRID_2";
			speech[] = {"XMIT","Move","Grid2","%1"};
		};
	};
	class VehicleMoveToGridStealth
	{
		versions[] = {"VehicleMoveToGrid_1",0.5,"VehicleMoveToGrid_2",0.5};
		class VehicleMoveToGrid_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_VEHICLEMOVETOGRID_1";
			speech[] = {"XMIT","MoveTo","Position","%1"};
		};
		class VehicleMoveToGrid_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_VEHICLEMOVETOGRID_2";
			speech[] = {"XMIT","Move","Grid2","%1"};
		};
	};
	class VehicleMoveRecipientsRelative
	{
		sentences[] = {"VehicleMoveRecipientsRelativeDefault","(1-Stealth)","VehicleMoveRecipientsRelativeStealth","Stealth"};
	};
	class VehicleMoveRecipientsRelativeDefault
	{
		versions[] = {"VehicleMoveRecipientsRelative_1",1};
		class VehicleMoveRecipientsRelative_1
		{
			text = "$STR_EP1_VEHICLEMOVERECIPIENTSRELATIVE_1";
			speech[] = {"XMIT","Move","%9.101","%10.101"};
		};
	};
	class VehicleMoveRecipientsRelativeStealth
	{
		versions[] = {"VehicleMoveRecipientsRelative_1",1};
		class VehicleMoveRecipientsRelative_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_VEHICLEMOVERECIPIENTSRELATIVE_1";
			speech[] = {"XMIT","Move","%9.101","%10.101"};
		};
	};
	class VehicleMoveToObject
	{
		sentences[] = {"VehicleMoveToObjectDefault","(1-Stealth)","VehicleMoveToObjectStealth","Stealth"};
	};
	class VehicleMoveToObjectDefault
	{
		versions[] = {"VehicleMoveToObject_1",0.5,"VehicleMoveToObject_2",0.5};
		class VehicleMoveToObject_1
		{
			text = "$STR_EP1_VEHICLEMOVETOOBJECT_1";
			speech[] = {"XMIT","Move","%7"};
		};
		class VehicleMoveToObject_2
		{
			text = "$STR_EP1_VEHICLEMOVETOOBJECT_2";
			speech[] = {"XMIT","MoveTo","%7","%8.2","Us"};
		};
	};
	class VehicleMoveToObjectStealth
	{
		versions[] = {"VehicleMoveToObject_1",0.5,"VehicleMoveToObject_2",0.5};
		class VehicleMoveToObject_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_VEHICLEMOVETOOBJECT_1";
			speech[] = {"XMIT","Move","%7"};
		};
		class VehicleMoveToObject_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_VEHICLEMOVETOOBJECT_2";
			speech[] = {"XMIT","MoveTo","%7","%8.2","Us"};
		};
	};
	class VehicleMoveLocationRelative
	{
		sentences[] = {"VehicleMoveLocationRelativeDefault","(1-Stealth)","VehicleMoveLocationRelativeStealth","Stealth"};
	};
	class VehicleMoveLocationRelativeDefault
	{
		versions[] = {"VehicleMoveLocationRelative_1",0.5,"VehicleMoveLocationRelative_2",0.5};
		class VehicleMoveLocationRelative_1
		{
			text = "$STR_EP1_VEHICLEMOVELOCATIONRELATIVE_1";
			speech[] = {"XMIT","Move","%4.101","%5","FromLocation","%6"};
		};
		class VehicleMoveLocationRelative_2
		{
			text = "$STR_EP1_VEHICLEMOVELOCATIONRELATIVE_2";
			speech[] = {"XMIT","MoveTo","Direction","%6"};
		};
	};
	class VehicleMoveLocationRelativeStealth
	{
		versions[] = {"VehicleMoveLocationRelative_1",0.5,"VehicleMoveLocationRelative_2",0.5};
		class VehicleMoveLocationRelative_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_VEHICLEMOVELOCATIONRELATIVE_1";
			speech[] = {"XMIT","Move","%4.101","%5","FromLocation","%6"};
		};
		class VehicleMoveLocationRelative_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_VEHICLEMOVELOCATIONRELATIVE_2";
			speech[] = {"XMIT","MoveTo","Direction","%6"};
		};
	};
	class SentEnemyToOur
	{
		sentences[] = {"SentEnemyToOurDefault","(1-Stealth)","SentEnemyToOurStealth","Stealth"};
	};
	class SentEnemyToOurDefault
	{
		versions[] = {"SentEnemyToOur_1",0.2,"SentEnemyToOur_2",0.2,"SentEnemyToOur_3",0.2,"SentEnemyToOur_4",0.2,"SentEnemyToOur_5",0.2};
		class SentEnemyToOur_1
		{
			text = "$STR_EP1_SENTENEMYTOOUR_1";
			speech[] = {"%16.202","%4","%2","%15.3"};
		};
		class SentEnemyToOur_2
		{
			text = "$STR_EP1_SENTENEMYTOOUR_2";
			speech[] = {"%16.202","%4","%2","%15.101"};
		};
		class SentEnemyToOur_3
		{
			text = "$STR_EP1_SENTENEMYTOOUR_3";
			speech[] = {"%16.202","%4","%15.101"};
		};
		class SentEnemyToOur_4
		{
			text = "$STR_EP1_SENTENEMYTOOUR_4";
			speech[] = {"%4","%2","%16.202","%15.101"};
		};
		class SentEnemyToOur_5
		{
			text = "$STR_EP1_SENTENEMYTOOUR_5";
			speech[] = {"%4","%2","%6.2","%5.101"};
		};
	};
	class SentEnemyToOurStealth
	{
		versions[] = {"SentEnemyToOur_1",0.2,"SentEnemyToOur_2",0.2,"SentEnemyToOur_3",0.2,"SentEnemyToOur_4",0.2,"SentEnemyToOur_5",0.2};
		class SentEnemyToOur_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYTOOUR_1";
			speech[] = {"%16.202","%4","%2","%15.3"};
		};
		class SentEnemyToOur_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYTOOUR_2";
			speech[] = {"%16.202","%4","%2","%15.101"};
		};
		class SentEnemyToOur_3
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYTOOUR_3";
			speech[] = {"%16.202","%4","%15.3"};
		};
		class SentEnemyToOur_4
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYTOOUR_4";
			speech[] = {"%4","%2","%16.202","%15.101"};
		};
		class SentEnemyToOur_5
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYTOOUR_5";
			speech[] = {"%4","%2","%6.2","%5.101"};
		};
	};
	class SentEnemyOnGrid
	{
		sentences[] = {"SentEnemyOnGridDefault","(1-Stealth)","SentEnemyOnGridStealth","Stealth"};
	};
	class SentEnemyOnGridDefault
	{
		versions[] = {"SentEnemyOnGrid_1",0.33,"SentEnemyOnGrid_2",0.33,"SentEnemyOnGrid_3",0.33};
		class SentEnemyOnGrid_1
		{
			text = "$STR_EP1_SENTENEMYONGRID_1";
			speech[] = {"%4","%2","Position","%3"};
		};
		class SentEnemyOnGrid_2
		{
			text = "$STR_EP1_SENTENEMYONGRID_2";
			speech[] = {"%4","%2","Grid","%3"};
		};
		class SentEnemyOnGrid_3
		{
			text = "$STR_EP1_SENTENEMYONGRID_3";
			speech[] = {"%3","%4","%2"};
		};
	};
	class SentEnemyOnGridStealth
	{
		versions[] = {"SentEnemyOnGrid_1",0.33,"SentEnemyOnGrid_2",0.33,"SentEnemyOnGrid_3",0.33};
		class SentEnemyOnGrid_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYONGRID_1";
			speech[] = {"%4","%2","Position","%3"};
		};
		class SentEnemyOnGrid_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYONGRID_2";
			speech[] = {"%4","%2","Grid","%3"};
		};
		class SentEnemyOnGrid_3
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENEMYONGRID_3";
			speech[] = {"%3","%4","%2"};
		};
	};
	class SentCmdMoveToOur
	{
		sentences[] = {"SentCmdMoveToOurDefault","(1-Stealth)","SentCmdMoveToOurStealth","Stealth"};
	};
	class SentCmdMoveToOurDefault
	{
		versions[] = {"SentCmdMoveToOur_1",0.5,"SentCmdMoveToOur_2",0.5};
		class SentCmdMoveToOur_1
		{
			text = "$STR_EP1_SENTCMDMOVETOOUR_1";
			speech[] = {"%1.1","Move","%12.101","%13.202"};
		};
		class SentCmdMoveToOur_2
		{
			text = "$STR_EP1_SENTCMDMOVETOOUR_2";
			speech[] = {"%1.1","Move","%12.101","%13.202"};
		};
	};
	class SentCmdMoveToOurStealth
	{
		versions[] = {"SentCmdMoveToOur_1",0.5,"SentCmdMoveToOur_2",0.5};
		class SentCmdMoveToOur_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDMOVETOOUR_1";
			speech[] = {"%1.1","Move","%12.101","%13.202"};
		};
		class SentCmdMoveToOur_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDMOVETOOUR_2";
			speech[] = {"%1.1","Move","%12.101","%13.202"};
		};
	};
	class SentCmdMoveNearObject
	{
		sentences[] = {"SentCmdMoveNearObjectDefault","(1-Stealth)","SentCmdMoveNearObjectStealth","Stealth"};
	};
	class SentCmdMoveNearObjectDefault
	{
		versions[] = {"SentCmdMoveNearObject_1",0.5,"SentCmdMoveNearObject_2",0.5};
		class SentCmdMoveNearObject_1
		{
			text = "$STR_EP1_SENTCMDMOVENEAROBJECT_1";
			speech[] = {"%1.1","MoveTo","%8","%13.202"};
		};
		class SentCmdMoveNearObject_2
		{
			text = "$STR_EP1_SENTCMDMOVENEAROBJECT_2";
			speech[] = {"%1.1","MoveTo","%8","%13.202"};
		};
	};
	class SentCmdMoveNearObjectStealth
	{
		versions[] = {"SentCmdMoveNearObject_1",0.5,"SentCmdMoveNearObject_2",0.5};
		class SentCmdMoveNearObject_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDMOVENEAROBJECT_1";
			speech[] = {"%1.1","MoveTo","%8","%13.202"};
		};
		class SentCmdMoveNearObject_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDMOVENEAROBJECT_2";
			speech[] = {"%1.1","MoveTo","%8","%13.202"};
		};
	};
	class SentCmdMoveToGridPos
	{
		sentences[] = {"SentCmdMoveToGridPosDefault","(1-Stealth)","SentCmdMoveToGridPosStealth","Stealth"};
	};
	class SentCmdMoveToGridPosDefault
	{
		versions[] = {"SentCmdMoveToGridPos_1",1};
		class SentCmdMoveToGridPos_1
		{
			text = "$STR_EP1_SENTCMDMOVETOGRIDPOS_1";
			speech[] = {"%1.1","MoveToPosition","%2"};
		};
	};
	class SentCmdMoveToGridPosStealth
	{
		versions[] = {"SentCmdMoveToGridPos_1",1};
		class SentCmdMoveToGridPos_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDMOVETOGRIDPOS_1";
			speech[] = {"%1.1","MoveToPosition","%2"};
		};
	};
	class SentUnitKilled
	{
		sentences[] = {"SentUnitKilledDefault","(1-Stealth)","SentUnitKilledStealth","Stealth"};
	};
	class SentUnitKilledDefault
	{
		versions[] = {"SentUnitKilled_1",0.33,"SentUnitKilled_2",0.33,"SentUnitKilled_3",0.33};
		class SentUnitKilled_1
		{
			text = "$STR_EP1_SENTUNITKILLED_1";
			speech[] = {"%1.1","IsDownE"};
		};
		class SentUnitKilled_2
		{
			gesture = "gestureGo";
			text = "$STR_EP1_SENTUNITKILLED_2";
			speech[] = {"WeLost","%1.1"};
		};
		class SentUnitKilled_3
		{
			text = "$STR_EP1_SENTUNITKILLED_3";
			speech[] = {"%1.1","IsDead"};
		};
	};
	class SentUnitKilledStealth
	{
		versions[] = {"SentUnitKilled_1",0.5,"SentUnitKilled_2",0.5,"SentUnitKilled_3",0};
		class SentUnitKilled_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTUNITKILLED_1";
			speech[] = {"%1.1","IsDownE"};
		};
		class SentUnitKilled_2
		{
			wordsClass = "StealthWords";
			gesture = "gestureGo";
			text = "$STR_EP1_SENTUNITKILLED_2";
			speech[] = {"WeLost","%1.1"};
		};
		class SentUnitKilled_3
		{
			text = "$STR_EP1_SENTUNITKILLED_3";
			speech[] = {"%1.1","IsDead"};
		};
	};
	class SentSupportAskHeal
	{
		sentences[] = {"SentSupportAskHealDefault","(1-Stealth)","SentSupportAskHealStealth","Stealth"};
	};
	class SentSupportAskHealDefault
	{
		versions[] = {"SentSupportAskHeal_1",1};
		class SentSupportAskHeal_1
		{
			text = "$STR_EP1_SENTSUPPORTASKHEAL_1";
			speech[] = {"RequestingSupportTo","%1","Over"};
		};
	};
	class SentSupportAskHealStealth
	{
		versions[] = {"SentSupportAskHeal_1",1};
		class SentSupportAskHeal_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTSUPPORTASKHEAL_1";
			speech[] = {"RequestingSupportTo","%1","Over"};
		};
	};
	class SentSupportAskRepair
	{
		sentences[] = {"SentSupportAskRepairDefault","(1-Stealth)","SentSupportAskRepairStealth","Stealth"};
	};
	class SentSupportAskRepairDefault
	{
		versions[] = {"SentSupportAskRepair_1",1};
		class SentSupportAskRepair_1
		{
			text = "$STR_EP1_SENTSUPPORTASKREPAIR_1";
			speech[] = {"RequestingSupportTo","%1","Over"};
		};
	};
	class SentSupportAskRepairStealth
	{
		versions[] = {"SentSupportAskRepair_1",1};
		class SentSupportAskRepair_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTSUPPORTASKREPAIR_1";
			speech[] = {"RequestingSupportTo","%1","Over"};
		};
	};
	class SentSupportAskRefuel
	{
		sentences[] = {"SentSupportAskRefuelDefault","(1-Stealth)","SentSupportAskRefuelStealth","Stealth"};
	};
	class SentSupportAskRefuelDefault
	{
		versions[] = {"SentSupportAskRefuel_1",1};
		class SentSupportAskRefuel_1
		{
			text = "$STR_EP1_SENTSUPPORTASKREFUEL_1";
			speech[] = {"RequestingSupportTo","%1","Over"};
		};
	};
	class SentSupportAskRefuelStealth
	{
		versions[] = {"SentSupportAskRefuel_1",1};
		class SentSupportAskRefuel_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTSUPPORTASKREFUEL_1";
			speech[] = {"RequestingSupportTo","%1","Over"};
		};
	};
	class SentSupportAskRearm
	{
		sentences[] = {"SentSupportAskRearmDefault","(1-Stealth)","SentSupportAskRearmStealth","Stealth"};
	};
	class SentSupportAskRearmDefault
	{
		versions[] = {"SentSupportAskRearm_1",1};
		class SentSupportAskRearm_1
		{
			text = "$STR_EP1_SENTSUPPORTASKREARM_1";
			speech[] = {"RequestingSupportTo","%1","Over"};
		};
	};
	class SentSupportAskRearmStealth
	{
		versions[] = {"SentSupportAskRearm_1",1};
		class SentSupportAskRearm_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTSUPPORTASKREARM_1";
			speech[] = {"RequestingSupportTo","%1","Over"};
		};
	};
	class SentSupportConfirm
	{
		sentences[] = {"SentSupportConfirmDefault","(1-Stealth)","SentSupportConfirmStealth","Stealth"};
	};
	class SentSupportConfirmDefault
	{
		versions[] = {"SentSupportConfirm_1",0.33,"SentSupportConfirm_2",0.33,"SentSupportConfirm_3",0.33};
		class SentSupportConfirm_1
		{
			text = "$STR_EP1_SENTSUPPORTCONFIRM_1";
			speech[] = {"Roger"};
		};
		class SentSupportConfirm_2
		{
			text = "$STR_EP1_SENTSUPPORTCONFIRM_2";
			speech[] = {"Copy"};
		};
		class SentSupportConfirm_3
		{
			text = "$STR_EP1_SENTSUPPORTCONFIRM_3";
			speech[] = {"OscarMike"};
		};
	};
	class SentSupportConfirmStealth
	{
		versions[] = {"SentSupportConfirm_1",0.33,"SentSupportConfirm_2",0.33,"SentSupportConfirm_3",0.33};
		class SentSupportConfirm_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTSUPPORTCONFIRM_1";
			speech[] = {"Roger"};
		};
		class SentSupportConfirm_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTSUPPORTCONFIRM_2";
			speech[] = {"Copy"};
		};
		class SentSupportConfirm_3
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTSUPPORTCONFIRM_3";
			speech[] = {"OscarMike"};
		};
	};
	class SentSupportReady
	{
		sentences[] = {"SentSupportReadyDefault","(1-Stealth)","SentSupportReadyStealth","Stealth"};
	};
	class SentSupportReadyDefault
	{
		versions[] = {"SentSupportReady_1",1};
		class SentSupportReady_1
		{
			text = "$STR_EP1_SENTSUPPORTREADY_1";
			speech[] = {"Ready"};
		};
	};
	class SentSupportReadyStealth
	{
		versions[] = {"SentSupportReady_1",1};
		class SentSupportReady_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTSUPPORTREADY_1";
			speech[] = {"Ready"};
		};
	};
	class SentSupportDone
	{
		sentences[] = {"SentSupportDoneDefault","(1-Stealth)","SentSupportDoneStealth","Stealth"};
	};
	class SentSupportDoneDefault
	{
		versions[] = {"SentSupportDone_1",1};
		class SentSupportDone_1
		{
			text = "$STR_EP1_SENTSUPPORTDONE_1";
			speech[] = {"Ready"};
		};
	};
	class SentSupportDoneStealth
	{
		versions[] = {"SentSupportDone_1",1};
		class SentSupportDone_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTSUPPORTDONE_1";
			speech[] = {"Ready"};
		};
	};
	class SentSupportNotAvailable
	{
		sentences[] = {"SentSupportNotAvailableDefault","(1-Stealth)","SentSupportNotAvailableStealth","Stealth"};
	};
	class SentSupportNotAvailableDefault
	{
		versions[] = {"SentSupportNotAvailable_1",1};
		class SentSupportNotAvailable_1
		{
			text = "$STR_EP1_SENTSUPPORTNOTAVAILABLE_1";
			speech[] = {"Negative"};
		};
	};
	class SentSupportNotAvailableStealth
	{
		versions[] = {"SentSupportNotAvailable_1",1};
		class SentSupportNotAvailable_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTSUPPORTNOTAVAILABLE_1";
			speech[] = {"Negative"};
		};
	};
	class SentHealthCritical
	{
		sentences[] = {"SentHealthCriticalDefault","(1-Stealth)","SentHealthCriticalStealth","Stealth"};
	};
	class SentHealthCriticalDefault
	{
		versions[] = {"SentHealthCritical_1",0.2,"SentHealthCritical_2",0.2,"SentHealthCritical_3",0.2,"SentHealthCritical_4",0.2,"SentHealthCritical_5",0.2};
		class SentHealthCritical_1
		{
			text = "$STR_EP1_SENTHEALTHCRITICAL_1";
			speech[] = {"Injured"};
		};
		class SentHealthCritical_2
		{
			text = "$STR_EP1_SENTHEALTHCRITICAL_2";
			speech[] = {"SomebodyHelpMeE"};
		};
		class SentHealthCritical_3
		{
			text = "$STR_EP1_SENTHEALTHCRITICAL_3";
			speech[] = {"NeedHelpE"};
		};
		class SentHealthCritical_4
		{
			text = "$STR_EP1_SENTHEALTHCRITICAL_4";
			speech[] = {"WoundedE"};
		};
		class SentHealthCritical_5
		{
			text = "$STR_EP1_SENTHEALTHCRITICAL_5";
			speech[] = {"MedicE"};
		};
	};
	class SentHealthCriticalStealth
	{
		versions[] = {"SentHealthCritical_1",0.25,"SentHealthCritical_2",0,"SentHealthCritical_3",0.25,"SentHealthCritical_4",0.25,"SentHealthCritical_5",0.25};
		class SentHealthCritical_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTHEALTHCRITICAL_1";
			speech[] = {"Injured"};
		};
		class SentHealthCritical_2
		{
			text = "$STR_EP1_SENTHEALTHCRITICAL_2";
			speech[] = {"SomebodyHelpMeE"};
		};
		class SentHealthCritical_3
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTHEALTHCRITICAL_3";
			speech[] = {"NeedHelpE"};
		};
		class SentHealthCritical_4
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTHEALTHCRITICAL_4";
			speech[] = {"WoundedE"};
		};
		class SentHealthCritical_5
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTHEALTHCRITICAL_5";
			speech[] = {"MedicE"};
		};
	};
	class SentDammageCritical
	{
		sentences[] = {"SentDammageCriticalDefault","(1-Stealth)","SentDammageCriticalStealth","Stealth"};
	};
	class SentDammageCriticalDefault
	{
		versions[] = {"SentDammageCritical_1",0.5,"SentDammageCritical_2",0.5};
		class SentDammageCritical_1
		{
			text = "$STR_EP1_SENTDAMMAGECRITICAL_1";
			speech[] = {"StatusRedE"};
		};
		class SentDammageCritical_2
		{
			text = "$STR_EP1_SENTDAMMAGECRITICAL_2";
			speech[] = {"CriticalDamageE"};
		};
	};
	class SentDammageCriticalStealth
	{
		versions[] = {"SentDammageCritical_1",1,"SentDammageCritical_2",0};
		class SentDammageCritical_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTDAMMAGECRITICAL_1";
			speech[] = {"StatusRedE"};
		};
		class SentDammageCritical_2
		{
			text = "$STR_EP1_SENTDAMMAGECRITICAL_2";
			speech[] = {"CriticalDamageE"};
		};
	};
	class SentFuelCritical
	{
		sentences[] = {"SentFuelCriticalDefault",1};
	};
	class SentFuelCriticalDefault
	{
		versions[] = {"SentFuelCritical_1",0.5,"SentFuelCritical_2",0.5};
		class SentFuelCritical_1
		{
			text = "$STR_EP1_SENTFUELCRITICAL_1";
			speech[] = {"BeAdvised","OutOfFuelE"};
		};
		class SentFuelCritical_2
		{
			text = "$STR_EP1_SENTFUELCRITICAL_2";
			speech[] = {"RunningOutOfFuel"};
		};
	};
	class SentFuelLow
	{
		sentences[] = {"SentFuelLowDefault",1};
	};
	class SentFuelLowDefault
	{
		versions[] = {"SentFuelLow_1",0.5,"SentFuelLow_2",0.5};
		class SentFuelLow_1
		{
			text = "$STR_EP1_SENTFUELLOW_1";
			speech[] = {"OutOfFuelE"};
		};
		class SentFuelLow_2
		{
			text = "$STR_EP1_SENTFUELLOW_2";
			speech[] = {"BingoFuel"};
		};
	};
	class SentAmmoCritical
	{
		sentences[] = {"SentAmmoCriticalDefault","(1-Stealth)","SentAmmoCriticalStealth","Stealth"};
	};
	class SentAmmoCriticalDefault
	{
		versions[] = {"SentAmmoCritical_1",0.33,"SentAmmoCritical_2",0.33,"SentAmmoCritical_3",0.33};
		class SentAmmoCritical_1
		{
			text = "$STR_EP1_SENTAMMOCRITICAL_1";
			speech[] = {"OutOfAmmoE"};
		};
		class SentAmmoCritical_2
		{
			text = "$STR_EP1_SENTAMMOCRITICAL_2";
			speech[] = {"NoMoreAmmoE"};
		};
		class SentAmmoCritical_3
		{
			text = "$STR_EP1_SENTAMMOCRITICAL_3";
			speech[] = {"CantShoot"};
		};
	};
	class SentAmmoCriticalStealth
	{
		versions[] = {"SentAmmoCritical_1",1,"SentAmmoCritical_2",0,"SentAmmoCritical_3",0};
		class SentAmmoCritical_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTAMMOCRITICAL_1";
			speech[] = {"OutOfAmmoE"};
		};
		class SentAmmoCritical_2
		{
			text = "$STR_EP1_SENTAMMOCRITICAL_2";
			speech[] = {"NoMoreAmmoE"};
		};
		class SentAmmoCritical_3
		{
			text = "$STR_EP1_SENTAMMOCRITICAL_3";
			speech[] = {"CantShoot"};
		};
	};
	class SentAmmoLow
	{
		sentences[] = {"SentAmmoLowDefault","(1-Stealth)","SentAmmoLowStealth","Stealth"};
	};
	class SentAmmoLowDefault
	{
		versions[] = {"SentAmmoLow_1",1};
		class SentAmmoLow_1
		{
			text = "$STR_EP1_SENTAMMOLOW_1";
			speech[] = {"RunningOutOfAmmo"};
		};
	};
	class SentAmmoLowStealth
	{
		versions[] = {"SentAmmoLow_1",1};
		class SentAmmoLow_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTAMMOLOW_1";
			speech[] = {"RunningOutOfAmmo"};
		};
	};
	class SentReportPosition
	{
		sentences[] = {"SentReportPositionDefault","(1-Stealth)","SentReportPositionStealth","Stealth"};
	};
	class SentReportPositionDefault
	{
		versions[] = {"SentReportPosition_1",1};
		class SentReportPosition_1
		{
			text = "$STR_EP1_SENTREPORTPOSITION_1";
			speech[] = {"ImAtGrid","%2"};
		};
	};
	class SentReportPositionStealth
	{
		versions[] = {"SentReportPosition_1",1};
		class SentReportPosition_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTREPORTPOSITION_1";
			speech[] = {"ImAtGrid","%2"};
		};
	};
	class SentIsLeader
	{
		sentences[] = {"SentIsLeaderDefault","(1-Stealth)","SentIsLeaderStealth","Stealth"};
	};
	class SentIsLeaderDefault
	{
		versions[] = {"SentIsLeader_1",0.5,"SentIsLeader_2",0.5};
		class SentIsLeader_1
		{
			text = "$STR_EP1_SENTISLEADER_1";
			speech[] = {"%1","ImTheNewActual"};
		};
		class SentIsLeader_2
		{
			text = "$STR_EP1_SENTISLEADER_2";
			speech[] = {"%1","TakingCommand"};
		};
	};
	class SentIsLeaderStealth
	{
		versions[] = {"SentIsLeader_1",0,"SentIsLeader_2",1};
		class SentIsLeader_1
		{
			text = "$STR_EP1_SENTISLEADER_1";
			speech[] = {"%1","ImTheNewActual"};
		};
		class SentIsLeader_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTISLEADER_2";
			speech[] = {"%1","TakingCommand"};
		};
	};
	class SentCommandCompleted
	{
		sentences[] = {"SentCommandCompletedDefault","(1-Stealth)","SentCommandCompletedStealth","Stealth"};
	};
	class SentCommandCompletedDefault
	{
		versions[] = {"SentCommandCompleted_1",0.33,"SentCommandCompleted_2",0.33,"SentCommandCompleted_3",0.33};
		class SentCommandCompleted_1
		{
			text = "$STR_EP1_SENTCOMMANDCOMPLETED_1";
			speech[] = {"Ready"};
		};
		class SentCommandCompleted_2
		{
			text = "$STR_EP1_SENTCOMMANDCOMPLETED_2";
			speech[] = {"Waiting"};
		};
		class SentCommandCompleted_3
		{
			text = "$STR_EP1_SENTCOMMANDCOMPLETED_3";
			speech[] = {"StandingBy"};
		};
	};
	class SentCommandCompletedStealth
	{
		versions[] = {"SentCommandCompleted_1",0.33,"SentCommandCompleted_2",0.33,"SentCommandCompleted_3",0.33};
		class SentCommandCompleted_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCOMMANDCOMPLETED_1";
			speech[] = {"Ready"};
		};
		class SentCommandCompleted_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCOMMANDCOMPLETED_2";
			speech[] = {"Waiting"};
		};
		class SentCommandCompleted_3
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCOMMANDCOMPLETED_3";
			speech[] = {"StandingBy"};
		};
	};
	class SentJoinCompleted
	{
		sentences[] = {"SentJoinCompletedDefault","(1-Stealth)","SentJoinCompletedStealth","Stealth"};
	};
	class SentJoinCompletedDefault
	{
		versions[] = {"SentJoinCompleted_1",1};
		class SentJoinCompleted_1
		{
			text = "$STR_EP1_SENTJOINCOMPLETED_1";
			speech[] = {"Ready"};
		};
	};
	class SentJoinCompletedStealth
	{
		versions[] = {"SentJoinCompleted_1",1};
		class SentJoinCompleted_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTJOINCOMPLETED_1";
			speech[] = {"Ready"};
		};
	};
	class SentFireReady
	{
		sentences[] = {"SentFireReadyDefault","(1-Stealth)","SentFireReadyStealth","Stealth"};
	};
	class SentFireReadyDefault
	{
		versions[] = {"SentFireReady_1",0.25,"SentFireReady_2",0.25,"SentFireReady_3",0.25,"SentFireReady_4",0.25};
		class SentFireReady_1
		{
			text = "$STR_EP1_SENTFIREREADY_1";
			speech[] = {"ReadyToFire"};
		};
		class SentFireReady_2
		{
			text = "$STR_EP1_SENTFIREREADY_2";
			speech[] = {"TargetInSight"};
		};
		class SentFireReady_3
		{
			text = "$STR_EP1_SENTFIREREADY_3";
			speech[] = {"TargetAcquired"};
		};
		class SentFireReady_4
		{
			text = "$STR_EP1_SENTFIREREADY_4";
			speech[] = {"EyesOnTarget"};
		};
	};
	class SentFireReadyStealth
	{
		versions[] = {"SentFireReady_1",0.33,"SentFireReady_2",0.33,"SentFireReady_3",0,"SentFireReady_4",0.33};
		class SentFireReady_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFIREREADY_1";
			speech[] = {"ReadyToFire"};
		};
		class SentFireReady_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFIREREADY_2";
			speech[] = {"TargetInSight"};
		};
		class SentFireReady_3
		{
			text = "$STR_EP1_SENTFIREREADY_3";
			speech[] = {"TargetAcquired"};
		};
		class SentFireReady_4
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFIREREADY_4";
			speech[] = {"EyesOnTarget"};
		};
	};
	class SentFireNegative
	{
		sentences[] = {"SentFireNegativeDefault","(1-Stealth)","SentFireNegativeStealth","Stealth"};
	};
	class SentFireNegativeDefault
	{
		versions[] = {"SentFireNegative_1",1};
		class SentFireNegative_1
		{
			text = "$STR_EP1_SENTFIRENEGATIVE_1";
			speech[] = {"CannotFire"};
		};
	};
	class SentFireNegativeStealth
	{
		versions[] = {"SentFireNegative_1",1};
		class SentFireNegative_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFIRENEGATIVE_1";
			speech[] = {"CannotFire"};
		};
	};
	class SentCommandFailed
	{
		sentences[] = {"SentCommandFailedDefault","(1-Stealth)","SentCommandFailedStealth","Stealth"};
	};
	class SentCommandFailedDefault
	{
		versions[] = {"SentCommandFailed_1",0.5,"SentCommandFailed_2",0.5};
		class SentCommandFailed_1
		{
			text = "$STR_EP1_SENTCOMMANDFAILED_1";
			speech[] = {"Negative"};
		};
		class SentCommandFailed_2
		{
			text = "$STR_EP1_SENTCOMMANDFAILED_2";
			speech[] = {"NoCanDo"};
		};
	};
	class SentCommandFailedStealth
	{
		versions[] = {"SentCommandFailed_1",0.5,"SentCommandFailed_2",0.5};
		class SentCommandFailed_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCOMMANDFAILED_1";
			speech[] = {"Negative"};
		};
		class SentCommandFailed_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCOMMANDFAILED_2";
			speech[] = {"NoCanDo"};
		};
	};
	class SentDestinationUnreacheable
	{
		sentences[] = {"SentDestinationUnreacheableDefault","(1-Stealth)","SentDestinationUnreacheableStealth","Stealth"};
	};
	class SentDestinationUnreacheableDefault
	{
		versions[] = {"SentDestinationUnreacheable_1",0.5,"SentDestinationUnreacheable_2",0.5};
		class SentDestinationUnreacheable_1
		{
			text = "$STR_EP1_SENTDESTINATIONUNREACHEABLE_1";
			speech[] = {"CantGetThereE"};
		};
		class SentDestinationUnreacheable_2
		{
			text = "$STR_EP1_SENTDESTINATIONUNREACHEABLE_2";
			speech[] = {"CantMakeItThere"};
		};
	};
	class SentDestinationUnreacheableStealth
	{
		versions[] = {"SentDestinationUnreacheable_1",1,"SentDestinationUnreacheable_2",0};
		class SentDestinationUnreacheable_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTDESTINATIONUNREACHEABLE_1";
			speech[] = {"CantGetThereE"};
		};
		class SentDestinationUnreacheable_2
		{
			text = "$STR_EP1_SENTDESTINATIONUNREACHEABLE_2";
			speech[] = {"CantMakeItThere"};
		};
	};
	class SentObjectDestroyed
	{
		sentences[] = {"SentObjectDestroyedDefault","(1-Stealth)","SentObjectDestroyedStealth","Stealth"};
	};
	class SentObjectDestroyedDefault
	{
		versions[] = {"SentObjectDestroyed_1",0.17,"SentObjectDestroyed_2",0.17,"SentObjectDestroyed_3",0.17,"SentObjectDestroyed_4",0.17,"SentObjectDestroyed_5",0.17,"SentObjectDestroyed_6",0.17};
		class SentObjectDestroyed_1
		{
			text = "$STR_EP1_SENTOBJECTDESTROYED_1";
			speech[] = {"ScratchOneE"};
		};
		class SentObjectDestroyed_2
		{
			text = "$STR_EP1_SENTOBJECTDESTROYED_2";
			speech[] = {"%2","IsHistory"};
		};
		class SentObjectDestroyed_3
		{
			text = "$STR_EP1_SENTOBJECTDESTROYED_3";
			speech[] = {"TargetEliminated"};
		};
		class SentObjectDestroyed_4
		{
			text = "$STR_EP1_SENTOBJECTDESTROYED_4";
			speech[] = {"HesDownE"};
		};
		class SentObjectDestroyed_5
		{
			text = "$STR_EP1_SENTOBJECTDESTROYED_5";
			speech[] = {"IveGotHimE"};
		};
		class SentObjectDestroyed_6
		{
			text = "$STR_EP1_SENTOBJECTDESTROYED_6";
			speech[] = {"HostileDownE"};
		};
	};
	class SentObjectDestroyedStealth
	{
		versions[] = {"SentObjectDestroyed_1",0,"SentObjectDestroyed_2",0,"SentObjectDestroyed_3",0.33,"SentObjectDestroyed_4",0.33,"SentObjectDestroyed_5",0.33,"SentObjectDestroyed_6",0};
		class SentObjectDestroyed_1
		{
			text = "$STR_EP1_SENTOBJECTDESTROYED_1";
			speech[] = {"ScratchOneE"};
		};
		class SentObjectDestroyed_2
		{
			text = "$STR_EP1_SENTOBJECTDESTROYED_2";
			speech[] = {"%2","IsHistory"};
		};
		class SentObjectDestroyed_3
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTOBJECTDESTROYED_3";
			speech[] = {"TargetEliminated"};
		};
		class SentObjectDestroyed_4
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTOBJECTDESTROYED_4";
			speech[] = {"HesDownE"};
		};
		class SentObjectDestroyed_5
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTOBJECTDESTROYED_5";
			speech[] = {"IveGotHimE"};
		};
		class SentObjectDestroyed_6
		{
			text = "$STR_EP1_SENTOBJECTDESTROYED_6";
			speech[] = {"HostileDownE"};
		};
	};
	class SentObjectDestroyedUnknown
	{
		sentences[] = {"SentObjectDestroyedUnknownDefault","(1-Stealth)","SentObjectDestroyedUnknownStealth","Stealth"};
	};
	class SentObjectDestroyedUnknownDefault
	{
		versions[] = {"SentObjectDestroyedUnknown_1",0.2,"SentObjectDestroyedUnknown_2",0.2,"SentObjectDestroyedUnknown_3",0.2,"SentObjectDestroyedUnknown_4",0.2,"SentObjectDestroyedUnknown_5",0.2};
		class SentObjectDestroyedUnknown_1
		{
			text = "$STR_EP1_SENTOBJECTDESTROYEDUNKNOWN_1";
			speech[] = {"ScratchOneE"};
		};
		class SentObjectDestroyedUnknown_2
		{
			text = "$STR_EP1_SENTOBJECTDESTROYEDUNKNOWN_2";
			speech[] = {"TargetEliminated"};
		};
		class SentObjectDestroyedUnknown_3
		{
			text = "$STR_EP1_SENTOBJECTDESTROYEDUNKNOWN_3";
			speech[] = {"HesDownE"};
		};
		class SentObjectDestroyedUnknown_4
		{
			text = "$STR_EP1_SENTOBJECTDESTROYEDUNKNOWN_4";
			speech[] = {"IveGotHimE"};
		};
		class SentObjectDestroyedUnknown_5
		{
			text = "$STR_EP1_SENTOBJECTDESTROYEDUNKNOWN_5";
			speech[] = {"HostileDownE"};
		};
	};
	class SentObjectDestroyedUnknownStealth
	{
		versions[] = {"SentObjectDestroyedUnknown_1",0,"SentObjectDestroyedUnknown_2",0.33,"SentObjectDestroyedUnknown_3",0.33,"SentObjectDestroyedUnknown_4",0.33,"SentObjectDestroyedUnknown_5",0};
		class SentObjectDestroyedUnknown_1
		{
			text = "$STR_EP1_SENTOBJECTDESTROYEDUNKNOWN_1";
			speech[] = {"ScratchOneE"};
		};
		class SentObjectDestroyedUnknown_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTOBJECTDESTROYEDUNKNOWN_2";
			speech[] = {"TargetEliminated"};
		};
		class SentObjectDestroyedUnknown_3
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTOBJECTDESTROYEDUNKNOWN_3";
			speech[] = {"HesDownE"};
		};
		class SentObjectDestroyedUnknown_4
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTOBJECTDESTROYEDUNKNOWN_4";
			speech[] = {"IveGotHimE"};
		};
		class SentObjectDestroyedUnknown_5
		{
			text = "$STR_EP1_SENTOBJECTDESTROYEDUNKNOWN_5";
			speech[] = {"HostileDownE"};
		};
	};
	class SentContact
	{
		sentences[] = {"SentContactDefault","(1-Stealth)","SentContactStealth","Stealth"};
	};
	class SentContactDefault
	{
		versions[] = {"SentContact_1",0.5,"SentContact_2",0.5};
		class SentContact_1
		{
			text = "$STR_EP1_SENTCONTACT_1";
			speech[] = {"ContactE"};
		};
		class SentContact_2
		{
			text = "$STR_EP1_SENTCONTACT_2";
			speech[] = {"HostilesE"};
		};
	};
	class SentContactStealth
	{
		versions[] = {"SentContact_1",0.5,"SentContact_2",0.5};
		class SentContact_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCONTACT_1";
			speech[] = {"ContactE"};
		};
		class SentContact_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCONTACT_2";
			speech[] = {"HostilesE"};
		};
	};
	class SentUnderFire
	{
		sentences[] = {"SentUnderFireDefault","(1-Stealth)","SentUnderFireStealth","Stealth"};
	};
	class SentUnderFireDefault
	{
		versions[] = {"SentUnderFire_1",0.33,"SentUnderFire_2",0.33,"SentUnderFire_3",0.33};
		class SentUnderFire_1
		{
			text = "$STR_EP1_SENTUNDERFIRE_1";
			speech[] = {"UnderFireE"};
		};
		class SentUnderFire_2
		{
			text = "$STR_EP1_SENTUNDERFIRE_2";
			speech[] = {"EnemyFireE"};
		};
		class SentUnderFire_3
		{
			text = "$STR_EP1_SENTUNDERFIRE_3";
			speech[] = {"TakingFireE"};
		};
	};
	class SentUnderFireStealth
	{
		versions[] = {"SentUnderFire_1",0.5,"SentUnderFire_2",0,"SentUnderFire_3",0.5};
		class SentUnderFire_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTUNDERFIRE_1";
			speech[] = {"UnderFireE"};
		};
		class SentUnderFire_2
		{
			text = "$STR_EP1_SENTUNDERFIRE_2";
			speech[] = {"EnemyFireE"};
		};
		class SentUnderFire_3
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTUNDERFIRE_3";
			speech[] = {"TakingFireE"};
		};
	};
	class SentClear
	{
		sentences[] = {"SentClearDefault","(1-Stealth)","SentClearStealth","Stealth"};
	};
	class SentClearDefault
	{
		versions[] = {"SentClear_1",0.5,"SentClear_2",0.5};
		class SentClear_1
		{
			text = "$STR_EP1_SENTCLEAR_1";
			speech[] = {"Clear"};
		};
		class SentClear_2
		{
			text = "$STR_EP1_SENTCLEAR_2";
			speech[] = {"AreaClear"};
		};
	};
	class SentClearStealth
	{
		versions[] = {"SentClear_1",1,"SentClear_2",0};
		class SentClear_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCLEAR_1";
			speech[] = {"Clear"};
		};
		class SentClear_2
		{
			text = "$STR_EP1_SENTCLEAR_2";
			speech[] = {"AreaClear"};
		};
	};
	class SentRepeatCommand
	{
		sentences[] = {"SentRepeatCommandDefault","(1-Stealth)","SentRepeatCommandStealth","Stealth"};
	};
	class SentRepeatCommandDefault
	{
		versions[] = {"SentRepeatCommand_1",0.5,"SentRepeatCommand_2",0.5};
		class SentRepeatCommand_1
		{
			text = "$STR_EP1_SENTREPEATCOMMAND_1";
			speech[] = {"SayAgain"};
		};
		class SentRepeatCommand_2
		{
			text = "$STR_EP1_SENTREPEATCOMMAND_2";
			speech[] = {"RepeatLast"};
		};
	};
	class SentRepeatCommandStealth
	{
		versions[] = {"SentRepeatCommand_1",0.5,"SentRepeatCommand_2",0.5};
		class SentRepeatCommand_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTREPEATCOMMAND_1";
			speech[] = {"SayAgain"};
		};
		class SentRepeatCommand_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTREPEATCOMMAND_2";
			speech[] = {"RepeatLast"};
		};
	};
	class SentWhereAreYou
	{
		sentences[] = {"SentWhereAreYouDefault","(1-Stealth)","SentWhereAreYouStealth","Stealth"};
	};
	class SentWhereAreYouDefault
	{
		versions[] = {"SentWhereAreYou_1",0.5,"SentWhereAreYou_2",0.5};
		class SentWhereAreYou_1
		{
			text = "$STR_EP1_SENTWHEREAREYOU_1";
			speech[] = {"ReportPositionE"};
		};
		class SentWhereAreYou_2
		{
			text = "$STR_EP1_SENTWHEREAREYOU_2";
			speech[] = {"WhereAreYouQ"};
		};
	};
	class SentWhereAreYouStealth
	{
		versions[] = {"SentWhereAreYou_1",0,"SentWhereAreYou_2",1};
		class SentWhereAreYou_1
		{
			text = "$STR_EP1_SENTWHEREAREYOU_1";
			speech[] = {"ReportPositionE"};
		};
		class SentWhereAreYou_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTWHEREAREYOU_2";
			speech[] = {"WhereAreYouQ"};
		};
	};
	class SentReturnToFormation
	{
		sentences[] = {"SentReturnToFormationDefault","(1-Stealth)","SentReturnToFormationStealth","Stealth"};
	};
	class SentReturnToFormationDefault
	{
		versions[] = {"SentReturnToFormation_1",0.25,"SentReturnToFormation_2",0.25,"SentReturnToFormation_3",0.25,"SentReturnToFormation_4",0.25};
		class SentReturnToFormation_1
		{
			text = "$STR_EP1_SENTRETURNTOFORMATION_1";
			speech[] = {"%1","FallBackE"};
		};
		class SentReturnToFormation_2
		{
			text = "$STR_EP1_SENTRETURNTOFORMATION_2";
			speech[] = {"%1","ReturnToFormationE"};
		};
		class SentReturnToFormation_3
		{
			text = "$STR_EP1_SENTRETURNTOFORMATION_3";
			speech[] = {"%1","FormOnMeE"};
		};
		class SentReturnToFormation_4
		{
			text = "$STR_EP1_SENTRETURNTOFORMATION_4";
			speech[] = {"%1","RegroupE"};
		};
	};
	class SentReturnToFormationStealth
	{
		versions[] = {"SentReturnToFormation_1",1,"SentReturnToFormation_2",0,"SentReturnToFormation_3",0,"SentReturnToFormation_4",0};
		class SentReturnToFormation_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTRETURNTOFORMATION_1";
			speech[] = {"%1","FallBackE"};
		};
		class SentReturnToFormation_2
		{
			text = "$STR_EP1_SENTRETURNTOFORMATION_2";
			speech[] = {"%1","ReturnToFormationE"};
		};
		class SentReturnToFormation_3
		{
			text = "$STR_EP1_SENTRETURNTOFORMATION_3";
			speech[] = {"%1","FormOnMeE"};
		};
		class SentReturnToFormation_4
		{
			text = "$STR_EP1_SENTRETURNTOFORMATION_4";
			speech[] = {"%1","RegroupE"};
		};
	};
	class SentReportStatus
	{
		sentences[] = {"SentReportStatusDefault","(1-Stealth)","SentReportStatusStealth","Stealth"};
	};
	class SentReportStatusDefault
	{
		versions[] = {"SentReportStatus_1",0.5,"SentReportStatus_2",0.5};
		class SentReportStatus_1
		{
			text = "$STR_EP1_SENTREPORTSTATUS_1";
			speech[] = {"%1.1","ReportStatus"};
		};
		class SentReportStatus_2
		{
			text = "$STR_EP1_SENTREPORTSTATUS_2";
			speech[] = {"%1.1","DoYouReadQ"};
		};
	};
	class SentReportStatusStealth
	{
		versions[] = {"SentReportStatus_1",1,"SentReportStatus_2",0};
		class SentReportStatus_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTREPORTSTATUS_1";
			speech[] = {"%1.1","ReportStatus"};
		};
		class SentReportStatus_2
		{
			text = "$STR_EP1_SENTREPORTSTATUS_2";
			speech[] = {"%1.1","DoYouReadQ"};
		};
	};
	class SentFormColumn
	{
		sentences[] = {"SentFormColumnDefault","(1-Stealth)","SentFormColumnStealth","Stealth"};
	};
	class SentFormColumnDefault
	{
		versions[] = {"SentFormColumn_1",1};
		class SentFormColumn_1
		{
			text = "$STR_EP1_SENTFORMCOLUMN_1";
			speech[] = {"FormColumn"};
		};
	};
	class SentFormColumnStealth
	{
		versions[] = {"SentFormColumn_1",1};
		class SentFormColumn_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFORMCOLUMN_1";
			speech[] = {"FormColumn"};
		};
	};
	class SentFormStaggeredColumn
	{
		sentences[] = {"SentFormStaggeredColumnDefault","(1-Stealth)","SentFormStaggeredColumnStealth","Stealth"};
	};
	class SentFormStaggeredColumnDefault
	{
		versions[] = {"SentFormStaggeredColumn_1",1};
		class SentFormStaggeredColumn_1
		{
			text = "$STR_EP1_SENTFORMSTAGGEREDCOLUMN_1";
			speech[] = {"FormStaggeredColumn"};
		};
	};
	class SentFormStaggeredColumnStealth
	{
		versions[] = {"SentFormStaggeredColumn_1",1};
		class SentFormStaggeredColumn_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFORMSTAGGEREDCOLUMN_1";
			speech[] = {"FormStaggeredColumn"};
		};
	};
	class SentFormWedge
	{
		sentences[] = {"SentFormWedgeDefault","(1-Stealth)","SentFormWedgeStealth","Stealth"};
	};
	class SentFormWedgeDefault
	{
		versions[] = {"SentFormWedge_1",1};
		class SentFormWedge_1
		{
			text = "$STR_EP1_SENTFORMWEDGE_1";
			speech[] = {"FormWedge"};
		};
	};
	class SentFormWedgeStealth
	{
		versions[] = {"SentFormWedge_1",1};
		class SentFormWedge_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFORMWEDGE_1";
			speech[] = {"FormWedge"};
		};
	};
	class SentFormEcholonLeft
	{
		sentences[] = {"SentFormEcholonLeftDefault","(1-Stealth)","SentFormEcholonLeftStealth","Stealth"};
	};
	class SentFormEcholonLeftDefault
	{
		versions[] = {"SentFormEcholonLeft_1",1};
		class SentFormEcholonLeft_1
		{
			text = "$STR_EP1_SENTFORMECHOLONLEFT_1";
			speech[] = {"FormEcholonLeft"};
		};
	};
	class SentFormEcholonLeftStealth
	{
		versions[] = {"SentFormEcholonLeft_1",1};
		class SentFormEcholonLeft_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFORMECHOLONLEFT_1";
			speech[] = {"FormEcholonLeft"};
		};
	};
	class SentFormEcholonRight
	{
		sentences[] = {"SentFormEcholonRightDefault","(1-Stealth)","SentFormEcholonRightStealth","Stealth"};
	};
	class SentFormEcholonRightDefault
	{
		versions[] = {"SentFormEcholonRight_1",1};
		class SentFormEcholonRight_1
		{
			text = "$STR_EP1_SENTFORMECHOLONRIGHT_1";
			speech[] = {"FormEcholonRight"};
		};
	};
	class SentFormEcholonRightStealth
	{
		versions[] = {"SentFormEcholonRight_1",1};
		class SentFormEcholonRight_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFORMECHOLONRIGHT_1";
			speech[] = {"FormEcholonRight"};
		};
	};
	class SentFormVee
	{
		sentences[] = {"SentFormVeeDefault","(1-Stealth)","SentFormVeeStealth","Stealth"};
	};
	class SentFormVeeDefault
	{
		versions[] = {"SentFormVee_1",1};
		class SentFormVee_1
		{
			text = "$STR_EP1_SENTFORMVEE_1";
			speech[] = {"FormVee"};
		};
	};
	class SentFormVeeStealth
	{
		versions[] = {"SentFormVee_1",1};
		class SentFormVee_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFORMVEE_1";
			speech[] = {"FormVee"};
		};
	};
	class SentFormLine
	{
		sentences[] = {"SentFormLineDefault","(1-Stealth)","SentFormLineStealth","Stealth"};
	};
	class SentFormLineDefault
	{
		versions[] = {"SentFormLine_1",1};
		class SentFormLine_1
		{
			text = "$STR_EP1_SENTFORMLINE_1";
			speech[] = {"FormLine"};
		};
	};
	class SentFormLineStealth
	{
		versions[] = {"SentFormLine_1",1};
		class SentFormLine_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFORMLINE_1";
			speech[] = {"FormLine"};
		};
	};
	class SentFormFile
	{
		sentences[] = {"SentFormFileDefault","(1-Stealth)","SentFormFileStealth","Stealth"};
	};
	class SentFormFileDefault
	{
		versions[] = {"SentFormFile_1",1};
		class SentFormFile_1
		{
			text = "$STR_EP1_SENTFORMFILE_1";
			speech[] = {"FormFile"};
		};
	};
	class SentFormFileStealth
	{
		versions[] = {"SentFormFile_1",1};
		class SentFormFile_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFORMFILE_1";
			speech[] = {"FormFile"};
		};
	};
	class SentFormDiamond
	{
		sentences[] = {"SentFormDiamondDefault","(1-Stealth)","SentFormDiamondStealth","Stealth"};
	};
	class SentFormDiamondDefault
	{
		versions[] = {"SentFormDiamond_1",1};
		class SentFormDiamond_1
		{
			text = "$STR_EP1_SENTFORMDIAMOND_1";
			speech[] = {"FormDiamond"};
		};
	};
	class SentFormDiamondStealth
	{
		versions[] = {"SentFormDiamond_1",1};
		class SentFormDiamond_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFORMDIAMOND_1";
			speech[] = {"FormDiamond"};
		};
	};
	class SentBehaviourSafe
	{
		sentences[] = {"SentBehaviourSafeDefault","(1-Stealth)","SentBehaviourSafeStealth","Stealth"};
	};
	class SentBehaviourSafeDefault
	{
		versions[] = {"SentBehaviourSafe_1",1};
		class SentBehaviourSafe_1
		{
			text = "$STR_EP1_SENTBEHAVIOURSAFE_1";
			speech[] = {"%1","AtEase"};
		};
	};
	class SentBehaviourSafeStealth
	{
		versions[] = {"SentBehaviourSafe_1",1};
		class SentBehaviourSafe_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTBEHAVIOURSAFE_1";
			speech[] = {"%1","AtEase"};
		};
	};
	class SentBehaviourAware
	{
		sentences[] = {"SentBehaviourAwareDefault","(1-Stealth)","SentBehaviourAwareStealth","Stealth"};
	};
	class SentBehaviourAwareDefault
	{
		versions[] = {"SentBehaviourAware_1",1};
		class SentBehaviourAware_1
		{
			text = "$STR_EP1_SENTBEHAVIOURAWARE_1";
			speech[] = {"%1","StayAlert"};
		};
	};
	class SentBehaviourAwareStealth
	{
		versions[] = {"SentBehaviourAware_1",1};
		class SentBehaviourAware_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTBEHAVIOURAWARE_1";
			speech[] = {"%1","StayAlert"};
		};
	};
	class SentBehaviourCombat
	{
		sentences[] = {"SentBehaviourCombatDefault","(1-Stealth)","SentBehaviourCombatStealth","Stealth"};
	};
	class SentBehaviourCombatDefault
	{
		versions[] = {"SentBehaviourCombat_1",1};
		class SentBehaviourCombat_1
		{
			text = "$STR_EP1_SENTBEHAVIOURCOMBAT_1";
			speech[] = {"%1","DangerE"};
		};
	};
	class SentBehaviourCombatStealth
	{
		versions[] = {"SentBehaviourCombat_1",1};
		class SentBehaviourCombat_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTBEHAVIOURCOMBAT_1";
			speech[] = {"%1","DangerE"};
		};
	};
	class SentBehaviourStealth
	{
		sentences[] = {"SentBehaviourStealthDefault","(1-Stealth)","SentBehaviourStealthStealth","Stealth"};
	};
	class SentBehaviourStealthDefault
	{
		versions[] = {"SentBehaviourStealth_1",1};
		class SentBehaviourStealth_1
		{
			text = "$STR_EP1_SENTBEHAVIOURSTEALTH_1";
			speech[] = {"%1","Stealth"};
		};
	};
	class SentBehaviourStealthStealth
	{
		versions[] = {"SentBehaviourStealth_1",1};
		class SentBehaviourStealth_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTBEHAVIOURSTEALTH_1";
			speech[] = {"%1","Stealth"};
		};
	};
	class SentOpenFire
	{
		sentences[] = {"SentOpenFireDefault","(1-Stealth)","SentOpenFireStealth","Stealth"};
	};
	class SentOpenFireDefault
	{
		versions[] = {"SentOpenFire_1",0.5,"SentOpenFire_2",0.5};
		class SentOpenFire_1
		{
			text = "$STR_EP1_SENTOPENFIRE_1";
			speech[] = {"%1.1","FireAtWill"};
		};
		class SentOpenFire_2
		{
			text = "$STR_EP1_SENTOPENFIRE_2";
			speech[] = {"%1.1","WeaponsFree"};
		};
	};
	class SentOpenFireStealth
	{
		versions[] = {"SentOpenFire_1",0.5,"SentOpenFire_2",0.5};
		class SentOpenFire_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTOPENFIRE_1";
			speech[] = {"%1.1","FireAtWill"};
		};
		class SentOpenFire_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTOPENFIRE_2";
			speech[] = {"%1.1","WeaponsFree"};
		};
	};
	class SentOpenFireInCombat
	{
		sentences[] = {"SentOpenFireInCombatDefault",1};
	};
	class SentOpenFireInCombatDefault
	{
		versions[] = {"SentOpenFireInCombat_1",0.25,"SentOpenFireInCombat_2",0.25,"SentOpenFireInCombat_3",0.25,"SentOpenFireInCombat_4",0.25};
		class SentOpenFireInCombat_1
		{
			text = "$STR_EP1_SENTOPENFIREINCOMBAT_1";
			speech[] = {"%1.1","WeaponsHot"};
		};
		class SentOpenFireInCombat_2
		{
			text = "$STR_EP1_SENTOPENFIREINCOMBAT_2";
			speech[] = {"%1.1","LightEmUpE"};
		};
		class SentOpenFireInCombat_3
		{
			text = "$STR_EP1_SENTOPENFIREINCOMBAT_3";
			speech[] = {"%1.1","GiveEmHellE"};
		};
		class SentOpenFireInCombat_4
		{
			text = "$STR_EP1_SENTOPENFIREINCOMBAT_4";
			speech[] = {"%1.1","GoGoGoE"};
		};
	};
	class SentHoldFire
	{
		sentences[] = {"SentHoldFireDefault","(1-Stealth)","SentHoldFireStealth","Stealth"};
	};
	class SentHoldFireDefault
	{
		versions[] = {"SentHoldFire_1",1};
		class SentHoldFire_1
		{
			text = "$STR_EP1_SENTHOLDFIRE_1";
			speech[] = {"%1.1","HoldFire"};
		};
	};
	class SentHoldFireStealth
	{
		versions[] = {"SentHoldFire_1",1};
		class SentHoldFire_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTHOLDFIRE_1";
			speech[] = {"%1.1","HoldFire"};
		};
	};
	class SentHoldFireInCombat
	{
		sentences[] = {"SentHoldFireInCombatDefault","(1-Stealth)","SentHoldFireInCombatStealth","Stealth"};
	};
	class SentHoldFireInCombatDefault
	{
		versions[] = {"SentHoldFireInCombat_1",0.5,"SentHoldFireInCombat_2",0.5};
		class SentHoldFireInCombat_1
		{
			text = "$STR_EP1_SENTHOLDFIREINCOMBAT_1";
			speech[] = {"%1.1","HoldFire"};
		};
		class SentHoldFireInCombat_2
		{
			text = "$STR_EP1_SENTHOLDFIREINCOMBAT_2";
			speech[] = {"%1.1","CeaseFireE"};
		};
	};
	class SentHoldFireInCombatStealth
	{
		versions[] = {"SentHoldFireInCombat_1",1,"SentHoldFireInCombat_2",0};
		class SentHoldFireInCombat_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTHOLDFIREINCOMBAT_1";
			speech[] = {"%1.1","HoldFire"};
		};
		class SentHoldFireInCombat_2
		{
			text = "$STR_EP1_SENTHOLDFIREINCOMBAT_2";
			speech[] = {"%1.1","CeaseFireE"};
		};
	};
	class SentCeaseFireInsideGroup
	{
		sentences[] = {"SentCeaseFireInsideGroupDefault","(1-Stealth)","SentCeaseFireInsideGroupStealth","Stealth"};
	};
	class SentCeaseFireInsideGroupDefault
	{
		versions[] = {"SentCeaseFireInsideGroup_1",1};
		class SentCeaseFireInsideGroup_1
		{
			text = "$STR_EP1_SENTCEASEFIREINSIDEGROUP_1";
			speech[] = {"%1.1","CheckYourFireE"};
		};
	};
	class SentCeaseFireInsideGroupStealth
	{
		versions[] = {"SentCeaseFireInsideGroup_1",1};
		class SentCeaseFireInsideGroup_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCEASEFIREINSIDEGROUP_1";
			speech[] = {"%1.1","CheckYourFireE"};
		};
	};
	class SentCeaseFire
	{
		sentences[] = {"SentCeaseFireDefault","(1-Stealth)","SentCeaseFireStealth","Stealth"};
	};
	class SentCeaseFireDefault
	{
		versions[] = {"SentCeaseFire_1",0.33,"SentCeaseFire_2",0.33,"SentCeaseFire_3",0.33};
		class SentCeaseFire_1
		{
			text = "$STR_EP1_SENTCEASEFIRE_1";
			speech[] = {"%2.1","CheckYourFireE"};
		};
		class SentCeaseFire_2
		{
			text = "$STR_EP1_SENTCEASEFIRE_2";
			speech[] = {"%2.1","CeaseFireE"};
		};
		class SentCeaseFire_3
		{
			text = "$STR_EP1_SENTCEASEFIRE_3";
			speech[] = {"%2.1","BlueOnBlueE"};
		};
	};
	class SentCeaseFireStealth
	{
		versions[] = {"SentCeaseFire_1",1,"SentCeaseFire_2",0,"SentCeaseFire_3",0};
		class SentCeaseFire_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCEASEFIRE_1";
			speech[] = {"%2.1","CheckYourFireE"};
		};
		class SentCeaseFire_2
		{
			text = "$STR_EP1_SENTCEASEFIRE_2";
			speech[] = {"%2.1","CeaseFireE"};
		};
		class SentCeaseFire_3
		{
			text = "$STR_EP1_SENTCEASEFIRE_3";
			speech[] = {"%2.1","BlueOnBlueE"};
		};
	};
	class SentLooseFormation
	{
		sentences[] = {"SentLooseFormationDefault","(1-Stealth)","SentLooseFormationStealth","Stealth"};
	};
	class SentLooseFormationDefault
	{
		versions[] = {"SentLooseFormation_1",0.5,"SentLooseFormation_2",0.5};
		class SentLooseFormation_1
		{
			text = "$STR_EP1_SENTLOOSEFORMATION_1";
			speech[] = {"%1.1","EngageAtWill"};
		};
		class SentLooseFormation_2
		{
			text = "$STR_EP1_SENTLOOSEFORMATION_2";
			speech[] = {"%1.1","FreeToEngage"};
		};
	};
	class SentLooseFormationStealth
	{
		versions[] = {"SentLooseFormation_1",1,"SentLooseFormation_2",0};
		class SentLooseFormation_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTLOOSEFORMATION_1";
			speech[] = {"%1.1","EngageAtWill"};
		};
		class SentLooseFormation_2
		{
			text = "$STR_EP1_SENTLOOSEFORMATION_2";
			speech[] = {"%1.1","FreeToEngage"};
		};
	};
	class SentKeepFormation
	{
		sentences[] = {"SentKeepFormationDefault","(1-Stealth)","SentKeepFormationStealth","Stealth"};
	};
	class SentKeepFormationDefault
	{
		versions[] = {"SentKeepFormation_1",1};
		class SentKeepFormation_1
		{
			text = "$STR_EP1_SENTKEEPFORMATION_1";
			speech[] = {"%1.1","Disengage"};
		};
	};
	class SentKeepFormationStealth
	{
		versions[] = {"SentKeepFormation_1",1};
		class SentKeepFormation_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTKEEPFORMATION_1";
			speech[] = {"%1.1","Disengage"};
		};
	};
	class SentUnitPosDown
	{
		sentences[] = {"SentUnitPosDownDefault","(1-Stealth)","SentUnitPosDownStealth","Stealth"};
	};
	class SentUnitPosDownDefault
	{
		versions[] = {"SentUnitPosDown_1",0.33,"SentUnitPosDown_2",0.33,"SentUnitPosDown_3",0.33};
		class SentUnitPosDown_1
		{
			text = "$STR_EP1_SENTUNITPOSDOWN_1";
			speech[] = {"%1.1","GoProne"};
		};
		class SentUnitPosDown_2
		{
			text = "$STR_EP1_SENTUNITPOSDOWN_2";
			speech[] = {"%1.1","HitTheDirt"};
		};
		class SentUnitPosDown_3
		{
			text = "$STR_EP1_SENTUNITPOSDOWN_3";
			speech[] = {"%1.1","GetDownE"};
		};
	};
	class SentUnitPosDownStealth
	{
		versions[] = {"SentUnitPosDown_1",0.33,"SentUnitPosDown_2",0.33,"SentUnitPosDown_3",0.33};
		class SentUnitPosDown_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTUNITPOSDOWN_1";
			speech[] = {"%1.1","GoProne"};
		};
		class SentUnitPosDown_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTUNITPOSDOWN_2";
			speech[] = {"%1.1","HitTheDirt"};
		};
		class SentUnitPosDown_3
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTUNITPOSDOWN_3";
			speech[] = {"%1.1","GetDownE"};
		};
	};
	class SentUnitPosMiddle
	{
		sentences[] = {"SentUnitPosMiddleDefault","(1-Stealth)","SentUnitPosMiddleStealth","Stealth"};
	};
	class SentUnitPosMiddleDefault
	{
		versions[] = {"SentUnitPosMiddle_1",1};
		class SentUnitPosMiddle_1
		{
			text = "$STR_EP1_SENTUNITPOSMIDDLE_1";
			speech[] = {"%1.1","StayCrouched"};
		};
	};
	class SentUnitPosMiddleStealth
	{
		versions[] = {"SentUnitPosMiddle_1",1};
		class SentUnitPosMiddle_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTUNITPOSMIDDLE_1";
			speech[] = {"%1.1","StayCrouched"};
		};
	};
	class SentUnitPosUp
	{
		sentences[] = {"SentUnitPosUpDefault","(1-Stealth)","SentUnitPosUpStealth","Stealth"};
	};
	class SentUnitPosUpDefault
	{
		versions[] = {"SentUnitPosUp_1",1};
		class SentUnitPosUp_1
		{
			text = "$STR_EP1_SENTUNITPOSUP_1";
			speech[] = {"%1.1","StandUp"};
		};
	};
	class SentUnitPosUpStealth
	{
		versions[] = {"SentUnitPosUp_1",1};
		class SentUnitPosUp_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTUNITPOSUP_1";
			speech[] = {"%1.1","StandUp"};
		};
	};
	class SentUnitPosAuto
	{
		sentences[] = {"SentUnitPosAutoDefault","(1-Stealth)","SentUnitPosAutoStealth","Stealth"};
	};
	class SentUnitPosAutoDefault
	{
		versions[] = {"SentUnitPosAuto_1",1};
		class SentUnitPosAuto_1
		{
			text = "$STR_EP1_SENTUNITPOSAUTO_1";
			speech[] = {"%1.1","CopyMyStance"};
		};
	};
	class SentUnitPosAutoStealth
	{
		versions[] = {"SentUnitPosAuto_1",1};
		class SentUnitPosAuto_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTUNITPOSAUTO_1";
			speech[] = {"%1.1","CopyMyStance"};
		};
	};
	class SentFormPosAdvance
	{
		sentences[] = {"SentFormPosAdvanceDefault","(1-Stealth)","SentFormPosAdvanceStealth","Stealth"};
	};
	class SentFormPosAdvanceDefault
	{
		versions[] = {"SentFormPosAdvance_1",1};
		class SentFormPosAdvance_1
		{
			text = "$STR_EP1_SENTFORMPOSADVANCE_1";
			speech[] = {"%1.1","Advance"};
		};
	};
	class SentFormPosAdvanceStealth
	{
		versions[] = {"SentFormPosAdvance_1",1};
		class SentFormPosAdvance_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFORMPOSADVANCE_1";
			speech[] = {"%1.1","Advance"};
		};
	};
	class SentFormPosStayBack
	{
		sentences[] = {"SentFormPosStayBackDefault","(1-Stealth)","SentFormPosStayBackStealth","Stealth"};
	};
	class SentFormPosStayBackDefault
	{
		versions[] = {"SentFormPosStayBack_1",1};
		class SentFormPosStayBack_1
		{
			text = "$STR_EP1_SENTFORMPOSSTAYBACK_1";
			speech[] = {"%1.1","StayBack"};
		};
	};
	class SentFormPosStayBackStealth
	{
		versions[] = {"SentFormPosStayBack_1",1};
		class SentFormPosStayBack_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFORMPOSSTAYBACK_1";
			speech[] = {"%1.1","StayBack"};
		};
	};
	class SentFormPosFlankLeft
	{
		sentences[] = {"SentFormPosFlankLeftDefault","(1-Stealth)","SentFormPosFlankLeftStealth","Stealth"};
	};
	class SentFormPosFlankLeftDefault
	{
		versions[] = {"SentFormPosFlankLeft_1",1};
		class SentFormPosFlankLeft_1
		{
			text = "$STR_EP1_SENTFORMPOSFLANKLEFT_1";
			speech[] = {"%1.1","FlankLeft"};
		};
	};
	class SentFormPosFlankLeftStealth
	{
		versions[] = {"SentFormPosFlankLeft_1",1};
		class SentFormPosFlankLeft_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFORMPOSFLANKLEFT_1";
			speech[] = {"%1.1","FlankLeft"};
		};
	};
	class SentFormPosFlankRight
	{
		sentences[] = {"SentFormPosFlankRightDefault","(1-Stealth)","SentFormPosFlankRightStealth","Stealth"};
	};
	class SentFormPosFlankRightDefault
	{
		versions[] = {"SentFormPosFlankRight_1",1};
		class SentFormPosFlankRight_1
		{
			text = "$STR_EP1_SENTFORMPOSFLANKRIGHT_1";
			speech[] = {"%1.1","FlankRight"};
		};
	};
	class SentFormPosFlankRightStealth
	{
		versions[] = {"SentFormPosFlankRight_1",1};
		class SentFormPosFlankRight_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFORMPOSFLANKRIGHT_1";
			speech[] = {"%1.1","FlankRight"};
		};
	};
	class SentTeam
	{
		sentences[] = {"SentTeamDefault","(1-Stealth)","SentTeamStealth","Stealth"};
	};
	class SentTeamDefault
	{
		versions[] = {"SentTeam_1",1};
		class SentTeam_1
		{
			text = "$STR_EP1_SENTTEAM_1";
			speech[] = {"%1.1","Is","%2"};
		};
	};
	class SentTeamStealth
	{
		versions[] = {"SentTeam_1",1};
		class SentTeam_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTTEAM_1";
			speech[] = {"%1.1","Is","%2"};
		};
	};
	class SentTeamPlural
	{
		sentences[] = {"SentTeamPluralDefault","(1-Stealth)","SentTeamPluralStealth","Stealth"};
	};
	class SentTeamPluralDefault
	{
		versions[] = {"SentTeamPlural_1",1};
		class SentTeamPlural_1
		{
			text = "$STR_EP1_SENTTEAMPLURAL_1";
			speech[] = {"%1.1","Are","%2"};
		};
	};
	class SentTeamPluralStealth
	{
		versions[] = {"SentTeamPlural_1",1};
		class SentTeamPlural_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTTEAMPLURAL_1";
			speech[] = {"%1.1","Are","%2"};
		};
	};
	class SentWatchTgt
	{
		sentences[] = {"SentWatchTgtDefault","(1-Stealth)","SentWatchTgtStealth","Stealth"};
	};
	class SentWatchTgtDefault
	{
		versions[] = {"SentWatchTgt_1",0.5,"SentWatchTgt_2",0.5};
		class SentWatchTgt_1
		{
			text = "$STR_EP1_SENTWATCHTGT_1";
			speech[] = {"%1.1","WatchThat","%2"};
		};
		class SentWatchTgt_2
		{
			text = "$STR_EP1_SENTWATCHTGT_2";
			speech[] = {"%1.1","ObserveThat","%2"};
		};
	};
	class SentWatchTgtStealth
	{
		versions[] = {"SentWatchTgt_1",1,"SentWatchTgt_2",0};
		class SentWatchTgt_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTWATCHTGT_1";
			speech[] = {"%1.1","WatchThat","%2"};
		};
		class SentWatchTgt_2
		{
			text = "$STR_EP1_SENTWATCHTGT_2";
			speech[] = {"%1.1","ObserveThat","%2"};
		};
	};
	class SentWatchDir
	{
		sentences[] = {"SentWatchDirDefault","(1-Stealth)","SentWatchDirStealth","Stealth"};
	};
	class SentWatchDirDefault
	{
		versions[] = {"SentWatchDir_1",1};
		class SentWatchDir_1
		{
			text = "$STR_EP1_SENTWATCHDIR_1";
			speech[] = {"%1.1","Watch","%2"};
		};
	};
	class SentWatchDirStealth
	{
		versions[] = {"SentWatchDir_1",1};
		class SentWatchDir_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTWATCHDIR_1";
			speech[] = {"%1.1","Watch","%2"};
		};
	};
	class SentWatchPos
	{
		sentences[] = {"SentWatchPosDefault","(1-Stealth)","SentWatchPosStealth","Stealth"};
	};
	class SentWatchPosDefault
	{
		versions[] = {"SentWatchPos_1",1};
		class SentWatchPos_1
		{
			text = "$STR_EP1_SENTWATCHPOS_1";
			speech[] = {"%1.1","ObserveThatPosition"};
		};
	};
	class SentWatchPosStealth
	{
		versions[] = {"SentWatchPos_1",1};
		class SentWatchPos_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTWATCHPOS_1";
			speech[] = {"%1.1","ObserveThatPosition"};
		};
	};
	class SentWatchAround
	{
		sentences[] = {"SentWatchAroundDefault","(1-Stealth)","SentWatchAroundStealth","Stealth"};
	};
	class SentWatchAroundDefault
	{
		versions[] = {"SentWatchAround_1",1};
		class SentWatchAround_1
		{
			text = "$STR_EP1_SENTWATCHAROUND_1";
			speech[] = {"%1.1","ScanHorizon"};
		};
	};
	class SentWatchAroundStealth
	{
		versions[] = {"SentWatchAround_1",1};
		class SentWatchAround_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTWATCHAROUND_1";
			speech[] = {"%1.1","ScanHorizon"};
		};
	};
	class SentNoTarget
	{
		sentences[] = {"SentNoTargetDefault","(1-Stealth)","SentNoTargetStealth","Stealth"};
	};
	class SentNoTargetDefault
	{
		versions[] = {"SentNoTarget_1",0.5,"SentNoTarget_2",0.5};
		class SentNoTarget_1
		{
			text = "$STR_EP1_SENTNOTARGET_1";
			speech[] = {"%1.1","NoTarget"};
		};
		class SentNoTarget_2
		{
			text = "$STR_EP1_SENTNOTARGET_2";
			speech[] = {"%1.1","CancelTarget"};
		};
	};
	class SentNoTargetStealth
	{
		versions[] = {"SentNoTarget_1",1,"SentNoTarget_2",0};
		class SentNoTarget_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTNOTARGET_1";
			speech[] = {"%1.1","NoTarget"};
		};
		class SentNoTarget_2
		{
			text = "$STR_EP1_SENTNOTARGET_2";
			speech[] = {"%1.1","CancelTarget"};
		};
	};
	class SentTarget
	{
		sentences[] = {"SentTargetDefault","(1-Stealth)","SentTargetStealth","Stealth"};
	};
	class SentTargetDefault
	{
		versions[] = {"SentTarget_1",1};
		class SentTarget_1
		{
			text = "$STR_SENT_TARGET_1";
			speech[] = {"%1","TargetThat","%2"};
		};
	};
	class SentTargetStealth
	{
		versions[] = {"SentTarget_1",1};
		class SentTarget_1
		{
			wordsClass = "StealthWords";
			text = "$STR_SENT_TARGET_1";
			speech[] = {"%1","TargetThat","%2"};
		};
	};
	class SentEngage
	{
		sentences[] = {"SentEngageDefault","(1-Stealth)","SentEngageStealth","Stealth"};
	};
	class SentEngageDefault
	{
		versions[] = {"SentEngage_1",1};
		class SentEngage_1
		{
			text = "$STR_EP1_SENTENGAGE_1";
			speech[] = {"%1","EngageThat","%2"};
		};
	};
	class SentEngageStealth
	{
		versions[] = {"SentEngage_1",1};
		class SentEngage_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENGAGE_1";
			speech[] = {"%1","EngageThat","%2"};
		};
	};
	class SentFire
	{
		sentences[] = {"SentFireDefault","(1-Stealth)","SentFireStealth","Stealth"};
	};
	class SentFireDefault
	{
		versions[] = {"SentFire_1",1};
		class SentFire_1
		{
			text = "$STR_EP1_SENTFIRE_1";
			speech[] = {"%1","FireAtThat","%2"};
		};
	};
	class SentFireStealth
	{
		versions[] = {"SentFire_1",1};
		class SentFire_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFIRE_1";
			speech[] = {"%1","FireAtThat","%2"};
		};
	};
	class SentEngageNoTarget
	{
		sentences[] = {"SentEngageNoTargetDefault","(1-Stealth)","SentEngageNoTargetStealth","Stealth"};
	};
	class SentEngageNoTargetDefault
	{
		versions[] = {"SentEngageNoTarget_1",1};
		class SentEngageNoTarget_1
		{
			text = "$STR_EP1_SENTENGAGENOTARGET_1";
			speech[] = {"%1","EngageE"};
		};
	};
	class SentEngageNoTargetStealth
	{
		versions[] = {"SentEngageNoTarget_1",1};
		class SentEngageNoTarget_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTENGAGENOTARGET_1";
			speech[] = {"%1","EngageE"};
		};
	};
	class SentFireNoTarget
	{
		sentences[] = {"SentFireNoTargetDefault","(1-Stealth)","SentFireNoTargetStealth","Stealth"};
	};
	class SentFireNoTargetDefault
	{
		versions[] = {"SentFireNoTarget_1",1};
		class SentFireNoTarget_1
		{
			text = "$STR_EP1_SENTFIRENOTARGET_1";
			speech[] = {"%1","Fire"};
		};
	};
	class SentFireNoTargetStealth
	{
		versions[] = {"SentFireNoTarget_1",1};
		class SentFireNoTarget_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTFIRENOTARGET_1";
			speech[] = {"%1","Fire"};
		};
	};
	class SentCmdHealSomeone
	{
		sentences[] = {"SentCmdHealSomeoneDefault","(1-Stealth)","SentCmdHealSomeoneStealth","Stealth"};
	};
	class SentCmdHealSomeoneDefault
	{
		versions[] = {"SentCmdHealSomeone_1",1};
		class SentCmdHealSomeone_1
		{
			text = "$STR_EP1_SENTCMDHEALSOMEONE_1";
			speech[] = {"%1.1","HealThat","%2"};
		};
	};
	class SentCmdHealSomeoneStealth
	{
		versions[] = {"SentCmdHealSomeone_1",1};
		class SentCmdHealSomeone_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDHEALSOMEONE_1";
			speech[] = {"%1.1","HealThat","%2"};
		};
	};
	class SentCmdHealSelf
	{
		sentences[] = {"SentCmdHealSelfDefault","(1-Stealth)","SentCmdHealSelfStealth","Stealth"};
	};
	class SentCmdHealSelfDefault
	{
		versions[] = {"SentCmdHealSelf_1",1};
		class SentCmdHealSelf_1
		{
			text = "$STR_EP1_SENTCMDHEALSELF_1";
			speech[] = {"%1.1","HealYourself"};
		};
	};
	class SentCmdHealSelfStealth
	{
		versions[] = {"SentCmdHealSelf_1",1};
		class SentCmdHealSelf_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDHEALSELF_1";
			speech[] = {"%1.1","HealYourself"};
		};
	};
	class SentCmdHeal
	{
		sentences[] = {"SentCmdHealDefault","(1-Stealth)","SentCmdHealStealth","Stealth"};
	};
	class SentCmdHealDefault
	{
		versions[] = {"SentCmdHeal_1",1};
		class SentCmdHeal_1
		{
			text = "$STR_EP1_SENTCMDHEAL_1";
			speech[] = {"%1.1","GetHelp","%2"};
		};
	};
	class SentCmdHealStealth
	{
		versions[] = {"SentCmdHeal_1",1};
		class SentCmdHeal_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDHEAL_1";
			speech[] = {"%1.1","GetHelp","%2"};
		};
	};
	class SentCmdHealFar
	{
		sentences[] = {"SentCmdHealFarDefault","(1-Stealth)","SentCmdHealFarStealth","Stealth"};
	};
	class SentCmdHealFarDefault
	{
		versions[] = {"SentCmdHealFar_1",1};
		class SentCmdHealFar_1
		{
			text = "$STR_EP1_SENTCMDHEALFAR_1";
			speech[] = {"%1.1","GetHelpAt","%2"};
		};
	};
	class SentCmdHealFarStealth
	{
		versions[] = {"SentCmdHealFar_1",1};
		class SentCmdHealFar_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDHEALFAR_1";
			speech[] = {"%1.1","GetHelpAt","%2"};
		};
	};
	class SentCmdHealAt
	{
		sentences[] = {"SentCmdHealAtDefault","(1-Stealth)","SentCmdHealAtStealth","Stealth"};
	};
	class SentCmdHealAtDefault
	{
		versions[] = {"SentCmdHealAt_1",1};
		class SentCmdHealAt_1
		{
			text = "$STR_EP1_SENTCMDHEALAT_1";
			speech[] = {"%1.1","GetHelp","%2"};
		};
	};
	class SentCmdHealAtStealth
	{
		versions[] = {"SentCmdHealAt_1",1};
		class SentCmdHealAt_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDHEALAT_1";
			speech[] = {"%1.1","GetHelp","%2"};
		};
	};
	class SentCmdRepair
	{
		sentences[] = {"SentCmdRepairDefault","(1-Stealth)","SentCmdRepairStealth","Stealth"};
	};
	class SentCmdRepairDefault
	{
		versions[] = {"SentCmdRepair_1",1};
		class SentCmdRepair_1
		{
			text = "$STR_EP1_SENTCMDREPAIR_1";
			speech[] = {"%1.1","GetHelp","%2"};
		};
	};
	class SentCmdRepairStealth
	{
		versions[] = {"SentCmdRepair_1",1};
		class SentCmdRepair_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDREPAIR_1";
			speech[] = {"%1.1","GetHelp","%2"};
		};
	};
	class SentCmdRepairFar
	{
		sentences[] = {"SentCmdRepairFarDefault","(1-Stealth)","SentCmdRepairFarStealth","Stealth"};
	};
	class SentCmdRepairFarDefault
	{
		versions[] = {"SentCmdRepairFar_1",1};
		class SentCmdRepairFar_1
		{
			text = "$STR_EP1_SENTCMDREPAIRFAR_1";
			speech[] = {"%1.1","GetHelpAt","%2"};
		};
	};
	class SentCmdRepairFarStealth
	{
		versions[] = {"SentCmdRepairFar_1",1};
		class SentCmdRepairFar_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDREPAIRFAR_1";
			speech[] = {"%1.1","GetHelpAt","%2"};
		};
	};
	class SentCmdRepairAt
	{
		sentences[] = {"SentCmdRepairAtDefault","(1-Stealth)","SentCmdRepairAtStealth","Stealth"};
	};
	class SentCmdRepairAtDefault
	{
		versions[] = {"SentCmdRepairAt_1",1};
		class SentCmdRepairAt_1
		{
			text = "$STR_EP1_SENTCMDREPAIRAT_1";
			speech[] = {"%1.1","GetHelp","%2"};
		};
	};
	class SentCmdRepairAtStealth
	{
		versions[] = {"SentCmdRepairAt_1",1};
		class SentCmdRepairAt_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDREPAIRAT_1";
			speech[] = {"%1.1","GetHelp","%2"};
		};
	};
	class SentCmdRefuel
	{
		sentences[] = {"SentCmdRefuelDefault","(1-Stealth)","SentCmdRefuelStealth","Stealth"};
	};
	class SentCmdRefuelDefault
	{
		versions[] = {"SentCmdRefuel_1",1};
		class SentCmdRefuel_1
		{
			text = "$STR_EP1_SENTCMDREFUEL_1";
			speech[] = {"%1.1","GetSupport","%2"};
		};
	};
	class SentCmdRefuelStealth
	{
		versions[] = {"SentCmdRefuel_1",1};
		class SentCmdRefuel_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDREFUEL_1";
			speech[] = {"%1.1","GetSupport","%2"};
		};
	};
	class SentCmdRefuelFar
	{
		sentences[] = {"SentCmdRefuelFarDefault","(1-Stealth)","SentCmdRefuelFarStealth","Stealth"};
	};
	class SentCmdRefuelFarDefault
	{
		versions[] = {"SentCmdRefuelFar_1",1};
		class SentCmdRefuelFar_1
		{
			text = "$STR_EP1_SENTCMDREFUELFAR_1";
			speech[] = {"%1.1","GetSupportAt","%2"};
		};
	};
	class SentCmdRefuelFarStealth
	{
		versions[] = {"SentCmdRefuelFar_1",1};
		class SentCmdRefuelFar_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDREFUELFAR_1";
			speech[] = {"%1.1","GetSupportAt","%2"};
		};
	};
	class SentCmdRefuelAt
	{
		sentences[] = {"SentCmdRefuelAtDefault","(1-Stealth)","SentCmdRefuelAtStealth","Stealth"};
	};
	class SentCmdRefuelAtDefault
	{
		versions[] = {"SentCmdRefuelAt_1",1};
		class SentCmdRefuelAt_1
		{
			text = "$STR_EP1_SENTCMDREFUELAT_1";
			speech[] = {"%1.1","GetSupport","%2"};
		};
	};
	class SentCmdRefuelAtStealth
	{
		versions[] = {"SentCmdRefuelAt_1",1};
		class SentCmdRefuelAt_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDREFUELAT_1";
			speech[] = {"%1.1","GetSupport","%2"};
		};
	};
	class SentCmdRearm
	{
		sentences[] = {"SentCmdRearmDefault","(1-Stealth)","SentCmdRearmStealth","Stealth"};
	};
	class SentCmdRearmDefault
	{
		versions[] = {"SentCmdRearm_1",1};
		class SentCmdRearm_1
		{
			text = "$STR_EP1_SENTCMDREARM_1";
			speech[] = {"%1.1","GetSupport","%2"};
		};
	};
	class SentCmdRearmStealth
	{
		versions[] = {"SentCmdRearm_1",1};
		class SentCmdRearm_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDREARM_1";
			speech[] = {"%1.1","GetSupport","%2"};
		};
	};
	class SentCmdRearmFar
	{
		sentences[] = {"SentCmdRearmFarDefault","(1-Stealth)","SentCmdRearmFarStealth","Stealth"};
	};
	class SentCmdRearmFarDefault
	{
		versions[] = {"SentCmdRearmFar_1",1};
		class SentCmdRearmFar_1
		{
			text = "$STR_EP1_SENTCMDREARMFAR_1";
			speech[] = {"%1.1","GetSupportAt","%2"};
		};
	};
	class SentCmdRearmFarStealth
	{
		versions[] = {"SentCmdRearmFar_1",1};
		class SentCmdRearmFar_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDREARMFAR_1";
			speech[] = {"%1.1","GetSupportAt","%2"};
		};
	};
	class SentCmdRearmAt
	{
		sentences[] = {"SentCmdRearmAtDefault","(1-Stealth)","SentCmdRearmAtStealth","Stealth"};
	};
	class SentCmdRearmAtDefault
	{
		versions[] = {"SentCmdRearmAt_1",1};
		class SentCmdRearmAt_1
		{
			text = "$STR_EP1_SENTCMDREARMAT_1";
			speech[] = {"%1.1","GetSupport","%2"};
		};
	};
	class SentCmdRearmAtStealth
	{
		versions[] = {"SentCmdRearmAt_1",1};
		class SentCmdRearmAt_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDREARMAT_1";
			speech[] = {"%1.1","GetSupport","%2"};
		};
	};
	class SentCmdSupport
	{
		sentences[] = {"SentCmdSupportDefault","(1-Stealth)","SentCmdSupportStealth","Stealth"};
	};
	class SentCmdSupportDefault
	{
		versions[] = {"SentCmdSupport_1",1};
		class SentCmdSupport_1
		{
			text = "$STR_EP1_SENTCMDSUPPORT_1";
			speech[] = {"%1.1","GetSupport","%2"};
		};
	};
	class SentCmdSupportStealth
	{
		versions[] = {"SentCmdSupport_1",1};
		class SentCmdSupport_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDSUPPORT_1";
			speech[] = {"%1.1","GetSupport","%2"};
		};
	};
	class SentCmdSupportFar
	{
		sentences[] = {"SentCmdSupportFarDefault","(1-Stealth)","SentCmdSupportFarStealth","Stealth"};
	};
	class SentCmdSupportFarDefault
	{
		versions[] = {"SentCmdSupportFar_1",1};
		class SentCmdSupportFar_1
		{
			text = "$STR_EP1_SENTCMDSUPPORTFAR_1";
			speech[] = {"%1.1","GetSupportAt","%2"};
		};
	};
	class SentCmdSupportFarStealth
	{
		versions[] = {"SentCmdSupportFar_1",1};
		class SentCmdSupportFar_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDSUPPORTFAR_1";
			speech[] = {"%1.1","GetSupportAt","%2"};
		};
	};
	class SentCmdSupportAt
	{
		sentences[] = {"SentCmdSupportAtDefault","(1-Stealth)","SentCmdSupportAtStealth","Stealth"};
	};
	class SentCmdSupportAtDefault
	{
		versions[] = {"SentCmdSupportAt_1",1};
		class SentCmdSupportAt_1
		{
			text = "$STR_EP1_SENTCMDSUPPORTAT_1";
			speech[] = {"%1.1","GetSupport","%2"};
		};
	};
	class SentCmdSupportAtStealth
	{
		versions[] = {"SentCmdSupportAt_1",1};
		class SentCmdSupportAt_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDSUPPORTAT_1";
			speech[] = {"%1.1","GetSupport","%2"};
		};
	};
	class SentCmdDropWeapon
	{
		sentences[] = {"SentCmdDropWeaponDefault","(1-Stealth)","SentCmdDropWeaponStealth","Stealth"};
	};
	class SentCmdDropWeaponDefault
	{
		versions[] = {"SentCmdDropWeapon_1",1};
		class SentCmdDropWeapon_1
		{
			text = "$STR_EP1_SENTCMDDROPWEAPON_1";
			speech[] = {"%1.1","DropThat","%2"};
		};
	};
	class SentCmdDropWeaponStealth
	{
		versions[] = {"SentCmdDropWeapon_1",1};
		class SentCmdDropWeapon_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDDROPWEAPON_1";
			speech[] = {"%1.1","DropThat","%2"};
		};
	};
	class SentCmdDropMagazine
	{
		sentences[] = {"SentCmdDropMagazineDefault","(1-Stealth)","SentCmdDropMagazineStealth","Stealth"};
	};
	class SentCmdDropMagazineDefault
	{
		versions[] = {"SentCmdDropMagazine_1",1};
		class SentCmdDropMagazine_1
		{
			text = "$STR_EP1_SENTCMDDROPMAGAZINE_1";
			speech[] = {"%1.1","DropThat","Magazine"};
		};
	};
	class SentCmdDropMagazineStealth
	{
		versions[] = {"SentCmdDropMagazine_1",1};
		class SentCmdDropMagazine_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDDROPMAGAZINE_1";
			speech[] = {"%1.1","DropThat","Magazine"};
		};
	};
	class SentCmdTakeWeapon
	{
		sentences[] = {"SentCmdTakeWeaponDefault","(1-Stealth)","SentCmdTakeWeaponStealth","Stealth"};
	};
	class SentCmdTakeWeaponDefault
	{
		versions[] = {"SentCmdTakeWeapon_1",1};
		class SentCmdTakeWeapon_1
		{
			text = "$STR_EP1_SENTCMDTAKEWEAPON_1";
			speech[] = {"%1.1","TakeThat","%2"};
		};
	};
	class SentCmdTakeWeaponStealth
	{
		versions[] = {"SentCmdTakeWeapon_1",1};
		class SentCmdTakeWeapon_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDTAKEWEAPON_1";
			speech[] = {"%1.1","TakeThat","%2"};
		};
	};
	class SentCmdTakeWeaponFar
	{
		sentences[] = {"SentCmdTakeWeaponFarDefault","(1-Stealth)","SentCmdTakeWeaponFarStealth","Stealth"};
	};
	class SentCmdTakeWeaponFarDefault
	{
		versions[] = {"SentCmdTakeWeaponFar_1",1};
		class SentCmdTakeWeaponFar_1
		{
			text = "$STR_EP1_SENTCMDTAKEWEAPONFAR_1";
			speech[] = {"%1.1","TakeThat","%2"};
		};
	};
	class SentCmdTakeWeaponFarStealth
	{
		versions[] = {"SentCmdTakeWeaponFar_1",1};
		class SentCmdTakeWeaponFar_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDTAKEWEAPONFAR_1";
			speech[] = {"%1.1","TakeThat","%2"};
		};
	};
	class SentCmdTakeWeaponAt
	{
		sentences[] = {"SentCmdTakeWeaponAtDefault","(1-Stealth)","SentCmdTakeWeaponAtStealth","Stealth"};
	};
	class SentCmdTakeWeaponAtDefault
	{
		versions[] = {"SentCmdTakeWeaponAt_1",1};
		class SentCmdTakeWeaponAt_1
		{
			text = "$STR_EP1_SENTCMDTAKEWEAPONAT_1";
			speech[] = {"%1.1","TakeThat","%2"};
		};
	};
	class SentCmdTakeWeaponAtStealth
	{
		versions[] = {"SentCmdTakeWeaponAt_1",1};
		class SentCmdTakeWeaponAt_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDTAKEWEAPONAT_1";
			speech[] = {"%1.1","TakeThat","%2"};
		};
	};
	class SentCmdTakeMagazine
	{
		sentences[] = {"SentCmdTakeMagazineDefault","(1-Stealth)","SentCmdTakeMagazineStealth","Stealth"};
	};
	class SentCmdTakeMagazineDefault
	{
		versions[] = {"SentCmdTakeMagazine_1",1};
		class SentCmdTakeMagazine_1
		{
			text = "$STR_EP1_SENTCMDTAKEMAGAZINE_1";
			speech[] = {"%1.1","TakeThat","Magazine"};
		};
	};
	class SentCmdTakeMagazineStealth
	{
		versions[] = {"SentCmdTakeMagazine_1",1};
		class SentCmdTakeMagazine_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDTAKEMAGAZINE_1";
			speech[] = {"%1.1","TakeThat","Magazine"};
		};
	};
	class SentCmdTakeMagazineFar
	{
		sentences[] = {"SentCmdTakeMagazineFarDefault","(1-Stealth)","SentCmdTakeMagazineFarStealth","Stealth"};
	};
	class SentCmdTakeMagazineFarDefault
	{
		versions[] = {"SentCmdTakeMagazineFar_1",1};
		class SentCmdTakeMagazineFar_1
		{
			text = "$STR_EP1_SENTCMDTAKEMAGAZINEFAR_1";
			speech[] = {"%1.1","TakeThat","Magazine"};
		};
	};
	class SentCmdTakeMagazineFarStealth
	{
		versions[] = {"SentCmdTakeMagazineFar_1",1};
		class SentCmdTakeMagazineFar_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDTAKEMAGAZINEFAR_1";
			speech[] = {"%1.1","TakeThat","Magazine"};
		};
	};
	class SentCmdTakeMagazineAt
	{
		sentences[] = {"SentCmdTakeMagazineAtDefault","(1-Stealth)","SentCmdTakeMagazineAtStealth","Stealth"};
	};
	class SentCmdTakeMagazineAtDefault
	{
		versions[] = {"SentCmdTakeMagazineAt_1",1};
		class SentCmdTakeMagazineAt_1
		{
			text = "$STR_EP1_SENTCMDTAKEMAGAZINEAT_1";
			speech[] = {"%1.1","TakeThat","Magazine"};
		};
	};
	class SentCmdTakeMagazineAtStealth
	{
		versions[] = {"SentCmdTakeMagazineAt_1",1};
		class SentCmdTakeMagazineAt_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDTAKEMAGAZINEAT_1";
			speech[] = {"%1.1","TakeThat","Magazine"};
		};
	};
	class SentCmdAction
	{
		sentences[] = {"SentCmdActionDefault","(1-Stealth)","SentCmdActionStealth","Stealth"};
	};
	class SentCmdActionDefault
	{
		versions[] = {"SentCmdAction_1",1};
		class SentCmdAction_1
		{
			text = "";
			speech[] = {"NO_SPEECH"};
		};
	};
	class SentCmdActionStealth
	{
		versions[] = {"SentCmdAction_1",1};
		class SentCmdAction_1
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"NO_SPEECH"};
		};
	};
	class SentCmdActionNear
	{
		sentences[] = {"SentCmdActionNearDefault","(1-Stealth)","SentCmdActionNearStealth","Stealth"};
	};
	class SentCmdActionNearDefault
	{
		versions[] = {"SentCmdActionNear_1",1};
		class SentCmdActionNear_1
		{
			text = "";
			speech[] = {"NO_SPEECH"};
		};
	};
	class SentCmdActionNearStealth
	{
		versions[] = {"SentCmdActionNear_1",1};
		class SentCmdActionNear_1
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"NO_SPEECH"};
		};
	};
	class SentCmdActionFar
	{
		sentences[] = {"SentCmdActionFarDefault","(1-Stealth)","SentCmdActionFarStealth","Stealth"};
	};
	class SentCmdActionFarDefault
	{
		versions[] = {"SentCmdActionFar_1",1};
		class SentCmdActionFar_1
		{
			text = "";
			speech[] = {"NO_SPEECH"};
		};
	};
	class SentCmdActionFarStealth
	{
		versions[] = {"SentCmdActionFar_1",1};
		class SentCmdActionFar_1
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"NO_SPEECH"};
		};
	};
	class SentCmdActionAt
	{
		sentences[] = {"SentCmdActionAtDefault","(1-Stealth)","SentCmdActionAtStealth","Stealth"};
	};
	class SentCmdActionAtDefault
	{
		versions[] = {"SentCmdActionAt_1",1};
		class SentCmdActionAt_1
		{
			text = "";
			speech[] = {"NO_SPEECH"};
		};
	};
	class SentCmdActionAtStealth
	{
		versions[] = {"SentCmdActionAt_1",1};
		class SentCmdActionAt_1
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"NO_SPEECH"};
		};
	};
	class SentCmdTakeFlag
	{
		sentences[] = {"SentCmdTakeFlagDefault","(1-Stealth)","SentCmdTakeFlagStealth","Stealth"};
	};
	class SentCmdTakeFlagDefault
	{
		versions[] = {"SentCmdTakeFlag_1",1};
		class SentCmdTakeFlag_1
		{
			text = "$STR_EP1_SENTCMDTAKEFLAG_1";
			speech[] = {"%1.1","TakeTheFlag"};
		};
	};
	class SentCmdTakeFlagStealth
	{
		versions[] = {"SentCmdTakeFlag_1",1};
		class SentCmdTakeFlag_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDTAKEFLAG_1";
			speech[] = {"%1.1","TakeTheFlag"};
		};
	};
	class SentCmdTakeFlagFar
	{
		sentences[] = {"SentCmdTakeFlagFarDefault","(1-Stealth)","SentCmdTakeFlagFarStealth","Stealth"};
	};
	class SentCmdTakeFlagFarDefault
	{
		versions[] = {"SentCmdTakeFlagFar_1",1};
		class SentCmdTakeFlagFar_1
		{
			text = "$STR_EP1_SENTCMDTAKEFLAGFAR_1";
			speech[] = {"%1.1","TakeTheFlag"};
		};
	};
	class SentCmdTakeFlagFarStealth
	{
		versions[] = {"SentCmdTakeFlagFar_1",1};
		class SentCmdTakeFlagFar_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDTAKEFLAGFAR_1";
			speech[] = {"%1.1","TakeTheFlag"};
		};
	};
	class SentCmdTakeFlagAt
	{
		sentences[] = {"SentCmdTakeFlagAtDefault","(1-Stealth)","SentCmdTakeFlagAtStealth","Stealth"};
	};
	class SentCmdTakeFlagAtDefault
	{
		versions[] = {"SentCmdTakeFlagAt_1",1};
		class SentCmdTakeFlagAt_1
		{
			text = "$STR_EP1_SENTCMDTAKEFLAGAT_1";
			speech[] = {"%1.1","TakeTheFlag"};
		};
	};
	class SentCmdTakeFlagAtStealth
	{
		versions[] = {"SentCmdTakeFlagAt_1",1};
		class SentCmdTakeFlagAt_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDTAKEFLAGAT_1";
			speech[] = {"%1.1","TakeTheFlag"};
		};
	};
	class SentCmdReturnFlag
	{
		sentences[] = {"SentCmdReturnFlagDefault",1};
	};
	class SentCmdReturnFlagDefault
	{
		versions[] = {"SentCmdReturnFlag_1",1};
		class SentCmdReturnFlag_1
		{
			text = "$STR_EP1_SENTCMDRETURNFLAG_1";
			speech[] = {"%1.1","ReturnTheFlag"};
		};
	};
	class SentCmdReturnFlagFar
	{
		sentences[] = {"SentCmdReturnFlagFarDefault",1};
	};
	class SentCmdReturnFlagFarDefault
	{
		versions[] = {"SentCmdReturnFlagFar_1",1};
		class SentCmdReturnFlagFar_1
		{
			text = "$STR_EP1_SENTCMDRETURNFLAGFAR_1";
			speech[] = {"%1.1","ReturnTheFlag"};
		};
	};
	class SentCmdReturnFlagAt
	{
		sentences[] = {"SentCmdReturnFlagAtDefault",1};
	};
	class SentCmdReturnFlagAtDefault
	{
		versions[] = {"SentCmdReturnFlagAt_1",1};
		class SentCmdReturnFlagAt_1
		{
			text = "$STR_EP1_SENTCMDRETURNFLAGAT_1";
			speech[] = {"%1.1","ReturnTheFlag"};
		};
	};
	class SentCmdEject
	{
		sentences[] = {"SentCmdEjectDefault","(1-Stealth)","SentCmdEjectStealth","Stealth"};
	};
	class SentCmdEjectDefault
	{
		versions[] = {"SentCmdEject_1",0.5,"SentCmdEject_2",0.5};
		class SentCmdEject_1
		{
			text = "$STR_EP1_SENTCMDEJECT_1";
			speech[] = {"%1.1","EjectE"};
		};
		class SentCmdEject_2
		{
			text = "$STR_EP1_SENTCMDEJECT_2";
			speech[] = {"%1.1","BailOutE"};
		};
	};
	class SentCmdEjectStealth
	{
		versions[] = {"SentCmdEject_1",1,"SentCmdEject_2",0};
		class SentCmdEject_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDEJECT_1";
			speech[] = {"%1.1","EjectE"};
		};
		class SentCmdEject_2
		{
			text = "$STR_EP1_SENTCMDEJECT_2";
			speech[] = {"%1.1","BailOutE"};
		};
	};
	class SentCmdPlaceCharge
	{
		sentences[] = {"SentCmdPlaceChargeDefault","(1-Stealth)","SentCmdPlaceChargeStealth","Stealth"};
	};
	class SentCmdPlaceChargeDefault
	{
		versions[] = {"SentCmdPlaceCharge_1",1};
		class SentCmdPlaceCharge_1
		{
			text = "$STR_EP1_SENTCMDPLACECHARGE_1";
			speech[] = {"%1.1","SetACharge"};
		};
	};
	class SentCmdPlaceChargeStealth
	{
		versions[] = {"SentCmdPlaceCharge_1",1};
		class SentCmdPlaceCharge_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDPLACECHARGE_1";
			speech[] = {"%1.1","SetACharge"};
		};
	};
	class SentCmdPlaceMine
	{
		sentences[] = {"SentCmdPlaceMineDefault",1};
	};
	class SentCmdPlaceMineDefault
	{
		versions[] = {"SentCmdPlaceMine_1",1};
		class SentCmdPlaceMine_1
		{
			text = "$STR_EP1_SENTCMDPLACEMINE_1";
			speech[] = {"%1.1","PlaceAMine"};
		};
	};
	class SentCmdDetonate
	{
		sentences[] = {"SentCmdDetonateDefault","(1-Stealth)","SentCmdDetonateStealth","Stealth"};
	};
	class SentCmdDetonateDefault
	{
		versions[] = {"SentCmdDetonate_1",1};
		class SentCmdDetonate_1
		{
			text = "$STR_EP1_SENTCMDDETONATE_1";
			speech[] = {"%1.1","DetonateCharge"};
		};
	};
	class SentCmdDetonateStealth
	{
		versions[] = {"SentCmdDetonate_1",1};
		class SentCmdDetonate_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDDETONATE_1";
			speech[] = {"%1.1","DetonateCharge"};
		};
	};
	class SentCmdActivateTimer
	{
		sentences[] = {"SentCmdActivateTimerDefault","(1-Stealth)","SentCmdActivateTimerStealth","Stealth"};
	};
	class SentCmdActivateTimerDefault
	{
		versions[] = {"SentCmdActivateTimer_1",1};
		class SentCmdActivateTimer_1
		{
			text = "$STR_EP1_SENTCMDACTIVATETIMER_1";
			speech[] = {"%1.1","SetTheTimer"};
		};
	};
	class SentCmdActivateTimerStealth
	{
		versions[] = {"SentCmdActivateTimer_1",1};
		class SentCmdActivateTimer_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDACTIVATETIMER_1";
			speech[] = {"%1.1","SetTheTimer"};
		};
	};
	class SentCmdDeactivateBomb
	{
		sentences[] = {"SentCmdDeactivateBombDefault","(1-Stealth)","SentCmdDeactivateBombStealth","Stealth"};
	};
	class SentCmdDeactivateBombDefault
	{
		versions[] = {"SentCmdDeactivateBomb_1",1};
		class SentCmdDeactivateBomb_1
		{
			text = "$STR_EP1_SENTCMDDEACTIVATEBOMB_1";
			speech[] = {"%1.1","DeactivateCharge"};
		};
	};
	class SentCmdDeactivateBombStealth
	{
		versions[] = {"SentCmdDeactivateBomb_1",1};
		class SentCmdDeactivateBomb_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDDEACTIVATEBOMB_1";
			speech[] = {"%1.1","DeactivateCharge"};
		};
	};
	class SentCmdDeactivateMine
	{
		sentences[] = {"SentCmdDeactivateMineDefault","(1-Stealth)","SentCmdDeactivateMineStealth","Stealth"};
	};
	class SentCmdDeactivateMineDefault
	{
		versions[] = {"SentCmdDeactivateMine_1",1};
		class SentCmdDeactivateMine_1
		{
			text = "$STR_EP1_SENTCMDDEACTIVATEMINE_1";
			speech[] = {"%1.1","DisarmThatMine"};
		};
	};
	class SentCmdDeactivateMineStealth
	{
		versions[] = {"SentCmdDeactivateMine_1",1};
		class SentCmdDeactivateMine_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDDEACTIVATEMINE_1";
			speech[] = {"%1.1","DisarmThatMine"};
		};
	};
	class SentCmdTakeMine
	{
		sentences[] = {"SentCmdTakeMineDefault","(1-Stealth)","SentCmdTakeMineStealth","Stealth"};
	};
	class SentCmdTakeMineDefault
	{
		versions[] = {"SentCmdTakeMine_1",1};
		class SentCmdTakeMine_1
		{
			text = "$STR_EP1_SENTCMDTAKEMINE_1";
			speech[] = {"%1.1","TakeThatMine"};
		};
	};
	class SentCmdTakeMineStealth
	{
		versions[] = {"SentCmdTakeMine_1",1};
		class SentCmdTakeMine_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDTAKEMINE_1";
			speech[] = {"%1.1","TakeThatMine"};
		};
	};
	class SentCmdLightFire
	{
		sentences[] = {"SentCmdLightFireDefault","(1-Stealth)","SentCmdLightFireStealth","Stealth"};
	};
	class SentCmdLightFireDefault
	{
		versions[] = {"SentCmdLightFire_1",1};
		class SentCmdLightFire_1
		{
			text = "$STR_EP1_SENTCMDLIGHTFIRE_1";
			speech[] = {"LightThatFire"};
		};
	};
	class SentCmdLightFireStealth
	{
		versions[] = {"SentCmdLightFire_1",1};
		class SentCmdLightFire_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDLIGHTFIRE_1";
			speech[] = {"LightThatFire"};
		};
	};
	class SentCmdLightFireFar
	{
		sentences[] = {"SentCmdLightFireFarDefault","(1-Stealth)","SentCmdLightFireFarStealth","Stealth"};
	};
	class SentCmdLightFireFarDefault
	{
		versions[] = {"SentCmdLightFireFar_1",1};
		class SentCmdLightFireFar_1
		{
			text = "$STR_EP1_SENTCMDLIGHTFIREFAR_1";
			speech[] = {"%1.1","LightThatFire"};
		};
	};
	class SentCmdLightFireFarStealth
	{
		versions[] = {"SentCmdLightFireFar_1",1};
		class SentCmdLightFireFar_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDLIGHTFIREFAR_1";
			speech[] = {"%1.1","LightThatFire"};
		};
	};
	class SentCmdLightFireAt
	{
		sentences[] = {"SentCmdLightFireAtDefault","(1-Stealth)","SentCmdLightFireAtStealth","Stealth"};
	};
	class SentCmdLightFireAtDefault
	{
		versions[] = {"SentCmdLightFireAt_1",1};
		class SentCmdLightFireAt_1
		{
			text = "$STR_EP1_SENTCMDLIGHTFIREAT_1";
			speech[] = {"%1.1","LightThatFire"};
		};
	};
	class SentCmdLightFireAtStealth
	{
		versions[] = {"SentCmdLightFireAt_1",1};
		class SentCmdLightFireAt_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDLIGHTFIREAT_1";
			speech[] = {"%1.1","LightThatFire"};
		};
	};
	class SentCmdPutOutFire
	{
		sentences[] = {"SentCmdPutOutFireDefault","(1-Stealth)","SentCmdPutOutFireStealth","Stealth"};
	};
	class SentCmdPutOutFireDefault
	{
		versions[] = {"SentCmdPutOutFire_1",1};
		class SentCmdPutOutFire_1
		{
			text = "$STR_EP1_SENTCMDPUTOUTFIRE_1";
			speech[] = {"PutOutThatFire"};
		};
	};
	class SentCmdPutOutFireStealth
	{
		versions[] = {"SentCmdPutOutFire_1",1};
		class SentCmdPutOutFire_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDPUTOUTFIRE_1";
			speech[] = {"PutOutThatFire"};
		};
	};
	class SentCmdPutOutFireFar
	{
		sentences[] = {"SentCmdPutOutFireFarDefault","(1-Stealth)","SentCmdPutOutFireFarStealth","Stealth"};
	};
	class SentCmdPutOutFireFarDefault
	{
		versions[] = {"SentCmdPutOutFireFar_1",1};
		class SentCmdPutOutFireFar_1
		{
			text = "$STR_EP1_SENTCMDPUTOUTFIREFAR_1";
			speech[] = {"%1.1","PutOutThatFire"};
		};
	};
	class SentCmdPutOutFireFarStealth
	{
		versions[] = {"SentCmdPutOutFireFar_1",1};
		class SentCmdPutOutFireFar_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDPUTOUTFIREFAR_1";
			speech[] = {"%1.1","PutOutThatFire"};
		};
	};
	class SentCmdPutOutFireAt
	{
		sentences[] = {"SentCmdPutOutFireAtDefault","(1-Stealth)","SentCmdPutOutFireAtStealth","Stealth"};
	};
	class SentCmdPutOutFireAtDefault
	{
		versions[] = {"SentCmdPutOutFireAt_1",1};
		class SentCmdPutOutFireAt_1
		{
			text = "$STR_EP1_SENTCMDPUTOUTFIREAT_1";
			speech[] = {"%1.1","PutOutThatFire"};
		};
	};
	class SentCmdPutOutFireAtStealth
	{
		versions[] = {"SentCmdPutOutFireAt_1",1};
		class SentCmdPutOutFireAt_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDPUTOUTFIREAT_1";
			speech[] = {"%1.1","PutOutThatFire"};
		};
	};
	class SentCmdOpenDoor
	{
		sentences[] = {"SentCmdOpenDoorDefault","(1-Stealth)","SentCmdOpenDoorStealth","Stealth"};
	};
	class SentCmdOpenDoorDefault
	{
		versions[] = {"SentCmdOpenDoor_1",1};
		class SentCmdOpenDoor_1
		{
			text = "$STR_EP1_SENTCMDOPENDOOR_1";
			speech[] = {"%1.1","OpenThatDoor"};
		};
	};
	class SentCmdOpenDoorStealth
	{
		versions[] = {"SentCmdOpenDoor_1",1};
		class SentCmdOpenDoor_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDOPENDOOR_1";
			speech[] = {"%1.1","OpenThatDoor"};
		};
	};
	class SentCmdOpenDoorFar
	{
		sentences[] = {"SentCmdOpenDoorFarDefault","(1-Stealth)","SentCmdOpenDoorFarStealth","Stealth"};
	};
	class SentCmdOpenDoorFarDefault
	{
		versions[] = {"SentCmdOpenDoorFar_1",1};
		class SentCmdOpenDoorFar_1
		{
			text = "$STR_EP1_SENTCMDOPENDOORFAR_1";
			speech[] = {"%1.1","OpenThatDoor"};
		};
	};
	class SentCmdOpenDoorFarStealth
	{
		versions[] = {"SentCmdOpenDoorFar_1",1};
		class SentCmdOpenDoorFar_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDOPENDOORFAR_1";
			speech[] = {"%1.1","OpenThatDoor"};
		};
	};
	class SentCmdOpenDoorAt
	{
		sentences[] = {"SentCmdOpenDoorAtDefault","(1-Stealth)","SentCmdOpenDoorAtStealth","Stealth"};
	};
	class SentCmdOpenDoorAtDefault
	{
		versions[] = {"SentCmdOpenDoorAt_1",1};
		class SentCmdOpenDoorAt_1
		{
			text = "$STR_EP1_SENTCMDOPENDOORAT_1";
			speech[] = {"%1.1","OpenThatDoor"};
		};
	};
	class SentCmdOpenDoorAtStealth
	{
		versions[] = {"SentCmdOpenDoorAt_1",1};
		class SentCmdOpenDoorAt_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDOPENDOORAT_1";
			speech[] = {"%1.1","OpenThatDoor"};
		};
	};
	class SentCmdCloseDoor
	{
		sentences[] = {"SentCmdCloseDoorDefault","(1-Stealth)","SentCmdCloseDoorStealth","Stealth"};
	};
	class SentCmdCloseDoorDefault
	{
		versions[] = {"SentCmdCloseDoor_1",1};
		class SentCmdCloseDoor_1
		{
			text = "$STR_EP1_SENTCMDCLOSEDOOR_1";
			speech[] = {"%1.1","CloseThatDoor"};
		};
	};
	class SentCmdCloseDoorStealth
	{
		versions[] = {"SentCmdCloseDoor_1",1};
		class SentCmdCloseDoor_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDCLOSEDOOR_1";
			speech[] = {"%1.1","CloseThatDoor"};
		};
	};
	class SentCmdCloseDoorFar
	{
		sentences[] = {"SentCmdCloseDoorFarDefault","(1-Stealth)","SentCmdCloseDoorFarStealth","Stealth"};
	};
	class SentCmdCloseDoorFarDefault
	{
		versions[] = {"SentCmdCloseDoorFar_1",1};
		class SentCmdCloseDoorFar_1
		{
			text = "$STR_EP1_SENTCMDCLOSEDOORFAR_1";
			speech[] = {"%1.1","CloseThatDoor"};
		};
	};
	class SentCmdCloseDoorFarStealth
	{
		versions[] = {"SentCmdCloseDoorFar_1",1};
		class SentCmdCloseDoorFar_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDCLOSEDOORFAR_1";
			speech[] = {"%1.1","CloseThatDoor"};
		};
	};
	class SentCmdCloseDoorAt
	{
		sentences[] = {"SentCmdCloseDoorAtDefault","(1-Stealth)","SentCmdCloseDoorAtStealth","Stealth"};
	};
	class SentCmdCloseDoorAtDefault
	{
		versions[] = {"SentCmdCloseDoorAt_1",1};
		class SentCmdCloseDoorAt_1
		{
			text = "$STR_EP1_SENTCMDCLOSEDOORAT_1";
			speech[] = {"%1.1","CloseThatDoor"};
		};
	};
	class SentCmdCloseDoorAtStealth
	{
		versions[] = {"SentCmdCloseDoorAt_1",1};
		class SentCmdCloseDoorAt_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDCLOSEDOORAT_1";
			speech[] = {"%1.1","CloseThatDoor"};
		};
	};
	class SentCmdFollowMe
	{
		sentences[] = {"SentCmdFollowMeDefault","(1-Stealth)","SentCmdFollowMeStealth","Stealth"};
	};
	class SentCmdFollowMeDefault
	{
		versions[] = {"SentCmdFollowMe_1",0.33,"SentCmdFollowMe_2",0.33,"SentCmdFollowMe_3",0.33};
		class SentCmdFollowMe_1
		{
			text = "$STR_EP1_SENTCMDFOLLOWME_1";
			speech[] = {"%1","FallBackE"};
		};
		class SentCmdFollowMe_2
		{
			text = "$STR_EP1_SENTCMDFOLLOWME_2";
			speech[] = {"%1","ReturnToFormationE"};
		};
		class SentCmdFollowMe_3
		{
			text = "$STR_EP1_SENTCMDFOLLOWME_3";
			speech[] = {"%1","GetBackE"};
		};
	};
	class SentCmdFollowMeStealth
	{
		versions[] = {"SentCmdFollowMe_1",0.5,"SentCmdFollowMe_2",0,"SentCmdFollowMe_3",0.5};
		class SentCmdFollowMe_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDFOLLOWME_1";
			speech[] = {"%1","FallBackE"};
		};
		class SentCmdFollowMe_2
		{
			text = "$STR_EP1_SENTCMDFOLLOWME_2";
			speech[] = {"%1","ReturnToFormationE"};
		};
		class SentCmdFollowMe_3
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDFOLLOWME_3";
			speech[] = {"%1","GetBackE"};
		};
	};
	class SentCmdFollow
	{
		sentences[] = {"SentCmdFollowDefault","(1-Stealth)","SentCmdFollowStealth","Stealth"};
	};
	class SentCmdFollowDefault
	{
		versions[] = {"SentCmdFollow_1",1};
		class SentCmdFollow_1
		{
			text = "$STR_EP1_SENTCMDFOLLOW_1";
			speech[] = {"%1.1","Follow","%2.1"};
		};
	};
	class SentCmdFollowStealth
	{
		versions[] = {"SentCmdFollow_1",1};
		class SentCmdFollow_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDFOLLOW_1";
			speech[] = {"%1.1","Follow","%2.1"};
		};
	};
	class SentCmdAttack
	{
		sentences[] = {"SentCmdAttackDefault","(1-Stealth)","SentCmdAttackStealth","Stealth"};
	};
	class SentCmdAttackDefault
	{
		versions[] = {"SentCmdAttack_1",1};
		class SentCmdAttack_1
		{
			text = "$STR_EP1_SENTCMDATTACK_1";
			speech[] = {"%1.1","AttackThat","%2"};
		};
	};
	class SentCmdAttackStealth
	{
		versions[] = {"SentCmdAttack_1",1};
		class SentCmdAttack_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDATTACK_1";
			speech[] = {"%1.1","AttackThat","%2"};
		};
	};
	class SentAttackNoTarget
	{
		sentences[] = {"SentAttackNoTargetDefault","(1-Stealth)","SentAttackNoTargetStealth","Stealth"};
	};
	class SentAttackNoTargetDefault
	{
		versions[] = {"SentAttackNoTarget_1",1};
		class SentAttackNoTarget_1
		{
			text = "$STR_EP1_SENTATTACKNOTARGET_1";
			speech[] = {"%1.1","AttackE"};
		};
	};
	class SentAttackNoTargetStealth
	{
		versions[] = {"SentAttackNoTarget_1",1};
		class SentAttackNoTarget_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTATTACKNOTARGET_1";
			speech[] = {"%1.1","AttackE"};
		};
	};
	class SentCmdFire
	{
		sentences[] = {"SentCmdFireDefault","(1-Stealth)","SentCmdFireStealth","Stealth"};
	};
	class SentCmdFireDefault
	{
		versions[] = {"SentCmdFire_1",1};
		class SentCmdFire_1
		{
			text = "$STR_EP1_SENTCMDFIRE_1";
			speech[] = {"%1.1","FireAtThat","%2"};
		};
	};
	class SentCmdFireStealth
	{
		versions[] = {"SentCmdFire_1",1};
		class SentCmdFire_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDFIRE_1";
			speech[] = {"%1.1","FireAtThat","%2"};
		};
	};
	class SentCmdGetIn
	{
		sentences[] = {"SentCmdGetInDefault","(1-Stealth)","SentCmdGetInStealth","Stealth"};
	};
	class SentCmdGetInDefault
	{
		versions[] = {"SentCmdGetIn_1",1};
		class SentCmdGetIn_1
		{
			text = "$STR_EP1_SENTCMDGETIN_1";
			speech[] = {"%1.1","GetInThat","%2"};
		};
	};
	class SentCmdGetInStealth
	{
		versions[] = {"SentCmdGetIn_1",1};
		class SentCmdGetIn_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDGETIN_1";
			speech[] = {"%1.1","GetInThat","%2"};
		};
	};
	class SentCmdGetInCommander
	{
		sentences[] = {"SentCmdGetInCommanderDefault","(1-Stealth)","SentCmdGetInCommanderStealth","Stealth"};
	};
	class SentCmdGetInCommanderDefault
	{
		versions[] = {"SentCmdGetInCommander_1",1};
		class SentCmdGetInCommander_1
		{
			text = "$STR_EP1_SENTCMDGETINCOMMANDER_1";
			speech[] = {"%1.1","GetInThat","%2","Commander"};
		};
	};
	class SentCmdGetInCommanderStealth
	{
		versions[] = {"SentCmdGetInCommander_1",1};
		class SentCmdGetInCommander_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDGETINCOMMANDER_1";
			speech[] = {"%1.1","GetInThat","%2","Commander"};
		};
	};
	class SentCmdGetInDriver
	{
		sentences[] = {"SentCmdGetInDriverDefault","(1-Stealth)","SentCmdGetInDriverStealth","Stealth"};
	};
	class SentCmdGetInDriverDefault
	{
		versions[] = {"SentCmdGetInDriver_1",1};
		class SentCmdGetInDriver_1
		{
			text = "$STR_EP1_SENTCMDGETINDRIVER_1";
			speech[] = {"%1.1","GetInThat","%2","Driver"};
		};
	};
	class SentCmdGetInDriverStealth
	{
		versions[] = {"SentCmdGetInDriver_1",1};
		class SentCmdGetInDriver_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDGETINDRIVER_1";
			speech[] = {"%1.1","GetInThat","%2","Driver"};
		};
	};
	class SentCmdGetInPilot
	{
		sentences[] = {"SentCmdGetInPilotDefault","(1-Stealth)","SentCmdGetInPilotStealth","Stealth"};
	};
	class SentCmdGetInPilotDefault
	{
		versions[] = {"SentCmdGetInPilot_1",1};
		class SentCmdGetInPilot_1
		{
			text = "$STR_EP1_SENTCMDGETINPILOT_1";
			speech[] = {"%1.1","GetInThat","%2","Pilot"};
		};
	};
	class SentCmdGetInPilotStealth
	{
		versions[] = {"SentCmdGetInPilot_1",1};
		class SentCmdGetInPilot_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDGETINPILOT_1";
			speech[] = {"%1.1","GetInThat","%2","Pilot"};
		};
	};
	class SentCmdGetInGunner
	{
		sentences[] = {"SentCmdGetInGunnerDefault","(1-Stealth)","SentCmdGetInGunnerStealth","Stealth"};
	};
	class SentCmdGetInGunnerDefault
	{
		versions[] = {"SentCmdGetInGunner_1",1};
		class SentCmdGetInGunner_1
		{
			text = "$STR_EP1_SENTCMDGETINGUNNER_1";
			speech[] = {"%1.1","GetInThat","%2","Gunner"};
		};
	};
	class SentCmdGetInGunnerStealth
	{
		versions[] = {"SentCmdGetInGunner_1",1};
		class SentCmdGetInGunner_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDGETINGUNNER_1";
			speech[] = {"%1.1","GetInThat","%2","Gunner"};
		};
	};
	class SentCmdGetInCargo
	{
		sentences[] = {"SentCmdGetInCargoDefault","(1-Stealth)","SentCmdGetInCargoStealth","Stealth"};
	};
	class SentCmdGetInCargoDefault
	{
		versions[] = {"SentCmdGetInCargo_1",1};
		class SentCmdGetInCargo_1
		{
			text = "$STR_EP1_SENTCMDGETINCARGO_1";
			speech[] = {"%1.1","BoardThat","%2"};
		};
	};
	class SentCmdGetInCargoStealth
	{
		versions[] = {"SentCmdGetInCargo_1",1};
		class SentCmdGetInCargo_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDGETINCARGO_1";
			speech[] = {"%1.1","BoardThat","%2"};
		};
	};
	class SentCmdSwitchToDriver
	{
		sentences[] = {"SentCmdSwitchToDriverDefault","(1-Stealth)","SentCmdSwitchToDriverStealth","Stealth"};
	};
	class SentCmdSwitchToDriverDefault
	{
		versions[] = {"SentCmdSwitchToDriver_1",1};
		class SentCmdSwitchToDriver_1
		{
			text = "";
			speech[] = {"empty"};
		};
	};
	class SentCmdSwitchToDriverStealth
	{
		versions[] = {"SentCmdSwitchToDriver_1",1};
		class SentCmdSwitchToDriver_1
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"empty"};
		};
	};
	class SentCmdSwitchToGunner
	{
		sentences[] = {"SentCmdSwitchToGunnerDefault","(1-Stealth)","SentCmdSwitchToGunnerStealth","Stealth"};
	};
	class SentCmdSwitchToGunnerDefault
	{
		versions[] = {"SentCmdSwitchToGunner_1",1};
		class SentCmdSwitchToGunner_1
		{
			text = "";
			speech[] = {"empty"};
		};
	};
	class SentCmdSwitchToGunnerStealth
	{
		versions[] = {"SentCmdSwitchToGunner_1",1};
		class SentCmdSwitchToGunner_1
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"empty"};
		};
	};
	class SentCmdSwitchToCommander
	{
		sentences[] = {"SentCmdSwitchToCommanderDefault","(1-Stealth)","SentCmdSwitchToCommanderStealth","Stealth"};
	};
	class SentCmdSwitchToCommanderDefault
	{
		versions[] = {"SentCmdSwitchToCommander_1",1};
		class SentCmdSwitchToCommander_1
		{
			text = "";
			speech[] = {"empty"};
		};
	};
	class SentCmdSwitchToCommanderStealth
	{
		versions[] = {"SentCmdSwitchToCommander_1",1};
		class SentCmdSwitchToCommander_1
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"empty"};
		};
	};
	class SentCmdSwitchToCargo
	{
		sentences[] = {"SentCmdSwitchToCargoDefault","(1-Stealth)","SentCmdSwitchToCargoStealth","Stealth"};
	};
	class SentCmdSwitchToCargoDefault
	{
		versions[] = {"SentCmdSwitchToCargo_1",1};
		class SentCmdSwitchToCargo_1
		{
			text = "";
			speech[] = {"empty"};
		};
	};
	class SentCmdSwitchToCargoStealth
	{
		versions[] = {"SentCmdSwitchToCargo_1",1};
		class SentCmdSwitchToCargo_1
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"empty"};
		};
	};
	class SentCmdGetOut
	{
		sentences[] = {"SentCmdGetOutDefault","(1-Stealth)","SentCmdGetOutStealth","Stealth"};
	};
	class SentCmdGetOutDefault
	{
		versions[] = {"SentCmdGetOut_1",0.5,"SentCmdGetOut_2",0.5};
		class SentCmdGetOut_1
		{
			text = "$STR_EP1_SENTCMDGETOUT_1";
			speech[] = {"%1.1","Dismount"};
		};
		class SentCmdGetOut_2
		{
			text = "$STR_EP1_SENTCMDGETOUT_2";
			speech[] = {"%1.1","Disembark"};
		};
	};
	class SentCmdGetOutStealth
	{
		versions[] = {"SentCmdGetOut_1",1,"SentCmdGetOut_2",0};
		class SentCmdGetOut_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDGETOUT_1";
			speech[] = {"%1.1","Dismount"};
		};
		class SentCmdGetOut_2
		{
			text = "$STR_EP1_SENTCMDGETOUT_2";
			speech[] = {"%1.1","Disembark"};
		};
	};
	class SentCmdStop
	{
		sentences[] = {"SentCmdStopDefault","(1-Stealth)","SentCmdStopStealth","Stealth"};
	};
	class SentCmdStopDefault
	{
		versions[] = {"SentCmdStop_1",0.5,"SentCmdStop_2",0.5};
		class SentCmdStop_1
		{
			text = "$STR_EP1_SENTCMDSTOP_1";
			speech[] = {"%1.1","Halt"};
		};
		class SentCmdStop_2
		{
			text = "$STR_EP1_SENTCMDSTOP_2";
			speech[] = {"%1.1","StopE"};
		};
	};
	class SentCmdStopStealth
	{
		versions[] = {"SentCmdStop_1",0.5,"SentCmdStop_2",0.5};
		class SentCmdStop_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDSTOP_1";
			speech[] = {"%1.1","Halt"};
		};
		class SentCmdStop_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDSTOP_2";
			speech[] = {"%1.1","StopE"};
		};
	};
	class SentCmdExpect
	{
		sentences[] = {"SentCmdExpectDefault","(1-Stealth)","SentCmdExpectStealth","Stealth"};
	};
	class SentCmdExpectDefault
	{
		versions[] = {"SentCmdExpect_1",0.5,"SentCmdExpect_2",0.5};
		class SentCmdExpect_1
		{
			text = "$STR_EP1_SENTCMDEXPECT_1";
			speech[] = {"%1.1","Halt"};
		};
		class SentCmdExpect_2
		{
			text = "$STR_EP1_SENTCMDEXPECT_2";
			speech[] = {"%1.1","StopE"};
		};
	};
	class SentCmdExpectStealth
	{
		versions[] = {"SentCmdExpect_1",0.5,"SentCmdExpect_2",0.5};
		class SentCmdExpect_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDEXPECT_1";
			speech[] = {"%1.1","Halt"};
		};
		class SentCmdExpect_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDEXPECT_2";
			speech[] = {"%1.1","StopE"};
		};
	};
	class SentCmdHide
	{
		sentences[] = {"SentCmdHideDefault","(1-Stealth)","SentCmdHideStealth","Stealth"};
	};
	class SentCmdHideDefault
	{
		versions[] = {"SentCmdHide_1",1};
		class SentCmdHide_1
		{
			text = "$STR_EP1_SENTCMDHIDE_1";
			speech[] = {"%1.1","TakeCoverE"};
		};
	};
	class SentCmdHideStealth
	{
		versions[] = {"SentCmdHide_1",1};
		class SentCmdHide_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDHIDE_1";
			speech[] = {"%1.1","TakeCoverE"};
		};
	};
	class SentCmdDismiss
	{
		sentences[] = {"SentCmdDismissDefault","(1-Stealth)","SentCmdDismissStealth","Stealth"};
	};
	class SentCmdDismissDefault
	{
		versions[] = {"SentCmdDismiss_1",1};
		class SentCmdDismiss_1
		{
			text = "";
			speech[] = {};
		};
	};
	class SentCmdDismissStealth
	{
		versions[] = {"SentCmdDismiss_1",1};
		class SentCmdDismiss_1
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {};
		};
	};
	class SentNotifyAttack
	{
		sentences[] = {"SentNotifyAttackDefault","(1-Stealth)","SentNotifyAttackStealth","Stealth"};
	};
	class SentNotifyAttackDefault
	{
		versions[] = {"SentNotifyAttack_1",0.25,"SentNotifyAttack_2",0.25,"SentNotifyAttack_3",0.25,"SentNotifyAttack_4",0.25};
		class SentNotifyAttack_1
		{
			text = "$STR_EP1_SENTNOTIFYATTACK_1";
			speech[] = {"ImOnHim"};
		};
		class SentNotifyAttack_2
		{
			text = "$STR_EP1_SENTNOTIFYATTACK_2";
			speech[] = {"EngagingE"};
		};
		class SentNotifyAttack_3
		{
			text = "$STR_EP1_SENTNOTIFYATTACK_3";
			speech[] = {"EngagingTargetE"};
		};
		class SentNotifyAttack_4
		{
			text = "$STR_EP1_SENTNOTIFYATTACK_4";
			speech[] = {"AttackingE"};
		};
	};
	class SentNotifyAttackStealth
	{
		versions[] = {"SentNotifyAttack_1",0,"SentNotifyAttack_2",1,"SentNotifyAttack_3",0,"SentNotifyAttack_4",0};
		class SentNotifyAttack_1
		{
			text = "$STR_EP1_SENTNOTIFYATTACK_1";
			speech[] = {"ImOnHim"};
		};
		class SentNotifyAttack_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTNOTIFYATTACK_2";
			speech[] = {"EngagingE"};
		};
		class SentNotifyAttack_3
		{
			text = "$STR_EP1_SENTNOTIFYATTACK_3";
			speech[] = {"EngagingTargetE"};
		};
		class SentNotifyAttack_4
		{
			text = "$STR_EP1_SENTNOTIFYATTACK_4";
			speech[] = {"AttackingE"};
		};
	};
	class SentNotifyAttackSubgroup
	{
		sentences[] = {"SentNotifyAttackSubgroupDefault","(1-Stealth)","SentNotifyAttackSubgroupStealth","Stealth"};
	};
	class SentNotifyAttackSubgroupDefault
	{
		versions[] = {"SentNotifyAttackSubgroup_1",0.5,"SentNotifyAttackSubgroup_2",0.5};
		class SentNotifyAttackSubgroup_1
		{
			text = "$STR_EP1_SENTNOTIFYATTACKSUBGROUP_1";
			speech[] = {"%3.1","EngagingE"};
		};
		class SentNotifyAttackSubgroup_2
		{
			text = "$STR_EP1_SENTNOTIFYATTACKSUBGROUP_2";
			speech[] = {"%3.1","EngagingTargetE"};
		};
	};
	class SentNotifyAttackSubgroupStealth
	{
		versions[] = {"SentNotifyAttackSubgroup_1",1,"SentNotifyAttackSubgroup_2",0};
		class SentNotifyAttackSubgroup_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTNOTIFYATTACKSUBGROUP_1";
			speech[] = {"%3.1","EngagingE"};
		};
		class SentNotifyAttackSubgroup_2
		{
			text = "$STR_EP1_SENTNOTIFYATTACKSUBGROUP_2";
			speech[] = {"%3.1","EngagingTargetE"};
		};
	};
	class SentNotifySupport
	{
		sentences[] = {"SentNotifySupportDefault","(1-Stealth)","SentNotifySupportStealth","Stealth"};
	};
	class SentNotifySupportDefault
	{
		versions[] = {"SentNotifySupport_1",1};
		class SentNotifySupport_1
		{
			text = "$STR_EP1_SENTNOTIFYSUPPORT_1";
			speech[] = {"%1.1","Supporting"};
		};
	};
	class SentNotifySupportStealth
	{
		versions[] = {"SentNotifySupport_1",1};
		class SentNotifySupport_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTNOTIFYSUPPORT_1";
			speech[] = {"%1.1","Supporting"};
		};
	};
	class SentConfirmMove
	{
		sentences[] = {"SentConfirmMoveDefault","(1-Stealth)","SentConfirmMoveStealth","Stealth"};
	};
	class SentConfirmMoveDefault
	{
		versions[] = {"SentConfirmMove_1",0.17,"SentConfirmMove_2",0.17,"SentConfirmMove_3",0.17,"SentConfirmMove_4",0.17,"SentConfirmMove_5",0.17,"SentConfirmMove_6",0.17};
		class SentConfirmMove_1
		{
			text = "$STR_EP1_SENTCONFIRMMOVE_1";
			speech[] = {"Roger"};
		};
		class SentConfirmMove_2
		{
			text = "$STR_EP1_SENTCONFIRMMOVE_2";
			speech[] = {"Copy"};
		};
		class SentConfirmMove_3
		{
			text = "$STR_EP1_SENTCONFIRMMOVE_3";
			speech[] = {"OscarMike"};
		};
		class SentConfirmMove_4
		{
			text = "$STR_EP1_SENTCONFIRMMOVE_4";
			speech[] = {"Understood"};
		};
		class SentConfirmMove_5
		{
			text = "$STR_EP1_SENTCONFIRMMOVE_5";
			speech[] = {"SolidCopy"};
		};
		class SentConfirmMove_6
		{
			text = "$STR_EP1_SENTCONFIRMMOVE_6";
			speech[] = {"OnTheWay"};
		};
	};
	class SentConfirmMoveStealth
	{
		versions[] = {"SentConfirmMove_1",0.17,"SentConfirmMove_2",0.17,"SentConfirmMove_3",0.17,"SentConfirmMove_4",0.17,"SentConfirmMove_5",0.17,"SentConfirmMove_6",0.17};
		class SentConfirmMove_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCONFIRMMOVE_1";
			speech[] = {"Roger"};
		};
		class SentConfirmMove_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCONFIRMMOVE_2";
			speech[] = {"Copy"};
		};
		class SentConfirmMove_3
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCONFIRMMOVE_3";
			speech[] = {"OscarMike"};
		};
		class SentConfirmMove_4
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCONFIRMMOVE_4";
			speech[] = {"Understood"};
		};
		class SentConfirmMove_5
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCONFIRMMOVE_5";
			speech[] = {"SolidCopy"};
		};
		class SentConfirmMove_6
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCONFIRMMOVE_6";
			speech[] = {"OnTheWay"};
		};
	};
	class SentConfirmAttack
	{
		sentences[] = {"SentConfirmAttackDefault","(1-Stealth)","SentConfirmAttackStealth","Stealth"};
	};
	class SentConfirmAttackDefault
	{
		versions[] = {"SentConfirmAttack_1",0.5,"SentConfirmAttack_2",0.5};
		class SentConfirmAttack_1
		{
			text = "$STR_EP1_SENTCONFIRMATTACK_1";
			speech[] = {"Roger"};
		};
		class SentConfirmAttack_2
		{
			text = "$STR_EP1_SENTCONFIRMATTACK_2";
			speech[] = {"Copy"};
		};
	};
	class SentConfirmAttackStealth
	{
		versions[] = {"SentConfirmAttack_1",0.5,"SentConfirmAttack_2",0.5};
		class SentConfirmAttack_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCONFIRMATTACK_1";
			speech[] = {"Roger"};
		};
		class SentConfirmAttack_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCONFIRMATTACK_2";
			speech[] = {"Copy"};
		};
	};
	class SentConfirmOther
	{
		sentences[] = {"SentConfirmOtherDefault","(1-Stealth)","SentConfirmOtherStealth","Stealth"};
	};
	class SentConfirmOtherDefault
	{
		versions[] = {"SentConfirmOther_1",1};
		class SentConfirmOther_1
		{
			text = "$STR_EP1_SENTCONFIRMOTHER_1";
			speech[] = {"Roger"};
		};
	};
	class SentConfirmOtherStealth
	{
		versions[] = {"SentConfirmOther_1",1};
		class SentConfirmOther_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCONFIRMOTHER_1";
			speech[] = {"Roger"};
		};
	};
	class VehicleWatchTgt
	{
		sentences[] = {"VehicleWatchTgtDefault",1};
	};
	class VehicleWatchTgtDefault
	{
		versions[] = {"VehicleWatchTgt_1",1};
		class VehicleWatchTgt_1
		{
			text = "$STR_EP1_VEHICLEWATCHTGT_1";
			speech[] = {"XMIT","WatchThat","%1","At","%2"};
		};
	};
	class VehicleWatchPos
	{
		sentences[] = {"VehicleWatchPosDefault",1};
	};
	class VehicleWatchPosDefault
	{
		versions[] = {"VehicleWatchPos_1",1};
		class VehicleWatchPos_1
		{
			text = "$STR_EP1_VEHICLEWATCHPOS_1";
			speech[] = {"XMIT","ObserveThatPosition","%1","%2"};
		};
	};
	class VehicleJoin
	{
		sentences[] = {"VehicleJoinDefault",1};
	};
	class VehicleJoinDefault
	{
		versions[] = {"VehicleJoin_1",0.5,"VehicleJoin_2",0.5};
		class VehicleJoin_1
		{
			text = "$STR_EP1_VEHICLEJOIN_1";
			speech[] = {"XMIT","MaintainFormation"};
		};
		class VehicleJoin_2
		{
			text = "$STR_EP1_VEHICLEJOIN_2";
			speech[] = {"XMIT","StayInFormationE"};
		};
	};
	class VehicleFire
	{
		sentences[] = {"VehicleFireDefault",1};
	};
	class VehicleFireDefault
	{
		versions[] = {"VehicleFire_1",1};
		class VehicleFire_1
		{
			text = "$STR_EP1_VEHICLEFIRE_1";
			speech[] = {"XMIT","FireAtThat","%1"};
		};
	};
	class VehicleTarget
	{
		sentences[] = {"VehicleTargetDefault",1};
	};
	class VehicleTargetDefault
	{
		versions[] = {"VehicleTarget_1",1};
		class VehicleTarget_1
		{
			text = "$STR_EP1_VEHICLETARGET_1";
			speech[] = {"XMIT","TargetThat","%1","At","%2"};
		};
	};
	class VehicleNoTarget
	{
		sentences[] = {"VehicleNoTargetDefault",1};
	};
	class VehicleNoTargetDefault
	{
		versions[] = {"VehicleNoTarget_1",1};
		class VehicleNoTarget_1
		{
			text = "$STR_EP1_VEHICLENOTARGET_1";
			speech[] = {"XMIT","NoTarget"};
		};
	};
	class VehicleCeaseFire
	{
		sentences[] = {"VehicleCeaseFireDefault",1};
	};
	class VehicleCeaseFireDefault
	{
		versions[] = {"VehicleCeaseFire_1",1};
		class VehicleCeaseFire_1
		{
			text = "$STR_EP1_VEHICLECEASEFIRE_1";
			speech[] = {"XMIT","CeaseFireE"};
		};
	};
	class VehicleForward
	{
		sentences[] = {"VehicleForwardDefault",1};
	};
	class VehicleForwardDefault
	{
		versions[] = {"VehicleForward_1",1};
		class VehicleForward_1
		{
			text = "$STR_EP1_VEHICLEFORWARD_1";
			speech[] = {"XMIT","Forward"};
		};
	};
	class VehicleStop
	{
		sentences[] = {"VehicleStopDefault","(1-Stealth)","VehicleStopStealth","Stealth"};
	};
	class VehicleStopDefault
	{
		versions[] = {"VehicleStop_1",1};
		class VehicleStop_1
		{
			text = "$STR_EP1_VEHICLESTOP_1";
			speech[] = {"XMIT","Halt"};
		};
	};
	class VehicleStopStealth
	{
		versions[] = {"VehicleStop_1",1};
		class VehicleStop_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_VEHICLESTOP_1";
			speech[] = {"XMIT","Halt"};
		};
	};
	class VehicleBackward
	{
		sentences[] = {"VehicleBackwardDefault",1};
	};
	class VehicleBackwardDefault
	{
		versions[] = {"VehicleBackward_1",1};
		class VehicleBackward_1
		{
			text = "$STR_EP1_VEHICLEBACKWARD_1";
			speech[] = {"XMIT","Reverse"};
		};
	};
	class VehicleFaster
	{
		sentences[] = {"VehicleFasterDefault",1};
	};
	class VehicleFasterDefault
	{
		versions[] = {"VehicleFaster_1",1};
		class VehicleFaster_1
		{
			text = "$STR_EP1_VEHICLEFASTER_1";
			speech[] = {"XMIT","Fast"};
		};
	};
	class VehicleSlower
	{
		sentences[] = {"VehicleSlowerDefault",1};
	};
	class VehicleSlowerDefault
	{
		versions[] = {"VehicleSlower_1",1};
		class VehicleSlower_1
		{
			text = "$STR_EP1_VEHICLESLOWER_1";
			speech[] = {"XMIT","Slow"};
		};
	};
	class VehicleLeft
	{
		sentences[] = {"VehicleLeftDefault",1};
	};
	class VehicleLeftDefault
	{
		versions[] = {"VehicleLeft_1",1};
		class VehicleLeft_1
		{
			text = "$STR_EP1_VEHICLELEFT_1";
			speech[] = {"XMIT","LeftOrder"};
		};
	};
	class VehicleRight
	{
		sentences[] = {"VehicleRightDefault",1};
	};
	class VehicleRightDefault
	{
		versions[] = {"VehicleRight_1",1};
		class VehicleRight_1
		{
			text = "$STR_EP1_VEHICLERIGHT_1";
			speech[] = {"XMIT","RightOrder"};
		};
	};
	class VehicleManualFire
	{
		sentences[] = {"VehicleManualFireDefault",1};
	};
	class VehicleManualFireDefault
	{
		versions[] = {"VehicleManualFire_1",1};
		class VehicleManualFire_1
		{
			text = "$STR_EP1_VEHICLEMANUALFIRE_1";
			speech[] = {"XMIT","ManualFire"};
		};
	};
	class VehicleCancelManualFire
	{
		sentences[] = {"VehicleCancelManualFireDefault",1};
	};
	class VehicleCancelManualFireDefault
	{
		versions[] = {"VehicleCancelManualFire_1",1};
		class VehicleCancelManualFire_1
		{
			text = "$STR_EP1_VEHICLECANCELMANUALFIRE_1";
			speech[] = {"XMIT","CancelManualFire"};
		};
	};
	class VehicleDirectFire
	{
		sentences[] = {"VehicleDirectFireDefault","(1-Stealth)","VehicleDirectFireStealth","Stealth"};
	};
	class VehicleDirectFireDefault
	{
		versions[] = {"VehicleDirectFire_1",1};
		class VehicleDirectFire_1
		{
			text = "$STR_EP1_VEHICLEDIRECTFIRE_1";
			speech[] = {"XMIT","Fire"};
		};
	};
	class VehicleDirectFireStealth
	{
		versions[] = {"VehicleDirectFire_1",1};
		class VehicleDirectFire_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_VEHICLEDIRECTFIRE_1";
			speech[] = {"XMIT","Fire"};
		};
	};
	class VehicleLoad
	{
		sentences[] = {"VehicleLoadDefault","(1-Stealth)","VehicleLoadStealth","Stealth"};
	};
	class VehicleLoadDefault
	{
		versions[] = {"VehicleLoad_1",1};
		class VehicleLoad_1
		{
			text = "$STR_EP1_VEHICLELOAD_1";
			speech[] = {"%1"};
		};
	};
	class VehicleLoadStealth
	{
		versions[] = {"VehicleLoad_1",1};
		class VehicleLoad_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_VEHICLELOAD_1";
			speech[] = {"%1"};
		};
	};
	class VehicleLoadMagazine
	{
		sentences[] = {"VehicleLoadMagazineDefault","(1-Stealth)","VehicleLoadMagazineStealth","Stealth"};
	};
	class VehicleLoadMagazineDefault
	{
		versions[] = {"VehicleLoadMagazine_1",1};
		class VehicleLoadMagazine_1
		{
			text = "$STR_EP1_VEHICLELOADMAGAZINE_1";
			speech[] = {"%1"};
		};
	};
	class VehicleLoadMagazineStealth
	{
		versions[] = {"VehicleLoadMagazine_1",1};
		class VehicleLoadMagazine_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_VEHICLELOADMAGAZINE_1";
			speech[] = {"%1"};
		};
	};
	class VehicleAzimut
	{
		sentences[] = {"VehicleAzimutDefault","(1-Stealth)","VehicleAzimutStealth","Stealth"};
	};
	class VehicleAzimutDefault
	{
		versions[] = {"VehicleAzimut_1",1};
		class VehicleAzimut_1
		{
			text = "$STR_EP1_VEHICLEAZIMUT_1";
			speech[] = {"%1"};
		};
	};
	class VehicleAzimutStealth
	{
		versions[] = {"VehicleAzimut_1",1};
		class VehicleAzimut_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_VEHICLEAZIMUT_1";
			speech[] = {"%1"};
		};
	};
	class VehicleFireFailed
	{
		sentences[] = {"VehicleFireFailedDefault","(1-Stealth)","VehicleFireFailedStealth","Stealth"};
	};
	class VehicleFireFailedDefault
	{
		versions[] = {"VehicleFireFailed_1",0.5,"VehicleFireFailed_2",0.5};
		class VehicleFireFailed_1
		{
			text = "$STR_EP1_VEHICLEFIREFAILED_1";
			speech[] = {"Negative"};
		};
		class VehicleFireFailed_2
		{
			text = "$STR_EP1_VEHICLEFIREFAILED_2";
			speech[] = {"CannotFire"};
		};
	};
	class VehicleFireFailedStealth
	{
		versions[] = {"VehicleFireFailed_1",0.5,"VehicleFireFailed_2",0.5};
		class VehicleFireFailed_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_VEHICLEFIREFAILED_1";
			speech[] = {"Negative"};
		};
		class VehicleFireFailed_2
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_VEHICLEFIREFAILED_2";
			speech[] = {"CannotFire"};
		};
	};
	class SentSuppress
	{
		sentences[] = {"SentSuppressDefault",1};
	};
	class SentSuppressDefault
	{
		versions[] = {"SentSuppress_1",0.5,"SentSuppress_2",0.5};
		class SentSuppress_1
		{
			text = "$STR_EP1_SENTSUPPRESS_1";
			speech[] = {"%1","SuppressiveFireE"};
		};
		class SentSuppress_2
		{
			text = "$STR_EP1_SENTSUPPRESS_2";
			speech[] = {"%1","OpenUpE"};
		};
	};
	class ClausePosition
	{
		sentences[] = {"ClausePositionDefault","(1-Stealth)","ClausePositionStealth","Stealth"};
	};
	class ClausePositionDefault
	{
		versions[] = {"ClausePosition_1",1};
		class ClausePosition_1
		{
			text = "$STR_EP1_CLAUSEPOSITION_1";
			speech[] = {"%1","%2"};
		};
	};
	class ClausePositionStealth
	{
		versions[] = {"ClausePosition_1",1};
		class ClausePosition_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_CLAUSEPOSITION_1";
			speech[] = {"%1","%2"};
		};
	};
	class ClausePositionNear
	{
		sentences[] = {"ClausePositionNearDefault",1};
	};
	class ClausePositionNearDefault
	{
		versions[] = {"ClausePositionNear_1",1};
		class ClausePositionNear_1
		{
			text = "$STR_EP1_CLAUSEPOSITIONNEAR_1";
			speech[] = {"%1","%2"};
		};
	};
	class SentAssemble
	{
		sentences[] = {"SentAssembleDefault","(1-Stealth)","SentAssembleStealth","Stealth"};
	};
	class SentAssembleDefault
	{
		versions[] = {"SentAssemble_1",1};
		class SentAssemble_1
		{
			text = "$STR_EP1_SENTASSEMBLE_1";
			speech[] = {"%1","AssembleThat","%2"};
		};
	};
	class SentAssembleStealth
	{
		versions[] = {"SentAssemble_1",1};
		class SentAssemble_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTASSEMBLE_1";
			speech[] = {"%1","AssembleThat","%2"};
		};
	};
	class SentDisassemble
	{
		sentences[] = {"SentDisassembleDefault","(1-Stealth)","SentDisassembleStealth","Stealth"};
	};
	class SentDisassembleDefault
	{
		versions[] = {"SentDisassemble_1",1};
		class SentDisassemble_1
		{
			text = "$STR_EP1_SENTDISASSEMBLE_1";
			speech[] = {"%1","DisassembleThat","%2"};
		};
	};
	class SentDisassembleStealth
	{
		versions[] = {"SentDisassemble_1",1};
		class SentDisassemble_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTDISASSEMBLE_1";
			speech[] = {"%1","DisassembleThat","%2"};
		};
	};
	class SentCmdActionOpenBag
	{
		sentences[] = {"SentCmdActionOpenBagDefault","(1-Stealth)","SentCmdActionOpenBagStealth","Stealth"};
	};
	class SentCmdActionOpenBagDefault
	{
		versions[] = {"SentCmdActionOpenBag_1",1};
		class SentCmdActionOpenBag_1
		{
			text = "$STR_EP1_SENTCMDACTIONOPENBAG_1";
			speech[] = {"%1","OtevriBatoh"};
		};
	};
	class SentCmdActionOpenBagStealth
	{
		versions[] = {"SentCmdActionOpenBag_1",1};
		class SentCmdActionOpenBag_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDACTIONOPENBAG_1";
			speech[] = {"%1","OtevriBatoh"};
		};
	};
	class SentCmdActionDropBag
	{
		sentences[] = {"SentCmdActionDropBagDefault","(1-Stealth)","SentCmdActionDropBagStealth","Stealth"};
	};
	class SentCmdActionDropBagDefault
	{
		versions[] = {"SentCmdActionDropBag_1",1};
		class SentCmdActionDropBag_1
		{
			text = "$STR_EP1_SENTCMDACTIONDROPBAG_1";
			speech[] = {"%1","OdlozBatoh"};
		};
	};
	class SentCmdActionDropBagStealth
	{
		versions[] = {"SentCmdActionDropBag_1",1};
		class SentCmdActionDropBag_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDACTIONDROPBAG_1";
			speech[] = {"%1","OdlozBatoh"};
		};
	};
	class SentCmdActionTakeBag
	{
		sentences[] = {"SentCmdActionTakeBagDefault","(1-Stealth)","SentCmdActionTakeBagStealth","Stealth"};
	};
	class SentCmdActionTakeBagDefault
	{
		versions[] = {"SentCmdActionTakeBag_1",1};
		class SentCmdActionTakeBag_1
		{
			text = "$STR_EP1_SENTCMDACTIONTAKEBAG_1";
			speech[] = {"%1","VezmiSiTenBatoh"};
		};
	};
	class SentCmdActionTakeBagStealth
	{
		versions[] = {"SentCmdActionTakeBag_1",1};
		class SentCmdActionTakeBag_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTCMDACTIONTAKEBAG_1";
			speech[] = {"%1","VezmiSiTenBatoh"};
		};
	};
	class SentLightsOn
	{
		sentences[] = {"SentLightsOnDefault","(1-Stealth)","SentLightsOnStealth","Stealth"};
	};
	class SentLightsOnDefault
	{
		versions[] = {"SentLightsOn_1",1};
		class SentLightsOn_1
		{
			text = "$STR_EP1_SENTLIGHTSON_1";
			speech[] = {"%1","FlashlightsOn"};
		};
	};
	class SentLightsOnStealth
	{
		versions[] = {"SentLightsOn_1",1};
		class SentLightsOn_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTLIGHTSON_1";
			speech[] = {"%1","FlashlightsOn"};
		};
	};
	class SentLightsOff
	{
		sentences[] = {"SentLightsOffDefault","(1-Stealth)","SentLightsOffStealth","Stealth"};
	};
	class SentLightsOffDefault
	{
		versions[] = {"SentLightsOff_1",1};
		class SentLightsOff_1
		{
			text = "$STR_EP1_SENTLIGHTSOFF_1";
			speech[] = {"%1","FlashlightsOff"};
		};
	};
	class SentLightsOffStealth
	{
		versions[] = {"SentLightsOff_1",1};
		class SentLightsOff_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTLIGHTSOFF_1";
			speech[] = {"%1","FlashlightsOff"};
		};
	};
	class SentPointersOn
	{
		sentences[] = {"SentPointersOnDefault","(1-Stealth)","SentPointersOnStealth","Stealth"};
	};
	class SentPointersOnDefault
	{
		versions[] = {"SentPointersOn_1",1};
		class SentPointersOn_1
		{
			text = "$STR_EP1_SENTPOINTERSON_1";
			speech[] = {"%1","LasersOn"};
		};
	};
	class SentPointersOnStealth
	{
		versions[] = {"SentPointersOn_1",1};
		class SentPointersOn_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTPOINTERSON_1";
			speech[] = {"%1","LasersOn"};
		};
	};
	class SentPointersOff
	{
		sentences[] = {"SentPointersOffDefault","(1-Stealth)","SentPointersOffStealth","Stealth"};
	};
	class SentPointersOffDefault
	{
		versions[] = {"SentPointersOff_1",1};
		class SentPointersOff_1
		{
			text = "$STR_EP1_SENTPOINTERSOFF_1";
			speech[] = {"%1","LasersOff"};
		};
	};
	class SentPointersOffStealth
	{
		versions[] = {"SentPointersOff_1",1};
		class SentPointersOff_1
		{
			wordsClass = "StealthWords";
			text = "$STR_EP1_SENTPOINTERSOFF_1";
			speech[] = {"%1","LasersOff"};
		};
	};
	class SentSuppressing
	{
		sentences[] = {"SentSuppressingDefault","(1-Stealth)","SentSuppressingStealth","Stealth"};
	};
	class SentSuppressingDefault
	{
		versions[] = {"SentSuppressing_1",0.2,"SentSuppressing_2",0.2,"SentSuppressing_3",0.2,"SentSuppressing_4",0.2,"SentSuppressing_5",0.2};
		class SentSuppressing_1
		{
			text = "$STR_EP1_SENTSUPPRESSING_1";
			speech[] = {"CS_SuppressiveFireE"};
		};
		class SentSuppressing_2
		{
			text = "$STR_EP1_SENTSUPPRESSING_2";
			speech[] = {"CS_HangOnIllSuppressEmE"};
		};
		class SentSuppressing_3
		{
			text = "$STR_EP1_SENTSUPPRESSING_3";
			speech[] = {"CS_SuppressingE"};
		};
		class SentSuppressing_4
		{
			text = "$STR_EP1_SENTSUPPRESSING_4";
			speech[] = {"CS_CoveringFireE"};
		};
		class SentSuppressing_5
		{
			gesture = "GestureCover";
			text = "";
			speech[] = {};
		};
	};
	class SentSuppressingStealth
	{
		versions[] = {};
	};
	class SentCovering
	{
		sentences[] = {"SentCoveringDefault","(1-Stealth)","SentCoveringStealth","Stealth"};
	};
	class SentCoveringDefault
	{
		versions[] = {"SentCovering_1",0.11,"SentCovering_2",0.11,"SentCovering_3",0.11,"SentCovering_4",0.11,"SentCovering_5",0.11,"SentCovering_6",0.11,"SentCovering_7",0.11,"SentCovering_8",0.11,"SentCovering_9",9};
		class SentCovering_1
		{
			text = "$STR_EP1_SENTCOVERING_1";
			speech[] = {"CS_GoImCoveringE"};
		};
		class SentCovering_2
		{
			text = "$STR_EP1_SENTCOVERING_2";
			speech[] = {"CS_GoIllCoverE"};
		};
		class SentCovering_3
		{
			text = "$STR_EP1_SENTCOVERING_3";
			speech[] = {"CS_CoveringFireE"};
		};
		class SentCovering_4
		{
			text = "$STR_EP1_SENTCOVERING_4";
			speech[] = {"CS_CoveringGoE"};
		};
		class SentCovering_5
		{
			text = "$STR_EP1_SENTCOVERING_5";
			speech[] = {"CS_MoveOutE"};
		};
		class SentCovering_6
		{
			text = "$STR_EP1_SENTCOVERING_6";
			speech[] = {"CS_GoE"};
		};
		class SentCovering_7
		{
			text = "$STR_EP1_SENTCOVERING_7";
			speech[] = {"CS_MoveE"};
		};
		class SentCovering_8
		{
			gesture = "GestureCover";
			text = "";
			speech[] = {};
		};
		class SentCovering_9
		{
			text = "";
			speech[] = {};
		};
	};
	class SentCoveringStealth
	{
		versions[] = {"SentCovering_8",0.5,"SentCovering_9",9};
		class SentCovering_8
		{
			wordsClass = "StealthWords";
			gesture = "GestureCover";
			text = "";
			speech[] = {};
		};
		class SentCovering_9
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {};
		};
	};
	class sentCoverMe
	{
		sentences[] = {"sentCoverMeDefault","(1-Stealth)","sentCoverMeStealth","Stealth"};
	};
	class sentCoverMeDefault
	{
		versions[] = {"sentCoverMe_1",0.17,"sentCoverMe_2",0.17,"sentCoverMe_3",0.17,"sentCoverMe_4",0.17,"sentCoverMe_5",0.17,"sentCoverMe_6",9};
		class sentCoverMe_1
		{
			text = "$STR_EP1_SENTCOVERME_1";
			speech[] = {"CS_CoverMeE"};
		};
		class sentCoverMe_2
		{
			text = "$STR_EP1_SENTCOVERME_2";
			speech[] = {"CS_OKLetsGo"};
		};
		class sentCoverMe_3
		{
			text = "$STR_EP1_SENTCOVERME_3";
			speech[] = {"CS_MovingE"};
		};
		class sentCoverMe_4
		{
			text = "$STR_EP1_SENTCOVERME_4";
			speech[] = {"CS_MovinOutE"};
		};
		class sentCoverMe_5
		{
			gesture = "GestureCover";
			text = "";
			speech[] = {};
		};
		class sentCoverMe_6
		{
			text = "";
			speech[] = {};
		};
	};
	class sentCoverMeStealth
	{
		versions[] = {"sentCoverMe_5",0.5,"sentCoverMe_6",9};
		class sentCoverMe_5
		{
			wordsClass = "StealthWords";
			gesture = "GestureCover";
			text = "";
			speech[] = {};
		};
		class sentCoverMe_6
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {};
		};
	};
	class SentReloading
	{
		sentences[] = {"SentReloadingDefault",1};
	};
	class SentReloadingDefault
	{
		versions[] = {"SentReloading_1",0.25,"SentReloading_2",0.25,"SentReloading_3",0.25,"SentReloading_4",0.25};
		class SentReloading_1
		{
			text = "$STR_EP1_SENTRELOADING_1";
			speech[] = {"CS_ReloadingE"};
		};
		class SentReloading_2
		{
			text = "$STR_EP1_SENTRELOADING_2";
			speech[] = {"CS_GottaReloadE"};
		};
		class SentReloading_3
		{
			text = "$STR_EP1_SENTRELOADING_3";
			speech[] = {"CS_CoverMeReloadingE"};
		};
		class SentReloading_4
		{
			text = "$STR_EP1_SENTRELOADING_4";
			speech[] = {"CS_ChangingMagsE"};
		};
	};
	class SentThrowingGrenade
	{
		sentences[] = {"SentThrowingGrenadeDefault",1};
	};
	class SentThrowingGrenadeDefault
	{
		versions[] = {"SentThrowingGrenade_1",0.33,"SentThrowingGrenade_2",0.33,"SentThrowingGrenade_3",0.33};
		class SentThrowingGrenade_1
		{
			text = "$STR_EP1_SENTTHROWINGGRENADE_1";
			speech[] = {"CS_FireInTheHoleE"};
		};
		class SentThrowingGrenade_2
		{
			text = "$STR_EP1_SENTTHROWINGGRENADE_2";
			speech[] = {"CS_ThrowingFragE"};
		};
		class SentThrowingGrenade_3
		{
			text = "$STR_EP1_SENTTHROWINGGRENADE_3";
			speech[] = {"CS_FragOutE"};
		};
	};
	class SentThrowingSmoke
	{
		sentences[] = {"SentThrowingSmokeDefault",1};
	};
	class SentThrowingSmokeDefault
	{
		versions[] = {"SentThrowingSmoke_1",0.5,"SentThrowingSmoke_2",0.5};
		class SentThrowingSmoke_1
		{
			text = "$STR_EP1_SENTTHROWINGSMOKE_1";
			speech[] = {"CS_ThrowingSmokeE"};
		};
		class SentThrowingSmoke_2
		{
			text = "$STR_EP1_SENTTHROWINGSMOKE_2";
			speech[] = {"CS_SmokeOutE"};
		};
	};
	class SentIncomingGrenade
	{
		sentences[] = {"SentIncomingGrenadeDefault",1};
	};
	class SentIncomingGrenadeDefault
	{
		versions[] = {"SentIncomingGrenade_1",0.33,"SentIncomingGrenade_2",0.33,"SentIncomingGrenade_3",0.33};
		class SentIncomingGrenade_1
		{
			text = "$STR_EP1_SENTINCOMINGGRENADE_1";
			speech[] = {"CS_GrenadeE"};
		};
		class SentIncomingGrenade_2
		{
			text = "$STR_EP1_SENTINCOMINGGRENADE_2";
			speech[] = {"CS_WatchTheGrenadeE"};
		};
		class SentIncomingGrenade_3
		{
			text = "$STR_EP1_SENTINCOMINGGRENADE_3";
			speech[] = {"CS_IncomingFragE"};
		};
	};
	class SentEnemyContact
	{
		sentences[] = {"SentEnemyContactDefault",1};
	};
	class SentEnemyContactDefault
	{
		versions[] = {"SentEnemyContact_1",0.33,"SentEnemyContact_2",0.33,"SentEnemyContact_3",0.33};
		class SentEnemyContact_1
		{
			text = "$STR_EP1_SENTENEMYCONTACT_1";
			speech[] = {"CS_ContactE"};
		};
		class SentEnemyContact_2
		{
			text = "$STR_EP1_SENTENEMYCONTACT_2";
			speech[] = {"CS_HostilesE"};
		};
		class SentEnemyContact_3
		{
			text = "$STR_EP1_SENTENEMYCONTACT_3";
			speech[] = {"CS_EnemyE"};
		};
	};
	class SentCombatGeneric
	{
		sentences[] = {"SentCombatGenericDefault",1};
	};
	class SentCombatGenericDefault
	{
		versions[] = {"SentCombatGeneric_1",0.2,"SentCombatGeneric_2",0.2,"SentCombatGeneric_3",0.2,"SentCombatGeneric_4",0.2,"SentCombatGeneric_5",0.2};
		class SentCombatGeneric_1
		{
			text = "$STR_EP1_SENTCOMBATGENERIC_1";
			speech[] = {"CS_DidYouSeeThatQ"};
		};
		class SentCombatGeneric_2
		{
			text = "$STR_EP1_SENTCOMBATGENERIC_2";
			speech[] = {"CS_FocusE"};
		};
		class SentCombatGeneric_3
		{
			text = "$STR_EP1_SENTCOMBATGENERIC_3";
			speech[] = {"CS_CheckThatOut"};
		};
		class SentCombatGeneric_4
		{
			text = "$STR_EP1_SENTCOMBATGENERIC_4";
			speech[] = {"CS_MotherfuckerE"};
		};
		class SentCombatGeneric_5
		{
			text = "$STR_EP1_SENTCOMBATGENERIC_5";
			speech[] = {"CS_SeeThatQE"};
		};
	};
	class SentScreaming
	{
		sentences[] = {"SentScreamingDefault",1};
	};
	class SentScreamingDefault
	{
		versions[] = {"SentScreaming_1",0.25,"SentScreaming_2",0.25,"SentScreaming_3",0.25,"SentScreaming_4",0.25};
		class SentScreaming_1
		{
			text = "$STR_EP1_SENTSCREAMING_1";
			speech[] = {"CS_ARGHHE"};
		};
		class SentScreaming_2
		{
			text = "$STR_EP1_SENTSCREAMING_2";
			speech[] = {"CS_OOFE"};
		};
		class SentScreaming_3
		{
			text = "$STR_EP1_SENTSCREAMING_3";
			speech[] = {"CS_UGHE"};
		};
		class SentScreaming_4
		{
			text = "$STR_EP1_SENTSCREAMING_4";
			speech[] = {"CS_NoE"};
		};
	};
	class SentCheering
	{
		sentences[] = {"SentCheeringDefault",1};
	};
	class SentCheeringDefault
	{
		versions[] = {"SentCheering_1",0.25,"SentCheering_2",0.25,"SentCheering_3",0.25,"SentCheering_4",0.25};
		class SentCheering_1
		{
			text = "$STR_EP1_SENTCHEERING_1";
			speech[] = {"CS_WoohooE"};
		};
		class SentCheering_2
		{
			text = "$STR_EP1_SENTCHEERING_2";
			speech[] = {"CS_YahooE"};
		};
		class SentCheering_3
		{
			text = "$STR_EP1_SENTCHEERING_3";
			speech[] = {"CS_HeeeyE"};
		};
		class SentCheering_4
		{
			text = "$STR_EP1_SENTCHEERING_4";
			speech[] = {"CS_YeehawEGreatE"};
		};
	};
	class SentCmdMoveToTarget
	{
		sentences[] = {"SentCmdMoveToTargetDefault","(1-Stealth)","SentCmdMoveToTargetStealth","Stealth"};
	};
	class SentCmdMoveToTargetDefault
	{
		versions[] = {"SentCmdMoveToTarget_1",0.5,"SentCmdMoveToTarget_2",0.5};
		class SentCmdMoveToTarget_1
		{
			gesture = "gestureGo";
			text = "$STR_EP1_SENTCMDMOVETOTARGET_1";
			speech[] = {"%1.1","MoveTo","%2"};
		};
		class SentCmdMoveToTarget_2
		{
			gesture = "gestureGo";
			text = "$STR_EP1_SENTCMDMOVETOTARGET_2";
			speech[] = {"%1.1","GoTo","%2","%4.2"};
		};
	};
	class SentCmdMoveToTargetStealth
	{
		versions[] = {"SentCmdMoveToTarget_1",0.5,"SentCmdMoveToTarget_2",0.5};
		class SentCmdMoveToTarget_1
		{
			wordsClass = "StealthWords";
			gesture = "gestureGo";
			text = "$STR_EP1_SENTCMDMOVETOTARGET_1";
			speech[] = {"%1.1","MoveTo","%2"};
		};
		class SentCmdMoveToTarget_2
		{
			wordsClass = "StealthWords";
			gesture = "gestureGo";
			text = "$STR_EP1_SENTCMDMOVETOTARGET_2";
			speech[] = {"%1.1","GoTo","%2","%4.2"};
		};
	};
	class HC_Select
	{
		sentences[] = {"HC_SelectDefault","(1-Stealth)","HC_SelectStealth","Stealth"};
	};
	class HC_SelectDefault
	{
		versions[] = {"HC_Select_1",0.25,"HC_Select_2",0.25,"HC_Select_3",0.25,"HC_Select_4",0.25};
		class HC_Select_1
		{
			text = "";
			speech[] = {"HC_ReportingIn"};
		};
		class HC_Select_2
		{
			text = "";
			speech[] = {"HC_StandingByForOrders"};
		};
		class HC_Select_3
		{
			text = "";
			speech[] = {"HC_CombatReady"};
		};
		class HC_Select_4
		{
			text = "";
			speech[] = {"HC_WaitingForOrders"};
		};
	};
	class HC_SelectStealth
	{
		versions[] = {"HC_Select_1",0.25,"HC_Select_2",0.25,"HC_Select_3",0.25,"HC_Select_4",0.25};
		class HC_Select_1
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"HC_ReportingIn"};
		};
		class HC_Select_2
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"HC_StandingByForOrders"};
		};
		class HC_Select_3
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"HC_CombatReady"};
		};
		class HC_Select_4
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"HC_WaitingForOrders"};
		};
	};
	class HC_Move
	{
		sentences[] = {"HC_MoveDefault","(1-Stealth)","HC_MoveStealth","Stealth"};
	};
	class HC_MoveDefault
	{
		versions[] = {"HC_Move_1",0.25,"HC_Move_2",0.25,"HC_Move_3",0.25,"HC_Move_4",0.25};
		class HC_Move_1
		{
			text = "";
			speech[] = {"HC_Advancing"};
		};
		class HC_Move_2
		{
			text = "";
			speech[] = {"HC_Affirmative"};
		};
		class HC_Move_3
		{
			text = "";
			speech[] = {"HC_MovingToPosition"};
		};
		class HC_Move_4
		{
			text = "";
			speech[] = {"HC_OrderReceived"};
		};
	};
	class HC_MoveStealth
	{
		versions[] = {"HC_Move_1",0.25,"HC_Move_2",0.25,"HC_Move_3",0.25,"HC_Move_4",0.25};
		class HC_Move_1
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"HC_Advancing"};
		};
		class HC_Move_2
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"HC_Affirmative"};
		};
		class HC_Move_3
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"HC_MovingToPosition"};
		};
		class HC_Move_4
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"HC_OrderReceived"};
		};
	};
	class HC_Attack
	{
		sentences[] = {"HC_AttackDefault","(1-Stealth)","HC_AttackStealth","Stealth"};
	};
	class HC_AttackDefault
	{
		versions[] = {"HC_Attack_1",0.2,"HC_Attack_2",0.2,"HC_Attack_3",0.2,"HC_Attack_4",0.2,"HC_Attack_5",0.2};
		class HC_Attack_1
		{
			text = "";
			speech[] = {"HC_Advancing"};
		};
		class HC_Attack_2
		{
			text = "";
			speech[] = {"HC_Affirmative"};
		};
		class HC_Attack_3
		{
			text = "";
			speech[] = {"HC_OrderReceived"};
		};
		class HC_Attack_4
		{
			text = "";
			speech[] = {"HC_EngagingE"};
		};
		class HC_Attack_5
		{
			text = "";
			speech[] = {"HC_AttackingE"};
		};
	};
	class HC_AttackStealth
	{
		versions[] = {"HC_Attack_1",0.2,"HC_Attack_2",0.2,"HC_Attack_3",0.2,"HC_Attack_4",0.2,"HC_Attack_5",0.2};
		class HC_Attack_1
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"HC_Advancing"};
		};
		class HC_Attack_2
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"HC_Affirmative"};
		};
		class HC_Attack_3
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"HC_OrderReceived"};
		};
		class HC_Attack_4
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"HC_EngagingE"};
		};
		class HC_Attack_5
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"HC_AttackingE"};
		};
	};
	class SentBehaviourCareless
	{
		sentences[] = {"SentBehaviourCarelessDefault","(1-Stealth)","SentBehaviourCarelessStealth","Stealth"};
	};
	class SentBehaviourCarelessDefault
	{
		versions[] = {"SentBehaviourCareless_1",1};
		class SentBehaviourCareless_1
		{
			text = "";
			speech[] = {"NO_SPEECH"};
		};
	};
	class SentBehaviourCarelessStealth
	{
		versions[] = {"SentBehaviourCareless_1",1};
		class SentBehaviourCareless_1
		{
			wordsClass = "StealthWords";
			text = "";
			speech[] = {"NO_SPEECH"};
		};
	};
	class SentWitnessKilled
	{
		sentences[] = {"SentWitnessKilledDefault","(1-Stealth)","SentWitnessKilledStealth","Stealth"};
	};
	class SentWitnessKilledDefault
	{
		versions[] = {"SentWitnessKilled_1",1};
		class SentWitnessKilled_1
		{
			text = "$STR_EP1_SENTOBJECTDESTROYED_4";
			speech[] = {"HesDownE"};
		};
	};
	class SentWitnessKilledStealth
	{
		versions[] = {"SentWitnessKilled_1",1};
		class SentWitnessKilled_1
		{
			text = "$STR_EP1_SENTOBJECTDESTROYED_4";
			speech[] = {"HesDownE"};
		};
	};
	class SentWitnessDeadBody
	{
		sentences[] = {"SentWitnessDeadBodyDefault","(1-Stealth)","SentWitnessDeadBodyStealth","Stealth"};
	};
	class SentWitnessDeadBodyDefault
	{
		versions[] = {"SentWitnessDeadBody_1",0.5,"SentWitnessDeadBody_2",0.5};
		class SentWitnessDeadBody_1
		{
			text = "$str_ep1_grt_negative5_1";
			speech[] = {"SonOfABitchE_EN"};
		};
		class SentWitnessDeadBody_2
		{
			text = "$str_ep1_sentcombatgeneric_4";
			speech[] = {"CS_MotherfuckerE"};
		};
	};
	class SentWitnessDeadBodyStealth
	{
		versions[] = {"SentWitnessDeadBody_1",0.5,"SentWitnessDeadBody_2",0.5};
		class SentWitnessDeadBody_1
		{
			text = "$str_ep1_grt_negative5_1";
			speech[] = {"SonOfABitchE_EN"};
		};
		class SentWitnessDeadBody_2
		{
			text = "$str_ep1_sentcombatgeneric_4";
			speech[] = {"CS_MotherfuckerE"};
		};
	};
	class SentRouted
	{
		sentences[] = {"SentRoutedDefault","(1-Stealth)","SentRoutedStealth","Stealth"};
	};
	class SentRoutedDefault
	{
		versions[] = {"SentRouted_1",0.5,"SentRouted_2",0.5};
		class SentRouted_1
		{
			text = "$str_ep1_grt_negative5_1";
			speech[] = {"SonOfABitchE_EN"};
		};
		class SentRouted_2
		{
			text = "$str_ep1_sentcombatgeneric_4";
			speech[] = {"CS_MotherfuckerE"};
		};
	};
	class SentRoutedStealth
	{
		versions[] = {"SentRouted_1",0.5,"SentRouted_2",0.5};
		class SentRouted_1
		{
			text = "$str_ep1_grt_negative5_1";
			speech[] = {"SonOfABitchE_EN"};
		};
		class SentRouted_2
		{
			text = "$str_ep1_sentcombatgeneric_4";
			speech[] = {"CS_MotherfuckerE"};
		};
	};
	class SentEndangered
	{
		sentences[] = {"SentEndangeredDefault","(1-Stealth)","SentEndangeredStealth","Stealth"};
	};
	class SentEndangeredDefault
	{
		versions[] = {"SentEndangered_1",0.33,"SentEndangered_2",0.33,"SentEndangered_3",0.33};
		class SentEndangered_1
		{
			text = "$str_ep1_sentendangered_1";
			speech[] = {"FuckE"};
		};
		class SentEndangered_2
		{
			text = "$str_ep1_sentcombatgeneric_4";
			speech[] = {"CS_MotherfuckerE"};
		};
		class SentEndangered_3
		{
			text = "$str_ep1_grt_negative5_1";
			speech[] = {"SonOfABitchE_EN"};
		};
	};
	class SentEndangeredStealth
	{
		versions[] = {"SentEndangered_1",0.33,"SentEndangered_2",0.33,"SentEndangered_3",0.33};
		class SentEndangered_1
		{
			text = "$str_ep1_sentendangered_1";
			speech[] = {"FuckE"};
		};
		class SentEndangered_2
		{
			text = "$str_ep1_sentcombatgeneric_4";
			speech[] = {"CS_MotherfuckerE"};
		};
		class SentEndangered_3
		{
			text = "$str_ep1_grt_negative5_1";
			speech[] = {"SonOfABitchE_EN"};
		};
	};
	class SentARTYRoundsComplete
	{
		versions[] = {"SentARTYRoundsComplete_1",1};
		class SentARTYRoundsComplete_1
		{
			text = "$str_ep1_artillery_21";
			speech[] = {"RoundsComplete"};
		};
	};
	class SentARTYFireAt
	{
		versions[] = {"SentARTYFireAt_1",1};
		class SentARTYFireAt_1
		{
			text = "$str_ep1_artillery_26";
			speech[] = {"FireAt","%1"};
		};
	};
	class SentARTYCannotExecuteThatsOutsideOurFiringEnvelope
	{
		versions[] = {"SentARTYCannotExecuteThatsOutsideOurFiringEnvelope_1",1};
		class SentARTYCannotExecuteThatsOutsideOurFiringEnvelope_1
		{
			text = "$str_ep1_artillery_27";
			speech[] = {"CannotExecuteThatsOutsideOurFiringEnvelope"};
		};
	};
	class SentARTYCannotExecuteAdjustCoordinates
	{
		versions[] = {"SentARTYCannotExecuteAdjustCoordinates_1",1};
		class SentARTYCannotExecuteAdjustCoordinates_1
		{
			text = "$str_ep1_artillery_28";
			speech[] = {"CannotExecuteAdjustCoordinates"};
		};
	};
	class SentRepairThat
	{
		versions[] = {"SentRepairThat_1",1};
		class SentRepairThat_1
		{
			text = "$STR_ep1_sentRepairThat";
			speech[] = {"RepairThat","%1"};
		};
	};

	class CuratorWaypointPlaced
	{
		versions[]=
		{
			"Normal_OnTheWay",
			"(1 - Stealth) * 1",
			"Stealth_OnTheWay",
			"(Stealth) * 1",
			"Normal_Confirmation1",
			"(1 - Stealth) * 1",
			"Stealth_Confirmation1",
			"(Stealth) * 1",
			"Normal_Confirmation2",
			"(1 - Stealth) * 1",
			"Stealth_Confirmation2",
			"(Stealth) * 1"
		};
		class Normal_OnTheWay
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"OnTheWay"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_OnTheWay
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"OnTheWay"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_Confirmation1
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_MovingToPosition"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_Confirmation1
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_MovingToPosition"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_Confirmation2
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_Affirmative"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_Confirmation2
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_Affirmative"
			};
			text="";
			wordsClass="Stealth";
		};
	};
	class CuratorWaypointPlacedAttack
	{
		versions[]=
		{
			"Normal_CopyIAmOnHim",
			"(1 - Stealth) * 1",
			"Stealth_CopyIAmOnHim",
			"(Stealth) * 1",
			"Normal_LockAndLoad",
			"(1 - Stealth) * 1",
			"Stealth_LockAndLoad",
			"(Stealth) * 1",
			"Normal_TargetAcquired",
			"(1 - Stealth) * 1",
			"Stealth_TargetAcquired",
			"(Stealth) * 1",
			"Normal_TargetInSight",
			"(1 - Stealth) * 1",
			"Stealth_TargetInSight",
			"(Stealth) * 1"
		};
		class Normal_CopyIAmOnHim
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ImOnIt"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_CopyIAmOnHim
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ImOnIt"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_LockAndLoad
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_EngagingE"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_LockAndLoad
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_EngagingE"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_TargetAcquired
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetAcquired"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_TargetAcquired
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetAcquired"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_TargetInSight
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetInSight"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_TargetInSight
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetInSight"
			};
			text="";
			wordsClass="Stealth";
		};
	};
	class CuratorObjectPlaced
	{
		versions[]=
		{
			"Normal_AwaitingOrders",
			"(1 - Stealth) * 1",
			"Stealth_AwaitingOrders",
			"(Stealth) * 1",
			"Normal_IAmReady",
			"(1 - Stealth) * 1",
			"Stealth_IAmReady",
			"(Stealth) * 1",
			"Normal_ReadyForOrders",
			"(1 - Stealth) * 1",
			"Stealth_ReadyForOrders",
			"(Stealth) * 1",
			"Normal_StandingBy",
			"(1 - Stealth) * 1",
			"Stealth_StandingBy",
			"(Stealth) * 1",
			"Normal_Waiting",
			"(1 - Stealth) * 1",
			"Stealth_Waiting",
			"(Stealth) * 1"
		};
		class Normal_AwaitingOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"AwaitingOrders"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_AwaitingOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"AwaitingOrders"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_IAmReady
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ReadyForOrders"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_IAmReady
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ReadyForOrders"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_ReadyForOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Ready"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_ReadyForOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Ready"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_StandingBy
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"StandingBy"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_StandingBy
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"StandingBy"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_Waiting
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Waiting"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_Waiting
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Waiting"
			};
			text="";
			wordsClass="Stealth";
		};
	};
	class curatorObjectDestroyed
	{
		versions[]=
		{
			"Normal_ScreamingE",
			"(1 - Stealth) * 1",
			"Stealth_ScreamingE",
			"(Stealth) * 1"
		};
		class Normal_ScreamingE
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ScreamingE"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_ScreamingE
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ScreamingE"
			};
			text="";
			wordsClass="Stealth";
		};
	};
	class curatorModuleCAS
	{
		versions[]=
		{
			"Normal_RequestAcknowledgedSGCASBombing",
			"(1 - Stealth) * 1",
			"Stealth_RequestAcknowledgedSGCASBombing",
			"(Stealth) * 1",
			"Normal_RequestAcknowledgedSGCASHelicopter",
			"(1 - Stealth) * 1",
			"Stealth_RequestAcknowledgedSGCASHelicopter",
			"(Stealth) * 1"
		};
		class Normal_RequestAcknowledgedSGCASBombing
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASBombing"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_RequestAcknowledgedSGCASBombing
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASBombing"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_RequestAcknowledgedSGCASHelicopter
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASHelicopter"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_RequestAcknowledgedSGCASHelicopter
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASHelicopter"
			};
			text="";
			wordsClass="Stealth";
		};
	};
};
