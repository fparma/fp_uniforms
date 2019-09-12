class CfgPatches
{
	class FP_UniformsAsia
	{
		units[]=
		{
			"FP_Rifleman_Type07Universal",
			"FP_Rifleman_02_Type07Universal",
			"FP_Rifleman_Type07Desert",
			"FP_Rifleman_02_Type07Desert",
			"FP_Rifleman_BDU_Type07Universal",
			"FP_Rifleman_BDU_02_Type07Universal",
			"FP_Helipilot_PLA",
			"FP_Fighter_Pilot_PLA_F",
			"FP_Rifleman_INDC",
			"FP_Rifleman_AZTURARID",
			"FP_Rifleman_MECTiger",
			"FP_Rifleman_MECDigiDesert"
		};
		weapons[]=
		{
			"FP_Uniform_Type07Universal",
			"FP_Uniform_02_Type07Universal",
			"FP_Uniform_Type07Desert",
			"FP_Uniform_02_Type07Desert",
			"FP_Uniform_BDU_Type07Universal",
			"FP_Uniform_BDU_02_Type07Universal",
			"FP_HeliPilotCoveralls_PLA",
			"FP_PilotCoveralls_PLA",
			"FP_Uniform_INDC",
			"FP_Uniform_AZTURARID",
			"FP_Uniform_MECTiger",
			"FP_Uniform_MECDigiDesert",
			"FP_Helmet_Type07Uni",
			"FP_Helmet_Type07UniESS",
			"FP_Helmet_Type07Desert",
			"FP_Helmet_Type07DesertESS",
			"FP_fieldcap_PLA_Type07Uni",
			"FP_fieldcap_PLA_Type07Desert"
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
	class I_Soldier_02_F;
	class FP_Rifleman_Type07Universal: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_Type07Universal";
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
	class FP_Rifleman_02_Type07Universal: I_soldier_02_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_02_Type07Universal";
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
	class FP_Rifleman_Type07Desert: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_Type07Desert";
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
			"FP_UniformsAsia\SkinsUniform\FP_Type07Desert.paa"
		};
	};
	class FP_Rifleman_02_Type07Desert: I_soldier_02_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_02_Type07Desert";
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
			"FP_UniformsAsia\SkinsUniform\FP_Type07Desert.paa"
		};
	};
	class I_E_Uniform_01_F;
	class I_E_Uniform_01_shortsleeve_F;
	class FP_Rifleman_BDU_Type07Universal: I_E_Uniform_01_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_Type07Universal";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Universal.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Type07Universal.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_02_Type07Universal: I_E_Uniform_01_shortsleeve_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_02_Type07Universal";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Universal.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Type07Universal.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
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
	class O_Fighter_Pilot_F;
	class FP_Fighter_Pilot_PLA_F: O_Fighter_Pilot_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="Fighter Pilot";
		nakedUniform="U_BasicBody";
		uniformClass = "FP_PilotCoveralls_PLA";
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
			"FP_UniformsAsia\SkinsUniform\FP_Pilot_Suit_PLA.paa"
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
	class U_I_CombatUniform_shortsleeve;
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
	class FP_Uniform_02_Type07Universal: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Universal, Rolled-Up)";
		picture="\FP_UniformsAsia\UI\type07universalicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_02_Type07Universal";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Type07Desert: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Desert)";
		picture="\FP_UniformsAsia\UI\type07universalicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Type07Desert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_02_Type07Desert: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Desert, Rolled-Up)";
		picture="\FP_UniformsAsia\UI\type07universalicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_02_Type07Desert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_E_Uniform_01_F;
	class U_I_E_Uniform_01_shortsleeve_F;
	class FP_Uniform_BDU_Type07Universal: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Universal, BDU)";
		picture="\FP_UniformsAsia\UI\type07universalicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Universal.paa"
        };
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_Type07Universal";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_02_Type07Universal: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Universal, BDU, Rolled-up)";
		picture="\FP_UniformsAsia\UI\type07universalicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Universal.paa"
        };
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_02_Type07Universal";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_HeliPilotCoveralls;
	class FP_HeliPilotCoveralls_PLA: U_B_HeliPilotCoveralls
		{
		scope=2;
		displayName = "Heli Pilot Coveralls [PLA]";
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
	class U_O_PilotCoveralls;
	class FP_PilotCoveralls_PLA: U_O_PilotCoveralls
		{
		scope=2;
		displayName = "Pilot Coveralls [PLA]";
		author="FP Mod Team";
		side=0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Fighter_Pilot_PLA_F";
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
	class FP_Helmet_Type07Desert: rhs_6b27m_digi
	{
		author="FP Mod Team";
		_generalMacro="rhs_6b27m_digi";
		scope=2;
		displayName="FP CH Helmet (Type 07 Desert)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07DesertHelmet.paa"
		};
	};
	class FP_Helmet_Type07DesertESS: rhs_6b27m_ess
	{
		author="FP Mod Team";
		_generalMacro="rhs_6b27m_ess";
		scope=2;
		displayName="FP CH Helmet (Type 07 Desert, Goggles)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07DesertHelmet.paa"
		};
	};
	class rhs_fieldcap;
	class FP_fieldcap_PLA_Type07Uni: rhs_fieldcap
	{
		author="FP Mod Team";
		_generalMacro="rhs_fieldcap";
		scope=2;
		displayName="FP CH Field Cap (Type 07 Universal)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07UniversalHelmet.paa"
		};
	};	
	class FP_fieldcap_PLA_Type07Desert: rhs_fieldcap
	{
		author="FP Mod Team";
		_generalMacro="rhs_fieldcap";
		scope=2;
		displayName="FP CH Field Cap (Type 07 Desert)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07DesertHelmet.paa"
		};
	};	
};
