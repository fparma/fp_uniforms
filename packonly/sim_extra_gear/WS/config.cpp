class CfgPatches
{
	class sim_extra_gear
	{
		requiredAddons[]=
		{
			"A3_Characters_F",
			"sim_extra_gear",
			"data_f_lxWS_Loadorder"
		};
		skipWhenMissingDependencies = 1;
		units[]={};
		weapons[]={};
		magazines[]={};
		requiredVersion=1;
	};
};
class CfgWeapons
{	
	class HeadgearItem;
	class FP_H_Balaclava_blk;
	class FP_H_Balaclava_blk_lxWS: FP_H_Balaclava_blk
	{
		displayName = "Balaclava (Thin, Black)";
		picture = "\lxws\characters_f_lxws\headgear\a3\data\UI\icon_G_Balaclava_blk_ca.paa";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = {"\lxws\characters_f_lxws\headgear\a3\data\headgear_balaclava_blk_co.paa"};
		hiddenSelectionsMaterials[] = {"\lxws\characters_f_lxws\headgear\a3\data\headgear_balaclava.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 6;
			uniformModel = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
			modelSides[]={0,1,2,3};
			hiddenSelections[] = { "camo" };
		};
	};
	class FP_H_Balaclava_oli_lxWS: FP_H_Balaclava_blk
	{
		displayName = "Balaclava (Thin, Olive)";
		picture = "\lxws\characters_f_lxws\headgear\a3\data\UI\icon_G_Balaclava_oli_ca.paa";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = {"\lxws\characters_f_lxws\headgear\a3\data\headgear_balaclava_oli_co.paa"};
		hiddenSelectionsMaterials[] = {"\lxws\characters_f_lxws\headgear\a3\data\headgear_balaclava.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 6;
			uniformModel = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
			modelSides[]={0,1,2,3};
			hiddenSelections[] = { "camo" };
		};
	};
	class FP_H_Balaclava_snd_lxWS: FP_H_Balaclava_blk
	{
		displayName = "Balaclava (Thin, Tan)";
		picture = "\lxws\characters_f_lxws\headgear\a3\data\UI\icon_G_Balaclava_snd_ca.paa";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = {"\lxws\characters_f_lxws\headgear\a3\data\headgear_balaclava_snd_co.paa"};
		hiddenSelectionsMaterials[] = {"\lxws\characters_f_lxws\headgear\a3\data\headgear_balaclava.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 6;
			uniformModel = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
			modelSides[]={0,1,2,3};
			hiddenSelections[] = { "camo" };
		};
	};
	class FP_H_Balaclava_wht_lxWS: FP_H_Balaclava_blk
	{
		displayName = "Balaclava (Thin, White)";
		picture = "\sim_extra_gear\icons\icon_g_balaclava_wht_ca.paa";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = {"\sim_extra_gear\tex\headgear_balaclava_wht_co.paa"};
		hiddenSelectionsMaterials[] = {"\lxws\characters_f_lxws\headgear\a3\data\headgear_balaclava.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 6;
			uniformModel = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
			modelSides[]={0,1,2,3};
			hiddenSelections[] = { "camo" };
		};
	};
};
class CfgGlasses
{
	class G_Balaclava_blk;
	class FP_G_Balaclava_wht_lxWS: G_Balaclava_blk
	{
		displayName = "Balaclava (Thin, White)";
		hiddenSelectionsMaterials[] = {"\lxws\characters_f_lxws\headgear\a3\data\headgear_balaclava.rvmat"};
		hiddenSelectionsTextures[] = {"\sim_extra_gear\tex\headgear_balaclava_wht_co.paa"};
		picture = "\sim_extra_gear\icons\icon_g_balaclava_wht_ca.paa";
	};
};
