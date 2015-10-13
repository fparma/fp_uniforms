class CfgPatches
{
	class FP_UniformsAmericas
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
	class I_soldier_F;
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
			"FP_UniformsAmericas\SkinsUniform\mcampcu.paa"
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
			"FP_UniformsAmericas\SkinsUniform\FP_CADPAT.paa"
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
			"FP_UniformsAmericas\SkinsUniform\FP_CADPATAR.paa"
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
			"FP_UniformsAmericas\SkinsUniform\FP_DualTex.paa"
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
			"FP_UniformsAmericas\SkinsUniform\FP_HECUCAM.paa"
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
			"FP_UniformsAmericas\SkinsUniform\officer_ccc.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
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
			"FP_UniformsAmericas\SkinsUniform\officer_dcu.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
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
			"FP_UniformsAmericas\SkinsUniform\officer_m81.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
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
			"FP_UniformsAmericas\SkinsUniform\officer_mrp.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
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
			"FP_UniformsAmericas\SkinsUniform\officer_m81wht.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class B_APC_Wheeled_01_cannon_F;
	class B_APC_Wheeled_01_cannon_wd_F: B_APC_Wheeled_01_cannon_F
	{
		author="FP Mod Team";
		displayName = "Patria AMV Woodland";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsVehicle\APC_Wheeled_01_base_wd_co.paa","FP_UniformsAmericas\SkinsVehicle\APC_Wheeled_01_adds_wd_co.paa","FP_UniformsAmericas\SkinsVehicle\APC_Wheeled_01_tows_wd_co.paa"};
	};
};
class cfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class FP_Uniform_McamPCU: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA Multicam & PCU";
		picture="\FP_UniformsAmericas\UI\mcampcuicon.paa";
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
		picture="\FP_UniformsAmericas\UI\cadpaticon.paa";
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
		picture="\FP_UniformsAmericas\UI\cadpataricon.paa";
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
		picture="\FP_UniformsAmericas\UI\dualtexicon.paa";
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
		picture="\FP_UniformsAmericas\UI\hecuicon.paa";
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
	class U_O_OfficerUniform_ocamo;
	class FP_Uniform_ccc: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP US DCU 6-Colour (BDU)";
		picture="\FP_UniformsAmericas\UI\u_ccc_icon.paa";
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
		picture="\FP_UniformsAmericas\UI\u_dcu_icon.paa";
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
	class FP_Uniform_m81: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP US M81 Woodland (BDU)";
		picture="\FP_UniformsAmericas\UI\u_m81_icon.paa";
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
		picture="\FP_UniformsAmericas\UI\u_mrp_icon.paa";
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
	class FP_Uniform_m81white: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP US M81/White (BDU)";
		picture="\FP_UniformsAmericas\UI\u_m81wht_icon.paa";
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
    class H_HelmetIA;
	class FP_Helmet_CADPAT: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP CAN MICH (CADPAT TW)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\FP_CADPATHelmet.paa"};
	};
	class FP_Helmet_CADPATAR: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP CAN MICH (CADPAT AR)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\FP_CADPATARHelmet.paa"};
	};
	class FP_Helmet_DualTex: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP USA MICH (DualTex)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\FP_DualTexHelmet.paa"};
	};
	class FP_Helmet_HECU: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP USA MICH (Urban Splinter)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\FP_HECUHelmet.paa"};
	};
	class FP_Helmet_M81: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP US MICH (M81)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_M81.paa"};
		picture="\FP_UniformsAmericas\UI\u_m81_icon.paa";
	};
    class H_Booniehat_mcamo;
	class FP_Boonie_CADPATAR: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "FP CAN Boonie (CADPAT AR)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\FP_CADPATARBoonie.paa"};
	};
	class H_mas_gue_HelmetI;
	class fp_helmet_m1_camo: H_mas_gue_HelmetI
	{
		author="FP Mod Team";
		displayName="FP US M1 Helmet (Mitchell Pattern)";
		picture="\FP_UniformsAmericas\ui\m1_camo_icon.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsAmericas\SkinsHeadgear\m1_camo.paa",
			"\mas_gue_rebl\hats\Data\tak_soldier_equip_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_UniformsAmericas\Misc\m1_camo.rvmat",
			"\mas_gue_rebl\hats\Data\tak_soldier_equip.rvmat"
		};
	};
};