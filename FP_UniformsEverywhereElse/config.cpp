class CfgPatches
{
	class FP_UniformsEverywhereElse
	{
		units[]=
		{
			"FP_Rifleman_KyrelianFBSplinter",
			"FP_Rifleman_grn",
			"FP_Rifleman_gry",
			"FP_Rifleman_khk",
			"FP_Rifleman_FP",
			"FP_Rifleman_02_FP",
			"FP_Rifleman_KyrelianFBSplinterRolled",
			"FP_B_Carryall_Inv"
		};
		weapons[]=
		{
			"FP_Uniform_KyrelianFBSplinter",
			"FP_Uniform_KyrelianFBSplinterRolled",
			"FP_Uniform_grn",
			"FP_Uniform_GRY",
			"FP_Uniform_KHK",
			"FP_I_CombatUniform_FP",
			"FP_I_CombatUniform_02_FP",
			"FP_H_MilCap_blk",
			"FP_BluHelmet_KyrelianSplinter",
			"FP_BluHelmet_KyrelianBlack",
			"FP_BluHelmetECH_KyrelianSplinter",
			"FP_BluHelmetLight_KyrelianSplinter",
			"FP_Helmet_FP",
			"FP_Booniehat_FP",
			"FP_Booniehat_FP_hs",
			"FP_Carrier_Kyrelian",
			"FP_Carrier_KyrelianBlack",
			"FP_Carrier_KyrelianHeavyBlack",
			"FP_Carrier_KyrelianHeavyGreen"
		};
		requireVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_Beta",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR"
		};
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class B_Soldier_02_F;
	class B_Soldier_03_F;	
	class I_soldier_F;
	class I_Soldier_02_F;
	class I_officer_F;
	class O_officer_F;
	class I_C_Soldier_Para_1_F;
	class I_C_Soldier_Para_3_F;
	class I_C_Soldier_Para_7_F;
	class FP_Rifleman_KyrelianFBSplinter: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="KY SPM-93";
		nakedUniform="U_BasicBody";
		uniformClass="FP_KyrelianFBSplinter";
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
			"FP_UniformsEverywhereElse\SkinsUniform\Kyrelian_SPM_93.paa"
		};
	};
	class FP_Rifleman_FP: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="FP Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="FP_I_CombatUniform_FP";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_fp_co.paa"
		};
	}; 
	class FP_Rifleman_02_FP: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="FP Rifleman (Sleeves)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_I_CombatUniform_02_FP";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_fp_co.paa"
		};
	};
    class FP_I_soldier_O_F: I_soldier_F
    {
        scope=1;
        displayName="Rifleman (Olive)";
        uniformClass="U_I_CombatUniform_oli";
        author="Diwako & Taggart";
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ia_soldier_01_clothing_oli_co"};
    };
    class FP_I_soldier_M_J_F: I_soldier_F
    {
        scope=1;
        displayName="Squad Leader (Olive, Jumper)";
        uniformClass="U_I_CombatUniform_oli_J";
        author="Diwako & Taggart";
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ia_soldier_01_jumper_clothing_oli_co.paa"};
    };
    class FP_I_soldier_LAT_J_F: I_soldier_F
    {
        scope=1;
        displayName="Marksman (Jumper)";
        uniformClass="U_I_CombatUniform_J";
        author="Diwako & Taggart";
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ia_soldier_01_jumper_clothing_co.paa"};
    };
	class FP_Rifleman_grn: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Green (BDU)";
		uniformClass="FP_Uniform_grn";
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
			"FP_UniformsEverywhereElse\SkinsUniform\officer_grn.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_gry: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Grey (BDU)";
		uniformClass="FP_Uniform_gry";
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
			"FP_UniformsEverywhereElse\SkinsUniform\officer_gry.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_khk: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Khaki (BDU)";
		uniformClass="FP_Uniform_khk";
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
			"FP_UniformsEverywhereElse\SkinsUniform\officer_khk.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_KyrelianFBSplinterRolled: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="KY SPM-93";
		nakedUniform="U_BasicBody";
		uniformClass="FP_KyrelianFBSplinter";
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
			"FP_UniformsEverywhereElse\SkinsUniform\Kyrelian_SPM_93.paa"
		};
	};	
	class ESPW_O_Officer_Boli_Green: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="Boliverian BDU (Green)";
		uniformClass="ESPW_U_O_Boliveria_Uniform_Green";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\boli_green_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class ESPW_O_Officer_Boli_Camo: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="Boliverian BDU (Camo)";
		uniformClass="ESPW_U_O_Boliveria_Uniform_Camo";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\boli_camo_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class ESPW_O_Officer_FBCMilitia: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="Firebrand BDU";
		uniformClass="ESPW_U_I_G_Firebrand_Militia_3";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\fbc_militia_03_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class ESPW_O_Officer_FBCMilitia_02: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="Firebrand BDU 2";
		uniformClass="ESPW_U_I_G_Firebrand_Militia_4";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\fbc_militia_04_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class ESPW_O_Officer_Karaq: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="Karaq BDU";
		uniformClass="ESPW_U_O_Karaq_Uniform";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\Karaq_camo_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};	
	class ESPW_O_Officer_Kuril: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="Kuril BDU (K-Flora)";
		uniformClass="ESPW_U_I_OfficerUniform_Kuril";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\officer_kuril_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};	

	class ESPW_Rifleman_Light_Kuril: I_officer_F
	{
		_generalMacro="I_officer_F";
		scope=1;
		displayName="Kuril Light BDU (K-Flora)";
		uniformClass="ESPW_U_I_CombatUniform_Light_Kuril";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\officer_kuril_co.paa", "FP_UniformsEverywhereElse\SkinsUniform\iasoldier_kuril_co.paa" 
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat", "\A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat"
		};
	};		
	class ESPW_I_Test_Soldier_M81_F: I_C_Soldier_Para_3_F
	{
		_generalMacro="I_C_Soldier_Para_3_F";
		scope=1;
		displayName="M81 BDU";
		uniformClass="ESPW_U_Firebrand_Para_3_F";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\fbc_soldier_m81_co.paa", "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"
		};
	};
	class ESPW_I_G_Mercenary_1: I_C_Soldier_Para_3_F
	{
		_generalMacro="I_C_Soldier_Para_3_F";
		scope=1;
		displayName="Not-Merc Blue";
		uniformClass="ESPW_U_I_G_Firebrand_NM1";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\fbc_notmerc_choco_co.paa", "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"
		};
	};
	class ESPW_I_G_Mercenary_2: I_C_Soldier_Para_3_F
	{
		_generalMacro="I_C_Soldier_Para_3_F";
		scope=1;
		displayName="Not-Merc Green";
		uniformClass="ESPW_U_I_G_Firebrand_NM2";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\fbc_notmerc_lumberjack_co.paa", "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"
		};
	};	
	class ESPW_I_G_FBCMilitia_1: I_C_Soldier_Para_1_F
	{
		_generalMacro="I_C_Soldier_Para_1_F";
		scope=1;
		displayName="Militia Dark";
		uniformClass="ESPW_U_I_G_Firebrand_Militia_1";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\fbc_militia_01_top_co.paa", "FP_UniformsEverywhereElse\SkinsUniform\fbc_militia_01_bottom_co.paa"
		};
	};
	class ESPW_I_G_FBCMilitia_2: I_C_Soldier_Para_1_F
	{
		_generalMacro="I_C_Soldier_Para_1_F";
		scope=1;
		displayName="Militia Light";
		uniformClass="ESPW_U_I_G_Firebrand_Militia_2";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\fbc_militia_02_top_co.paa", "FP_UniformsEverywhereElse\SkinsUniform\fbc_militia_02_bottom_co.paa"
		};
	};
	class ESPW_I_G_FBCMilitia_3: I_Soldier_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="FP Rifleman (Rolled-Up)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_U_I_G_Firebrand_Militia_5";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\fbc_militia_desert_bottom_co.paa"
		};
	};
	class ESPW_I_G_FBCMilitia_4: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="FP Rifleman (Rolled-Up)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_U_I_G_Firebrand_Militia_5_S";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\fbc_militia_desert_bottom_co.paa"
		};
	};
	class ESPW_I_G_FBCMilitia_5: I_C_Soldier_Para_7_F
	{
		_generalMacro="I_C_Soldier_Para_7_F";
		scope=1;
		displayName="Militia Light";
		uniformClass="ESPW_U_I_G_Firebrand_Militia_5_TT";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\fbc_militia_desert_top_co.paa", "FP_UniformsEverywhereElse\SkinsUniform\fbc_militia_desert_bottom_co.paa"
		};
	};	
	class ESPW_I_G_FBCMilitia_6: I_Soldier_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="FP Rifleman (Rolled-Up)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_U_I_G_Firebrand_Militia_6";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\fbc_militia_woodland_bottom_co.paa"
		};
	};
	class ESPW_I_G_FBCMilitia_7: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="FP Rifleman (Rolled-Up)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_U_I_G_Firebrand_Militia_6_S";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\fbc_militia_woodland_bottom_co.paa"
		};
	};
	class ESPW_I_G_FBCMilitia_8: I_C_Soldier_Para_7_F
	{
		_generalMacro="I_C_Soldier_Para_7_F";
		scope=1;
		displayName="Militia Light";
		uniformClass="ESPW_U_I_G_Firebrand_Militia_6_TT";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\fbc_militia_woodland_top_co.paa", "FP_UniformsEverywhereElse\SkinsUniform\fbc_militia_woodland_bottom_co.paa"
		};
	};	
	class ESPW_Rifleman_Kuril: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="Kuril Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_Kuril";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_kuril_co.paa"
		};
	}; 
	class ESPW_Rifleman_02_Kuril: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="Kuril Rifleman (Rolled-Up)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_02_Kuril";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_kuril_co.paa"
		};
	};		

	class ESPW_I_Rifleman_M81: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="M81 Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_U_I_CombatUniform_M81";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_m81_co.paa"
		};
	}; 
	class ESPW_I_Rifleman_02_M81: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="M81 Rifleman (Sleeves)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_U_I_CombatUniform_02_M81";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_m81_co.paa"
		};
	};
	class ESPW_I_Rifleman_CCE: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="CCE Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_U_CGM_CombatUniform_CCE";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_cce_co.paa"
		};
	}; 
	class ESPW_I_Rifleman_02_CCE: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="CCE Rifleman (Sleeves)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_U_CGM_CombatUniform_02_CCE";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_cce_co.paa"
		};
	};
	class ESPW_I_Rifleman_Arcadia: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="Arcadia Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_U_I_CombatUniform_CSATG";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_arcadia_co.paa"
		};		
	};
	class ESPW_I_Rifleman_02_Arcadia: I_soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="Arcadia Rifleman (Sleeves)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_U_I_CombatUniform_02_CSATG";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_arcadia_co.paa"
		};		
	};
	class ESPW_I_Rifleman_Fregata: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="Fregata Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="U_I_CombatUniform_WSP";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_wsp_co.paa"
		};		
	};
	class ESPW_I_Rifleman_02_Fregata: I_soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="Fregata Rifleman (Sleeves)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_U_I_CombatUniform_02_WSP";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_wsp_co.paa"
		};		
	};
	class ESPW_Rifleman_PGAC : B_Soldier_F
	{
		_generalMacro = "B_Soldier_F"; // This is legitimately useless.
		scope = 1;
		displayName = "Rifleman (PGAC)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGAC_CombatUniform_SPB";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
			{
				"Camo",
				"insignia"
			};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgac_spb_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};
	class ESPW_Rifleman_PGAC_Sleeves : B_Soldier_03_F
	{
		_generalMacro = "B_Soldier_03_F";
		scope = 1;
		displayName = "Rifleman (PGAC, Sleeves)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGAC_CombatUniform_SPB_Sleeves";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgac_spb_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_PGAC_Tee : B_Soldier_02_F
	{
		_generalMacro = "B_Soldier_02_F";
		scope = 1;
		displayName = "Rifleman (PGAC, Tee)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGAC_CombatUniform_SPB_Tee";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgac_spb_co.paa", 
			"\A3\Characters_F\Common\Data\basicbody_black_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_PGAC_wld : B_Soldier_F
	{
		_generalMacro = "B_Soldier_F"; // This is legitimately useless.
		scope = 1;
		displayName = "Rifleman (PGAC WLD)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGAC_CombatUniform_SPW";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgac_spw_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};
	class ESPW_Rifleman_PGAC_wld_Sleeves : B_Soldier_03_F
	{
		_generalMacro = "B_Soldier_03_F";
		scope = 1;
		displayName = "Rifleman (PGAC WLD, Sleeves)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGAC_CombatUniform_SPW_Sleeves";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgac_spw_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_PGAC_wld_Tee : B_Soldier_02_F
	{
		_generalMacro = "B_Soldier_02_F";
		scope = 1;
		displayName = "Rifleman (PGAC WLD, Tee)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGAC_CombatUniform_SPW_Tee";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgac_spw_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};
	class ESPW_Rifleman_PGAC_des : B_Soldier_F
	{
		_generalMacro = "B_Soldier_F"; // This is legitimately useless.
		scope = 1;
		displayName = "Rifleman (PGAC Desert)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGAC_CombatUniform_SPD";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgac_spd_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};
	class ESPW_Rifleman_PGAC_des_Sleeves : B_Soldier_03_F
	{
		_generalMacro = "B_Soldier_03_F";
		scope = 1;
		displayName = "Rifleman (PGAC Desert, Sleeves)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGAC_CombatUniform_SPD_Sleeves";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgac_spd_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_PGAC_des_Tee : B_Soldier_02_F
	{
		_generalMacro = "B_Soldier_02_F";
		scope = 1;
		displayName = "Rifleman (PGAC Desert, Tee)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGAC_CombatUniform_SPD_Tee";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgac_spd_co.paa",
			"\A3\Characters_F\Common\Data\basicbody_brown_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};		
	class ESPW_Rifleman_PGAC_kor : B_Soldier_F
	{
		_generalMacro = "B_Soldier_F"; // This is legitimately useless.
		scope = 1;
		displayName = "Rifleman (PGAC Desert)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGAC_CombatUniform_SPK";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgac_spk_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};
	class ESPW_Rifleman_PGAC_kor_Sleeves : B_Soldier_03_F
	{
		_generalMacro = "B_Soldier_03_F";
		scope = 1;
		displayName = "Rifleman (PGAC Desert, Sleeves)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGAC_CombatUniform_SPK_Sleeves";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgac_spk_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_PGAC_kor_Tee : B_Soldier_02_F
	{
		_generalMacro = "B_Soldier_02_F";
		scope = 1;
		displayName = "Rifleman (PGAC Desert, Tee)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGAC_CombatUniform_SPK_Tee";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgac_spk_co.paa",
			"\A3\Characters_F_EXP\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};		
	class ESPW_Rifleman_CoG : B_Soldier_F
	{
		_generalMacro = "B_Soldier_F"; // This is legitimately useless.
		scope = 1;
		displayName = "Rifleman (CoG)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_CoG_CombatUniform_TPAT";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_cog_tpat_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_CoG_Sleeves : B_Soldier_03_F
	{
		_generalMacro = "B_Soldier_03_F";
		scope = 1;
		displayName = "Rifleman (CoG, Sleeves)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_CoG_CombatUniform_TPAT_Sleeves";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_cog_tpat_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_CoG_Tee : B_Soldier_02_F
	{
		_generalMacro = "B_Soldier_02_F";
		scope = 1;
		displayName = "Rifleman (CoG, Tee)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_CoG_CombatUniform_TPAT_Tee";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_cog_tpat_co.paa", 
			"\A3\Characters_F\Common\Data\basicbody_black_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_CoG_Navy : B_Soldier_F
	{
		_generalMacro = "B_Soldier_F"; // This is legitimately useless.
		scope = 1;
		displayName = "Rifleman (CoG, Naval)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_CoG_CombatUniform_TPAT_Navy";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_cog_tpat_navy_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_CoG_Navy_Sleeves : B_Soldier_03_F
	{
		_generalMacro = "B_Soldier_03_F";
		scope = 1;
		displayName = "Rifleman (CoG, Naval, Sleeves)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_CoG_CombatUniform_TPAT_Navy_Sleeves";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_cog_tpat_navy_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_CoG_Navy_Tee : B_Soldier_02_F
	{
		_generalMacro = "B_Soldier_02_F";
		scope = 1;
		displayName = "Rifleman (CoG, Naval, Tee)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_CoG_CombatUniform_TPAT_Navy_Tee";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_cog_tpat_navy_co.paa", 
			"\A3\Characters_F\Common\Data\basicbody_black_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_CoG_Des : B_Soldier_F
	{
		_generalMacro = "B_Soldier_F"; // This is legitimately useless.
		scope = 1;
		displayName = "Rifleman (CoG, Desert)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_CoG_CombatUniform_TPAT_Desert";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_cog_tpat_desert_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_CoG_Des_Sleeves : B_Soldier_03_F
	{
		_generalMacro = "B_Soldier_03_F";
		scope = 1;
		displayName = "Rifleman (CoG, Desert, Sleeves)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_CoG_CombatUniform_TPAT_Desert_Sleeves";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_cog_tpat_desert_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_CoG_Des_Tee : B_Soldier_02_F
	{
		_generalMacro = "B_Soldier_02_F";
		scope = 1;
		displayName = "Rifleman (CoG, Desert, Tee)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_CoG_CombatUniform_TPAT_Desert_Tee";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_cog_tpat_desert_co.paa", 
			"\A3\Characters_F\Common\Data\basicbody_brown_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_CoG_Wld : B_Soldier_F
	{
		_generalMacro = "B_Soldier_F"; // This is legitimately useless.
		scope = 1;
		displayName = "Rifleman (CoG, Woodland)";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_CoG_CombatUniform_TPAT_Woodland";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_cog_tpat_woodland_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_CoG_Wld_Sleeves : B_Soldier_03_F
	{
		_generalMacro = "B_Soldier_03_F";
		scope = 1;
		displayName = "Rifleman (CoG, Woodland, Sleeves)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_CoG_CombatUniform_TPAT_Woodland_Sleeves";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_cog_tpat_woodland_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_CoG_Wld_Tee : B_Soldier_02_F
	{
		_generalMacro = "B_Soldier_02_F";
		scope = 1;
		displayName = "Rifleman (CoG, Woodland, Tee)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_CoG_CombatUniform_TPAT_Woodland_Tee";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_cog_tpat_woodland_co.paa", 
			"\A3\Characters_F\Common\Data\basicbody_brown_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_RoH : B_Soldier_F
	{
		_generalMacro = "B_Soldier_F"; // This is legitimately useless.
		scope = 1;
		displayName = "Rifleman (RoH)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_RoH_CombatUniform_SW2";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_roh_sw2_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_RoH_Sleeves : B_Soldier_03_F
	{
		_generalMacro = "B_Soldier_03_F";
		scope = 1;
		displayName = "Rifleman (RoH, Sleeves)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_RoH_CombatUniform_SW2_Sleeves";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_roh_sw2_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_RoH_Tee : B_Soldier_02_F
	{
		_generalMacro = "B_Soldier_02_F";
		scope = 1;
		displayName = "Rifleman (RoH, Tee)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_RoH_CombatUniform_SW2_Tee";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_roh_sw2_co.paa", 
			"\A3\Characters_F\Common\Data\basicbody_brown_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};
	class ESPW_Rifleman_RoH_Alps : B_Soldier_F
	{
		_generalMacro = "B_Soldier_F"; // This is legitimately useless.
		scope = 1;
		displayName = "Rifleman (RoH)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_RoH_CombatUniform_Alpcam";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_roh_alpinecam_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_RoH_Alps_Sleeves : B_Soldier_03_F
	{
		_generalMacro = "B_Soldier_03_F";
		scope = 1;
		displayName = "Rifleman (RoH, Sleeves)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_RoH_CombatUniform_Alpcam_Sleeves";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_roh_alpinecam_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_RoH_Alps_Tee : B_Soldier_02_F
	{
		_generalMacro = "B_Soldier_02_F";
		scope = 1;
		displayName = "Rifleman (RoH, Tee)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_RoH_CombatUniform_Alpcam_Tee";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_roh_alpinecam_co.paa", 
			"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};
	class ESPW_Rifleman_KI : B_Soldier_F
	{
		_generalMacro = "B_Soldier_F"; // This is legitimately useless.
		scope = 1;
		displayName = "Rifleman (KI)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_KI_CombatUniform_RBS";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_kraaivuur_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};
	class ESPW_Rifleman_KI_Sleeves : B_Soldier_03_F
	{
		_generalMacro = "B_Soldier_03_F";
		scope = 1;
		displayName = "Rifleman (KI, Sleeves)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_KI_CombatUniform_RBS_Sleeves";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_kraaivuur_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_KI_Tee : B_Soldier_02_F
	{
		_generalMacro = "B_Soldier_02_F";
		scope = 1;
		displayName = "Rifleman (KI, Tee)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_KI_CombatUniform_RBS_Tee";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_kraaivuur_co.paa", 
			"\A3\Characters_F\Common\Data\basicbody_brown_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};
	class ESPW_Rifleman_KI_PAT : B_Soldier_F
	{
		_generalMacro = "B_Soldier_F"; // This is legitimately useless.
		scope = 1;
		displayName = "Rifleman (KI)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_KI_CombatUniform_RPAT";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_kraaivuur_digi_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};
	class ESPW_Rifleman_KI_PAT_Sleeves : B_Soldier_03_F
	{
		_generalMacro = "B_Soldier_03_F";
		scope = 1;
		displayName = "Rifleman (KI, Sleeves)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_KI_CombatUniform_RPAT_Sleeves";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_kraaivuur_digi_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_KI_PAT_Tee : B_Soldier_02_F
	{
		_generalMacro = "B_Soldier_02_F";
		scope = 1;
		displayName = "Rifleman (KI, Tee)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_KI_CombatUniform_RPAT_Tee";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_kraaivuur_digi_co.paa", 
			"\A3\Characters_F\Common\Data\basicbody_green_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};
	class ESPW_Rifleman_PGI : B_Soldier_F
	{
		_generalMacro = "B_Soldier_F"; // This is legitimately useless.
		scope = 1;
		displayName = "Rifleman (PGI)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGI_CombatUniform_GryDigi";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgi_digital_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};
	class ESPW_Rifleman_PGI_Sleeves : B_Soldier_03_F
	{
		_generalMacro = "B_Soldier_03_F";
		scope = 1;
		displayName = "Rifleman (PGI, Sleeves)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGI_CombatUniform_GryDigi_Sleeves";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgi_digital_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_PGI_Tee : B_Soldier_02_F
	{
		_generalMacro = "B_Soldier_02_F";
		scope = 1;
		displayName = "Rifleman (PGI, Tee)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGI_CombatUniform_GryDigi_Tee";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgi_digital_co.paa", 
			"\A3\Characters_F\Common\Data\basicbody_black_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};
	class ESPW_Rifleman_PGI_Red : B_Soldier_F
	{
		_generalMacro = "B_Soldier_F"; // This is legitimately useless.
		scope = 1;
		displayName = "Rifleman (PGI, Red)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGI_CombatUniform_RedDigi";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgi_digitalred_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};
	class ESPW_Rifleman_PGI_Red_Sleeves : B_Soldier_03_F
	{
		_generalMacro = "B_Soldier_03_F";
		scope = 1;
		displayName = "Rifleman (PGI, Red, Sleeves)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGI_CombatUniform_RedDigi_Sleeves";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgi_digitalred_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};					
	};
	class ESPW_Rifleman_PGI_Red_Tee : B_Soldier_02_F
	{
		_generalMacro = "B_Soldier_02_F";
		scope = 1;
		displayName = "Rifleman (PGI, Red, Tee)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_PGI_CombatUniform_RedDigi_Tee";
		author = "Bohemia Interactive";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_pgi_digitalred_co.paa", 
			"\A3\Characters_F\Common\Data\basicbody_black_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw1.rvmat"
		};
	};
	class ESPW_Rifleman_Elios : B_Soldier_F
	{
		_generalMacro = "B_Soldier_F"; // This is legitimately useless.
		scope = 1;
		displayName = "Rifleman (Elios)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_Elios_CombatUniform";
		author = "Espionage Wars Team | CSLeader";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_elios_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{	
			"FP_UniformsEverywhereElse\Misc\clothing_espw2.rvmat"
		};
	};
	class ESPW_Rifleman_Elios_Sleeves : B_Soldier_03_F
	{
		_generalMacro = "B_Soldier_03_F";
		scope = 1;
		displayName = "Rifleman (Elios, Sleeves)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_Elios_CombatUniform_Sleeves";
		author = "Espionage Wars Team | CSLeader";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_elios_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw2.rvmat"
		};
	};
	class ESPW_Rifleman_Elios_Tee : B_Soldier_02_F
	{
		_generalMacro = "B_Soldier_02_F";
		scope = 1;
		displayName = "Rifleman (Elios, Tee)";
		nakedUniform = "U_BasicBody";
		uniformClass = "ESPW_U_Elios_CombatUniform_Tee";
		author = "Espionage Wars Team | CSLeader";
		scopeCurator = 0;
		hiddenSelections[] =
		{
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] =
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_elios_co.paa",
			"\A3\Characters_F\Common\Data\basicbody_black_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"FP_UniformsEverywhereElse\Misc\clothing_espw2.rvmat"
		};						
	};
	class ESPW_Rifleman_GDS_W: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="GDS Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_GDS_W";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_gds_fst_co.paa"
		};
	}; 
	class ESPW_Rifleman_02_GDS_W: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="GDS Rifleman (Rolled-Up)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_02_GDS_W";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_gds_fst_co.paa"
		};
	};		
	class ESPW_O_Officer_GDS_W: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="GDS BDU (Woodland)";
		uniformClass="ESPW_U_I_OfficerUniform_GDS_W";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\officer_gds_fst_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};	
	class ESPW_Rifleman_Light_GDS_W: I_officer_F
	{
		_generalMacro="I_officer_F";
		scope=1;
		displayName="GDS Light BDU (Woodland)";
		uniformClass="ESPW_U_I_CombatUniform_Light_GDS_W";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\officer_gds_fst_co.paa", "FP_UniformsEverywhereElse\SkinsUniform\iasoldier_gds_fst_co.paa" 
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat", "\A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat"
		};
	};
	class ESPW_Rifleman_GDS_D: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="GDS Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_GDS_D";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_gds_dst_co.paa"
		};
	}; 
	class ESPW_Rifleman_02_GDS_D: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="GDS Rifleman (Rolled-Up)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_02_GDS_D";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_gds_dst_co.paa"
		};
	};		
	class ESPW_O_Officer_GDS_D: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="GDS BDU (Woodland)";
		uniformClass="ESPW_U_I_OfficerUniform_GDS_D";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\officer_gds_dst_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};	
	class ESPW_Rifleman_Light_GDS_D: I_officer_F
	{
		_generalMacro="I_officer_F";
		scope=1;
		displayName="GDS Light BDU (Woodland)";
		uniformClass="ESPW_U_I_CombatUniform_Light_GDS_D";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\officer_gds_dst_co.paa", "FP_UniformsEverywhereElse\SkinsUniform\iasoldier_gds_dst_co.paa" 
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat", "\A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat"
		};
	};
	class ESPW_Rifleman_GSAF: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="GSAF Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_GSAF";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_gsaf_co.paa"
		};
	}; 
	class ESPW_Rifleman_02_GSAF: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="GSAF Rifleman (Rolled-Up)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_02_GSAF";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_gsaf_co.paa"
		};
	};
	class ESPW_Rifleman_RNH_W: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="RNH Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_RNH_W";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_rnh_wld_co.paa"
		};
	}; 
	class ESPW_Rifleman_02_RNH_W: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="RNH Rifleman (Rolled-Up)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_02_RNH_W";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_rnh_wld_co.paa"
		};
	};		
	class ESPW_O_Officer_RNH_W: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="RNH BDU (Woodland)";
		uniformClass="ESPW_U_I_OfficerUniform_RNH_W";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\officer_rnh_wld_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};	
	class ESPW_Rifleman_Light_RNH_W: I_officer_F
	{
		_generalMacro="I_officer_F";
		scope=1;
		displayName="RNH Light BDU (Woodland)";
		uniformClass="ESPW_U_I_CombatUniform_Light_RNH_W";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\officer_rnh_wld_co.paa", "FP_UniformsEverywhereElse\SkinsUniform\iasoldier_rnh_wld_co.paa" 
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat", "\A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat"
		};
	};
	class ESPW_Rifleman_RNH_D: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="RNH Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_RNH_D";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_rnh_dst_co.paa"
		};
	}; 
	class ESPW_Rifleman_02_RNH_D: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="RNH Rifleman (Rolled-Up)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_02_RNH_D";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_rnh_dst_co.paa"
		};
	};		
	class ESPW_O_Officer_RNH_D: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="RNH BDU (Woodland)";
		uniformClass="ESPW_U_I_OfficerUniform_RNH_D";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\officer_rnh_dst_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};	
	class ESPW_Rifleman_Light_RNH_D: I_officer_F
	{
		_generalMacro="I_officer_F";
		scope=1;
		displayName="RNH Light BDU (Woodland)";
		uniformClass="ESPW_U_I_CombatUniform_Light_RNH_D";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\officer_rnh_dst_co.paa", "FP_UniformsEverywhereElse\SkinsUniform\iasoldier_rnh_dst_co.paa" 
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat", "\A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat"
		};
	};
	class ESPW_Rifleman_CoA_D: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="Asana Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_CoA_D";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_asana_dst_co.paa"
		};
	}; 
	class ESPW_Rifleman_02_CoA_D: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="Asana Rifleman (Rolled-Up)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_02_CoA_D";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_asana_dst_co.paa"
		};
	};
	class ESPW_Rifleman_CoA_W: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="Asana Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_CoA_W";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_asana_wld_co.paa"
		};
	}; 
	class ESPW_Rifleman_02_CoA_W: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="Asana Rifleman (Rolled-Up)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_02_CoA_W";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_asana_wld_co.paa"
		};
	};
	class ESPW_Rifleman_RGC: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="RGC Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_RGC";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_rgc_co.paa"
		};
	}; 
	class ESPW_Rifleman_02_RGC: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="RGC Rifleman (Rolled-Up)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_02_RGC";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_rgc_co.paa"
		};
	};
	class ESPW_Rifleman_Trinity: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="Trinity Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_Trinity";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_trinity_co.paa"
		};
	}; 
	class ESPW_Rifleman_02_Trinity: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="Trinity Rifleman (Rolled-Up)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_02_Trinity";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_trinity_co.paa"
		};
	};
	class ESPW_Rifleman_RoK: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="ROK Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_SKor";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_rok_granite_co.paa"
		};
	}; 
	class ESPW_Rifleman_02_RoK: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="ROK Rifleman (Rolled-Up)";
		nakedUniform="U_BasicBody";
		uniformClass="ESPW_I_CombatUniform_02_SKor";
		author="CSLeader";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\iasoldier_rok_granite_co.paa"
		};
	};	

	class B_Carryall_Base;
	class FP_B_Carryall_Inv: B_Carryall_Base
	{
		armor=0;
		author="FP Mod Team";
		displayName="FP Carryall Backpack (Invisible)";
		hiddenSelectionsTextures[]=
		{
			""
		};
		model="\A3\Structures_F\Mil\Helipads\HelipadEmpty_F.p3d";
		picture="";
		scope=2;
	};
    class B_Kitbag_Base;
    class B_Kitbag_rgr: B_Kitbag_Base
    {
        class ItemInfo;
    };
    class FP_B_Kitbag_digi: B_Kitbag_rgr
    {
        displayName="Kitbag (Digi)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_fast_digi_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"Camo"};
        };
    };
 
    class FP_B_Kitbag_blk: B_Kitbag_rgr
    {
        displayName="Kitbag (Black)";
         author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_fast_blk_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"Camo"};
        };
    };
    class B_Carryall_oli: B_Carryall_Base
    {
        class ItemInfo;
    };
    class FP_B_Carryall_blk: B_Carryall_oli
    {
        displayName="Carryall Backpack (Black)";
         author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_tortila_blk_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"Camo"};
        };
    };
};
class cfgWeapons
{
	class U_B_CombatUniform_mcam;
	class U_B_CombatUniform_mcam_vest;
	class U_B_CombatUniform_mcam_tshirt;
	class U_O_OfficerUniform_ocamo;
	class U_I_CombatUniform;
	class U_I_CombatUniform_shortsleeve;
	class U_I_OfficerUniform;
	class U_I_C_Soldier_Para_1_F;
	class U_I_C_Soldier_Para_3_F;
	class U_I_C_Soldier_Para_4_F;
	class UniformItem;
	class FP_Uniform_KyrelianFBSplinter: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Kyrelian SPM-93)";
		picture="\FP_UniformsEverywhereElse\UI\kyreliansplintericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team (Tomoe)";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KyrelianFBSplinter";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KyrelianFBSplinterRolled: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Kyrelian SPM-93/Rolled)";
		picture="\FP_UniformsEverywhereElse\UI\kyreliansplintericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team (Tomoe)";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KyrelianFBSplinterRolled";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_I_CombatUniform_FP: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Facepunch)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_FP";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class FP_I_CombatUniform_02_FP: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues (Facepunch, Sleeves)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_02_FP";
			containerClass="Supply40";
			mass=40;
		};
	};	
	
    class FP_U_B_CombatUniform_oli: U_I_CombatUniform
    {
        displayName="Combat Fatigues [AAF] (Olive)";
        author="Diwako & Taggart";
        class ItemInfo: UniformItem
        {
			uniformModel="-"; 
            uniformClass="FP_I_soldier_O_F";
			containerClass="Supply40";
			mass=40;
        };
    };
    class FP_U_I_CombatUniform_oli_J: U_I_CombatUniform
    {
        displayName="Combat Fatigues [AAF] (Olive, Jumper)";
        author="Diwako & Taggart";
        class ItemInfo: UniformItem
        {
			uniformModel="-";
            uniformClass="FP_I_soldier_M_J_F";
			containerClass="Supply40";
			mass=40;
        };
    };
    class FP_U_I_CombatUniform_J: U_I_CombatUniform
    {
        displayName="Combat Fatigues [AAF] (Jumper)";
        author="Diwako & Taggart";
        class ItemInfo: UniformItem
        {
			uniformModel="-";
            uniformClass="FP_I_soldier_LAT_J_F";
			containerClass="Supply40";
			mass=40;
        };
    };
	
	class FP_Uniform_grn: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues(Green/BDU)";
		picture="\FP_UniformsEverywhereElse\UI\u_grn_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_grn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_GRY: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues(Grey/BDU)";
		picture="\FP_UniformsEverywhereElse\UI\u_gry_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_gry";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KHK: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues(Khaki/BDU)";
		picture="\FP_UniformsEverywhereElse\UI\u_khk_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_khk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_O_Boliveria_Uniform_Green: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="E.W. Boliveria Uniform (Olive Drab)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_O_Officer_Boli_Green";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_O_Boliveria_Uniform_Camo: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="E.W. Boliveria Uniform (DPM)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_O_Officer_Boli_Camo";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_I_CombatUniform_Kuril: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. Kuril Combat Fatigues (Kurile-Flora)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_Kuril";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_I_CombatUniform_02_Kuril: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="E.W. Kuril Combat Fatigues (Kurile-Flora)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_02_Kuril";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_I_OfficerUniform_Kuril: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="E.W. Kuril Officer Uniform (Kurile-Flora)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_O_Officer_Kuril";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_U_I_CombatUniform_Light_Kuril: U_I_OfficerUniform
	{
		scope=2;
		displayName="E.W. Kuril Light Fatigues (Kurile-Flora)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_Light_Kuril";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_O_Karaq_Uniform: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="E.W. Karaq Uniform M03";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_O_Officer_Karaq";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_Firebrand_Para_3_F: U_I_C_Soldier_Para_3_F
	{
		scope=2;
		displayName="E.W. Test Garb (M81)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_Test_Soldier_M81_F";
			containerClass="Supply40";
			mass=40;
		};				
	};
	class ESPW_U_I_G_Firebrand_NM1: U_I_C_Soldier_Para_3_F
	{
		scope=2;
		displayName="E.W. Firebrand Mercenary Outfit (Blue, Choco-Chip)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_G_Mercenary_1";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_U_I_G_Firebrand_NM2: U_I_C_Soldier_Para_3_F
	{
		scope=2;
		displayName="E.W. Firebrand Mercenary Outfit (Flannel, M81)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_G_Mercenary_2";
			containerClass="Supply40";
			mass=40;
		};
};
	class ESPW_U_I_G_Firebrand_Militia_1:U_I_C_Soldier_Para_1_F
	{
		scope=2;
		displayName="E.W. Firebrand Militia Garb (Tee, Brown)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_G_FBCMilitia_1";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_I_G_Firebrand_Militia_2 : U_I_C_Soldier_Para_1_F
	{
		scope=2;
		displayName="E.W. Firebrand Militia Garb (Tee, Blue)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_G_FBCMilitia_2";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_I_G_Firebrand_Militia_3 : U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="E.W. Firebrand Militia Uniform";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_O_Officer_FBCMilitia";
			containerClass="Supply40";
			mass=40;
		};	
	};
	class ESPW_U_I_G_Firebrand_Militia_4 : U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="E.W. Firebrand Militia Uniform (Full Camo)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_O_Officer_FBCMilitia_02";
			containerClass="Supply40";
			mass=40;
		};	
	};	
	class ESPW_U_I_G_Firebrand_Militia_5 : U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. Firebrand Militia Fatigues (Desert)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_G_FBCMilitia_3";
			containerClass="Supply40";
			mass=40;
		};	
	};
	class ESPW_U_I_G_Firebrand_Militia_5_S : U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="E.W. Firebrand Militia Fatigues (Desert)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_G_FBCMilitia_4";
			containerClass="Supply40";
			mass=40;
		};	
	};	
	class ESPW_U_I_G_Firebrand_Militia_5_TT : U_I_C_Soldier_Para_4_F
	{
		scope=2;
		displayName="E.W. Firebrand Militia Garb (Desert)(Tank Top)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_G_FBCMilitia_5";
			containerClass="Supply40";
			mass=40;
		};	
	};	
	class ESPW_U_I_G_Firebrand_Militia_6 : U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. Firebrand Militia Fatigues (Woodland)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_G_FBCMilitia_6";
			containerClass="Supply40";
			mass=40;
		};	
	};
	class ESPW_U_I_G_Firebrand_Militia_6_S : U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="E.W. Firebrand Militia Fatigues (Woodland)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_G_FBCMilitia_7";
			containerClass="Supply40";
			mass=40;
		};	
	};
	class ESPW_U_I_G_Firebrand_Militia_6_TT : U_I_C_Soldier_Para_4_F
	{
		scope=2;
		displayName="E.W. Firebrand Militia Garb (Woodland)(Tank Top)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_G_FBCMilitia_8";
			containerClass="Supply40";
			mass=40;
		};	
	};	
	class ESPW_U_I_CombatUniform_M81: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. Test Fatigues (M81)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_Rifleman_M81";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_U_I_CombatUniform_02_M81: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. Test Fatigues (M81, Sleeves)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_Rifleman_02_M81";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_CGM_CombatUniform_CCE: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. CGM Combat Fatigues (CCE)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_Rifleman_CCE";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_CGM_CombatUniform_02_CCE: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. CGM Combat Fatigues (CCE)(Sleeves)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_Rifleman_02_CCE";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_U_I_CombatUniform_CSATG: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. Arcadia Combat Fatigues (GHex)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_Rifleman_Arcadia";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_U_I_CombatUniform_02_CSATG: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. Arcadia Combat Fatigues (GHex)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_Rifleman_02_Arcadia";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_I_CombatUniform_WSP: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. Fregata Combat Fatigues (WSP)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_Rifleman_Fregata";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_U_I_CombatUniform_02_WSP: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. Fregata Combat Fatigues (WSP)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_I_Rifleman_02_Fregata";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGAC_CombatUniform_SPB : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="E.W. PGAC Urban Fatigues (SPC-M)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGAC";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGAC_CombatUniform_SPB_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="E.W. PGAC Urban Fatigues (SPC-M) (Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGAC_Sleeves";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGAC_CombatUniform_SPB_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="E.W. PGAC Urban Fatigues (SPC-M) (Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGAC_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGAC_CombatUniform_SPW : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="E.W. PGAC Combat Fatigues (SPC-F)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGAC_wld";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGAC_CombatUniform_SPW_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="E.W. PGAC Combat Fatigues (SPC-F) (Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGAC_wld_Sleeves";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGAC_CombatUniform_SPW_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="E.W. PGAC Combat Fatigues (SPC-F) (Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGAC_wld_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGAC_CombatUniform_SPD : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="E.W. PGAC Combat Fatigues (SPC-O)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGAC_des";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGAC_CombatUniform_SPD_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="E.W. PGAC Combat Fatigues (SPC-O) (Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGAC_des_Sleeves";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGAC_CombatUniform_SPD_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="E.W. PGAC Combat Fatigues (SPC-O) (Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGAC_des_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGAC_CombatUniform_SPK : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="E.W. PGAC Urban Fatigues (SPC-TY)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGAC_kor";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGAC_CombatUniform_SPK_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="E.W. PGAC Urban Fatigues (SPC-TY) (Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGAC_kor_Sleeves";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGAC_CombatUniform_SPK_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="E.W. PGAC Urban Fatigues (SPC-TY) (Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGAC_kor_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_CoG_CombatUniform_TPAT : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="E.W. CoG Combat Fatigues (TPAT)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_CoG";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_CoG_CombatUniform_TPAT_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="E.W. CoG Combat Fatigues (TPAT)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_CoG_Sleeves";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_CoG_CombatUniform_TPAT_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="E.W. CoG Fatigues(Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_CoG_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_CoG_CombatUniform_TPAT_Navy : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="E.W. CoG Combat Fatigues (TPAT Naval)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_CoG_Navy";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_CoG_CombatUniform_TPAT_Navy_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="E.W. CoG Combat Fatigues (TPAT Naval)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_CoG_Navy_Sleeves";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_CoG_CombatUniform_TPAT_Navy_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="E.W. CoG Combat Fatigues (TPAT Naval)(Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_CoG_Navy_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_CoG_CombatUniform_TPAT_Desert : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="E.W. CoG Combat Fatigues (TPAT Desert)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_CoG_Des";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_CoG_CombatUniform_TPAT_Desert_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="E.W. CoG Combat Fatigues (TPAT Desert)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_CoG_Des_Sleeves";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_CoG_CombatUniform_TPAT_Desert_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="E.W. CoG Combat Fatigues (TPAT Desert)(Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_CoG_Des_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_CoG_CombatUniform_TPAT_Woodland : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="E.W. CoG Combat Fatigues (TPAT Woodland)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_CoG_Wld";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_CoG_CombatUniform_TPAT_Woodland_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="E.W. CoG Combat Fatigues (TPAT Woodland)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_CoG_Wld_Sleeves";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_CoG_CombatUniform_TPAT_Woodland_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="E.W. CoG Combat Fatigues (TPAT Woodland)(Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_CoG_Wld_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_RoH_CombatUniform_SW2 : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="E.W. Hererra Combat Fatigues (SW2)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_RoH";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_RoH_CombatUniform_SW2_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="E.W. Hererra Combat Fatigues (SW2)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_RoH_Sleeves";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_RoH_CombatUniform_SW2_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="E.W. Hererra Combat Fatigues (SW2)(Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_RoH_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_RoH_CombatUniform_Alpcam : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="E.W. Hererra Combat Fatigues (Alpinecam)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_RoH_Alps";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_RoH_CombatUniform_Alpinecam_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="E.W. Hererra Combat Fatigues (Alpinecam)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_RoH_Alps_Sleeves";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_RoH_CombatUniform_Alpinecam_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="E.W. Hererra Combat Fatigues (Alpinecam)(Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_RoH_Alps_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_KI_CombatUniform_RBS : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="E.W. Kraaviuur Combat Fatigues (RBS)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_KI";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_KI_CombatUniform_RBS_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="E.W. Kraaviuur Combat Fatigues (RBS)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_KI_Sleeves";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_KI_CombatUniform_RBS_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="E.W. Kraaviuur Combat Fatigues (RBS)(Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_KI_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
		class ESPW_U_KI_CombatUniform_RPAT : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="E.W. Kraaviuur Combat Fatigues (RHOPAT)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_KI_PAT";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_KI_CombatUniform_RPAT_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="E.W. Kraaviuur Combat Fatigues (RHOPAT)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_KI_PAT_Sleeves";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_KI_CombatUniform_RPAT_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="E.W. Kraaviuur Combat Fatigues (RHOPAT)(Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_KI_PAT_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGI_CombatUniform_GryDigi : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="E.W. PGI Urban Fatigues (Digital Grey)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGI";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGI_CombatUniform_GryDigi_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="E.W. PGI Urban Fatigues (Digital Grey)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGI_Sleeves";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGI_CombatUniform_GryDigi_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="E.W. PGI Urban Fatigues (Digital Grey)(Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGI_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGI_CombatUniform_RedDigi : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="E.W. PGI Elite Fatigues (Digital Red)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGI_Red";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGI_CombatUniform_RedDigi_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="E.W. PGI Elite Fatigues (Digital Red)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGI_Red_Sleeves";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_PGI_CombatUniform_RedDigi_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="E.W. PGI Elite Fatigues (Digital Red)(Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_PGI_Red_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_Elios_CombatUniform : U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="E.W. Elios Fatigues";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_Elios";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_Elios_CombatUniform_Sleeves : U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="E.W. Elios Fatigues(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_Elios_Sleeves";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_Elios_CombatUniform_Tee : U_B_CombatUniform_mcam_tshirt
	{
		scope=2;
		displayName="E.W. Elios Fatigues(Tee)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_Elios_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_I_CombatUniform_GDS_W: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. GDS Combat Fatigues (Forest)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_GDS_W";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_I_CombatUniform_02_GDS_W: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="E.W. GDS Combat Fatigues (Forest)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_02_GDS_W";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_I_OfficerUniform_GDS_W: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="E.W. GDS Officer Uniform (Forest)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_O_Officer_GDS_W";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_U_I_CombatUniform_Light_GDS_W: U_I_OfficerUniform
	{
		scope=2;
		displayName="E.W. GDS Light Fatigues (Forest)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_Light_GDS_W";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_I_CombatUniform_GDS_D: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. GDS Combat Fatigues (Desert)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_GDS_D";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_I_CombatUniform_02_GDS_D: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="E.W. GDS Combat Fatigues (Desert)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_02_GDS_D";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_I_OfficerUniform_GDS_D: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="E.W. GDS Officer Uniform (Desert)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_O_Officer_GDS_D";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_U_I_CombatUniform_Light_GDS_D: U_I_OfficerUniform
	{
		scope=2;
		displayName="E.W. GDS Light Fatigues (Desert)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_Light_GDS_D";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_I_CombatUniform_GSAF: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. GSAF Combat Fatigues";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_GSAF";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_I_CombatUniform_02_GSAF: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="E.W. GSAF Combat Fatigues (Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_02_GSAF";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_I_CombatUniform_RNH_W: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. RNH Combat Fatigues (Woodland)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_RNH_W";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_I_CombatUniform_02_RNH_W: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="E.W. RNH Combat Fatigues (Woodland)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_02_RNH_W";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_I_OfficerUniform_RNH_W: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="E.W. RNH Officer Uniform (Woodland)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_O_Officer_RNH_W";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_U_I_CombatUniform_Light_RNH_W: U_I_OfficerUniform
	{
		scope=2;
		displayName="E.W. RNH Light Fatigues (Woodland)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_Light_RNH_W";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_I_CombatUniform_RNH_D: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. RNH Combat Fatigues (Desert)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_RNH_D";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_I_CombatUniform_02_RNH_D: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="E.W. RNH Combat Fatigues (Desert)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_02_RNH_D";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_U_I_OfficerUniform_RNH_D: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="E.W. RNH Officer Uniform (Desert)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_O_Officer_RNH_D";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_U_I_CombatUniform_Light_RNH_D: U_I_OfficerUniform
	{
		scope=2;
		displayName="E.W. RNH Light Fatigues (Desert)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_Light_RNH_D";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_I_CombatUniform_CoA_D: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. Asana Combat Fatigues (Desert)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_CoA_D";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_I_CombatUniform_02_CoA_D: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="E.W. Asana Combat Fatigues (Desert)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_02_CoA_D";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_I_CombatUniform_CoA_W: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. Asana Combat Fatigues (Woodland)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_CoA_W";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_I_CombatUniform_02_CoA_W: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="E.W. Asana Combat Fatigues (Woodland)(Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_02_CoA_W";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_I_CombatUniform_RGC: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. RGC Combat Fatigues";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_RGC";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_I_CombatUniform_02_RGC: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="E.W. RGC Combat Fatigues (Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_02_RGC";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_I_CombatUniform_Trinity: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. Trinity Combat Fatigues";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_Trinity";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_I_CombatUniform_02_Trinity: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="E.W. Trinity Combat Fatigues (Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_02_Trinity";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ESPW_I_CombatUniform_SKor: U_I_CombatUniform
	{
		scope=2;
		displayName="E.W. South Korean Combat Fatigues";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_RoK";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class ESPW_I_CombatUniform_02_SKor: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="E.W. South Korean Combat Fatigues (Rolled-Up)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="Espionage Wars Team | Rusty";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESPW_Rifleman_02_RoK";
			containerClass="Supply40";
			mass=40;
		};
	};	
	
	class H_MilCap_gry;
	class FP_H_MilCap_blk: H_MilCap_gry
	{
		author="Bohemia Interactive";
		_generalMacro="H_Beret_blk";
		scope=2;
		displayName="Military Cap [Black]";
		hiddenSelectionsTextures[]=
		{
			"\A3\characters_f_epb\Common\Data\cappatrol_blk_co.paa"
		};
	};

    class ESPW_H_MilCap_FBC_wld: H_MilCap_gry
    {
        displayName="Military Cap (FBC Woodland)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsEverywhereElse\SkinsHeadgear\cappatrol_fbc_woodland_co.paa"
        };
	};	
    class ESPW_H_MilCap_FBC_dst: H_MilCap_gry
    {
        displayName="Military Cap (FBC Desert)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsEverywhereElse\SkinsHeadgear\cappatrol_fbc_desert_co.paa"
        };
	};
    class ESPW_H_MilCap_RNH_wld: H_MilCap_gry
    {
        displayName="Military Cap (RNH Woodland)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsEverywhereElse\SkinsHeadgear\cappatrol_rnh_woodland_co.paa"
        };
	};	
    class ESPW_H_MilCap_RNH_dst: H_MilCap_gry
    {
        displayName="Military Cap (RNH Desert)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsEverywhereElse\SkinsHeadgear\cappatrol_rnh_desert_co.paa"
        };
	};
    class ESPW_H_MilCap_RGC: H_MilCap_gry
    {
        displayName="Military Cap (RGC)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsEverywhereElse\SkinsHeadgear\cappatrol_rgc_co.paa"
        };
	};		
	
	class H_HelmetB;
	class FP_BluHelmet_KyrelianSplinter: H_HelmetB
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Combat Helmet (Kyrelian Splinter)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\KY_Helm_SPM.paa"
		};
	};
	class FP_BluHelmet_KyrelianBlack: H_HelmetB
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Combat Helmet (Kyrelian)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\KY_Helm_NORM.paa"
		};
	};
	class H_HelmetSpecB;
	class FP_BluHelmetECH_KyrelianSplinter: H_HelmetSpecB
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Enhanced Combat Helmet (Kyrelian Splinter)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\KY_Helm_SPM.paa"
		};
	};
	class H_HelmetB_light;
	class FP_BluHelmetLight_KyrelianSplinter: H_HelmetB_light
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Light Combat Helmet (Kyrelian Splinter)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\KY_Helm_SPM.paa"
		};
	};
	class H_HelmetIA;
	class FP_Helmet_FP: H_HelmetIA
	{
		author = "Espionage Wars Team | Rusty";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP Redstone Helmet";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\iahelmet_fp_co.paa"};		
	};
	class H_Booniehat_khk;
    class FP_Booniehat_FP: H_Booniehat_khk
	{
		author = "Espionage Wars Team | Rusty";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (FP, Redstone)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\boonie_fp_co.paa"};		
	};
	class H_Booniehat_khk_hs;
	class FP_Booniehat_FP_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | Rusty";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (FP, Redstone)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\boonie_fp_co.paa"};		
	};

	class ESPW_H_Booniehat_PGAC_B: H_Booniehat_khk
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (SPC-M)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_pgac_spb_co.paa"};		
	};
	class ESPW_H_Booniehat_PGAC_B_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (SPC-M)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_pgac_spb_co.paa"};		
	};
	class ESPW_H_Booniehat_PGAC_D: H_Booniehat_khk
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (SPC-O)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_pgac_spd_co.paa"};		
	};
	class ESPW_H_Booniehat_PGAC_D_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (SPC-O)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_pgac_spd_co.paa"};		
	};
	class ESPW_H_Booniehat_PGAC_W: H_Booniehat_khk
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (SPC-F)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_pgac_spw_co.paa"};		
	};
	class ESPW_H_Booniehat_PGAC_W_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (SPC-F)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_pgac_spw_co.paa"};		
	};	
	class ESPW_H_Booniehat_PGAC_TY: H_Booniehat_khk
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (SPC-TY)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_pgac_spty_co.paa"};		
	};
	class ESPW_H_Booniehat_PGAC_TY_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (SPC-TY)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_pgac_spty_co.paa"};		
	};		
	class ESPW_H_Booniehat_COG_TPAT: H_Booniehat_khk
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (TPAT)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_cog_tpat_co.paa"};		
	};
	class ESPW_H_Booniehat_COG_TPAT_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (TPAT)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_cog_tpat_co.paa"};		
	};
	class ESPW_H_Booniehat_COG_TPAT_D: H_Booniehat_khk
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (TPAT Desert)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_cog_tpat_desert_co.paa"};		
	};
	class ESPW_H_Booniehat_COG_TPAT_D_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (TPAT Desert)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_cog_tpat_desert_co.paa"};		
	};
	class ESPW_H_Booniehat_COG_TPAT_W: H_Booniehat_khk
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (TPAT Woodland)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_cog_tpat_woodland_co.paa"};		
	};
	class ESPW_H_Booniehat_COG_TPAT_W_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (TPAT Woodland)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_cog_tpat_woodland_co.paa"};		
	};	
	class ESPW_H_Booniehat_COG_TPAT_N: H_Booniehat_khk
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (TPAT Naval)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_cog_tpat_naval_co.paa"};		
	};
	class ESPW_H_Booniehat_COG_TPAT_N_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (TPAT Naval)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_cog_tpat_naval_co.paa"};		
	};
	class ESPW_H_Booniehat_KI_RBS: H_Booniehat_khk
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (RBS)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_ki_rbs_co.paa"};		
	};
	class ESPW_H_Booniehat_KI_RBS_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (RBS)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_ki_rbs_co.paa"};		
	};
	class ESPW_H_Booniehat_KI_RHO: H_Booniehat_khk
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (RHOPAT)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_ki_rhopat_co.paa"};		
	};
	class ESPW_H_Booniehat_KI_RHO_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (RHOPAT)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_ki_rhopat_co.paa"};		
	};
	class ESPW_H_Booniehat_ROH_ALPS: H_Booniehat_khk
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (Alpinecam)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_roh_alpcam_co.paa"};		
	};
	class ESPW_H_Booniehat_ROH_ALPS_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (Alpinecam)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_roh_alpcam_co.paa"};		
	};
	class ESPW_H_Booniehat_ROH_SW2: H_Booniehat_khk
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (SW2)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_roh_sw2_co.paa"};		
	};
	class ESPW_H_Booniehat_ROH_SW2S_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (SW2)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_roh_sw2_co.paa"};		
	};
	class ESPW_H_Booniehat_PGI_DG: H_Booniehat_khk
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (Digital Grey)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_pgi_digigrey_co.paa"};		
	};
	class ESPW_H_Booniehat_PGI_DG_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (Digital Grey)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_pgi_digigrey_co.paa"};		
	};
	class ESPW_H_Booniehat_PGI_DR: H_Booniehat_khk
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (Digital Red)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_pgi_digired_co.paa"};		
	};
	class ESPW_H_Booniehat_PGI_DR_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (Digital Red)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\booniehat_pgi_digired_co.paa"};		
	};	
    class ESPW_Booniehat_FBC_D: H_Booniehat_khk
	{
		author = "Espionage Wars Team | Rusty";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (Firebrand, Desert)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\boonie_firebrand_desert_co.paa"};		
	};
	class ESPW_Booniehat_FBC_D_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | Rusty";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (Firebrand, Desert)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\boonie_firebrand_desert_co.paa"};		
	};	
    class ESPW_Booniehat_FBC_W: H_Booniehat_khk
	{
		author = "Espionage Wars Team | Rusty";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (Firebrand, Woodland)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\boonie_firebrand_woodland_co.paa"};		
	};
	class ESPW_Booniehat_FBC_W_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | Rusty";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (Firebrand, Woodland)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\boonie_firebrand_woodland_co.paa"};		
	};

    class FP_H_Booniehat_oli_hs: H_Booniehat_khk_hs
    {
        displayName="Booniehat (Olive, Headset)";
        author="Diwako & Taggart";
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Booniehat_oli_ca.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F_Bootcamp\civil\data\booniehat_grn_co.paa"
        };
    };

    class FP_H_Booniehat_dgtl_hs: H_Booniehat_khk_hs
    {
        displayName="Booniehat [AAF] (Headset)";
        author="Diwako & Taggart";
        picture="\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\data\booniehat_indp_co.paa"
        };
    };
    class H_Beret_Colonel;
    class FP_H_Beret_Colonel_Eagle: H_Beret_Colonel
    {
        displayName="Beret [NATO] (Eagle)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "A3\Characters_F_EPC\BLUFOR\Data\headgear_beret02_colonel_eagle_co.paa"
        };
    };
    class H_Cap_oli;
    class FP_H_Cap_sero: H_Cap_oli
    {
        displayName="Cap (Sero)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Data\capb_sero_co.paa"
        };
    };
    class FP_H_MilCap_pattern: H_MilCap_gry
    {
        displayName="Military Cap (Pattern)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Data\cappatrol_check1_co.paa"
        };
    };
   
    class FP_H_MilCap_plaid: H_MilCap_gry
    {
        displayName="Military Cap (Plaid)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Data\cappatrol_check2_co.paa"
        };
    };
   
    class FP_H_MilCap_checker: H_MilCap_gry
    {
        displayName="Military Cap (Checker)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Data\cappatrol_check3_co.paa"
        };
    };
   
    class FP_H_MilCap_tan: H_MilCap_gry
    {
        displayName="Military Cap (Tan)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Data\cappatrol_tan_co.paa"
        };
    };
    class H_MilCap_dgtl;
    class FP_H_MilCap_oli: H_MilCap_dgtl
    {
        displayName="Military Cap (Olive)";
        author="Diwako & Taggart";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsEverywhereElse\SkinsHeadgear\cappatrol_oli_co.paa"
        };
    };
 
    class H_HelmetO_ocamo;
    class FP_H_HelmetO_blk: H_HelmetO_ocamo
    {
        displayName="Protector Helmet (Black)";
        author="Bohemia Interactive";
        picture="\A3\Characters_F\data\ui\icon_H_HelmetO_spec_CA.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\characters_f\OPFOR\data\tech_rus_CO.paa"
        };
    };
 
    class H_HelmetLeaderO_ocamo;
    class FP_H_HelmetLeaderO_blk: H_HelmetLeaderO_ocamo
    {
        displayName="Defender Helmet (Black)";
        author="Bohemia Interactive";
        picture="\A3\Characters_F\data\ui\icon_H_HelmetO_spec_CA.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\characters_f\OPFOR\data\tech_rus_CO.paa"
        };
    };
	class Vest_NoCamo_Base;
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class VestItem;
	class FP_Carrier_Kyrelian: V_PlateCarrier1_rgr
	{
		scope=2;
		author="FP Mod Team (Tomoe)";
		picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName="Carrier Lite (Kyrelian)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsCarrier\KY_Vest_GRN.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class FP_Carrier_KyrelianBlack: V_PlateCarrier1_rgr
	{
		scope=2;
		author="FP Mod Team (Tomoe)";
		picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName="Carrier Lite (Kyrelian/Black)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsCarrier\FP_KyrelianBlackPC.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_PlateCarrierSpec_blk;
	class FP_Carrier_KyrelianHeavyBlack: V_PlateCarrierSpec_blk
	{
		scope=2;
		author="FP Mod Team (Tomoe)";
		displayName="Carrier Special Rig (Kyrelian/Black)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsCarrier\blk_hvy.paa"
		};
	};
	class FP_Carrier_KyrelianHeavyGreen: V_PlateCarrierSpec_blk
	{
		scope=2;
		author="FP Mod Team (Tomoe)";
		displayName="Carrier Special Rig (Kyrelian/Ranger Green)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsCarrier\grn_hvy.paa"
		};
	};
	class V_PlateCarrierIA1_dgtl: Vest_NoCamo_Base
    {
        class ItemInfo;
    };
	class V_PlateCarrierIA2_dgtl: V_PlateCarrierIA1_dgtl
    {
        class ItemInfo;
    };
	class FP_V_PlateCarrierIA1_oli: V_PlateCarrierIA1_dgtl
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro="V_PlateCarrierIA1_oli";
		scope = 2;
		displayName = "GA Carrier Lite (Olive)";
		picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionstextures[] = 
		{
			"\A3\Characters_F_Mark\INDEP\Data\equip_ia_vest01_oli_co.paa"
		};		
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo"
			};
		};
	};	
	class FP_V_PlateCarrierIA2_oli: V_PlateCarrierIA2_dgtl
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro="V_PlateCarrierIA2_oli";
		scope = 2;
		displayName = "GA Carrier Rig (Olive)";
		picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		descriptionShort="$STR_A3_SP_AL_III";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionstextures[] = 
		{
			"\A3\Characters_F_Mark\INDEP\Data\equip_ia_vest01_oli_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo"
			};
		};		
	};

	class HelmetBase;
	class H_Cap_headphones: HelmetBase
	{
        class ItemInfo;
	};
	class ESPW_H_Cap_headphones_blk: H_Cap_headphones
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Cap_headphones";
		scope = 2;
		displayName = "Rangemaster Cap (Black)";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\capb_headphones_blk_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
		};		
	};
	class ESPW_H_Cap_headphones_tan: H_Cap_headphones
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "H_Cap_headphones";
		scope = 2;
		displayName = "Rangemaster Cap (Tan)";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\capb_headphones_tan_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
		};		
	};			
	class ESPW_H_Booniehat_Boli: H_Booniehat_khk
	{
		author = "Espionage Wars Team | Rusty";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "Booniehat (DPM)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\boonie_boli_co.paa"};		
	};
	class ESPW_H_Booniehat_Boli_hs: H_Booniehat_khk_hs
	{
		author = "Espionage Wars Team | Rusty";
		_generalMacro = "H_Booniehat_khk_hs";
		scope = 2;
		displayName = "Booniehat (DPM)(Headset)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\boonie_boli_co.paa"};		
	};
	class ESPW_H_HelmetCGM_CCE: H_HelmetIA
	{
		author = "Espionage Wars Team | Rusty";
		_generalMacro = " H_HelmetIA";
		scope = 2;
		displayName = "CGM Modular Helmet (M67 CCE)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\iahelmet_cce_co.paa"};		
	};
	class rhsusf_mich_bare_norotos;
	class rhsusf_mich_bare_norotos_alt;
	class rhsusf_mich_bare_norotos_alt_headset;
	class rhsusf_mich_bare_norotos_arc;
	class rhsusf_mich_bare_norotos_arc_alt;
	class rhsusf_mich_bare_norotos_arc_alt_headset;
	class ESPW_mich_bare_norotos_blk : rhsusf_mich_bare_norotos
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "rhsusf_mich_bare_norotos";
		scope = 2;
		displayName = "MICH 2000 (Black, Norotos)";
		hiddenSelectionsTextures[] = 
		{ 	"FP_UniformsEverywhereElse\SkinsHeadgear\bare_mich_norotos_blk_co.paa", 
			"FP_UniformsEverywhereElse\SkinsHeadgear\mich_acc_pgac_co.paa", 
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};		
	};	
	class ESPW_mich_bare_norotos_blk_alt : rhsusf_mich_bare_norotos_alt
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "rhsusf_mich_bare_norotos_alt";
		scope = 2;
		displayName = "MICH 2000 (Black, Norotos/Alt)";
		hiddenSelectionsTextures[] = 
		{ 	"FP_UniformsEverywhereElse\SkinsHeadgear\bare_mich_norotos_blk_co.paa", 
			"FP_UniformsEverywhereElse\SkinsHeadgear\mich_acc_pgac_co.paa", 
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};		
	};
	class ESPW_mich_bare_norotos_blk_alt_headset : rhsusf_mich_bare_norotos_alt_headset
		{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "rhsusf_mich_bare_norotos_alt_headset";
		scope = 2;
		displayName = "MICH 2000 (Black, Norotos/Alt/Headset)";
		hiddenSelectionsTextures[] = 
		{ 	"FP_UniformsEverywhereElse\SkinsHeadgear\bare_mich_norotos_blk_co.paa", 
			"FP_UniformsEverywhereElse\SkinsHeadgear\mich_acc_pgac_co.paa", 
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
		};		
	};
	class ESPW_mich_bare_norotos_arc_blk : rhsusf_mich_bare_norotos_arc
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "rhsusf_mich_bare_norotos_arc";
		scope = 2;
		displayName = "MICH 2000 (Black, Norotos/ARC)";
		hiddenSelectionsTextures[] = 
		{ 	"FP_UniformsEverywhereElse\SkinsHeadgear\bare_mich_norotos_arc_blk_co.paa", 
			"FP_UniformsEverywhereElse\SkinsHeadgear\mich_acc_pgac_co.paa", 
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};		
	};	
	class ESPW_mich_bare_norotos_arc_blk_alt : rhsusf_mich_bare_norotos_arc_alt
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "rhsusf_mich_bare_norotos_arc_alt";
		scope = 2;
		displayName = "MICH 2000 (Black, Norotos/ARC/Alt)";
		hiddenSelectionsTextures[] = 
		{ 	"FP_UniformsEverywhereElse\SkinsHeadgear\bare_mich_norotos_arc_blk_co.paa", 
			"FP_UniformsEverywhereElse\SkinsHeadgear\mich_acc_pgac_co.paa", 
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};		
	};
	class ESPW_mich_bare_norotos_arc_blk_alt_headset : rhsusf_mich_bare_norotos_arc_alt_headset
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "rhsusf_mich_bare_norotos_arc_alt_headset";
		scope = 2;
		displayName = "MICH 2000 (Black, Norotos/ARC/Alt/Headset)";
		hiddenSelectionsTextures[] = 
		{ 	"FP_UniformsEverywhereElse\SkinsHeadgear\bare_mich_norotos_arc_blk_co.paa", 
			"FP_UniformsEverywhereElse\SkinsHeadgear\mich_acc_pgac_co.paa", 
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
		};		
	};
	class rhsusf_ach_bare;
	class rhsusf_ach_bare_ess;
	class rhsusf_ach_bare_headset;
	class rhsusf_ach_bare_headset_ess;
	class ESPW_ach_bare_blk : rhsusf_ach_bare
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "rhsusf_ach_bare";
		scope = 2;
		displayName = "ACH (Black)";
		hiddenSelectionsTextures[] = 
		{ 	
		"FP_UniformsEverywhereElse\SkinsHeadgear\bare_mich_blk_rhino_co.paa"
		};		
	};
	class ESPW_ach_bare_blk_ess : rhsusf_ach_bare_ess
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "rhsusf_ach_bare_ess";
		scope = 2;
		displayName = "ACH (Black/ESS)";
		hiddenSelectionsTextures[] = 
		{ 	
		"FP_UniformsEverywhereElse\SkinsHeadgear\bare_mich_blk_rhino_co.paa"
		};		
	};
	class ESPW_ach_bare_blk_headset : rhsusf_ach_bare_headset
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "rhsusf_ach_bare_headset";
		scope = 2;
		displayName = "ACH (Black/Headset)";
		hiddenSelectionsTextures[] = 
		{ 	
		"FP_UniformsEverywhereElse\SkinsHeadgear\bare_mich_blk_rhino_co.paa"
		};		
	};
	class ESPW_ach_bare_blk_headset_ess : rhsusf_ach_bare_headset_ess
	{
		author = "Espionage Wars Team | CSLeader";
		_generalMacro = "rhsusf_ach_bare_headset_ess";
		scope = 2;
		displayName = "ACH (Black/Headset/ESS)";
		hiddenSelectionsTextures[] = 
		{ 	
		"FP_UniformsEverywhereElse\SkinsHeadgear\bare_mich_blk_rhino_co.paa"
		};		
	};
	
	class rhs_6b27m;
	class rhs_6b27m_ess;
	class rhs_6b27m_MEC_tiger : rhs_6b27m
	{
		author = "FP Mod Team";
		scope = 2;
		displayName = "6B27M MEC Tigerstripe";
		hiddenSelectionsTextures[] = 
		{ 	
		"FP_UniformsEverywhereElse\SkinsHeadgear\6b27_mec_co.paa"
		};		
	};
	class rhs_6b27m_ess_MEC_tiger : rhs_6b27m_ess
	{
		author = "FP Mod Team";
		scope = 2;
		displayName = "6B27M MEC Tigerstripe (ESS)";
		hiddenSelectionsTextures[] = 
		{ 	
		"FP_UniformsEverywhereElse\SkinsHeadgear\6b27_mec_co.paa"
		};		
	};
};
