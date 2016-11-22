class CfgPatches
{
	class FP_UniformsAsia
	{
		units[]=
		{
			"FP_Rifleman_Auscam",
			"FP_Rifleman_Jeitei",
			"FP_Rifleman_Type07Universal",
			"FP_Rifleman_AAD",
			"FP_Rifleman_INDC",
			"FP_Rifleman_AZTURARID",
			"FP_Rifleman_MECTiger",
			"FP_Rifleman_MECDigiDesert"
		};
		weapons[]=
		{
			"FP_Uniform_Auscam",
			"FP_Uniform_Jeitei",
			"FP_Uniform_Type07Universal",
			"FP_Uniform_AAD",
			"FP_Uniform_INDC",
			"FP_Uniform_AZTURARID",
			"FP_Uniform_MECTiger",
			"FP_Uniform_MECDigiDesert",
			"FP_Helmet_Auscam",
			"FP_Helmet_Jeitei",
			"FP_Helmet_AZTURARID",
			"FP_Helmet_PASGT_HelmetCoverAAD",
			"FP_Helmet_Type07Uni",
			"FP_Helmet_MECTiger",
			"FP_Helmet_MECTiger_Headset",
			"FP_Helmet_MECTiger_Goggles",
			"FP_Boonie_Auscam"
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
	class I_soldier_F;
	class FP_Rifleman_Auscam: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="AU Auscam";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Auscam";
		author="FP Mod Team";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Auscam.paa"
		};
	};
	class FP_Rifleman_Jeitei: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="JP Jeitei";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Jeitei";
		author="FP Mod Team";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Jeitei.paa"
		};
	};
	class FP_Rifleman_Type07Universal: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Jeitei";
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
			"FP_UniformsAsia\SkinsUniform\FP_Type07Universal.paa"
		};
	};
	class FP_Rifleman_AAD: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="ARM Arid Digital";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_AAD";
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
			"FP_UniformsAsia\SkinsUniform\FP_AAD.paa"
		};
	};
	class FP_Rifleman_INDC: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="IND Indian Camo";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_INDC";
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
			"FP_UniformsAsia\SkinsUniform\FP_INDIA.paa"
		};
	};
	class FP_Rifleman_AZTURARID: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="AZ-TUR Arid Camo";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_AZTURARID";
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
			"FP_UniformsAsia\SkinsUniform\FP_AZTURARID.paa"
		};
	};
	class FP_Rifleman_MECTiger: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="MEC Tigerstripe (Sweater)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_MECTiger";
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
			"FP_UniformsAsia\SkinsUniform\MECNormalfags.paa"
		};
	};
	class FP_Rifleman_MECDigiDesert: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="MEC Recon Digital Desert (Sweater)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_MECDigiDesert";
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
			"FP_UniformsAsia\SkinsUniform\MECSpecialfag.paa"
		};
	};
};
class cfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class FP_Uniform_Auscam: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Auscam)";
		picture="\FP_UniformsAsia\UI\auscamicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Auscam";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Jeitei: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Jeitei)";
		picture="\FP_UniformsAsia\UI\jeiteiicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Jeitei";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Type07Universal: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Universal)";
		picture="\FP_UniformsAsia\UI\type07universalicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Type07Universal";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_AAD: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Armenian Arid)";
		picture="\FP_UniformsAsia\UI\AADicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_AAD";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_INDC: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Indian)";
		picture="\FP_UniformsAsia\UI\INDIAicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_INDC";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_AZTURARID: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (AzTur Arid)";
		picture="\FP_UniformsAsia\UI\AZTURARIDicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_AZTURARID";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_MECTiger: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (MEC Tiger)";
		picture="\FP_UniformsAsia\UI\mectigericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_MECTiger";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_MECDigiDesert: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Recon Digi Desert)";
		picture="\FP_UniformsAsia\UI\mectigericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_MECDigiDesert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class H_HelmetIA;
	class FP_Helmet_Auscam: H_HelmetIA
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Modular Helmet (Auscam)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_AuscamHelmet.paa"
		};
	};
	class FP_Helmet_Jeitei: H_HelmetIA
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Modular Helmet (Jeitei)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_JeiteiHelmet.paa"
		};
	};
	class FP_Helmet_AZTURARID: H_HelmetIA
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Modular Helmet (Azeri Turkish Arid)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_helm_AZTURARID.paa"
		};
	};
	class FP_Helmet_PASGT_HelmetCoverM81;
	class FP_Helmet_PASGT_HelmetCoverAAD: FP_Helmet_PASGT_HelmetCoverM81
	{
		author="FP Mod Team";
		_generalMacro="FP_Helmet_PASGT_HelmetCoverM81";
		scope=2;
		displayName="PASGT (Cover/Arm Arid Digi)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_helm_AAD.paa"
		};
	};
	class FP_Helmet_Type07Uni: FP_Helmet_PASGT_HelmetCoverM81
	{
		author="FP Mod Team";
		_generalMacro="FP_Helmet_PASGT_HelmetCoverM81";
		scope=2;
		displayName="PASGT (Type 07 Universal)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_HelmetType07.paa"
		};
	};
	class CUP_H_RACS_Helmet_DPAT;
	class FP_Helmet_MECTiger: CUP_H_RACS_Helmet_DPAT
	{
		author="FP Mod Team";
		_generalMacro="CUP_H_RACS_Helmet_DPAT";
		scope=2;
		displayName="MEC Helmet (MEC Tiger)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\racs_helmet_desert_co.paa"
		};
	};
	class CUP_H_RACS_Helmet_Headset_DPAT;
	class FP_Helmet_MECTiger_Headset: CUP_H_RACS_Helmet_Headset_DPAT
	{
		author="FP Mod Team";
		_generalMacro="CUP_H_RACS_Helmet_Headset_DPAT";
		scope=2;
		displayName="MEC Helmet (MEC Tiger/Headset)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\racs_helmet_desert_co.paa"
		};
	};
	class CUP_H_RACS_Helmet_Goggles_DPAT;
	class FP_Helmet_MECTiger_Goggles: CUP_H_RACS_Helmet_Goggles_DPAT
	{
		author="FP Mod Team";
		_generalMacro="CUP_H_RACS_Helmet_DPAT";
		scope=2;
		displayName="MEC Helmet (MEC Tiger/Goggles)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\racs_helmet_desert_co.paa"
		};
	};
	class H_Booniehat_mcamo;
	class FP_Boonie_Auscam: H_Booniehat_mcamo
	{
		author="FP Mod Team";
		_generalMacro="H_Booniehat_mcamo";
		scope=2;
		displayName="Booniehat (Auscam)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_AuscamBoonie.paa"
		};
	};
};
