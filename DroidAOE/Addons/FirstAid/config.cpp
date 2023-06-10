////////////////////////////////////////////////////////////////////
//HUGE HUGE HUGE THANK YOU TO THE FOLLOWING:
//ZuluNiner's FirstAidPouch https://steamcommunity.com/sharedfiles/filedetails/?id=2854033629
//Sprugle's Vanilla Item Retexturing https://www.youtube.com/watch?v=nrc9lkFUu0M&list=PLm6NfdQ3NmL9OBmbN-tl99F70bvzm6u7M&index=7
//Sprugle's Discord https://discord.gg/KuJZDvP
//Josie Garfunkle's JosiesClotheZ https://steamcommunity.com/sharedfiles/filedetails/?id=2922243406
//IceBlade's DrugsPlus https://steamcommunity.com/sharedfiles/filedetails/?id=2170927235
//Bloderz's Retexture Video https://www.youtube.com/watch?v=BT_lqv-Qd7k
////////////////////////////////////////////////////////////////////

class CfgPatches
{
   class FirstAid
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_tops",
			"DZ_Data",
			"DZ_Gear_Medical",
			"DZ_Gear_Containers",
			"DZ_Gear_Consumables",
			"JPC_Vest",
			"DZ_Scripts",
			"AdditionalMedicSupplies"
		};
	};
};
class CfgMods
{
	class FirstAid
	{
		type="mod";
		dir="FirstAid";
		name="AoE's First Aid Kit";
		author="Droidem";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"FirstAid/scripts/4_world"
				};
			};
			class imageSets
			{
				files[]=
				{
					"JPC_Vest/gui/imagesets/jpc_icons.imageset",
					"FirstAid/gui/imagesets/SampleUI.imageset"
				};
			};
		};
	};
};
class CfgSlots
{
	class Slot_MedicalBandage0
	{
		name="MedicalBandage0";
		displayName="$STR_CfgVehicles_BandageDressing0";
		ghostIcon="set:dayz_inventory image:medicalbandage";
	};
	class Slot_MedicalBandage1
	{
		name="MedicalBandage1";
		displayName="$STR_CfgVehicles_BandageDressing0";
		ghostIcon="set:dayz_inventory image:medicalbandage";
	};
	class Slot_MedicalAntibiotics
	{
		name="MedicalAntibiotics";
		displayName="$STR_CfgVehicles_TetracyclineAntibiotics0";
		ghostIcon="set:dayz_inventory image:MedicalAntibiotics";
	};
	class Slot_MedicalChlorineTablets
	{
		name="MedicalPurificationTablets";
		displayName="$STR_CfgVehicles_PurificationTablets0";
		ghostIcon="set:dayz_inventory image:MedicalPurificationTablets";
	};
	class Slot_Epinephrine
	{
		name = "Epinephrine";
		displayName="$STR_CfgVehicles_Epinephrine0";
		ghostIcon="set:jpc_icons image:morphine";
	};
	class Slot_Morphine
	{
		name = "Morphine";
		displayName="$STR_CfgVehicles_Morphine0";
		ghostIcon="set:jpc_icons image:morphine";
	};
	class Slot_MedicalDisinfectant
	{
		name="MedicalDisinfectant";
		displayName="Disinfectant";
		ghostIcon="set:dayz_inventory image:disinfectant";
	};
	class Slot_MedicalSalineBag
	{
		name="MedicalSalineBag";
		displayName="Saline";
		ghostIcon="set:dayz_inventory image:missing";
	};
	class Slot_MedicalBloodBag
	{
		name="MedicalBloodBag";
		displayName="BloodBag";
		ghostIcon="set:SampleUI image:iconBlood0";
	};
	class Slot_StartKitIV0
	{
		name="StartKitIV0";
		displayName="$STR_CfgVehicles_StartKitIV0";
		ghostIcon="set:dayz_inventory image:missing";
	};
	class Slot_StartKitIV1
	{
		name="StartKitIV1";
		displayName="$STR_CfgVehicles_StartKitIV0";
		ghostIcon="set:dayz_inventory image:missing";
	};	
	class Slot_MedicalVitamins
	{
		name="MedicalVitamins";
		displayName="$STR_CfgVehicles_VitaminBottle0";
		ghostIcon="set:dayz_inventory image:missing";
	};
   class Slot_AMS_Ai2 
   {
		name = "AMS_Ai2";
		displayName = "AMS_Ai2";
		ghostIcon = "set:dayz_inventory image:missing";
   };
	class Slot_Splint {
  
