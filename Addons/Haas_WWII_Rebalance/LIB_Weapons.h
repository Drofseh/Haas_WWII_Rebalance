 class LIB_Colt_M1911 : LIB_PISTOL {
   descriptionShort = "Automatic Pistol, Caliber .45, M1911A1";
   displayName = "M1911A1 (2PzD)";
   magazines[] = {"LIB_7Rnd_45ACP"};
   recoil = "recoil_pistol_acpc2";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 24.375;
   };
  };

 class LIB_DP28 : LIB_LMG {
   descriptionShort = "Degtyaryov Machine Gun";
   displayName = "DP-28 (2PzD)";
   recoil = "recoil_mk200";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 201.176;
   };
   class Full : Mode_FullAuto {
   reloadTime = 0.109;
   };
  };

 class LIB_DT : LIB_LMG {
   descriptionShort = "Degtyaryova Tankovy Machine Gun";
   displayName = "DT (2PzD)";
   recoil = "recoil_mk200";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 220.588;
   };
   class Full : Mode_FullAuto {
   reloadTime = 0.109;
   };
  };

 class LIB_DT_OPTIC : LIB_DT {
   descriptionShort = "Degtyaryova Tankovy Machine Gun with optic";
   displayName = "DT (Optic) (2PzD)";
   recoil = "recoil_mk200";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 231.618;
   };
  };

 class LIB_G43 : LIB_RIFLE {
   descriptionShort = "Gewehr 43";
   displayName = "G43 (2PzD)";
   magazines[] = {"lib_10Rnd_792x57","lib_10Rnd_792x57_T","lib_10Rnd_792x57_T2","lib_10Rnd_792x57_sS","lib_10Rnd_792x57_SMK","fow_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57_t","lib_5Rnd_792x57_sS","lib_5Rnd_792x57_SMK"};
   recoil = "recoil_rifle_1";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 90.441;
   };
  };

 class LIB_K98 : LIB_RIFLE {
   descriptionShort = "Karabiner 98 kurz";
   displayName = "Kar98k (2PzD)";
   magazines[] = {"lib_5Rnd_792x57","lib_5Rnd_792x57_t","lib_5Rnd_792x57_sS","lib_5Rnd_792x57_SMK","fow_5Rnd_792x57"};
   recoil = "recoil_rifle_1";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 87.993;
   };
  };

 class LIB_G3340 : LIB_K98 {
   descriptionShort = "Gewehr 33/40 (t) (Puška vz. 33)";
   displayName = "G33/40 (2PzD)";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 73.897;
   };
  };

 class LIB_K98ZF39 : LIB_SRIFLE {
   descriptionShort = "Karabiner 98 kurz with ZF39 sight";
   displayName = "Kar98k ZF39 (2PzD)";
   magazines[] = {"lib_5Rnd_792x57","lib_5Rnd_792x57_t","lib_5Rnd_792x57_sS","lib_5Rnd_792x57_SMK","fow_5Rnd_792x57"};
   recoil = "recoil_rifle_1";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 93.066;
   };
  };

 class LIB_M1_Carbine : LIB_RIFLE {
   descriptionShort = "Carbine, Caliber .30, M1";
   displayName = "M1 Carbine (2PzD)";
   magazines[] = {"LIB_15Rnd_762x33","LIB_30Rnd_762x33_2PzD","fow_15Rnd_762x33","fow_30Rnd_762x33_2PzD"};
   recoil = "recoil_mx";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 50.735;
   };
   class Single : Mode_SemiAuto {
   };
  };
  class LIB_M1A1_Carbine : LIB_M1_Carbine {
   descriptionShort = "Carbine, Caliber .30, M1A1";
   displayName = "M1A1 Carbine (2PzD)";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 59.520;
   };
  };
  class LIB_M2_Carbine_2PzD : LIB_M1_Carbine {
   descriptionShort = "Carbine, Cal .30, M2";
   displayName = "M2 Carbine (2PzD)";
   magazines[] = {"LIB_30Rnd_762x33_2PzD","LIB_15Rnd_762x33","fow_30Rnd_762x33_2PzD","fow_15Rnd_762x33"};
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

 class LIB_M1_Garand : LIB_RIFLE {
   descriptionShort = "Rifle, Caliber .30, M1";
   displayName = "M1 Garand (2PzD)";
   magazines[] = {"LIB_8Rnd_762x63","fow_8Rnd_762x63"};
   recoil = "recoil_rifle_1";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 95.074;
   };
  };

