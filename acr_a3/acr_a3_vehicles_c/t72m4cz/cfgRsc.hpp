
class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscPicture;
class RscControlsGroup;
class HScrollbar;
class VScrollbar;
class RscInGameUI
{
	class RscUnitInfo;

	class acr_a3_RscWeaponT72_FCS: RscUnitInfo
	{
		idd=300;
		onLoad="if (isNil 'a3_ui_initDisplay') then {a3_ui_initDisplay = compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'}; ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay; _this call ACR_A3_fnc_rF_t72";
		controls[]=
		{
			"CA_Laser",
			"CA_Distance",
			"CA_OpticsZoom"
		};
		class CA_OpticsZoom: RscText
		{
			idc=180;
			style=1;
			colorText[]={0.70599997,0.074500002,0.0196,1};
			sizeEx="0.038*SafezoneH";
			shadow=0;
			font="EtelkaMonospacePro";
			text="4.5";
			x="43.85 * 		(0.01875 * SafezoneH)";
			y="19.6 * 		(0.025 * SafezoneH)";
			w="0* 		(0.01875 * SafezoneH)";
			h="0 * 		(0.025 * SafezoneH)";
			//w="4.5 * 		(0.01875 * SafezoneH)";
			//h="1.1 * 		(0.025 * SafezoneH)";
		};
		class CA_Laser: RscText
		{
			idc=158;
			style="0x30 + 0x800";
			sizeEx="0.038*SafezoneH";
			colorText[]={0.70599997,0.074500002,0.0196,1};
			shadow=0;
			font="EtelkaMonospacePro";
			text="\acr_a3\acr_a3_vehicles\t72m4cz\data\TPD_K1_lasermark_6x.paa";
			x = safezoneX + 0.498* SafezoneW;
			y = safezoneY + 0.495* SafezoneH;
			w="0.5 * 		(0.01875 * SafezoneH)";
			h="0.5 * 		(0.025 * SafezoneH)";
		};
		class CA_Distance: RscOpticsValue
		{
			idc=151;
			style=2;
			colorText[]={1,0.15000001,0.15000001,0.64999998};
			shadow=0;
			font="EtelkaMonospacePro";
			x=0;
			y="(SafezoneY+SafezoneH) - 0.195";
			w=0;
			h=0;
		};
	};
};
