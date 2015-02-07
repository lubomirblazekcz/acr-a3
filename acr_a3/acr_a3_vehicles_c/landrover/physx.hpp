		//----- General Parameters -----//
//		normalSpeedForwardCoef=0.9;
		turnCoef = 2.5;
		terrainCoef = 1.5;
//		waterSpeedFactor=0.4;
		simulation="carx";
		dampersBumpCoef = 3.0;

		precision = 15;
		brakeDistance = 1; //50
//		acceleration=15;
		fireResistance=5;
//
		maxSpeed = 150;
		fuelCapacity=60;
		wheelCircumference = 2.51;
		brakeIdleSpeed = 1.78;

		steerAheadPlan = 0.2;
		steerAheadSimul = 0.4;
		predictTurnPlan = 0.9;
		predictTurnSimul = 0.5;

//
//		maxFordingDepth=0.9;
//		waterResistance=2;
//		waterDamageEngine = 0.9;
//		waterLeakiness = 250.0;

		//----- Gearbox Parameters -----//
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-2.475,"N",0,"D1",2.367,"D2",1.67,"D3",1.238,"D4",0.99,"D5",0.802,"D6",0.601};
			TransmissionRatios[] = {"High",6};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";

			gearUpMaxCoef = 0.95;
			gearDownMaxCoef = 0.85;
			gearUpMinCoef = 0.65;
			gearDownMinCoef = 0.55;
			transmissionDelay = 2;
		};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.31;
		latency = 1;
//
//		//----- Clutch and Driveline Parameters -----//
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 20.0;
//		transmissionLosses = 20;
//
		dampingRateFullThrottle = 0.2;
		dampingRateZeroThrottleClutchEngaged = 2;
		dampingRateZeroThrottleClutchDisengaged = 0.35;

//		//----- Engine Parameters -----//
		torqueCurve[] = {{ 0,0.15 },{ 0.25,0.65 },{ 0.35,0.75 },{ 0.461,1 },{ 0.6,0.95 },{ 0.7,0.85 },{ 0.8,0.75 },{ 1,0.5 }};
//
		maxOmega = 471;
		enginePower = 100;
		peakTorque = 300;
		idleRpm = 800;
		redRpm = 4500;
//
//		engineLosses = 30;
		thrustDelay = 0.5;
//		engineBrakeCoef = 0.8;
//
//		//----- Anti-rollbar Parameters -----//
		antiRollbarForceCoef = 12;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 50;

        class Wheels
        {
            class LF
            {
                boneName = "wheel_1_1_damper";
                steering = 1;
                side = "left";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                width = "0.126";
                mass = 25;
                MOI = 12.8;
                dampingRate = 1;
                dampingRateDamaged = 5;
                dampingRateInAir = 0.8;
                dampingRateDestroyed = 5000;
                maxBrakeTorque = 2000;
                maxHandBrakeTorque = 0;
                suspTravelDirection[] = {0,-1,0};
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                maxCompression = 0.05;
                maxDroop = 0.1;
                sprungMass = 650;
				springStrength = 56000;
				springDamperRate = 12000;
                longitudinalStiffnessPerUnitGravity = 10000;
                latStiffX = 25;
                latStiffY = 180;
				frictionVsSlipGraph[] = {{ 0,1 },{ 0.5,1 },{ 1,1 }};
            };
            class LR: LF
            {
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				springStrength = 74000;
				sprungMass = 650;
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3500;
            };
            class RF: LF
            {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                steering = 1;
                side = "right";
            };
            class RR: LR
            {
				boneName = "wheel_2_2_damper";
				side = "right";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
            };
        };