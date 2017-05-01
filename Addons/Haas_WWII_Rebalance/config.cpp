class CfgPatches {
 class Haas_WWII_Rebalance {
   author = "Wilhelm Haas";
   units[] = {};
   weapons[] = {"LIB_Colt_M1911","LIB_DP28","LIB_DT","LIB_DT_OPTIC","LIB_G43","LIB_K98","LIB_G3340",
                "LIB_K98ZF39","LIB_M1_Carbine","LIB_M1A1_Carbine""LIB_M2_Carbine_2PzD","LIB_M1_Garand",
                "LIB_M1895","LIB_M1903A3_Springfield","LIB_M1903A4_Springfield","LIB_M1918A2_BAR",
                "LIB_M1A1_Bazooka","LIB_M1A1_Thompson","LIB_M9130","LIB_M9130PU","LIB_M38","LIB_M44",
                "LIB_MG42","LIB_MP40","LIB_MP44","LIB_P38","LIB_PPSh41_m","LIB_PPSh41_d","LIB_SVT_40",
                "LIB_AVT_40_2PzD","LIB_TT33",
                "fow_w_bren","fow_w_k98","fow_w_leeenfield_no4mk1","fow_w_m1_carbine",
                "fow_w_m2_carbine_2PzD","fow_w_m1_garand","fow_w_m1918a2","fow_w_m1a1_thompson",
                "fow_w_m3","fow_w_mg42","fow_w_mp40","fow_w_sten_mk2","fow_w_type100","fow_w_type99",
                "fow_w_type99_lmg",
                "LEN_P35","LEN_P640b","LEN_PPK","LEN_Welrod","LEN_FG42","LEN_MP44","LEN_SMLE_No4Mk1",
                "LEN_SMLE_No4Mk1T","LEN_M3a1","LEN_PPS43","LEN_StenMk2","LEN_StenMk2S","LEN_StenMk5",
                "LEN_M12"
                };
   requiredAddons[] = {"ww2_assets_t_weapons_machinegun_light_t","ww2_assets_t_weapons_machinegun_sub_t",
                       "ww2_assets_t_weapons_mines_t","ww2_assets_t_weapons_misc_t",
                       "ww2_assets_t_weapons_mortars_t","ww2_assets_t_weapons_optics_t",
                       "ww2_assets_t_weapons_pistols_t","ww2_assets_t_weapons_rifles_t",
                       "ww2_assets_t_weapons_sniperrifles_t","ww2_assets_t_weapons_weaponsmagazines_t",
                       "ww2_assets_c_characters_americans_c","ww2_assets_c_characters_civilians_c",
                       "ww2_assets_c_characters_core_c","ww2_assets_c_characters_customfaces_c",
                       "ww2_assets_c_characters_germans_c","ww2_assets_c_characters_headgear_c",
                       "ww2_assets_c_characters_polish_c","ww2_assets_c_characters_soviets_c",
                       "ww2_assets_c_characters_winter_c","ww2_assets_c_vehicles_ammoparameters_c",
                       "ww2_assets_c_vehicles_boats_c","ww2_assets_c_vehicles_camshake_c",
                       "ww2_assets_c_vehicles_core_c","ww2_assets_c_vehicles_effects_c",
                       "ww2_assets_c_vehicles_extended_hud_c","ww2_assets_c_vehicles_groups_c",
                       "ww2_assets_c_vehicles_magazinereplace_c","ww2_assets_c_vehicles_modelconfig_c",
                       "ww2_assets_c_vehicles_parts_c","ww2_assets_c_vehicles_planes_c",
                       "ww2_assets_c_vehicles_staticweapons_c","ww2_assets_c_vehicles_tanks_c",
                       "ww2_assets_c_vehicles_targets_c","ww2_assets_c_vehicles_turretsconfig_c",
                       "ww2_assets_c_vehicles_unitinfotypehotfix","ww2_assets_c_vehicles_weaponparameters_c",
                       "ww2_assets_c_vehicles_weapons_c","ww2_assets_c_vehicles_wheeled_c",
                       "ww2_assets_c_vehicles_wheeledapc_c","ww2_assets_c_vehicles_winter_c",
                       "ww2_assets_c_vehicles_wrecks_c","ww2_assets_c_weapons_ammoboxes_c",
                       "ww2_assets_c_weapons_ammoparameters_c","ww2_assets_c_weapons_backpacks_c",
                       "ww2_assets_c_weapons_effects_c","ww2_assets_c_weapons_infantryweapons_c",
                       "ww2_assets_c_weapons_launchers_c","ww2_assets_c_weapons_mines_c",
                       "ww2_assets_c_weapons_misc_c","ww2_assets_c_weapons_recoil_c",
                       "ww2_assets_c_weapons_weaponparameters_c","ww2_assets_c_weapons_weaponsmagazines_c",
                       "ww2_assets_m_characters_americans_m","ww2_assets_m_characters_civilians_m",
                       "ww2_assets_m_characters_germans_m","ww2_assets_m_characters_headgear_m",
                       "ww2_assets_m_characters_polish_m","ww2_assets_m_characters_soviets_m",
                       "ww2_assets_m_vehicles_boats_m","ww2_assets_m_vehicles_cars_m",
                       "ww2_assets_m_vehicles_misc_m","ww2_assets_m_vehicles_optics_m",
                       "ww2_assets_m_vehicles_planes_m","ww2_assets_m_vehicles_staticweapons_m",
                       "ww2_assets_m_vehicles_tanks_m","ww2_assets_m_vehicles_trucks_m",
                       "ww2_assets_m_vehicles_wheeledapc_m","ww2_assets_m_vehicles_wrecks_m",
                       "ww2_assets_m_weapons_ammoboxes_m","ww2_assets_m_weapons_backpacks_m",
                       "ww2_assets_m_weapons_binoculars_m","ww2_assets_m_weapons_grenades_m",
                       "ww2_assets_m_weapons_launchers_m","ww2_assets_m_weapons_machinegun_heavy_m",
                       "ww2_assets_m_weapons_machinegun_light_m","ww2_assets_m_weapons_machinegun_sub_m",
                       "ww2_assets_m_weapons_mines_m","ww2_assets_m_weapons_misc_m",
                       "ww2_assets_m_weapons_mortars_m","ww2_assets_m_weapons_optics_m",
                       "ww2_assets_m_weapons_pistols_m","ww2_assets_m_weapons_rifles_m",
                       "ww2_assets_m_weapons_sniperrifles_m","ww2_assets_m_weapons_weaponsammo_m",
                       "ww2_assets_m_weapons_weaponsmagazines_m","ww2_assets_r_characters_americans_r",
                       "ww2_assets_r_characters_civilians_r","ww2_assets_r_characters_customfaces_r",
                       "ww2_assets_r_characters_germans_r","ww2_assets_r_characters_headgear_r",
                       "ww2_assets_r_characters_polish_r","ww2_assets_r_characters_soviets_r",
                       "ww2_assets_r_vehicles_boats_r","ww2_assets_r_vehicles_cars_r",
                       "ww2_assets_r_vehicles_misc_r","ww2_assets_r_vehicles_planes_r",
                       "ww2_assets_r_vehicles_staticweapons_r","ww2_assets_r_vehicles_tanks_r",
                       "ww2_assets_r_vehicles_trucks_r","ww2_assets_r_vehicles_wheeledapc_r",
                       "ww2_assets_r_vehicles_wrecks_r","ww2_assets_r_weapons_ammoboxes_r",
                       "ww2_assets_r_weapons_backpacks_r","ww2_assets_r_weapons_binoculars_r",
                       "ww2_assets_r_weapons_grenades_r","ww2_assets_r_weapons_launchers_r",
                       "ww2_assets_r_weapons_machinegun_heavy_r","ww2_assets_r_weapons_machinegun_light_r",
                       "ww2_assets_r_weapons_machinegun_sub_r","ww2_assets_r_weapons_mines_r",
                       "ww2_assets_r_weapons_misc_r","ww2_assets_r_weapons_mortars_r",
                       "ww2_assets_r_weapons_pistols_r","ww2_assets_r_weapons_rifles_r",
                       "ww2_assets_r_weapons_sniperrifles_r","ww2_assets_s_megagoth1702_sounds",
                       "ww2_assets_s_vehicles_boats_s","ww2_assets_s_vehicles_cars_s",
                       "ww2_assets_s_vehicles_planes_s","ww2_assets_s_vehicles_staticweapons_s",
                       "ww2_assets_s_vehicles_tanks_s","ww2_assets_s_vehicles_trucks_s",
                       "ww2_assets_s_vehicles_wheeled_s","ww2_assets_s_vehicles_wheeledapc_s",
                       "ww2_assets_s_weapons_ammo_s","ww2_assets_s_weapons_explosions_s",
                       "ww2_assets_s_weapons_launchers_s","ww2_assets_s_weapons_machinegun_heavy_s",
                       "ww2_assets_s_weapons_machinegun_light","ww2_assets_s_weapons_machinegun_sub_s",
                       "ww2_assets_s_weapons_misc_s","ww2_assets_s_weapons_pistols_s",
                       "ww2_assets_s_weapons_rifles_s","ww2_assets_s_weapons_sniperrifles_s",
                       "ww2_assets_t_characters_americans_t","ww2_assets_t_characters_civilians_t",
                       "ww2_assets_t_characters_customfaces_t","ww2_assets_t_characters_germans_t",
                       "ww2_assets_t_characters_headgear_t","ww2_assets_t_characters_misc_t",
                       "ww2_assets_t_characters_polish_t","ww2_assets_t_characters_soviets_t",
                       "ww2_assets_t_vehicles_boats_t","ww2_assets_t_vehicles_cars_t",
                       "ww2_assets_t_vehicles_misc_t","ww2_assets_t_vehicles_optics_t",
                       "ww2_assets_t_vehicles_planes_t","ww2_assets_t_vehicles_staticweapons_t",
                       "ww2_assets_t_vehicles_tanks_t","ww2_assets_t_vehicles_trucks_t",
                       "ww2_assets_t_vehicles_wheeledapc_t","ww2_assets_t_vehicles_wrecks_t",
                       "ww2_assets_t_weapons_ammoboxes_t","ww2_assets_t_weapons_backpacks_t",
                       "ww2_assets_t_weapons_binoculars_t","ww2_assets_t_weapons_grenades_t",
                       "ww2_assets_t_weapons_launchers_t","ww2_assets_t_weapons_machinegun_heavy_t",
                       "ww2_assets_t_weapons_machinegun_light_t","ww2_assets_t_weapons_machinegun_sub_t",
                       "ww2_assets_t_weapons_mines_t","ww2_assets_t_weapons_misc_t",
                       "ww2_assets_t_weapons_mortars_t","ww2_assets_t_weapons_optics_t",
                       "ww2_assets_t_weapons_pistols_t","ww2_assets_t_weapons_rifles_t",
                       "ww2_assets_t_weapons_sniperrifles_t","ww2_assets_t_weapons_weaponsmagazines_t",
                       "ww2_ca_core_c","ww2_ca_cup_dummy","ww2_core_a_animationspecial_1_a",
                       "ww2_core_a_animationspecial_2_a","ww2_core_a_animationvehicles_1_a",
                       "ww2_core_a_animationvehicles_2_a","ww2_core_a_animationweapons_1_a",
                       "ww2_core_a_animationweapons_2_a","ww2_core_c_animationspecial_1_c",
                       "ww2_core_c_animationspecial_2_c","ww2_core_c_animationvehicles_1_c",
                       "ww2_core_c_animationweapons_1_c","ww2_core_c_cfgaiskill_c","ww2_core_c_core_c",
                       "ww2_core_c_data_c","ww2_core_c_decals_c","ww2_core_c_dubbing_c",
                       "ww2_core_c_dubbingradio_c","ww2_core_c_editorpreviews_c",
                       "ww2_core_c_fx_explosioneffects_c","ww2_core_c_gui_c",
                       "ww2_core_c_ifa3_backwardscompatibility_c",
                       "ww2_core_c_ifa3_backwardscompatibility2_c",
                       "ww2_core_c_ifa3_backwardscompatibility3_c",
                       "ww2_core_c_ifa3_backwardscompatibility4_c","ww2_core_c_music_c",
                       "ww2_core_c_penetration_c","ww2_core_c_system_artillery_c",
                       "ww2_core_c_system_boltaction_c","ww2_core_c_system_functions_c",
                       "ww2_core_c_system_infantry_c","ww2_core_c_system_tank_interface_c",
                       "ww2_core_c_system_tanks_c","ww2_core_c_system_test_c","ww2_core_c_zzz_lastloaded_c",
                       "ww2_core_f_core_f","ww2_core_f_fx_explosioneffects_f",
                       "ww2_core_f_fx_particleeffects_f","ww2_core_f_system_artillery_f",
                       "ww2_core_f_system_boats_f","ww2_core_f_system_boltaction_f",
                       "ww2_core_f_system_buildings_f","ww2_core_f_system_cars_f",
                       "ww2_core_f_system_functions_f","ww2_core_f_system_infantry_f",
                       "ww2_core_f_system_magazinechange_f","ww2_core_f_system_mines_f",
                       "ww2_core_f_system_planes_f","ww2_core_f_system_staticweapons_f",
                       "ww2_core_f_system_tank_interface_f","ww2_core_f_system_tank_interface_t",
                       "ww2_core_f_system_tanks_f","ww2_core_f_system_test_f","ww2_core_f_system_trucks_f",
                       "ww2_core_f_system_wheeledapc_f","ww2_core_m_data_m","ww2_core_r_data_r",
                       "ww2_core_r_decals_r","ww2_core_r_gui_r","ww2_core_s_data_s","ww2_core_s_dubbing_s",
                       "ww2_core_s_dubbingradio_s","ww2_core_s_music_s","ww2_core_t_core_t",
                       "ww2_core_t_data_t","ww2_core_t_decals_t","ww2_core_t_editorpreviews_t",
                       "ww2_core_t_gui_t","ww2_core_t_mapcontrol_t","ww2_core_t_markers_t",
                       "ww2_core_t_sights_t","ww2_core_t_system_artillery_t",
                       "fow_sounds_c.pbo","fow_statics.pbo","fow_statics_c.pbo","fow_structures_p.pbo",
                       "fow_structures_p_c.pbo","fow_sys_ambientvoices.pbo","fow_sys_backpack.pbo",
                       "fow_veg_p.pbo","fow_veh_weapons_c.pbo","fow_weapons.pbo","fow_weapons_c.pbo",
                       "fow_anims.pbo","fow_anims_c.pbo","fow_boats.pbo","fow_boats_c.pbo","fow_cars.pbo",
                       "fow_cars_c.pbo","fow_characters.pbo","fow_characters_c.pbo","fow_functions.pbo",
                       "fow_main.pbo","fow_map_tarawa.pbo","fow_map_tarawa_c.pbo","fow_mortars.pbo",
                       "fow_mortars_c.pbo","fow_music.pbo","fow_planes.pbo","fow_planes_c.pbo",
                       "fow_roads_p.pbo","fow_rocks_p.pbo","fow_sounds.pbo",
                       "len_ifa3_wp_cfg","len_ifa3_wp"
                       };
  };
 }; //End CfgPatches

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto : Mode_SemiAuto {};
class BaseSoundModeType;

