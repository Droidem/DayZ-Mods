class CfgPatches
{
   class AoE_FirstAid
	{
        units[]=
		{
            "AoE_Gear_Assc_Fed_FAK",
            "AoE_Gear_Assc_Fre_FAK",
            "AoE_Gear_Assc_Zod_FAK"	
        };
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
		{
            "DZ_Characters",
            "DZ_Data",
            "DZ_Gear_Medical",
            "DZ_Gear_Consumables",
            "JPC_Vest",
            "DZ_Scripts",
            "AdditionalMedicSupplies"
        };
    };
};
class CfgMods
{
    class AoE_FirstAid
	{
        type="mod";
        dir="FirstAid";
        name="AoE's First Aid Kit";
        author="Droidem";
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
        name="Epinephrine";
        displayName="$STR_CfgVehicles_Epinephrine0";
        ghostIcon="set:jpc_icons image:morphine";
    };
    class Slot_Morphine
	{
        name="Morphine";
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
        name="AMS_Ai2";
        displayName="AMS_Ai2";
        ghostIcon="set:dayz_inventory image:missing";
    };
    class Slot_Splint
	{
        name="Splint";
        displayName="$STR_CfgVehicles_Splint0";
        ghostIcon="set:dayz_inventory image:missing";
    };
    class Slot_FirstAidPouch
	{
        name="FirstAidPouch";
        displayName="AOE First Aid Kit";
        ghostIcon="set:jpc_icons image:tacticalpouch";
    };
};
class CfgVehicles
{
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
    class Container_Base;
    class tactical_pouch_base;
    class AoE_FirstAid_base: tactical_pouch_base 
	{
        scope=1;
        descriptionShort="A modified first aid kit.";
        itemsCargoSize[]={0,0};
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
            "camo"
        };
    };
    class AoE_Gear_Assc_Fed_FAK: AoE_FirstAid_base
	{
        scope=2;
        displayName="Federation First Aid Kit";
        descriptionShort="A modified first aid kit with the Federation emblem on it.";
        hiddenSelections[]=
		{
            "camo"
        };
        hiddenSelectionsTextures[]=
		{
            "FirstAid\data\AoE_Gear_Assc_Fed_FAK.paa"
        };
    };
    class AoE_Gear_Assc_Zod_FAK: AoE_FirstAid_base
	{
        scope=2;
        displayName="Z.O.D. First Aid Kit";
        descriptionShort="A modified first aid kit with the Z.O.D. emblem on it.";
        hiddenSelections[]={
            "camo"
        };
        hiddenSelectionsTextures[]=
		{
            "FirstAid\data\AoE_Gear_Assc_Zod_FAK.paa"
        };
    };
    class AoE_Gear_Assc_Fre_FAK: AoE_FirstAid_base
	{
        scope=2;
        displayName="AOE First Aid Kit";
        descriptionShort="A modified first aid kit.";
        hiddenSelections[]={
            "camo"
        };
        hiddenSelectionsTextures[]={
            "FirstAid\data\AoE_Gear_Assc_Fre_FAK.paa"
        };
    };
	class AoE_Gear_Assc_Maf_FAK: AoE_FirstAid_base
	{
        scope=2;
        displayName="Phantom Mafia First Aid Kit";
        descriptionShort="A modified first aid kit with the Phantom Mafia emblem on it.";
        hiddenSelections[]={
            "camo"
        };
        hiddenSelectionsTextures[]={
            "FirstAid\data\AoE_Gear_Assc_Maf_FAK.paa"
        };
    };
    class Inventory_Base;
    class Edible_Base;
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
    class DisinfectantSpray: Edible_Base
	{
        inventorySlot[]+=
		{
            "MedicalDisinfectant"
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
        inventorySlot[]+= {
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
        inventorySlot[]+= {
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
        inventorySlot[]+=
		{
            "AMS_Ai2"
        };
    };
    class Splint: Inventory_Base
	{
        inventorySlot[]+=
		{
            "Splint"
        };
    };
    class AMS_Splint: Inventory_Base
	{
        inventorySlot[]+=
		{
            "Splint"
        };
    };
};