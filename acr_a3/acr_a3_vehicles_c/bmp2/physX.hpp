/// PhysX part
numberPhysicalWheels = 16;

/// General Parameters ///
simulation			= tankX;
normalSpeedForwardCoef=0.6;
slowSpeedForwardCoef=0.35;

terrainCoef = 0.0;
turnCoef = 5.25; 	/// how well is the ship able to turn
brakeIdleSpeed = 0.0;

fuelConsumptionRate = 85;
fuelCapacity		= 462;

tankTurnForce		= 260000; /// Random magic number, expected to be something like 11 x mass of vehicle

/// Bouyancy ///

canFloat = false;
waterLeakiness = 250.0;
maxFordingDepth = 0.1;
waterResistance = 1;
waterDamageEngine = 0.9;

engineShiftY           		 = -0.8;		/// relative virtual position of engine for PhysX, affects lateral ship slope during turns

waterLinearDampingCoefY 	 = 2;		/// affect how fast does the ship go through waves down - higher values make it drift more on top of waves
waterLinearDampingCoefX 	 = 2.0;		/// affects sliding of the ship in turns
waterAngularDampingCoef 	 = 1.2;		/// increase this for smoother movement, but beware too high values
waterResistanceCoef 		 = 0.015;	/// how much does water slow the ship down
rudderForceCoef				 = 0.100000;	/// increase this to gain more turning on lower speeds
rudderForceCoefAtMaxSpeed	 = 0.003000;	/// increase this to gain more turning on higher speeds

waterEffectSpeed 		 = 5;						/// limit of displaying the standard water effect
engineEffectSpeed 		 = 5;						/// limit of displaying the engine effect
waterFastEffectSpeed 	 = 28;						/// limit where the standard water effect changes to the fast sailing one

/// Engine ///

torqueCurve[] = {
{"(650/2880)","(854/981)"},
{"(1200/2880)","(935/981)"},
{"(1600/2880)","(981/981)"},
{"(1800/2880)","(971/981)"},
{"(2000/2880)","(892/981)"},
{"(2300/2880)","(804/981)"},
{"(2600/2880)","(686/981)"},
{"(3164/2880)","(0/981)"}
};

maxOmega = 301.59;
enginePower = 194;
peakTorque = 981;
idleRPM = 650;
redRPM = 2880;

thrustDelay			= 0.1;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping

engineLosses = 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses = 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

/// Clutch, Gearbox and Driveline ///

clutchStrength 		= 95.0;
class complexGearbox
{
	GearboxRatios[] =
	{
		"R1",-5.25,
		"N",0,
		"D1",5.25,
		"D2",2.842,
		"D3",1.912,
		"D4",1.28,
		"D5",0.858
	};
	TransmissionRatios[] = {"High",10.5};
	gearBoxMode = "auto";
	moveOffGear = 1;
	driveString = "D";
	neutralString = "N";
	reverseString = "R";
	transmissionDelay = 0.3;
};
changeGearMinEffectivity[] = {0.5,0.0,0.90,0.90,0.90,0.90,0.90};
switchTime = 0.3;
latency = 0.5;

class Wheels {
	class L2 {
 		wheelBrakeFrictionCoef=0.01;
		boneName = "wheel_podkoloL1";
		center   = "wheel_1_2_axis";
		boundary = "wheel_1_2_bound";
		damping  = 75.0;
		// tanks do not have steerable wheels
		steering = 0;
		/// We need to distinguish the side to apply the right thrust value
		side = "left";
		/// weight of the wheel is defined per wheel, it reduces overall mass of vehicle
		weight=130;
		mass=130;

		MOI=26;

		latStiffX=5;
		latStiffY=500;
		longitudinalStiffnessPerUnitGravity=100000;
		maxBrakeTorque=500;

		sprungMass = 1183;
		springStrength = 29583;
		springDamperRate = 4720;

		dampingRate=0.9;
		dampingRateInAir=870;
		dampingRateDamaged=10;
		dampingRateDestroyed=10000;
		maxDroop=0.15000001;
		maxCompression=0.18000001;
		frictionVsSlipGraph[]=
		{
			{0,1.},
			{0.5,1},
			{1,1}
		};
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