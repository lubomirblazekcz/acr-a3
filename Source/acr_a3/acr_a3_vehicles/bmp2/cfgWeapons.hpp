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


	class RDS_R_PG9_AT;
	class ACR_A3_Sh_PG15V: RDS_R_PG9_AT
	{
        soundfly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1", 0.630957, 1.5, 300};
        soundEngine[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1", 1.030957, 1.5, 300};
		manueuvrability=30;
		//sideairfriction = 0.9;
		airFriction = 0.27;
		effectsmissileinit = "";
		hit = 350;
		indirectHit = 11;
		indirectHitRange = 0.15;
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
	};
	class ACR_A3_Sh_OG15V: ACR_A3_Sh_PG15V
	{
		thrustTime=0.5;
		hit = 150;
		indirectHit = 35;
		indirectHitRange = 7;
		typicalSpeed = 700;
		explosive = 0.8;
		cost = 300;
		airFriction = -0.00045;
		timeToLive = 12;
	};
	class RDS_M_AT5_AT;
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
		ammo = "RDS_Sh_PG15V";
		count = 24;
		initSpeed = 700;
		nameSound = "heat";
	};

	class ACR_A3_8Rnd_AT5: VehicleMagazine
	{
		scope = 2;
		displayName = "9M113 Konkurs";
		displayNameShort = "9M113";
		ammo=RDS_M_AT5_AT;
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
				begin1[] ={"RDS_APC\BMP\gun73", 3.16228, 1, 1500};
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
            begin1[] ={"\RDS_StaticW\TOW\Javelin1",1.6228,1,1000};
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

};