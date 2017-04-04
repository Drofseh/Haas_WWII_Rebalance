//Rifles
 class fow_w_k98 : fow_rifle_base {
  descriptionShort = "Karabiner 98 kurz";
  displayName = "Kar98k (FOW) (2PzD)";
  magazines[] = {"lib_5Rnd_792x57","lib_5Rnd_792x57_t","lib_5Rnd_792x57_sS","lib_5Rnd_792x57_SMK","lib_10Rnd_792x57_T","lib_10Rnd_792x57_T2","lib_10Rnd_792x57_sS","lib_10Rnd_792x57_SMK","fow_5Rnd_792x57"};
  recoil = "recoil_rifle_1";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 87.993;
   };
  };

 class fow_w_leeenfield_no4mk1 : fow_rifle_base {
  descriptionShort = "Rifle, No. 4 Mk I";
  displayName = "Lee Enfield No. 4 Mk I (FOW) (2PzD)";
  recoil = "recoil_rifle_1";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 88.037;
   };
  };
  class fow_w_leeenfield_no4mk1_redwood : fow_w_leeenfield_no4mk1 {
   descriptionShort = "Rifle, No. 4 Mk I";
   displayName = "Lee Enfield No. 4 Mk I (Red Wood) (FOW) (2PzD)";
   };

 class fow_w_m1_carbine : fow_rifle_base {
  descriptionShort = "Carbine, Caliber .30, M1";
  displayName = "M1 Carbine (FOW) (2PzD)";
  magazines[] = {"LIB_15Rnd_762x33","fow_15Rnd_762x33","LIB_30Rnd_762x33_2PzD","fow_30Rnd_762x33_2PzD"};
  recoil = "recoil_mx";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 50.735;
   };
  class Single : Mode_SemiAuto {
  reloadTime = 0.08;
   };
  };
  class fow_w_m2_carbine_2PzD : fow_w_m1_carbine {
  descriptionShort = "Carbine, Cal .30, M2";
  displayName = "M2 Carbine (FOW) (2PzD)";
  magazines[] = {"LIB_30Rnd_762x33_2PzD","fow_30Rnd_762x33_2PzD","LIB_15Rnd_762x33","fow_15Rnd_762x33"};
  modes[] = {"Single","Full","Far","Medium","Short"};
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 52.941;
   };
   class Single : Single {
   };
  class Full : Single {
   autoFire = 1;
   displayName = "Full";
   reloadTime = 0.08;
   textureType = "fullAuto";
   };
  };

 class fow_w_m1_garand : fow_rifle_base {
  descriptionShort = "Rifle, Caliber .30, M1";
  displayName = "M1 Garand (FOW) (2PzD)";
  magazines[] = {"LIB_8Rnd_762x63","fow_8Rnd_762x63"};
  recoil = "recoil_rifle_1";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 95.074;
   };
  };

class fow_w_stg44 : fow_rifle_base {
  descriptionShort = "Sturmgewehr 44";
  displayName = "StG44 (FOW) (2PzD)";
  magazines[] = {"LIB_30Rnd_792x33","fow_30Rnd_792x33"};
  modes[] = {"Single","Full","Far","Medium","Short"};
  recoil = "recoil_mx";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 97.588;
   };
   class Full : Mode_FullAuto {
   reloadTime = 0.104;
   };
  };

 class fow_w_type99 : fow_rifle_base {
  descriptionShort = "Type 99 Arisaka";
  displayName = "Type 99 Arisaka (FOW) (2PzD)";
  recoil = "recoil_rifle_1";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 82.500;
   };
  };
//End Rifles