class LIB_M1895 : LIB_PISTOL {
   descriptionShort = "Nagant M1895 Revolver";
   displayName = "Nagant M1895 (2PzD)";
   recoil = "recoil_pistol_rook40";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 17.647;
   };
  };

 class LIB_M1903A3_Springfield : LIB_RIFLE {
   descriptionShort = "Rifle, Caliber .30-06, Model 1903A3";
   displayName = "M1903A3 Springfield (2PzD)";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 86.912;
   };
  };

 class LIB_M1903A4_Springfield : LIB_SRIFLE {
   descriptionShort = "Rifle, Caliber .30-06, Model 1903A4";
   displayName = "M1903A4 Springfield (2PzD)";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 91.985;
   };
  };

 class LIB_M1918A2_BAR : LIB_LMG {
   descriptionShort = "Rifle, Caliber .30, Automatic, Browning, M1918A2";
   displayName = "M1918A2 BAR (2PzD)";
   magazines[] = {"LIB_20Rnd_762x63","fow_20Rnd_762x63"};
   recoil = "recoil_mk200";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 164.096;
   };
   class Full : Mode_FullAuto {
   reloadTime = 0.200;
   textureType = "burst";
   };
   class Full_Rapid : Full {
   reloadTime = 0.092;
   textureType = "fullAuto";
   };
  };

 class LIB_M1A1_Bazooka : LIB_LAUNCHER {
   descriptionShort = "Rocket Launcher, M1A1";
   displayName = "M1A1 Bazooka (2PzD)";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 127.941;
   };
  };

 class LIB_M1A1_Thompson : LIB_SMG {
   descriptionShort = "Submachine Gun, Caliber .45, M1A1";
   displayName = "M1A1 Thompson (2PzD)";
   magazines[] = {"LIB_30Rnd_45ACP","LIB_20Rnd_45ACP_M1_2PzD","fow_20Rnd_45acp_M1_2PzD","fow_20Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp_M1_2PzD","fow_30Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp","fow_30Rnd_45acp_T"};
   recoil = "recoil_smg_01";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 105.882;
   };
   class Full : Mode_FullAuto {
   reloadTime = 0.086;
   };
  };

 class LIB_M9130 : LIB_RIFLE {
   descriptionShort = "Mosin M91/30";
   displayName = "Mosin M91/30 (2PzD)";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 87.353;
   };
  };

 class LIB_M9130PU : LIB_SRIFLE {
   descriptionShort = "Mosin M91/30 with PU sight";
   displayName = "Mosin M91/30 PU (2PzD)";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 92.426;
   };
  };

 class LIB_M38 : LIB_M9130 {
   descriptionShort = "Mosin M38";
   displayName = "Mosin M38 (2PzD)";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 75.044;
   };
  };

 class LIB_M44 : LIB_M9130 {
   descriptionShort = "Mosin M44";
   displayName = "Mosin M44 (2PzD)";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 90.000;
   };
  };

 class LIB_MG42 : LIB_LMG {
   descriptionShort = "Maschinengewehr 42";
   displayName = "MG42 (2PzD)";
   magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","LIB_250Rnd_792x57","LIB_250Rnd_792x57_SMK","LIB_250Rnd_792x57_sS","fow_50Rnd_792x57","fow_250Rnd_792x57"};
   recoil = "recoil_mk200";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 255.221;
   };
   class Full : Mode_FullAuto {
   reloadTime = 0.05;
   };
  };

 class LIB_MP40 : LIB_SMG {
   descriptionShort = "Maschinenpistole 40";
   displayName = "MP40 (2PzD)";
   magazines[] = {"LIB_32Rnd_9x19","fow_32Rnd_9x19_mp40","fow_32Rnd_9x19_sten"};
   recoil = "recoil_smg_02";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 87.551;
   };
   class Full : Mode_FullAuto {
   reloadTime = 0.114;
   };
  };

