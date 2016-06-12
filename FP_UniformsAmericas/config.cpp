class CfgPatches
{
	class FP_UniformsAmericas
	{
		units[]=
		{
			"B_APC_Wheeled_01_cannon_wd_F"
		};
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
	class B_Soldier_F;
	class B_Soldier_02_F;
	class B_Soldier_03_F;
	class FP_Rifleman_NATO_WDL : B_Soldier_F
	{
					_generalMacro = "B_Soldier_F"; // This is legitimately useless.
					scope = 1;
					displayName = "Rifleman (WDL)";
					nakedUniform = "U_BasicBody";
					uniformClass = "FP_U_B_CombatUniform_WDL";
					author = "Bohemia Interactive";
					scopeCurator = 0;
					hiddenSelections[] =
					{
						"Camo",
						"insignia"
					};
					hiddenSelectionsTextures[] =
					{
						"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa"};
	};
	class FP_Rifleman_NATO_WDL_Sleeves : B_Soldier_03_F
	{
					_generalMacro = "B_Soldier_03_F";
					scope = 1;
					displayName = "Rifleman (WDL, Sleeves)";
					nakedUniform = "U_BasicBody";
					uniformClass = "FP_U_B_CombatUniform_WDL_Sleeves";
					author = "Bohemia Interactive";
					scopeCurator = 0;
					hiddenSelections[] =
					{
						"Camo",
						"insignia"
					};
					hiddenSelectionsTextures[] =
					{
						"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa"};
	};
	class FP_Rifleman_NATO_WDL_Tee : B_Soldier_02_F
	{
					_generalMacro = "B_Soldier_02_F";
					scope = 1;
					displayName = "Rifleman (WDL, Tee)";
					nakedUniform = "U_BasicBody";
					uniformClass = "FP_U_B_CombatUniform_WDL_Tee";
					author = "Bohemia Interactive";
					scopeCurator = 0;
					hiddenSelections[] =
					{
						"Camo",
						"insignia"
					};
					hiddenSelectionsTextures[] =
					{
						"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa"};
	};
	class FP_Rifleman_NATO_Sage : B_Soldier_F
	{
					_generalMacro = "B_Soldier_F"; // This is legitimately useless.
					scope = 1;
					displayName = "Rifleman (Sage)";
					nakedUniform = "U_BasicBody";
					uniformClass = "FP_U_B_CombatUniform_Sage";
					author = "Bohemia Interactive";
					scopeCurator = 0;
					hiddenSelections[] =
					{
						"Camo",
						"insignia"
					};
					hiddenSelectionsTextures[] =
					{
						"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa"};
	};
	class FP_Rifleman_NATO_Sage_Sleeves : B_Soldier_03_F
	{
					_generalMacro = "B_Soldier_03_F";
					scope = 1;
					displayName = "Rifleman (Sage, Sleeves)";
					nakedUniform = "U_BasicBody";
					uniformClass = "FP_U_B_CombatUniform_Sage_Sleeves";
					author = "Bohemia Interactive";
					scopeCurator = 0;
					hiddenSelections[] =
					{
						"Camo",
						"insignia"
					};
					hiddenSelectionsTextures[] =
					{
						"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa"};
	};
	class FP_Rifleman_NATO_Sage_Tee : B_Soldier_02_F
	{
					_generalMacro = "B_Soldier_02_F";
					scope = 1;
					displayName = "Rifleman (Sage, Tee)";
					nakedUniform = "U_BasicBody";
					uniformClass = "FP_U_B_CombatUniform_Sage_Tee";
					author = "Bohemia Interactive";
					scopeCurator = 0;
					hiddenSelections[] =
					{
						"Camo",
						"insignia"
					};
					hiddenSelectionsTextures[] =
					{
						"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa"};
	};
	class I_soldier_F;
	class FP_Rifleman_CADPAT: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP CAN CADPAT TW";
		nakedUniform="U_BasicBody";
		uniformClass="FP_CADPAT";
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
		scopeCurator = 0;
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
	class FP_Rifleman_HECU: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA Urban Splinter";
		nakedUniform="U_BasicBody";
		uniformClass="FP_HECU";
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
			"FP_UniformsAmericas\SkinsUniform\FP_HECUCAM.paa"
		};
	};
	class FP_Rifleman_AOR1: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA AOR1";
		nakedUniform="U_BasicBody";
		uniformClass="FP_AOR1";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\aor1.paa"
		};
	};
	class FP_Rifleman_AOR2: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA AOR2";
		nakedUniform="U_BasicBody";
		uniformClass="FP_AOR2";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\aor2.paa"
		};
	};
	class FP_Rifleman_dmarpat: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA Desert MARPAT";
		nakedUniform="U_BasicBody";
		uniformClass="FP_dmarpat";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\desertmarpat.paa"
		};
	};
	class FP_Rifleman_dtiger: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA Desert Tigerstripe";
		nakedUniform="U_BasicBody";
		uniformClass="FP_dmarpat";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\deserttiger.paa"
		};
	};
	class FP_Rifleman_m81marpat: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA M81/MARPAT";
		nakedUniform="U_BasicBody";
		uniformClass="FP_m81marpat";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\m81marpat.paa"
		};
	};
	class FP_Rifleman_marpatm81: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA MARPAT/M81";
		nakedUniform="U_BasicBody";
		uniformClass="FP_marpatm81";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\marpatm81.paa"
		};
	};

	class FP_Rifleman_tpat: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA T-PAT";
		nakedUniform="U_BasicBody";
		uniformClass="FP_tpat";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\tpat.paa"
		};
	};
	class FP_Rifleman_wmarpat: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA Woodland MARPAT";
		nakedUniform="U_BasicBody";
		uniformClass="FP_wmarpat";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\marpat.paa"
		};
	};
	class FP_Rifleman_multicam: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA Multicam";
		nakedUniform="U_BasicBody";
		uniformClass="FP_multicam";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\mcam.paa"
		};
	};
	class FP_Rifleman_multicamalpine: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA Multicam (Alpine)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_multicamalpine";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\mcamalpine.paa"
		};
	};

	class FP_Rifleman_multicampcu: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA Multicam/PCU";
		nakedUniform="U_BasicBody";
		uniformClass="FP_multicampcu";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
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
	class FP_Rifleman_multicamtropic: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA Multicam (Tropic)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_multicamtropic";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\mcamtropic.paa"
		};
	};
	class FP_Rifleman_wtiger: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA Woodland Tigerstripe";
		nakedUniform="U_BasicBody";
		uniformClass="FP_wtiger";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\tiger.paa"
		};
	};
	class FP_Rifleman_ucp: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA UCP";
		nakedUniform="U_BasicBody";
		uniformClass="FP_ucp";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\ucp.paa"
		};
	};
	class FP_Rifleman_ucpd: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA UCP-D";
		nakedUniform="U_BasicBody";
		uniformClass="FP_ucpd";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\ucpd.paa"
		};
	};
	class FP_Rifleman_ucppcu: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP USA UCP/PCU";
		nakedUniform="U_BasicBody";
		uniformClass="FP_ucp";
                author="FP Mod Team (Niko)";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\ucppcu.paa"
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
		scopeCurator = 0;
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
		scopeCurator = 0;
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
		scopeCurator = 0;
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
	class FP_Rifleman_m81white: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP US M81/White (BDU)";
		uniformClass="FP_Uniform_m81white";
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
			"FP_UniformsAmericas\SkinsUniform\officer_m81wht.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class CUP_B_USMC_Soldier_02;
	class FP_Rifleman_DesMARPAT_CUP: CUP_B_USMC_Soldier_02
	{
		author="Community Upgrade Project";
		scope=1;
		scopeCurator=0;
		displayName="Soldier";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_USMC_SleevesDown.p3d";
		uniformClass="CUP_U_B_USMC_MARPAT_DES_Sleeves";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\usmc_officer_co.paa",
			"FP_UniformsAmericas\SkinsUniform\usmc_marpatam_co.paa"
		};
	};
	class CUP_B_USMC_Soldier_03;
	class FP_Rifleman_DesMARPAT_Rolled_CUP: CUP_B_USMC_Soldier_03
	{
		displayName="Rifleman";
		scope=1;
		scopeCurator=0;
		author="Community Upgrade Project";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_USMC_SleevesUp.p3d";
		uniformClass="CUP_U_B_USMC_MARPAT_DES_RolledUp";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\usmc_officer_co.paa",
			"FP_UniformsAmericas\SkinsUniform\usmc_marpatam_co.paa",
			"FP_UniformsAmericas\SkinsUniform\usmc_marpatsm_co.paa"
		};
	};
	class CUP_B_USMC_Soldier_04;
	class FP_Rifleman_DesMARPAT_Kneepad_CUP: CUP_B_USMC_Soldier_04
	{
		author="Community Upgrade Project";
		scope=1;
		scopeCurator=0;
		displayName="Scout";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_USMC_Kneepad.p3d";
		uniformClass="CUP_U_B_USMC_MARPAT_DES_Kneepad";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\usmc_officer_co.paa",
			"FP_UniformsAmericas\SkinsUniform\usmc_marpatwsfm_co.paa"
		};
	};
	class CUP_B_USMC_Soldier_07;
	class FP_Rifleman_DesMARPAT_KneepadRolled_CUP: CUP_B_USMC_Soldier_07
	{
		displayName="";
		scope=1;
		scopeCurator=0;
		author="Community Upgrade Project";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_USMC_SleevesUpKP.p3d";
		uniformClass="CUP_U_B_USMC_MARPAT_DES_RolledUp";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\usmc_officer_co.paa",
			"FP_UniformsAmericas\SkinsUniform\usmc_marpatwsfm_co.paa",
			"FP_UniformsAmericas\SkinsUniform\usmc_marpatsm_co.paa"
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
	class U_B_CombatUniform_mcam;
	class U_B_CombatUniform_mcam_vest;
	class U_B_CombatUniform_mcam_tshirt;
	class UniformItem;
	class FP_U_B_CombatUniform_WDL : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="Combat Fatigues (Woodland)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Bohemia Interactive";
		class ItemInfo: UniformItem
		{
				uniformModel="-";
				uniformClass="FP_Rifleman_NATO_WDL";
				containerClass="Supply40";
				mass=40;
		};
	};
	class FP_U_B_CombatUniform_WDL_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="Combat Fatigues (Woodland, Slv.)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Bohemia Interactive";
		class ItemInfo: UniformItem
		{
				uniformModel="-";
				uniformClass="FP_Rifleman_NATO_WDL_Sleeves";
				containerClass="Supply40";
				mass=40;
		};
	};
	class FP_U_B_CombatUniform_WDL_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="Combat Fatigues (Woodland, Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Bohemia Interactive";
		class ItemInfo: UniformItem
		{
				uniformModel="-";
				uniformClass="FP_Rifleman_NATO_WDL_Tee";
				containerClass="Supply40";
				mass=40;
		};
	};
	class FP_U_B_CombatUniform_Sage : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="Combat Fatigues (Sage)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Bohemia Interactive";
		class ItemInfo: UniformItem
		{
				uniformModel="-";
				uniformClass="FP_Rifleman_NATO_Sage";
				containerClass="Supply40";
				mass=40;
		};
	};
	class FP_U_B_CombatUniform_Sage_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="Combat Fatigues (Sage, Slv.)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Bohemia Interactive";
		class ItemInfo: UniformItem
		{
				uniformModel="-";
				uniformClass="FP_Rifleman_NATO_Sage_Sleeves";
				containerClass="Supply40";
				mass=40;
		};
	};
	class FP_U_B_CombatUniform_Sage_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="Combat Fatigues (Sage, Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Bohemia Interactive";
		class ItemInfo: UniformItem
		{
				uniformModel="-";
				uniformClass="FP_Rifleman_NATO_Sage_Tee";
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
	class FP_Uniform_AOR1: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA AOR1";
		picture="\FP_UniformsAmericas\UI\aor1icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_AOR1";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_AOR2: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA AOR2";
		picture="\FP_UniformsAmericas\UI\aor2icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_AOR2";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_dmarpat: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA Desert MARPAT";
		picture="\FP_UniformsAmericas\UI\desertmarpaticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_dmarpat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_dtiger: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA Desert Tigerstripe";
		picture="\FP_UniformsAmericas\UI\deserttigericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_dtiger";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_m81marpat: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA M81/MARPAT";
		picture="\FP_UniformsAmericas\UI\m81marpaticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_m81marpat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_tpat: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA T-PAT";
		picture="\FP_UniformsAmericas\UI\tpaticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_tpat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_marpatm81: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA Woodland MARPAT/M81";
		picture="\FP_UniformsAmericas\UI\marpatm81icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_marpatm81";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_multicam: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA Multicam";
		picture="\FP_UniformsAmericas\UI\mcamicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_multicam";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_multicamalpine: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA Multicam (Alpine)";
		picture="\FP_UniformsAmericas\UI\mcamalpineicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_multicamalpine";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_multicampcu: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA Multicam/PCU";
		picture="\FP_UniformsAmericas\UI\mcampcuicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_multicampcu";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_multicamtropic: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA Multicam (Tropic)";
		picture="\FP_UniformsAmericas\UI\mcamtropicicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_multicamtropic";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_wtiger: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA Woodland Tigerstripe";
		picture="\FP_UniformsAmericas\UI\tigericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_wtiger";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_ucp: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA UCP";
		picture="\FP_UniformsAmericas\UI\UCPicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_ucp";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_ucpd: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA UCP-D";
		picture="\FP_UniformsAmericas\UI\ucpdicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_ucpd";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_ucppcu: U_I_CombatUniform
	{
		scope=2;
		displayName="FP USA UCP/PCU";
		picture="\FP_UniformsAmericas\UI\ucppcuicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_ucppcu";
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
	class ItemCore;
	class CUP_U_B_USMC_MARPAT_DES_Sleeves: ItemCore
	{
		dlc="CUP_Units";
		author="Community Upgrade Project";
		scope=2;
		allowedSlots[]={901};
		displayName="MARPAT (Desert)";
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_marpat_wdl_officer_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_DesMARPAT_CUP";
			containerClass="Supply40";
			mass=20;
		};
	};
	class CUP_U_B_USMC_MARPAT_DES_RolledUp: ItemCore
	{
		dlc="CUP_Units";
		author="Community Upgrade Project";
		scope=2;
		allowedSlots[]={901};
		displayName="MARPAT (Desert Rolled up)";
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_marpat_wdl_rollup_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_DesMARPAT_Rolled_CUP";
			containerClass="Supply40";
			mass=20;
		};
	};
	class CUP_U_B_USMC_MARPAT_DES_Kneepad: ItemCore
	{
		dlc="CUP_Units";
		author="Community Upgrade Project";
		scope=2;
		allowedSlots[]={901};
		displayName="MARPAT (Desert w/Kneepad)";
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_marpat_wdl_officer_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_DesMARPAT_Kneepad_CUP";
			containerClass="Supply40";
			mass=20;
		};
	};
	class CUP_U_B_USMC_MARPAT_DES_RollUpKneepad: ItemCore
	{
		dlc="CUP_Units";
		author="Community Upgrade Project";
		scope=2;
		allowedSlots[]={901};
		displayName="MARPAT (Desert Roll-Up w/kneepad)";
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_marpat_wdl_officer_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_DesMARPAT_KneepadRolled_CUP";
			containerClass="Supply40";
			mass=20;
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
	class FP_Helmet_6CD: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_6CD";
		scope = 2;
		displayName = "FP US MICH (6CD)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_6cd.paa"};
	};
	class FP_Helmet_ALPCAM: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_ALPCAM";
		scope = 2;
		displayName = "FP US MICH (Multicam Alpine)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_alpcam.paa"};
	};
	class FP_Helmet_AOR1: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_AOR1";
		scope = 2;
		displayName = "FP US MICH (AOR1)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_aor1.paa"};
	};
	class FP_Helmet_AOR2: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_AOR2";
		scope = 2;
		displayName = "FP US MICH (AOR2)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_aor2.paa"};
	};
	class FP_Helmet_DMRP: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_DMRP";
		scope = 2;
		displayName = "FP US MICH (Marpat Desert)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_dmrp.paa"};
	};
	class FP_Helmet_MCAM: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_MCAM";
		scope = 2;
		displayName = "FP US MICH (Multicam)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_mcam.paa"};
	};
	class FP_Helmet_SMRP: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_SMRP";
		scope = 2;
		displayName = "FP US MICH (Marpat Snow)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_smrp.paa"};
	};
	class FP_Helmet_TPAT: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_TPAT";
		scope = 2;
		displayName = "FP US MICH (TPAT)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_tpat.paa"};
	};
	class FP_Helmet_UCP: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_UCP";
		scope = 2;
		displayName = "FP US MICH (UCP)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_ucp.paa"};
	};
	class FP_Helmet_UCPD: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_UCPD";
		scope = 2;
		displayName = "FP US MICH (UCP-D)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_ucpd.paa"};
	};
	class FP_Helmet_Tan: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_Tan";
		scope = 2;
		displayName = "FP MICH (Tan)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_tan.paa"};
	};
	class FP_Helmet_OD: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_OD";
		scope = 2;
		displayName = "FP MICH (OD)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_OD.paa"};
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
	class CUP_H_RACS_Helmet_DPAT;
	class FP_Helmet_USMCMARPATHelmet: CUP_H_RACS_Helmet_DPAT
	{
		author = "FP Mod Team";
		scope = 2;
		displayName = "USMC Helmet (Desert MARPAT)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\usmc_marpatsgb_co.paa"};
	};
	class CUP_H_RACS_Helmet_Headset_DPAT;
	class FP_Helmet_USMCMARPATHelmet_Headset: CUP_H_RACS_Helmet_Headset_DPAT
	{
		author = "FP Mod Team";
		scope = 2;
		displayName = "USMC Helmet (Desert MARPAT/Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\usmc_marpatsgb_co.paa"};
	};
	class CUP_H_RACS_Helmet_Goggles_DPAT;
	class FP_Helmet_USMCMARPATHelmet_Goggles: CUP_H_RACS_Helmet_Goggles_DPAT
	{
		author = "FP Mod Team";
		scope = 2;
		displayName = "USMC Helmet (Desert MARPAT/Goggles)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\usmc_marpatsgb_co.paa"};
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
    class V_PlateCarrier1_rgr;
	class VestItem;
	class FP_Carrier_AOR1Patchless: V_PlateCarrier1_rgr
	{
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;
		author = "FP Mod Team (Niko)";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "FP Light Carrier (AOR1, Patchless)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsVest\aor1_rgr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	class FP_Carrier_AOR2Patchless: V_PlateCarrier1_rgr
	{
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;
		author = "FP Mod Team (Niko)";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "FP Light Carrier (AOR2, Patchless)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsVest\aor2_rgr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	class FP_Carrier_mcamPatchless: V_PlateCarrier1_rgr
	{
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;
		author = "FP Mod Team (Niko)";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "FP Light Carrier (Multicam, Patchless)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsVest\mcam_rgr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	class FP_Carrier_ucpPatchless: V_PlateCarrier1_rgr
	{
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;
		author = "FP Mod Team (Niko)";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "FP Light Carrier (UCP, Patchless)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsVest\ucp_rgr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	class FP_Carrier_WinterPatchless: V_PlateCarrier1_rgr
	{
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;
		author = "FP Mod Team (Niko)";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "FP Light Carrier (Winter, Patchless)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsVest\winter_rgr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
};
