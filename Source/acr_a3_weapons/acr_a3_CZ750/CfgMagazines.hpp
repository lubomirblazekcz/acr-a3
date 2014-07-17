class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class acr_a3_10Rnd_cz750_mag: CA_Magazine
	{
		scope = public; /// or 2, to be precise
		displayName = "7.62x51mm 10rnd CZ 750 Mag";
		picture = "\acr_a3_CZ750\data\UI\cz750_mag_ca.paa"; /// just some icon
		ammo = B_762x51_Ball;
		count = 10; /// 30 rounds is enough
		initSpeed = 790; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 0; /// tracers to track low ammo
		descriptionShort = "7.62x51mm CZ750 magazine"; /// on mouse-over in Inventory
	};

	class acr_a3_10Rnd_cz750_mag_Tracer: acr_a3_10Rnd_cz750_mag /// a magazine full of tracer rounds
	{
		tracersEvery = 1; /// moar tracers
		lastRoundsTracer = 10; /// tracers everywhere
		displayName = "7.62x51mm 10rnd CZ 750 Tracer Mag";
		picture = "\acr_a3_CZ750\data\UI\cz750_tracer_mag_ca.paa";
		descriptionShort = "7.62x51mm CZ750 Tracer magazine";
		displaynameshort = "Tracers";
	};
};
