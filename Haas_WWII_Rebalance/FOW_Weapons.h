 class fow_w_bren : fow_rifle_base {
   descriptionShort = "[UK] Bren Gun";
   displayName = "[UK] Bren Gun (2PzD)";
   recoil = "recoil_mk200";
   class FullAuto : Mode_FullAuto {
   reloadTime = 0.118;
   };
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 228.309;
   };
  };

 class fow_w_k98 : fow_rifle_base {
   descriptionShort = "Karabiner 98 kurz";
   displayName = "[GER] K98 (2PzD)";
   magazines[] = {"lib_5Rnd_792x57","lib_5Rnd_792x57_t","lib_5Rnd_792x57_sS","lib_5Rnd_792x57_SMK","lib_10Rnd_792x57_T","lib_10Rnd_792x57_T2","lib_10Rnd_792x57_sS","lib_10Rnd_792x57_SMK","fow_5Rnd_792x57"};
   recoil = "recoil_rifle_1";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 87.993;
   };
  };

 class fow_w_leeenfield_no4mk1 : fow_rifle_base {
   descriptionShort = "[UK] Lee Enfield No. 4 Mk I";
   displayName = "[UK] Lee Enfield No. 4 Mk I (2PzD)";
   recoil = "recoil_rifle_1";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 88.037;
   };
  };

 class fow_w_m1_carbine : fow_rifle_base {
   descriptionShort = "Carbine, Caliber .30, M1";
   displayName = "[US] M1 Carbine (2PzD)";
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
   displayName = "[US] M2 Carbine (2PzD)";
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
   displayName = "[US] M1 Garand (2PzD)";
   magazines[] = {"LIB_8Rnd_762x63","fow_8Rnd_762x63"};
   recoil = "recoil_rifle_1";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 95.074;
   };
  };

 class fow_w_m1918a2 : fow_rifle_base {
   descriptionShort = "Rifle, Caliber .30, Automatic, Browning, M1918A2";
   displayName = "[US] M1918A2 BAR (2PzD)";
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

 class fow_w_m1a1_thompson : fow_rifle_base {
   descriptionShort = "Submachine Gun, Caliber .45, M1A1";
   displayName = "[US] M1A1 Thompson (2PzD)";
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
   displayName = "[US] M3 GreaseGun (2PzD)";
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

 class fow_w_mg42 : fow_rifle_base {
   descriptionShort = "Maschinengewehr 42";
   displayName = "[GER] MG42 (2PzD)";
   magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","LIB_250Rnd_792x57","LIB_250Rnd_792x57_SMK","LIB_250Rnd_792x57_sS","fow_50Rnd_792x57","fow_250Rnd_792x57"};
   recoil = "recoil_mk200";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 255.221;
   };
   class FullAuto : Mode_FullAuto {
   reloadTime = 0.05;
   };
  };

 class fow_w_mp40 : fow_rifle_base {
   descriptionShort = "Maschinenpistole 40";
   displayName = "[GER] MP40 (2PzD)";
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
   descriptionShort = "[UK] Sten Mk II";
   displayName = "[UK] Sten Mk II (2PzD)";
   magazines[] = {"fow_32Rnd_9x19_sten","LIB_32Rnd_9x19","fow_32Rnd_9x19_mp40"};
   recoil = "recoil_smg_02";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 65.074;
   };
   class Full : Mode_FullAuto {
   reloadTime = 0.109;
   };
  };

 class fow_w_type100 : fow_rifle_base {
   descriptionShort = "Type 100 Submachine Gun";
   displayName = "[IJA] Type 100 SMG (2PzD)";
   recoil = "recoil_smg_02";
   reloadTime = 0.133;
   class Full : Mode_FullAuto {
   reloadTime = 0.133;
   };
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 75.000;
   };
  };
  class fow_w_type100_44_2PzD : fow_w_type100 {
   descriptionShort = "Type 100/44 Submachine Gun";
   displayName = "[IJA] Type 100/44 SMG (2PzD)";
   reloadTime = 0.075;
   class Full : Full {
   reloadTime = 0.075;
   };
  };

 class fow_w_type99 : fow_rifle_base {
   descriptionShort = "Type 99 Arisaka";
   displayName = "[IJA] Type 99 Arisaka (2PzD)";
   recoil = "recoil_rifle_1";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 82.500;
   };
  };

 class fow_w_type99_lmg : fow_rifle_base {
   descriptionShort = "Type 99 Light Machine Gun";
   displayName = "[IJA] Type 99 LMG (2PzD)";
   recoil = "recoil_mk200";
   reloadTime = 0.086;
   class FullAuto : Mode_FullAuto {
   reloadTime = 0.086;
   };
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 230.074;
   };
  };