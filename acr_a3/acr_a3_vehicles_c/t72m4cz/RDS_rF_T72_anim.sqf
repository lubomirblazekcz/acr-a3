private ["_v","_t","_d"];

_t=_this select 0;
_v=vehicle player;

_v animate ["PrimarySight_range",_t];
{_v animate [_x,0]}foreach ["PrimarySight_elevation_APFSDS","PrimarySight_elevation_HEF","PrimarySight_elevation_HEAT"];

if(currentMagazine _v in ["24Rnd_125mm_APFSDS"])then
{
	//APFSDS
	_d=(_t)/370;
	_v animate ["PrimarySight_elevation_APFSDS",(_d^3+_d+46)/100+7];
}else{
	if(currentMagazine _v in ["12Rnd_125mm_HE"])then
	{
		//HEAT
		_d=((_t)/545);
		_v animate ["PrimarySight_elevation_HEAT",(_d^3+_d+108)/8.1];
	}else{
		if(currentMagazine _v IN ["RDS_3OF26","RDS_3OF26_S"] )then
		{
			//HEF
			_d=((_t)/155);
			_v animate ["PrimarySight_elevation_HEF",(_d^2+_d+76)/8+2];
		}else{
			if(currentMagazine _v == "ACR_A3_2000Rnd_762x54_PKT")then
			{
				//PKT
				_v animate ["PrimarySight_range",0];
				_v animate ["PrimarySight_elevation_APFSDS",7.46];
			};
		};
	};
};