		name = "Splint";
		displayName = "$STR_CfgVehicles_Splint0";
		ghostIcon = "set:dayz_inventory image:missing";
   };
   class Slot_FirstAidPouch
	{
		name="FirstAidPouch";
		displayName="AOE First Aid Kit";
		ghostIcon="set:jpc_icons image:medpouch";
	};
};

class CfgVehicles
{
	class Container_Base;
	class Inventory_Base;
	class Edible_Base;
	class Man;
	class SurvivorBase: Man
	{
		attachments[]+=
		{
			"FirstAidPouch"
		};
		class InventoryEquipment
		{
			playerSlots[]+=
			{
				"Slot_FirstAidPouch"
			};
		};
	};
	class FirstAidKit: Container_Base
	{
		scope=1;
		itemsCargoSize[]={0,0};
		itemSize[]={3,3};
		attachments[]=
		{
			"MedicalBandage0",
			"MedicalBandage1",
			"MedicalVitamins",
			"MedicalDisinfectant",
			"morphine",
			"epinephrine",
			"MedicalPurificationTablets",
			"MedicalAntibiotics",
			"MedicalSalineBag",
			"MedicalBloodBag",
			"StartKitIV0",
			"StartKitIV1",
			"AMS_Ai2",
			"Splint"
		};
		inventorySlot[]=
		{
			"FirstAidPouch"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] = 
		{
			"DZ/gear/containers/data/firstaidkit_co.paa",
		};
	};
	class Fed_FAK: FirstAidKit
	{
		scope = 2;
		displayName = "Federation First Aid Kit";
		descriptionShort = "A modified first aid kit with the Federation Emblem on it.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] = 
		{
			"FirstAid/data/firstaidkit_fed_co.paa"
		};
	};
	class Zod_FAK: firstaidkit 
	{
		scope = 2;
		displayName = "Z.O.D. First Aid Kit";
		descriptionShort = "A modified first aid kit with the Z.O.D. Emblem on it.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] = 
		{
			"FirstAid/data/firstaidkit_zod_co.paa",
		}; 
	};
	class AOE_FAK: firstaidkit 
	{
		scope = 2;
		displayName = "AOE First Aid Kit";
		descriptionShort = "A modified first aid kit.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] = 
		{
			"FirstAid/data/firstaidkit_aoe_co.paa",
		};

	};	
	class BandageDressing: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalBandage",
			"MedicalBandage0",
			"MedicalBandage1"
		};
	};
	class Morphine: Inventory_Base
	{
		inventorySlot[]+=
		{
			"morphine"
		};
	};	
	class Epinephrine: Inventory_Base
	{
		inventorySlot[]+=
		{
			"epinephrine"
		};
	};	
	class PurificationTablets: Edible_Base
	{
		inventorySlot[]+=
		{
			"MedicalPurificationTablets"
		};
	};
	class TetracyclineAntibiotics: Edible_Base
	{
		inventorySlot[]+=
		{
			"MedicalAntibiotics"
		};
	};
	class DisinfectantAlcohol: Edible_Base
	{
		inventorySlot[]+=
		{
			"MedicalDisinfectant"
		};
	};
	class IodineTincture: Edible_Base
	{
		inventorySlot[]+=
		{
			"MedicalDisinfectant"
		};
	};
	class SalineBagIV: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalSalineBag"
		};
	};
	class SalineBag: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalSalineBag"
		};
	};
	class BloodBagIV: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalBloodBag"
		};
	};
	class BloodBagFull: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalBloodBag"
		};
	};
		class BloodBagEmpty: Inventory_Base
	{
		inventorySlot[]+=
		{
			"MedicalBloodBag"
		};
	};
	class StartKitIV: Inventory_Base
	{
		inventorySlot[]+=
		{
			"StartKitIV",
			"StartKitIV0",
			"StartKitIV1"
		};
	};
	class VitaminBottle: Edible_Base
	{
		inventorySlot[]+=
		{
			"MedicalVitamins"
		};
	};
   class AMS_Ai2: Inventory_Base 
   {
		inventorySlot[] += 
		{
			"AMS_Ai2"
		};
   };
   class Splint: Inventory_Base 
   {
     inventorySlot[] += 
		{
			"Splint"
		};
   };
      class AMS_Splint: Inventory_Base 
   {
     inventorySlot[] += 
		{
			"Splint"
		};
   };
 };