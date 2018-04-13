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
};