//Submachine Guns
 class fow_w_m1a1_thompson : fow_rifle_base {
  descriptionShort = "Submachine Gun, Caliber .45, M1A1";
  displayName = "M1A1 Thompson (FOW) (2PzD)";
  magazines[] = {"LIB_30Rnd_45ACP","LIB_20Rnd_45ACP_M1_2PzD","fow_20Rnd_45acp_M1_2PzD","fow_20Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp_M1_2PzD","fow_30Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp","fow_30Rnd_45acp_T"};
  recoil = "recoil_smg_01";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 105.882;
   };
   class Full : Mode_FullAuto {
   reloadTime = 0.086;
   };
  };

 class fow_w_m3 : fow_rifle_base {
  descriptionShort = "Submachine Gun, Caliber .45, M3";
  displayName = "M3 GreaseGun (FOW) (2PzD)";
  modes[] = {"Full","Single","Far","Medium","Short"};
  magazines[] = {"fow_30Rnd_45acp_M3_2PzD","fow_30Rnd_45acp"};
  recoil = "recoil_smg_02";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 79.412;
   };
   class Single : Mode_SemiAuto {
   showToPlayer = 0;
   };
   class Full : Mode_FullAuto {
   reloadTime = 0.133;
   };
  };

 class fow_w_mp40 : fow_rifle_base {
  descriptionShort = "Maschinenpistole 40";
  displayName = "MP40 (FOW) (2PzD)";
  magazines[] = {"LIB_32Rnd_9x19","fow_32Rnd_9x19_mp40","fow_32Rnd_9x19_sten"};
  recoil = "recoil_smg_02";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 87.551;
   };
   class Full : Mode_FullAuto {
   reloadTime = 0.114;
   };
  };

 class fow_w_sten_mk2 : fow_rifle_base {
  descriptionShort = "Sten Mk II";
  displayName = "Sten Mk II (FOW) (2PzD)";
  magazines[] = {"fow_32Rnd_9x19_sten","LIB_32Rnd_9x19","fow_32Rnd_9x19_mp40"};
  recoil = "recoil_smg_02";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 65.074;
   };
   class Full : Mode_FullAuto {
   reloadTime = 0.109;
   };
  };
  class fow_w_sten_mk5 : fow_w_sten_mk2 {
  descriptionShort = "Sten Mk V";
  displayName = "Sten Mk V (FOW) (2PzD)";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 79.632;
   };
   class Full : Full {
   reloadTime = 0.1;
   };
  };

 class fow_w_type100 : fow_rifle_base {
  descriptionShort = "Type 100 Submachine Gun";
  displayName = "Type 100 SMG (FOW) (2PzD)";
  recoil = "recoil_smg_02";
   class Full : Mode_FullAuto {
   reloadTime = 0.133;
   };
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 75.000;
   };
  };
  class fow_w_type100_44_2PzD : fow_w_type100 {
  descriptionShort = "Type 100/44 Submachine Gun";
  displayName = "Type 100/44 SMG (FOW) (2PzD)";
   class Full : Full {
   reloadTime = 0.075;
   };
  };
//End Submachine Guns

//Machine Guns
 class fow_w_m1919a4 : fow_w_m1919 {
  descriptionShort = "Gun, Machine, Caliber .30, Browning, M1919A4";
  displayName = "M1919A4 (FOW) (2PzD)";
  magazines[] = {"fow_250Rnd_M1919","fow_200Rnd_M1919_2PzD","fow_150Rnd_M1919_2PzD","fow_100Rnd_M1919_2PzD","fow_50Rnd_M1919"};
  recoil = "recoil_mk200";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 310.178;
   };
  };
class fow_w_m1919a6 : fow_w_m1919 {
  descriptionShort = "Gun, Machine, Caliber .30, Browning, M1919A6";
  displayName = "M1919A6 (FOW) (2PzD)";
  magazines[] = {"fow_250Rnd_M1919","fow_200Rnd_M1919_2PzD","fow_150Rnd_M1919_2PzD","fow_100Rnd_M1919_2PzD","fow_50Rnd_M1919"};
  recoil = "recoil_mk200";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 320.184;
   };
  };

 class fow_w_bren : fow_rifle_base {
  descriptionShort = "Bren Gun";
  displayName = "Bren Gun (FOW) (2PzD)";
  recoil = "recoil_mk200";
   class FullAuto : Mode_FullAuto {
   reloadTime = 0.118;
   };
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 228.309;
   };
  };

 class fow_w_m1918a2 : fow_rifle_base {
  descriptionShort = "Rifle, Caliber .30, Automatic, Browning, M1918A2";
  displayName = "M1918A2 BAR (FOW) (2PzD)";
  magazines[] = {"LIB_20Rnd_762x63","fow_20Rnd_762x63"};
  recoil = "recoil_mk200";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 194.118;
   };
   class FullAuto_300 : Mode_FullAuto {
   reloadTime = 0.200;
   textureType = "burst";
   };
   class FullAuto_650 : Mode_FullAuto {
   reloadTime = 0.092;
   textureType = "fullAuto";
   };
  };

 class fow_w_mg42 : fow_rifle_base {
  descriptionShort = "Maschinengewehr 42";
  displayName = "MG42 (FOW) (2PzD)";
  magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","LIB_250Rnd_792x57","LIB_250Rnd_792x57_SMK","LIB_250Rnd_792x57_sS","fow_50Rnd_792x57","fow_250Rnd_792x57"};
  recoil = "recoil_mk200";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 255.221;
   };
   class FullAuto : Mode_FullAuto {
   reloadTime = 0.05;
   };
  };

 class fow_w_type99_lmg : fow_rifle_base {
  descriptionShort = "Type 99 Light Machine Gun";
  displayName = "Type 99 LMG (FOW) (2PzD)";
  recoil = "recoil_mk200";
   class FullAuto : Mode_FullAuto {
   reloadTime = 0.086;
   };
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 230.074;
   };
  };
//End Machine Guns

//Other
 class fow_w_m2_flamethrower : fow_rifle_base {
  descriptionShort = "M2 Flamethrower";
  displayName = "M2 Flamethrower (Do Not Use, Not Working, Shoots Bullets) (FOW)";
  };
//End Other