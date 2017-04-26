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
   requiredAddons[] = {"ww2_assets_c_vehicles_weapons_c","WW2_Assets_c_Weapons_Misc_c_Weapons",
                       "ww2_assets_c_weapons_weaponsmagazines_c","ww2_assets_c_weapons_infantryweapons_c",
                       "ww2_assets_c_weapons_weaponparameters_c","ww2_assets_c_weapons_recoil_c",
                       "fow_weapons","fow_weapons_c","fow_veh_weapons_c","fow_main",
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

class fow_v_base;
class V_LIB_Vest_Camo_Base;
class VestItem;

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
