#define RHA(mm,speed) caliber=(mm/((15*speed)/1000));


class CfgAmmo
{
	class Sh_125mm_APFSDS;
	class Sh_120mm_HE;
	class B_30mm_AP;
	class acr_a3_Sh_3UBR8: B_30mm_AP
	{
		RHA(66,1120)
		typicalspeed = 1120;
		airfriction = -0.00056;
	};
	class B_30mm_HE;
	class ACR_A3_Sh_3UOF8: B_30mm_HE
	{
		airfriction = -0.0002;
	};
    class ACR_A3_M_AT5_penetrator: Sh_125mm_APFSDS
    {
        RHA(600,1000)
        hit=270;

        rhs_ce_penetration="penetrator";
        indirectHit = 0;
        indirectHitRange = 0;

        explosive = 0;
        typicalSpeed = 1000;
        timeToLive = 3;
        whistleOnFire = 1;
        whistleDist = 14;
        deflecting = 0;
        model = "\A3\Weapons_f\empty";
    };

    class RocketCore;
    class RocketBase: RocketCore{};
    class ACR_A3_R_PG9_AT: RocketBase
    {
        rhs_ce_penetration="acr_a3_R_PG9_penetrator";
        hit=220;indirectHit=10;indirectHitRange=1;
        model=\acr_a3\acr_a3_vehicles\bmp2\PG9_Projectile;
        initTime = 0.05;
        explosive=1;
        timeToLive=3;
        cost=400;
        maxSpeed=700;
        thrustTime=1;
        thrust=500;
        fuseDistance = 5;
        CraterEffects = "ATRocketCrater";
        explosionEffects = "ATRocketExplosion";
        smokeTrail = 2;
        effectsMissile = "missile2";
        whistleDist = 2;
        effectsmissileinit = "RocketBackEffectsStaticRPG";
    };
    class acr_a3_R_PG9_penetrator: ACR_A3_M_AT5_penetrator
    {
        hit=200;
        RHA(300,1000)
    };
	class ACR_A3_Sh_PG15V: ACR_A3_R_PG9_AT
	{
		soundfly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1", 0.630957, 1.5, 300};
		soundEngine[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1", 1.030957, 1.5, 300};
		manueuvrability=30;
		//sideairfriction = 0.9;
		airFriction = 0.27;
		effectsmissileinit = "";
		hit = 250;
		indirectHit = 11;
		indirectHitRange = 1.15;
		typicalSpeed = 700;
		maxSpeed=720;
		simulationstep=0.05;
		thrustTime=0.07;
		thrust=500;
		cost = 1000;
		timeToLive = 8;
		whistleOnFire = 1;
		whistleDist = 14;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		explosive=0.1;
		rhs_ce_penetration="ACR_A3_Sh_PG15V_penetrator";
	};
    class ACR_A3_Sh_PG15V_penetrator : ACR_A3_M_AT5_penetrator
    {
        hit = 180;
        RHA(400,1000)
    };
	class ACR_A3_Sh_OG15V: ACR_A3_Sh_PG15V
	{
		thrustTime=0.5;
		hit = 150;
		indirectHit = 35;
		indirectHitRange = 7;
		typicalSpeed = 700;
		cost = 300;
		airFriction = -0.00045;
		timeToLive = 12;
		explosive=1;
	};

	class MissileBase;
    class M_Titan_AT: MissileBase {};
    class ACR_A3_M_AT5_AT: M_Titan_AT //AT-5 Spandrel /Konkurs 9M113
	{
		hit=520;indirectHit=12;indirectHitRange=1.2; // 600mm vs RHA
		irLock=true;
		rhs_ce_penetration="ACR_A3_M_AT5_penetrator";

		manualControl=true;
		maxControlRange=4000;
		trackOversteer = 0.95;
		trackLead = 0.9;
		maneuvrability = 8;
		explosive=1;

		timeToLive = 25;
		simulationStep = 0.005000;
		sideAirFriction = 0.050000;
		maxSpeed = 200;
		initTime = 0.25;
		thrustTime = 1.500000;
		thrust = 210;
		deflecting = 0;
		fuseDistance = 5;
		whistleDist = 2;
	};
};

class CfgMagazines
{
	class Default;
	class VehicleMagazine;
	class ACR_A3_OG15V: VehicleMagazine
	{
		scope = 2;
		displayName = "OG-15V HE-FRAG";
		displayNameShort = "HE-FRAG";
		ammo = "ACR_A3_Sh_OG15V";
		count = 16;
		initSpeed = 400;
		maxLeadSpeed = 290;
		nameSound = "cannon";
		tracersEvery = 1;
	};
	class ACR_A3_PG15V: ACR_A3_OG15V
	{
		displayName = "PG-15V HEAT-FS";
		displayNameShort = "HEAT-FS";
		ammo = "ACR_A3_Sh_PG15V";
		count = 24;
		initSpeed = 700;
		nameSound = "heat";
	};

