//Pistols
    class LEN_P35 : hgun_Rook40_F {
        descriptionShort = "Pistolet wz. 35 Vis, known as the Pistole 35(p) in Wehrmacht service or the Radom in English";
        displayName = "Pistolet wz. 35 Vis";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"LEN_8Rnd_9x19_2PzD","fow_8Rnd_9x19_Vis_2PzD"};
        scope = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 20.956;
        };
        class Single : Single {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class LEN_P640b : hgun_P07_F {
        descriptionShort = "Browning Hi-Power, known as the Pistole 640(b) in Wehrmacht service";
        displayName = "Browning Hi-Power";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"LEN_13Rnd_9x19","fow_13Rnd_9x19"};
        scope = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 15.851;
        };
        class Single : Single {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class LEN_PPK : hgun_Rook40_F {
        descriptionShort = "Walther Polizeipistole Kriminalmodell in 7.65x17mm";
        displayName = "Walther PPK (2PzD)";
        magazines[] = {"LIB_7Rnd_9x19","LEN_7Rnd_765x17","fow_7Rnd_765x17"};
        scope = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 12.507;
        };
        class Single : Single {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class LEN_Welrod : hgun_Rook40_F {
        descriptionShort = "Welrod Pistol";
        displayName = "Welrod";
        magazines[] = {"LEN_8Rnd_765x17_2PzD","fow_8Rnd_765x17"};
        scope = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 24.044;
        };
        class Single : Single {
            dispersion = MOA_TO_RAD(15);
        };
    };
//End Pistols

//Rifles
    class LEN_FG42 : LIB_MP44 {
        descriptionShort = "Fallschirmjagergewehr 42 Ausfuhrung G";
        displayName = "FG42 Ausf.G (2PzD)";
        //fow_burstLength = 3;
        magazines[] = {"LIB_20Rnd_792x57","len_20Rnd_792x57","fow_20Rnd_792x57"};
        modes[] = {"Single","FullAuto"};
        recoil = "recoil_rifle_1";
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
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
            reloadTime = 0.08; //750 rpm
            maxRange = 600;
            maxRangeProbab = 0.05;
            midRange = 275;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.3;
        };
        class FullAuto : Mode_FullAuto {
            recoil = "recoil_single_primary_3outof10";
            recoilProne = "recoil_single_primary_prone_3outof10";
            reloadTime = 0.08; //750 rpm
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
        discreteDistance[] = {100,200,300,400,500,600,700,800};
        discreteDistanceInitIndex = 1;
        //fow_burstLength = 3;
        magazines[] = {"LIB_30Rnd_792x33","fow_30Rnd_792x33"};
        recoil = "recoil_mx";
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
        /*class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 97.588;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.104; //575 rpm
        };
    };

    class LEN_SMLE_No4Mk1 : LIB_K98 {
        descriptionShort = "Rifle, No. 4 Mk I";
        displayName = "Lee Enfield No. 4 Mk I (2PzD)";
        discreteDistance[] = {300,600};
        discreteDistanceInitIndex = 0;
        magazines[] = {"LEN_10Rnd_303","fow_10Rnd_303"};
        recoil = "recoil_rifle_1";
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 88.037;
        };
        class Single;
        class Short;
        class Medium;
        class Far;
    };
    class LEN_SMLE_No4Mk1T : LEN_SMLE_No4Mk1 {
        descriptionShort = "Rifle, No. 4 Mk I (T)";
        displayName = "Lee Enfield No. 4 Mk I (T) (2PzD)";
        dispersion = MOA_TO_RAD(2.5);
        scope = 2;
        // modes[] = {"Single","Far","Medium","Short"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 109.924;
        };
        class Single : Single {
            dispersion = MOA_TO_RAD(2.5);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_nagant_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class Short : Short {
            dispersion = MOA_TO_RAD(3);
        };
        class Medium : Medium {
            dispersion = MOA_TO_RAD(3);
        };
        class Far : Far {
            dispersion = MOA_TO_RAD(3);
        };*/
    };
//End Rifles

//Submachine Guns
    class LEN_M3a1 : LIB_M1A1_Thompson {
        descriptionShort = "Submachine Gun, Caliber .45, M3A1";
        displayName = "M3A1 GreaseGun (2PzD)";
        //dispersion = 8);
        fow_burstLength = 3;
        modes[] = {"Full","Far","Medium","Short"};
        magazines[] = {"fow_30Rnd_45acp_M3_2PzD","fow_30Rnd_45acp_T_M3_2PzD","LEN_30Rnd_45ACP_M3"};
        recoil = "recoil_smg_02";
        scope = 2;
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 77.426;
        };
        class Full : Mode_FullAuto {
            //dispersion = 8);
            reloadTime = 0.133; //451 rpm
        };/*
        class Far : Full {
            reloadTime = 0.133; //451 rpm
        };
        class Medium : Full {
            reloadTime = 0.133; //451 rpm
        };
        class Short : Medium {
            reloadTime = 0.133; //451 rpm
        };*/
    };

    class LEN_PPS43 : LIB_PPSh41_m {
        descriptionShort = "Pistolet-Pulemyot Sudayeva 43";
        displayName = "PPS-43 (2PzD)";
        fow_burstLength = 3;
        magazines[] = {"LEN_35Rnd_762x25_2PzD"};
        recoil = "recoil_smg_02";
        scope = 2;
        LIB_ReplaceMagazine = 0;
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 65.074;
        };
        class Full : Full {
            reloadTime = 0.100; //600 rpm
        };/*
        class Far : Far {
            reloadTime = 0.100; //600 rpm
        };
        class Medium : Medium {
            reloadTime = 0.100; //600 rpm
        };
        class Short : Short {
            reloadTime = 0.100; //600 rpm
        };*/
    };

    class LEN_StenMk2 : LIB_MP40 {
        descriptionShort = "Sten Mk II";
        displayName = "Sten Mk II (2PzD)";
        dispersion = MOA_TO_RAD(8);
        fow_burstLength = 3;
        magazines[] = {"LEN_32Rnd_9x19","fow_32Rnd_9x19_sten","LIB_32Rnd_9x19","fow_32Rnd_9x19_mp40"};
        recoil = "recoil_smg_02";
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 65.074;
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = 0.109; //550 rpm
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = 0.109; //550 rpm
        };
    };
    class LEN_StenMk2S : LEN_StenMk2 {
        descriptionShort = "Sten Mk IIS";
        displayName = "Sten Mk IIS (2PzD)";
        dispersion = MOA_TO_RAD(8);
        fow_burstLength = 4;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 77.644;
        };
        class FullAuto : FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = 0.133; //451 rpm
        };
        class Single : Single {
            dispersion = MOA_TO_RAD(8);
            reloadTime = 0.133; //451 rpm
        };
    };
    class LEN_StenMk5 : LEN_StenMk2 {
        descriptionShort = "Sten Mk V";
        displayName = "Sten Mk V (2PzD)";
        dispersion = MOA_TO_RAD(8);
        fow_burstLength = 3;
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 79.632;
        };
        class FullAuto : FullAuto {
            reloadTime = 0.109; //550 rpm
        };
        class Single : Single {
            reloadTime = 0.109; //550 rpm
        };
    };
//End Submachine Guns

//Machine Guns

//End Machine Guns

//Other Weapons
    class LEN_M12 : LIB_K98 {
        descriptionShort = "Winchester Model 12 Trench Shotgun, 12 Gauge";
        displayName = "Winchester Model 12 (2PzD)";
        magazines[] = {"fow_6Rnd_12G_Pellets","LEN_6Rnd_12G_Pellets","fow_6Rnd_12G_Slug","LEN_6Rnd_12G_Slug","fow_5Rnd_12G_Pellets","fow_5Rnd_12G_Slug"};
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 79.412;
        };
    };
//End Other Weapons