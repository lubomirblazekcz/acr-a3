uiNameSpace setVariable ["ACR_A3_BMP2_Ctrl",_this select 0];


[] spawn {
	private["_v","_t"];
	disableSerialization;
	_c = (uiNamespace getVariable "ACR_A3_BMP2_Ctrl" displayCtrl 1);
	_v = vehicle player;
	while{(player==gunner _v OR player==driver _v)}do{
		waitUntil {sleep 0.01;inputAction "ZeroingUp">0 OR inputAction "ZeroingDown">0 OR (player!=gunner _v AND player!=driver _v)};
		_t=(ctrLPosition _c) select 1;
		if(inputAction "ZeroingUp">0 AND _t<=(16.86 *   (0.025 * SafezoneH)))then{
				_c ctrlSetPosition [(ctrLPosition _c) select 0,_t+0.003];
		};
		if(inputAction "ZeroingDown">0 AND _t>(3.66 *   (0.025 * SafezoneH)))then{
				_c ctrlSetPosition [(ctrLPosition _c) select 0,_t-0.003];
		};
		_c ctrlCommit 0.005;
		sleep 0.02;
	};
};

[] spawn {
	disableSerialization;
	private["_v","_c","_c2","_c3"];

	_v = vehicle player;
	_c=(uiNamespace getVariable "ACR_A3_BMP2_Ctrl" displayCtrl 180);
	_c2=(uiNamespace getVariable "ACR_A3_BMP2_Ctrl" displayCtrl 1);
	_c3=(uiNamespace getVariable "ACR_A3_BMP2_Ctrl" displayCtrl 2);

	while{(player==gunner _v OR player==driver _v)}do{
		waitUntil {sleep 0.1;((parseNumber (ctrlText _c)) != 5.6)};
		if(player == gunner _v)then{_c2 ctrlSetText "";_c3 ctrlSetText "";};
		waitUntil {sleep 0.1;(parseNumber (ctrlText _c)) == 5.6 OR (player!=gunner _v AND player!=driver _v)};
		if(player == gunner _v)then{_c2 ctrlSetText "acr_a3\acr_a3_vehicles\BMP2\data\bpk_1_42_sight.paa";_c3 ctrlSetText "\acr_a3\acr_a3_vehicles\bmp2\data\bpk_1_42_bar.paa";};
	};

};