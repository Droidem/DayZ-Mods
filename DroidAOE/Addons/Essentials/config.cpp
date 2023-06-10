////////////////////////////////////////////////////////////////////
//HUGE SHOUT OUT TO xXCONNOR23Xx FOR REPACKING AUTHORIZATION 
//https://steamcommunity.com/sharedfiles/filedetails/?id=2951379570
////////////////////////////////////////////////////////////////////

class CfgPatches
{
	class Essentials
	{
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Medical",
			"DZ_Scripts",
			"JM_CF_Scripts"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgMods
{
	class Essentials
	{
		dir="Essentials";
		name="Essentials";
        author="Moses";
		type="mod";
		dependencies[]=
		{
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				files[]=
				{
					"Essentials/3_Game"
				};
			};
			class worldScriptModule
			{
				files[]=
				{
					"Essentials/4_World"
				};
			};
			class missionScriptModule
			{
				files[]=
				{
					"Essentials/5_Mission"
				};
			};
		};
	};
};