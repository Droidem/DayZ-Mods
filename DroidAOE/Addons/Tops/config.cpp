class CfgPatches
{
    class AoE_Tops
	{
        units[]=
		{
            "AoE_Gear_Tops_Tshirt_Mafia_Brown"
        };
        weapons[]={};
        requiredVersion = 0.1;
        requiredAddons[]=
		{
            "DZ_Data",
            "DZ_Characters_Tops"
        };
    };
};
class CfgMods
{
    class AoE_Tops
	{
        type = "mod";
        dir = "Tops";
        name = "AoE's Tops";
        author = "Droidem";
    };
};
class cfgVehicles
{
    class TShirt_ColorBase;
	class AoE_Gear_Tops_Tshirt_Mafia_Brown: TShirt_ColorBase
	{
        scope = 2;
		displayName = "Mafia T-Shirt Camo";
        descriptionShort = "This is the basic Mafia sweatshirt. It wont protect you from much, but it will do in a pinch. Fight For Freedom!";
        hiddenSelectionsTextures[]=
		{
            "Tops\data\AoE_Gear_Tops_Tshirt_Mafia_Brown.paa",
            "Tops\data\AoE_Gear_Tops_Tshirt_Mafia_Brown.paa",
            "Tops\data\AoE_Gear_Tops_Tshirt_Mafia_Brown.paa"
        };
    };
};