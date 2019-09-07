class CfgPatches
{
	class FP_UniformsAsia
	{
		units[]=
		{
			"FP_Rifleman_Type07Universal",
			"FP_Rifleman_INDC",
			"FP_Rifleman_AZTURARID",
			"FP_Rifleman_MECTiger",
			"FP_Rifleman_MECDigiDesert",
			"FP_Helipilot_PLA"
		};
		weapons[]=
		{
			"FP_Uniform_Type07Universal",
			"FP_Uniform_INDC",
			"FP_Uniform_AZTURARID",
			"FP_Uniform_MECTiger",
			"FP_Uniform_MECDigiDesert",
			"FP_Helmet_Type07Uni",
			"FP_HeliPilotCoveralls_PLA"
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
	class B_Helipilot_F;
	class FP_Helipilot_PLA: B_Helipilot_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="Helicopter Pilot";
		nakedUniform="U_BasicBody";
		uniformClass = "FP_HeliPilotCoveralls_PLA";
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
			"FP_UniformsAsia\SkinsUniform\FP_Coveralls_PLA.paa"
		};
	};	
};
class cfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
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
	class U_B_HeliPilotCoveralls;
	class FP_HeliPilotCoveralls_PLA: U_B_HeliPilotCoveralls
		{
		scope=2;
		displayName = "Heli Pilot Coveralls [PLA]";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		author="FP Mod Team";
		side=0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Helipilot_PLA";
			containerClass="Supply40";
			mass=40;
		};
	};
	class H_HelmetIA;
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
	class rhs_6b27m_digi;
	class FP_Helmet_Type07Uni: rhs_6b27m_digi
	{
		author="FP Mod Team";
		_generalMacro="rhs_6b27m_digi";
		scope=2;
		displayName="FP CH Helmet (Type 07 Universal)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07UniversalHelmet.paa"
		};
	};
	class rhs_6b27m_ess;
	class FP_Helmet_Type07UniESS: rhs_6b27m_ess
	{
		author="FP Mod Team";
		_generalMacro="rhs_6b27m_ess";
		scope=2;
		displayName="FP CH Helmet (Type 07 Universal, Goggles)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07UniversalHelmet.paa"
		};
	};
};
