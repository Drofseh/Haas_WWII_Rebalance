//Pistols
    class LIB_Colt_M1911 : LIB_PISTOL {
        descriptionShort = "Automatic Pistol, Caliber .45, M1911A1";
        displayName = "M1911A1 (2PzD)";
        magazines[] = {"LIB_7Rnd_45ACP","fow_7Rnd_45acp","LIB_11Rnd_45ACP_2PzD"};
        recoil = "recoil_pistol_acpc2";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 24.375;
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

    class LIB_TT33 : LIB_PISTOL {
        descriptionShort = "Pistolet Tokareva Obraztsa 1933 goda";
        displayName = "TT-33 (2PzD)";
        recoil = "recoil_pistol_p07";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 18.309;
        };
    };
//End Pistols

//Rifles
    class LIB_DELISLE : LIB_RIFLE {
        descriptionShort = "De Lisle Carbine";
        displayName = "De Lisle Carbine (2PzD)";
        magazines[] = {"LIB_7Rnd_45ACP","LIB_11Rnd_45ACP_2PzD","fow_7Rnd_45acp"};
        recoil = "recoil_smg_01";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 90.441;
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

    /*class LIB_K98_GL_2PzD : LIB_K98 {
        descriptionShort = "Karabiner 98 kurz with Schiessbecher grenade launcher";
        displayName = "Kar98k Schiessbecher (2PzD)";
        class LinkedItems  {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_GW_SB_Empty";
            };
        };
    };*/

    class LIB_G3340 : LIB_K98 {
        descriptionShort = "Puška vz. 33, known as the Gewehr 33/40(t) in Wehrmacht service";
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
        class Single;
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
        //fow_burstLength = 3;
        magazines[] = {"LIB_30Rnd_762x33_2PzD","LIB_15Rnd_762x33","fow_30Rnd_762x33_2PzD","fow_15Rnd_762x33"};
        modes[] = {"Single","Full","Far","Medium","Short"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 52.941;
        };
        class Single;
        class Full : Single {
            autoFire = 1;
            displayName = "Full";
            reloadTime = 0.08;
            textureType = "fullAuto";
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
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

    class LIB_MP44 : LIB_RIFLE {
        descriptionShort = "Sturmgewehr 44";
        displayName = "StG44 (2PzD)";
        //fow_burstLength = 3;
        magazines[] = {"LIB_30Rnd_792x33","fow_30Rnd_792x33"};
        modes[] = {"Single","Full","Far","Medium","Short"};
        recoil = "recoil_mx";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 97.588;
        };
        class Single : Mode_SemiAuto {
            reloadTime = 0.104;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.104;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
  };

    class LIB_SVT_40 : LIB_RIFLE {
        descriptionShort = "Samozaryadnaya Vintovka Tokareva, Obrazets 1940 goda";
        displayName = "SVT-40 (2PzD)";
        magazines[] = {"LIB_10Rnd_762x54","LIB_10Rnd_762x54_t30","LIB_10Rnd_762x54_t302","LIB_10Rnd_762x54_t46","LIB_10Rnd_762x54_t462","LIB_10Rnd_762x54_d","LIB_10Rnd_762x54_b30","lib_5Rnd_762x54","lib_5Rnd_762x54_t46","lib_5Rnd_762x54_t30","lib_5Rnd_762x54_D","lib_5Rnd_762x54_b30"};
        recoil = "recoil_rifle_1";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 84.926;
        };
        class Single;
    };
    class LIB_AVT_40_2PzD : LIB_SVT_40 {
        descriptionShort = "AVT-40";
        displayName = "AVT-40 (2PzD)";
        //fow_burstLength = 3;
        modes[] = {"Single","Full","Far","Medium","Short"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 87.132;
        };
        class Single;
        class Full : Single {
            autoFire = 1;
            displayName = "Full";
            reloadTime = 0.080;
            textureType = "fullAuto";
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };

    class LIB_PTRD : LIB_RIFLE {
        descriptionShort = "ProtivoTankovoye Ruzhyo Degtyaryova 1941";
        displayName = "PTRD-41 (2PzD)";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 381.0;
        };
    };
  
//End Rifles

//Submachine Guns
    class LIB_M1A1_Thompson : LIB_SMG {
        descriptionShort = "Submachine Gun, Caliber .45, M1A1";
        displayName = "M1A1 Thompson (2PzD)";
        //fow_burstLength = 4;
        magazines[] = {"LIB_30Rnd_45ACP","LIB_20Rnd_45ACP_M1_2PzD","fow_20Rnd_45acp_M1_2PzD","fow_20Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp_M1_2PzD","fow_30Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp","fow_30Rnd_45acp_T"};
        recoil = "recoil_smg_01";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 105.882;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.086;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };
    class LIB_M1928_Thompson : LIB_M1A1_Thompson {
        descriptionShort = "Submachine Gun, Caliber .45, M1928";
        displayName = "M1928 Thompson (2PzD)";
        //fow_burstLength = 4;
        magazines[] = {"LIB_50Rnd_45ACP","LIB_20Rnd_45ACP_M1_2PzD","LIB_30Rnd_45ACP","fow_20Rnd_45acp_M1_2PzD","fow_20Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp_M1_2PzD","fow_30Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp","fow_30Rnd_45acp_T"};
        recoil = "recoil_smg_01";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 108.0;
        };
        class Full : Full {
            reloadTime = 0.089;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };
    class LIB_M1928_Thompson_d : LIB_M1928_Thompson {
        descriptionShort = "Submachine Gun, Caliber .45, M1928 with drum magazine";
        displayName = "M1928 Thompson (Drum) (2PzD)";
        //fow_burstLength = 4;
        magazines[] = {"LIB_50Rnd_45ACP","LIB_20Rnd_45ACP_M1_2PzD","LIB_30Rnd_45ACP","fow_20Rnd_45acp_M1_2PzD","fow_20Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp_M1_2PzD","fow_30Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp","fow_30Rnd_45acp_T"};
        recoil = "recoil_smg_01";
        scope = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 108.;
        };
        class Full : Full {
            reloadTime = 0.089;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };
    class LIB_M1928A1_Thompson : LIB_M1928_Thompson {
        descriptionShort = "Submachine Gun, Caliber .45, M1928A1";
        displayName = "M1928A1 Thompson (2PzD)";
        //fow_burstLength = 4;
        magazines[] = {"LIB_50Rnd_45ACP","LIB_20Rnd_45ACP_M1_2PzD","LIB_30Rnd_45ACP","fow_20Rnd_45acp_M1_2PzD","fow_20Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp_M1_2PzD","fow_30Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp","fow_30Rnd_45acp_T"};
        recoil = "recoil_smg_01";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 106.0;
        };
        class Full : Full {
            reloadTime = 0.089;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };

    class LIB_MP40 : LIB_SMG {
        descriptionShort = "Maschinenpistole 40";
        displayName = "MP40 (2PzD)";
        //fow_burstLength = 4;
        magazines[] = {"LIB_32Rnd_9x19","fow_32Rnd_9x19_mp40","LEN_32Rnd_9x19","fow_32Rnd_9x19_sten"};
        recoil = "recoil_smg_02";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 87.551;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.114;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };

    class LIB_PPSh41_m : LIB_SMG {
        descriptionShort = "Pistolet-Pulemyot Shpagina 41 (Stick)";
        displayName = "PPSh-41 (Stick) (2PzD)";
        //fow_burstLength = 5;
        magazines[] = {"lib_35Rnd_762x25","lib_35Rnd_762x25_t","lib_35Rnd_762x25_t2","lib_35Rnd_762x25_ap","lib_71Rnd_762x25","lib_71Rnd_762x25_t","lib_71Rnd_762x25_t2","lib_71Rnd_762x25_ap"};
        modes[] = {"Full","Single","Far","Medium","Short"};
        recoil = "recoil_smg_02";
        scope = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 80.074;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.063;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };
    class LIB_PPSh41_d : LIB_PPSh41_m {
        descriptionShort = "Pistolet-Pulemyot Shpagina 41 (Drum)";
        displayName = "PPSh-41 (Drum) (2PzD)";
        //fow_burstLength = 5;
        magazines[] = {"lib_71Rnd_762x25","lib_71Rnd_762x25_t","lib_71Rnd_762x25_t2","lib_71Rnd_762x25_ap","lib_35Rnd_762x25","lib_35Rnd_762x25_t","lib_35Rnd_762x25_t2","lib_35Rnd_762x25_ap"};
        modes[] = {"Full","Single","Far","Medium","Short"};
        recoil = "recoil_smg_02";
        scope = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 80.074;
        };
        class Full : Full {
        reloadTime = 0.063;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };
//End Submachine Guns

//Machineguns
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
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };

    class LIB_DT : LIB_LMG {
        descriptionShort = "Degtyaryova Tankovy Machine Gun";
        displayName = "DT (2PzD)";
        //fow_burstLength = 7;
        recoil = "recoil_mk200";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 220.588;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.109;
        };
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };

    class LIB_DT_OPTIC : LIB_DT {
        descriptionShort = "Degtyaryova Tankovy Machine Gun with optic";
        displayName = "DT (Optic) (2PzD)";
        //fow_burstLength = 7;
        recoil = "recoil_mk200";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 231.618;
        };
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };

    class LIB_M1918A2_BAR : LIB_LMG {
        descriptionShort = "Rifle, Caliber .30, Automatic, Browning, M1918A2";
        displayName = "M1918A2 BAR (2PzD)";
        //fow_burstLength = 5;
        magazines[] = {"LIB_20Rnd_762x63","fow_20Rnd_762x63"};
        recoil = "recoil_mk200";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 164.096;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.200;
            textureType = "fullAuto";
        };
        class Full_Rapid : Full {
            reloadTime = 0.092;
            textureType = "fastAuto";
        };
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };

    class LIB_M1919A4 : LIB_LMG {
        descriptionShort = "Gun, Machine, Caliber .30, Browning, M1919A4";
        displayName = "M1919A4 (2PzD)";
        //fow_burstLength = 7;
        magazines[] = {"LIB_250Rnd_762x63_2PzD","LIB_200Rnd_762x63_2PzD","LIB_150Rnd_762x63_2PzD","LIB_100Rnd_762x63","LIB_50Rnd_762x63","fow_250Rnd_M1919","fow_200Rnd_M1919_2PzD","fow_150Rnd_M1919_2PzD","fow_100Rnd_M1919_2PzD","fow_50Rnd_762x63"};
        recoil = "recoil_mk200";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 310.178;
        };
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };
    class LIB_M1919A6 : LIB_M1919A4 {
        descriptionShort = "Gun, Machine, Caliber .30, Browning, M1919A6";
        displayName = "M1919A6 (2PzD)";
        //fow_burstLength = 7;
        magazines[] = {"LIB_250Rnd_762x63_2PzD","LIB_200Rnd_762x63_2PzD","LIB_150Rnd_762x63_2PzD","LIB_100Rnd_762x63","LIB_50Rnd_762x63","fow_250Rnd_M1919","fow_200Rnd_M1919_2PzD","fow_150Rnd_M1919_2PzD","fow_100Rnd_M1919_2PzD","fow_50Rnd_762x63"};
        recoil = "recoil_mk200";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 320.184;
        };
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };

    class LIB_MG34 : LIB_LMG {
        descriptionShort = "Maschinengewehr 34";
        displayName = "MG34 (2PzD)";
        //fow_burstLength = 7;
        modes[] = {"Full","Single","Far","Medium","Short"};
        magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","LIB_100Rnd_792x57","LIB_100Rnd_792x57_SMK_2PzD","LIB_100Rnd_792x57_sS_2PzD","LIB_150Rnd_792x57_2PzD","LIB_150Rnd_792x57_SMK_2PzD","LIB_150Rnd_792x57_sS_2PzD","LIB_200Rnd_792x57_2PzD","LIB_200Rnd_792x57_SMK_2PzD","LIB_200Rnd_792x57_sS_2PzD","LIB_250Rnd_792x57_2PzD","LIB_250Rnd_792x57_SMK_2PzD","LIB_250Rnd_792x57_sS_2PzD","fow_50Rnd_792x57","fow_250Rnd_792x57"};
        recoil = "recoil_mk200";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 266.8;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.07;
        };
        class Single : Full {
            autoFire = 0;
            burst = 1;
            displayName = "Semi";
            reloadTime = 0.07;
            textureType = "semi";
        };
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };

    class LIB_MG34_PT : LIB_MG34 {
        descriptionShort = "Maschinengewehr 34";
        displayName = "MG34 (PT34) (2PzD)";
        //fow_burstLength = 7;
        magazines[] = {"LIB_75Rnd_792x57"};
        recoil = "recoil_mk200";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 271.82;
        };
        class Full : Full {
            reloadTime = 0.07;
        };
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };

    class LIB_MG42 : LIB_LMG {
        descriptionShort = "Maschinengewehr 42";
        displayName = "MG42 (2PzD)";
        //fow_burstLength = 7;
        magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","LIB_100Rnd_792x57","LIB_100Rnd_792x57_SMK_2PzD","LIB_100Rnd_792x57_sS_2PzD","LIB_150Rnd_792x57_2PzD","LIB_150Rnd_792x57_SMK_2PzD","LIB_150Rnd_792x57_sS_2PzD","LIB_200Rnd_792x57_2PzD","LIB_200Rnd_792x57_SMK_2PzD","LIB_200Rnd_792x57_sS_2PzD","LIB_250Rnd_792x57_2PzD","LIB_250Rnd_792x57_SMK_2PzD","LIB_250Rnd_792x57_sS_2PzD","fow_50Rnd_792x57","fow_250Rnd_792x57"};
        recoil = "recoil_mk200";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 255.221;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.05;
        };
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };
//End Machineguns

