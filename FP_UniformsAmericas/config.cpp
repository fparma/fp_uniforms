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
						"FP_UniformsAmericas\SkinsUniform\clothing_wdl_co.paa"};
					hiddenSelectionsMaterials[] = {
						"FP_UniformsAmericas\Misc\clothing2.rvmat"};
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
						"FP_UniformsAmericas\SkinsUniform\clothing_wdl_co.paa"};
					hiddenSelectionsMaterials[] = {
						"FP_UniformsAmericas\Misc\clothing2.rvmat"};
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
						"FP_UniformsAmericas\SkinsUniform\clothing_wdl_co.paa"};
					hiddenSelectionsMaterials[] = {
						"FP_UniformsAmericas\Misc\clothing2.rvmat"};						
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
						"FP_UniformsAmericas\SkinsUniform\clothing_sage_co.paa"};
					hiddenSelectionsMaterials[] = {
						"FP_UniformsAmericas\Misc\clothing2.rvmat"};
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
						"FP_UniformsAmericas\SkinsUniform\clothing_sage_co.paa"};
					hiddenSelectionsMaterials[] = {
						"FP_UniformsAmericas\Misc\clothing2.rvmat"};						
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
						"FP_UniformsAmericas\SkinsUniform\clothing_sage_co.paa"};
					hiddenSelectionsMaterials[] = {
						"FP_UniformsAmericas\Misc\clothing2.rvmat"};
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
	class CUP_B_US_Soldier;
	class FP_Rifleman_USArmy_OCP: CUP_B_US_Soldier
	{
		displayName="";
		scope=2;
		author="Community Upgrade Project";
		uniformClass="CUP_U_B_USArmy_Base_OCP";
        hiddenSelectionsTextures[] = {
		    "FP_UniformsAmericas\SkinsUniform\ocp2_cupusarmy.paa",
		    "FP_UniformsAmericas\SkinsUniform\ocp_cupusarmy.paa"
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
		displayName="Combat Fatigues (CADPAT TW)";
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
		displayName="Combat Fatigues (CADPAT AR)";
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
		displayName="Combat Fatigues (Urban Splinter)";
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
		displayName="Combat Fatigues (DCU 6-Colour/BDU)";
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
		displayName="Combat Fatigues (DCU 3-Colour/BDU)";
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
		displayName="Combat Fatigues (M81 Woodland/BDU)";
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
		displayName="Combat Fatigues (M81/White/BDU)";
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
	class CUP_U_B_USArmy_Base;
	class CUP_U_B_USArmy_Base_OCP: CUP_U_B_USArmy_Base
	{
		dlc="CUP_Units";
		author="Community Upgrade Project";
		scope=1;
		allowedSlots[]={901};
		displayName="US Army (OCP)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_marpat_wdl_officer_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_USArmy_OCP";
			containerClass="Supply40";
			mass=20;
		};
	};
	class CUP_H_FR_ECH
	class FP_USMC_ECH_RGR: CUP_H_FR_ECH
	{
		author = "FP Mod Team";
		_generalMacro = "CUP_H_FR_ECH";
		scope = 2;
		displayName = "USMC ECH (Woodland)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\FP_USMC_ECH_RGR.paa"};
	};	
	class FP_USMC_ECH_BLK: CUP_H_FR_ECH
	{
		author = "FP Mod Team";
		_generalMacro = "CUP_H_FR_ECH";
		scope = 2;
		displayName = "USMC ECH (Black)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\FP_USMC_ECH_BLK.paa"};
	};	
    class H_HelmetIA;
	class FP_Helmet_CADPAT: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "Modular Helmet (CADPAT TW)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\FP_CADPATHelmet.paa"};
	};
	class FP_Helmet_CADPATAR: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "Modular Helmet (CADPAT AR)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\FP_CADPATARHelmet.paa"};
	};
	class FP_Helmet_HECU: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "Modular Helmet (Urban Splinter)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\FP_HECUHelmet.paa"};
	};
	class FP_Helmet_M81: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "Modular Helmet (M81)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_M81.paa"};
		picture="\FP_UniformsAmericas\UI\u_m81_icon.paa";
	};
	class FP_Helmet_6CD: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_6CD";
		scope = 2;
		displayName = "Modular Helmet (6CD)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_6cd.paa"};
	};
	class FP_Helmet_ALPCAM: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_ALPCAM";
		scope = 2;
		displayName = "Modular Helmet (Multicam Alpine)";
		hiddenSelectionsTextures[] = {"FP_UniformsAmericas\SkinsHeadgear\h_alpcam.paa"};
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
		displayName="M1 Helmet (Mitchell Pattern)";
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
