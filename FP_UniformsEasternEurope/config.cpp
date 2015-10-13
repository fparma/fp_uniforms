class CfgPatches
{
	class FP_UniformsEasternEurope
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
			"FP_UniformsEasternEurope\SkinsUniform\FP_M05.paa"
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
			"FP_UniformsEasternEurope\SkinsUniform\FP_M84.paa"
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
			"FP_UniformsEasternEurope\SkinsUniform\FP_M01Danish.paa"
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
			"FP_UniformsEasternEurope\SkinsUniform\FP_M98.paa"
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
			"FP_UniformsEasternEurope\SkinsUniform\FP_M03.paa"
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
			"FP_UniformsEasternEurope\SkinsUniform\FP_M90.paa"
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
			"FP_UniformsEasternEurope\SkinsUniform\FP_M90Des.paa"
		};
	};
	class O_officer_F;
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
			"FP_UniformsEasternEurope\SkinsUniform\officer_m05cw.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class rhs_msv_rifleman_m88_patchless;
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
			"FP_UniformsEasternEurope\SkinsUniform\FP_Alpenflage.paa"
		};
	};
};
class cfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class FP_Uniform_M05: U_I_CombatUniform
	{
		scope=2;
		displayName="FP FIN M05 Woodland";
		picture="\FP_UniformsEasternEurope\UI\m05icon.paa";
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
		picture="\FP_UniformsEasternEurope\UI\m84icon.paa";
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
		picture="\FP_UniformsEasternEurope\UI\m01icon.paa";
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
		picture="\FP_UniformsEasternEurope\UI\m98icon.paa";
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
		picture="\FP_UniformsEasternEurope\UI\m03icon.paa";
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
		picture="\FP_UniformsEasternEurope\UI\m90icon.paa";
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
		picture="\FP_UniformsEasternEurope\UI\m90desicon.paa";
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
	class U_O_OfficerUniform_ocamo;
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
	class rhs_uniform_m88_patchless;
	class FP_Uniform_Alpenflage: rhs_uniform_m88_patchless
	{
		scope=2;
		displayName="FP SWI Vierfruchtpyjama";
		picture="\FP_UniformsEasternEurope\UI\alpenflageicon.paa";
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
    class H_HelmetIA;
	class FP_Helmet_M84: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP DEN MICH (M84)";
		hiddenSelectionsTextures[] = {"FP_UniformsEasternEurope\SkinsHeadgear\FP_M84Helmet.paa"};
	};
	class FP_Helmet_M01Dane: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP DEN MICH (M01)";
		hiddenSelectionsTextures[] = {"FP_UniformsEasternEurope\SkinsHeadgear\FP_M01DanishHelmet.paa"};
	};
	class FP_Helmet_M90: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP SWE MICH (M90)";
		hiddenSelectionsTextures[] = {"FP_UniformsEasternEurope\SkinsHeadgear\FP_M90Helmet.paa"};
	};
	class FP_Helmet_M90Des: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP SWE MICH (M90 Desert)";
		hiddenSelectionsTextures[] = {"FP_UniformsEasternEurope\SkinsHeadgear\FP_M90DesHelmet.paa"};
	};
    class rhs_6b27m_digi;
    class FP_Helmet_m05: rhs_6b27m_digi
	{
		author="FP Mod Team (Helari)";
		_generalMacro="rhs_6b27m_digi";
		scope=2;
		displayName="FP M05 Helmet";
		hiddenSelectionsTextures[]=
		{"FP_UniformsEasternEurope\SkinsHeadgear\FP_M05Helmet.paa"};
	};
    class H_Booniehat_mcamo;
	class FP_Boonie_M03: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "FP NOR Boonie (M03)";
		hiddenSelectionsTextures[] = {"FP_UniformsEasternEurope\SkinsHeadgear\FP_M03Boonie.paa"};
	};
	class FP_Boonie_M90Des: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "FP SWE Boonie (M90 Desert)";
		hiddenSelectionsTextures[] = {"FP_UniformsEasternEurope\SkinsHeadgear\FP_M90DesBoonie.paa"};
	};
};