
    #include "definitions.h"

class CfgPatches {
    class Haas_WWII_Rebalance {
        author = "Wilhelm Haas";
        units[] = {};
        weapons[] = {WEAPONSARRAY};
        requiredAddons[] = {"ww2_core_c_if_zzz_lastloaded_c",
                            "fow_main","fow_weapons_c","fow_characters_c","fow_functions","fow_statics_c",
                            "len_ifa3_wp_data","len_ifa3_wp",
                            "ace_common","ace_frag","ace_trenches","ace_captives","ace_overpressure"
                            };
    };
}; //End CfgPatches

#include "RscDisplayMain.h"

class Mode_SemiAuto;

class Mode_Burst;

class Mode_FullAuto;

class BaseSoundModeType;

//cfgAmmo
class cfgAmmo {

    class BulletBase;

    class Grenade;
    class GrenadeHand : Grenade {
        ace_frag_classes[] = {"ace_frag_tiny_HD","ACE_frag_small_HD","ACE_frag_small_HD"};
        ace_frag_enabled = 1;
        ace_frag_force = 1;
        ace_frag_gurney_k = "3/5";
        ace_frag_skip = 0;
        ace_grenades_pullPinSound[] = {"A3\sounds_f\weapons\grenades\Grenade_PullPin.wss",1.5,1,10};
    };

    #include "FOW_Ammo.h"

    #include "LIB_Ammo.h"

};

class Eventhandlers;

//cfgMagazines
class cfgMagazines {

    class CA_Magazine;

    class CA_LauncherMagazine;

    class 20Rnd_762x51_Mag;

    class 30Rnd_9x21_Mag;

    class 16Rnd_9x21_Mag;

    class HandGrenade : CA_Magazine {
        mass = 8.87;
    };

    class 1Rnd_HE_Grenade_shell;

    class VehicleMagazine;

    class LIB_Shell_20L55_PzGr;
    class LIB_Shell_20L55_PzGr40;
    class LIB_Shell_20L55_SprGr;

    class LIB_50Rnd_792x57_Veh;

    #include "FOW_Magazines.h"

    #include "LIB_Magazines.h"

    #include "LEN_Magazines.h"

}; //End cfgMagazines

//cfgWeapons
class cfgWeapons {

    class InventoryItem_Base_F;

    class HMG_M2;

    class RifleCore;

    class Rifle : RifleCore {
        class WeaponSlotsInfo;
    };

    class Rifle_Base_F;

    class Rifle_Long_Base_F;

    class Rifle_Short_Base_F;

    class PistolCore;
    class Pistol : PistolCore {
        class WeaponSlotsInfo;
    };

    class Pistol_Base_F : Pistol {
        class WeaponSlotsInfo;
    };

    class hgun_Rook40_F : Pistol_Base_F {
        class WeaponSlotsInfo;
    };

    class hgun_P07_F : Pistol_Base_F {
        class WeaponSlotsInfo;
    };

    class Launcher;

    class Launcher_Base_F : Launcher {
        class WeaponSlotsInfo;
    };

    class MGun;

    class MGunCore;

    class LIB_Slung_Static_Weapon_Base;

    class LIB_MLMG_base;

    class LIB_TankMGun_base;

    class LIB_MG34_coax : LIB_TankMGun_base {
        class manual;
    };

    class LIB_MLMG42 : LIB_MLMG_base {
        class manual;
    };

    class LIB_M1919A4_coax : LIB_TankMGun_base {
        class manual;
    };

    class LIB_LMG : Rifle_Long_Base_F {
        class WeaponSlotsInfo;
    };

    class LIB_LAUNCHER : Launcher_Base_F {
        class WeaponSlotsInfo;
    };

    class LIB_PISTOL : Pistol_Base_F {
        class WeaponSlotsInfo;
    };

    class LIB_RIFLE : Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    class LIB_SMG : Rifle_Short_Base_F {
        class WeaponSlotsInfo;
    };

    class LIB_SRIFLE : Rifle_Long_Base_F {
        class WeaponSlotsInfo;
    };

    class fow_rifle_base : Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    class fow_shotgun_base : fow_rifle_base {
        class WeaponSlotsInfo;
    };

    class fow_rifleBolt_base : fow_rifle_base {
        class WeaponSlotsInfo;
    };

    class VestItem;

    class Vest_Camo_Base;

    class fow_v_base : Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };
    class V_LIB_Vest_Camo_Base : Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    #include "ACE_Weapons.h"

    #include "FOW_Weapons.h"

    #include "LIB_Weapons.h"

    #include "LEN_Weapons.h"

    #include "FOW_Vests.h"

    #include "LIB_Vests.h"

}; //End cfgWeapons

class cfgVehicles {

    class Bag_Base;

    class B_LIB_AssaultPack_Base;

    class BagFence_base_F;

    class ACE_envelope_small: BagFence_base_F {
        ace_trenches_diggingDuration = 90;
        ace_trenches_removalDuration = 30;
    };

    class ACE_envelope_big: BagFence_base_F {
        ace_trenches_diggingDuration = 90;
        ace_trenches_removalDuration = 30;
    };

    class FloatingStructure_F;

    class Land_Camping_Light_F: FloatingStructure_F {
        class MarkerLights {
            class Light_1 {
                color[] = {1,0.6,0.4};
                intensity = 500;
            };
        };
    };

    class ThingX;

    class ReammoBox_F : ThingX {
        maximumLoad = 4000;
    };
    /*
    class LIB_ReammoBox_base : ReammoBox_F {
        maximumLoad = 4000;
    };

    class LIB_BasicAmmunitionBox_GER : LIB_ReammoBox_base {
        maximumLoad = 4000;
    };
    */
    // ["LIB_Target_base","TargetBase","Static","All"]
    class TargetBase;
    class LIB_Target_base : TargetBase {
        class EventHandlers {
            hit = "['hit', _this] call BIS_fnc_target;";
            hitPart = "['hitPart', _this] call BIS_fnc_target;";
        };
    };

    class Boat_F;

    class Car_F;

    class Tank_F;

    class Truck_F;

    class Wheeled_APC_F;

    #include "FOW_Backpacks.h"

    #include "LIB_Backpacks.h"

    #include "FOW_Vehicles.h"

    #include "LIB_Vehicles.h"

    #include "FOW_Structures.h"

}; //End cfgVehicles

class CfgEditorSubcategories {

    class EdSubcat_2PzD_1_Essentials {
        displayName = "2PzD !Essentials";
    };

    class EdSubcat_2PzD_Belgian {
        displayName = "2PzD Belgium";
    };

    class EdSubcat_2PzD_Canadian {
        displayName = "2PzD Canada";
    };

    class EdSubcat_2PzD_Civilains {
        displayName = "2PzD Civilian";
    };

    class EdSubcat_2PzD_French {
        displayName = "2PzD France";
    };

    class EdSubcat_2PzD_German {
        displayName = "2PzD Germany";
    };

    class EdSubcat_2PzD_Japan {
        displayName = "2PzD Japan";
    };

    class EdSubcat_2PzD_Netherlands {
        displayName = "2PzD Netherlands";
    };

    class EdSubcat_2PzD_Partisan {
        displayName = "2PzD Partisans";
    };

    class EdSubcat_2PzD_PHA {
        displayName = "2PzD Poland";
    };

    class EdSubcat_2PzD_Russian {
        displayName = "2PzD Russia";
    };

    class EdSubcat_2PzD_United_Kingdom {
        displayName = "2PzD United Kingdom";
    };

    class EdSubcat_2PzD_United_States {
        displayName = "2PzD United States";
    };

}; //End CfgEditorSubcategories