
    #include "definitions.h"

class CfgPatches {
    class Haas_WWII_Rebalance {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        units[] = {};
        magazineWell[] = {};
        magazines[] = {MagazinesArray};
        weapons[] = {WeaponsArray};
        requiredAddons[] = {RequiredAddonsArray};
    };
}; // End CfgPatches

#include "RscDisplayMain.h"

class Mode_SemiAuto;

class Mode_Burst;

class Mode_FullAuto;

class BaseSoundModeType;

class SlotInfo;

// cfgAmmo
class cfgAmmo {

    class BulletBase;
    class BulletBase_NonAceAB;

    class Grenade;

    class GrenadeHand : Grenade {
        ace_frag_classes[] = {"ace_frag_tiny_HD","ACE_frag_small_HD","ACE_frag_small_HD"};
        ace_frag_enabled = 1;
        ace_frag_force = 1;
        ace_frag_gurney_k = "3/5";
        ace_frag_skip = 0;
        ace_grenades_pullPinSound[] = {"A3\sounds_f\weapons\grenades\Grenade_PullPin.wss",1.5,1,10};
    };

    class R_60mm_HE;

    class ShotDeployBase;

    class Smoke_82mm_AMOS_White : ShotDeployBase {
        soundFakeFall[] = {"soundFakeFall0",0.25,"soundFakeFall1",0.25,"soundFakeFall2",0.25,"soundFakeFall3",0.25};
        soundFakeFall0[] = {"a3\Sounds_F\weapons\falling_bomb\fall_01",3.16228,1,1000};
        soundFakeFall1[] = {"a3\Sounds_F\weapons\falling_bomb\fall_02",3.16228,1,1000};
        soundFakeFall2[] = {"a3\Sounds_F\weapons\falling_bomb\fall_03",3.16228,1,1000};
        soundFakeFall3[] = {"a3\Sounds_F\weapons\falling_bomb\fall_04",3.16228,1,1000};
    };

    class SmokeShell;

    class SmokeShellArty : SmokeShell {
        explosionEffects = "LIB_WPExplosion";
        //explosionEffects = "FOW_no79_Grenade_Effects";
        timeToLive = 180; // TODO check before release
        LIB_WP_BurnTime = 35;
    };

    class SubmunitionBase;

    class Smoke_120mm_AMOS_White : SubmunitionBase {
        soundFakeFall[] = {"soundFakeFall0",0.25,"soundFakeFall1",0.25,"soundFakeFall2",0.25,"soundFakeFall3",0.25};
        soundFakeFall0[] = {"a3\Sounds_F\weapons\falling_bomb\fall_01",3.16228,1,1000};
        soundFakeFall1[] = {"a3\Sounds_F\weapons\falling_bomb\fall_02",3.16228,1,1000};
        soundFakeFall2[] = {"a3\Sounds_F\weapons\falling_bomb\fall_03",3.16228,1,1000};
        soundFakeFall3[] = {"a3\Sounds_F\weapons\falling_bomb\fall_04",3.16228,1,1000};
    };

    #include "FOW_Ammo.h"

    #include "LIB_Ammo.h"

}; // End cfgAmmo

class Eventhandlers;

// CfgMagazineWells
class CfgMagazineWells {

    #include "CfgMagazineWells.h"

}; // End CfgMagazineWells

class cfgMagazines {
    class Default;

    class CA_Magazine;

    class VehicleMagazine;

    class CA_LauncherMagazine;

    class 20Rnd_762x51_Mag;

    class 30Rnd_9x21_Mag;

    class 16Rnd_9x21_Mag;

    class 1Rnd_HE_Grenade_shell;

    class HandGrenade : CA_Magazine {
        mass = 8.87;
    };

    class SmokeShell : HandGrenade {
        mass = 12;
    };

    class 500Rnd_127x99_mag_Tracer_Red;

    class 8Rnd_82mm_Mo_Smoke_white;

    class 1000Rnd_20mm_shells;

    class SatchelCharge_Remote_Mag;

    class HandGrenade_West;

    #include "FOW_Magazines.h"

    #include "LIB_Magazines.h"

    #include "LEN_Magazines.h"

    #include "CSA38_Magazines.h"

    #include "Sep39_Magazines.h"

}; // End cfgMagazines

// cfgWeapons
class cfgWeapons {


