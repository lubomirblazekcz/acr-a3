#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}

#define addACRWeapons(x) \
		weap_xx(Sa58P_EP1,x); \
		weap_xx(CZ805_A1_ACR,2*x); \
		weap_xx(UK59_ACR,x);
	
#define addACRMagazines(x) \
		mag_xx(30Rnd_762x39_SA58,15*x); \
		mag_xx(30Rnd_556x45_Stanag,30*x); \
		mag_xx(100Rnd_762x54_PK,5*x); \
		mag_xx(HandGrenade_West,6*x); \
		mag_xx(SmokeShell,6*x); \
		mag_xx(SmokeShellRed,2*x); \
		