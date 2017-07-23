class CfgPatches {
    class Haas_WWII_Rebalance {
        author = "Wilhelm Haas";
        units[] = {};
        weapons[] = {"LIB_Colt_M1911","LIB_M1895","LIB_P38","LIB_P08","LIB_TT33","LIB_G43","LIB_K98",
                    "LIB_G3340","LIB_K98ZF39","LIB_M1_Carbine","LIB_M1A1_Carbine","LIB_M2_Carbine_2PzD",
                    "LIB_M1_Garand","LIB_M1903A3_Springfield","LIB_M1903A4_Springfield","LIB_M9130",
                    "LIB_M9130PU","LIB_M38","LIB_M44","LIB_MP44","LIB_SVT_40","LIB_AVT_40_2PzD","LIB_PTRD",
                    "LIB_M1A1_Thompson","LIB_M1928_Thompson","LIB_M1928_Thompson_d","LIB_M1928A1_Thompson",
                    "LIB_MP40","LIB_PPSh41_m","LIB_PPSh41_d","LIB_DP28","LIB_DT","LIB_DT_OPTIC",
                    "LIB_M1918A2_BAR","LIB_M1919A4","LIB_M1919A6","LIB_MG34","LIB_MG34_PT","LIB_MG42",
                    "LIB_M1A1_Bazooka","LIB_PzFaust_30m","LIB_RPzB","LIB_RPzB_w","LIB_M1919A4_tripod",
                    "LIB_MG34_Tripod","LIB_MG42_Tripod","LIB_M2_Tripod","LIB_Laffete_Tripod",
                    "LIB_DELISLE","LIB_M2_Flamethrower",
                    "fow_w_k98","fow_w_leeenfield_no4mk1","fow_w_leeenfield_no4mk1_redwood",
                    "fow_w_m1_carbine","fow_w_m2_carbine_2PzD","fow_w_m1_garand","fow_w_stg44",
                    "fow_w_type99","fow_w_m1a1_thompson","fow_w_m3","fow_w_mp40","fow_w_sten_mk2",
                    "fow_w_sten_mk5","fow_w_type100","fow_w_type100_44_2PzD","fow_w_m1919a4",
                    "fow_w_m1919a6","fow_w_bren","fow_w_m1918a2","fow_w_mg42","fow_w_type99_lmg",
                    "fow_w_m2_flamethrower",
                    "LEN_P35","LEN_P640b","LEN_PPK","LEN_Welrod","LEN_FG42","LEN_MP44","LEN_SMLE_No4Mk1",
                    "LEN_SMLE_No4Mk1T","LEN_M3a1","LEN_PPS43","LEN_StenMk2","LEN_StenMk2S","LEN_StenMk5",
                    "LEN_M12"
                    };
        requiredAddons[] = {"ww2_assets_c_characters_americans_c","ww2_assets_c_characters_core_c",
                            "ww2_assets_c_characters_germans_c","ww2_assets_c_characters_polish_c",
                            "ww2_assets_c_characters_soviets_c","ww2_assets_c_characters_winter_c",
                            "ww2_assets_c_weapons_ammoboxes_c","ww2_assets_c_vehicles_weapons_c",
                            "ww2_assets_c_weapons_ammoparameters_c","ww2_assets_c_weapons_backpacks_c",
                            "ww2_assets_c_weapons_effects_c","ww2_assets_c_weapons_infantryweapons_c",
                            "ww2_assets_c_weapons_launchers_c","ww2_assets_c_weapons_mines_c",
                            "ww2_assets_c_weapons_misc_c","ww2_assets_c_weapons_recoil_c",
                            "ww2_assets_c_weapons_weaponparameters_c","ww2_assets_c_weapons_weaponsmagazines_c",
                            "ww2_assets_m_characters_americans_m","ww2_assets_m_characters_germans_m",
                            "ww2_assets_m_characters_polish_m","ww2_assets_m_characters_soviets_m",
                            "ww2_assets_m_weapons_ammoboxes_m","ww2_assets_m_weapons_backpacks_m",
                            "ww2_assets_m_weapons_binoculars_m","ww2_assets_m_weapons_grenades_m",
                            "ww2_assets_m_weapons_launchers_m","ww2_assets_m_weapons_machinegun_heavy_m",
                            "ww2_assets_m_weapons_machinegun_light_m","ww2_assets_m_weapons_machinegun_sub_m",
                            "ww2_assets_m_weapons_mines_m","ww2_assets_m_weapons_misc_m",
                            "ww2_assets_m_weapons_mortars_m","ww2_assets_m_weapons_optics_m",
                            "ww2_assets_m_weapons_pistols_m","ww2_assets_m_weapons_rifles_m",
                            "ww2_assets_m_weapons_sniperrifles_m","ww2_assets_m_weapons_weaponsammo_m",
                            "ww2_assets_m_weapons_weaponsmagazines_m","ww2_assets_r_characters_americans_r",
                            "ww2_assets_r_characters_customfaces_r","ww2_assets_r_characters_germans_r",
                            "ww2_assets_r_characters_polish_r","ww2_assets_r_characters_soviets_r",
                            "ww2_assets_r_weapons_ammoboxes_r","ww2_assets_r_weapons_backpacks_r",
                            "ww2_assets_r_weapons_binoculars_r","ww2_assets_r_weapons_grenades_r",
                            "ww2_assets_r_weapons_launchers_r","ww2_assets_r_weapons_machinegun_heavy_r",
                            "ww2_assets_r_weapons_machinegun_light_r","ww2_assets_r_weapons_machinegun_sub_r",
                            "ww2_assets_r_weapons_mines_r","ww2_assets_r_weapons_misc_r",
                            "ww2_assets_r_weapons_mortars_r","ww2_assets_r_weapons_pistols_r",
                            "ww2_assets_r_weapons_rifles_r","ww2_assets_r_weapons_sniperrifles_r",
                            "ww2_assets_s_weapons_ammo_s","ww2_assets_s_weapons_explosions_s",
                            "ww2_assets_s_weapons_launchers_s","ww2_assets_s_weapons_machinegun_heavy_s",
                            "ww2_assets_s_weapons_machinegun_light","ww2_assets_s_weapons_machinegun_sub_s",
                            "ww2_assets_s_weapons_misc_s","ww2_assets_s_weapons_pistols_s",
                            "ww2_assets_s_weapons_rifles_s","ww2_assets_s_weapons_sniperrifles_s",
                            "ww2_assets_t_characters_americans_t","ww2_assets_t_characters_customfaces_t",
                            "ww2_assets_t_characters_germans_t","ww2_assets_t_characters_misc_t",
                            "ww2_assets_t_characters_polish_t","ww2_assets_t_characters_soviets_t",
                            "ww2_assets_t_weapons_ammoboxes_t","ww2_assets_t_weapons_backpacks_t",
                            "ww2_assets_t_weapons_binoculars_t","ww2_assets_t_weapons_grenades_t",
                            "ww2_assets_t_weapons_launchers_t","ww2_assets_t_weapons_machinegun_heavy_t",
                            "ww2_assets_t_weapons_machinegun_light_t","ww2_assets_t_weapons_machinegun_sub_t",
                            "ww2_assets_t_weapons_machinegun_light_t","ww2_assets_t_weapons_machinegun_sub_t",
                            "ww2_assets_t_weapons_mines_t","ww2_assets_t_weapons_misc_t",
                            "ww2_assets_t_weapons_mines_t","ww2_assets_t_weapons_misc_t",
                            "ww2_assets_t_weapons_mortars_t","ww2_assets_t_weapons_optics_t",
                            "ww2_assets_t_weapons_mortars_t","ww2_assets_t_weapons_optics_t",
                            "ww2_assets_t_weapons_pistols_t","ww2_assets_t_weapons_rifles_t",
                            "ww2_assets_t_weapons_pistols_t","ww2_assets_t_weapons_rifles_t",
                            "ww2_assets_t_weapons_sniperrifles_t","ww2_assets_t_weapons_weaponsmagazines_t",
                            "ww2_assets_t_weapons_sniperrifles_t","ww2_assets_t_weapons_weaponsmagazines_t",
                            "fow_main","fow_weapons_c","fow_characters_c","fow_functions","fow_statics_c",
                            "len_ifa3_wp_data","len_ifa3_wp",
                            "ace_trenches"
                            };
    };
 }; //End CfgPatches

