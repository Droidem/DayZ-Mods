class CfgPatches
{
    class AoE_Legs
	{
        units[]=
		{
            "AoE_Gear_Legs_BootyShorts_Mafia_Brown"
        };
        weapons[]={};
        requiredVersion = 0.1;
        requiredAddons[]=
		{
            "DZ_Data",
            "DZ_Characters_Pants"
        };
    };
};
class CfgMods
{
    class AoE_Legs
	{
        type = "mod";
        dir = "Legs";
        name = "AoE's Legs";
        author = "Droidem";
    };
};
class cfgVehicles
{
    class ShortJeans_ColorBase;
	class AoE_Gear_Legs_BootyShorts_Mafia_Brown: ShortJeans_ColorBase
	{
        scope = 2;
		displayName = "Mafia Freshie Booty Shorts";
        descriptionShort = "This is the basic Mafia Booty Shorts. It wont protect you from much, but it will do in a pinch. Fight For Freedom!";
        hiddenSelectionsTextures[]=
		{
            "Legs\data\AoE_Gear_Legs_BootyShorts_Mafia_Brown.paa",
            "Legs\data\AoE_Gear_Legs_BootyShorts_Mafia_Brown.paa",
            "Legs\data\AoE_Gear_Legs_BootyShorts_Mafia_Brown.paa"
        };
    };
};