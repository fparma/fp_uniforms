class CfgPatches
{
	class sim_extra_gear
	{
		units[]={};
		weapons[]=
		{
			"jungle_unif_od",
			"jungle_unif_od_roll",
			"jungle_unif_od_short",
			"jungle_unif_bl",
			"jungle_unif_bl_roll",
			"jungle_unif_bl_short",
			"jungle_unif_erdl",
			"jungle_unif_erdl_roll",
			"jungle_unif_erdl_short",
			"jungle_unif_tiger",
			"jungle_unif_tiger_roll",
			"jungle_unif_tiger_short",
			"M67_gear_rifleman",
			"M67_gear_rifleman_band",
			"M67_gear_pistol",
			"M67_gear_pistol_band",
			"M67_gear_MG",
			"M67_lite",
			"flak_rifleman",
			"flak_basic",
			"flak_pistol",
			"flak_MG"
		};
		magazines[]={};
		requiredVersion=1;
	};
};
class CfgVehicles
{
	class Civilian_F;
	class C_man_1: Civilian_F
	{
		class EventHandlers;
	};
	class jungle_unif_od: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_od";
		scope=1;
		displayName="Tropical combat uniform (OD)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_od";
		model="sim_extra_gear\jungle_uniform.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_co.paa",
		};
		headgearList[]={};
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_Euro",
			"NoGlasses"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"sim_extra_gear\tex\jungle_uniform.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class jungle_unif_od_roll: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_od_roll";
		scope=1;
		displayName="Tropical combat uniform rolled (OD)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_od_roll";
		model="sim_extra_gear\jungle_uniform_rolled.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_co.paa",
		};
		headgearList[]={};
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_Euro",
			"NoGlasses"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"sim_extra_gear\tex\jungle_uniform.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class jungle_unif_od_short: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_od_short";
		scope=1;
		displayName="Tropical combat uniform short (OD)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_od_short";
		model="sim_extra_gear\jungle_uniform_short.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_co.paa",
		};
		headgearList[]={};
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_Euro",
			"NoGlasses"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"sim_extra_gear\tex\jungle_uniform.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class jungle_unif_bl: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_bl";
		scope=1;
		displayName="Tropical combat uniform (Black)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_bl";
		model="sim_extra_gear\jungle_uniform.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_black.paa",
		};
		headgearList[]={};
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_Euro",
			"NoGlasses"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"sim_extra_gear\tex\jungle_uniform.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class jungle_unif_bl_roll: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_bl_roll";
		scope=1;
		displayName="Tropical combat uniform rolled (Black)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_bl_roll";
		model="sim_extra_gear\jungle_uniform_rolled.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_black.paa",
		};
		headgearList[]={};
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_Euro",
			"NoGlasses"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"sim_extra_gear\tex\jungle_uniform.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class jungle_unif_bl_short: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_bl_short";
		scope=1;
		displayName="Tropical combat uniform short (Black)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_bl_short";
		model="sim_extra_gear\jungle_uniform_short.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_black.paa",
		};
		headgearList[]={};
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_Euro",
			"NoGlasses"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"sim_extra_gear\tex\jungle_uniform.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class jungle_unif_erdl: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_erdl";
		scope=1;
		displayName="Tropical combat uniform (ERDL)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_erdl";
		model="sim_extra_gear\jungle_uniform.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_erdl.paa",
		};
		headgearList[]={};
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_Euro",
			"NoGlasses"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"sim_extra_gear\tex\jungle_uniform.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class jungle_unif_erdl_roll: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_erdl_roll";
		scope=1;
		displayName="Tropical combat uniform rolled (ERDL)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_erdl_roll";
		model="sim_extra_gear\jungle_uniform_rolled.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_erdl.paa",
		};
		headgearList[]={};
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_Euro",
			"NoGlasses"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"sim_extra_gear\tex\jungle_uniform.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class jungle_unif_erdl_short: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_erdl_short";
		scope=1;
		displayName="Tropical combat uniform short (ERDL)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_erdl_short";
		model="sim_extra_gear\jungle_uniform_short.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_erdl.paa",
		};
		headgearList[]={};
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_Euro",
			"NoGlasses"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"sim_extra_gear\tex\jungle_uniform.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class jungle_unif_tiger: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_tiger";
		scope=1;
		displayName="Tropical combat uniform (Tiger)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_tiger";
		model="sim_extra_gear\jungle_uniform.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_tiger.paa",
		};
		headgearList[]={};
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_Euro",
			"NoGlasses"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"sim_extra_gear\tex\jungle_uniform.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class jungle_unif_tiger_roll: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_tiger_roll";
		scope=1;
		displayName="Tropical combat uniform rolled (Tiger)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_tiger_roll";
		model="sim_extra_gear\jungle_uniform_rolled.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_tiger.paa",
		};
		headgearList[]={};
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_Euro",
			"NoGlasses"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"sim_extra_gear\tex\jungle_uniform.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class jungle_unif_tiger_short: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_tiger_short";
		scope=1;
		displayName="Tropical combat uniform short (Tiger)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_tiger_short";
		model="sim_extra_gear\jungle_uniform_short.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_tiger.paa",
		};
		headgearList[]={};
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_Euro",
			"NoGlasses"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"sim_extra_gear\tex\jungle_uniform.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
};
class CfgWeapons
{
	class U_C_Poloshirt_blue;
	class UniformItem;
	class Vest_Camo_Base;
	class VestItem;
	class jungle_unif_od: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform (OD)";
		picture="\sim_extra_gear\icons\uniforms\ico_long_od.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_co.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_od";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_od_roll: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform rolled (OD)";
		picture="\sim_extra_gear\icons\uniforms\ico_roll_od.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_co.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_od_roll";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_od_short: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform short (OD)";
		picture="\sim_extra_gear\icons\uniforms\ico_short_od.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_co.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_od_short";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_bl: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform (Black)";
		picture="\sim_extra_gear\icons\uniforms\ico_long_bl.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_black.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_bl";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_bl_roll: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform rolled (Black)";
		picture="\sim_extra_gear\icons\uniforms\ico_roll_bl.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_black.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_bl_roll";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_bl_short: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform short (Black)";
		picture="\sim_extra_gear\icons\uniforms\ico_short_bl.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_black.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_bl_short";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_erdl: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform (ERDL)";
		picture="\sim_extra_gear\icons\uniforms\ico_long_erdl.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_erdl.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_erdl";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_erdl_roll: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform rolled (ERDL)";
		picture="\sim_extra_gear\icons\uniforms\ico_roll_erdl.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_erdl.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_erdl_roll";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_erdl_short: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform short (ERDL)";
		picture="\sim_extra_gear\icons\uniforms\ico_short_erdl.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_erdl.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_erdl_short";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_tiger: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform (Tiger)";
		picture="\sim_extra_gear\icons\uniforms\ico_long_tiger.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_tiger.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_tiger";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_tiger_roll: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform rolled (Tiger)";
		picture="\sim_extra_gear\icons\uniforms\ico_roll_tiger.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_tiger.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_tiger_roll";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_tiger_short: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform short (Tiger)";
		picture="\sim_extra_gear\icons\uniforms\ico_short_tiger.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_tiger.paa",
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_tiger_short";
			containerClass="Supply40";
			mass=40;
		};
	};
	class M67_gear_rifleman: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="M67_gear_rifleman";
		scope=2;
		displayName="M1967 Web Gear (Rifleman)";
		picture="\sim_extra_gear\icons\vests\web_rifleman.paa";
		model="\sim_extra_gear\M67_rifleman.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\M67_rifleman.p3d";
			containerClass="Supply120";
			mass=10;
		};
	};
	class M67_gear_pistol: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="M67_gear_pistol";
		scope=2;
		displayName="M1967 Web Gear (SL)";
		picture="\sim_extra_gear\icons\vests\web_SL.paa";
		model="\sim_extra_gear\M67_pistol.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\M67_pistol.p3d";
			containerClass="Supply120";
			mass=10;
		};
	};
	class M67_gear_rifleman_band: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="M67_gear_rifleman_band";
		scope=2;
		displayName="M1967 Web Gear Bandoleer (Rifleman)";
		picture="\sim_extra_gear\icons\vests\web_rifleman_band.paa";
		model="\sim_extra_gear\M67_rifleman_band.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\M67_rifleman_band.p3d";
			containerClass="Supply160";
			mass=10;
		};
	};
	class M67_gear_pistol_band: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="M67_gear_pistol_band";
		scope=2;
		displayName="M1967 Web Gear Bandoleer (SL)";
		picture="\sim_extra_gear\icons\vests\web_SL_band.paa";
		model="\sim_extra_gear\M67_pistol_band.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\M67_pistol_band.p3d";
			containerClass="Supply160";
			mass=10;
		};
	};
	class M67_gear_MG: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="M67_gear_MG";
		scope=2;
		displayName="M1967 Web Gear (MG)";
		picture="\sim_extra_gear\icons\vests\web_MG.paa";
		model="\sim_extra_gear\M67_MG.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\M67_MG.p3d";
			containerClass="Supply180";
			mass=10;
		};
	};
	class M67_lite: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="M67_lite";
		scope=2;
		displayName="M1967 Belt Holster";
		picture="\sim_extra_gear\icons\vests\web_holster.paa";
		model="\sim_extra_gear\M67_lite.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\M67_lite.p3d";
			containerClass="Supply60";
			mass=10;
		};
	};
	class flak_rifleman: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="flak_rifleman";
		scope=2;
		displayName="M69 Flak Vest (Rifleman)";
		picture="\sim_extra_gear\icons\vests\flak_rifleman.paa";
		model="\sim_extra_gear\flak_rifleman.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\flak_rifleman.p3d";
			containerClass="Supply120";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.3;
					explosionShielding=0.7;
				};
			};
		};
	};
	class flak_basic: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="flak_basic";
		scope=2;
		displayName="M69 Flak Vest";
		picture="\sim_extra_gear\icons\vests\flak_basic.paa";
		model="\sim_extra_gear\flak_basic.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\flak_basic.p3d";
			containerClass="Supply60";
			mass=30;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.3;
					explosionShielding=0.7;
				};
			};
		};
	};
	class flak_pistol: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="flak_pistol";
		scope=2;
		displayName="M69 Flak Vest (SL)";
		picture="\sim_extra_gear\icons\vests\flak_pistol.paa";
		model="\sim_extra_gear\flak_pistol.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\flak_pistol.p3d";
			containerClass="Supply120";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.3;
					explosionShielding=0.7;
				};
			};
		};
	};
	class flak_MG: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="flak_MG";
		scope=2;
		displayName="M69 Flak Vest (MG)";
		picture="\sim_extra_gear\icons\vests\flak_MG.paa";
		model="\sim_extra_gear\flak_MG.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\flak_MG.p3d";
			containerClass="Supply140";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=4;
					passThrough=0.3;
					explosionShielding=0.7;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.3;
					explosionShielding=0.7;
				};
			};
		};
	};
};
class CfgGlasses
{
	class None;
	class gluv_AAF: None
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="gluv_AAF";
		displayname="Gloves (AAF)";
		model="\sim_extra_gear\gloves_AAF";
		picture="\sim_extra_gear\icons\gloves.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\heads\glasses\data\spectacles_brown_ca.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			5,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			10,
			"G_HAF_default",
			10,
			"G_CIVIL_female",
			10,
			"G_CIVIL_male",
			20
		};
		mass=2;
	};
};