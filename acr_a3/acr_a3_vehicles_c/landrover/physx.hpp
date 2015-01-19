		//----- General Parameters -----//
//		normalSpeedForwardCoef=0.9;
		turnCoef = 3.5;
		terrainCoef = 3;
//		waterSpeedFactor=0.4;
		simulation="car";
		dampersBumpCoef = 3.0;

		precision = 10;
		brakeDistance = 50;
//		acceleration=15;
		fireResistance=5;
//
		maxSpeed = 200;
		fuelCapacity=45;
		wheelCircumference = 2.805;
		brakeIdleSpeed = 1.78;

//
//		maxFordingDepth=0.9;
//		waterResistance=2;
//		waterDamageEngine = 0.9;
//		waterLeakiness = 250.0;

		//----- Gearbox Parameters -----//
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4,"N",0,"D1","4.5*(0.58^0)","D2","4.5*(0.58^1)","D3","4.5*(0.58^2)","D4","4.5*(0.58^3)","D5","4.5*(0.59^4)","D6","4.5*(0.6^5)"};
			TransmissionRatios[] = {"High",7};
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
		changeGearMinEffectivity[] = {1,0.15,1,1,1,1,1,1};
		switchTime = 0.31;
		latency = 1.5;
//
//		//----- Clutch and Driveline Parameters -----//
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 1.3;
		clutchStrength = 20.0;
//		transmissionLosses = 20;
//
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.5;
		dampingRateZeroThrottleClutchDisengaged = 0.35;

//		//----- Engine Parameters -----//
		torqueCurve[] = {{ "(0/3500)","(0/425)" },{ "(500/3500)","(200/425)" },{ "(1500/3500)","(405/425)" },{ "(2000/3500)","(425/425)" },{ "(2500/3500)","(350/425)" },{ "(3000/3500)","(300/425)" },{ "(6000/3500)","(0/425)" }};
//
		maxOmega = 450;
		enginePower = 150;
		peakTorque = 425;
		idleRpm = 400;
		redRpm = 3500;
//
//		engineLosses = 30;
		thrustDelay = 0.5;
//		engineBrakeCoef = 0.8;
//
//		//----- Anti-rollbar Parameters -----//
		antiRollbarForceCoef = 1.9;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 150;

        class Wheels
        {
            class LF
            {
                boneName = "wheel_1_1_damper";
                steering = 1;
                side = "left";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                width = "0.2";
                mass = 30;
                MOI = 6;
                dampingRate = 1;
                dampingRateDamaged = 5;
                dampingRateInAir = 0.8;
                dampingRateDestroyed = 5000;
                maxBrakeTorque = 2000;
                maxHandBrakeTorque = 0;
                suspTravelDirection[] = {0,-1,0};
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                maxCompression = 0.1;
                maxDroop = 0.05;
                sprungMass = 400;
                springStrength = 14400;
                springDamperRate = "1920*2";
                longitudinalStiffnessPerUnitGravity = 10000;
                latStiffX = 2.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{ 0,1.75 },{ 0.5,1.35 },{ 1,1.2 }};
            };
            class LR: LF
            {
                boneName = "wheel_1_2_damper";
                steering = 0;
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
                maxHandBrakeTorque = 3000;
                frictionVsSlipGraph[] = {{ 0,2 },{ 0.5,1.53 },{ 1,1.36 }};
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
            class RR: RF
            {
                boneName = "wheel_2_2_damper";
                steering = 0;
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
                maxHandBrakeTorque = 3000;
                frictionVsSlipGraph[] = {{ 0,2.3 },{ 0.5,2.1 },{ 1,2.0 }};
            };
        };