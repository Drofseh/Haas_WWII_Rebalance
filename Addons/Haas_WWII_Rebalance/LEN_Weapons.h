//Pistols
 class LEN_P35 : hgun_Rook40_F {
  descriptionShort = "Pistolet wz. 35 Vis, known as the Pistole 35(p) in Wehrmacht service or the Radom in English";
  displayName = "Pistolet wz. 35 Vis";
  magazines[] = {"LEN_8Rnd_9x19_2PzD"};
  scope = 2;
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 20.956;
   };
 };

 class LEN_P640b : hgun_P07_F {
  descriptionShort = "Browning Hi-Power, known as the Pistole 640(b) in Wehrmacht service";
  displayName = "Browning Hi-Power";
  magazines[] = {"LEN_13Rnd_9x19"};
  scope = 2;
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 15.851;
   };
 };

 class LEN_PPK : hgun_Rook40_F {
  descriptionShort = "Walther Polizeipistole Kriminalmodell";
  displayName = "Walther PPK";
  magazines[] = {"LEN_7Rnd_765x17"};
  scope = 2;
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 12.507;
   };
 };

 class LEN_Welrod : hgun_Rook40_F {
  descriptionShort = "Welrod Pistol";
  displayName = "Welrod";
  magazines[] = {"LEN_8Rnd_765x17_2PzD"};
  scope = 2;
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 24.044;
   };
 };
//End Pistols

//Rifles
 class LEN_FG42 : LIB_MP44 {
  descriptionShort = "Fallschirmjägergewehr 42 Ausführung G";
  displayName = "FG42 (2PzD)";
  //fow_burstLenght = {1,1,2,3};
  magazines[] = {"len_20Rnd_792x57"};
  modes[] = {"Single","FullAuto"};
  recoil = "recoil_rifle_1";
  scope = 2;
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 109.191;
   };
   class Single : Mode_SemiAuto {
   recoil = "recoil_single_primary_3outof10";
   recoilProne = "recoil_single_primary_prone_3outof10";
   reloadTime = 0.08;
   maxRange = 600;
   maxRangeProbab = 0.05;
   midRange = 300;
   midRangeProbab = 0.7;
   minRange = 50;
   minRangeProbab = 0.3;
   };
   class FullAuto : Mode_FullAuto {
   recoil = "recoil_single_primary_3outof10";
   recoilProne = "recoil_single_primary_prone_3outof10";
   reloadTime = 0.08;
   maxRange = 50;
   maxRangeProbab = 0.05;
   midRange = 25;
   midRangeProbab = 0.7;
   minRange = 1;
   minRangeProbab = 0.3;
   };/*
   class Eventhandlers: Eventhandlers {
    class fow_mgRoF {
    fired = "_this spawn fow_main_fnc_mgRoF;";
    };
    };*/
 };

 class LEN_MP44 : LIB_MP44 {
  descriptionShort = "Sturmgewehr 44";
  displayName = "StG44 (2PzD)";
  //fow_burstLenght = {1,1,2,3};
  magazines[] = {"LIB_30Rnd_792x33","fow_30Rnd_792x33"};
  recoil = "recoil_mx";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 97.588;
   };
   class Full : Mode_FullAuto {
   aiDispersionCoefX = 5;
   aiDispersionCoefY = 5;
   aiRateOfFire = 0.001;
   aiRateOfFireDispersion = 1;
   aiRateOfFireDistance = 10;
   artilleryCharge = 1;
   artilleryDispersion = 1;
   autoFire = 1;
   burst = 1;
   burstRangeMax = -1;
   canShootInWater = 0;
   dispersion = 0.0021;
   displayName = "Full";
   ffCount = 1;
   ffFrequency = 11;
   ffMagnitude = 0.5;
   flash = "gunfire";
   flashSize = 0.1;
   maxRange = 10;
   maxRangeProbab = 0.05;
   midRange = 5;
   midRangeProbab = 0.7;
   minRange = 0;
   minRangeProbab = 0.2;
   multiplier = 1;
   recoil = "recoil_auto_primary_3outof10";
   recoilProne = "recoil_auto_primary_prone_3outof10";
   reloadTime = 0.104;
   requiredOpticType = -1;
   showToPlayer = 1;
   sound[] = {"",10,1};
   soundBegin[] = {"sound",1};
   soundBeginWater[] = {"sound",1};
   soundBurst = 0;
   soundClosure[] = {"sound",1};
   soundContinuous = 0;
   soundEnd[] = {"sound",1};
   soundLoop[] = {};
   sounds[] = {"StandardSound"};
   textureType = "fullAuto";
   useAction = 0;
   useActionTitle = "";
   weaponSoundEffect = "";
    class StandardSound : BaseSoundModeType {
     begin1[] = {"\WW2\Assets_s\Weapons\Rifles_s\MP44\MP44_Shot.wss",1,1,1000};
     closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4.wss",2.5,1,15};
     closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_5.wss",2.5,1,15};
     soundBegin[] = {"begin1",1};
     soundClosure[] = {"closure1",0.5,"closure2",0.5};
     weaponSoundEffect = "IF_DefaultRifle";
    };
   };/*
   class Eventhandlers: Eventhandlers {
    class fow_mgRoF {
    fired = "_this spawn fow_main_fnc_mgRoF;";
    };
    };*/
  };

 class LEN_SMLE_No4Mk1 : LIB_K98 {
  descriptionShort = "Rifle, No. 4 Mk I";
  displayName = "Lee Enfield No. 4 Mk I (2PzD)";
  magazines[] = {"fow_10Rnd_303","LEN_10Rnd_303"};
  recoil = "recoil_rifle_1";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 88.037;
   };
  };
  class LEN_SMLE_No4Mk1T : LEN_SMLE_No4Mk1 {
   descriptionShort = "Rifle, No. 4 Mk I (T)";
   displayName = "Lee Enfield No. 4 Mk I (T) (2PzD)";
    class WeaponSlotsInfo : WeaponSlotsInfo {
    mass = 109.924;
    };
   };