//cfgMagazines
class cfgMagazines {

class CA_Magazine;
 class CA_LauncherMagazine : CA_Magazine {};
 class 20Rnd_762x51_Mag : CA_Magazine {};
 class 30Rnd_9x21_Mag : CA_Magazine {};
  class 16Rnd_9x21_Mag : 30Rnd_9x21_Mag {};
 class HandGrenade : CA_Magazine {
  mass = 8.87;
 };
 class VehicleMagazine;
  class LIB_50Rnd_792x57_Veh : VehicleMagazine {};

#include "FOW_Magazines.h"

#include "LIB_Magazines.h"

#include "LEN_Magazines.h"

 }; //End cfgMagazines

//cfgWeapons
class cfgWeapons {

class RifleCore;
class Rifle : RifleCore {
  class WeaponSlotsInfo;
 };
 class Rifle_Base_F : Rifle {};
  class Rifle_Long_Base_F : Rifle_Base_F {};
  class Rifle_Short_Base_F : Rifle_Base_F {};
class PistolCore;
class Pistol : PistolCore {
  class WeaponSlotsInfo;
 };
 class Pistol_Base_F : Pistol {};
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
class MGunCore;
 class MGun : MGunCore{};

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
class fow_w_m1919 : fow_rifle_base{};


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

class ThingX;
 class ReammoBox_F : ThingX {
  maximumLoad = 4000;
  };
// class LIB_ReammoBox_base : ReammoBox_F {
//  maximumLoad = 4000;
//  };
//  class LIB_BasicAmmunitionBox_GER : LIB_ReammoBox_base {
//  maximumLoad = 4000;
//  };

class Bag_Base;

#include "FOW_Backpacks.h"

}; //End cfgVehicles