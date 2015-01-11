uiNameSpace setVariable ["RDS_t72_Ctrl",_this select 0];

//WIDOKI
[] spawn {
	private["_v","_f","_k","_c"];
	if((getResolution select 4) == 1.25)then{_k=0.94}else{_k=1};
	_v = vehicle player;
	disableSerialization;
	_c=uiNamespace getVariable "RDS_t72_Ctrl" displayCtrl 158;
	while{player==gunner _v OR player==driver _v}do
	{
		_f=round (call RDS_fnc_getFOV*_k);
		waitUntil{sleep 0.05;_f!=(round (call RDS_fnc_getFOV*_k))};
		if(player==gunner _v)then{
			if(round (call RDS_fnc_getFOV*_k)==9 AND _v animationPhase "PS_SR_hide" !=0)then
			{
				{_v animate [_x,0]}foreach ["PS_SR_hide", "PS_LR_hide", "PS_R_hide", "PS_E_hide"];_c ctrlSetText "\RDS_Tank\data\TPD_K1_lasermark_6x.paa";
			}else{
				if(_v animationPhase "PS_SR_hide" ==0 AND round (call RDS_fnc_getFOV*_k)!=9)then{{_v animate [_x,0.6]}foreach ["PS_SR_hide", "PS_LR_hide", "PS_R_hide", "PS_E_hide"];_c ctrlSetText "";};
			};
		};
		sleep 0.1;
	};
};
//FCS
[] spawn {
	private["_v","_t"];
	_v = vehicle player;
	while{(player==gunner _v OR player==driver _v)}do{

		waitUntil {sleep 0.05;inputAction "LockTarget" > 0 OR inputAction "ZeroingUp">0 OR inputAction "ZeroingDown">0 OR (player!=gunner _v AND player!=driver _v)};

		if(player!=gunner _v AND player!=driver _v)exitWith{};
		if(player != driver _v)then{
			if(inputAction "LockTarget" >0)then{
			//komputer balistyczny
				//_t=parseNumber ctrlText (uiNamespace getVariable "RDS_t72_Ctrl" displayCtrl 151);
				_t=player distance laserTarget vehicle player;
				if(_t>400 AND _t<3400-(990*(fog+rain)/2) )then{
					[_t] call RDS_fnc_rF_T72_Animate
				}else{if(cameraView=="gunner")then{playSound "RDS_Error"};sleep 2};
			}else{
				//ręczna korekta
				_t=(_v animationPhase "PrimarySight_range");
				if(inputAction "ZeroingUp">0 AND _t<=3400)then{
					_t=_t+25;
					[_t] call RDS_fnc_rF_t72_Animate
				};
				if(inputAction "ZeroingDown">0 AND _t>=25)then{
					_t=_t-25;
					[_t] call RDS_fnc_rF_t72_Animate
				};
			};
		};
		sleep 0.1;
	};
};