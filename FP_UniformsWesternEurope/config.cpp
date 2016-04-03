class CfgPatches
{
	class FP_UniformsWesternEurope
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
	class FP_Rifleman_DesDPM: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP UK Desert DPM";
		nakedUniform="U_BasicBody";
		uniformClass="FP_DesDPM";
                author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsWesternEurope\SkinsUniform\DesDPM.paa"
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
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsWesternEurope\SkinsUniform\DPM_95.paa"
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
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsWesternEurope\SkinsUniform\MTP_UNI.paa"
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
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsWesternEurope\SkinsUniform\FP_Flecktarn.paa"
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
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsWesternEurope\SkinsUniform\FP_FlecktarnGreen.paa"
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
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsWesternEurope\SkinsUniform\FP_Tropentarn.paa"
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
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsWesternEurope\SkinsUniform\FP_FlachSteinTarn.paa"
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
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsWesternEurope\SkinsUniform\FP_CCE.paa"
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
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsWesternEurope\SkinsUniform\FP_Daguet.paa"
		};
	};
	class FP_Rifleman_CROPATW: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP CROPAT Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_Cropatw";
                author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsWesternEurope\SkinsUniform\FP_CROPATW.paa"
		};
	};
	class FP_Rifleman_CWD-KOS: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Kos Cold Weather Digital";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_CWD";
                author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsWesternEurope\SkinsUniform\FP_CWD-KOS.paa"
		};
	};
	class O_officer_F;
	class FP_Rifleman_GRY-BRD: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP BRD Grey (BDU)";
		uniformClass="FP_Uniform_GRYBRD";
		author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsWesternEurope\SkinsUniform\FP_GRY_BRD.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class O_officer_F;
	class FP_Rifleman_dpmwd: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP UK DPM Woodland (BDU)";
		uniformClass="FP_Uniform_DPMWD";
		author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsWesternEurope\SkinsUniform\officer_dpmwd.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
};
class cfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class FP_Uniform_Cropatw: U_I_CombatUniform
	{
		scope=2;
		displayName="FP CROPAT Woodland";
		picture="\FP_UniformsWesternEurope\UI\cropatw_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team (Tomoe)";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_CROPATW";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_CWD: U_I_CombatUniform
	{
		scope=2;
		displayName="FP KOS Cold Weather Digital";
		picture="\FP_UniformsWesternEurope\UI\cwd_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team (Tomoe)";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_CWD-KOS";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_DesDPM: U_I_CombatUniform
	{
		scope=2;
		displayName="FP UK Desert DPM";
		picture="\FP_UniformsWesternEurope\UI\desdpmicon.paa";
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
		picture="\FP_UniformsWesternEurope\UI\woodlanddpmicon.paa";
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
		picture="\FP_UniformsWesternEurope\UI\mtpicon.paa";
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
	class FP_Uniform_Flecktarn: U_I_CombatUniform
	{
		scope=2;
		displayName="FP GER Flecktarn";
		picture="\FP_UniformsWesternEurope\UI\flecktarnicon.paa";
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
		picture="\FP_UniformsWesternEurope\UI\flecktarnicon.paa";
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
		picture="\FP_UniformsWesternEurope\UI\steppentarnicon.paa";
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
		picture="\FP_UniformsWesternEurope\UI\steppentarnicon.paa";
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
		picture="\FP_UniformsWesternEurope\UI\cceicon.paa";
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
		picture="\FP_UniformsWesternEurope\UI\dagueticon.paa";
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
	class U_O_OfficerUniform_ocamo;
	class FP_Uniform_DPMWD: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP UK DPM Woodland (BDU)";
		picture="\FP_UniformsWesternEurope\UI\u_dpmwd_icon.paa";
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
	class U_O_OfficerUniform_ocamo;
	class FP_Uniform_GRYBRD: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP BRD Grey (BDU)";
		picture="\FP_UniformsWesternEurope\UI\u_brdgrey_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_GRY-BRD";
			containerClass="Supply40";
			mass=40;
		};
	};
    class H_HelmetIA;
	class FP_Helmet_WoodlandDPM: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP UK MICH (Woodland DPM)";
		hiddenSelectionsTextures[] = {"FP_UniformsWesternEurope\SkinsHeadgear\DPM_95_HELM.paa"};
	};
	class FP_Helmet_DesertDPM: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP UK MICH (Desert DPM)";
		hiddenSelectionsTextures[] = {"FP_UniformsWesternEurope\SkinsHeadgear\DPM_D_HELM.paa"};
	};
	class FP_Helmet_MTP: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP UK MICH (MTP)";
		hiddenSelectionsTextures[] = {"FP_UniformsWesternEurope\SkinsHeadgear\MTP_HELM.paa"};
	};
	class FP_Helmet_Flecktarn: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP GER MICH (Flecktarn)";
		hiddenSelectionsTextures[] = {"FP_UniformsWesternEurope\SkinsHeadgear\FP_FlecktarnHelmet.paa"};
	};
	class FP_Helmet_Tropentarn: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP GER MICH (Tropentarn)";
		hiddenSelectionsTextures[] = {"FP_UniformsWesternEurope\SkinsHeadgear\FP_TropentarnHelmet.paa"};
	};
	class FP_Helmet_Flachsteintarn: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP GER MICH (Flachsteintarn)";
		hiddenSelectionsTextures[] = {"FP_UniformsWesternEurope\SkinsHeadgear\FP_FlachSteinTarnHelmet.paa"};
	};
	class FP_Helmet_CCE: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP FR MICH (CCE)";
		hiddenSelectionsTextures[] = {"FP_UniformsWesternEurope\SkinsHeadgear\FP_CCEHelmet.paa"};
	};
	class FP_Helmet_Daguet: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP FR MICH (Daguet)";
		hiddenSelectionsTextures[] = {"FP_UniformsWesternEurope\SkinsHeadgear\FP_DaguetHelmet.paa"};
	};
    class H_Booniehat_mcamo;
	class FP_Boonie_Tropentarn: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "FP GER Boonie (Tropentarn)";
		hiddenSelectionsTextures[] = {"FP_UniformsWesternEurope\SkinsHeadgear\FP_TropentarnBoonie.paa"};
	};
	class FP_Boonie_Flecktarn: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "FP GER Boonie (Flecktarn)";
		hiddenSelectionsTextures[] = {"FP_UniformsWesternEurope\SkinsHeadgear\FP_FlecktarnBoonie.paa"};
	};
	class FP_Boonie_Daguet: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "FP FR Boonie (Daguet)";
		hiddenSelectionsTextures[] = {"FP_UniformsWesternEurope\SkinsHeadgear\FP_DaguetBoonie.paa"};
	};
};
