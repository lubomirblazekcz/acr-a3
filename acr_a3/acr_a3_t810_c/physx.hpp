		thrustDelay = 0.5;
		brakeIdleSpeed = 1.78;
		maxSpeed = 106;
		fuelCapacity = 320;
		fuelConsumptionRate = 26;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 20;
		idleRpm = 600;
		redRpm = 3000;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-8.97,"N",0,"D1",9.48,"D2",6.58,"D3",4.68,"D4",3.48,"D5",2.62,"D6",1.89,"D7",1.35,"D8",1.0,"D9",0.75};
			TransmissionRatios[] = {"High",6.53};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 6.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 55.0;
		enginePower = 177;
		maxOmega = 240;
		peakTorque = 920;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0.0,0.2},{0.278,0.5},{0.35,0.85},{0.461,0.95},{0.6,1.0},{0.7,0.95},{0.8,0.7},{1.0,0.4}};
		switchTime = 0.31;
		class Wheels
		{
			class L1
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 80;
				MOI = 40;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 15000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 2000;
				springStrength = 94000;
				springDamperRate = 9000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				sprungMass = 1500;
				springStrength = 34000;
				springDamperRate = 9000;
			};
			class L3: L2
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxHandBrakeTorque = 300000;
			};
			class R1: L1
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class R2: L2
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				side = "right";
				maxHandBrakeTorque = 0;
			};
			class R3: R2
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 300000;
			};
		};