    class PistolCore;
    class RifleCore;
    class MGunCore;
    class CannonCore;
    class RocketPods;

    class MGun : MGunCore {
        class WeaponSlotsInfo;
    };

    class HMG_M2;
    class GrenadeLauncher;
    class Launcher;

    class Launcher_Base_F : Launcher {
        class WeaponSlotsInfo;
    };

    class Rifle : RifleCore {
        class WeaponSlotsInfo;
    };

    class Rifle_Base_F : Rifle {
        class WeaponSlotsInfo;
    };

    class Rifle_Short_Base_F : Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    class Rifle_Long_Base_F : Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    class Pistol : PistolCore {
        class WeaponSlotsInfo;
    };

    class Pistol_Base_F : Pistol {
        class WeaponSlotsInfo;
        class Single;
    };

    class ItemCore;
    class InventoryItem_Base_F;
    class UniformItem;
    class VestItem;

    class hgun_P07_F : Pistol_Base_F {
        class WeaponSlotsInfo;
        class Single;
    };

    class hgun_Rook40_F : Pistol_Base_F {
        class WeaponSlotsInfo;
        class Single;
    };

    class Uniform_Base : ItemCore {
        class ItemInfo;
    };

    class U_BasicBody : Uniform_Base {
        class ItemInfo;
    };

    class Vest_Camo_Base : ItemCore {
        class ItemInfo;
    };

    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore;

    #include "ACE_Weapons.h"

    #include "FOW_Weapons.h"

    #include "LIB_Weapons.h"

    #include "LEN_Weapons.h"

    #include "CSA38_Weapons.h"

    #include "Sep39_Weapons.h"

    #include "CSA38_Uniforms.h"

    #include "FOW_Uniforms.h"

    #include "FOW_Vests.h"

    #include "LIB_Vests.h"

    #include "CSA38_Vests.h"

    #include "Sep39_Vests.h"

}; // End cfgWeapons

// cfgRecoils
class cfgRecoils {

    #include "CfgRecoils.h"

}; // End cfgRecoils

// CfgWeaponHandling
class CfgWeaponHandling {

    #include "CfgWeaponHandling.h"

}; // End CfgWeaponHandling

class cfgVehicles {

    class Man;

    class Tank_F;

    class FloatingStructure_F;

    class ThingX;

    class ReammoBox;

    class BagFence_base_F;

    class TargetBase;

    class Land_Camping_Light_F: FloatingStructure_F {
        class MarkerLights {
            class Light_1 {
                color[] = {1,0.6,0.4};
                intensity = 500;
            };
        };
    };

    class ReammoBox_F : ThingX {
        maximumLoad = 4000;
    };

    class Bag_Base;

    class Car_F;

    class Truck_F;

    class Wheeled_APC_F;

