
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

	class RscWeaponT72_FCS: RscUnitInfo
	{
		idd=300;
		onLoad="if (isNil 'a3_ui_initDisplay') then {a3_ui_initDisplay = compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'}; ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay; _this call RDS_fnc_rF_t72";
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
			text="\RDS_Tank\data\TPD_K1_lasermark_6x.paa";
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
	class RscWeaponT72_Comm: RscUnitInfo
	{
		idd=300;
		onLoad="[] call RDS_fnc_comm_t72";
		controls[]=
		{
			"CA_Zeroing"
		};
	};

	class RscWeaponT55_FCS: RscUnitInfo
	{
		idd=300;
		onLoad="if (isNil 'a3_ui_initDisplay') then {a3_ui_initDisplay = compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'}; ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay; _this call RDS_fnc_sight_T55";
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls 
			{
				class RDS_Sight: RscPicture
				{
					idc=1;
					//type=99;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="\RDS_Tank\t55\data\t55_gun_cross.paa";
					x =14.95 *   (0.01875 * Safezoneh);
					y =-0.0455 *   (0.025 * SafezoneH);
					w="25.5 *   (0.01875 * SafezoneH)";
					h="25.5 *   (0.025 * SafezoneH)";
				};
				class RDS_SightBar: RscPicture
				{
					idc=2;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="RDS_Tank\T55\data\sightBar.paa";
					x =10. *   (0.01875 * SafezoneH);
					y =4.56 *   (0.025 * SafezoneH);
					w="35.5 *   (0.01875 * SafezoneH)";
					h="25.5 *   (0.025 * SafezoneH)";

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
					w="0";
					h="0";
					//w="4.5 * 		(0.01875 * SafezoneH)";
					//h="1.1 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RscWeaponT34_FCS: RscUnitInfo
	{
		idd=300;
		onLoad="if (isNil 'a3_ui_initDisplay') then {a3_ui_initDisplay = compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'}; ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay; _this call RDS_fnc_sight_T34";
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls 
			{
				class RDS_Sight: RscPicture
				{
					idc=1;
					//type=99;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="\RDS_Tank\t34\data\t34_gun_cross.paa";
					x =3.70 *   (0.01875 * Safezoneh);
					y =-5.96 *   (0.025 * SafezoneH);
					w="45.5 *   (0.01875 * SafezoneH)";
					h="45.5 *   (0.025 * SafezoneH)";
				};
				class RDS_SightBar: RscPicture
				{
					idc=2;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="RDS_Tank\T34\data\sightBar.paa";
					x =7.3 *   (0.01875 * SafezoneH);
					y =1.1 *   (0.025 * SafezoneH);
					w="45.5 *   (0.01875 * SafezoneH)";
					h="25.5 *   (0.025 * SafezoneH)";

				};
			};
		};
	};
};
