if (isServer) then {
	_this execVM "\A3\soft_f_gamma\Offroad_01\scripts\randomize_doors.sqf";

	_this animate [["HideBumper1","HideBumper2"] select floor random 2, 0];	
	_this animate ["HideBackpacks", 0];
	_this animate ["HideConstruction", 0];
	_this animate ["HidePolice", 0];
	_this animate ["HideServices", 1];
};

_this setObjectTexture [0, "\ACR_Offroad\Offroad\data\offroad01.paa"];

_this setObjectTexture [1, "\ACR_Offroad\Offroad\data\offroad01.paa"];