//Other Weapons, Tripod, Launchers
    class LIB_M1A1_Bazooka : LIB_LAUNCHER {
        descriptionShort = "Rocket Launcher, M1A1";
        displayName = "M1A1 Bazooka (2PzD)";
        magazines[] = {"LIB_1Rnd_60mm_M6","fow_1Rnd_m6a1"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 127.941;
        };
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

    class LIB_M2_Flamethrower : LIB_RIFLE {
        descriptionShort = "Portable Flame Thrower M2-2";
        displayName = "M2-2 Flame Thrower (2PzD)";
        class FullAuto : Mode_FullAuto {
            reloadTime = 0.04;
        };
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };

    class LIB_M1919A4_tripod : LIB_M1919A4_coax {
        descriptionShort = "Gun, Machine, Caliber .30, Browning, M1919A4 on M2 Tripod";
        displayName = "M1919A4 on M2 Tripod (2PzD)";
        //fow_burstLength = 7;
        magazines[] = {"LIB_250Rnd_762x63_2PzD","LIB_200Rnd_762x63_2PzD","LIB_150Rnd_762x63_2PzD","LIB_100Rnd_762x63","LIB_50Rnd_762x63","fow_250Rnd_M1919","fow_200Rnd_M1919_2PzD","fow_150Rnd_M1919_2PzD","fow_100Rnd_M1919_2PzD","fow_50Rnd_M1919"};
        recoil = "recoil_mk200";
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
  };

    class LIB_MG34_Tripod : LIB_MG34_coax {
        descriptionShort = "Maschinengewehr 34 on Laffete Tripod";
        displayName = "MG34 Laffete (2PzD)";
        //fow_burstLength = 7;
        magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","LIB_100Rnd_792x57","LIB_100Rnd_792x57_SMK_2PzD","LIB_100Rnd_792x57_sS_2PzD","LIB_150Rnd_792x57_2PzD","LIB_150Rnd_792x57_SMK_2PzD","LIB_150Rnd_792x57_sS_2PzD","LIB_200Rnd_792x57_2PzD","LIB_200Rnd_792x57_SMK_2PzD","LIB_200Rnd_792x57_sS_2PzD","LIB_250Rnd_792x57_2PzD","LIB_250Rnd_792x57_SMK_2PzD","LIB_250Rnd_792x57_sS_2PzD","fow_50Rnd_792x57","fow_250Rnd_792x57"};
        modes[] = {"manual","Single"};
        class manual : MGun {
            displayName = "Full";
            reloadTime = 0.07;
        };
        class Single : manual {
            autoFire = 0;
            burst = 1;
            displayName = "Semi";
            reloadTime = 0.07;
            textureType = "semi";
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
  };

    class LIB_MG42_Tripod : LIB_MLMG42 {
        descriptionShort = "Maschinengewehr 42 on Laffete Tripod";
        displayName = "MG42 Laffete (2PzD)";
        //fow_burstLength = 7;
        magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","LIB_100Rnd_792x57","LIB_100Rnd_792x57_SMK_2PzD","LIB_100Rnd_792x57_sS_2PzD","LIB_150Rnd_792x57_2PzD","LIB_150Rnd_792x57_SMK_2PzD","LIB_150Rnd_792x57_sS_2PzD","LIB_200Rnd_792x57_2PzD","LIB_200Rnd_792x57_SMK_2PzD","LIB_200Rnd_792x57_sS_2PzD","LIB_250Rnd_792x57_2PzD","LIB_250Rnd_792x57_SMK_2PzD","LIB_250Rnd_792x57_sS_2PzD","fow_50Rnd_792x57","fow_250Rnd_792x57"};
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
  };

    /*class LIB_Maxim_M30 : LIB_MLMG_base {
        fow_burstLength = 7;
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
  };*/

    class LIB_BM37_Barrel : LIB_Slung_Static_Weapon_Base {
        descriptionShort = "Gun tube for the Soviet BM-37 82mm mortar";
        displayName = "BM-37 82mm Mortar Tube (2PzD)";
        //magazines[] = {"LIB_1Rnd_82mm_Mo_HE","LIB_1Rnd_82mm_Mo_Smoke","LIB_1Rnd_82mm_Mo_Illum"};
        magazines[] = {};
    };

    class LIB_BM37_Tripod : LIB_Slung_Static_Weapon_Base {
        descriptionShort = "Tripod for the Soviet BM-37 82mm mortar";
        displayName = "BM-37 82mm Mortar Tripod (2PzD)";
        //magazines[] = {"LIB_1Rnd_82mm_Mo_HE","LIB_1Rnd_82mm_Mo_Smoke","LIB_1Rnd_82mm_Mo_Illum"};
        magazines[] = {};
    };

    class LIB_GrWr34_Barrel : LIB_Slung_Static_Weapon_Base {
        descriptionShort = "Gun tube for the German Granatwerfer 34 81mm mortar";
        displayName = "GrW34 81mm Mortar Tube (2PzD)";
        //magazines[] = {"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_Smoke","LIB_1Rnd_81mm_Mo_Illum"};
        magazines[] = {};
    };

    class LIB_GrWr34_Tripod : LIB_Slung_Static_Weapon_Base {
        descriptionShort = "Tripod for the German Granatwerfer 34 81mm mortar";
        displayName = "GrW34 81mm Mortar Tripod (2PzD)";
        //magazines[] = {"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_Smoke","LIB_1Rnd_81mm_Mo_Illum"};
        magazines[] = {};
    };

    class LIB_M2_60_Barrel : LIB_Slung_Static_Weapon_Base {
        descriptionShort = "Gun tube for the American M2 60mm mortar";
        displayName = "M2 60mm Mortar Tube (2PzD)";
        //magazines[] = {"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_Smoke","LIB_1Rnd_81mm_Mo_Illum"};
        magazines[] = {};
    };

    class LIB_M2_60_Tripod : LIB_Slung_Static_Weapon_Base {
        descriptionShort = "Tripod for the American M2 60mm mortar";
        displayName = "M2 60mm Mortar Tripod (2PzD)";
        //magazines[] = {"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_Smoke","LIB_1Rnd_81mm_Mo_Illum"};
        magazines[] = {};
    };

    class LIB_M2_Tripod : LIB_Slung_Static_Weapon_Base {
        descriptionShort = "M2 Tripod for M1919A4";
        displayName = "M1919A4 M2 Tripod (2PzD)";
        //magazines[] = {"LIB_50Rnd_762x63","LIB_200Rnd_762x63_2PzD","LIB_150Rnd_762x63_2PzD","LIB_100Rnd_762x63","LIB_50Rnd_762x63","fow_250Rnd_M1919","fow_200Rnd_M1919_2PzD","fow_150Rnd_M1919_2PzD","fow_100Rnd_M1919_2PzD","fow_50Rnd_M1919"};
        magazines[] = {};
    };

    class LIB_Laffete_Tripod : LIB_Slung_Static_Weapon_Base {
        descriptionShort = "Laffete Tripod for MG34 and MG42";
        displayName = "Laffete Tripod (2PzD)";
        //magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","LIB_100Rnd_792x57","LIB_100Rnd_792x57_SMK_2PzD","LIB_100Rnd_792x57_sS_2PzD","LIB_150Rnd_792x57_2PzD","LIB_150Rnd_792x57_SMK_2PzD","LIB_150Rnd_792x57_sS_2PzD","LIB_200Rnd_792x57_2PzD","LIB_200Rnd_792x57_SMK_2PzD","LIB_200Rnd_792x57_sS_2PzD","LIB_250Rnd_792x57_2PzD","LIB_250Rnd_792x57_SMK_2PzD","LIB_250Rnd_792x57_sS_2PzD","fow_50Rnd_792x57","fow_250Rnd_792x57"};
        magazines[] = {};
    };
//End Other Weapons, Tripod, Launchers