class CfgPatches
{
	class FP_UniformsEasternEurope
	{
		units[]={};
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
	class O_officer_F;
	class FP_Rifleman_YugOAK: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Yug Oak (BDU)";
		uniformClass="FP_uniform_OAKYUG";
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
			"FP_UniformsEasternEurope\SkinsUniform\FP_OAKYUG.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_LithOPFOR: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP LIT M05 OPFOR (BDU)";
		uniformClass="FP_Uniform_lith05opfor";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_LithOPFOR.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_LithOPFORStrich: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP LIT M05 OPFOR/Strichtarn (BDU)";
		uniformClass="FP_Uniform_lith05opforstrich";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_LithOpforStrich.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_Strich: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP EGER Strichtarn (BDU)";
		uniformClass="FP_Uniform_egerstrich";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_Strichtarn.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_Strich_OPFOR: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP EGER Strichtarn (BDU)";
		uniformClass="FP_Uniform_egerstrich";
		author="FP Mod Team";
		side = 0;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_Strichtarn.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_StrichTTsMKK: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		side = 2;
		displayName="FP EGER Strichtarn/TTsMKK (BDU)";
		uniformClass="FP_Uniform_egerstrichttsmkk";
		author="FP Mod Team";
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_StrichTTsMKK.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_TTsMKK: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP RU TTsMKK (BDU)";
		uniformClass="FP_Uniform_ttsmkk";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_TTsMKK.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class rhs_afghanka_base;
	class FP_Rifleman_M88_TTsMKK: rhs_afghanka_base
	{
		_generalMacro="rhs_afghanka_base";
		scope=1;
		displayName="M88 (FP TTsMKK)";
		uniformClass="FP_Uniform_m88_TTsMKK";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_m88_vest_ttsmkk_co.paa",
			"FP_UniformsEasternEurope\SkinsUniform\FP_m88_pants_ttsmkk_co.paa"
		};
	};
	class FP_Rifleman_M88_TTsMKK_Mix: rhs_afghanka_base
	{
		_generalMacro="rhs_afghanka_base";
		scope=1;
		displayName="M88 (FP TTsMKK)";
		uniformClass="FP_Uniform_m88_TTsMKK_Mix";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_m88_vest_ttsmkk_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka01_grey_pant_co.paa"
		};
	};
	class FP_Rifleman_M88_Tochka: rhs_afghanka_base
	{
		_generalMacro="rhs_afghanka_base";
		scope=1;
		displayName="M88 (FP Tochka)";
		uniformClass="FP_Uniform_m88_Tochka";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_m88_vest_tochka_co.paa",
			"FP_UniformsEasternEurope\SkinsUniform\FP_m88_pants_tochka_co.paa"
		};
	};
	class FP_Rifleman_M88_Tochka_Mix: rhs_afghanka_base
	{
		_generalMacro="rhs_afghanka_base";
		scope=1;
		displayName="M88 (FP Tochka Mix)";
		uniformClass="FP_Uniform_m88_Tochka_Mix";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka01_grey_vest_co.paa",
			"FP_UniformsEasternEurope\SkinsUniform\FP_m88_pants_tochka_co.paa"
		};
	};
	class FP_Rifleman_M88_Czechrain: rhs_afghanka_base
	{
		_generalMacro="rhs_afghanka_base";
		scope=1;
		displayName="M88 (FP Czech Rain)";
		uniformClass="FP_Uniform_m88_Czechrain";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_m88_vest_czechrain_co.paa",
			"FP_UniformsEasternEurope\SkinsUniform\FP_m88_pants_czechrain_co.paa"
		};
	};
	class FP_Rifleman_M88_Czechrain_Mix: rhs_afghanka_base
	{
		_generalMacro="rhs_afghanka_base";
		scope=1;
		displayName="M88 (FP Czech Rain Mix)";
		uniformClass="FP_Uniform_m88_Czechrain_Mix";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_m88_vest_czechrain_co.paa",
			"FP_UniformsEasternEurope\SkinsUniform\FP_m88_pants_ttsmkk_co.paa"
		};
	};
	class FP_Rifleman_TTsMKKOlive: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP RU TTsMKK/Olive (BDU)";
		uniformClass="FP_Uniform_ttsmkkolive";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_TTsMKKOlive.paa"
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
	class U_O_OfficerUniform_ocamo;
	class FP_Uniform_LithOPFOR: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (M05 OPFOR/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_yug_oak_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_LithOPFOR";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_LithOPFORStrich: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (M05 OPFOR/Strichtarn/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_yug_oak_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_LithOPFORStrich";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Strich: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (Strichtarn/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_yug_oak_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Strich";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Strich_OPFOR: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (Strichtarn/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_yug_oak_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 0;
		scopeArsenal = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Strich_OPFOR";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_StrichTTsMKK: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (Strichtarn/TTsMKK/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_yug_oak_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_StrichTTsMKK";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_OAKYUG: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (Yugoslavian Oak/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_yug_oak_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_YugOAK";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_TTsMKK: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (TTsMKK/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_yug_oak_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_TTsMKK";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_afghanka;
	class FP_Uniform_M88_TTsMKK: rhs_uniform_afghanka
	{
		scope = 2;
		displayName="M88 (TTsMKK)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\uniform\rhs_uniform_afghanka_ca.paa";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M88_TTsMKK";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M88_TTsMKK_Mix: rhs_uniform_afghanka
	{
		scope = 1;
		displayName="M88 (TTsMKK Mix)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\uniform\rhs_uniform_afghanka_ca.paa";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M88_TTsMKK_Mix";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M88_Tochka: rhs_uniform_afghanka
	{
		scope = 2;
		displayName="M88 (Tochka)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\uniform\rhs_uniform_afghanka_ca.paa";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M88_Tochka";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M88_Tochka_Mix: rhs_uniform_afghanka
	{
		scope = 1;
		displayName="M88 (Tochka Mix)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\uniform\rhs_uniform_afghanka_ca.paa";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M88_Tochka_Mix";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M88_Czechrain: rhs_uniform_afghanka
	{
		scope = 2;
		displayName="M88 (Czech Rain)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\uniform\rhs_uniform_afghanka_ca.paa";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M88_Czechrain";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M88_Czechrain_Mix: rhs_uniform_afghanka
	{
		scope = 1;
		displayName="M88 (Czech Rain Mix)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\uniform\rhs_uniform_afghanka_ca.paa";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M88_Czechrain_Mix";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_TTsMKKOlive: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (TTsMKK/Olive/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_yug_oak_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_TTsMKKOlive";
			containerClass="Supply40";
			mass=40;
		};
	};
};
