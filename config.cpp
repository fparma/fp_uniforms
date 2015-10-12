class CfgPatches
{
	class FP_communitymods
	{
		units[]=
                {
                        "B_APC_Wheeled_01_cannon_wd_F"
                };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR"
		};
	};
};
class CfgVehicles
{
	class I_soldier_F;
	class FP_Rifleman_DesDPM: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP UK Desert DPM";
		nakedUniform="U_BasicBody";
		uniformClass="FP_DesDPM";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\DesDPM.paa"
		};
	};
	class FP_Rifleman_WoodlandDPM: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP UK Woodland DPM (Soldier 95)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_WoodlandDPM";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\DPM_95.paa"
		};
	};
	class FP_Rifleman_MTP: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP UK MTP";
		nakedUniform="U_BasicBody";
		uniformClass="FP_MTP";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\MTP_UNI.paa"
		};
	};
	class FP_Rifleman_M05: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP FIN M05 Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_M05";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_M05.paa"
		};
	};
	class FP_Rifleman_M84: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP DEN M84 Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_M84";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_M84.paa"
		};
	};
	class FP_Rifleman_M01Dane: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP DEN M01 Desert";
		nakedUniform="U_BasicBody";
		uniformClass="FP_M01Dane";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_M01Danish.paa"
		};
	};
	class FP_Rifleman_M98: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP NOR M98 Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_M98";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_M98.paa"
		};
	};
	class FP_Rifleman_M03: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP NOR M03 Desert";
		nakedUniform="U_BasicBody";
		uniformClass="FP_M03";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_M03.paa"
		};
	};
	class FP_Rifleman_McamPCU: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA Multicam & PCU";
		nakedUniform="U_BasicBody";
		uniformClass="FP_McamPCU";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\mcampcu.paa"
		};
	};
	class FP_Rifleman_M90: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP SWE M90 Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_M90";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_M90.paa"
		};
	};
	class FP_Rifleman_M90Des: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP SWE M90 Desert";
		nakedUniform="U_BasicBody";
		uniformClass="FP_M90Des";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_M90Des.paa"
		};
	};
	class FP_Rifleman_Auscam: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP AU Auscam";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Auscam";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_Auscam.paa"
		};
	};
	class FP_Rifleman_CADPAT: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP CAN CADPAT TW";
		nakedUniform="U_BasicBody";
		uniformClass="FP_CADPAT";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_CADPAT.paa"
		};
	};
	class FP_Rifleman_CADPATAR: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP CAN CADPAT AR";
		nakedUniform="U_BasicBody";
		uniformClass="FP_CADPATAR";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_CADPATAR.paa"
		};
	};
	class FP_Rifleman_DualTex: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA DualTex";
		nakedUniform="U_BasicBody";
		uniformClass="FP_DualTex";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_DualTex.paa"
		};
	};
	class FP_Rifleman_HECU: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA Urban Splinter";
		nakedUniform="U_BasicBody";
		uniformClass="FP_HECU";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_HECUCAM.paa"
		};
	};
	class FP_Rifleman_Flecktarn: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP GER Flecktarn";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Flecktarn";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_Flecktarn.paa"
		};
	};
	class FP_Rifleman_FlecktarnGreen: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP GER Flecktarn Green";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Flecktarn";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_FlecktarnGreen.paa"
		};
	};
	class FP_Rifleman_Tropentarn: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP GER Tropentarn";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Tropentarn";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_Tropentarn.paa"
		};
	};
	class FP_Rifleman_Flachsteintarn: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP GER Flachsteintarn";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Flachsteintarn";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_FlachSteinTarn.paa"
		};
	};
	class FP_Rifleman_CCE: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP FR CCE";
		nakedUniform="U_BasicBody";
		uniformClass="FP_CCE";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_CCE.paa"
		};
	};
	class FP_Rifleman_Daguet: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP FR Daguet";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Daguet";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_Daguet.paa"
		};
	};
	class FP_Rifleman_Alicam: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP UK AliCam";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Alicam";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_AliCam.paa"
		};
	};
	class FP_Rifleman_RhodieBrush: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP RH Rhodesian Brushstroke";
		nakedUniform="U_BasicBody";
		uniformClass="FP_RhodieBrush";
                author="FP Mod Team";
		side = 2;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_RhodieCam.paa"
		};
	};
	class FP_Rifleman_RhodieWinterBrush: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP RH Rhodesian Winter Brushstroke";
		nakedUniform="U_BasicBody";
		uniformClass="FP_RhodieBrush";
                author="FP Mod Team";
		side = 2;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_RhodieCamWinter.paa"
		};
	};
	class FP_Rifleman_KyrelianSplinter: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP KY Splinter";
		nakedUniform="U_BasicBody";
		uniformClass="FP_KyrelianSplinter";
                author="FP Mod Team";
		side = 2;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_KyrelianSplinter.paa"
		};
	};
	class FP_Rifleman_KyrelianSplinterWinter: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP KY Winter Splinter";
		nakedUniform="U_BasicBody";
		uniformClass="FP_KyrelianSplinterWinter";
                author="FP Mod Team";
		side = 2;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_KyrelianSplinterWinter.paa"
		};
	};
	class FP_Rifleman_Jeitei: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP JP Jeitei";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Jeitei";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_Jeitei.paa"
		};
	};
	class FP_Rifleman_GraniteB: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP SK Granite B";
		nakedUniform="U_BasicBody";
		uniformClass="FP_GraniteB";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_GraniteB.paa"
		};
	};
	class FP_Rifleman_Type07Universal: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Jeitei";
        author="FP Mod Team";
		side = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_Type07Universal.paa"
		};
	};
	class FP_Rifleman_Black: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Black";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Black";
        author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_Black.paa"
		};
	};
	class FP_Rifleman_Grey: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Grey";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Grey";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_Grey.paa"
		};
	};
	class FP_Rifleman_OD: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Olive Drab";
		nakedUniform="U_BasicBody";
		uniformClass="FP_OD";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_OD.paa"
		};
	};
	class FP_Rifleman_Khaki: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Khaki";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Khaki";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_Khaki400.paa"
		};
	};
	class FP_Rifleman_RangerGreen: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Ranger Green";
		nakedUniform="U_BasicBody";
		uniformClass="FP_RangerGreen";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_RangerGreen.paa"
		};
	};
	class FP_Rifleman_KhakiBrown: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Khaki Brown";
		nakedUniform="U_BasicBody";
		uniformClass="FP_KhakiBrown";
                author="FP Mod Team";
		side = 1;
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_KhakiBrown.paa"
		};
	};
	class FP_Rifleman_OliveBrown: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Olive Brown";
		nakedUniform="U_BasicBody";
		uniformClass="FP_OliveBrown";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_OliveBrown.paa"
		};
	};
	class FP_Rifleman_White: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP White";
		nakedUniform="U_BasicBody";
		uniformClass="FP_White";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_White.paa"
		};
	};
	class O_officer_F;
	class FP_Rifleman_ccc: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP US DCU 6-Colour (BDU)";
		uniformClass="FP_Uniform_CCC";
		author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_ccc.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_dcu: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP US DCU 3-Colour (BDU)";
		uniformClass="FP_Uniform_DCU";
		author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_dcu.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_dpmwd: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP UK DPM Woodland (BDU)";
		uniformClass="FP_Uniform_DPMWD";
		author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_dpmwd.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_grn: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Green (BDU)";
		uniformClass="FP_Uniform_grn";
		author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_grn.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_gry: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Grey (BDU)";
		uniformClass="FP_Uniform_gry";
		author="FP Mod Team";
		side = 2;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_gry.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_khk: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Khaki (BDU)";
		uniformClass="FP_Uniform_khk";
		author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_khk.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_klmk: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP RU KLMK (BDU)";
		uniformClass="FP_Uniform_KLMK";
		author="FP Mod Team";
		side = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_klmk.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_klmkvdv: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP RU KLMK (BDU/VDV)";
		uniformClass="FP_Uniform_klmkvdv";
		author="FP Mod Team";
		side = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_klmkvdv.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_kmsh: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP RU Kamysh (BDU)";
		uniformClass="FP_Uniform_kmsh";
		author="FP Mod Team";
		side = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_kmsh.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_m05cw: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP FIN M05 Cold Weather (BDU)";
		uniformClass="FP_Uniform_m05cw";
		author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_m05cw.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_m81: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP US M81 (BDU)";
		uniformClass="FP_Uniform_m81";
		author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_m81.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_mrp: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP US Marpat Woodland (BDU)";
		uniformClass="FP_Uniform_mrp";
		author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_mrp.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_vsr: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP RU VSR (BDU)";
		uniformClass="FP_Uniform_VSR";
		author="FP Mod Team";
		side = 2;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_VSR.paa"
		};
	    hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_1121: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP HEL Dress Uniform";
		uniformClass="FP_Uniform_1121";
		author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_1121.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_klmkwinter: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP RU KLMK Winter";
		uniformClass="FP_Uniform_klmkwinter";
		author="FP Mod Team";
		side = 2;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_klmkwint.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_m81white: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP US M81/White (BDU)";
		uniformClass="FP_Uniform_m81white";
		author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_m81wht.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_WhiteOfficer: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP White (BDU)";
		uniformClass="FP_Uniform_WhiteOfficer";
		author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\officer_wht.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_Uniforms\Misc\officer.rvmat"
		};
	};
	class rhs_msv_rifleman_m88_patchless;
	class FP_Rifleman_GreenM88: rhs_msv_rifleman_m88_patchless
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP M88 (Green)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_GreenM88";
                author="FP Mod Team";
		side = 0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camob",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\green_m88.paa"
		};
	};
	class FP_Rifleman_KLMKM88: rhs_msv_rifleman_m88_patchless
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP RU KLMK (M88)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_KLMKM88";
                author="FP Mod Team";
		side = 0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camob",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_KLMKM88.paa"
		};
	};
	class FP_Rifleman_BerezkaM88: rhs_msv_rifleman_m88_patchless
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP RU Berezka (M88)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_BerezkaM88";
                author="FP Mod Team";
		side = 0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camob",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_BerezkaM88.paa"
		};
	};
	class FP_Rifleman_KSORM88: rhs_msv_rifleman_m88_patchless
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP RU KSOR (M88)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_KSORM88";
                author="FP Mod Team";
		side = 0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camob",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_KSOR.paa"
		};
	};
	class FP_Rifleman_Alpenflage: rhs_msv_rifleman_m88_patchless
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP SWI Vierfruchtpyjama";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Alpenflage";
                author="FP Mod Team";
		side = 2;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camob",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_Uniforms\SkinsUniform\FP_Alpenflage.paa"
		};
	};
	class B_Carryall_Base;
	class B_Carryall_Inv: B_Carryall_Base
	{
		armor = 0;
		author="FP Mod Team";
		displayName = "FP Carryall Backpack (Invisible)";
		hiddenSelectionsTextures[] = {""};
		model = "\A3\Structures_F\Mil\Helipads\HelipadEmpty_F.p3d";
		picture = "";
		scope = 2;
	};
	class B_soldier_F;
    class ESP_Rifleman_PGAC: B_Soldier_F
    {
        _generalMacro="B_Soldier_F";
        scope=2;
        displayName="PGAC Rifleman";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PGAC_M90";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsUniform\ESP_PAAPMCSplinter.paa"};
    };
	class B_Soldier_03_F;
	class ESP_Recon_PGAC: B_Soldier_03_F
    {
        _generalMacro="B_Soldier_03_F";
        scope=2;
        displayName="PGAC Recon";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PGAC_M90_recon";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsUniform\ESP_PAAPMCSplinter.paa"};
    };
	class B_sniper_F;
	class ESP_Sniper_PGAC: B_sniper_F
    {
         _generalMacro="B_sniper_F";
        scope=2;
        displayName="PGAC Sniper";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PGAC_M90_ghillie";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsUniform\ESP_PAAPMCSplinter.paa"};
    };
    class ESP_Rifleman_PDEF: B_Soldier_F
    {
        _generalMacro="B_Soldier_F";
        scope=2;
        displayName="PGAC Rifleman";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PDEF_M90";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsUniform\ESP_PAAPMCSplinter_Desert.paa"};
    };
	class ESP_Recon_PDEF: B_Soldier_03_F
    {
        _generalMacro="B_Soldier_03_F";
        scope=2;
        displayName="PGAC Recon";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PGAC_M90_recon";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsUniform\ESP_PAAPMCSplinter_Desert.paa"};
    };
	class ESP_Sniper_PDEF: B_sniper_F
    {
        _generalMacro="B_sniper_F";
        scope=2;
        displayName="PDEF Sniper";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PDEF_M90_ghillie";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsUniform\ESP_PAAPMCSplinter_Desert.paa"};
    };
    class ESP_Rifleman_PRAF: B_Soldier_F
    {
        _generalMacro="B_Soldier_F";
        scope=2;
        displayName="PRAF Rifleman";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PRAF_M90";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsUniform\ESP_PAAPMCSplinter_Woodland.paa"};
    };
    class ESP_Recon_PRAF: B_Soldier_03_F
    {
        _generalMacro="B_Soldier_03_F";
        scope=2;
        displayName="PRAF Recon";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PRAF_M90_recon";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsUniform\ESP_PAAPMCSplinter_Woodland.paa"};
    };
	class ESP_Sniper_PRAF: B_sniper_F
    {
        _generalMacro="B_sniper_F";
        scope=2;
        displayName="PRAF Sniper";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PRAF_M90_ghillie";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsUniform\ESP_PAAPMCSplinter_Woodland.paa"};
    };
	class B_APC_Wheeled_01_cannon_F;
	class B_APC_Wheeled_01_cannon_wd_F: B_APC_Wheeled_01_cannon_F
	{
		author="FP Mod Team";
		displayName = "Patria AMV Woodland";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsVehicle\APC_Wheeled_01_base_wd_co.paa","FP_Uniforms\SkinsVehicle\APC_Wheeled_01_adds_wd_co.paa","FP_Uniforms\SkinsVehicle\APC_Wheeled_01_tows_wd_co.paa"};
	};
};
class cfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class FP_Uniform_DesDPM: U_I_CombatUniform
	{
		scope=2;
		displayName="FP UK Desert DPM";
		picture="\FP_Uniforms\UI\desdpmicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team (Tomoe)";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_DesDPM";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_WoodlandDPM: U_I_CombatUniform
	{
		scope=2;
		displayName="FP UK Woodland DPM (Soldier 95)";
		picture="\FP_Uniforms\UI\woodlanddpmicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team (Tomoe)";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_WoodlandDPM";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_MTP: U_I_CombatUniform
	{
		scope=2;
		displayName="FP UK MTP";
		picture="\FP_Uniforms\UI\mtpicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team (Tomoe)";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_MTP";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M05: U_I_CombatUniform
	{
		scope=2;
		displayName="FP FIN M05 Woodland";
		picture="\FP_Uniforms\UI\m05icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team(Mallow)";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M05";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M84: U_I_CombatUniform
	{
		scope=2;
		displayName="FP DEN M84 Woodland";
		picture="\FP_Uniforms\UI\m84icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M84";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M01Dane: U_I_CombatUniform
	{
		scope=2;
		displayName="FP DEN M01 Desert";
		picture="\FP_Uniforms\UI\m01icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team(Mallow)";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M01Dane";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M98: U_I_CombatUniform
	{
		scope=2;
		displayName="FP NOR M98 Woodland";
		picture="\FP_Uniforms\UI\m98icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team(Mallow)";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M98";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M03: U_I_CombatUniform
	{
		scope=2;
		displayName="FP NOR M03 Desert";
		picture="\FP_Uniforms\UI\m03icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M03";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M90: U_I_CombatUniform
	{
		scope=2;
		displayName="FP SWE M90 Woodland";
		picture="\FP_Uniforms\UI\m90icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M90";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M90Des: U_I_CombatUniform
	{
		scope=2;
		displayName="FP SWE M90 Desert";
		picture="\FP_Uniforms\UI\m90desicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M90Des";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Auscam: U_I_CombatUniform
	{
		scope=2;
		displayName="FP AU Auscam";
		picture="\FP_Uniforms\UI\auscamicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Auscam";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_McamPCU: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA Multicam & PCU";
		picture="\FP_Uniforms\UI\mcampcuicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_McamPCU";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_CADPAT: U_I_CombatUniform
	{
		scope=2;
		displayName="FP CAN CADPAT TW";
		picture="\FP_Uniforms\UI\cadpaticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_CADPAT";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_CADPATAR: U_I_CombatUniform
	{
		scope=2;
		displayName="FP CAN CADPAT AR";
		picture="\FP_Uniforms\UI\cadpataricon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_CADPATAR";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_DualTex: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA DualTex";
		picture="\FP_Uniforms\UI\dualtexicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_DualTex";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_HECU: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA Urban Splinter";
		picture="\FP_Uniforms\UI\hecuicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_HECU";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Flecktarn: U_I_CombatUniform
	{
		scope=2;
		displayName="FP GER Flecktarn";
		picture="\FP_Uniforms\UI\flecktarnicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Flecktarn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_FlecktarnGreen: U_I_CombatUniform
	{
		scope=2;
		displayName="FP GER Flecktarn (Green)";
		picture="\FP_Uniforms\UI\flecktarnicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_FlecktarnGreen";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Tropentarn: U_I_CombatUniform
	{
		scope=2;
		displayName="FP GER Tropentarn";
		picture="\FP_Uniforms\UI\steppentarnicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Tropentarn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Flachsteinstarn: U_I_CombatUniform
	{
		scope=2;
		displayName="FP GER Flachsteintarn";
		picture="\FP_Uniforms\UI\steppentarnicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Flachsteintarn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_CCE: U_I_CombatUniform
	{
		scope=2;
		displayName="FP FR CCE";
		picture="\FP_Uniforms\UI\cceicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_CCE";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Daguet: U_I_CombatUniform
	{
		scope=2;
		displayName="FP FR Daguet";
		picture="\FP_Uniforms\UI\dagueticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Daguet";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Alicam: U_I_CombatUniform
	{
		scope=2;
		displayName="FP UK AliCam";
		picture="\FP_Uniforms\UI\alicamicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Alicam";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_RhodieBrush: U_I_CombatUniform
	{
		scope=2;
		displayName="FP RH Rhodesian Brushstroke";
		picture="\FP_Uniforms\UI\rhodiecamicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_RhodieBrush";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_RhodieWinterBrush: U_I_CombatUniform
	{
		scope=2;
		displayName="FP RH Rhodesian Winter Brushstroke";
		picture="\FP_Uniforms\UI\rhodiecamwintericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_RhodieWinterBrush";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KyrelianSplinter: U_I_CombatUniform
	{
		scope=2;
		displayName="FP KY Splinter";
		picture="\FP_Uniforms\UI\kyreliansplintericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KyrelianSplinter";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KyrelianSplinterWinter: U_I_CombatUniform
	{
		scope=2;
		displayName="FP KY Winter Splinter";
		picture="\FP_Uniforms\UI\kyrelianwintersplintericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KyrelianSplinterWinter";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Jeitei: U_I_CombatUniform
	{
		scope=2;
		displayName="FP JP Jeitei";
		picture="\FP_Uniforms\UI\jeiteiicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Jeitei";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_GraniteB: U_I_CombatUniform
	{
		scope=2;
		displayName="FP SK Granite B";
		picture="\FP_Uniforms\UI\granitebicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_GraniteB";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Type07Universal: U_I_CombatUniform
	{
		scope=2;
		displayName="FP CH Type 07 Universal";
		picture="\FP_Uniforms\UI\type07universalicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Type07Universal";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Black: U_I_CombatUniform
	{
		scope=2;
		displayName="FP Black";
		picture="\FP_Uniforms\UI\blackicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Black";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Grey: U_I_CombatUniform
	{
		scope=2;
		displayName="FP Grey";
		picture="\FP_Uniforms\UI\greyicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Grey";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_OD: U_I_CombatUniform
	{
		scope=2;
		displayName="FP OD";
		picture="\FP_Uniforms\UI\olivedrabicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_OD";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Khaki: U_I_CombatUniform
	{
		scope=2;
		displayName="FP Khaki";
		picture="\FP_Uniforms\UI\khakiicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Khaki";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_RangerGreen: U_I_CombatUniform
	{
		scope=2;
		displayName="FP Ranger Green";
		picture="\FP_Uniforms\UI\rgicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_RangerGreen";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KhakiBrown: U_I_CombatUniform
	{
		scope=2;
		displayName="FP Khaki Brown";
		picture="\FP_Uniforms\UI\kbicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KhakiBrown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_OliveBrown: U_I_CombatUniform
	{
		scope=2;
		displayName="FP Olive Brown";
		picture="\FP_Uniforms\UI\obicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_OliveBrown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_White: U_I_CombatUniform
	{
		scope=2;
		displayName="FP White";
		picture="\FP_Uniforms\UI\whiteicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_White";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_O_OfficerUniform_ocamo;
	class FP_Uniform_ccc: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP US DCU 6-Colour (BDU)";
		picture="\FP_Uniforms\UI\u_ccc_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_ccc";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_DCU: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP US DCU 3-Colour (BDU)";
		picture="\FP_Uniforms\UI\u_dcu_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_dcu";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_DPMWD: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP UK DPM Woodland (BDU)";
		picture="\FP_Uniforms\UI\u_dpmwd_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_dpmwd";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_grn: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP Green (BDU)";
		picture="\FP_Uniforms\UI\u_grn_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_grn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_GRY: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP Grey (BDU)";
		picture="\FP_Uniforms\UI\u_gry_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_gry";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KHK: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP Khaki (BDU)";
		picture="\FP_Uniforms\UI\u_khk_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_khk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_klmk: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP RU KLMK (BDU)";
		picture="\FP_Uniforms\UI\u_klmk_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_klmk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KLMKVDV: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP RU KLMK (BDU/VDV)";
		picture="\FP_Uniforms\UI\u_klmkvdv_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_klmkvdv";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_kmsh: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP RU Kamysh (BDU)";
		picture="\FP_Uniforms\UI\u_kmsh_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_kmsh";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_m05cw: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP FIN M05 Cold Weather (BDU)";
		picture="\FP_Uniforms\UI\u_m05cw_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_m05cw";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_m81: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP US M81 Woodland (BDU)";
		picture="\FP_Uniforms\UI\u_m81_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_m81";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_mrp: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP US MARPAT Woodland (BDU)";
		picture="\FP_Uniforms\UI\u_mrp_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_mrp";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_vsr: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP RU VSR (BDU)";
		picture="\FP_Uniforms\UI\u_vsr_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_VSR";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_1121: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP HEL Dress Uniform";
		picture="\FP_Uniforms\UI\1121icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_1121";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_klmkwinter: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP RU KLMK (Reversed)";
		picture="\FP_Uniforms\UI\u_klmkwint_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_klmkwinter";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_m81white: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP US M81/White (BDU)";
		picture="\FP_Uniforms\UI\u_m81wht_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_m81white";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_WhiteOfficer: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP White (BDU)";
		picture="\FP_Uniforms\UI\u_wht_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_WhiteOfficer";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_m88_patchless;
	class FP_Uniform_GreenM88: rhs_uniform_m88_patchless
	{
		scope=2;
		displayName="FP M88 (Green)";
		picture="\A3\characters_f\data\ui\icon_u_b_combatuniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
                author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_GreenM88";
			containerClass="Supply20";
			mass=80;
		};
	};
	class FP_Uniform_KLMKM88: rhs_uniform_m88_patchless
	{
		scope=2;
		displayName="FP RU KLMK (M88)";
		picture="\FP_Uniforms\UI\klmkicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
                author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KLMKM88";
			containerClass="Supply20";
			mass=40;
		};
	};
	class FP_Uniform_BerezkaM88: rhs_uniform_m88_patchless
	{
		scope=2;
		displayName="FP RU Berezka (M88)";
		picture="\FP_Uniforms\UI\berezkaicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
                author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BerezkaM88";
			containerClass="Supply20";
			mass=40;
		};
	};
	class FP_Uniform_KSOR: rhs_uniform_m88_patchless
	{
		scope=2;
		displayName="FP RU KSOR (M88)";
		picture="\FP_Uniforms\UI\ksoricon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
                author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KSORM88";
			containerClass="Supply20";
			mass=40;
		};
	};
	class FP_Uniform_Alpenflage: rhs_uniform_m88_patchless
	{
		scope=2;
		displayName="FP SWI Vierfruchtpyjama";
		picture="\FP_Uniforms\UI\alpenflageicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
                author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Alpenflage";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_BG_Guerilla2_1;
	class FP_Uniform_NamBDUs: U_BG_Guerilla2_1
	{
		scope=2;
		displayName="FP US Army BDU (1969)";
		picture="\A3\characters_f\data\ui\icon_u_b_combatuniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_NamBDUs";
			containerClass="Supply20";
			mass=80;
		};
	};
    class U_B_CombatUniform_mcam;
    class ESP_Uniform_PGACM90: U_B_CombatUniform_mcam
    {
        scope=2;
        displayName="FP PGAC M90";
        picture="FP_Uniforms\UI\m90pgacicon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Rifleman_PGAC";
            containerClass="Supply40";
            mass=40;
        };
    };     
    class U_B_CombatUniform_mcam_vest;
    class ESP_Uniform_PGACM90_recon: U_B_CombatUniform_mcam_vest
	{
        scope=2;
        displayName="FP PGAC M90 (Rolled-up)";
        picture="FP_Uniforms\UI\m90pgacicon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Recon_PGAC";
            containerClass="Supply40";
            mass=40;
        };
    };
    class U_B_GhillieSuit;
    class ESP_Uniform_PGACM90_ghillie: U_B_GhillieSuit
	{
        scope=2;
        displayName="FP PGAC M90 Ghillie";
        picture="FP_Uniforms\UI\m90pgacicon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Sniper_PGAC";
            containerClass="Supply40";
            mass=40;
        };
    };
    class ESP_Uniform_PDEFM90: U_B_CombatUniform_mcam
    {
        scope=2;
        displayName="FP PDEF M90";
        picture="FP_Uniforms\UI\m90pdeficon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Rifleman_PDEF";
            containerClass="Supply40";
            mass=40;
        };
    };
    class ESP_Uniform_PDEFM90_recon: U_B_CombatUniform_mcam_vest
	{
        scope=2;
        displayName="FP PDEF M90 (Rolled-up)";
        picture="FP_Uniforms\UI\m90pdeficon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Recon_PDEF";
            containerClass="Supply40";
            mass=40;
        };
    };
    class ESP_Uniform_PDEFM90_ghillie: U_B_GhillieSuit
	{
	    scope=2;
        displayName="FP PDEF M90 Ghillie";
        picture="FP_Uniforms\UI\m90pdeficon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Sniper_PDEF";
            containerClass="Supply40";
            mass=40;
        };
    };   
    class ESP_Uniform_PRAFM90: U_B_CombatUniform_mcam
    {
        scope=2;
        displayName="FP PRAF M90";
        picture="FP_Uniforms\UI\m90praficon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Rifleman_PRAF";
            containerClass="Supply40";
            mass=40;
        };
    };
    class ESP_Uniform_PRAFM90_recon: U_B_CombatUniform_mcam_vest
	{
	    scope=2;
        displayName="FP PRAF M90 (Rolled-up)";
        picture="FP_Uniforms\UI\m90praficon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Recon_PRAF";
            containerClass="Supply40";
            mass=40;
        };
    };
    class ESP_Uniform_PRAFM90_ghillie: U_B_GhillieSuit
	{
	    scope=2;
        displayName="FP PRAF M90 Ghillie";
        picture="FP_Uniforms\UI\m90praficon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Sniper_PRAF";
            containerClass="Supply40";
            mass=40;
        };
    };
    class H_HelmetIA;
	class FP_Helmet_M84: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP DEN MICH (M84)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_M84Helmet.paa"};
	};
	class FP_Helmet_M01Dane: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP DEN MICH (M01)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_M01DanishHelmet.paa"};
	};
	class FP_Helmet_M90: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP SWE MICH (M90)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_M90Helmet.paa"};
	};
	class FP_Helmet_M90Des: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP SWE MICH (M90 Desert)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_M90DesHelmet.paa"};
	};
	class FP_Helmet_Auscam: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP AU MICH (Auscam)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_AuscamHelmet.paa"};
	};
	class FP_Helmet_WoodlandDPM: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP UK MICH (Woodland DPM)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\DPM_95_HELM.paa"};
	};
	class FP_Helmet_DesertDPM: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP UK MICH (Desert DPM)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\DPM_D_HELM.paa"};
	};
	class FP_Helmet_MTP: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP UK MICH (MTP)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\MTP_HELM.paa"};
	};
	class FP_Helmet_CADPAT: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP CAN MICH (CADPAT TW)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_CADPATHelmet.paa"};
	};
	class FP_Helmet_CADPATAR: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP CAN MICH (CADPAT AR)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_CADPATARHelmet.paa"};
	};
	class FP_Helmet_DualTex: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP USA MICH (DualTex)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_DualTexHelmet.paa"};
	};
	class FP_Helmet_HECU: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP USA MICH (Urban Splinter)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_HECUHelmet.paa"};
	};
	class FP_Helmet_Flecktarn: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP GER MICH (Flecktarn)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_FlecktarnHelmet.paa"};
	};
	class FP_Helmet_Tropentarn: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP GER MICH (Tropentarn)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_TropentarnHelmet.paa"};
	};
	class FP_Helmet_Flachsteintarn: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP GER MICH (Flachsteintarn)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_FlachSteinTarnHelmet.paa"};
	};
	class FP_Helmet_CCE: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP FR MICH (CCE)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_CCEHelmet.paa"};
	};
	class FP_Helmet_Daguet: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP FR MICH (Daguet)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_DaguetHelmet.paa"};
	};
	class FP_Helmet_RhodieBrush: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP RH MICH (Rhodesian Brushstroke)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_RhodieHelmet.paa"};
	};
	class FP_Helmet_RhodieBrushWinter: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP RH MICH (Rhodesian Brushstroke Winter)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_RhodieWinterHelmet.paa"};
	};
	class FP_Helmet_KyrelianSplinter: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP KY MICH (Splinter)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_KyrelianHelmet.paa"};
	};
	class FP_Helmet_KyrelianWinterSplinter: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP KY MICH (Winter Splinter)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_KyrelianWinterHelmet.paa"};
	};
	class FP_Helmet_Jeitei: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP JP MICH (Jeitei)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_JeiteiHelmet.paa"};
	};
	class FP_Helmet_GraniteB: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP SK MICH (Granite B)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_GraniteBHelmet.paa"};
	};
	class FP_Helmet_M81: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP US MICH (M81)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\h_M81.paa"};
		picture="\FP_Uniforms\UI\u_m81_icon.paa";
	};
    class LOP_H_PASGTHelmet_OLV;
	class FP_Helmet_UNPASGT: LOP_H_PASGTHelmet_OLV
	{
		author = "FP Mod Team";
		_generalMacro = "LOP_H_PASGTHelmet_OLV";
		scope = 2;
		displayName = "FP UN PASGT";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_UNHelmet.paa"};
	};
        class LOP_H_SSh68Helmet_OLV;
	class FP_Helmet_VSRSSH68: LOP_H_SSh68Helmet_OLV
	{
		author = "FP Mod Team";
		_generalMacro = "LOP_H_SSh68Helmet_OLV";
		scope = 2;
		displayName = "FP RU SSH68 (VSR)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_FloraSSH68.paa"};
	};
    class rhs_6b27m_digi;
	class FP_Helmet_Type07Uni: rhs_6b27m_digi
	{
		author = "FP Mod Team";
		_generalMacro = "rhs_6b27m_digi";
		scope = 2;
		displayName = "FP CH Helmet (Type 07 Universal)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_Type07UniversalHelmet.paa"};
	};
    class FP_Helmet_m05: rhs_6b27m_digi
	{
		author="Helari";
		_generalMacro="rhs_6b27m_digi";
		scope=2;
		displayName="FP M05 Helmet";
		hiddenSelectionsTextures[]=
		{"FP_Uniforms\SkinsHeadgear\FP_M05Helmet.paa"};
	};
    class rhs_6b27m_ess;
	class FP_Helmet_Type07UniESS: rhs_6b27m_ess
	{
		author = "FP Mod Team";
		_generalMacro = "rhs_6b27m_ess";
		scope = 2;
		displayName = "FP CH Helmet (Type 07 Universal, Goggles)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_Type07UniversalHelmet.paa"};
	};
	class rhsusf_mich_bare_norotos_alt;
    class ESP_Helmet_MICH: rhsusf_mich_bare_norotos_alt	
    {
        author = "CSLeader";
        _generalMacro = "rhsusf_mich_bare_norotos_alt";
        scope = 2;
        displayName = "MICH 2000 (Black/Norotos)";
		hiddenSelections[] = {"Camo", "Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\ESP_PGACMich.paa", "FP_Uniforms\SkinsHeadgear\mich_acc_pgac_co.paa", "FP_Uniforms\SkinsHeadgear\ESP_PGACMich.paa"};
   	};
    class rhsusf_mich_bare_norotos_arc;
    class ESP_Helmet_MICH_arc: rhsusf_mich_bare_norotos_arc
    {
        author = "CSLeader";
        _generalMacro = "rhsusf_mich_bare_norotos_arc";
        scope = 2;
        displayName = "MICH 2000 (Black/Norotos/ARC)";
		hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo 3"};
        hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\ESP_PGACMich.paa", "FP_Uniforms\SkinsHeadgear\mich_acc_pgac_co.paa", "FP_Uniforms\SkinsHeadgear\ESP_PGACMich.paa"};
    };
	class rhsusf_cvc_helmet;
    class ESP_Helmet_CVC: rhsusf_cvc_helmet	
    {
        author = "CSLeader";
        _generalMacro = "rhsusf_cvc_helmet";
        scope = 2;
        displayName = "ACVC-H (Black)";
        hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\ESP_PGAC_CVC.paa"};
    };
	class rhsusf_cvc_ess;
    class ESP_Helmet_CVC_ESS: rhsusf_cvc_ess	
    {
        author = "CSLeader";
        _generalMacro = "rhsusf_cvc_ess";
        scope = 2;
        displayName = "ACVC-H (Black/ESS)";
        hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\ESP_PGAC_CVC.paa"};
    };
    class H_Booniehat_mcamo;
	class FP_Boonie_Auscam: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "FP AU Boonie (Auscam)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_AuscamBoonie.paa"};
	};
	class FP_Boonie_Tropentarn: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "FP GER Boonie (Tropentarn)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_TropentarnBoonie.paa"};
	};
	class FP_Boonie_Flecktarn: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "FP GER Boonie (Flecktarn)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_FlecktarnBoonie.paa"};
	};
	class FP_Boonie_CADPATAR: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "FP CAN Boonie (CADPAT AR)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_CADPATARBoonie.paa"};
	};
	class FP_Boonie_M03: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "FP NOR Boonie (M03)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_M03Boonie.paa"};
	};
	class FP_Boonie_M90Des: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "FP SWE Boonie (M90 Desert)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_M90DesBoonie.paa"};
	};
	class FP_Boonie_Daguet: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "FP FR Boonie (Daguet)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_DaguetBoonie.paa"};
	};
        class H_Beret_blk;
	class FP_Beret_Purple: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Purple)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_BeretPurple.paa"};
	};
	class FP_Beret_Brown: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Brown)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_BeretBrown.paa"};
	};
	class FP_Beret_Blue: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Blue)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_BeretBlue.paa"};
	};
	class FP_Beret_Green: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Green)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_BeretGreen.paa"};
	};
	class FP_Beret_Grey: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Grey)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_BeretGrey.paa"};
	};
	class FP_Beret_Maroon: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Maroon)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_BeretMaroon.paa"};
	};
	class FP_Beret_Pink: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Pink)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_BeretPink.paa"};
	};
	class FP_Beret_Tan: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Tan)";
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsHeadgear\FP_BeretTan.paa"};
	};
        class V_PlateCarrier1_rgr;
	class VestItem;
	class FP_Carrier_CoyotePatchless: V_PlateCarrier1_rgr
	{
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;

		author = "BIS & FP Mod Team";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "FP Light Carrier (Coyote Brown, Patchless)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsCarrier\FP_PC_CoyotePatchless"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	class FP_Carrier_DarkCoyotePatchless: V_PlateCarrier1_rgr
	{
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;

		author = "BIS & FP Mod Team";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "FP Light Carrier (Dark Coyote, Patchless)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsCarrier\vests_cbr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	class FP_Carrier_BlackPatchless: V_PlateCarrier1_rgr
	{
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;

		author = "BIS & FP Mod Team";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "FP Light Carrier (Black, Patchless)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsCarrier\vests_blk_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	class FP_Carrier_KhakiPatchless: V_PlateCarrier1_rgr
	{
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;

		author = "BIS & FP Mod Team";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "FP Light Carrier (Khaki, Patchless)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsCarrier\vests_khk_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	class FP_Carrier_GreenPatchless: V_PlateCarrier1_rgr
	{
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;

		author = "BIS & FP Mod Team";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "FP Light Carrier (Ranger Green, Patchless)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FP_Uniforms\SkinsCarrier\vests_rgr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	class V_HarnessO_gry;
	class FP_Vest_HarnessGreen: V_HarnessO_gry
	{
		scope=2;
		displayName="FP M1956 Webbing";
		hiddenSelectionsTextures[] = {"\FP_Uniforms\SkinsUniform\clothing_grncamo_co.paa","\FP_Uniforms\SkinsUniform\tech_grncamo_co.paa"};
		picture="\FP_Uniforms\UI\icon_V_HarnessOU_grn_CA.paa";
		author="FP Mod Team";
	};
};
class cfgGlasses
{
	class G_Balaclava_blk;
	class FP_G_Balaclava_wht: G_Balaclava_blk
	{
		author="FP Mod Team";
		displayName = "Balaclava (White)";
		hiddenSelectionsTextures[] = {"\FP_Uniforms\SkinsHeadgear\balaclava_wht.paa"};
		picture = "\FP_Uniforms\UI\balaclava_wht_icon.paa";
	};
};