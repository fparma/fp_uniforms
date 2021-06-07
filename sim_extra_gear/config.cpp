class CfgPatches
{
	class sim_extra_gear
	{
		requiredAddons[]=
		{
			"fpa_main",
			"A3_Characters_F",
			"rhsusf_infantry"
		};
		units[]={};
		weapons[]=
		{
			"jungle_unif_od",
			"jungle_unif_od_roll",
			"jungle_unif_od_short",
			"jungle_unif_M81",
			"jungle_unif_M81_roll",
			"jungle_unif_M81_short",
			"jungle_unif_bl",
			"jungle_unif_bl_roll",
			"jungle_unif_bl_short",
			"jungle_unif_erdl",
			"jungle_unif_erdl_roll",
			"jungle_unif_erdl_short",
			"jungle_unif_tiger",
			"jungle_unif_tiger_roll",
			"jungle_unif_tiger_short",
			"jungle_unif_urban",
			"jungle_unif_urban_roll",
			"jungle_unif_urban_short",
			"milit_unif_tan",
			"milit_jacket_tan",
			"milit_unif_od",
			"milit_jacket_od",
			"milit_unif_black",
			"milit_jacket_black",
			"milit_unif_lizard",
			"milit_jacket_lizard",
			"milit_unif_desert",
			"milit_jacket_desert",
			"milit_unif_cuban",
			"milit_unif_portg",
			"milit_unif_duck",
			"milit_jacket_dpm",
			"milit_jacket_denison",
			"rhod_unif_short",
			"M67_gear_rifleman",
			"M67_gear_rifleman_band",
			"M67_gear_pistol",
			"M67_gear_pistol_band",
			"M67_gear_MG",
			"M67_lite",
			"flak_rifleman",
			"flak_basic",
			"flak_pistol",
			"flak_MG",
			"flak_lite",
			"sciv_tshirtjeans1",
			"sciv_tshirtjeans2",
			"sciv_tshirtjeans3",
			"sciv_tshirtjeans4",
			"sciv_buttonshirt1",
			"sciv_buttonshirt2",
			"sciv_buttonshirt3",
			"sciv_buttonshirt4",
			"sciv_tropicshirt1",
			"sciv_tropicshirt2",
			"sciv_tropicshirt3",
			"sciv_tropicshirt4",
			"sciv_cargotshirt1",
			"sciv_cargotshirt2",
			"sciv_cargotshirt3",
			"sciv_cargotshirt4",
			"PMC_garb_1",
			"PMC_garb_2",
			"PMC_garb_3",
			"PMC_garb_4",
			"PMC_garb_5",
			"58_pat_web",
			"58_pat_flak",
			"chestrig_chic",
			"chestrig_SOG",
			"chestrig_RHS",
			"IBA_rifle_m81",
			"IBA_MG_m81",
			"IBA_blank_m81",
			"IBA_alice_m81",
			"IBA_rifle_black",
			"IBA_MG_black",
			"IBA_blank_black",
			"IBA_alice_black",
			"IBA_rifle_usmc",
			"IBA_MG_usmc",
			"IBA_blank_usmc",
			"IBA_alice_usmc",
			"IBA_rifle_brushd",
			"IBA_alice_brushd",
			"IBA_MG_brushd",
			"IBA_blank_brushd",
			"IBA_rifle_brushwd",
			"IBA_alice_brushwd",
			"IBA_MG_brushwd",
			"IBA_blank_brushwd",
			"IBA_rifle_dcu",
			"IBA_alice_dcu",
			"IBA_MG_dcu",
			"IBA_blank_dcu",
			"IBA_rifle_ERDL",
			"IBA_alice_ERDL",
			"IBA_MG_ERDL",
			"IBA_blank_ERDL",
			"NVA_unif",
			"NVA_unif_VC",
			"NVA_unif_tan",
			"NVA_helmet",
			"NVA_helmet_tan",
			"viet_strawhat",
			"patrolcap_OD",
			"patrolcap_tan",
			"patrolcap_lizard",
			"patrolcap_desert",
			"patrolcap_cuban",
			"patrolcap_portg",
			"patrolcap_duck",
			"patrolcap_black",
			"M2_helmet_net",
			"M38_tanker_helmet",
			"ssh40_helmet",
			"unif_sov_m69",
			"unif_chi_type65",
			"unif_chi_type65_kpa",
			"cap_chi_type65",
			"vest_sov_webgear",
			"vest_sov_chestrig",
			"vest_sov_holster",
			"vest_SADF_pat83",
			"vest_chicom_sks",
			"unif_PCU_jacket",
			"unif_PCU_jacket_arctic",
			"unif_PCU_jacket_wood",
			"FP_rhs_uniform_cossack_M43"
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
			"sim_extra_gear\tex\jungle_uniform_co.paa"
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
			"sim_extra_gear\tex\jungle_uniform_co.paa"
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
			"sim_extra_gear\tex\jungle_uniform_co.paa"
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
	class jungle_unif_M81: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_M81";
		scope=1;
		displayName="Tropical combat uniform (M81)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_M81";
		model="sim_extra_gear\jungle_uniform.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_m81.paa"
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
	class jungle_unif_M81_roll: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_M81_roll";
		scope=1;
		displayName="Tropical combat uniform rolled (M81)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_M81_roll";
		model="sim_extra_gear\jungle_uniform_rolled.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_m81.paa"
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
	class jungle_unif_M81_short: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_M81_short";
		scope=1;
		displayName="Tropical combat uniform short (M81)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_M81_short";
		model="sim_extra_gear\jungle_uniform_short.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_m81.paa"
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
			"sim_extra_gear\tex\jungle_uniform_black.paa"
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
			"sim_extra_gear\tex\jungle_uniform_black.paa"
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
			"sim_extra_gear\tex\jungle_uniform_black.paa"
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
			"sim_extra_gear\tex\jungle_uniform_erdl.paa"
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
			"sim_extra_gear\tex\jungle_uniform_erdl.paa"
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
			"sim_extra_gear\tex\jungle_uniform_erdl.paa"
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
			"sim_extra_gear\tex\jungle_uniform_tiger.paa"
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
			"sim_extra_gear\tex\jungle_uniform_tiger.paa"
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
			"sim_extra_gear\tex\jungle_uniform_tiger.paa"
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
	class jungle_unif_urban: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_urban";
		scope=1;
		displayName="Tropical combat uniform (Urban)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_urban";
		model="sim_extra_gear\jungle_uniform.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_urban.paa"
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
	class jungle_unif_urban_roll: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_urban_roll";
		scope=1;
		displayName="Tropical combat uniform rolled (Urban)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_urban_roll";
		model="sim_extra_gear\jungle_uniform_rolled.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_urban.paa"
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
	class jungle_unif_urban_short: C_man_1
	{
		author="simkas";
		_generalMacro="jungle_unif_urban_short";
		scope=1;
		displayName="Tropical combat uniform short (Urban)";
		nakedUniform="U_BasicBody";
		uniformClass="jungle_unif_urban_short";
		model="sim_extra_gear\jungle_uniform_short.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_urban.paa"
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
	class milit_jacket_tan: C_man_1
	{
		author="simkas";
		_generalMacro="milit_jacket_tan";
		scope=1;
		displayName="Militia field jacket (tan)";
		nakedUniform="U_BasicBody";
		uniformClass="milit_jacket_tan";
		model="sim_extra_gear\militia_jacket.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_co.paa",
			"sim_extra_gear\tex\fieldjacket_co.paa"
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
				"sim_extra_gear\tex\militia.rvmat",
				"sim_extra_gear\tex\fieldjacket.rvmat"
			};
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class milit_jacket_lizard: milit_jacket_tan
	{
		_generalMacro="milit_jacket_lizard";
		displayName="Militia field jacket (french lizard)";
		uniformClass="milit_jacket_lizard";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_leezard.paa",
			"sim_extra_gear\tex\fieldjacket_leezard.paa"
		};
	};
	class milit_jacket_od: milit_jacket_tan
	{
		_generalMacro="milit_jacket_od";
		displayName="Militia field jacket (OD)";
		uniformClass="milit_jacket_od";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_olive.paa",
			"sim_extra_gear\tex\fieldjacket_olive.paa"
		};
	};
	class milit_jacket_black: milit_jacket_tan
	{
		_generalMacro="milit_jacket_black";
		displayName="Militia field jacket (black)";
		uniformClass="milit_jacket_black";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_black.paa",
			"sim_extra_gear\tex\fieldjacket_black.paa"
		};
	};
	class milit_jacket_desert: milit_jacket_tan
	{
		_generalMacro="milit_jacket_desert";
		displayName="Militia field jacket (desert camo)";
		uniformClass="milit_jacket_desert";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_desert.paa",
			"sim_extra_gear\tex\fieldjacket_brown.paa"
		};
	};
	class milit_jacket_dpm: milit_jacket_tan
	{
		_generalMacro="milit_jacket_dpm";
		displayName="Militia field jacket (DPM)";
		uniformClass="milit_jacket_dpm";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_olive.paa",
			"sim_extra_gear\tex\fieldjacket_dpm.paa"
		};
	};
	class milit_jacket_denison: milit_jacket_tan
	{
		_generalMacro="milit_jacket_denison";
		displayName="Militia field jacket (denison smock)";
		uniformClass="milit_jacket_denison";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_olive.paa",
			"sim_extra_gear\tex\fieldjacket_denison.paa"
		};
	};
	class milit_unif_tan: C_man_1
	{
		author="simkas";
		_generalMacro="milit_unif_tan";
		scope=1;
		displayName="Militia uniform (tan)";
		nakedUniform="U_BasicBody";
		uniformClass="milit_unif_tan";
		model="sim_extra_gear\militia_unif.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_co.paa"
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
				"sim_extra_gear\tex\militia.rvmat",
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
	class milit_unif_od: milit_unif_tan
	{
		_generalMacro="milit_unif_od";
		displayName="Militia uniform (OD)";
		uniformClass="milit_unif_od";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_olive.paa"
		};
	};
	class milit_unif_black: milit_unif_tan
	{
		_generalMacro="milit_unif_black";
		displayName="Militia uniform (black)";
		uniformClass="milit_unif_black";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_black.paa"
		};
	};
	class milit_unif_lizard: milit_unif_tan
	{
		_generalMacro="milit_unif_lizard";
		displayName="Militia uniform (french lizard)";
		uniformClass="milit_unif_lizard";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_leezard.paa"
		};
	};
	class milit_unif_desert: milit_unif_tan
	{
		_generalMacro="milit_unif_desert";
		displayName="Militia uniform (desert camo)";
		uniformClass="milit_unif_desert";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_desert.paa"
		};
	};
	class milit_unif_cuban: milit_unif_tan
	{
		_generalMacro="milit_unif_cuban";
		displayName="Militia uniform (cuban lizard)";
		uniformClass="milit_unif_cuban";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_cuban.paa"
		};
	};
	class milit_unif_portg: milit_unif_tan
	{
		_generalMacro="milit_unif_portg";
		displayName="Militia uniform (portuguese lizard)";
		uniformClass="milit_unif_portg";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_portg.paa"
		};
	};
	class milit_unif_duck: milit_unif_tan
	{
		_generalMacro="milit_unif_duck";
		displayName="Militia uniform (duck hunter)";
		uniformClass="milit_unif_duck";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_duck.paa"
		};
	};
	class rhod_unif_short: C_man_1
	{
		author="simkas";
		_generalMacro="rhod_unif_short";
		scope=1;
		displayName="Rhodesian army uniform";
		nakedUniform="U_BasicBody";
		uniformClass="rhod_unif_short";
		model="sim_extra_gear\rhod_uniform.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\rhod_uniform_co.paa"
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
				"sim_extra_gear\tex\rhod_uniform.rvmat",
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
	class sciv_tshirtjeans1: C_man_1
	{
		author="simkas";
		_generalMacro="sciv_tshirtjeans1";
		scope=1;
		displayName="Civilian T-shirt and Jeans 1";
		nakedUniform="U_BasicBody";
		uniformClass="sciv_tshirtjeans1";
		model="sim_extra_gear\tshirt_jeans.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tshirt_co.paa",
			"sim_extra_gear\tex\jeans_co.paa"
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
	class sciv_tshirtjeans2: sciv_tshirtjeans1
	{
		_generalMacro="sciv_tshirtjeans2";
		displayName="Civilian T-shirt and Jeans 2";
		uniformClass="sciv_tshirtjeans2";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tshirt_black.paa",
			"sim_extra_gear\tex\jeans_dark.paa"
		};
	};
	class sciv_tshirtjeans3: sciv_tshirtjeans1
	{
		_generalMacro="sciv_tshirtjeans3";
		displayName="Civilian T-shirt and Jeans 3";
		uniformClass="sciv_tshirtjeans3";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tshirt_blue.paa",
			"sim_extra_gear\tex\jeans_black.paa"
		};
	};
	class sciv_tshirtjeans4: sciv_tshirtjeans1
	{
		_generalMacro="sciv_tshirtjeans4";
		displayName="Civilian T-shirt and Jeans 4";
		uniformClass="sciv_tshirtjeans4";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tshirt_red.paa",
			"sim_extra_gear\tex\jeans_grey.paa"
		};
	};
	class PMC_garb_1: C_man_1
	{
		author="simkas, Bohemia";
		_generalMacro="PMC_garb_1";
		scope=1;
		displayName="PMC Garb 1";
		nakedUniform="U_BasicBody";
		uniformClass="PMC_garb_1";
		model="sim_extra_gear\PMC_garb.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gracenko_1_co.paa"
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
				"sim_extra_gear\tex\gracenko.rvmat",
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
	class PMC_garb_2: PMC_garb_1
	{
		_generalMacro="PMC_garb_2";
		displayName="PMC Garb 2";
		uniformClass="PMC_garb_2";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gracenko_2_co.paa"
		};
	};
	class PMC_garb_3: PMC_garb_1
	{
		_generalMacro="PMC_garb_3";
		displayName="PMC Garb 3";
		uniformClass="PMC_garb_3";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gracenko_3_co.paa"
		};
	};
	class PMC_garb_4: PMC_garb_1
	{
		_generalMacro="PMC_garb_4";
		displayName="PMC Garb 4";
		uniformClass="PMC_garb_4";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gracenko_4_co.paa"
		};
	};
	class PMC_garb_5: PMC_garb_1
	{
		_generalMacro="PMC_garb_5";
		displayName="PMC Garb 5";
		uniformClass="PMC_garb_5";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gracenko_5_co.paa"
		};
	};
	class sciv_buttonshirt1: C_man_1
	{
		author="simkas";
		_generalMacro="sciv_buttonshirt1";
		scope=1;
		displayName="Civilian Button Shirt 1";
		nakedUniform="U_BasicBody";
		uniformClass="sciv_buttonshirt1";
		model="sim_extra_gear\button_shirt.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\longsleeve_co.paa",
			"sim_extra_gear\tex\longpants_blue.paa"
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
	class sciv_buttonshirt2: sciv_buttonshirt1
	{
		_generalMacro="sciv_buttonshirt2";
		displayName="Civilian Button Shirt 2";
		uniformClass="sciv_buttonshirt2";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\longsleeve_blue.paa",
			"sim_extra_gear\tex\longpants_co.paa"
		};
	};
	class sciv_buttonshirt3: sciv_buttonshirt1
	{
		_generalMacro="sciv_buttonshirt3";
		displayName="Civilian Button Shirt 3";
		uniformClass="sciv_buttonshirt3";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\longsleeve_black.paa",
			"sim_extra_gear\tex\longpants_grey.paa"
		};
	};
	class sciv_buttonshirt4: sciv_buttonshirt1
	{
		_generalMacro="sciv_buttonshirt4";
		displayName="Civilian Button Shirt 4";
		uniformClass="sciv_buttonshirt4";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\longsleeve_plaid.paa",
			"sim_extra_gear\tex\longpants_jeans.paa"
		};
	};
	class sciv_tropicshirt1: C_man_1
	{
		author="simkas";
		_generalMacro="sciv_tropicshirt1";
		scope=1;
		displayName="Civilian Tropical Shirt 1";
		nakedUniform="U_BasicBody";
		uniformClass="sciv_tropicshirt1";
		model="sim_extra_gear\tropic_shirt.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tropshirt_co.paa",
			"sim_extra_gear\tex\chinos_co.paa"
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
	class sciv_tropicshirt2: sciv_tropicshirt1
	{
		_generalMacro="sciv_tropicshirt2";
		displayName="Civilian Tropical Shirt 2";
		uniformClass="sciv_tropicshirt2";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tropshirt_white.paa",
			"sim_extra_gear\tex\chinos_dark.paa"
		};
	};
	class sciv_tropicshirt3: sciv_tropicshirt1
	{
		_generalMacro="sciv_tropicshirt3";
		displayName="Civilian Tropical Shirt 3";
		uniformClass="sciv_tropicshirt3";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tropshirt_red.paa",
			"sim_extra_gear\tex\chinos_brown.paa"
		};
	};
	class sciv_tropicshirt4: sciv_tropicshirt1
	{
		_generalMacro="sciv_tropicshirt4";
		displayName="Civilian Tropical Shirt 4";
		uniformClass="sciv_tropicshirt4";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tropshirt_floral.paa",
			"sim_extra_gear\tex\chinos_cream.paa"
		};
	};
	class sciv_cargotshirt1: C_man_1
	{
		author="simkas";
		_generalMacro="sciv_cargotshirt1";
		scope=1;
		displayName="Civilian T-shirt & Cargo pants 1";
		nakedUniform="U_BasicBody";
		uniformClass="sciv_cargotshirt1";
		model="sim_extra_gear\cargo_tshirt.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\cargo_tshirt_blue.paa"
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
	class sciv_cargotshirt2: sciv_cargotshirt1
	{
		_generalMacro="sciv_cargotshirt2";
		displayName="Civilian T-shirt & Cargo pants 2";
		uniformClass="sciv_cargotshirt2";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\cargo_tshirt_black.paa"
		};
	};
	class sciv_cargotshirt3: sciv_cargotshirt1
	{
		_generalMacro="sciv_cargotshirt3";
		displayName="Civilian T-shirt & Cargo pants 3";
		uniformClass="sciv_cargotshirt3";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\cargo_tshirt_camo.paa"
		};
	};
	class sciv_cargotshirt4: sciv_cargotshirt1
	{
		_generalMacro="sciv_cargotshirt4";
		displayName="Civilian T-shirt & Cargo pants 4";
		uniformClass="sciv_cargotshirt4";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\cargo_tshirt_olive.paa"
		};
	};
	class NVA_unif: C_man_1
	{
		author="simkas, Antimatter Games";
		_generalMacro="NVA_unif";
		scope=1;
		displayName="North Vietnamese Uniform";
		nakedUniform="U_BasicBody";
		uniformClass="NVA_unif";
		model="sim_extra_gear\NVA_uniform.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\nva_uniform_co.paa"
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
				"sim_extra_gear\tex\nva_uniform.rvmat",
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
	class NVA_unif_VC: NVA_unif
	{
		_generalMacro="NVA_unif_VC";
		displayName="North Vietnamese Uniform (Viet Cong)";
		uniformClass="NVA_unif_VC";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\nva_unif_VC.paa"
		};
	};
	class NVA_unif_tan: NVA_unif
	{
		_generalMacro="NVA_unif_tan";
		displayName="North Vietnamese Uniform (Tan)";
		uniformClass="NVA_unif_tan";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\NVA_unif_tan.paa"
		};
	};
	class unif_sov_m69: C_man_1
	{
		author="simkas";
		_generalMacro="unif_sov_m69";
		scope=1;
		displayName="Soviet M69 Uniform";
		nakedUniform="U_BasicBody";
		uniformClass="unif_sov_m69";
		model="sim_extra_gear\sov_m69.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\sov_m69_co.paa"
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
				"sim_extra_gear\tex\sov_m69.rvmat",
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
	class unif_chi_type65: C_man_1
	{
		author="simkas";
		_generalMacro="unif_chi_type65";
		scope=1;
		displayName="Chinese Type 65 Uniform";
		nakedUniform="U_BasicBody";
		uniformClass="unif_chi_type65";
		model="sim_extra_gear\chi_type65.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\type65_co.paa"
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
				"sim_extra_gear\tex\type65.rvmat",
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
	class unif_chi_type65_kpa: unif_chi_type65
	{
		author="simkas";
		_generalMacro="unif_chi_type65_kpa";
		scope=1;
		displayName="KPA 1950 uniform";
		nakedUniform="U_BasicBody";
		uniformClass="unif_chi_type65_kpa";
		model="sim_extra_gear\chi_type65.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\type65_kpa_co.paa"
		};
	};
	class unif_PCU_jacket: C_man_1
	{
		author="simkas, Infinity Ward";
		_generalMacro="unif_PCU_jacket";
		scope=1;
		displayName="PCU Softshell Jacket (Desert)";
		nakedUniform="U_BasicBody";
		uniformClass="unif_PCU_jacket";
		model="sim_extra_gear\PCU_jacket.p3d";
		modelSides[]={0,1,2,3};
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\pcu_jacket_top_co.paa",
			"sim_extra_gear\tex\pcu_jacket_bottom_co.paa",
			"sim_extra_gear\tex\pcu_jacket_scarf_co.paa"
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
				"sim_extra_gear\tex\pcu_jacket_top.rvmat",
				"sim_extra_gear\tex\pcu_jacket_bottom.rvmat",
				"sim_extra_gear\tex\pcu_jacket_scarf.rvmat",
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
	class unif_PCU_jacket_arctic: unif_PCU_jacket
	{
		author="simkas, Infinity Ward";
		_generalMacro="unif_PCU_jacket_arctic";
		displayName="PCU Softshell Jacket (Arctic)";
		uniformClass="unif_PCU_jacket_arctic";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\pcu_jacket_top_arctic.paa",
			"sim_extra_gear\tex\pcu_jacket_bottom_arctic.paa",
			"sim_extra_gear\tex\pcu_jacket_scarf_white.paa"
		};
	};
	class unif_PCU_jacket_wood: unif_PCU_jacket
	{
		author="simkas, Infinity Ward";
		_generalMacro="unif_PCU_jacket_wood";
		displayName="PCU Softshell Jacket (Woodland)";
		uniformClass="unif_PCU_jacket_wood";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\pcu_jacket_top_gray.paa",
			"sim_extra_gear\tex\pcu_jacket_bottom_multi.paa",
			"sim_extra_gear\tex\pcu_jacket_scarf_green.paa"
		};
	};
	class rhs_cossack_base;
	class FP_rhs_cossack_M43: rhs_cossack_base
	{
		displayName="Soviet M43 Uniform";
		uniformClass = "FP_rhs_uniform_cossack_M43";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry3\data\cossack_vest_co.paa",
			"sim_extra_gear\tex\RHS\cossack_pant_tan_co.paa"
		};
		modelsides[] = {3,2,1,0};
	};
};
class CfgWeapons
{
	class NVGoggles;
	class ItemCore;
	class HeadgearItem;
	class U_C_Poloshirt_blue;
	class H_HelmetB;
	class rhsusf_patrolcap_ocp: H_HelmetB
	{
		class ItemInfo;
	};
	class UniformItem;
	class Vest_Camo_Base;
	class VestItem;
	class V_PlateCarrier1_rgr;
	class rhs_uniform_cossack;
	class FP_rhs_uniform_cossack_M43: rhs_uniform_cossack
	{
		displayName="Soviet M43 Uniform";
		class ItemInfo: UniformItem
		{
			containerClass = "Supply40";
			mass = 40;
			scope = 0;
			type = 801;
			uniformClass = "FP_rhs_cossack_M43";
			uniformModel = "-";
		};
	};
	class Glove_base: NVGoggles
	{
		scope=0;
		modelOptics="\A3\Weapons_F\empty";
		visionMode[]=
		{
			"Normal",
			"Normal"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="";
			modelOff="";
			mass=1;
		};
	};
	class VSM_magpul_flightglove_standalone_NVG: NVGoggles
	{
		author="VanSchmoozin";
		scope=2;
		displayName="Magpul Flight Gloves";
		model="\sim_extra_gear\VSM_magpul_flightglove_standalone";
		hiddenSelections[]=
		{
			"_MagpulGloves"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_magpul_co.paa"
		};
		picture="\sim_extra_gear\icons\gloves\ico_magpul_green.paa";
		class Library
		{
			libTextDesc="Magpul Flight Gloves";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\VSM_magpul_flightglove_standalone.p3d";
			hiddenSelections[]=
			{
				"_MagpulGloves"
			};
			modelOff="\sim_extra_gear\VSM_magpul_flightglove_standalone.p3d";
			mass=1;
		};
	};
	class VSM_magpul_flightglove_cut_standalone_NVG: NVGoggles
	{
		author="VanSchmoozin";
		scope=2;
		displayName="Magpul Flight Gloves Cut";
		model="\sim_extra_gear\VSM_magpul_flightglove_cut_standalone";
		hiddenSelections[]=
		{
			"_MagpulGloves"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_magpul_co.paa"
		};
		picture="\sim_extra_gear\icons\gloves\ico_magpul_green_cut.paa";
		class Library
		{
			libTextDesc="Magpul Flight Gloves Cut";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\VSM_magpul_flightglove_cut_standalone.p3d";
			hiddenSelections[]=
			{
				"_MagpulGloves"
			};
			modelOff="\sim_extra_gear\VSM_magpul_flightglove_cut_standalone.p3d";
			mass=1;
		};
	};
	class VSM_flightglove_standalone_NVG: NVGoggles
	{
		author="VanSchmoozin";
		scope=2;
		displayName="Magpul Short-Cuff Flight Gloves";
		model="\sim_extra_gear\VSM_511_flightglove_standalone";
		hiddenSelections[]=
		{
			"_MagpulGloves"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_magpul_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves.rvmat"
		};
		picture="\sim_extra_gear\icons\gloves\ico_flight_green.paa";
		class Library
		{
			libTextDesc="Flight Gloves";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\VSM_511_flightglove_standalone.p3d";
			hiddenSelections[]=
			{
				"_MagpulGloves"
			};
			modelOff="\sim_extra_gear\VSM_511_flightglove_standalone.p3d";
			mass=1;
		};
	};
	class VSM_511_flightglove_black_standalone_NVG: NVGoggles
	{
		author="VanSchmoozin";
		scope=2;
		displayName="511 Gloves (black)";
		model="\sim_extra_gear\VSM_511_flightglove_standalone";
		hiddenSelections[]=
		{
			"_MagpulGloves"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_511_black.paa"
		};
		picture="\sim_extra_gear\icons\gloves\ico_511_black.paa";
		class Library
		{
			libTextDesc="511 Gloves";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\VSM_511_flightglove_standalone.p3d";
			hiddenSelections[]=
			{
				"_MagpulGloves"
			};
			modelOff="\sim_extra_gear\VSM_511_flightglove_standalone.p3d";
			mass=1;
		};
	};
	class VSM_SPLAV_flightglove_od_standalone_NVG: NVGoggles
	{
		author="VanSchmoozin";
		scope=2;
		displayName="SPLAV Gloves (OD)";
		model="\sim_extra_gear\VSM_511_flightglove_standalone";
		hiddenSelections[]=
		{
			"_MagpulGloves"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_SPLAV_OD.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_splav.rvmat"
		};
		picture="\sim_extra_gear\icons\gloves\ico_splav_green.paa";
		class Library
		{
			libTextDesc="SPLAV Gloves";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\VSM_511_flightglove_standalone.p3d";
			hiddenSelections[]=
			{
				"_MagpulGloves"
			};
			modelOff="\sim_extra_gear\VSM_511_flightglove_standalone.p3d";
			mass=1;
		};
	};
	class VSM_MPACT_gloves_black_standalone_NVG: NVGoggles
	{
		author="VanSchmoozin";
		scope=2;
		displayName="MPACT Gloves (black)";
		model="\sim_extra_gear\VSM_MPACT_gloves_standalone";
		hiddenSelections[]=
		{
			"_MPACT"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_MPACT_gloves_black.paa"
		};
		picture="\sim_extra_gear\icons\gloves\ico_mpact_black.paa";
		class Library
		{
			libTextDesc="MPACT Gloves";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\VSM_MPACT_gloves_standalone.p3d";
			hiddenSelections[]=
			{
				"_MPACT"
			};
			modelOff="\sim_extra_gear\VSM_MPACT_gloves_standalone.p3d";
			mass=1;
		};
	};
	class VSM_MPACT_gloves_cut_black_standalone_NVG: NVGoggles
	{
		author="VanSchmoozin";
		scope=2;
		displayName="MPACT Gloves Cut (black)";
		model="\sim_extra_gear\VSM_MPACT_gloves_cut_standalone";
		hiddenSelections[]=
		{
			"_MPACT"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_MPACT_gloves_black.paa"
		};
		picture="\sim_extra_gear\icons\gloves\ico_mpact_cut_black.paa";
		class Library
		{
			libTextDesc="MPACT Gloves";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\VSM_MPACT_gloves_cut_standalone.p3d";
			hiddenSelections[]=
			{
				"_MPACT"
			};
			modelOff="\sim_extra_gear\VSM_MPACT_gloves_cut_standalone.p3d";
			mass=1;
		};
	};
	class gluv_AAF_NVG: NVGoggles
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayname="Gloves (AAF)";
		model="\sim_extra_gear\gloves_AAF.p3d";
		picture="\sim_extra_gear\icons\gloves.paa";
		class Library
		{
			libTextDesc="Gloves (AAF)";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\gloves_AAF.p3d";
			modelOff="\sim_extra_gear\gloves_AAF.p3d";
			mass=1;
		};
	};
	class gluv_AAF_noNVG: Glove_base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayname="Gloves (AAF, no NV)";
		model="\sim_extra_gear\gloves_AAF.p3d";
		picture="\sim_extra_gear\icons\gloves.paa";
		class Library
		{
			libTextDesc="Gloves (AAF, no NV)";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\gloves_AAF.p3d";
			modelOff="\sim_extra_gear\gloves_AAF.p3d";
			mass=1;
		};
	};
	class VSM_magpul_flightglove_standalone_noNVG: Glove_base
	{
		author="VanSchmoozin";
		scope=2;
		displayName="Magpul Flight Gloves (no NV)";
		model="\sim_extra_gear\VSM_magpul_flightglove_standalone";
		hiddenSelections[]=
		{
			"_MagpulGloves"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_magpul_co.paa"
		};
		picture="\sim_extra_gear\icons\gloves\ico_magpul_green.paa";
		class Library
		{
			libTextDesc="Magpul Flight Gloves (no NV)";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\VSM_magpul_flightglove_standalone.p3d";
			hiddenSelections[]=
			{
				"_MagpulGloves"
			};
			modelOff="\sim_extra_gear\VSM_magpul_flightglove_standalone.p3d";
			mass=1;
		};
	};
	class VSM_magpul_flightglove_cut_standalone_noNVG: Glove_base
	{
		author="VanSchmoozin";
		scope=2;
		displayName="Magpul Flight Gloves Cut (no NV)";
		model="\sim_extra_gear\VSM_magpul_flightglove_cut_standalone";
		hiddenSelections[]=
		{
			"_MagpulGloves"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_magpul_co.paa"
		};
		picture="\sim_extra_gear\icons\gloves\ico_magpul_green_cut.paa";
		class Library
		{
			libTextDesc="Magpul Flight Gloves Cut (no NV)";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\VSM_magpul_flightglove_cut_standalone.p3d";
			hiddenSelections[]=
			{
				"_MagpulGloves"
			};
			modelOff="\sim_extra_gear\VSM_magpul_flightglove_cut_standalone.p3d";
			mass=1;
		};
	};
	class VSM_flightglove_standalone_noNVG: Glove_base
	{
		author="VanSchmoozin";
		scope=2;
		displayName="Magpul Short-Cuff Flight Gloves (no NV)";
		model="\sim_extra_gear\VSM_511_flightglove_standalone";
		hiddenSelections[]=
		{
			"_MagpulGloves"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_magpul_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves.rvmat"
		};
		picture="\sim_extra_gear\icons\gloves\ico_flight_green.paa";
		class Library
		{
			libTextDesc="Flight Gloves (no NV)";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\VSM_511_flightglove_standalone.p3d";
			hiddenSelections[]=
			{
				"_MagpulGloves"
			};
			modelOff="\sim_extra_gear\VSM_511_flightglove_standalone.p3d";
			mass=1;
		};
	};
	class VSM_511_flightglove_black_standalone_noNVG: Glove_base
	{
		author="VanSchmoozin";
		scope=2;
		displayName="511 Gloves (black) (no NV)";
		model="\sim_extra_gear\VSM_511_flightglove_standalone";
		hiddenSelections[]=
		{
			"_MagpulGloves"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_511_black.paa"
		};
		picture="\sim_extra_gear\icons\gloves\ico_511_black.paa";
		class Library
		{
			libTextDesc="511 Gloves (no NV)";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\VSM_511_flightglove_standalone.p3d";
			hiddenSelections[]=
			{
				"_MagpulGloves"
			};
			modelOff="\sim_extra_gear\VSM_511_flightglove_standalone.p3d";
			mass=1;
		};
	};
	class VSM_SPLAV_flightglove_od_standalone_noNVG: Glove_base
	{
		author="VanSchmoozin";
		scope=2;
		displayName="SPLAV Gloves (OD) (no NV)";
		model="\sim_extra_gear\VSM_511_flightglove_standalone";
		hiddenSelections[]=
		{
			"_MagpulGloves"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_SPLAV_OD.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_splav.rvmat"
		};
		picture="\sim_extra_gear\icons\gloves\ico_splav_green.paa";
		class Library
		{
			libTextDesc="SPLAV Gloves (no NV)";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\VSM_511_flightglove_standalone.p3d";
			hiddenSelections[]=
			{
				"_MagpulGloves"
			};
			modelOff="\sim_extra_gear\VSM_511_flightglove_standalone.p3d";
			mass=1;
		};
	};
	class VSM_MPACT_gloves_black_standalone_noNVG: Glove_base
	{
		author="VanSchmoozin";
		scope=2;
		displayName="MPACT Gloves (black) (no NV)";
		model="\sim_extra_gear\VSM_MPACT_gloves_standalone";
		hiddenSelections[]=
		{
			"_MPACT"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_MPACT_gloves_black.paa"
		};
		picture="\sim_extra_gear\icons\gloves\ico_mpact_black.paa";
		class Library
		{
			libTextDesc="MPACT Gloves (no NV)";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\VSM_MPACT_gloves_standalone.p3d";
			hiddenSelections[]=
			{
				"_MPACT"
			};
			modelOff="\sim_extra_gear\VSM_MPACT_gloves_standalone.p3d";
			mass=1;
		};
	};
	class VSM_MPACT_gloves_cut_black_standalone_noNVG: Glove_base
	{
		author="VanSchmoozin";
		scope=2;
		displayName="MPACT Gloves Cut (black) (no NV)";
		model="\sim_extra_gear\VSM_MPACT_gloves_cut_standalone";
		hiddenSelections[]=
		{
			"_MPACT"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_MPACT_gloves_black.paa"
		};
		picture="\sim_extra_gear\icons\gloves\ico_mpact_cut_black.paa";
		class Library
		{
			libTextDesc="MPACT Gloves (no NV)";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\sim_extra_gear\VSM_MPACT_gloves_cut_standalone.p3d";
			hiddenSelections[]=
			{
				"_MPACT"
			};
			modelOff="\sim_extra_gear\VSM_MPACT_gloves_cut_standalone.p3d";
			mass=1;
		};
	};
	class PMC_garb_1: U_C_Poloshirt_blue
	{
		author="simkas, Bohemia";
		scope=2;
		displayName="PMC Garb 1";
		picture="\sim_extra_gear\icons\uniforms\ico_pmc_1.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gracenko_1_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PMC_garb_1";
			containerClass="Supply40";
			mass=20;
		};
	};
	class PMC_garb_2: PMC_garb_1
	{
		displayName="PMC Garb 2";
		picture="\sim_extra_gear\icons\uniforms\ico_pmc_2.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gracenko_2_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PMC_garb_2";
			containerClass="Supply40";
			mass=20;
		};
	};
	class PMC_garb_3: PMC_garb_1
	{
		displayName="PMC Garb 3";
		picture="\sim_extra_gear\icons\uniforms\ico_pmc_3.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gracenko_3_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PMC_garb_3";
			containerClass="Supply40";
			mass=20;
		};
	};
	class PMC_garb_4: PMC_garb_1
	{
		displayName="PMC Garb 4";
		picture="\sim_extra_gear\icons\uniforms\ico_pmc_4.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gracenko_4_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PMC_garb_4";
			containerClass="Supply40";
			mass=20;
		};
	};
	class PMC_garb_5: PMC_garb_1
	{
		displayName="PMC Garb 5";
		picture="\sim_extra_gear\icons\uniforms\ico_pmc_5.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gracenko_5_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PMC_garb_5";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_tshirtjeans1: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Civilian T-shirt and Jeans 1";
		picture="\sim_extra_gear\icons\civilians\ico_tshirt1.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tshirt_co.paa",
			"sim_extra_gear\tex\jeans_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_tshirtjeans1";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_tshirtjeans2: sciv_tshirtjeans1
	{
		displayName="Civilian T-shirt and Jeans 2";
		picture="\sim_extra_gear\icons\civilians\ico_tshirt2.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tshirt_black.paa",
			"sim_extra_gear\tex\jeans_dark.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_tshirtjeans2";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_tshirtjeans3: sciv_tshirtjeans1
	{
		displayName="Civilian T-shirt and Jeans 3";
		picture="\sim_extra_gear\icons\civilians\ico_tshirt3.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tshirt_blue.paa",
			"sim_extra_gear\tex\jeans_black.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_tshirtjeans3";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_tshirtjeans4: sciv_tshirtjeans1
	{
		displayName="Civilian T-shirt and Jeans 4";
		picture="\sim_extra_gear\icons\civilians\ico_tshirt4.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tshirt_red.paa",
			"sim_extra_gear\tex\jeans_grey.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_tshirtjeans4";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_buttonshirt1: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Civilian Button Shirt 1";
		picture="\sim_extra_gear\icons\civilians\ico_longshirt1.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\longsleeve_co.paa",
			"sim_extra_gear\tex\longpants_blue.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_buttonshirt1";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_buttonshirt2: sciv_buttonshirt1
	{
		displayName="Civilian Button Shirt 2";
		picture="\sim_extra_gear\icons\civilians\ico_longshirt2.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\longsleeve_blue.paa",
			"sim_extra_gear\tex\longpants_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_buttonshirt2";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_buttonshirt3: sciv_buttonshirt1
	{
		displayName="Civilian Button Shirt 3";
		picture="\sim_extra_gear\icons\civilians\ico_longshirt3.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\longsleeve_black.paa",
			"sim_extra_gear\tex\longpants_grey.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_buttonshirt3";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_buttonshirt4: sciv_buttonshirt1
	{
		displayName="Civilian Button Shirt 4";
		picture="\sim_extra_gear\icons\civilians\ico_longshirt4.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\longsleeve_plaid.paa",
			"sim_extra_gear\tex\longpants_jeans.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_buttonshirt4";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_tropicshirt1: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Civilian Tropical Shirt 1";
		picture="\sim_extra_gear\icons\civilians\ico_tropic1.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tropshirt_co.paa",
			"sim_extra_gear\tex\chinos_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_tropicshirt1";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_tropicshirt2: sciv_tropicshirt1
	{
		displayName="Civilian Tropical Shirt 2";
		picture="\sim_extra_gear\icons\civilians\ico_tropic2.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tropshirt_white.paa",
			"sim_extra_gear\tex\chinos_dark.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_tropicshirt2";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_tropicshirt3: sciv_tropicshirt1
	{
		displayName="Civilian Tropical Shirt 3";
		picture="\sim_extra_gear\icons\civilians\ico_tropic3.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tropshirt_red.paa",
			"sim_extra_gear\tex\chinos_brown.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_tropicshirt3";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_tropicshirt4: sciv_tropicshirt1
	{
		displayName="Civilian Tropical Shirt 4";
		picture="\sim_extra_gear\icons\civilians\ico_tropic4.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\tropshirt_floral.paa",
			"sim_extra_gear\tex\chinos_cream.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_tropicshirt4";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_cargotshirt1: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Civilian T-shirt & Cargo pants 1";
		picture="\sim_extra_gear\icons\civilians\ico_cargotee1.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\cargo_tshirt_blue.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_cargotshirt1";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_cargotshirt2: sciv_cargotshirt1
	{
		displayName="Civilian T-shirt & Cargo pants 2";
		picture="\sim_extra_gear\icons\civilians\ico_cargotee2.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\cargo_tshirt_black.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_cargotshirt2";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_cargotshirt3: sciv_cargotshirt1
	{
		displayName="Civilian T-shirt & Cargo pants 3";
		picture="\sim_extra_gear\icons\civilians\ico_cargotee3.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\cargo_tshirt_camo.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_cargotshirt3";
			containerClass="Supply40";
			mass=20;
		};
	};
	class sciv_cargotshirt4: sciv_cargotshirt1
	{
		displayName="Civilian T-shirt & Cargo pants 4";
		picture="\sim_extra_gear\icons\civilians\ico_cargotee4.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\cargo_tshirt_olive.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="sciv_cargotshirt4";
			containerClass="Supply40";
			mass=20;
		};
	};
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
			"sim_extra_gear\tex\jungle_uniform_co.paa"
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
			"sim_extra_gear\tex\jungle_uniform_co.paa"
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
			"sim_extra_gear\tex\jungle_uniform_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_od_short";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_M81: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform (M81)";
		picture="\sim_extra_gear\icons\uniforms\ico_long_od.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_m81.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_M81";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_M81_roll: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform rolled (M81)";
		picture="\sim_extra_gear\icons\uniforms\ico_roll_od.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_m81.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_M81_roll";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_M81_short: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform short (M81)";
		picture="\sim_extra_gear\icons\uniforms\ico_short_od.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_m81.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_M81_short";
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
			"sim_extra_gear\tex\jungle_uniform_black.paa"
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
			"sim_extra_gear\tex\jungle_uniform_black.paa"
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
			"sim_extra_gear\tex\jungle_uniform_black.paa"
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
			"sim_extra_gear\tex\jungle_uniform_erdl.paa"
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
			"sim_extra_gear\tex\jungle_uniform_erdl.paa"
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
			"sim_extra_gear\tex\jungle_uniform_erdl.paa"
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
			"sim_extra_gear\tex\jungle_uniform_tiger.paa"
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
			"sim_extra_gear\tex\jungle_uniform_tiger.paa"
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
			"sim_extra_gear\tex\jungle_uniform_tiger.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_tiger_short";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_urban: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform (Urban)";
		picture="\sim_extra_gear\icons\uniforms\ico_long_urban.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_urban.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_urban";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_urban_roll: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform rolled (Urban)";
		picture="\sim_extra_gear\icons\uniforms\ico_roll_urban.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_urban.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_urban_roll";
			containerClass="Supply40";
			mass=40;
		};
	};
	class jungle_unif_urban_short: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Tropical combat uniform short (Urban)";
		picture="\sim_extra_gear\icons\uniforms\ico_short_urban.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\jungle_uniform_urban.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="jungle_unif_urban_short";
			containerClass="Supply40";
			mass=40;
		};
	};
	class milit_jacket_tan: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Militia field jacket (tan)";
		picture="\sim_extra_gear\icons\militia\fieljack_tan.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_co.paa",
			"sim_extra_gear\tex\fieldjacket_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="milit_jacket_tan";
			containerClass="Supply40";
			mass=40;
		};
	};
	class milit_jacket_lizard: milit_jacket_tan
	{
		displayName="Militia field jacket (french lizard)";
		picture="\sim_extra_gear\icons\militia\fieljack_liz.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_leezard.paa",
			"sim_extra_gear\tex\fieldjacket_leezard.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="milit_jacket_lizard";
			containerClass="Supply40";
			mass=40;
		};
	};
	class milit_jacket_od: milit_jacket_tan
	{
		displayName="Militia field jacket (OD)";
		picture="\sim_extra_gear\icons\militia\fieljack_od.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_olive.paa",
			"sim_extra_gear\tex\fieldjacket_olive.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="milit_jacket_od";
			containerClass="Supply40";
			mass=40;
		};
	};
	class milit_jacket_dpm: milit_jacket_tan
	{
		displayName="Militia field jacket (DPM)";
		picture="\sim_extra_gear\icons\militia\fieljack_dpm.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_olive.paa",
			"sim_extra_gear\tex\fieldjacket_dpm.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="milit_jacket_dpm";
			containerClass="Supply40";
			mass=40;
		};
	};
	class milit_jacket_denison: milit_jacket_tan
	{
		displayName="Militia field jacket (denison smock)";
		picture="\sim_extra_gear\icons\militia\fieljack_denison.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_olive.paa",
			"sim_extra_gear\tex\fieldjacket_denison.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="milit_jacket_denison";
			containerClass="Supply40";
			mass=40;
		};
	};
	class milit_jacket_desert: milit_jacket_tan
	{
		displayName="Militia field jacket (desert camo)";
		picture="\sim_extra_gear\icons\militia\fieljack_brown.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_desert.paa",
			"sim_extra_gear\tex\fieldjacket_brown.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="milit_jacket_desert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class milit_jacket_black: milit_jacket_tan
	{
		displayName="Militia field jacket (black)";
		picture="\sim_extra_gear\icons\militia\fieljack_black.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_black.paa",
			"sim_extra_gear\tex\fieldjacket_black.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="milit_jacket_black";
			containerClass="Supply40";
			mass=40;
		};
	};
	class milit_unif_tan: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Militia uniform (tan)";
		picture="\sim_extra_gear\icons\militia\milit_tan.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="milit_unif_tan";
			containerClass="Supply40";
			mass=40;
		};
	};
	class milit_unif_od: milit_unif_tan
	{
		displayName="Militia uniform (OD)";
		picture="\sim_extra_gear\icons\militia\milit_od.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_olive.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="milit_unif_od";
			containerClass="Supply40";
			mass=40;
		};
	};
	class milit_unif_lizard: milit_unif_tan
	{
		displayName="Militia uniform (french lizard)";
		picture="\sim_extra_gear\icons\militia\milit_liz.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_leezard.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="milit_unif_lizard";
			containerClass="Supply40";
			mass=40;
		};
	};
	class milit_unif_desert: milit_unif_tan
	{
		displayName="Militia uniform (desert camo)";
		picture="\sim_extra_gear\icons\militia\milit_desert.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_desert.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="milit_unif_desert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class milit_unif_cuban: milit_unif_tan
	{
		displayName="Militia uniform (cuban lizard)";
		picture="\sim_extra_gear\icons\militia\milit_cuban.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_cuban.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="milit_unif_cuban";
			containerClass="Supply40";
			mass=40;
		};
	};
	class milit_unif_duck: milit_unif_tan
	{
		displayName="Militia uniform (duck hunter)";
		picture="\sim_extra_gear\icons\militia\milit_duck.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_duck.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="milit_unif_duck";
			containerClass="Supply40";
			mass=40;
		};
	};
	class milit_unif_portg: milit_unif_tan
	{
		displayName="Militia uniform (portuguese lizard)";
		picture="\sim_extra_gear\icons\militia\milit_duck.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_portg.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="milit_unif_portg";
			containerClass="Supply40";
			mass=40;
		};
	};
	class milit_unif_black: milit_unif_tan
	{
		displayName="Militia uniform (black)";
		picture="\sim_extra_gear\icons\militia\milit_black.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\militia_black.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="milit_unif_black";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhod_unif_short: U_C_Poloshirt_blue
	{
		author="simkas";
		scope=2;
		displayName="Rhodesian army uniform";
		picture="\sim_extra_gear\icons\uniforms\ico_rhod.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\rhod_uniform_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="rhod_unif_short";
			containerClass="Supply40";
			mass=40;
		};
	};
	class NVA_unif: U_C_Poloshirt_blue
	{
		author="simkas, Antimatter Games";
		scope=2;
		displayName="North Vietnamese Uniform";
		picture="\sim_extra_gear\icons\uniforms\ico_nva.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\nva_uniform_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="NVA_unif";
			containerClass="Supply40";
			mass=20;
		};
	};
	class NVA_unif_VC: NVA_unif
	{
		displayName="North Vietnamese Uniform (Viet Cong)";
		picture="\sim_extra_gear\icons\uniforms\ico_vc.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\nva_unif_VC.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="NVA_unif_VC";
			containerClass="Supply40";
			mass=20;
		};
	};
	class NVA_unif_tan: NVA_unif
	{
		displayName="North Vietnamese Uniform (Tan)";
		picture="\sim_extra_gear\icons\uniforms\ico_nva_tan.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\NVA_unif_tan.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="NVA_unif_tan";
			containerClass="Supply40";
			mass=20;
		};
	};
	class NVA_helmet: ItemCore
	{
		author="simkas, Antimatter Games";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "North Vietnamese Helmet";
		picture = "\sim_extra_gear\icons\ico_nva_helm.paa";
		model = "\sim_extra_gear\NVA_helmet";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\sim_extra_gear\tex\nva_hat_co.paa" };
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\sim_extra_gear\NVA_helmet";
			modelSides[]={0,1,2,3};
			hiddenSelections[] = { "camo" };
		};
	};
	class NVA_helmet_tan: NVA_helmet
	{
		displayName = "North Vietnamese Helmet (Tan)";
		picture = "\sim_extra_gear\icons\ico_nva_helm_tan.paa";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\sim_extra_gear\tex\nva_hat_tan.paa" };
	};
	class viet_strawhat: ItemCore
	{
		author="simkas, Antimatter Games";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Vietnamese Straw Hat";
		picture = "\sim_extra_gear\icons\ico_strawhat.paa";
		model = "\sim_extra_gear\viet_hat";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\sim_extra_gear\tex\nva_hat_co.paa" };
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\sim_extra_gear\viet_hat";
			modelSides[]={0,1,2,3};
			hiddenSelections[] = { "camo" };
		};
	};
	class patrolcap_OD: rhsusf_patrolcap_ocp
	{
		displayName = "Patrol cap (OD)";
		picture="\sim_extra_gear\icons\militia\cap_od.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\sim_extra_gear\tex\RHS\patrolcap_od.paa"};
		hiddenSelectionsMaterials[] = {"\sim_extra_gear\tex\RHS\patrolcap.rvmat"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"camo1"};
		};
	};
	class patrolcap_tan: rhsusf_patrolcap_ocp
	{
		displayName = "Patrol cap (tan)";
		picture="\sim_extra_gear\icons\militia\cap_tan.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\sim_extra_gear\tex\RHS\patrolcap_tan.paa"};
		hiddenSelectionsMaterials[] = {"\sim_extra_gear\tex\RHS\patrolcap.rvmat"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"camo1"};
		};
	};
	class patrolcap_lizard: rhsusf_patrolcap_ocp
	{
		displayName = "Patrol cap (french lizard)";
		picture="\sim_extra_gear\icons\militia\cap_liz.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\sim_extra_gear\tex\RHS\patrolcap_leezard.paa"};
		hiddenSelectionsMaterials[] = {"\sim_extra_gear\tex\RHS\patrolcap.rvmat"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"camo1"};
		};
	};
	class patrolcap_desert: rhsusf_patrolcap_ocp
	{
		displayName = "Patrol cap (desert camo)";
		picture="\sim_extra_gear\icons\militia\cap_desert.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\sim_extra_gear\tex\RHS\patrolcap_desert.paa"};
		hiddenSelectionsMaterials[] = {"\sim_extra_gear\tex\RHS\patrolcap.rvmat"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"camo1"};
		};
	};
	class patrolcap_cuban: rhsusf_patrolcap_ocp
	{
		displayName = "Patrol cap (cuban lizard)";
		picture="\sim_extra_gear\icons\militia\cap_cuban.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\sim_extra_gear\tex\RHS\patrolcap_cuban.paa"};
		hiddenSelectionsMaterials[] = {"\sim_extra_gear\tex\RHS\patrolcap.rvmat"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"camo1"};
		};
	};
	class patrolcap_portg: rhsusf_patrolcap_ocp
	{
		displayName = "Patrol cap (portuguese lizard)";
		picture="\sim_extra_gear\icons\militia\cap_cuban.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\sim_extra_gear\tex\RHS\patrolcap_portg.paa"};
		hiddenSelectionsMaterials[] = {"\sim_extra_gear\tex\RHS\patrolcap.rvmat"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"camo1"};
		};
	};
	class patrolcap_duck: rhsusf_patrolcap_ocp
	{
		displayName = "Patrol cap (duck hunter)";
		picture="\sim_extra_gear\icons\militia\cap_duck.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\sim_extra_gear\tex\RHS\patrolcap_duck.paa"};
		hiddenSelectionsMaterials[] = {"\sim_extra_gear\tex\RHS\patrolcap.rvmat"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"camo1"};
		};
	};
	class patrolcap_black: rhsusf_patrolcap_ocp
	{
		displayName = "Patrol cap (black)";
		picture="\sim_extra_gear\icons\militia\cap_black.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\sim_extra_gear\tex\RHS\patrolcap_black.paa"};
		hiddenSelectionsMaterials[] = {"\sim_extra_gear\tex\RHS\patrolcap.rvmat"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"camo1"};
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
	class chestrig_SOG: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="chestrig_SOG";
		scope=2;
		displayName="Chestrig (MACV SOG)";
		picture="\sim_extra_gear\icons\vests\chestrig_sog.paa";
		model="\sim_extra_gear\chestrig_SOG.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\chestrig_SOG.p3d";
			containerClass="Supply180";
			mass=10;
		};
	};
	class vest_chicom_sks: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="vest_chicom_sks";
		scope=2;
		displayName="Chinese SKS Bandolier";
		picture="\sim_extra_gear\icons\vests\chestrig.paa";
		model="\sim_extra_gear\chi_sks_belt.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\chi_sks_belt.p3d";
			containerClass="Supply180";
			mass=10;
		};
	};
	class chestrig_chic: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="chestrig_chic";
		scope=2;
		displayName="Chinese Type 56 Chestrig";
		picture="\sim_extra_gear\icons\vests\chestrig.paa";
		model="\sim_extra_gear\chi_chestrig.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\chi_chestrig.p3d";
			containerClass="Supply180";
			mass=10;
		};
	};
	class chestrig_RHS: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="chestrig_RHS";
		scope=1;
		displayName="Chestrig (Type 56, RHS)";
		picture="\sim_extra_gear\icons\vests\chestrig.paa";
		model="\sim_extra_gear\chestrig_RHS.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\chestrig_RHS.p3d";
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
	class flak_lite: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="flak_lite";
		scope=2;
		displayName="M69 Flak Vest (Lite)";
		picture="\sim_extra_gear\icons\vests\flak_basic.paa";
		model="\sim_extra_gear\flak_lite.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\flak_lite.p3d";
			containerClass="Supply60";
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
	class 58_pat_web: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="58_pat_web";
		scope=2;
		displayName="58 Pattern Webbing";
		picture="\sim_extra_gear\icons\vests\58pat_web.paa";
		model="\sim_extra_gear\58_webbing.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\58_webbing.p3d";
			containerClass="Supply120";
			mass=10;
		};
	};
	class 58_pat_flak: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="58_pat_flak";
		scope=2;
		displayName="58 Pattern Webbing (Flak Jacket)";
		picture="\sim_extra_gear\icons\vests\58pat_flak.paa";
		model="\sim_extra_gear\58_webbing_flak.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\58_webbing_flak.p3d";
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
	class IBA_rifle_m81: V_PlateCarrier1_rgr
	{
		author="simkas";
		_generalMacro="IBA_rifle_m81";
		scope=2;
		displayName="IBA M81 Rifleman";
		picture="\sim_extra_gear\icons\vests\IBA_m81.paa";
		model="sim_extra_gear\IBA_vest.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_m81_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\IBA_vest.p3d";
			containerClass="Supply120";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\sim_extra_gear\tex\IBA_m81_co.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"\sim_extra_gear\tex\IBA_m81.rvmat"
			};
		};
		
	};
	class IBA_alice_m81: V_PlateCarrier1_rgr
	{
		author="simkas";
		_generalMacro="IBA_alice_m81";
		scope=2;
		displayName="IBA M81 LC-2 Web gear";
		picture="\sim_extra_gear\icons\vests\IBA_m81.paa";
		model="sim_extra_gear\IBA_vest_alice.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_m81_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\IBA_vest_alice.p3d";
			containerClass="Supply120";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\sim_extra_gear\tex\IBA_m81_co.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"\sim_extra_gear\tex\IBA_m81.rvmat"
			};
		};
		
	};
	class IBA_MG_m81: V_PlateCarrier1_rgr
	{
		author="simkas";
		_generalMacro="IBA_MG_m81";
		scope=2;
		displayName="IBA M81 Machinegunner";
		picture="\sim_extra_gear\icons\vests\IBA_m81.paa";
		model="sim_extra_gear\IBA_vest_MG.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_m81_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\IBA_vest_MG.p3d";
			containerClass="Supply140";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\sim_extra_gear\tex\IBA_m81_co.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"\sim_extra_gear\tex\IBA_m81.rvmat"
			};
		};
		
	};
	class IBA_blank_m81: V_PlateCarrier1_rgr
	{
		author="simkas";
		_generalMacro="IBA_blank_m81";
		scope=2;
		displayName="IBA M81 Blank";
		picture="\sim_extra_gear\icons\vests\IBA_m81.paa";
		model="sim_extra_gear\IBA_vest_blank.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_m81_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\IBA_vest_blank.p3d";
			containerClass="Supply60";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\sim_extra_gear\tex\IBA_m81_co.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"\sim_extra_gear\tex\IBA_m81.rvmat"
			};
		};
		
	};
	class IBA_rifle_usmc: IBA_rifle_m81
	{
		_generalMacro="IBA_rifle_usmc";
		scope=2;
		displayName="IBA USMC Rifleman";
		picture="\sim_extra_gear\icons\vests\IBA_usmc.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_usmc_co.paa"
		};		
	};
	class IBA_alice_usmc: IBA_alice_m81
	{
		_generalMacro="IBA_alice_usmc";
		scope=2;
		displayName="IBA USMC LC-2 Web gear";
		picture="\sim_extra_gear\icons\vests\IBA_usmc.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_usmc_co.paa"
		};		
	};
	class IBA_MG_usmc: IBA_MG_m81
	{
		_generalMacro="IBA_MG_usmc";
		scope=2;
		displayName="IBA USMC Machinegunner";
		picture="\sim_extra_gear\icons\vests\IBA_usmc.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_usmc_co.paa"
		};		
	};
	class IBA_blank_usmc: IBA_blank_m81
	{
		_generalMacro="IBA_blank_usmc";
		scope=2;
		displayName="IBA USMC Blank";
		picture="\sim_extra_gear\icons\vests\IBA_usmc.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_usmc_co.paa"
		};		
	};
	class IBA_rifle_black: IBA_rifle_m81
	{
		_generalMacro="IBA_rifle_black";
		scope=2;
		displayName="IBA Black Rifleman";
		picture="\sim_extra_gear\icons\vests\IBA_black.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_black_co.paa"
		};		
	};
	class IBA_alice_black: IBA_alice_m81
	{
		_generalMacro="IBA_alice_black";
		scope=2;
		displayName="IBA Black LC-2 Web gear";
		picture="\sim_extra_gear\icons\vests\IBA_black.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_black_co.paa"
		};		
	};
	class IBA_MG_black: IBA_MG_m81
	{
		_generalMacro="IBA_MG_black";
		scope=2;
		displayName="IBA Black Machinegunner";
		picture="\sim_extra_gear\icons\vests\IBA_black.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_black_co.paa"
		};		
	};
	class IBA_blank_black: IBA_blank_m81
	{
		_generalMacro="IBA_blank_black";
		scope=2;
		displayName="IBA Black Blank";
		picture="\sim_extra_gear\icons\vests\IBA_black.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_black_co.paa"
		};		
	};
	class IBA_rifle_brushd: IBA_rifle_m81
	{
		_generalMacro="IBA_rifle_brushd";
		scope=2;
		displayName="IBA Desert Brush Rifleman";
		picture="\sim_extra_gear\icons\vests\IBA_brushd.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_brushd_co.paa"
		};		
	};
	class IBA_alice_brushd: IBA_alice_m81
	{
		_generalMacro="IBA_alice_brushd";
		scope=2;
		displayName="IBA Desert Brush LC-2 Web gear";
		picture="\sim_extra_gear\icons\vests\IBA_brushd.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_brushd_co.paa"
		};		
	};
	class IBA_MG_brushd: IBA_MG_m81
	{
		_generalMacro="IBA_MG_brushd";
		scope=2;
		displayName="IBA Desert Brush Machinegunner";
		picture="\sim_extra_gear\icons\vests\IBA_brushd.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_brushd_co.paa"
		};		
	};
	class IBA_blank_brushd: IBA_blank_m81
	{
		_generalMacro="IBA_blank_brushd";
		scope=2;
		displayName="IBA Desert Brush Blank";
		picture="\sim_extra_gear\icons\vests\IBA_brushd.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_brushd_co.paa"
		};		
	};
	class IBA_rifle_brushwd: IBA_rifle_m81
	{
		_generalMacro="IBA_rifle_brushwd";
		scope=2;
		displayName="IBA Woodland Brush Rifleman";
		picture="\sim_extra_gear\icons\vests\IBA_brushwd.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_brushwd_co.paa"
		};		
	};
	class IBA_alice_brushwd: IBA_alice_m81
	{
		_generalMacro="IBA_alice_brushwd";
		scope=2;
		displayName="IBA Woodland Brush LC-2 Web gear";
		picture="\sim_extra_gear\icons\vests\IBA_brushwd.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_brushwd_co.paa"
		};		
	};
	class IBA_MG_brushwd: IBA_MG_m81
	{
		_generalMacro="IBA_MG_brushwd";
		scope=2;
		displayName="IBA Woodland Brush Machinegunner";
		picture="\sim_extra_gear\icons\vests\IBA_brushwd.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_brushwd_co.paa"
		};		
	};
	class IBA_blank_brushwd: IBA_blank_m81
	{
		_generalMacro="IBA_blank_brushwd";
		scope=2;
		displayName="IBA Woodland Brush Blank";
		picture="\sim_extra_gear\icons\vests\IBA_brushwd.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_brushwd_co.paa"
		};		
	};
	class IBA_rifle_dcu: IBA_rifle_m81
	{
		_generalMacro="IBA_rifle_dcu";
		scope=2;
		displayName="IBA DCU Rifleman";
		picture="\sim_extra_gear\icons\vests\IBA_dcu.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_DCU_co.paa"
		};		
	};
	class IBA_alice_dcu: IBA_alice_m81
	{
		_generalMacro="IBA_alice_dcu";
		scope=2;
		displayName="IBA DCU LC-2 Web gear";
		picture="\sim_extra_gear\icons\vests\IBA_dcu.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_dcu_co.paa"
		};		
	};
	class IBA_MG_dcu: IBA_MG_m81
	{
		_generalMacro="IBA_MG_dcu";
		scope=2;
		displayName="IBA DCU Machinegunner";
		picture="\sim_extra_gear\icons\vests\IBA_dcu.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_dcu_co.paa"
		};		
	};
	class IBA_blank_dcu: IBA_blank_m81
	{
		_generalMacro="IBA_blank_dcu";
		scope=2;
		displayName="IBA DCU Blank";
		picture="\sim_extra_gear\icons\vests\IBA_dcu.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_dcu_co.paa"
		};		
	};
	class IBA_rifle_ERDL: IBA_rifle_m81
	{
		_generalMacro="IBA_rifle_ERDL";
		scope=2;
		displayName="IBA Low ERDL Rifleman";
		picture="\sim_extra_gear\icons\vests\IBA_ERDL.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_ERDL_co.paa"
		};		
	};
	class IBA_alice_ERDL: IBA_alice_m81
	{
		_generalMacro="IBA_alice_ERDL";
		scope=2;
		displayName="IBA Low ERDL LC-2 Web gear";
		picture="\sim_extra_gear\icons\vests\IBA_ERDL.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_ERDL_co.paa"
		};		
	};
	class IBA_MG_ERDL: IBA_MG_m81
	{
		_generalMacro="IBA_MG_ERDL";
		scope=2;
		displayName="IBA Low ERDL Machinegunner";
		picture="\sim_extra_gear\icons\vests\IBA_ERDL.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_ERDL_co.paa"
		};		
	};
	class IBA_blank_ERDL: IBA_blank_m81
	{
		_generalMacro="IBA_blank_ERDL";
		scope=2;
		displayName="IBA Low ERDL Blank";
		picture="\sim_extra_gear\icons\vests\IBA_ERDL.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\IBA_ERDL_co.paa"
		};		
	};
	class M2_helmet_net: ItemCore
	{
		author="FPA";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M2 Paratrooper Helmet";
		picture = "\sim_extra_gear\icons\ico_m2para.paa";
		model = "\sim_extra_gear\M2_helmet";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\sim_extra_gear\tex\M2_Helmet_co.paa" };
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\sim_extra_gear\M2_helmet";
			modelSides[]={0,1,2,3};
			hiddenSelections[] = { "camo" };
			class HitpointsProtectionInfo {
				class Head
				{
					hitpointName = "HitHead";
					armor = 2;
					passThrough = 0.5;
				};
			};
		};
	};
	class M38_tanker_helmet: ItemCore
	{
		author="FPA";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M38 Tanker Helmet";
		picture = "\sim_extra_gear\icons\ico_m38tanker.paa";
		model = "\sim_extra_gear\M38_tank_helmet";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\sim_extra_gear\tex\M38_tanker_co.paa" };
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\sim_extra_gear\M38_tank_helmet";
			modelSides[]={0,1,2,3};
			hiddenSelections[] = { "camo" };
		};
	};
	class cap_chi_type65: ItemCore
	{
		author="FPA";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Chinese Type 65 Field Cap";
		picture = "\sim_extra_gear\icons\ico_chicap.paa";
		model = "\sim_extra_gear\chi_cap";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\sim_extra_gear\tex\type65_cap_co.paa" };
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\sim_extra_gear\chi_cap";
			modelSides[]={0,1,2,3};
			hiddenSelections[] = { "camo" };
		};
	};
	class ssh40_helmet: ItemCore
	{
		author="FPA";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh-40 Helmet";
		picture = "\sim_extra_gear\icons\ico_ssh40.paa";
		model = "\sim_extra_gear\ssh40_helmet";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\sim_extra_gear\tex\ssh40_co.paa" };
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\sim_extra_gear\ssh40_helmet";
			modelSides[]={0,1,2,3};
			hiddenSelections[] = {"camo"};			
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 2;
					passThrough = 0.5;
				};
			};
		};
	};
	class unif_sov_m69: U_C_Poloshirt_blue
	{
		author="simkas, Antimatter Games";
		scope=2;
		displayName="Soviet M69 Uniform";
		picture="\sim_extra_gear\icons\uniforms\ico_sov_m69.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\sov_m69_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="unif_sov_m69";
			containerClass="Supply40";
			mass=20;
		};
	};
	class unif_chi_type65: U_C_Poloshirt_blue
	{
		author="simkas, Antimatter Games";
		scope=2;
		displayName="Chinese Type 65 Uniform";
		picture="\sim_extra_gear\icons\uniforms\ico_type65.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\type65_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="unif_chi_type65";
			containerClass="Supply40";
			mass=20;
		};
	};
	class unif_chi_type65_kpa: U_C_Poloshirt_blue
	{
		author="simkas, Antimatter Games";
		scope=2;
		displayName="KPA 1950 uniform";
		picture="\sim_extra_gear\icons\uniforms\ico_type65.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\type65_kpa_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="unif_chi_type65_kpa";
			containerClass="Supply40";
			mass=20;
		};
	};
	class vest_sov_webgear: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="vest_sov_webgear";
		scope=2;
		displayName="Soviet AK web gear";
		picture="\sim_extra_gear\icons\vests\ico_sov_webgear.paa";
		model="\sim_extra_gear\sov_webbing.p3d";
		class ItemInfo: VestItem		
		{
			uniformModel="\sim_extra_gear\sov_webbing.p3d";
			containerClass="Supply120";
			mass=10;
		};
	};
	class vest_sov_chestrig: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="vest_sov_chestrig";
		scope=2;
		displayName="Soviet AK Chestrig";
		picture="\sim_extra_gear\icons\vests\chestrig.paa";
		model="\sim_extra_gear\sov_chestrig.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\sov_chestrig.p3d";
			containerClass="Supply180";
			mass=10;
		};
	};
	class vest_sov_holster: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="vest_sov_holster";
		scope=2;
		displayName="Soviet Officer Belt";
		picture="\sim_extra_gear\icons\vests\ico_sov_pistol.paa";
		model="\sim_extra_gear\sov_pistolgear.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\sov_pistolgear.p3d";
			containerClass="Supply60";
			mass=10;
		};
	};
	class vest_SADF_pat83: Vest_Camo_Base
	{
		author="simkas";
		_generalMacro="vest_SADF_pat83";
		scope=2;
		displayName="Pattern 83 LBV";
		picture="\sim_extra_gear\icons\vests\ico_SADF_LBV.paa";
		model="\sim_extra_gear\SADF_LBV.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\sim_extra_gear\SADF_LBV.p3d";
			containerClass="Supply160";
			mass=10;
		};
	};
	class unif_PCU_jacket: U_C_Poloshirt_blue
	{
		author="simkas, Infinity Ward";
		scope=2;
		displayName="PCU Softshell Jacket (Desert)";
		picture="\sim_extra_gear\icons\uniforms\ico_pcu_desert.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\pcu_jacket_top_co.paa",
			"sim_extra_gear\tex\pcu_jacket_bottom_co.paa",
			"sim_extra_gear\tex\pcu_jacket_scarf_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="unif_PCU_jacket";
			containerClass="Supply40";
			mass=20;
		};
	};
	class unif_PCU_jacket_arctic: unif_PCU_jacket
	{
		author="simkas, Infinity Ward";
		displayName="PCU Softshell Jacket (Arctic)";
		picture="\sim_extra_gear\icons\uniforms\ico_pcu_arctic.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\pcu_jacket_top_arctic.paa",
			"sim_extra_gear\tex\pcu_jacket_bottom_arctic.paa",
			"sim_extra_gear\tex\pcu_jacket_scarf_white.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="unif_PCU_jacket_arctic";
			containerClass="Supply40";
			mass=20;
		};
	};
	class unif_PCU_jacket_wood: unif_PCU_jacket
	{
		author="simkas, Infinity Ward";
		displayName="PCU Softshell Jacket (Woodland)";
		picture="\sim_extra_gear\icons\uniforms\ico_pcu_wood.paa";
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\pcu_jacket_top_gray.paa",
			"sim_extra_gear\tex\pcu_jacket_bottom_multi.paa",
			"sim_extra_gear\tex\pcu_jacket_scarf_green.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="unif_PCU_jacket_wood";
			containerClass="Supply40";
			mass=20;
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
	class NVA_scarf: None
	{
		author="simkas, Antimatter Games";
		_generalMacro="NVA_scarf";
		displayname="Vietnamese Khan Ran Scarf";
		model="\sim_extra_gear\NVA_scarf";
		picture="\sim_extra_gear\icons\ico_viet_scarf.paa";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\sim_extra_gear\tex\nva_hat_co.paa" };
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
	class VSM_magpul_flightglove_standalone
	{
		scope=2;
		author="VanSchmoozin";
		displayname="Magpul Flight Gloves";
		model="\sim_extra_gear\VSM_magpul_flightglove_standalone";
		hiddenSelections[]=
		{
			"_MagpulGloves"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_magpul_co.paa"
		};
		picture="\sim_extra_gear\icons\gloves\ico_magpul_green.paa";
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
			0,
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
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
	};
	class VSM_magpul_flightglove_cut_standalone
	{
		scope=2;
		author="VanSchmoozin";
		displayname="Magpul Flight Gloves Cut";
		model="\sim_extra_gear\VSM_magpul_flightglove_cut_standalone";
		hiddenSelections[]=
		{
			"_MagpulGloves"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_magpul_co.paa"
		};
		picture="\sim_extra_gear\icons\gloves\ico_magpul_green_cut.paa";
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
			0,
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
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
	};
	class VSM_flightglove_standalone
	{
		scope=2;
		author="VanSchmoozin";
		displayname="Flight Gloves";
		model="\sim_extra_gear\VSM_511_flightglove_standalone";
		hiddenSelections[]=
		{
			"_MagpulGloves"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_magpul_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves.rvmat"
		};
		picture="\sim_extra_gear\icons\gloves\ico_flight_green.paa";
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
			0,
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
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
	};
	class VSM_511_flightglove_Black_standalone
	{
		scope=2;
		author="VanSchmoozin";
		displayname="511 Gloves (Black) ";
		model="\sim_extra_gear\VSM_511_flightglove_standalone";
		hiddenSelections[]=
		{
			"_MagpulGloves"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_511_Black.paa"
		};
		picture="\sim_extra_gear\icons\gloves\ico_511_black.paa";
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
			0,
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
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
	};
	class VSM_splav_flightglove_OD_standalone
	{
		scope=2;
		author="VanSchmoozin";
		displayname="SPLAV Gloves (OD) ";
		model="\sim_extra_gear\VSM_511_flightglove_standalone";
		hiddenSelections[]=
		{
			"_MagpulGloves"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_SPLAV_OD.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sim_extra_gear\tex\gloves\VSM_flightgloves_splav.rvmat"
		};
		picture="\sim_extra_gear\icons\gloves\ico_splav_green.paa";
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
			0,
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
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
	};
	class VSM_MPACT_Gloves_black_standalone
	{
		scope=2;
		author="VanSchmoozin";
		displayname="MPACT Gloves (black) ";
		model="\sim_extra_gear\VSM_MPACT_Gloves_standalone";
		hiddenSelections[]=
		{
			"_MPACT"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_MPACT_gloves_black.paa"
		};
		picture="\sim_extra_gear\icons\gloves\ico_mpact_black.paa";
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
			0,
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
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
	};
	class VSM_MPACT_Gloves_cut_black_standalone
	{
		scope=2;
		author="VanSchmoozin";
		displayname="MPACT Gloves Cut (black) ";
		model="\sim_extra_gear\VSM_MPACT_Gloves_cut_standalone";
		hiddenSelections[]=
		{
			"_MPACT"
		};
		hiddenSelectionsTextures[]=
		{
			"sim_extra_gear\tex\gloves\VSM_MPACT_gloves_black.paa"
		};
		picture="\sim_extra_gear\icons\gloves\ico_mpact_cut_black.paa";
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
			0,
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
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
	};
};
