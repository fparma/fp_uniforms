class CfgPatches
{
	class FP_UniformsAmericas
	{
		units[]=
		{
			"FP_Rifleman_ccc",
			"FP_Rifleman_dcu",
		};
		weapons[]=
		{
			"FP_Uniform_ccc",
			"FP_Uniform_DCU"
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
    class FP_B_soldier_S_F: B_soldier_F
    {
        scope=1;
        displayName="Rifleman (Sage)";
        uniformClass="U_B_CombatUniform_sgg_s";
        author="Bohemia Interactive";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_sage_co.paa"};
    };
 
    class B_soldier_AR_F;
    class FP_B_soldier_AR_S_F: B_soldier_AR_F
    {
        scope=1;
        displayName="Autorifleman (Sage)";
        uniformClass="U_B_CombatUniform_sgg_tshirt_s";
        author="Bohemia Interactive";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_sage_co.paa"};
    };
 
    class B_soldier_SL_F;
    class FP_B_soldier_SL_S_F: B_soldier_SL_F
    {
        scope=1;
        displayName="Squad Leader (Sage)";
        uniformClass="U_B_CombatUniform_sgg_vest_s";
        author="Bohemia Interactive";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_sage_co.paa"};
    };
 
    class FP_B_soldier_W_F: B_soldier_F
    {
        scope=1;
        displayName="Rifleman (Woodland)";
        uniformClass="U_B_CombatUniform_wdl_w";
        author="Bohemia Interactive";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_wdl_co.paa"};
    };
 
    class FP_B_soldier_AR_W_F: B_soldier_AR_F
    {
        scope=1;
        displayName="Autorifleman (Woodland)";
        uniformClass="U_B_CombatUniform_wdl_tshirt_w";
        author="Bohemia Interactive";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_wdl_co.paa"};
    };
 
    class FP_B_soldier_SL_W_F: B_soldier_SL_F
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
    class FP_U_B_CombatUniform_sgg_s: U_B_CombatUniform_mcam
    {
        displayName="Combat Fatigues (Sage)";
        author="Bohemia Interactive";
        class ItemInfo: ItemInfo
        {
            uniformClass="FP_B_soldier_S_F";
        };
    };
 
    class U_B_CombatUniform_mcam_tshirt: Uniform_Base
    {
            class ItemInfo;
    };
    class FP_U_B_CombatUniform_sgg_tshirt_s: U_B_CombatUniform_mcam_tshirt
    {
        displayName="Combat Fatigues (Sage) (Tee)";
        author="Bohemia Interactive";
        class ItemInfo: ItemInfo
        {
            uniformClass="FP_B_soldier_AR_S_F";
        };
    };
 
    class U_B_CombatUniform_mcam_vest: Uniform_Base
    {
            class ItemInfo;
    };
    class FP_U_B_CombatUniform_sgg_vest_s: U_B_CombatUniform_mcam_vest
    {
        displayName="Recon Fatigues (Sage)";
        author="Bohemia Interactive";
        class ItemInfo: ItemInfo
        {
            uniformClass="FP_B_soldier_SL_S_F";
        };
    };
 
    class FP_U_B_CombatUniform_wdl_w: U_B_CombatUniform_mcam
    {
        displayName="Combat Fatigues (Woodland)";
        author="Bohemia Interactive";
        class ItemInfo: ItemInfo
        {
            uniformClass="FP_B_soldier_W_F";
        };
    };
 
    class U_B_CombatUniform_wdl_tshirt_w: U_B_CombatUniform_mcam_tshirt
    {
        displayName="Combat Fatigues (Woodland) (Tee)";
        author="Bohemia Interactive";
        class ItemInfo: ItemInfo
        {
            uniformClass="FP_B_soldier_AR_W_F";
        };
    };
 
    class FP_U_B_CombatUniform_wdl_vest_w: U_B_CombatUniform_mcam_vest
    {
        displayName="Recon Fatigues (Woodland)";
        author="Bohemia Interactive";
        class ItemInfo: ItemInfo
        {
            uniformClass="FP_B_soldier_SL_W_F";
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
};