    class CAManBase : Man {
        class UserActions {
            delete CSA38_lp08son;
            delete CSA38_lp08off;
            delete CSA38_p08son;
            delete CSA38_p08off;
            delete csa38_kpvz38;
            delete csa38_kpvz38P;
            delete CSA38_czvz27son;
            delete CSA38_czvz27soff;
            delete csa38_brenkonverson;
            delete csa38_brenkonversoff;
            delete CSA38_zada;
            /*
            class csa38_brenbednaon {
                displayName = "Place Ammobox";
            };
            class csa38_brenbednaoff {
                displayName = "Pick Up Ammobox";
            };
            class csa38_brenbednaon2 {
                displayName = "Place Ammobox";
            };
            class csa38_brenbednaoff2 {
                displayName = "Pick Up Ammobox";
            };
            class csa38_lk26bednaon2 {
                displayName = "Place Ammobox";
            };
            class csa38_lk26bednaoff2 {
                displayName = "Pick Up Ammobox";
            };
            class csa38_tkvz24faze1on {
                displayName = "Place Tripod";
            };
            class csa38_tkvz24faze1off {
                displayName = "Pick Up Tripod";
            };
            class csa38_tkvz24faze2on {
                displayName = "Mount Gun On Tripod";
            };
            class CSA38_Grenadelauncher1 {
                displayName = "Attach Grenade Launcher";
            };
            class CSA38_Grenadelauncher2 {
                displayName = "Detach Grenade Launcher";
            };
            class CSA38_MP38operkaon {
                displayName = "Unfold Stock";
            };
            class CSA38_MP38operkaoff {
                displayName = "Fold Stock";
            };
            class CSA38_MP40operkaon {
                displayName = "Unfold Stock";
            };
            class CSA38_MP40operkaoff {
                displayName = "Fold Stock";
            };
            class csa38_m36faze1on {
                displayName = "Place The Mortar Tube";
            };
            class csa38_m36faze1off {
                displayName = "Pick Up The Mortar Tube";
            };
            class csa38_m36faze2on {
                displayName = "Attach The Mortar Base To The Mortar";
            };
            class csa38_m36faze2off {
                displayName = "Pick Up The Mortar Base";
            };
            class csa38_m36faze3on {
                displayName = "Complete Mortar";
            };
            class csa38_brenfaze1on {
                displayName = "Place Tripod";
            };
            class csa38_brenfaze1off {
                displayName = "Pick Up Tripod";
            };
            class csa38_brenfaze2on {
                displayName = "Mount Gun On Tripod";
            };
            class csa38_brenfaze2bon {
                displayName = "Mount Gun On Tripod";
            };
            class csa38_mg34faze1on {
                displayName = "Place tripod";
            };
            class csa38_mg34faze1off {
                displayName = "Pick Up tripod";
            };
            class csa38_MG34faze1c {
                displayName = "Create static pos 3";
            };
            class csa38_MG34faze2on {
                displayName = "Mount Gun On Tripod";
            };
            class csa38_MG34faze1a {
                displayName = "Create static pos";
            };
            class csa38_MG34faze1b {
                displayName = "Create static pos 2";
            };
            */
        };
    };

    class Boat_F;

    class B_LIB_AssaultPack_Base;

    class ACE_envelope_small: BagFence_base_F {
        ace_trenches_diggingDuration = 90;
        ace_trenches_removalDuration = 30;
    };

    class ACE_envelope_big: BagFence_base_F {
        ace_trenches_diggingDuration = 90;
        ace_trenches_removalDuration = 30;
    };
    /*
    class LIB_ReammoBox_base : ReammoBox_F {
        maximumLoad = 4000;
    };

    class LIB_BasicAmmunitionBox_GER : LIB_ReammoBox_base {
        maximumLoad = 4000;
    };
    */

    class LIB_Target_base : TargetBase { // ["LIB_Target_base","TargetBase","Static","All"]
        class EventHandlers {
            hit = "['hit', _this] call BIS_fnc_target;";
            hitPart = "['hitPart', _this] call BIS_fnc_target;";
        };
    };

    #include "FOW_Backpacks.h"

    #include "LIB_Backpacks.h"

    #include "CSA38_Backpacks.h"

    #include "Sep39_Backpacks.h"

    #include "FOW_Vehicles.h"

    #include "LIB_Vehicles.h"

    #include "FOW_Structures.h"

}; // End cfgVehicles


//requires "A3_3DEN" addon dependancy

class ctrlCombo;

class Cfg3DEN {
    class Attributes {
        class Default;
        class Title : Default {
            class Controls;
        };
        class Date : Title {
            class Controls : Controls {
                class ValueYear : ctrlCombo {
                    onLoad = "\
                        params ['_ctrlYear'];\
                        for '_y' from 1900 to 2050 do {\
                            _ctrlYear lbSetValue [_ctrlYear lbAdd str _y, _y];\
                        };\
                        _ctrlYear lbSetCurSel 53;\
                    ";
                };
            };
        };
    };
};


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

}; // End CfgEditorSubcategories

class FOW_no79_Grenade_Effects {
    class FOW_no79_Stage1 {
        simulation = "particles";
        type = "FOW_Grenade_FuseDetonation";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.07;
    };
    class FOW_no79_Stage2 {
        simulation = "particles";
        type = "FOW_Grenade_Detonation_Phosphorus";
        position[] = {0, 0, 0};
        intensity = 0.5;
        interval = 1;
        lifeTime = 0.5;
    };
    class FOW_no79_Stage3 {
        simulation = "particles";
        type = "FOW_Grenade_Detonation_Heat";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.1;
    };
    class FOW_no79_Stage4 {
        simulation = "particles";
        type = "FOW_Grenade_Detonation_Smoke";
        position[] = {0, 0, 0};
        intensity = 0.5;
        interval = 1;
    };
};
