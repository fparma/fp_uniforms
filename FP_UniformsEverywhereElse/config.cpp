class CfgPatches
{
	class FP_UniformsEverywhereElse
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR"
		};
	};
};
class CfgVehicles
{
	class I_soldier_F;
	class FP_Rifleman_RhodieBrush: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP RH Rhodesian Brushstroke";
		nakedUniform="U_BasicBody";
		uniformClass="FP_RhodieBrush";
                author="FP Mod Team";
		side = 2;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_RhodieCam.paa"
		};
	};
	class FP_Rifleman_RhodieWinterBrush: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP RH Rhodesian Winter Brushstroke";
		nakedUniform="U_BasicBody";
		uniformClass="FP_RhodieBrush";
                author="FP Mod Team";
		side = 2;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_RhodieCamWinter.paa"
		};
	};
	class FP_Rifleman_KyrelianSplinter: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP KY Splinter";
		nakedUniform="U_BasicBody";
		uniformClass="FP_KyrelianSplinter";
                author="FP Mod Team";
		side = 2;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_KyrelianSplinter.paa"
		};
	};
	class FP_Rifleman_KyrelianSplinterWinter: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP KY Winter Splinter";
		nakedUniform="U_BasicBody";
		uniformClass="FP_KyrelianSplinterWinter";
                author="FP Mod Team";
		side = 2;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_KyrelianSplinterWinter.paa"
		};
	};
	class FP_Rifleman_Black: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Black";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Black";
        author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_Black.paa"
		};
	};
	class FP_Rifleman_Grey: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Grey";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Grey";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_Grey.paa"
		};
	};
	class FP_Rifleman_OD: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Olive Drab";
		nakedUniform="U_BasicBody";
		uniformClass="FP_OD";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_OD.paa"
		};
	};
	class FP_Rifleman_Khaki: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Khaki";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Khaki";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_Khaki400.paa"
		};
	};
	class FP_Rifleman_RangerGreen: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Ranger Green";
		nakedUniform="U_BasicBody";
		uniformClass="FP_RangerGreen";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_RangerGreen.paa"
		};
	};
	class FP_Rifleman_KhakiBrown: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Khaki Brown";
		nakedUniform="U_BasicBody";
		uniformClass="FP_KhakiBrown";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_KhakiBrown.paa"
		};
	};
	class FP_Rifleman_OliveBrown: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Olive Brown";
		nakedUniform="U_BasicBody";
		uniformClass="FP_OliveBrown";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_OliveBrown.paa"
		};
	};
	class FP_Rifleman_White: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP White";
		nakedUniform="U_BasicBody";
		uniformClass="FP_White";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_White.paa"
		};
	};	
	class FP_Rifleman_Squares: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="MGS3 Squares";
		nakedUniform="U_BasicBody";
		uniformClass="FP_MGS3_squares";
        author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\MGS3_squares.paa"
		};
	};	
	class I_Soldier_02_F;
	class FP_Recon_Squares: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="MGS3 Squares Sleeves";
		nakedUniform="U_BasicBody";
		uniformClass="FP_MGS3_squares_recon";
                author="CSLeader";
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\MGS3_squares.paa"
		};
	};	
	class FP_Rifleman_DTS: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="MGS Desert Tiger Stripe";
		nakedUniform="U_BasicBody";
		uniformClass="FP_MGS_DTS";
        author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\MGS_TigerStripeDesert.paa"
		};
	};		
	class FP_Recon_DTS: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="MGS Desert Tiger Stripe (Sleeves)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_MGS_DTS_recon";
                author="CSLeader";
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\MGS_TigerStripeDesert.paa"
		};
	};

	class FP_Rifleman_JTS: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="MGS Jungle Tiger Stripe";
		nakedUniform="U_BasicBody";
		uniformClass="FP_MGS_JTS";
        author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\MGS_TigerStripeJungle.paa"
		};
	};		
	class FP_Recon_JTS: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="MGS Jungle Tiger Stripe (Sleeves)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_MGS_JTS_recon";
                author="CSLeader";
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\MGS_TigerStripeJungle.paa"
		};
	};
	class FP_Rifleman_OTS: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="MGO3 Tiger Stripe";
		nakedUniform="U_BasicBody";
		uniformClass="FP_MGO_OTS";
        author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\MGO_TigerStripe.paa"
		};
	};		
	class FP_Recon_OTS: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="MGO3 Tiger Stripe (Sleeves)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_MGO_OTS_recon";
                author="CSLeader";
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\MGO_TigerStripe.paa"
		};
	};		
	class FP_Rifleman_Ten: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP RU Ten'";
		nakedUniform="U_BasicBody";
		uniformClass="FP_RU_Ten";
        author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_Ten'.paa"
		};
	};
	class FP_Recon_Ten: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="FP Ten' Sleeves";
		nakedUniform="U_BasicBody";
		uniformClass="FP_RU_Ten_recon";
                author="CSLeader";
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_Ten's.paa"
		};
	};	
	class O_officer_F;
	class FP_Rifleman_grn: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Green (BDU)";
		uniformClass="FP_Uniform_grn";
		author="FP Mod Team";
		side = 1;
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
		side = 2;
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
		side = 1;
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
	class FP_Rifleman_WhiteOfficer: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP White (BDU)";
		uniformClass="FP_Uniform_WhiteOfficer";
		author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\officer_wht.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_1121: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP HEL Dress Uniform";
		uniformClass="FP_Uniform_1121";
		author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\officer_1121.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class B_soldier_F;
    class ESP_Rifleman_PGAC: B_Soldier_F
    {
        _generalMacro="B_Soldier_F";
        scope=1;
        displayName="PGAC Rifleman";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PGAC_M90";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PAAPMCSplinter.paa"};
    };
	class B_Soldier_02_F;
	class ESP_Tee_PGAC: B_Soldier_02_F
    {
        _generalMacro="B_Soldier_02_F";
        scope=1;
        displayName="PGAC Tee";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PGAC_M90_tee";
        author="CSLeader";
        hiddenSelections[]={"Camo","Camo2", "insignia"};
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PAAPMCSplinter.paa", "\A3\Characters_F\Common\Data\basicbody_blue_co.paa"};
    };		
	class B_Soldier_03_F;
	class ESP_Recon_PGAC: B_Soldier_03_F
    {
        _generalMacro="B_Soldier_03_F";
        scope=1;
        displayName="PGAC Recon";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PGAC_M90_recon";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PAAPMCSplinter.paa"};
    };
	class B_sniper_F;
	class ESP_Sniper_PGAC: B_sniper_F
    {
         _generalMacro="B_sniper_F";
        scope=1;
        displayName="PGAC Sniper";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PGAC_M90_ghillie";
        author="CSLeader";
        hiddenSelections[]={"Camo", "Camo3", "insignia"};
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PAAPMCSplinter.paa", "FP_UniformsEverywhereElse\SkinsUniform\ghillie_night_co.paa"};
    };
    class ESP_Rifleman_PDEF: B_Soldier_F
    {
        _generalMacro="B_Soldier_F";
        scope=1;
        displayName="PGAC Rifleman";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PDEF_M90";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PAAPMCSplinter_Desert.paa"};
    };
	class ESP_Tee_PDEF: B_Soldier_02_F
    {
        _generalMacro="B_Soldier_02_F";
        scope=1;
        displayName="PDEF Tee";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PDEF_M90_tee";
        author="CSLeader";
        hiddenSelections[]={"Camo", "Camo2", "insignia"};
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PAAPMCSplinter_Desert.paa", "\A3\Characters_F\Common\Data\basicbody_brown_co.paa"};
    };		
	
	class ESP_Recon_PDEF: B_Soldier_03_F
    {
        _generalMacro="B_Soldier_03_F";
        scope=1;
        displayName="PGAC Recon";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PGAC_M90_recon";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PAAPMCSplinter_Desert.paa"};
    };
	class ESP_Sniper_PDEF: B_sniper_F
    {
        _generalMacro="B_sniper_F";
        scope=1;
        displayName="PDEF Sniper";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PDEF_M90_ghillie";
        author="CSLeader";
        hiddenSelections[]={"Camo", "Camo3", "insignia"};
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PAAPMCSplinter_Desert.paa", "\A3\characters_f\common\data\ghillie_desert_co.paa"};
    };
    class ESP_Rifleman_PRAF: B_Soldier_F
    {
        _generalMacro="B_Soldier_F";
        scope=1;
        displayName="PRAF Rifleman";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PRAF_M90";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PAAPMCSplinter_Woodland.paa"};
    };
	class ESP_Tee_PRAF: B_Soldier_02_F
    {
        _generalMacro="B_Soldier_02_F";
        scope=1;
        displayName="PGAC Tee";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PRAF_M90_tee";
        author="CSLeader";
        hiddenSelections[]={"Camo", "Camo2", "insignia"};
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PAAPMCSplinter_Woodland.paa", "\A3\Characters_F\Common\Data\basicbody_green_co.paa"};
    };		
    class ESP_Recon_PRAF: B_Soldier_03_F
    {
        _generalMacro="B_Soldier_03_F";
        scope=1;
        displayName="PRAF Recon";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PRAF_M90_recon";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PAAPMCSplinter_Woodland.paa"};
    };
	class ESP_Sniper_PRAF: B_sniper_F
    {
        _generalMacro="B_sniper_F";
        scope=1;
        displayName="PRAF Sniper";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PRAF_M90_ghillie";
        author="CSLeader";
        hiddenSelections[]={"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PAAPMCSplinter_Woodland.paa"};
    };
        class ESP_Rifleman_PGI: B_Soldier_F
        {
                _generalMacro="B_Soldier_F";
                scope=1;
                displayName="PGI Rifleman";
                nakedUniform="U_BasicBody";
                uniformClass="ESP_PGI_Digital";
                author="CSLeader";
                hiddenSelections[]=
                {"Camo", "insignia"};
                hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PGIDigital.paa"};
        };
		class ESP_Tee_PGI: B_Soldier_02_F
    {
        _generalMacro="B_Soldier_02_F";
        scope=1;
        displayName="PGI Tee";
        nakedUniform="U_BasicBody";
        uniformClass="ESP_PGI_Digital_tee";
        author="CSLeader";
        hiddenSelections[]={"Camo", "Camo2", "insignia"};
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PGIDigital.paa", "\A3\Characters_F\Common\Data\basicbody_black_co.paa"};
    };
		class ESP_Recon_PGI: B_Soldier_03_F
        {
                _generalMacro="B_Soldier_03_F";
                scope=1;
                displayName="PGI Recon";
                nakedUniform="U_BasicBody";
                uniformClass="ESP_PGI_Digital_recon";
                author="CSLeader";
                hiddenSelections[]=
                {"Camo", "insignia"};
                hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PGIDigital.paa"};
        };
		class ESP_Sniper_PGI: B_sniper_F
        {
                _generalMacro="B_sniper_F";
                scope=1;
                displayName="PGI Sniper";
                nakedUniform="U_BasicBody";
                uniformClass="ESP_PGI_Digital_ghillie";
                author="CSLeader";
                hiddenSelections[]=
                {"Camo", "Camo3", "insignia"};
                hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\ESP_PGIDigital.paa", "FP_UniformsEverywhereElse\SkinsUniform\ghillie_night_co.paa"};
        };	
	class ESP_Rifleman_Voytek: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="Voytek Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="ESP_Voytek_M07";
                author="CSLeader";
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\Voytek_M07_Woodland.paa"
		};
	};	
	class ESP_Recon_Voytek: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="Voytek Recon";
		nakedUniform="U_BasicBody";
		uniformClass="ESP_Voytek_M07_recon";
                author="CSLeader";
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\Voytek_M07_Woodland.paa"
		};
	};
	class I_Sniper_F;
	class ESP_Sniper_Voytek: I_Sniper_F
	{
		_generalMacro="I_Sniper_F";
		scope=1;
		displayName="Voytek Sniper";
		nakedUniform="U_BasicBody";
		uniformClass="ESP_Voytek_M07_ghillie";
                author="CSLeader";
		hiddenSelections[]=
		{
			"Camo", "Camo3",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\Voytek_M07_Woodland.paa", "\A3\characters_f\common\data\ghillie_woodland_co.paa"
		};
	};
	class B_Carryall_Base;
	class B_Carryall_Inv: B_Carryall_Base
	{
		armor = 0;
		author="FP Mod Team";
		displayName = "FP Carryall Backpack (Invisible)";
		hiddenSelectionsTextures[] = {""};
		model = "\A3\Structures_F\Mil\Helipads\HelipadEmpty_F.p3d";
		picture = "";
		scope = 2;
	};
};

class cfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class FP_Uniform_RhodieBrush: U_I_CombatUniform
	{
		scope=2;
		displayName="FP RH Rhodesian Brushstroke";
		picture="FP_UniformsEverywhereElse\UI\rhodiecamicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_RhodieBrush";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_RhodieWinterBrush: U_I_CombatUniform
	{
		scope=2;
		displayName="FP RH Rhodesian Winter Brushstroke";
		picture="FP_UniformsEverywhereElse\UI\rhodiecamwintericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_RhodieWinterBrush";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KyrelianSplinter: U_I_CombatUniform
	{
		scope=2;
		displayName="FP KY Splinter";
		picture="FP_UniformsEverywhereElse\UI\kyreliansplintericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KyrelianSplinter";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KyrelianSplinterWinter: U_I_CombatUniform
	{
		scope=2;
		displayName="FP KY Winter Splinter";
		picture="FP_UniformsEverywhereElse\UI\kyrelianwintersplintericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KyrelianSplinterWinter";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Black: U_I_CombatUniform
	{
		scope=2;
		displayName="FP Black";
		picture="FP_UniformsEverywhereElse\UI\blackicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Black";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Grey: U_I_CombatUniform
	{
		scope=2;
		displayName="FP Grey";
		picture="FP_UniformsEverywhereElse\UI\greyicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Grey";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_OD: U_I_CombatUniform
	{
		scope=2;
		displayName="FP OD";
		picture="FP_UniformsEverywhereElse\UI\olivedrabicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_OD";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Khaki: U_I_CombatUniform
	{
		scope=2;
		displayName="FP Khaki";
		picture="FP_UniformsEverywhereElse\UI\khakiicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Khaki";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_RangerGreen: U_I_CombatUniform
	{
		scope=2;
		displayName="FP Ranger Green";
		picture="FP_UniformsEverywhereElse\UI\rgicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_RangerGreen";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KhakiBrown: U_I_CombatUniform
	{
		scope=2;
		displayName="FP Khaki Brown";
		picture="FP_UniformsEverywhereElse\UI\kbicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KhakiBrown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_OliveBrown: U_I_CombatUniform
	{
		scope=2;
		displayName="FP Olive Brown";
		picture="FP_UniformsEverywhereElse\UI\obicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_OliveBrown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_White: U_I_CombatUniform
	{
		scope=2;
		displayName="FP White";
		picture="FP_UniformsEverywhereElse\UI\whiteicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_White";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class FP_Uniform_Squares: U_I_CombatUniform
	{
		scope=2;
		displayName="FP MGS3 Squares";
		picture="FP_UniformsEverywhereElse\UI\mgs3squaresicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Squares";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Squares_recon: U_I_CombatUniform
	{
		scope=2;
		displayName="FP MGS3 Squares (Sleeves)";
		picture="FP_UniformsEverywhereElse\UI\mgs3squaresicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Recon_Squares";
			containerClass="Supply40";
			mass=40;
		};
	};	


	class FP_Uniform_DTS: U_I_CombatUniform
	{
		scope=2;
		displayName="FP MGS Desert Tiger Stripe";
		picture="FP_UniformsEverywhereElse\UI\mgs5deserttsicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_DTS";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_DTS_recon: U_I_CombatUniform
	{
		scope=2;
		displayName="FP MGS Desert Tiger Stripe (Sleeves)";
		picture="FP_UniformsEverywhereElse\UI\mgs5deserttsicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Recon_DTS";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class FP_Uniform_JTS: U_I_CombatUniform
	{
		scope=2;
		displayName="FP MGS Jungle Tiger Stripe";
		picture="FP_UniformsEverywhereElse\UI\mgs5jungletsicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_JTS";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_JTS_recon: U_I_CombatUniform
	{
		scope=2;
		displayName="FP MGS Jungle Tiger Stripe (Sleeves)";
		picture="FP_UniformsEverywhereElse\UI\mgs5jungletsicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Recon_JTS";
			containerClass="Supply40";
			mass=40;
		};
	}
	class FP_Uniform_OTS: U_I_CombatUniform
	{
		scope=2;
		displayName="FP MGO3 Tiger Stripe";
		picture="FP_UniformsEverywhereElse\UI\mgo3tsicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_OTS";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_OTS_recon: U_I_CombatUniform
	{
		scope=2;
		displayName="FP MGO3 Tiger Stripe (Sleeves)";
		picture="FP_UniformsEverywhereElse\UI\mgo3tsicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Recon_OTS";
			containerClass="Supply40";
			mass=40;
		};
	}
	class FP_Uniform_Ten: U_I_CombatUniform
	{
		scope=2;
		displayName="FP RU Ten'";
		picture="FP_UniformsEverywhereElse\UI\tenicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Ten";
			containerClass="Supply40";
			mass=40;
		};
	};		
	class U_O_OfficerUniform_ocamo;
	class FP_Uniform_grn: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP Green (BDU)";
		picture="FP_UniformsEverywhereElse\UI\u_grn_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
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
		displayName="FP Grey (BDU)";
		picture="FP_UniformsEverywhereElse\UI\u_gry_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
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
		displayName="FP Khaki (BDU)";
		picture="FP_UniformsEverywhereElse\UI\u_khk_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_khk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_1121: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP HEL Dress Uniform";
		picture="FP_UniformsEverywhereElse\UI\1121icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_1121";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_WhiteOfficer: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="FP White (BDU)";
		picture="FP_UniformsEverywhereElse\UI\u_wht_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_WhiteOfficer";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_m88_patchless;
	class FP_Uniform_GreenM88: rhs_uniform_m88_patchless
	{
		scope=2;
		displayName="FP M88 (Green)";
		picture="\A3\characters_f\data\ui\icon_u_b_combatuniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
                author="FP Mod Team";
		side = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_GreenM88";
			containerClass="Supply20";
			mass=80;
		};
	};
    class U_B_CombatUniform_mcam;
    class ESP_Uniform_PGACM90: U_B_CombatUniform_mcam
    {
        scope=2;
        displayName="FP PGAC Splinter";
        picture="FP_UniformsEverywhereElse\UI\m90pgacicon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Rifleman_PGAC";
            containerClass="Supply40";
            mass=40;
        };
    };
    class U_B_CombatUniform_mcam_vest;
    class ESP_Uniform_PGACM90_recon: U_B_CombatUniform_mcam_vest
	{
        scope=2;
        displayName="FP PGAC Splinter (Rolled-up)";
        picture="FP_UniformsEverywhereElse\UI\m90pgacicon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Recon_PGAC";
            containerClass="Supply40";
            mass=40;
        };
	};	
    class U_B_CombatUniform_mcam_tshirt;
    class ESP_Uniform_PGACM90_tee: U_B_CombatUniform_mcam_tshirt
	{
        scope=2;
        displayName="FP PGAC Splinter (T-Shirt)";
        picture="FP_UniformsEverywhereElse\UI\m90pgacicon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Tee_PGAC";
            containerClass="Supply40";
            mass=40;
        };		
    };		
    class U_B_GhillieSuit;
    class ESP_Uniform_PGACM90_ghillie: U_B_GhillieSuit
	{
        scope=2;
        displayName="FP PGAC Splinter (Ghillie)";
        picture="FP_UniformsEverywhereElse\UI\m90pgacicon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Sniper_PGAC";
            containerClass="Supply40";
            mass=40;
        };
    };
    class ESP_Uniform_PDEFM90: U_B_CombatUniform_mcam
    {
        scope=2;
        displayName="FP PDEF Splinter";
        picture="FP_UniformsEverywhereElse\UI\m90pdeficon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Rifleman_PDEF";
            containerClass="Supply40";
            mass=40;
        };
    };
    class ESP_Uniform_PDEFM90_recon: U_B_CombatUniform_mcam_vest
	{
        scope=2;
        displayName="FP PDEF Splinter (Rolled-up)";
        picture="FP_UniformsEverywhereElse\UI\m90pdeficon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Recon_PDEF";
            containerClass="Supply40";
            mass=40;
        };
    };
    class ESP_Uniform_PDEFM90_tee: U_B_CombatUniform_mcam_tshirt
	{
        scope=2;
        displayName="FP PDEF Splinter (T-Shirt)";
        picture="FP_UniformsEverywhereElse\UI\m90pdeficon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Tee_PDEF";
            containerClass="Supply40";
            mass=40;
        };	
	};
    class ESP_Uniform_PDEFM90_ghillie: U_B_GhillieSuit
	{
	    scope=2;
        displayName="FP PDEF Splinter (Ghillie)";
        picture="FP_UniformsEverywhereElse\UI\m90pdeficon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Sniper_PDEF";
            containerClass="Supply40";
            mass=40;
        };
    };
    class ESP_Uniform_PRAFM90: U_B_CombatUniform_mcam
    {
        scope=2;
        displayName="FP PRAF Splinter";
        picture="FP_UniformsEverywhereElse\UI\m90praficon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Rifleman_PRAF";
            containerClass="Supply40";
            mass=40;
        };
    };
    class ESP_Uniform_PRAFM90_recon: U_B_CombatUniform_mcam_vest
	{
	    scope=2;
        displayName="FP PRAF Splinter (Rolled-up)";
        picture="FP_UniformsEverywhereElse\UI\m90praficon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Recon_PRAF";
            containerClass="Supply40";
            mass=40;
        };
	};	
    class ESP_Uniform_PRAFM90_tee: U_B_CombatUniform_mcam_tshirt
	{
        scope=2;
        displayName="FP PRAF Splinter (T-Shirt)";
        picture="FP_UniformsEverywhereElse\UI\m90praficon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Tee_PRAF";
            containerClass="Supply40";
            mass=40;
        };		
    };
    class ESP_Uniform_PRAFM90_ghillie: U_B_GhillieSuit
	{
	    scope=2;
        displayName="FP PRAF Splinter (Ghillie)";
        picture="FP_UniformsEverywhereElse\UI\m90praficon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Sniper_PRAF";
            containerClass="Supply40";
            mass=40;
        };
    };
        class ESP_Uniform_PGIDigital: U_B_CombatUniform_mcam
  {
                scope=2;
                displayName="FP PGI Digital";
                picture="FP_UniformsEverywhereElse\UI\DigitalPGIicon.paa";
                model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="CSLeader";
                class ItemInfo: UniformItem
                {
                        uniformModel="-";
                        uniformClass="ESP_Rifleman_PGI";
                        containerClass="Supply40";
                        mass=40;
                };
   };     
        class ESP_Uniform_PGIDigital_recon: U_B_CombatUniform_mcam_vest
	  {
	  
                scope=2;
                displayName="FP PGI Digital (Rolled-up)";
                picture="FP_UniformsEverywhereElse\UI\DigitalPGIicon.paa";
                model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="CSLeader";
                class ItemInfo: UniformItem
                {
                        uniformModel="-";
                        uniformClass="ESP_Recon_PGI";
                        containerClass="Supply40";
                        mass=40;
                };
    };
	
    class ESP_Uniform_PGIDigital_tee: U_B_CombatUniform_mcam_tshirt
	{
        scope=2;
        displayName="FP PGI Digital (T-Shirt)";
        picture="FP_UniformsEverywhereElse\UI\DigitalPGIicon.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        author="CSLeader";
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="ESP_Tee_PGI";
            containerClass="Supply40";
            mass=40;
        };		
    };		
        class ESP_Uniform_PGIDigital_ghillie: U_B_GhillieSuit
	  {
	  
                scope=2;
                displayName="FP PGI Digital (Ghillie)";
                picture="FP_UniformsEverywhereElse\UI\DigitalPGIicon.paa";
                model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="CSLeader";
                class ItemInfo: UniformItem
                {
                        uniformModel="-";
                        uniformClass="ESP_Sniper_PGI";
                        containerClass="Supply40";
                        mass=40;
                };
    };	
	class ESP_Uniform_Voytek: U_I_CombatUniform
	{
		scope=2;
		displayName="FP Voytek M07 Woodland";
		picture="FP_UniformsEverywhereElse\UI\voytekicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESP_Rifleman_Voytek";
			containerClass="Supply40";
			mass=40;
		};
	};
    class U_I_CombatUniform_shortsleeve;
	class ESP_Uniform_Voytek_recon: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="FP Voytek M07 Woodland (Rolled-Up)";
		picture="FP_UniformsEverywhereElse\UI\voytekicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESP_Recon_Voytek";
			containerClass="Supply40";
			mass=40;
		};
    };		
	class U_I_GhillieSuit;
	class ESP_Uniform_Voytek_ghillie: U_I_GhillieSuit
	{
		scope=2;
		displayName="FP Voytek M07 Woodland (Ghillie)";
		picture="FP_UniformsEverywhereElse\UI\voytekicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ESP_Sniper_Voytek";
			containerClass="Supply40";
			mass=40;
		};
	};	
			
    class H_HelmetIA;
	class FP_Helmet_RhodieBrush: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP RH MICH (Rhodesian Brushstroke)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\FP_RhodieHelmet.paa"};
	};
	class FP_Helmet_RhodieBrushWinter: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP RH MICH (Rhodesian Brushstroke Winter)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\FP_RhodieWinterHelmet.paa"};
	};
	class FP_Helmet_KyrelianSplinter: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP KY MICH (Splinter)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\FP_KyrelianHelmet.paa"};
	};
	class FP_Helmet_KyrelianWinterSplinter: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP KY MICH (Winter Splinter)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\FP_KyrelianWinterHelmet.paa"};
	};
    class LOP_H_PASGTHelmet_OLV;
	class FP_Helmet_UNPASGT: LOP_H_PASGTHelmet_OLV
	{
		author = "FP Mod Team";
		_generalMacro = "LOP_H_PASGTHelmet_OLV";
		scope = 2;
		displayName = "FP UN PASGT";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\FP_UNHelmet.paa"};
	};
	class rhsusf_mich_bare_norotos_alt;
    class ESP_Helmet_MICH: rhsusf_mich_bare_norotos_alt
    {
        author = "CSLeader";
        _generalMacro = "rhsusf_mich_bare_norotos_alt";
        scope = 2;
        displayName = "MICH 2000 (Black/Norotos)";
		hiddenSelections[] = {"Camo", "Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\ESP_PGACMich.paa", "FP_UniformsEverywhereElse\SkinsHeadgear\mich_acc_pgac_co.paa", "FP_UniformsEverywhereElse\SkinsHeadgear\ESP_PGACMich.paa"};
   	};
    class rhsusf_mich_bare_norotos_arc;
    class ESP_Helmet_MICH_arc: rhsusf_mich_bare_norotos_arc
    {
        author = "CSLeader";
        _generalMacro = "rhsusf_mich_bare_norotos_arc";
        scope = 2;
        displayName = "MICH 2000 (Black/Norotos/ARC)";
		hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo 3"};
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\ESP_PGACMich.paa", "FP_UniformsEverywhereElse\SkinsHeadgear\mich_acc_pgac_co.paa", "FP_UniformsEverywhereElse\SkinsHeadgear\ESP_PGACMich.paa"};
    };
	class rhsusf_cvc_helmet;
    class ESP_Helmet_CVC: rhsusf_cvc_helmet
    {
        author = "CSLeader";
        _generalMacro = "rhsusf_cvc_helmet";
        scope = 2;
        displayName = "ACVC-H (Black)";
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\ESP_PGAC_CVC.paa"};
    };
	class rhsusf_cvc_ess;
    class ESP_Helmet_CVC_ESS: rhsusf_cvc_ess
    {
        author = "CSLeader";
        _generalMacro = "rhsusf_cvc_ess";
        scope = 2;
        displayName = "ACVC-H (Black/ESS)";
        hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\ESP_PGAC_CVC.paa"};
    };	
	class H_MilCap_gry;
	class H_MilCap_blk: H_MilCap_gry
	{
		author = "Bohemia Interactive";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "Military Cap [Black]";
		hiddenSelectionsTextures[] = {"\A3\characters_f_epb\Common\Data\cappatrol_blk_co.paa"};		
	};
    class LOP_H_PASGTHelmet_cover_TRI;
	class LOP_H_PASGTHelmet_cover_BLK: LOP_H_PASGTHelmet_cover_TRI
	{
		author="Leights OPFOR Pack";
		scope=2;
		displayName="PASGT Helmet cover (black)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\pasgt_helmet_co_voytek.paa"
		};
	};		
    class H_Beret_blk;
	class FP_Beret_Purple: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Purple)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretPurple.paa"};
	};
	class FP_Beret_Brown: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Brown)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretBrown.paa"};
	};
	class FP_Beret_Blue: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Blue)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretBlue.paa"};
	};
	class FP_Beret_Green: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Green)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretGreen.paa"};
	};
	class FP_Beret_Grey: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Grey)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretGrey.paa"};
	};
	class FP_Beret_Maroon: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Maroon)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretMaroon.paa"};
	};
	class FP_Beret_Pink: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Pink)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretPink.paa"};
	};
	class FP_Beret_Tan: H_Beret_blk
	{
		author = "FP Mod Team";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "FP Beret (Tan)";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretTan.paa"};
	};
    class V_PlateCarrier1_rgr;
	class VestItem;
	class FP_Carrier_CoyotePatchless: V_PlateCarrier1_rgr
	{
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;

		author = "BIS & FP Mod Team";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "FP Light Carrier (Coyote Brown, Patchless)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsCarrier\FP_PC_CoyotePatchless"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	class FP_Carrier_DarkCoyotePatchless: V_PlateCarrier1_rgr
	{
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;

		author = "BIS & FP Mod Team";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "FP Light Carrier (Dark Coyote, Patchless)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsCarrier\vests_cbr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	class FP_Carrier_BlackPatchless: V_PlateCarrier1_rgr
	{
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;

		author = "BIS & FP Mod Team";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "FP Light Carrier (Black, Patchless)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsCarrier\vests_blk_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	class FP_Carrier_KhakiPatchless: V_PlateCarrier1_rgr
	{
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;

		author = "BIS & FP Mod Team";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "FP Light Carrier (Khaki, Patchless)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsCarrier\vests_khk_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	class FP_Carrier_GreenPatchless: V_PlateCarrier1_rgr
	{
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;

		author = "BIS & FP Mod Team";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName = "FP Light Carrier (Ranger Green, Patchless)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsCarrier\vests_rgr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	class V_HarnessO_gry;
	class FP_Vest_HarnessGreen: V_HarnessO_gry
	{
		scope=2;
		displayName="FP M1956 Webbing";
		hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\clothing_grncamo_co.paa","FP_UniformsEverywhereElse\SkinsUniform\tech_grncamo_co.paa"};
		picture="FP_UniformsEverywhereElse\UI\icon_V_HarnessOU_grn_CA.paa";
		author="FP Mod Team";
	};
};
