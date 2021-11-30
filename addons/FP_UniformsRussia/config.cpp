class CfgPatches
{
	class FP_UniformsRussia
	{
		units[]=
		{
			"FP_Rifleman_klmk",
			"FP_Rifleman_SovUniform_Private",
			"FP_Rifleman_SovUniform_Sergeant"
		};
		weapons[]=
		{
			"FP_Uniform_klmk",
			"FP_Uniform_SovUniform_Private",
			"FP_Uniform_SovUniform_Sergeant"
		};
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
		side=0;
		scopeCurator=0;
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
	class FP_Rifleman_SovUniform_Private: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Soviet Uniform (Privjet)";
		uniformClass="FP_Uniform_sovprivuniform";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsRussia\SkinsUniform\GSFG70privjet.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_SovUniform_Sergeant: FP_Rifleman_SovUniform_Private
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Soviet Uniform (Sergeant)";
		uniformClass="FP_Uniform_sovserguniform";
		author="FP Mod Team";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsRussia\SkinsUniform\GSFG70sergeant.paa"
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
		displayName="Combat Fatigues (KLMK/BDU)";
		picture="\FP_UniformsRussia\UI\u_klmk_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_klmk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_SovUniform_Private: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Soviet Uniform (Private)";
		picture="\FP_UniformsRussia\UI\u_klmk_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_SovUniform_Private";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_SovUniform_Sergeant: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Soviet Uniform (Sergeant)";
		picture="\FP_UniformsRussia\UI\u_klmk_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_SovUniform_Sergeant";
			containerClass="Supply40";
			mass=40;
		};
	};
};
