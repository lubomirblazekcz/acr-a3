private ["_v","_t","_d"];

_t=_this select 0;
_v=vehicle player;

_v animate ["PrimarySight_range",_t];
{_v animate [_x,0]}foreach ["PrimarySight_elevation_APFSDS","PrimarySight_elevation_HEF","PrimarySight_elevation_HEAT"];

if(currentMagazine _v in ["RDS_3BM44M","RDS_3BM12","RDS_3BM15","RDS_3BM22","RDS_3BM26","RDS_3BM32","RDS_3BM44M_S","RDS_3BM12_S","RDS_3BM15_S","RDS_3BM22_S","RDS_3BM26_S","RDS_3BM32_S"])then
{
	//APFSDS
	_d=(_t)/370;
	_v animate ["PrimarySight_elevation_APFSDS",(_d^3+_d+46)/100+7];
}else{
	if(currentMagazine _v in ["RDS_3BK29M","RDS_3BK12","RDS_3BK14","RDS_3BK18","RDS_3BK18M","RDS_3BK21","RDS_3BK21B","RDS_3BK29M_S","RDS_3BK12_S","RDS_3BK14_S","RDS_3BK18_S","RDS_3BK18M_S","RDS_3BK21_S","RDS_3BK21B_S"])then
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
			if(currentMagazine _v == "RDS_250Rnd_762x54_PKT")then
			{
				//PKT
				_v animate ["PrimarySight_range",0];
				_v animate ["PrimarySight_elevation_APFSDS",7.46];
			};
		};
	};
};
