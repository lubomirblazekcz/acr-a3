
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

	class acr_a3_RscWeaponBMP2_FCS: RscUnitInfo
	{
		idd=300;
		onLoad="if (isNil 'a3_ui_initDisplay') then {a3_ui_initDisplay = compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'}; ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay; _this call RDS_fnc_sight_BMP2";
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
				class ACR_A3_Sight: RscPicture
				{
					idc=1;
					//type=99;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="\acr_a3\acr_a3_vehicles\bmp2\data\bpk_1_42_sight.paa";
					x =13.4 *   (0.01875 * Safezoneh);
					y =3.66 *   (0.025 * SafezoneH);
					w="25.5 *   (0.01875 * SafezoneH)";
					h="25.5 *   (0.025 * SafezoneH)";
				};
				class ACR_A3_SightBar: RscPicture
				{
					idc=2;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="acr_a3\acr_a3_vehicles\bmp2\data\bpk_1_42_bar.paa";
					x =14.3 *   (0.01875 * SafezoneH);
					y =7.26 *   (0.025 * SafezoneH);
					w="25.5 *   (0.01875 * SafezoneH)";
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
};
