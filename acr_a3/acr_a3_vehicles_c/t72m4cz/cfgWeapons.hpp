class CfgAmmo
{
	class Laserbeam;
	class ACR_A3_Laserbeam: Laserbeam
	{
		hit=0;
		cost= 100000000000;
	};
};
class CfgMagazines
{
	class Laserbatteries;
	class ACR_A3_LaserMag: Laserbatteries
	{
		ammo="ACR_A3_Laserbeam";
	};
};
class CfgWeapons
{
	class cannon_125mm;
	class HMG_NSVT;
	class ACR_A3_D81CZ: cannon_125mm
	{
		displayName = "D-81CZ 125mm";
		magazines[] = {"24Rnd_125mm_APFSDS","12Rnd_125mm_HE"};
		canLock=0;
        reloadTime = 6;
        magazineReloadTime = 12;
        autoReload = 0;
        ballisticsComputer = 0;
        weaponLockSystem = 0;
        showaimcursorinternal = 0;
        cursor = "EmptyCursor";
        cursoraim = "EmptyCursor";
        cursoraimon = "EmptyCursor";
        reloadsound[] = {"\acr_a3\acr_a3_vehicles\t72m4cz\sounds\Reload_Cannon", 13.16228, 1, 10};
		class player;
	};
    class Laserdesignator_mounted;
    class ACR_A3_T72_FCS: Laserdesignator_mounted
    {
        cursor = "EmptyCursor";
        cursoraim = "EmptyCursor";
        cursoraimon = "EmptyCursor";
        displayname = "Fire Control System";
        magazines[] = {ACR_A3_LaserMag};
    };
	class ACR_A3_KORD: HMG_NSVT
	{
        class GunParticles
        {
            class effect1
            {
                positionName="gun_muzzle";
                directionName="gun_chamber";
                effectName="MachineGunCloud";
            };
        };
	};
};