class Mode_SemiAuto;

class Mode_Burst;

class Mode_FullAuto;

class BaseSoundModeType;

//cfgAmmo

class cfgAmmo {

    class BulletBase;

    #include "FOW_Ammo.h"

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

    class LIB_50Rnd_792x57_Veh;

    #include "FOW_Magazines.h"

    #include "LIB_Magazines.h"

    #include "LEN_Magazines.h"

}; //End cfgMagazines

//cfgWeapons
class cfgWeapons {

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

    class LIB_Slung_Static_Weapon_Base;

    class LIB_MLMG_base;

    class LIB_MG34_coax;

    class LIB_MLMG42;

    class LIB_M1919A4_coax;

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

    class MGunCore;

    class MGun;

    class fow_rifle_base : Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    class fow_rifleBolt_base : fow_rifle_base {
        class WeaponSlotsInfo;
    };

    class fow_w_m1919 : fow_rifle_base{
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

    class LIB_Plane_base;

    class LIB_US_Plane_base;

    class LIB_C47_Skytrain : LIB_US_Plane_base {
        maximumLoad = 4000;
    };

    class LIB_CG4_WACO : LIB_US_Plane_base {
        maximumLoad = 1000;
    };

    class LIB_HORSA : LIB_US_Plane_base {
        maximumLoad = 2000;
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

    #include "FOW_Backpacks.h"

    #include "LIB_Backpacks.h"

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