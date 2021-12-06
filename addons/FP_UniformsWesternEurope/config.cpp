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
};
class cfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class FP_Uniform_Cropatw: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (CROPAT Woodland)";
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
	class FP_Uniform_CCE: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (CCE)";
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
    class H_HelmetIA;
	class FP_Helmet_CCE: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "Modular Helmet (CCE)";
		hiddenSelectionsTextures[] = {"FP_UniformsWesternEurope\SkinsHeadgear\FP_CCEHelmet.paa"};
	};
};
