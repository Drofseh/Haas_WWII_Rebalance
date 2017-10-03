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
        descriptionShort = "Walther Polizeipistole Kriminalmodell in 7.65x17mm";
        displayName = "Walther PPK (2PzD)";
        magazines[] = {"LEN_7Rnd_765x17"};
        scope = 1;
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
        descriptionShort = "Fallschirmjagergewehr 42 Ausfuhrung G";
        displayName = "FG42 (2PzD)";
        //fow_burstLength = 3;
        magazines[] = {"len_20Rnd_792x57"};
        modes[] = {"Single","FullAuto"};
        recoil = "recoil_rifle_1";
        scope = 2;
        /*class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
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
        };
    };

    class LEN_MP44 : LIB_MP44 {
        descriptionShort = "Sturmgewehr 44";
        displayName = "StG44 (2PzD)";
        //fow_burstLength = 3;
        magazines[] = {"LIB_30Rnd_792x33","fow_30Rnd_792x33"};
        recoil = "recoil_mx";
        scope = 1;
        /*class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 97.588;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.104;
        };
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
        //fow_burstLength = 4;
        modes[] = {"Full","Far","Medium","Short"};
        magazines[] = {"fow_30Rnd_45acp_M3_2PzD","fow_30Rnd_45acp_T_M3_2PzD","LEN_30Rnd_45ACP_M3","fow_30Rnd_45acp"};
        recoil = "recoil_smg_02";
        scope = 2;
        /*class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 77.426;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.133;
        };
        class Far : Full {
            reloadTime = 0.133;
        };
        class Medium : Full {
            reloadTime = 0.133;
        };
        class Short : Medium {
            reloadTime = 0.133;
        };
    };

    class LEN_PPS43 : LIB_PPSh41_m {
        descriptionShort = "Pistolet-Pulemyot Sudayeva 43";
        displayName = "PPS-43 (2PzD)";
        //fow_burstLength = 5;
        /*class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
        magazines[] = {"LEN_35Rnd_762x25_2PzD"};
        recoil = "recoil_smg_02";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 65.074;
        };
        class Full : Full {
            reloadTime = 0.100;
        };
        class Far : Full {
            reloadTime = 0.100;
        };
        class Medium : Full {
            reloadTime = 0.100;
        };
        class Short : Medium {
            reloadTime = 0.100;
        };
    };

    class LEN_StenMk2 : LIB_MP40 {
        descriptionShort = "Sten Mk II";
        displayName = "Sten Mk II (2PzD)";
        //fow_burstLength = 4;
        /*class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
        magazines[] = {"LEN_32Rnd_9x19","fow_32Rnd_9x19_sten","LIB_32Rnd_9x19","fow_32Rnd_9x19_mp40"};
        recoil = "recoil_smg_02";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 65.074;
        };
        class FullAuto : Mode_FullAuto {
            reloadTime = 0.109;
        };
        class Single : Mode_SemiAuto {
            reloadTime = 0.109;
        };
    };
    class LEN_StenMk2S : LEN_StenMk2 {
        descriptionShort = "Sten Mk IIS";
        displayName = "Sten Mk IIS (2PzD)";
        //fow_burstLength = 4;
        /*class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 77.644;
        };
        class FullAuto : Mode_FullAuto {
            reloadTime = 0.133;
        };
        class Single : Mode_SemiAuto {
            reloadTime = 0.133;
        };
    };
    class LEN_StenMk5 : LEN_StenMk2 {
        descriptionShort = "Sten Mk V";
        displayName = "Sten Mk V (2PzD)";
        //fow_burstLength = 4;
        /*class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 79.632;
        };
        class FullAuto : FullAuto {
            reloadTime = 0.109;
        };
        class Single : Single {
            reloadTime = 0.109;
        };
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
    };
//End Other Weapons