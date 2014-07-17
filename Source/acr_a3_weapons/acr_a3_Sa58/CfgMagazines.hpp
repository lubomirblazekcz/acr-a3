class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class acr_a3_30Rnd_Sa58_mag: CA_Magazine
	{
		scope = public; /// or 2, to be precise
		displayName = "7.62x39mm 30rnd Sa vz. 58 Mag";
		picture = "acr_a3_weapons\acr_a3_Sa58\data\UI\m_sa58_ca.paa"; /// just some icon
		ammo = B_762x39mm_KLT;
		count = 30; /// 30 rounds is enough
		initSpeed = 705; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 4; /// tracers to track low ammo
		descriptionShort = "7.62x39mm Sa 58 magazine"; /// on mouse-over in Inventory
	};

	class acr_a3_30Rnd_Sa58_mag_TracerG: acr_a3_30Rnd_Sa58_mag /// a magazine full of tracer rounds
	{
		tracersEvery = 1; /// moar tracers
		lastRoundsTracer = 30; /// tracers everywhere
		displayName = "7.62x39mm 30rnd Sa vz. 58 Tracer G Mag";
		picture = "acr_a3_weapons\acr_a3_Sa58\data\UI\m_sa58_green_ca.paa";
		descriptionShort = "7.62x39mm 30rnd Sa vz. 58 Tracer G magazine";
		displaynameshort = "Tracers";
	};
	class acr_a3_30Rnd_Sa58_mag_TracerR: acr_a3_30Rnd_Sa58_mag_TracerG /// a magazine full of tracer rounds
	{
		displayName = "7.62x39mm 30rnd Sa vz. 58 Tracer R Mag";
		picture = "acr_a3_weapons\acr_a3_Sa58\data\UI\m_sa58_red_ca.paa";
		descriptionShort = "7.62x39mm 30rnd Sa vz. 58 Tracer R magazine";
		ammo = B_762x39_TRACER_R_KLT;
	};
	class acr_a3_30Rnd_Sa58_mag_TracerY: acr_a3_30Rnd_Sa58_mag_TracerG /// a magazine full of tracer rounds
	{
		displayName = "7.62x39mm 30rnd Sa vz. 58 Tracer Y Mag";
		picture = "acr_a3_weapons\acr_a3_Sa58\data\UI\m_sa58_yellow_ca.paa";
		descriptionShort = "7.62x39mm 30rnd Sa vz. 58 Tracer Y magazine";
		ammo = B_762x39_TRACER_Y_KLT;
	};
};
