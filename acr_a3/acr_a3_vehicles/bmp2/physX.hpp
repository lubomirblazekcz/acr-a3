
maxspeed = 55;

/// PhysX part
simulation			= tankX;
enginePower			= 824;
maxOmega 			= 272;
peakTorque 			= 1050;


torqueCurve[] = {
{(400/2000), 0}, // ignore idle
{(800/2000), (1600/3000)},
{(1200/2000), (2200/3000)},
{(1400/2000), (3000/3000)},
{(3000/2000), 0} // don't overestimate low gears
};/*
torqueCurve[] = {
	{0 , 0},
	{0.14 , 0.16},
	{0.29 , 0.27},
	{0.43 , 0.38},
	{0.57 , 0.38},
	{0.71 , 0.37},
	{0.86 , 0.34},
	{1 , 0.26},
};*/


		engineShiftY           		 = -0.8;		/// relative virtual position of engine for PhysX, affects lateral ship slope during turns
		waterLeakiness         		 = 1.0;		/// amount of litres per second that leaks into ship if under water, destroyed or turned upside down
		turnCoef 					 = 5.25; 	/// how well is the ship able to turn
		waterLinearDampingCoefY 	 = 2;		/// affect how fast does the ship go through waves down - higher values make it drift more on top of waves
		waterLinearDampingCoefX 	 = 2.0;		/// affects sliding of the ship in turns
		waterAngularDampingCoef 	 = 1.2;		/// increase this for smoother movement, but beware too high values
		waterResistanceCoef 		 = 0.015;	/// how much does water slow the ship down
		rudderForceCoef				 = 0.100000;	/// increase this to gain more turning on lower speeds
		rudderForceCoefAtMaxSpeed	 = 0.003000;	/// increase this to gain more turning on higher speeds


		waterEffectSpeed 		 = 5;						/// limit of displaying the standard water effect
		engineEffectSpeed 		 = 5;						/// limit of displaying the engine effect
		waterFastEffectSpeed 	 = 28;						/// limit where the standard water effect changes to the fast sailing one


thrustDelay			= 0.1;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
clutchStrength 		= 180.0;
fuelCapacity		= 462;
brakeIdleSpeed		= 1.78; 	/// speed in m/s below which braking is applied
latency 			= 0.1;
tankTurnForce		= 260000; /// Random magic number, expected to be something like 11 x mass of vehicle
//600000;
/// Gearbox and transmission
idleRpm = 700; // RPM at which the engine idles.
redRpm = 2640; // RPM at which the engine redlines.

engineLosses = 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses = 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)



changeGearMinEffectivity[]={0.5,0.15000001,0.84999999,0.84999999,0.84999999,0.84999999,0.89999998};

class complexGearbox {
			GearboxRatios[]=
			{
				"R2",
				-12.5,
				"N",
				0,
				"D1a",
				5.2,
				"D1",
				3.2,
				"D2a",
				2.83,
				"D2",
				2.33,
				"D3a",
				1.8099999,
				"D3",
				1.3099999,
				"D4",
				0.98000002,
				"D5",
				0.75000001
			};
			TransmissionRatios[]=
			{
				"High",
				5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;

};
/// end of gearbox

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
		latStiffX=15;
		latStiffY=280;
		longitudinalStiffnessPerUnitGravity=100000;
		maxBrakeTorque=6520;
		sprungMass=1116;
		springStrength=27900;
		springDamperRate=8664;
		dampingRate=0.9;
		dampingRateInAir=880;
		dampingRateDamaged=10;
		dampingRateDestroyed=10000;
		maxDroop=0.15000001;
		maxCompression=0.18000001;
		frictionVsSlipGraph[]=
		{
			{0,1.9},
			{0.5,1.3},
			{1,1.3}
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