class LIB_MP44 : LIB_RIFLE {
   descriptionShort = "Maschinenpistole 44";
   displayName = "MP44 (2PzD)";
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

 class LIB_P38 : LIB_PISTOL {
   descriptionShort = "P38";
   displayName = "P38 (2PzD)";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 17.647;
   };
  };
  class LIB_P08 : LIB_P38 {
   descriptionShort = "P08";
   displayName = "P08 (2PzD)";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 18.419;
   };
  };

class LIB_PPSh41_m : LIB_SMG {
   descriptionShort = "Pistolet-Pulemyot Shpagina 41 (Stick)";
   displayName = "PPSh-41 (Stick) (2PzD)";
   magazines[] = {"lib_35Rnd_762x25","lib_35Rnd_762x25_t","lib_35Rnd_762x25_t2","lib_35Rnd_762x25_ap","lib_71Rnd_762x25","lib_71Rnd_762x25_t","lib_71Rnd_762x25_t2","lib_71Rnd_762x25_ap"};
   modes[] = {"Full","Single","Far","Medium","Short"};
   recoil = "recoil_smg_02";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 80.074;
   };
   class Full : Mode_FullAuto {
   reloadTime = 0.063;
   };
  };
  class LIB_PPSh41_d : LIB_PPSh41_m {
   descriptionShort = "Pistolet-Pulemyot Shpagina 41 (Drum)";
   displayName = "PPSh-41 (Drum) (2PzD)";
   magazines[] = {"lib_71Rnd_762x25","lib_71Rnd_762x25_t","lib_71Rnd_762x25_t2","lib_71Rnd_762x25_ap","lib_35Rnd_762x25","lib_35Rnd_762x25_t","lib_35Rnd_762x25_t2","lib_35Rnd_762x25_ap"};
   modes[] = {"Full","Single","Far","Medium","Short"};
   scope = 2;
  };

class LIB_PzFaust_30m : LIB_LAUNCHER {
   descriptionShort = "Panzerfaust 30";
   displayName = "Panzerfaust 30 (2PzD)";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 115.147;
   };
  };

class LIB_RPzB : LIB_LAUNCHER {
   descriptionShort = "Panzerschreck RPzB 54";
   displayName = "Panzerschreck RPzB 54 (2PzD)";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 242.647;
   };
  };
  class LIB_RPzB_w : LIB_RPzB {
   descriptionShort = "Panzerschreck RPzB 54 (Winter)";
   displayName = "Panzerschreck RPzB 54 (Winter) (2PzD)";
   };

class LIB_SVT_40 : LIB_RIFLE {
   descriptionShort = "Samozaryadnaya Vintovka Tokareva, Obrazets 1940 goda";
   displayName = "SVT-40 (2PzD)";
   magazines[] = {"LIB_10Rnd_762x54","LIB_10Rnd_762x54_t30","LIB_10Rnd_762x54_t302","LIB_10Rnd_762x54_t46","LIB_10Rnd_762x54_t462","LIB_10Rnd_762x54_d","LIB_10Rnd_762x54_b30","lib_5Rnd_792x57","lib_5Rnd_792x57_t","lib_5Rnd_792x57_sS","lib_5Rnd_792x57_SMK","fow_5Rnd_792x57"};
   recoil = "recoil_rifle_1";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 84.926;
   };
   class Single : Mode_SemiAuto {
   };
  };
  class LIB_AVT_40_2PzD : LIB_SVT_40 {
   descriptionShort = "AVT-40";
   displayName = "AVT-40 (2PzD)";
   modes[] = {"Single","Full","Far","Medium","Short"};
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 87.132;
   };
   class Single : Single {
   };
   class Full : Single {
    autoFire = 1;
    displayName = "Full";
    reloadTime = 0.080;
    textureType = "fullAuto";
   };
  };

class LIB_TT33 : LIB_PISTOL {
   descriptionShort = "Pistolet Tokareva Obraztsa 1933 goda";
   displayName = "TT-33 (2PzD)";
   recoil = "recoil_pistol_p07";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 18.309;
   };
  };