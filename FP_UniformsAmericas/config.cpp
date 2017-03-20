class CfgPatches
{
	class FP_UniformsAmericas
	{
		units[]=
		{
			"B_APC_Wheeled_01_cannon_wd_F",
			"FP_Rifleman_CADPAT",
			"FP_Rifleman_CADPATAR",
			"FP_Rifleman_HECU",
			"FP_Rifleman_ccc",
			"FP_Rifleman_dcu",
			"FP_Rifleman_m81",
			"FP_Rifleman_m81white",
			"FP_Rifleman_DesMARPAT_CUP",
			"FP_Rifleman_DesMARPAT_Rolled_CUP",
			"FP_Rifleman_DesMARPAT_Kneepad_CUP",
			"FP_Rifleman_DesMARPAT_KneepadRolled_CUP",
			"FP_Rifleman_USArmy_OCP"
		};
		weapons[]=
		{
			"FP_Uniform_CADPAT",
			"FP_Uniform_CADPATAR",
			"FP_Uniform_HECU",
			"FP_Uniform_ccc",
			"FP_Uniform_DCU",
			"FP_Uniform_m81",
			"FP_Uniform_m81white",
			"CUP_U_B_USMC_MARPAT_DES_Sleeves",
			"CUP_U_B_USMC_MARPAT_DES_RolledUp",
			"CUP_U_B_USMC_MARPAT_DES_Kneepad",
			"CUP_U_B_USMC_MARPAT_DES_RollUpKneepad",
			"CUP_U_B_USArmy_Base_OCP",
			"FP_Helmet_CADPAT",
			"FP_Helmet_CADPATAR",
			"FP_Helmet_HECU",
			"FP_Helmet_M81",
			"FP_Helmet_6CD",
			"FP_Helmet_ALPCAM",
			"FP_Helmet_USMCMARPATHelmet",
			"FP_Helmet_USMCMARPATHelmet_Headset",
			"FP_Helmet_USMCMARPATHelmet_Goggles",
			"fp_helmet_m1_vine_nam"
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
	class B_Soldier_F;
	class B_Soldier_02_F;
	class B_Soldier_03_F;
    class B_soldier_S_F: B_soldier_F
    {
        scope=1;
        displayName="Rifleman (Sage)";
        uniformClass="U_B_CombatUniform_sgg_s";
        author="Bohemia Interactive";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_sage_co.paa"};
    };
 
    class B_soldier_AR_F;
    class B_soldier_AR_S_F: B_soldier_AR_F
    {
        scope=1;
        displayName="Autorifleman (Sage)";
        uniformClass="U_B_CombatUniform_sgg_tshirt_s";
        author="Bohemia Interactive";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_sage_co.paa"};
    };
 
    class B_soldier_SL_F;
    class B_soldier_SL_S_F: B_soldier_SL_F
    {
        scope=1;
        displayName="Squad Leader (Sage)";
        uniformClass="U_B_CombatUniform_sgg_vest_s";
        author="Bohemia Interactive";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_sage_co.paa"};
    };
 
    class B_soldier_W_F: B_soldier_F
    {
        scope=1;
        displayName="Rifleman (Woodland)";
        uniformClass="U_B_CombatUniform_wdl_w";
        author="Bohemia Interactive";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_wdl_co.paa"};
    };
 
    class B_soldier_AR_W_F: B_soldier_AR_F
    {
        scope=1;
        displayName="Autorifleman (Woodland)";
        uniformClass="U_B_CombatUniform_wdl_tshirt_w";
        author="Bohemia Interactive";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_wdl_co.paa"};
    };
 
    class B_soldier_SL_W_F: B_soldier_SL_F
    {
        scope=1;
        displayName="Squad Leader (Woodland)";
        uniformClass="U_B_CombatUniform_wdl_vest_w";
        author="Bohemia Interactive";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_wdl_co.paa"};
    };
	
	//VanSchmoozin Camos (Crye G3s)
	
	class VSM_AOR1_Crye_Uniform: B_Soldier_F
    {
        scope=1;
        displayName="Crye G3 (AOR1)";
        uniformClass="VSM_AOR1_Crye_Camo";
        author="VanSchmoozin";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD_AOR1_1.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD.RVMAT"
		};
    };	
	class VSM_AOR1_Crye_Uniform_Rolled: VSM_AOR1_Crye_Uniform	
    {
        scope=1;
        displayName="Crye G3 (AOR1/Rolled)";
        uniformClass="VSM_AOR1_Crye_Uniform_Rolled";
        author="VanSchmoozin";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD_AOR1_1.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD.RVMAT"
		};
    };	
	class VSM_Multicam_Crye_Uniform: B_Soldier_F
    {
        scope=1;
        displayName="Crye G3 (Multicam)";
        uniformClass="VSM_Multicam_Crye_Uniform_Camo";
        author="VanSchmoozin";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD_multicam_1.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD.RVMAT"
		};
    };	
	class VSM_Multicam_Crye_Uniform_Rolled: VSM_AOR1_Crye_Uniform	
    {
        scope=1;
        displayName="Crye G3 (Multicam/Rolled)";
        uniformClass="VSM_Multicam_Crye_Uniform_Rolled";
        author="VanSchmoozin";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD_multicam_1.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD.RVMAT"
		};
    };	
	class VSM_MulticamGrey_Crye_Uniform: B_Soldier_F
    {
        scope=1;
        displayName="Crye G3 (Multicam/Grey)";
        uniformClass="VSM_MulticamGrey_Crye_Uniform_Camo";
        author="VanSchmoozin";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD_multicam_grey_shirt_1.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD.RVMAT"
		};
    };	
	class VSM_MulticamGrey_Crye_Uniform_Rolled: VSM_AOR1_Crye_Uniform	
    {
        scope=1;
        displayName="Crye G3 (Multicam/Grey/Rolled)";
        uniformClass="VSM_MulticamGrey_Crye_Uniform_Rolled";
        author="VanSchmoozin";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD_multicam_grey_shirt_1.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD.RVMAT"
		};
    };	
	class VSM_Grey_Crye_Uniform: B_Soldier_F
    {
        scope=1;
        displayName="Crye G3 (Grey)";
        uniformClass="VSM_Grey_Crye_Uniform_Camo";
        author="VanSchmoozin";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD_OGA_grey_1.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD.RVMAT"
		};
    };	
	class VSM_Grey_Crye_Uniform_Rolled: VSM_AOR1_Crye_Uniform	
    {
        scope=1;
        displayName="Crye G3 (Grey/Rolled)";
        uniformClass="VSM_Grey_Crye_Uniform_Rolled";
        author="VanSchmoozin";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD_OGA_grey_1.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD.RVMAT"
		};
    };
	class VSM_OD_Crye_Uniform: B_Soldier_F
    {
        scope=1;
        displayName="Crye G3 (OD)";
        uniformClass="VSM_OD_Crye_Uniform_Camo";
        author="VanSchmoozin";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD_OGA_OD_1.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD.RVMAT"
		};
    };	
	class VSM_OD_Crye_Uniform_Rolled: VSM_AOR1_Crye_Uniform	
    {
        scope=1;
        displayName="Crye G3 (OD/Rolled)";
        uniformClass="VSM_OD_Crye_Uniform_Rolled";
        author="VanSchmoozin";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD_OGA_OD_1.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAmericas\SkinsUniform\VSM_ARD.RVMAT"
		};
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
		side=1;
		scopeCurator=0;
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
		side=1;
		scopeCurator=0;
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
		side=1;
		scopeCurator=0;
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
		side=1;
		scopeCurator=0;
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
		side=1;
		scopeCurator=0;
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
		side=1;
		scopeCurator=0;
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
		side=1;
		scopeCurator=0;
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
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\ocp2_cupusarmy.paa",
			"FP_UniformsAmericas\SkinsUniform\ocp_cupusarmy.paa"
		};
	};
	class B_APC_Wheeled_01_cannon_F;
	class B_APC_Wheeled_01_cannon_wd_F: B_APC_Wheeled_01_cannon_F
	{
		author="FP Mod Team";
		displayName="Patria AMV Woodland";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsVehicle\APC_Wheeled_01_base_wd_co.paa",
			"FP_UniformsAmericas\SkinsVehicle\APC_Wheeled_01_adds_wd_co.paa",
			"FP_UniformsAmericas\SkinsVehicle\APC_Wheeled_01_tows_wd_co.paa"
		};
	};
	class CUP_O_TK_Soldier_03;
	class FP_O_TK_Soldier_03_USNam: CUP_O_TK_Soldier_03
	{
		uniformClass="FP_Uniform_USARMY_Fatigues";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsUniform\us_vietnam.paa"
		};
	};  
};
class cfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
    class Uniform_Base;
    class U_B_CombatUniform_mcam: Uniform_Base
    {
            class ItemInfo;
    };
    class U_B_CombatUniform_sgg_s: U_B_CombatUniform_mcam
    {
        displayName="Combat Fatigues (Sage)";
        author="Bohemia Interactive";
        class ItemInfo: ItemInfo
        {
            uniformClass="B_soldier_S_F";
        };
    };
 
    class U_B_CombatUniform_mcam_tshirt: Uniform_Base
    {
            class ItemInfo;
    };
    class U_B_CombatUniform_sgg_tshirt_s: U_B_CombatUniform_mcam_tshirt
    {
        displayName="Combat Fatigues (Sage) (Tee)";
        author="Bohemia Interactive";
        class ItemInfo: ItemInfo
        {
            uniformClass="B_soldier_AR_S_F";
        };
    };
 
    class U_B_CombatUniform_mcam_vest: Uniform_Base
    {
            class ItemInfo;
    };
    class U_B_CombatUniform_sgg_vest_s: U_B_CombatUniform_mcam_vest
    {
        displayName="Recon Fatigues (Sage)";
        author="Bohemia Interactive";
        class ItemInfo: ItemInfo
        {
            uniformClass="B_soldier_SL_S_F";
        };
    };
 
    class U_B_CombatUniform_wdl_w: U_B_CombatUniform_mcam
    {
        displayName="Combat Fatigues (Woodland)";
        author="Bohemia Interactive";
        class ItemInfo: ItemInfo
        {
            uniformClass="B_soldier_W_F";
        };
    };
 
    class U_B_CombatUniform_wdl_tshirt_w: U_B_CombatUniform_mcam_tshirt
    {
        displayName="Combat Fatigues (Woodland) (Tee)";
        author="Bohemia Interactive";
        class ItemInfo: ItemInfo
        {
            uniformClass="B_soldier_AR_W_F";
        };
    };
 
    class U_B_CombatUniform_wdl_vest_w: U_B_CombatUniform_mcam_vest
    {
        displayName="Recon Fatigues (Woodland)";
        author="Bohemia Interactive";
        class ItemInfo: ItemInfo
        {
            uniformClass="B_soldier_SL_W_F";
        };
    };
	
	//VanSchmoozin Crye G3s
    class VSM_AOR1_Crye_Camo: U_B_CombatUniform_mcam
    {
        displayName="Crye G3 (AOR1)";
        author="VanSchmoozin";
		picture="\FP_UniformsAmericas\UI\VSM_AOR1.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="VSM_AOR1_Crye_Uniform";
        };
    };
    class VSM_AOR1_Crye_Camo_Rolled: U_B_CombatUniform_mcam
    {
        displayName="Crye G3 (AOR1/Rolled)";
        author="VanSchmoozin";
		picture="\FP_UniformsAmericas\UI\VSM_AOR1.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="VSM_AOR1_Crye_Uniform_Rolled";
        };
    };
    class VSM_Multicam_Crye_Camo: U_B_CombatUniform_mcam
    {
        displayName="Crye G3 (Multicam)";
        author="VanSchmoozin";
		picture="\FP_UniformsAmericas\UI\VSM_Multicam.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="VSM_Multicam_Crye_Uniform";
        };
    };
    class VSM_Multicam_Crye_Camo_Rolled: U_B_CombatUniform_mcam
    {
        displayName="Crye G3 (Multicam/Rolled)";
        author="VanSchmoozin";
		picture="\FP_UniformsAmericas\UI\VSM_Multicam.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="VSM_Multicam_Crye_Uniform_Rolled";
        };
    };
    class VSM_MulticamGrey_Crye_Camo: U_B_CombatUniform_mcam
    {
        displayName="Crye G3 (Multicam/Grey)";
        author="VanSchmoozin";
		picture="\FP_UniformsAmericas\UI\VSM_Multicam.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="VSM_MulticamGrey_Crye_Uniform";
        };
    };
    class VSM_MulticamGrey_Crye_Camo_Rolled: U_B_CombatUniform_mcam
    {
        displayName="Crye G3 (Multicam/Grey/Rolled)";
        author="VanSchmoozin";
		picture="\FP_UniformsAmericas\UI\VSM_Multicam.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="VSM_MulticamGrey_Crye_Uniform_Rolled";
        };
    };
    class VSM_Grey_Crye_Uniform_Camo: U_B_CombatUniform_mcam
    {
        displayName="Crye G3 (Grey)";
        author="VanSchmoozin";
		picture="\FP_UniformsAmericas\UI\VSM_OGA_grey.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="VSM_Grey_Crye_Uniform";
        };
    };
    class VSM_Grey_Crye_Camo_Rolled: U_B_CombatUniform_mcam
    {
        displayName="Crye G3 (Grey/Rolled)";
        author="VanSchmoozin";
		picture="\FP_UniformsAmericas\UI\VSM_OGA_grey.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="VSM_Grey_Crye_Uniform_Rolled";
        };
    };
    class VSM_OD_Crye_Camo: U_B_CombatUniform_mcam
    {
        displayName="Crye G3 (OD)";
        author="VanSchmoozin";
		picture="\FP_UniformsAmericas\UI\VSM_OGA_OD.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="VSM_OD_Crye_Uniform";
        };
    };
    class VSM_OD_Crye_Camo_Rolled: U_B_CombatUniform_mcam
    {
        displayName="Crye G3 (OD/Rolled)";
        author="VanSchmoozin";
		picture="\FP_UniformsAmericas\UI\VSM_OGA_OD.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass="VSM_OD_Crye_Uniform_Rolled";
        };
    };

	class FP_Uniform_CADPAT: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (CADPAT TW)";
		picture="\FP_UniformsAmericas\UI\cadpaticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
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
		side=1;
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
		side=1;
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
		side=1;
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
		side=1;
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
		side=1;
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
		side=1;
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
			uniformClass="FP_Rifleman_USArmy_OCP";
			containerClass="Supply40";
			mass=20;
		};
	};
	class H_HelmetIA;
	class FP_Helmet_CADPAT: H_HelmetIA
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Modular Helmet (CADPAT TW)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsHeadgear\FP_CADPATHelmet.paa"
		};
	};
	class FP_Helmet_CADPATAR: H_HelmetIA
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Modular Helmet (CADPAT AR)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsHeadgear\FP_CADPATARHelmet.paa"
		};
	};
	class FP_Helmet_HECU: H_HelmetIA
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Modular Helmet (Urban Splinter)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsHeadgear\FP_HECUHelmet.paa"
		};
	};
	class FP_Helmet_M81: H_HelmetIA
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Modular Helmet (M81)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsHeadgear\h_M81.paa"
		};
		picture="\FP_UniformsAmericas\UI\u_m81_icon.paa";
	};
	class FP_Helmet_6CD: H_HelmetIA
	{
		author="FP Mod Team";
		_generalMacro="FP_Helmet_6CD";
		scope=2;
		displayName="Modular Helmet (6CD)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsHeadgear\h_6cd.paa"
		};
	};
	class FP_Helmet_ALPCAM: H_HelmetIA
	{
		author="FP Mod Team";
		_generalMacro="FP_Helmet_ALPCAM";
		scope=2;
		displayName="Modular Helmet (Multicam Alpine)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsHeadgear\h_alpcam.paa"
		};
	};
	class CUP_H_RACS_Helmet_DPAT;
	class FP_Helmet_USMCMARPATHelmet: CUP_H_RACS_Helmet_DPAT
	{
		author="FP Mod Team";
		scope=2;
		displayName="USMC Helmet (Desert MARPAT)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsHeadgear\usmc_marpatsgb_co.paa"
		};
	};
	class CUP_H_RACS_Helmet_Headset_DPAT;
	class FP_Helmet_USMCMARPATHelmet_Headset: CUP_H_RACS_Helmet_Headset_DPAT
	{
		author="FP Mod Team";
		scope=2;
		displayName="USMC Helmet (Desert MARPAT/Headset)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsHeadgear\usmc_marpatsgb_co.paa"
		};
	};
	class CUP_H_RACS_Helmet_Goggles_DPAT;
	class FP_Helmet_USMCMARPATHelmet_Goggles: CUP_H_RACS_Helmet_Goggles_DPAT
	{
		author="FP Mod Team";
		scope=2;
		displayName="USMC Helmet (Desert MARPAT/Goggles)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAmericas\SkinsHeadgear\usmc_marpatsgb_co.paa"
		};
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
	class fp_helmet_m1_medic: H_mas_gue_HelmetI
	{
		author="FP Mod Team";
		displayName="M1 Helmet (Medic)";
		picture="\FP_UniformsAmericas\ui\m1_camo_icon.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsAmericas\SkinsHeadgear\m1_medic.paa",
			"\mas_gue_rebl\hats\Data\tak_soldier_equip_co.paa"
		};
	};
	class CUP_U_O_TK_Green;
	class FP_Uniform_USARMY_Fatigues: CUP_U_O_TK_Green
	{
		author="FP Mod Team";
		allowedSlots[]={901};
		displayName="US Army Fatigues";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_O_TK_Soldier_03_USNam";
			containerClass="Supply40";
			mass=20;
		};
	};
	class CUP_H_USArmy_Helmet_M1_Vine;
	class fp_helmet_m1_vine_nam : CUP_H_USArmy_Helmet_M1_Vine {
		author = "FP Mod Team";
		displayName = "M1 (Mitchell)";
		hiddenSelectionsTextures[] = {"\FP_UniformsAmericas\SkinsHeadgear\m1_mitchell.paa"};
	};
};
