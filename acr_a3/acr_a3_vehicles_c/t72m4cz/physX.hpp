/// PhysX part
numberPhysicalWheels = 16;

/// General Parameters ///
simulation			= tankX;
normalSpeedForwardCoef=0.60;
slowSpeedForwardCoef=0.35;

terrainCoef = 0.0;
turnCoef = 5;
brakeIdleSpeed = 0.0;

fuelConsumptionRate = 130;
fuelCapacity		= 672;
AGM_fuelCapacity = 672;

tankTurnForce		= 200000; /// Random magic number, expected to be something like 11 x mass of vehicle

/// Bouyancy ///

canFloat = false;
waterLeakiness = 250.0;
maxFordingDepth = 0.1;
waterResistance = 1;
waterDamageEngine = 0.9;

/// Engine ///

torqueCurve[] = {
{"(800/2300)","(0/3410)"},
{"(1100/2300)","(2145/3410)"},
{"(1300/2300)","(2970/3410)"},
{"(1500/2300)","(3380/3410)"},
{"(1700/2300)","(3410/3410)"},
{"(1900/2300)","(3310/3410)"},
{"(2100/2300)","(3185/3410)"},
{"(2524/2300)","(0/3410)"}
};

maxOmega = 240.86;
enginePower = 746;
peakTorque = 3410;
idleRPM = 800;
redRPM = 2300;


engineBrakeCoef = 1.7; //seems to do nothing?
thrustDelay			= 0.3;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping

engineLosses = 15; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses = 22; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

/// Clutch, Gearbox and Driveline ///

clutchStrength 		= 95.0;
class complexGearbox {
	GearboxRatios[] = {"R1",-2.235,"N",0,"D1",4.69,"D2",3.17,"D3",1.58,"D4",0.79};
	TransmissionRatios[] = {"High",16.7};
	gearBoxMode        = "auto";
	moveOffGear        = 1;
	driveString        = "D"; // string to display in the HUD for forward gears.
	neutralString      = "N"; // string to display in the HUD for neutral gear.
	reverseString      = "R"; // string to display in the HUD for reverse gears.
	transmissionDelay  = 0.1;
};
changeGearMinEffectivity[] = {0.5,0.0,0.85,0.85,0.85,0.85};
switchTime = 0.1;
latency = 1.0;
/// end of gearbox

class Wheels {
	class L2 {
		boneName = "wheel_podkoloL1";
		center   = "wheel_1_2_axis";
		boundary = "wheel_1_2_bound";
		damping  = 75.0;
		// tanks do not have steerable wheels
		steering = 0;
		/// We need to distinguish the side to apply the right thrust value
		side = "left";
		/// weight of the wheel is defined per wheel, it reduces overall mass of vehicle
		weight = 193;
		mass = 193;
		MOI = 5.2;
		latStiffX = 5;
		latStiffY = 500;
		longitudinalStiffnessPerUnitGravity = 100000;
		maxBrakeTorque = 500;

		sprungMass = 3473;
		springStrength = 86823;
		springDamperRate = 38450;

		dampingRate = 1.0;
		dampingRateInAir = 1770.0;
		dampingRateDamaged = 10.0;
		dampingRateDestroyed = 10000.0;
		maxDroop = 0.15;
		maxCompression = 0.15;
	};
	class L3: L2 {
		boneName = "wheel_podkolol2";
		center   = "wheel_1_3_axis";
		boundary = "wheel_1_3_bound";
	};
	class L4: L2 {
		boneName = "wheel_podkolol3";
		center   = "wheel_1_4_axis";
		boundary = "wheel_1_4_bound";
	};
	class L5: L2 {
		boneName = "wheel_podkolol4";
		center   = "wheel_1_5_axis";
		boundary = "wheel_1_5_bound";
	};
	class L6: L2 {
		boneName = "wheel_podkolol5";
		center   = "wheel_1_6_axis";
		boundary = "wheel_1_6_bound";
	};
	class L7: L2 {
		boneName = "wheel_podkolol6";
		center   = "wheel_1_7_axis";
		boundary = "wheel_1_7_bound";
	};
	// rear left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L9: L2 {
		boneName = "wheel_podkolol9";
		center   = "wheel_1_9_axis";
		boundary = "wheel_1_9_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
	// front left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L1: L2 {
		boneName = "";
		center   = "wheel_1_1_axis";
		boundary = "wheel_1_1_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};

	class R2: L2 {
		boneName = "wheel_podkolop1";
		center   = "wheel_2_2_axis";
		boundary = "wheel_2_2_bound";
		side = "right";
	};
	class R3: R2 {
		boneName = "wheel_podkolop2";
		center   = "wheel_2_3_axis";
		boundary = "wheel_2_3_bound";
	};
	class R4: R2 {
		boneName = "wheel_podkolop3";
		center   = "wheel_2_4_axis";
		boundary = "wheel_2_4_bound";
	};
	class R5: R2 {
		boneName = "wheel_podkolop4";
		center   = "wheel_2_5_axis";
		boundary = "wheel_2_5_bound";
	};
	class R6: R2 {
		boneName = "wheel_podkolop5";
		center   = "wheel_2_6_axis";
		boundary = "wheel_2_6_bound";
	};
	class R7: R2 {
		boneName = "wheel_podkolop6";
		center   = "wheel_2_7_axis";
		boundary = "wheel_2_7_bound";
	};
	// rear right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R9: R2 {
		boneName = "wheel_podkolop9";
		center   = "wheel_2_9_axis";
		boundary = "wheel_2_9_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
	// front right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R1: R2 {
		boneName = "";
		center   = "wheel_2_1_axis";
		boundary = "wheel_2_1_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
};
/// End of PhysX