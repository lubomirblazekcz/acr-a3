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

#include "radioProtocol.hpp"
