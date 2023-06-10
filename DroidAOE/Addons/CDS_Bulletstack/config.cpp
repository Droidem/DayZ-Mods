////////////////////////////////////////////////////////////////////
//HUGE SHOUT OUT TO MOSES FOR REPACKING AUTHORIZATION 
//https://steamcommunity.com/sharedfiles/filedetails/?id=2978850938
////////////////////////////////////////////////////////////////////

class CfgPatches {
  class CDS_Bulletstack {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      "DZ_Weapons_Ammunition",
      "DZ_Weapons_Magazines"
    };
  };
};
class CfgMagazines {
  class Magazine_Base;
  class Ammunition_Base: Magazine_Base {};
  class Crossbow_ArrowBolt: Ammunition_Base {
    count = 100;
  };
  class Ammo_FlareBlue: Ammunition_Base {
    count = 100;
  };
  class Ammo_HuntingBolt: Ammunition_Base {
    count = 100;
  };
  class Ammo_ImprovisedBolt_1: Ammunition_Base {
    count = 100;
  };
  class Ammo_ImprovisedBolt_2: Ammunition_Base {
    count = 100;
  };
  class Ammo_45ACP: Ammunition_Base {
    count = 100;
  };
  class Ammo_308Win: Ammunition_Base {
    count = 100;
  };
  class Ammo_308WinTracer: Ammunition_Base {
    count = 100;
  };
  class Ammo_9x19: Ammunition_Base {
    count = 100;
  };
  class Ammo_380: Ammunition_Base {
    count = 100;
  };
  class Ammo_556x45: Ammunition_Base {
    count = 100;
  };
  class Ammo_556x45Tracer: Ammunition_Base {
    count = 100;
  };
  class Ammo_762x54: Ammunition_Base {
    count = 100;
  };
  class Ammo_762x54Tracer: Ammunition_Base {
    count = 100;
  };
  class Ammo_762x39: Ammunition_Base {
    count = 100;
  };
  class Ammo_762x39Tracer: Ammunition_Base {
    count = 100;
  };
  class Ammo_9x39: Ammunition_Base {
    count = 100;
  };
  class Ammo_9x39AP: Ammunition_Base {
    count = 100;
  };
  class Ammo_22: Ammunition_Base {
    count = 100;
  };
  class Ammo_12gaPellets: Ammunition_Base {
    count = 100;
  };
  class Ammo_12gaSlug: Ammunition_Base {
    count = 100;
  };
  class Ammo_12gaRubberSlug: Ammunition_Base {
    count = 100;
  };
  class Ammo_12gaBeanbag: Ammunition_Base {
    count = 100;
  };
  class Ammo_357: Ammunition_Base {
    count = 100;
  };
  class Ammo_545x39: Ammunition_Base {
    count = 100;
  };
  class Ammo_545x39Tracer: Ammunition_Base {
    count = 100;
  };
  class Ammo_DartSyringe: Ammunition_Base {
    count = 100;
  };
  class Ammo_Greed: Ammunition_Base {
    count = 100;
  };
  class Ammo_Grudge: Ammunition_Base {
    count = 100;
  };
  class Ammo_Bleed: Ammunition_Base {
    count = 100;
  };
  class Ammo_308AP: Ammunition_Base {
    count = 100;
  };
  class Ammo_308APTracer: Ammunition_Base {
    count = 100;
  };
  class Ammo_45AP: Ammunition_Base {
    count = 100;
  };
  class Ammo_458: Ammunition_Base {
    count = 100;
  };
  class Ammo_458Chey: Ammunition_Base {
    count = 100;
  };
  class Ammo_65CM: Ammunition_Base {
    count = 100;
  };
  class Ammo_65CMTracer: Ammunition_Base {
    count = 100;
  };
  class Ammo_4570_Griz: Ammunition_Base {
    count = 100;
  };
  class Ammo_4570_FTX: Ammunition_Base {
    count = 100;
  };
  class Ammo_9x19_rip: Ammunition_Base {
    count = 100;
  };
};