//End Rifles

//Submachine Guns
 class LEN_M3a1 : LIB_M1A1_Thompson {
  descriptionShort = "Submachine Gun, Caliber .45, M3A1";
  displayName = "M3A1 GreaseGun (2PzD)";
  //fow_burstLenght = {2,3,3,4};
  modes[] = {"Full","Far","Medium","Short"};
  magazines[] = {"fow_30Rnd_45acp_M3_2PzD","fow_30Rnd_45acp_T_M3_2PzD","LEN_30Rnd_45ACP_M3","fow_30Rnd_45acp"};
  recoil = "recoil_smg_02";
  scope = 2;
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 77.426;
   };
   class Single : Mode_SemiAuto {
   showToPlayer = 0;
   };
   class Full : Mode_FullAuto {
   reloadTime = 0.133;
   };/*
   class Eventhandlers: Eventhandlers {
    class fow_mgRoF {
    fired = "_this spawn fow_main_fnc_mgRoF;";
    };
    };*/
  };

 class LEN_PPS43 : LIB_PPSh41_m {
  descriptionShort = "Pistolet-Pulemyot Sudayeva 43";
  displayName = "PPS-43 (2PzD)";
  //fow_burstLenght = {2,3,4,4,5,5};
  magazines[] = {"LEN_35Rnd_762x25_2PzD"};
  recoil = "recoil_smg_02";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 65.074;
   };
   class Full : Full {
   reloadTime = 0.100;
   };/*
   class Eventhandlers: Eventhandlers {
    class fow_mgRoF {
    fired = "_this spawn fow_main_fnc_mgRoF;";
    };
    };*/
  };

 class LEN_StenMk2 : LIB_MP40 {
  descriptionShort = "Sten Mk II";
  displayName = "Sten Mk II (2PzD)";
  //fow_burstLenght = {2,3,3,4};
  magazines[] = {"LEN_32Rnd_9x19","fow_32Rnd_9x19_sten","LIB_32Rnd_9x19","fow_32Rnd_9x19_mp40"};
  recoil = "recoil_smg_02";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 65.074;
   };
   class FullAuto : Mode_FullAuto {
   reloadTime = 0.109;
   };/*
   class Eventhandlers: Eventhandlers {
    class fow_mgRoF {
    fired = "_this spawn fow_main_fnc_mgRoF;";
    };
    };*/
  };
  class LEN_StenMk2S : LEN_StenMk2 {
  descriptionShort = "Sten Mk IIS";
  displayName = "Sten Mk IIS (2PzD)";
  //fow_burstLenght = {2,3,3,4};
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 77.644;
   };
   class FullAuto : Mode_FullAuto {
   reloadTime = 0.133;
   };/*
   class Eventhandlers: Eventhandlers {
    class fow_mgRoF {
    fired = "_this spawn fow_main_fnc_mgRoF;";
    };
    };*/
  };
  class LEN_StenMk5 : LEN_StenMk2 {
  descriptionShort = "Sten Mk V";
  displayName = "Sten Mk V (2PzD)";
  //fow_burstLenght = {2,3,3,4};
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 79.632;
   };/*
   class Eventhandlers: Eventhandlers {
    class fow_mgRoF {
    fired = "_this spawn fow_main_fnc_mgRoF;";
    };
    };*/
  };
//End Submachine Guns

//Machine Guns

//End Machine Guns

//Other Weapons
 class LEN_M12 : LIB_K98 {
  descriptionShort = "Winchester Model 12 Trench Shotgun";
  displayName = "Winchester M12 (2PzD)";
   class WeaponSlotsInfo : WeaponSlotsInfo {
   mass = 79.412;
   };
  };//End Other Weapons
