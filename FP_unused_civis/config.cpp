class CfgPatches
{
	class UNC_Characters_F
	{
		author="$STR_A3_Bohemia_Interactive";
		name="Arma 3 Unlocked Civis";
		url="https://www.arma3.com";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"UNC_man_hood_1",
			"UNC_man_hood_2",
			"UNC_man_hood_3",
			"UNC_man_hood_4",
			"UNC_man_vest_1",
			"UNC_man_vest_2",
			"UNC_man_vest_3",
			"UNC_man_vest_4",
			"UNC_man_worker_1",
			"UNC_man_worker_2",
			"UNC_man_worker_3",
			"UNC_man_worker_4",
			"UNC_man_worker_5",
			"UNC_man_worker_6",
			"UNC_man_param"
		};
		weapons[]=
		{
			"UNC_C_Hoodie_1",
			"UNC_C_Hoodie_2",
			"UNC_C_Hoodie_3",
			"UNC_C_Hoodie_4",
			"UNC_C_Vest_1",
			"UNC_C_Vest_2",
			"UNC_C_Vest_3",
			"UNC_C_Vest_4",
			"UNC_C_Worker_1",
			"UNC_C_Worker_2",
			"UNC_C_Worker_3",
			"UNC_C_Worker_4",
			"UNC_C_Worker_5",
			"UNC_C_Worker_6",
			"UNC_C_Param"
			
		};
	};
};
class CfgVehicles
{
	class C_man_1;
	class UNC_man_hood_1: C_man_1
	{
		author="$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_civilian_s"
				};
				speechPlural[]=
				{
					"veh_infantry_civilian_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_civilian_s";
		textPlural="$STR_A3_nameSound_veh_infantry_civilian_p";
		nameSound="veh_infantry_civilian_s";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_1_F.jpg";
		_generalMacro="UNC_man_hood_1";
		scope=2;
		model="\A3\characters_F\civil\c_citizen3";
		modelSides[]={3};
		uniformClass="UNC_C_Hoodie_1";
		displayName="Civilian hoodie";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth1_co.paa",
			"\A3\Characters_F\Civil\Data\c_cloth4_co.paa"
		};
	};
	class UNC_man_hood_2: UNC_man_hood_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_2_F.jpg";
		_generalMacro="UNC_man_hood_2";
		uniformClass="UNC_C_Hoodie_2";
		displayName="Civilian hoodie 2";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_co.paa",
			"\A3\Characters_F\Civil\Data\c_cloth4_kabeiroi_co.paa"
		};
	};
	class UNC_man_hood_3: UNC_man_hood_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_2_F.jpg";
		_generalMacro="UNC_man_hood_3";
		uniformClass="UNC_C_Hoodie_3";
		displayName="Civilian hoodie 3";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth1_v2_co.paa",
			"\A3\Characters_F\Civil\Data\c_cloth4_v2_co.paa"
		};
	};
	class UNC_man_hood_4: UNC_man_hood_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_2_F.jpg";
		_generalMacro="UNC_man_hood_4";
		uniformClass="UNC_C_Hoodie_4";
		displayName="Civilian hoodie 4";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth1_v3_co.paa",
			"\A3\Characters_F\Civil\Data\c_cloth4_v3_co.paa"
		};
	};
	class UNC_man_vest_1: UNC_man_hood_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_2_F.jpg";
		_generalMacro="UNC_man_vest_1";
		model="\A3\characters_F\civil\c_citizen4";
		uniformClass="UNC_C_Vest_1";
		displayName="Civilian vest 1";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth2_co.paa",
			"\A3\Characters_F\Civil\Data\c_cloth4_co.paa"
		};
	};
	class UNC_man_vest_2: UNC_man_hood_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_2_F.jpg";
		_generalMacro="UNC_man_vest_2";
		model="\A3\characters_F\civil\c_citizen4";
		uniformClass="UNC_C_Vest_2";
		displayName="Civilian vest 1";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth2_kabeiroi_co.paa",
			"\A3\Characters_F\Civil\Data\c_cloth4_kabeiroi_co.paa"
		};
	};
	class UNC_man_vest_3: UNC_man_hood_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_2_F.jpg";
		_generalMacro="UNC_man_vest_3";
		model="\A3\characters_F\civil\c_citizen4";
		uniformClass="UNC_C_Vest_3";
		displayName="Civilian vest 1";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth2_v2_co.paa",
			"\A3\Characters_F\Civil\Data\c_cloth4_v2_co.paa"
		};
	};
	class UNC_man_vest_4: UNC_man_hood_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_2_F.jpg";
		_generalMacro="UNC_man_vest_4";
		model="\A3\characters_F\civil\c_citizen4";
		uniformClass="UNC_C_Vest_4";
		displayName="Civilian vest 1";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth2_v3_co.paa",
			"\A3\Characters_F\Civil\Data\c_cloth4_v3_co.paa"
		};
	};
	class UNC_man_worker_1: UNC_man_hood_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_2_F.jpg";
		_generalMacro="UNC_man_worker_1";
		model="\A3\characters_F\civil\c_worker";
		uniformClass="UNC_C_Worker_1";
		displayName="Civilian worker 1";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth1_co.paa",
			"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_2_co.paa"
		};
	};
	class UNC_man_worker_2: UNC_man_hood_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_2_F.jpg";
		_generalMacro="UNC_man_worker_2";
		model="\A3\characters_F\civil\c_worker";
		uniformClass="UNC_C_Worker_2";
		displayName="Civilian worker 2";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Gamma\Civil\Data\c_cloth1_black.paa",
			"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"
		};
	};
	class UNC_man_worker_3: UNC_man_hood_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_2_F.jpg";
		_generalMacro="UNC_man_worker_3";
		model="\A3\characters_F\civil\c_worker";
		uniformClass="UNC_C_Worker_3";
		displayName="Civilian worker 3";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Gamma\Civil\Data\c_cloth1_brown.paa",
			"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_3_co.paa"
		};
	};
	class UNC_man_worker_4: UNC_man_hood_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_2_F.jpg";
		_generalMacro="UNC_man_worker_4";
		model="\A3\characters_F\civil\c_worker";
		uniformClass="UNC_C_Worker_4";
		displayName="Civilian worker 4";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_co.paa",
			"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"
		};
	};
	class UNC_man_worker_5: UNC_man_hood_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_2_F.jpg";
		_generalMacro="UNC_man_worker_5";
		model="\A3\characters_F\civil\c_worker";
		uniformClass="UNC_C_Worker_5";
		displayName="Civilian worker 5";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth1_v2_co.paa",
			"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_3_co.paa"
		};
	};
	class UNC_man_worker_6: UNC_man_hood_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_2_F.jpg";
		_generalMacro="UNC_man_worker_6";
		model="\A3\characters_F\civil\c_worker";
		uniformClass="UNC_C_Worker_6";
		displayName="Civilian worker 6";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth1_v3_co.paa",
			"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_2_co.paa"
		};
	};
	class UNC_man_param: C_man_1
	{
		author="$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_civilian_s"
				};
				speechPlural[]=
				{
					"veh_infantry_civilian_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_civilian_s";
		textPlural="$STR_A3_nameSound_veh_infantry_civilian_p";
		nameSound="veh_infantry_civilian_s";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_1_F.jpg";
		_generalMacro="UNC_man_param";
		scope=2;
		model="\A3\characters_F\OPFOR\o_paramilitary";
		modelSides[]={3};
		uniformClass="UNC_C_Param";
		displayName="Paramilitary";
		hiddenSelections[]=
		{
			"camo"
		};
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class UNC_C_Hoodie_1: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Civilian hoodie 1";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth1_co.paa",
			"\A3\Characters_F\Civil\Data\c_cloth4_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="UNC_man_hood_1";
			containerClass="Supply20";
			mass=40;
		};
	};
	class UNC_C_Hoodie_2: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Civilian hoodie 2";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_co.paa",
			"\A3\Characters_F\Civil\Data\c_cloth4_kabeiroi_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="UNC_man_hood_2";
			containerClass="Supply20";
			mass=40;
		};
	};
	class UNC_C_Hoodie_3: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Civilian hoodie 3";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth1_v2_co.paa",
			"\A3\Characters_F\Civil\Data\c_cloth4_v2_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="UNC_man_hood_3";
			containerClass="Supply20";
			mass=40;
		};
	};
	class UNC_C_Hoodie_4: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Civilian hoodie 4";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth1_v3_co.paa",
			"\A3\Characters_F\Civil\Data\c_cloth4_v3_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="UNC_man_hood_4";
			containerClass="Supply20";
			mass=40;
		};
	};
	class UNC_C_Vest_1: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Civilian vest 1";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="UNC_man_vest_1";
			containerClass="Supply20";
			mass=40;
		};
	};
	class UNC_C_Vest_2: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Civilian vest 2";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="UNC_man_vest_2";
			containerClass="Supply20";
			mass=40;
		};
	};
	class UNC_C_Vest_3: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Civilian vest 3";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="UNC_man_vest_3";
			containerClass="Supply20";
			mass=40;
		};
	};
	class UNC_C_Vest_4: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Civilian vest 4";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="UNC_man_vest_4";
			containerClass="Supply20";
			mass=40;
		};
	};
	class UNC_C_Worker_1: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Civilian worker 1";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="UNC_man_worker_1";
			containerClass="Supply20";
			mass=40;
		};
	};
	class UNC_C_Worker_2: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Civilian worker 2";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="UNC_man_worker_2";
			containerClass="Supply20";
			mass=40;
		};
	};
	class UNC_C_Worker_3: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Civilian worker 3";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="UNC_man_worker_3";
			containerClass="Supply20";
			mass=40;
		};
	};
	class UNC_C_Worker_4: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Civilian worker 4";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="UNC_man_worker_4";
			containerClass="Supply20";
			mass=40;
		};
	};
	class UNC_C_Worker_5: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Civilian worker 5";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="UNC_man_worker_5";
			containerClass="Supply20";
			mass=40;
		};
	};
	class UNC_C_Worker_6: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Civilian worker 6";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="UNC_man_worker_6";
			containerClass="Supply20";
			mass=40;
		};
	};
	class UNC_C_Param: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Paramilitary";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="UNC_man_param";
			containerClass="Supply20";
			mass=40;
		};
	};
};
