class CfgPatches
{
	class FP_UniformsCivilians
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_Common"
		};
	};
};

class CfgVehicles {
	class I_Officer_F;	
	class Civilian_F;	
	class I_Soldier_F;
	class LOP_AFR_CIV_01 : Civilian_F {
		_generalMacro = "LOP_AFR_CIV_01";
		scope = 1;
		side = 2;
		model = "\A3\characters_F\civil\c_poor";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_cloth1_v2_co.paa"};
		uniformClass = "LOP_U_Civ_01";
		class Wounds {
			tex[] = {};
			mat[] = {
				"A3\Characters_F\Civil\Data\c_cloth1.rvmat", "A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat",
				"A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth2.rvmat", 
				"A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat", 
				"A3\Characters_F\Civil\Data\c_cloth3.rvmat", "A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat", 
				"A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth4.rvmat", 
				"A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat", 
				"A3\characters_f\civil\data\c_poloshirt.rvmat", "A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat", 
				"A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat", "A3\characters_f\common\data\coveralls.rvmat", 
				"A3\Characters_F\Common\Data\coveralls_injury.rvmat", "A3\Characters_F\Common\Data\coveralls_injury.rvmat", 
				"A3\Characters_F\Civil\Data\hunter.rvmat", "A3\Characters_F\Civil\Data\hunter_injury.rvmat", 
				"A3\Characters_F\Civil\Data\hunter_injury.rvmat", "A3\Characters_F\Civil\Data\c_poloshirtpants.rvmat", 
				"A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat", "A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat", 
				"A3\Characters_F\Civil\Data\priest.rvmat", "A3\Characters_F\Civil\Data\priest_injury.rvmat", 
				"A3\Characters_F\Civil\Data\priest_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", 
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", 
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
	};	
	class LOP_AFR_CIV_02 : LOP_AFR_CIV_01 {
		_generalMacro = "LOP_AFR_CIV_02";
		hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_cloth1_v3_co.paa"};
		uniformClass = "LOP_U_Civ_02";
	};	
	class LOP_AFR_CIV_03 : LOP_AFR_CIV_01 {
		_generalMacro = "LOP_AFR_CIV_03";
		hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_cloth1_kabeiroi_co.paa"};
		uniformClass = "LOP_U_Civ_03";
	};	
	class LOP_AFR_CIV_04 : LOP_AFR_CIV_01 {
		_generalMacro = "LOP_AFR_CIV_04";
		hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_cloth1_bandit_co.paa"};
		uniformClass = "LOP_U_Civ_04";
	};	
	class LOP_AFR_CIV_05 : LOP_AFR_CIV_01 {
		_generalMacro = "LOP_AFR_CIV_05";
		hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_cloth1_co.paa"};
		uniformClass = "LOP_U_Civ_05";
	};	
	class LOP_AFR_CIV_06 : LOP_AFR_CIV_01 {
		_generalMacro = "LOP_AFR_CIV_06";
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\Guerrilla\data\c_cloth1_kabeiroi_co.paa"};
		uniformClass = "LOP_U_Civ_06";
	};
};

class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class LOP_U_Civ_01: Uniform_Base
	{
		author="LOP";
		scope=2;
		side=2;
		displayName="African civ. fatigues 01";
		picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="LOP_AFR_CIV_01";
			containerClass="Supply20";
			mass=20;
		};
	};
	class LOP_U_Civ_02: LOP_U_Civ_01
	{
		displayName="African civ. fatigues 02";
		hiddenSelectionsTextures[]={"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="LOP_AFR_CIV_02";
			containerClass="Supply20";
			mass=20;
		};
	};
	class LOP_U_Civ_03: LOP_U_Civ_01
	{
		displayName="African civ. fatigues 03";
		hiddenSelectionsTextures[]={"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="LOP_AFR_CIV_03";
			containerClass="Supply20";
			mass=20;
		};
	};
	class LOP_U_Civ_04: LOP_U_Civ_01
	{
		displayName="African civ. fatigues 04";
		hiddenSelectionsTextures[]={"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="LOP_AFR_CIV_04";
			containerClass="Supply20";
			mass=20;
		};
	};
	class LOP_U_Civ_05: LOP_U_Civ_01
	{
		displayName="African civ. fatigues 05";
		hiddenSelectionsTextures[]={"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="LOP_AFR_CIV_05";
			containerClass="Supply20";
			mass=20;
		};
	};
	class LOP_U_Civ_06: LOP_U_Civ_01
	{
		displayName="African civ. fatigues 06";
		hiddenSelectionsTextures[]={"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="LOP_AFR_CIV_06";
			containerClass="Supply20";
			mass=20;
		};
	};
	class VestItem;
	class Vest_Camo_Base;
	class Vest_NoCamo_Base;
	class LOP_V_Carrier_OLV: Vest_Camo_Base
	{
		author="LOP";
		_generalMacro="LOP_V_Carrier_OLV";
		scope=2;
		picture="\A3\Characters_F_EPC\Data\UI\icon_V_PressVest_CA.paa";
		displayName="Vest (olive)";
		model="\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\vest_olive.paa"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
			containerClass="Supply40";
			mass=60;
			armor="20*0.6";
			passThrough=0.40000001;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class LOP_V_Carrier_TAN: LOP_V_Carrier_OLV
	{
		_generalMacro="LOP_V_Carrier_TAN";
		displayName="Vest (tan)";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\vest_tan.paa"
		};
	};
	class LOP_V_Carrier_WDL: LOP_V_Carrier_OLV
	{
		_generalMacro="LOP_V_Carrier_WDL";
		displayName="Vest (woodland)";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\vest_wdl.paa"
		};
	};
	class LOP_V_Carrier_BLU: LOP_V_Carrier_OLV
	{
		_generalMacro="LOP_V_Carrier_BLU";
		displayName="Vest (blue)";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\vest_blu.paa"
		};
	};
	class CUP_V_O_TK_Vest_1;
	class FP_V_TK_Kamysh: CUP_V_O_TK_Vest_1
	{
		author="FP Mod Team";
		_generalMacro="FP_V_TK_Kamysh";
		displayName="Takistani Combat Vest (Kamysh)";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\chestrig_kamysh_co.paa"
		};
	};
	class FP_V_TK_VSR: FP_V_TK_Kamysh
	{
		_generalMacro="FP_V_TK_VSR";
		displayName="Takistani Combat Vest (VSR)";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\chestrig_vsr_co.paa"
		};
	};
	class LOP_V_CarrierLite_OLV: Vest_NoCamo_Base
	{
		author="LOP";
		scope=2;
		_generalMacro="LOP_V_CarrierLite_OLV";
		displayname="GA Carrier Lite (olive)";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\vest_rig_olv.paa"
		};
		class ItemInfo: VestItem
		{
			armor="5*0.8";
			containerclass="Supply100";
			mass=80;
			passthrough=0.40000001;
			uniformmodel="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class LOP_V_CarrierLite_KHK: LOP_V_CarrierLite_OLV
	{
		_generalMacro="LOP_V_CarrierLite_KHK";
		displayName="GA Carrier Lite (khaki)";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\vest_rig_khk.paa"
		};
	};
	class LOP_V_CarrierLite_WDL: LOP_V_CarrierLite_OLV
	{
		_generalMacro="LOP_V_CarrierLite_WDL";
		displayName="GA Carrier Lite (woodland)";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\vest_rig_wdl.paa"
		};
	};
	class LOP_V_CarrierLite_TRI: LOP_V_CarrierLite_OLV
	{
		_generalMacro="LOP_V_CarrierLite_TRI";
		displayName="GA Carrier Lite (tri color)";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\vest_rig_tri.paa"
		};
	};
	class LOP_V_CarrierLite_CDF: LOP_V_CarrierLite_OLV
	{
		_generalMacro="LOP_V_CarrierLite_CDF";
		displayName="GA Carrier Lite (cdf camo)";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\vest_rig_cdf.paa"
		};
	};
	class LOP_V_CarrierRig_OLV: LOP_V_CarrierLite_OLV
	{
		_generalMacro="LOP_V_CarrierRig_OLV";
		displayname="GA Carrier Rig (olive)";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\vest_rig_olv.paa"
		};
		class ItemInfo: VestItem
		{
			armor="5*0.8";
			containerclass="Supply120";
			mass=80;
			passthrough=0.40000001;
			uniformmodel="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class LOP_V_CarrierRig_KHK: LOP_V_CarrierRig_OLV
	{
		_generalMacro="LOP_V_CarrierRig_KHK";
		displayName="GA Carrier Rig (khaki)";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\vest_rig_khk.paa"
		};
	};
	class LOP_V_CarrierRig_WDL: LOP_V_CarrierRig_OLV
	{
		_generalMacro="LOP_V_CarrierRig_WDL";
		displayName="GA Carrier Rig (woodland)";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\vest_rig_wdl.paa"
		};
	};
	class LOP_V_CarrierRig_TRI: LOP_V_CarrierRig_OLV
	{
		_generalMacro="LOP_V_CarrierRig_TRI";
		displayName="GA Carrier Rig (tri color)";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\vest_rig_tri.paa"
		};
	};
	class LOP_V_CarrierRig_CDF: LOP_V_CarrierRig_OLV
	{
		_generalMacro="LOP_V_CarrierRig_CDF";
		displayName="GA Carrier Rig (cdf camo)";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsCivilians\SkinsVest\vest_rig_cdf.paa"
		};
	};
};
