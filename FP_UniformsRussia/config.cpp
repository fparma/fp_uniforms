class CfgPatches
{
	class FP_UniformsRussia
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"FP_UniformsEverywhereElse"
		};
	};
};
class CfgVehicles
{
	class O_officer_F;
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
			"FP_UniformsRussia\SkinsUniform\officer_klmk.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
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
			"FP_UniformsRussia\SkinsUniform\officer_klmkvdv.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
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
			"FP_UniformsRussia\SkinsUniform\officer_kmsh.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
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
			"FP_UniformsRussia\SkinsUniform\officer_VSR.paa"
		};
	    hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
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
			"FP_UniformsRussia\SkinsUniform\officer_klmkwint.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
};
class cfgWeapons
{
	class UniformItem;
	class U_O_OfficerUniform_ocamo;
	class FP_Uniform_klmk: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP RU KLMK (BDU)";
		picture="\FP_UniformsRussia\UI\u_klmk_icon.paa";
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
		picture="\FP_UniformsRussia\UI\u_klmkvdv_icon.paa";
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
		picture="\FP_UniformsRussia\UI\u_kmsh_icon.paa";
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
	class FP_Uniform_vsr: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP RU VSR (BDU)";
		picture="\FP_UniformsRussia\UI\u_vsr_icon.paa";
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
	class FP_Uniform_klmkwinter: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP RU KLMK (Reversed)";
		picture="\FP_UniformsRussia\UI\u_klmkwint_icon.paa";
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
    class CUP_H_TK_Helmet;
	class FP_Helmet_VSRSSH68: CUP_H_TK_Helmet
	{
		author = "FP Mod Team";
		_generalMacro = "LOP_H_SSh68Helmet_OLV";
		scope = 2;
		displayName = "FP RU SSH68 (VSR)";
		hiddenSelectionsTextures[] = {"FP_UniformsRussia\SkinsHeadgear\FP_FloraSSH68.paa"};
	};
};