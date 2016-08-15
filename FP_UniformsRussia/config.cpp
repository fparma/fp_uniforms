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
		scopeCurator = 0;
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
	class FP_Rifleman_klmkwinter: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP RU KLMK Winter";
		uniformClass="FP_Uniform_klmkwinter";
		author="FP Mod Team";
		side = 0;
		scopeCurator = 0;
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
	class FP_Rifleman_SovUniform_Private: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Soviet Uniform (Privjet)";
		uniformClass="FP_Uniform_sovprivuniform";
		author="FP Mod Team";
		side = 0;
		scopeCurator = 0;
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
		side = 2;
		scopeCurator = 0;
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
	class usm_base_odg;
	class fp_usm_base_digiflora: usm_base_odg
	{
		_generalMacro="fp_usm_base_digiflora";
		scope=1;
		displayName = "Rifleman";
		uniformClass="FP_usm_bdu_digiflora";
		author="FP Mod Team";
		side = 2;
		hiddenSelections[] = {"2_nametapes","2_unitpatches","camo","gasmaskcarrier","kneepads"};
		hiddenSelectionsTextures[] = {"","","FP_UniformsRussia\SkinsUniform\uniform_bdu_digiflora_co.paa",""};
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
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_klmk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_klmkwinter: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (KLMK/Reversed/BDU)";
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
	class FP_Uniform_SovUniform_Private: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Soviet Uniform (Private)";
		picture="\FP_UniformsRussia\UI\u_klmk_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 0;
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
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_SovUniform_Sergeant";
			containerClass="Supply40";
			mass=40;
		};
	};
	class usm_bdu_odg;
	class FP_usm_bdu_digiflora: usm_bdu_odg
	{
		scope=2;
		displayName = "BDUs, blouse/trousers, Digi Flora";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "fp_usm_base_digiflora";
			containerClass="Supply10";
			mass=40;
		};
	};
    class CUP_H_TK_Helmet;
	class FP_Helmet_VSRSSH68: CUP_H_TK_Helmet
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_SSH68";
		scope = 2;
		displayName = "SSH68 (VSR)";
		hiddenSelectionsTextures[] = {"FP_UniformsRussia\SkinsHeadgear\FP_FloraSSH68.paa"};
	};
    class FP_Helmet_PASGT_HelmetCoverM81;
	class FP_Helmet_PASGT_HelmetCoverDigiFlora: FP_Helmet_PASGT_HelmetCoverM81
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_PASGT_HelmetCoverDigiFlora";
		scope = 2;
		displayName = "PASGT (Cover/DigiFlora)";
		hiddenSelectionsTextures[] = {"FP_UniformsRussia\SkinsHeadgear\pasgt_helmet_digiflora_co.paa"};
	};
};