	class ACR_A3_8Rnd_AT5: VehicleMagazine
	{
		scope = 2;
		displayName = "9M113 Konkurs";
		displayNameShort = "9M113";
		ammo=ACR_A3_M_AT5_AT;
		initSpeed = 55.1688;
		count=6;
		maxLeadSpeed=10;
		nameSound="missiles";
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Green;
	class ACR_A3_30mm_2A42_AP: 60Rnd_30mm_APFSDS_shells_Tracer_Green
	{
		ammo=acr_a3_Sh_3UBR8;
		displayname = "APDS-T 3UBR8";
		displaynameshort = "APDS-T";
		count=160;
		initSpeed = 1120;
	};
	class 140Rnd_30mm_MP_shells_Tracer_Green;
	class ACR_A3_30mm_2A42_HE: 140Rnd_30mm_MP_shells_Tracer_Green
	{
		displayname = "HEI-T 3UOF8";
		displaynameshort = "HEI-T";
		count=340;
		initSpeed = 960;
		ammo=ACR_A3_Sh_3UOF8;
	};
    class ACR_A3_1500Rnd_762x54_PKT: VehicleMagazine
    {
        scope = 2;
        displayName = "PKT";
        count = 1500;
        reloadTime = 0.075000;
        ammo = "B_762x51_Tracer_Green";
        initSpeed = 900;
        maxLeadSpeed = 200;
        tracersEvery = 4;
        nameSound = "mgun";
    };
    class ACR_A3_2000Rnd_762x54_PKT: ACR_A3_1500Rnd_762x54_PKT
    {
        count = 2000;
    };
    class ACR_A3_200Rnd_762x54_PKT: ACR_A3_1500Rnd_762x54_PKT
    {
        count = 200;
    };
    class ACR_A3_100Rnd_762x54_PKT: ACR_A3_1500Rnd_762x54_PKT
    {
        count = 100;
    };
    class ACR_A3_250Rnd_762x54_PKT: ACR_A3_1500Rnd_762x54_PKT
    {
        count = 250;
    };


};
class Mode_SemiAuto;
class cfgWeapons
{
	class cannon_125mm;
	class ACR_A3_2A28: cannon_125mm
	{

		canLock=1;
		scope = 1;
		displayName = "2A28 Grom";
		magazines[] = {
			ACR_A3_PG15V,
			ACR_A3_OG15V
		};
		reloadTime = 5;
		magazineReloadTime = 7;
		autoReload = 0;
		ballisticsComputer = 0;
		weaponLockSystem = 0;
		showaimcursorinternal = 0;
		cursor = "EmptyCursor";
		cursoraim = "EmptyCursor";
		cursoraimon = "EmptyCursor";
		//soundfly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_2", 1.316228, 1.5, 700};

        soundfly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1", 0.630957, 1.5, 300};
		minRange=5;
		minRangeProbab=0.89999998;
		midRange=700;
		midRangeProbab=1;
		maxRange=1300;
		maxRangeProbab=0.40000001;
		modes[] = {"player", "close", "short"};
		class player: Mode_SemiAuto {
			autofire = 0;
			autoreload = 1;
			ballisticscomputer = 1;
			sounds[] = {StandardSound};
 			class StandardSound
 			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] ={"acr_a3\acr_a3_vehicles\bmp2\gun73", 3.16228, 1, 1500};
				soundBegin[] = {"begin1",1};
			};
			//soundfly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_2", 1.316228, 1.5, 700};
            soundfly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1", 0.630957, 1.5, 300};
			canlock = 2;
			magazinereloadtime = 6;
			reloadtime = 6;
			soundcontinuous = 0;
		};
		class close: player {
			aidispersioncoefx = 6;
			aidispersioncoefy = 6;
			airateoffire = 6;
			airateoffiredistance = 50;
			maxrange = 1000;
			maxrangeprobab = 0.04;
			midrange = 500;
			midrangeprobab = 0.78;
			minrange = 0;
			minrangeprobab = 0.35;
			showtoplayer = 0;
		};
		class short: close {
			airateoffire = 10;
			airateoffiredistance = 300;
			maxrange = 1500;
			maxrangeprobab = 0.04;
			midrange = 1000;
			midrangeprobab = 0.58;
			minrange = 500;
			minrangeprobab = 0.05;
		};
	};
	class autocannon_Base_F;
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		class HE;
		class AP;
	};
	class ACR_A3_2A24: autocannon_30mm_CTWS
	{
		displayName = "2A42 Shipunov";
		class HE: HE {
			displayName = "2A42 Shipunov";
			magazines[] = {"ACR_A3_30mm_2A42_HE"};
		};
		class AP: AP {
			displayName = "2A42 Shipunov";
			magazines[] = {"ACR_A3_30mm_2A42_AP"};
		};
	};
	class missiles_titan;
	class acr_a3_AT5_Launcher: missiles_titan
	{
        autoReload = 0;
        scope=1;
        canLock=0;
        cursor="rocket";
        minRange=150;
        minRangeProbab=0.5;
        midRange=1750;
        midRangeProbab=1;
        maxRange=2500;
        maxRangeProbab=0.60000002;
        sounds[] = {StandardSound};
        class StandardSound
        {
            weaponSoundEffect = "DefaultRifle";
            begin1[] ={"\acr_a3\acr_a3_vehicles\bmp2\Javelin1",1.6228,1,1000};
            soundBegin[] = {"begin1",1};
        };
        reloadTime=12;
        magazineReloadTime=12;
        aiRateOfFire=5;
        aiRateOfFireDistance=3500;
		displayName="9M113 Konkurs";
		magazines[]=
		{
			"ACR_A3_8Rnd_AT5"
		};

	};
    class LMG_M200;
	class ACR_A3_PKT: LMG_M200 {
		scope = 1;
		displayName = "PKT";

		class manual;
		class close;
		class short;
		class medium;
		class far;

		aiDispersionCoefY = 7;
		aiDispersionCoefX = 7;
		magazines[] = 		{
			"ACR_A3_1500Rnd_762x54_PKT","ACR_A3_2000Rnd_762x54_PKT",
			"ACR_A3_250Rnd_762x54_PKT","ACR_A3_200Rnd_762x54_PKT",
			"ACR_A3_100Rnd_762x54_PKT"
		};
		magazineReloadTime = 5;
	};

};