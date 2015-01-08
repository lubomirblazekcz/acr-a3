		//----- General Parameters -----//
//		normalSpeedForwardCoef=0.9;
//		turnCoef=3.5;
//		terrainCoef=0.5;
//		waterSpeedFactor=0.4;
//		simulation="carx";
//		dampersBumpCoef=0;
//
//		precision=9;
//		brakeDistance=3;
//		acceleration=15;
//		fireResistance=5;
//
//		maxSpeed=109;
//		fuelCapacity=78;
//		wheelCircumference=2.95;
//		brakeIdleSpeed=0.0;
//
//		maxFordingDepth=0.9;
//		waterResistance=2;
//		waterDamageEngine = 0.9;
//		waterLeakiness = 250.0;

		//----- Gearbox Parameters -----//
//		class complexGearbox
//		{
//			GearboxRatios[] = {"R1",-3.07,"N",0,"D1",2.48,"D2",1.48,"D3",1.0,"D4",0.75};
//			TransmissionRatios[] = {"High",5.2};
//			gearBoxMode = "auto";
//			moveOffGear = 1;
//			driveString = "D";
//			neutralString = "N";
//			reverseString = "R";
//		};
//		changeGearMinEffectivity[]={0.95,0.15,0.95,0.95,0.95};
//		switchTime=0.28;
//		latency = 1.0;
//
//		//----- Clutch and Driveline Parameters -----//
//		differentialType="all_limited";
//		frontRearSplit=0.5;
//		frontBias=1.5;
//		rearBias=1.5;
//		centreBias = 1.3;
//		clutchStrength=35;
//		transmissionLosses = 20;
//
//		dampingRateFullThrottle=0.079999998;
//		dampingRateZeroThrottleClutchEngaged=1.34999999;
//		dampingRateZeroThrottleClutchDisengaged=0.34999999;

//		//----- Engine Parameters -----//
//		torqueCurve[] = {
//		{"(650/3600)","(417/581)"},
//		{"(1000/3600)","(508/581)"},
//		{"(1500/3600)","(562/581)"},
//		{"(1900/3600)","(581/581)"},
//		{"(2500/3600)","(545/581)"},
//		{"(3000/3600)","(475/581)"},
//		{"(3300/3600)","(396/581)"},
//		{"(3600/3600)","(314/581)"}
//		};
//
//		maxOmega = 376.99;
//		enginePower = 145;
//		peakTorque = 581;
//		idleRPM = 650;
//		redRPM = 3600;
//
//		engineLosses = 30;
//		thrustDelay=0.2;
//		engineBrakeCoef = 0.8;
//
//		//----- Anti-rollbar Parameters -----//
//		antiRollbarForceCoef=0;
//		antiRollbarForceLimit=0.5;
//		antiRollbarSpeedMin=10;
//		antiRollbarSpeedMax=80;

		class Wheels
        {
            class LF
            {
				width = "0.05";
                boneName = "wheel_1_1_damper";
                steering = 1;
                side = "left";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
				mass=40;
				MOI=5;
                dampingRate = 0.1;
				maxBrakeTorque=5400;
                maxHandBrakeTorque = 0;
                suspTravelDirection[] = {0,-1,0};
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression=0.05;
                mMaxDroop = 0.1;
				sprungMass = 576;
				springStrength = 58550;
				springDamperRate = 4686;

				longitudinalStiffnessPerUnitGravity=1172;
				latStiffX=10;
				latStiffY=25;
				frictionVsSlipGraph[]=
				{
					{0,1.2},
					{0.5,1.13},
					{1,1}
				};
			};
			class LR: LF
			{
                boneName = "wheel_1_2_damper";
                steering = 0;
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque=30000;
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
				maxHandBrakeTorque=30000;
            };
        };