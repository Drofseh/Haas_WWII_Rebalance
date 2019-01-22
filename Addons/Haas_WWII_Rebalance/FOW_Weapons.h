
    class fow_rifle_base : Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    class fow_shotgun_base : fow_rifle_base {
        class WeaponSlotsInfo;
    };

    class fow_rifleBolt_base : fow_rifle_base {
        class WeaponSlotsInfo;
    };

//Pistols
    class fow_w_m1911 : Pistol_Base_F {
        displayName = "M1911A1";
        descriptionShort = "Automatic Pistol, Caliber .45, M1911A1";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"LIB_7Rnd_45ACP","fow_7Rnd_45acp"};
        recoil = "recoil_2PzD_pistol_heavy";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 24.375;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_m1895_Shot_SoundSet","IFA3_Pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_p640p : Pistol_Base_F {
        displayName = "Browning Hi-Power";
        descriptionShort = "Browning Hi-Power, known as the Pistole 640(b) in Wehrmacht service";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"LEN_13Rnd_9x19","fow_13Rnd_9x19"};
        recoil = "recoil_2PzD_pistol_medium";
        scope = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 15.851;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_01",3.98107,1,1200};
                begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_02",3.98107,1,1200};
                begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_03",3.98107,1,1200};
                closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_01",0.223872,1,10};
                closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_02",0.223872,1.2,10};
                soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"P07_Shot_SoundSet","P07_Tail_SoundSet","P07_InteriorTail_SoundSet"};
            };
        };
    };

    class fow_w_p08 : Pistol_Base_F {
        displayName = "P08";
        descriptionShort = "P08";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"LIB_8Rnd_9x19_P08","fow_8Rnd_9x19"};
        recoil = "recoil_2PzD_pistol_medium";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 18.419;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_luger_Shot_SoundSet","IFA3_Pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_p35 : Pistol_Base_F {
        displayName = "Pistolet wz. 35 Vis";
        descriptionShort = "Pistolet wz. 35 Vis, known as the Pistole 35(p) in Wehrmacht service or the Radom in English";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"LEN_8Rnd_9x19_2PzD","fow_8Rnd_9x19_Vis_2PzD"};
        recoil = "recoil_2PzD_pistol_medium";
        scope = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 20.956;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_01",3.16228,1,1200};
                begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_02",3.16228,1,1200};
                begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_03",3.16228,1,1200};
                closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01",0.158489,1,10};
                closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02",0.158489,1.1,10};
                soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"Rook40_Shot_SoundSet","Rook40_Tail_SoundSet","Rook40_InteriorTail_SoundSet"};
            };
        };
    };

    class fow_w_ppk : Pistol_Base_F {
        displayName = "Walther PPK";
        descriptionShort = "Walther Polizeipistole Kriminalmodell in 7.65x17mm";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"LIB_7Rnd_9x19","fow_7Rnd_765x17","LEN_7Rnd_765x17"};
        recoil = "recoil_2PzD_pistol_medium";
        scope = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 12.507;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_p38_Shot_SoundSet","IFA3_Pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_type10 : Pistol_Base_F {
        displayName = "Type 10 Flare Pistol";
        descriptionShort = "Type 10 Flare Pistol";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 25.806;
        };
    };

    class fow_w_type14 : Pistol_Base_F {
        displayName = "Type 14 Nambu";
        descriptionShort = "Type 14 Nambu";
        dispersion = MOA_TO_RAD(15);
        recoil = "recoil_2PzD_pistol_light";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 19.8;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_m1895_Shot_SoundSet","IFA3_Pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_webley : Pistol_Base_F {
        displayName = "Webley Mk IV";
        descriptionShort = "Webley Mk IV";
        dispersion = MOA_TO_RAD(15);
        recoil = "recoil_2PzD_pistol_light";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 19.8;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_m1895_Shot_SoundSet","IFA3_Pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_welrod_mkii : Pistol_Base_F {
        displayName = "Welrod";
        descriptionShort = "Welrod Pistol";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"LEN_8Rnd_765x17_2PzD","fow_8Rnd_765x17"};
        recoil = "recoil_2PzD_pistol_light";
        scope = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 24.044;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
        };
    };
//End Pistols

//Rifles
    class fow_w_fg42 : fow_rifle_base {
        displayName = "FG42 Ausf.G";
        descriptionShort = "Fallschirmjagergewehr 42 Ausfuhrung G";
        dispersion = MOA_TO_RAD(4);
        //fow_burstLength = 3;
        magazines[] = {"LIB_20Rnd_792x57","len_20Rnd_792x57","fow_20Rnd_792x57"};
        recoil = "recoil_2PzD_rifle_FG42";
        /*class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 109.191;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            recoil = "recoil_single_primary_3outof10";
            recoilProne = "recoil_single_primary_prone_3outof10";
            reloadTime = 0.08; //750 rpm
            maxRange = 600;
            maxRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.7;
            minRange = 50;
            minRangeProbab = 0.3;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_G43_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(4);
            recoil = "recoil_single_primary_3outof10";
            recoilProne = "recoil_single_primary_prone_3outof10";
            reloadTime = 0.08; //750 rpm
            maxRange = 50;
            maxRangeProbab = 0.5;
            midRange = 25;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.9;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_G43_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_g43 : fow_rifle_base {
        displayName = "G43";
        descriptionShort = "Gewehr 43";
        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
        discreteDistanceInitIndex = 2;
        dispersion = MOA_TO_RAD(6);
        magazines[] = {"lib_10Rnd_792x57","LIB_10Rnd_792x57_clip","lib_10Rnd_792x57_T","lib_10Rnd_792x57_T2","lib_10Rnd_792x57_sS","lib_10Rnd_792x57_SMK","fow_10nd_792x57","fow_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57_t","lib_5Rnd_792x57_sS","lib_5Rnd_792x57_SMK"};
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\Rifles\Gear_G43_X_ca.paa";
        recoil = "recoil_2PzD_rifle_semi";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 90.441;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(6);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_G43_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Far : Single {
            dispersion = MOA_TO_RAD(6);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_G43_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Medium : Single {
            dispersion = MOA_TO_RAD(6);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_G43_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Short : Single {
            dispersion = MOA_TO_RAD(6);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_G43_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_k98 : fow_rifleBolt_base {
        displayName = "Kar98k";
        descriptionShort = "Karabiner 98 kurz";
        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
        discreteDistanceInitIndex = 2;
        dispersion = MOA_TO_RAD(5);
        magazines[] = {"lib_5Rnd_792x57","lib_5Rnd_792x57_t","lib_5Rnd_792x57_sS","lib_5Rnd_792x57_SMK","fow_5Rnd_792x57"};
        recoil = "recoil_2PzD_rifle_bolt";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 87.993;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(5);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Far : Single {
            dispersion = MOA_TO_RAD(5);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Medium : Single {
            dispersion = MOA_TO_RAD(5);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Short : Single {
            dispersion = MOA_TO_RAD(5);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_k98_scoped : fow_w_k98 {
        displayName = "Kar98k, Zf41 Sight";
        descriptionShort = "Karabiner 98 kurz with Zf41 sight";
        dispersion = MOA_TO_RAD(3.5);
        recoil = "recoil_2PzD_rifle_bolt";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 89;
        };
        class Single : Single {
            dispersion = MOA_TO_RAD(3.5);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Far : Far {
            dispersion = MOA_TO_RAD(3.5);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Medium : Medium {
            dispersion = MOA_TO_RAD(3.5);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Short : Short {
            dispersion = MOA_TO_RAD(3.5);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_leeenfield_no4mk1 : fow_rifleBolt_base {
        displayName = "Lee Enfield No. 4 Mk I";
        descriptionShort = "Rifle, No. 4 Mk I";
        discreteDistance[] = {300,600};
        discreteDistanceInitIndex = 0;
        dispersion = MOA_TO_RAD(4);
        magazines[] = {"LEN_10Rnd_303","fow_10Rnd_303"};
        recoil = "recoil_2PzD_rifle_bolt";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 88.037;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_nagant_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Far : Single {
            dispersion = MOA_TO_RAD(4);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_nagant_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Medium : Single {
            dispersion = MOA_TO_RAD(4);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_nagant_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Short : Single {
            dispersion = MOA_TO_RAD(4);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_nagant_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
    class fow_w_leeenfield_no4mk1_redwood : fow_w_leeenfield_no4mk1 {
        displayName = "Lee Enfield No. 4 Mk I";
        descriptionShort = "Rifle, No. 4 Mk I";
    };
    class fow_w_leeenfield_no5mk1_junglecarbine : fow_w_leeenfield_no4mk1 {
        displayName = "Lee Enfield No. 5 Mk I";
        descriptionShort = "Rifle, No. 5 Mk I";
        recoil = "recoil_2PzD_rifle_short";
    };

    class fow_w_m1_carbine : fow_rifle_base {
        displayName = "M1 Carbine";
        descriptionShort = "Carbine, Caliber .30, M1";
        discreteDistance[] = {150,300};
        discreteDistanceInitIndex = 0;
        dispersion = MOA_TO_RAD(5);
        magazines[] = {"LIB_15Rnd_762x33","LIB_15Rnd_762x33_t","fow_15Rnd_762x33","LIB_30Rnd_762x33_2PzD","fow_30Rnd_762x33_2PzD"};
        recoil = "recoil_2PzD_rifle_light";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 50.735;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(5);
            reloadTime = 0.08; //700 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1Car_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Far : Single {
            dispersion = MOA_TO_RAD(5);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1Car_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Medium : Single {
            dispersion = MOA_TO_RAD(5);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1Car_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Short : Single {
            dispersion = MOA_TO_RAD(5);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1Car_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
    class fow_w_m2_carbine_2PzD : fow_w_m1_carbine {
        displayName = "M2 Carbine";
        descriptionShort = "Carbine, Cal .30, M2";
        fow_burstLength = 2;
        magazines[] = {"LIB_30Rnd_762x33_2PzD","fow_30Rnd_762x33_2PzD","LIB_15Rnd_762x33","LIB_15Rnd_762x33_t","fow_15Rnd_762x33"};
        modes[] = {"Single","Full","Far","Medium","Short"};
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 52.941;
        };
        class Single;
        class Full : Single {
            autoFire = 1;
            displayName = "Full";
            reloadTime = 0.08; //700 rpm
            textureType = "fullAuto";
        };
    };

    class fow_w_m1_garand : fow_rifle_base {
        displayName = "M1 Garand";
        descriptionShort = "Rifle, Caliber .30, M1";
        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
        discreteDistanceInitIndex = 2;
        dispersion = MOA_TO_RAD(4);
        magazines[] = {"LIB_8Rnd_762x63","fow_8Rnd_762x63"};
        recoil = "recoil_2PzD_rifle_semi";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 95.074;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Far : Single {
            dispersion = MOA_TO_RAD(4);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Medium : Single {
            dispersion = MOA_TO_RAD(4);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Short : Single {
            dispersion = MOA_TO_RAD(4);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
    class fow_w_m1_garand_l : fow_w_m1_garand {
        displayName = "M1 Garand";
        descriptionShort = "Rifle, Caliber .30, M1";
        magazines[] = {"LIB_8Rnd_762x63","fow_8Rnd_762x63"};
        recoil = "recoil_2PzD_rifle_semi";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 95.074;
        };
    };
    class fow_w_m1_garand_2 : fow_w_m1_garand {
        displayName = "M1 Garand";
        descriptionShort = "Rifle, Caliber .30, M1";
        magazines[] = {"LIB_8Rnd_762x63","fow_8Rnd_762x63"};
        recoil = "recoil_2PzD_rifle_semi";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 95.074;
        };
    };

    class fow_w_m1903A1 : fow_rifleBolt_base {
        displayName = "M1903A1 Springfield";
        descriptionShort = "Rifle, Caliber .30, M1903A1";
        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500};
        discreteDistanceInitIndex = 4;
        dispersion = MOA_TO_RAD(3);
        magazines[] = {"LIB_5Rnd_762x63","LIB_5Rnd_762x63_t","fow_5Rnd_762x63"};
        recoil = "recoil_2PzD_rifle_bolt";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 86.912;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(3);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1903A4_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Far;
        class Medium;
        class Short;
        /*
        class Far : Single {
            dispersion = MOA_TO_RAD(3);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1903A4_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Medium : Single {
            dispersion = MOA_TO_RAD(3);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1903A4_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Short : Single {
            dispersion = MOA_TO_RAD(3);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1903A4_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };

    class fow_w_m1903A1_sniper : fow_w_m1903A1 {
        displayName = "M1903A1 Springfield, Unertl Sight";
        descriptionShort = "Rifle, Caliber .30, M1903A1 with Unertl sight";
        dispersion = MOA_TO_RAD(2);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 96;
        };
        class Single : Single {
            dispersion = MOA_TO_RAD(2);
        };
        class Far : Far {
            dispersion = MOA_TO_RAD(2);
        };
        class Medium : Medium {
            dispersion = MOA_TO_RAD(2);
        };
        class Short : Short {
            dispersion = MOA_TO_RAD(2);
        };
    };

    class fow_w_stg44 : fow_rifle_base {
        displayName = "StG44";
        descriptionShort = "Sturmgewehr 44";
        discreteDistance[] = {100,200,300,400,500,600,700,800};
        discreteDistanceInitIndex = 1;
        dispersion = MOA_TO_RAD(7);
        //fow_burstLength = 3;
        magazines[] = {"LIB_30Rnd_792x33","fow_30Rnd_792x33"};
        modes[] = {"Single","Full","Far","Medium","Short"};
        recoil = "recoil_2PzD_rifle_light";
        /*class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 97.588;
        };
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(7);
            reloadTime = 0.104; //575 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_STG44_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(7);
            reloadTime = 0.104; //575 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_STG44_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class Far : Single {
            reloadTime = 0.104; //575 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_STG44_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Medium : Single {
            reloadTime = 0.104; //575 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_STG44_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Short : Single {
            reloadTime = 0.104; //575 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_STG44_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };

    class fow_w_type99 : fow_rifleBolt_base {
        displayName = "Type 99 Arisaka";
        descriptionShort = "Type 99 Arisaka";
        discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
        discreteDistanceInitIndex = 0;
        dispersion = MOA_TO_RAD(4);
        recoil = "recoil_2PzD_rifle_bolt";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 82.500;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Far;
        class Medium;
        class Short;/*
        class Far : Single {
            dispersion = MOA_TO_RAD(4);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Medium : Single {
            dispersion = MOA_TO_RAD(4);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Short : Single {
            dispersion = MOA_TO_RAD(4);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };
    class fow_w_type99_sniper : fow_w_type99 {
        displayName = "Type 99 Sniper";
        descriptionShort = "Type 99 Arisaka Sniper";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 105.500;
        };
        class Single : Single {
            dispersion = MOA_TO_RAD(3);
        };
        class Far : Far {
            dispersion = MOA_TO_RAD(3);
        };
        class Medium : Medium {
            dispersion = MOA_TO_RAD(3);
        };
        class Short : Short {
            dispersion = MOA_TO_RAD(3);
        };
    };
//End Rifles

//Submachine Guns
    class fow_w_m1a1_thompson : fow_rifle_base {
        displayName = "M1A1 Thompson";
        descriptionShort = "Submachine Gun, Caliber .45, M1A1";
        discreteDistance[] = {100,250};
        discreteDistanceInitIndex = 0;
        dispersion = MOA_TO_RAD(8);
        fow_burstLength = 4;
        magazines[] = {"LIB_30Rnd_45ACP","LIB_20Rnd_45ACP_M1_2PzD","fow_20Rnd_45acp_M1_2PzD","fow_20Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp_M1_2PzD","fow_30Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp","fow_30Rnd_45acp_T"};
        recoil = "recoil_2PzD_smg_heavy";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 105.882;
        };
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = 0.086; //700 rpm
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = 0.086; //700 rpm
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Far;/* : Single {
            reloadTime = 0.086; //700 rpm
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
        class Medium;/* : Single {
            reloadTime = 0.086; //700 rpm
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
        class Short;/* : Single {
            reloadTime = 0.086; //700 rpm
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };
    class fow_w_m1_thompson : fow_w_m1a1_thompson {
        displayName = "M1 Thompson";
        descriptionShort = "Submachine Gun, Caliber .45, M1";
        fow_burstLength = 4;
        magazines[] = {"LIB_30Rnd_45ACP","LIB_20Rnd_45ACP_M1_2PzD","fow_20Rnd_45acp_M1_2PzD","fow_20Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp_M1_2PzD","fow_30Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp","fow_30Rnd_45acp_T"};
        recoil = "recoil_2PzD_smg_heavy";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 108;
        };
        class Single : Single {
            reloadTime = 0.077; //780 rpm
            /*
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };*/
        };
        class Far : Far {
            reloadTime = 0.077; //780 rpm
            /*
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };*/
        };
        class Medium : Medium {
            reloadTime = 0.077; //780 rpm
            /*
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
            */
        };
        class Short : Short {
            reloadTime = 0.077; //780 rpm
            /*
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
            */
        };
        class Full : Full {
            reloadTime = 0.077; //780 rpm
            /*
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
            */
        };
    };

    class fow_w_m3 : fow_rifle_base {
        displayName = "M3 Grease Gun";
        descriptionShort = "Submachine Gun, Caliber .45, M3";
        dispersion = MOA_TO_RAD(8);
        fow_burstLength = 3;
        modes[] = {"Full","Single","Far","Medium","Short"};
        magazines[] = {"LIB_30Rnd_M3_GreaseGun_45ACP","fow_30Rnd_45acp_M3_2PzD","fow_30Rnd_45acp_T_M3_2PzD","LEN_30Rnd_45ACP_M3","fow_30Rnd_45acp","fow_30Rnd_45acp_T"};
        recoil = "recoil_2PzD_smg_medium";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 79.412;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = 0.133; //451 rpm
            showToPlayer = 0;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class Far : Single {
            reloadTime = 0.133; //451 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Medium : Single {
            reloadTime = 0.133; //451 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Short : Single {
            reloadTime = 0.133; //451 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = 0.133; //451 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_m55_reising : fow_rifle_base {
        displayName = "M55 Reising";
        descriptionShort = "Submachine Gun, Caliber .45, M55";
        discreteDistance[] = {50,100,200,300};
        discreteDistanceInitIndex = 1;
        dispersion = MOA_TO_RAD(8);
        fow_burstLength = 4;
        magazines[] = {"fow_20Rnd_45acp","fow_12Rnd_45acp_2PzD"};
        recoil = "recoil_2PzD_smg_medium";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 61.82;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = 0.075; //800 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class Far : Single {
            reloadTime = 0.075; //800 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Medium : Single {
            reloadTime = 0.075; //800 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Short : Single {
            reloadTime = 0.075; //800 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = 0.075; //800 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_mp40 : fow_rifle_base {
        displayName = "MP40";
        descriptionShort = "Maschinenpistole 40";
        discreteDistance[] = {100,200};
        discreteDistanceInitIndex = 0;
        dispersion = MOA_TO_RAD(8);
        fow_burstLength = 3;
        magazines[] = {"LIB_32Rnd_9x19","fow_32Rnd_9x19_mp40","LEN_32Rnd_9x19","fow_32Rnd_9x19_sten"};
        recoil = "recoil_2PzD_smg_medium";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 87.551;
        };
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = 0.114; //525 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class Far : Full {
            reloadTime = 0.114; //525 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Medium : Full {
            reloadTime = 0.114; //525 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Short : Full {
            reloadTime = 0.114; //525 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };

    class fow_w_sten_mk2 : fow_rifle_base {
        displayName = "Sten Mk II";
        descriptionShort = "Sten Mk II";
        dispersion = MOA_TO_RAD(8);
        fow_burstLength = 3;
        magazines[] = {"LEN_32Rnd_9x19","fow_32Rnd_9x19_sten","LIB_32Rnd_9x19","fow_32Rnd_9x19_mp40"};
        recoil = "recoil_2PzD_smg_medium";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 65.074;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = 0.109; //550 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_ppsh_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Far;/* : Single {
            reloadTime = 0.109; //550 rpm
            class StandardSound : BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4",1.35397,1,3};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",1.35397,1,3};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"Rogue9_Shot_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
            };
        };*/
        class Medium;/* : Single {
            reloadTime = 0.109; //550 rpm
            class StandardSound : BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4",1.35397,1,3};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",1.35397,1,3};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"Rogue9_Shot_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
            };
        };*/
        class Short;/* : Single {
            reloadTime = 0.109; //550 rpm
            class StandardSound : BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4",1.35397,1,3};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",1.35397,1,3};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"Rogue9_Shot_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
            };
        };*/
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = 0.109; //550 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_ppsh_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
    class fow_w_sten_mk5 : fow_w_sten_mk2 {
        displayName = "Sten Mk V";
        descriptionShort = "Sten Mk V";
        dispersion = MOA_TO_RAD(8);
        recoil = "recoil_2PzD_smg_medium";
        fow_burstLength = 3;
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 79.632;
        };
        class Single : Single {
            reloadTime = 0.1; //600 rpm
            /*
            class StandardSound : BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4",1.35397,1,3};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",1.35397,1,3};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"Rogue9_Shot_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
            };
            */
        };
        class Far : Far {
            reloadTime = 0.1; //600 rpm
            /*
            class StandardSound : BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4",1.35397,1,3};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",1.35397,1,3};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"Rogue9_Shot_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
            };
            */
        };
        class Medium : Medium {
            reloadTime = 0.1; //600 rpm
            /*
            class StandardSound : BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4",1.35397,1,3};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",1.35397,1,3};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"Rogue9_Shot_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
            };
            */
        };
        class Short : Short {
            reloadTime = 0.1; //600 rpm
            /*
            class StandardSound : BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4",1.35397,1,3};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",1.35397,1,3};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"Rogue9_Shot_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
            };
            */
        };
        class Full : Full {
            reloadTime = 0.1; //600 rpm
            /*
            class StandardSound : BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4",1.35397,1,3};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",1.35397,1,3};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"Rogue9_Shot_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
            };
            */
        };
    };

    class fow_w_type100 : fow_rifle_base {
        displayName = "Type 100 SMG";
        descriptionShort = "Type 100 Submachine Gun";
        dispersion = MOA_TO_RAD(8);
        fow_burstLength = 3;
        recoil = "recoil_2PzD_smg_light";
        /*class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 75.000;
        };
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = 0.15; //400 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class Far : Full {
            reloadTime = 0.15; //400 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Medium : Full {
            reloadTime = 0.15; //400 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Short : Full {
            reloadTime = 0.15; //400 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };
    class fow_w_type100_44_2PzD : fow_w_type100 {
        displayName = "Type 100/44 SMG";
        descriptionShort = "Type 100/44 Submachine Gun";
        dispersion = MOA_TO_RAD(8);
        fow_burstLength = 5;
        recoil = "recoil_2PzD_smg_light";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class Far : Full {
            reloadTime = 0.075; //800 rpm
        };
        class Medium : Full {
            reloadTime = 0.075; //800 rpm
        };
        class Short : Full {
            reloadTime = 0.075; //800 rpm
        };
        class Full : Full {
            reloadTime = 0.075; //800 rpm
        };
    };
//End Submachine Guns

//Machine Guns
    class fow_w_bren : fow_rifle_base {
        displayName = "Bren Gun";
        descriptionShort = "Bren Gun";
        dispersion = MOA_TO_RAD(3);
        fow_burstLength = 4;
        recoil = "recoil_2PzD_rifle_auto_1";
        ace_overheating_allowSwapBarrel = 1;
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 228.309;
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(3);
            reloadTime = 0.118; //510 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class close : FullAuto {
            reloadTime = 0.118; //510 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far_optic1 : close {
            reloadTime = 0.118; //510 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far_optic2 : far_optic1 {
            reloadTime = 0.118; //510 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class short : close {
            reloadTime = 0.118; //510 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class medium : close {
            reloadTime = 0.118; //510 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };

    class fow_w_m1918a2 : fow_rifle_base {
        displayName = "M1918A2 BAR";
        descriptionShort = "Rifle, Caliber .30, Automatic, Browning, M1918A2";
        dispersion = MOA_TO_RAD(3);
        fow_burstLength = 4;
        magazines[] = {"LIB_20Rnd_762x63","fow_20Rnd_762x63"};
        recoil = "recoil_2PzD_rifle_auto_1";
        ace_overheating_allowSwapBarrel = 0;
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 194.118;
        };
        class FullAuto_300 : Mode_FullAuto {
            dispersion = MOA_TO_RAD(3);
            reloadTime = 0.200; //300 rpm
            textureType = "fullAuto";
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_BAR_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class FullAuto_650 : Mode_FullAuto {
            dispersion = MOA_TO_RAD(3);
            reloadTime = 0.092; //650 rpm
            textureType = "fastAuto";
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_BAR_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class close : FullAuto_300 {
            reloadTime = 0.092; //650 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_BAR_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far_optic1 : close {
            reloadTime = 0.200; //300 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_BAR_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far_optic2 : far_optic1 {
            reloadTime = 0.200; //300 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_BAR_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class short : close {
            reloadTime = 0.092; //650 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_BAR_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class medium : close {
            reloadTime = 0.200; //300 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_BAR_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };
    class fow_w_m1918a2_bak : fow_w_m1918a2 {
        displayName = "M1918A2 BAR (BAK)";
        descriptionShort = "Rifle, Caliber .30, Automatic, Browning, M1918A2";
   };

    class fow_w_m1919 : fow_rifle_base {
        //discreteDistance[] = {100,200,400,600,800,1000,1200,1400,1600,1800};
        //discreteDistanceInitIndex = 1;
        dispersion = MOA_TO_RAD(4);
        fow_burstLength = 8;
        magazines[] = {"LIB_250Rnd_762x63_2PzD","LIB_200Rnd_762x63_2PzD","LIB_150Rnd_762x63_2PzD","LIB_100Rnd_762x63","LIB_50Rnd_762x63","fow_250Rnd_M1919","fow_200Rnd_M1919_2PzD","fow_150Rnd_M1919_2PzD","fow_100Rnd_M1919_2PzD","fow_50Rnd_762x63"};
        recoil = "recoil_2PzD_mmg_1";
        ace_overheating_allowSwapBarrel = 0;
        class WeaponSlotsInfo;
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(4);
            reloadTime = 0.14; //430 rpm
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1919_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class close : FullAuto {
            reloadTime = 0.14; //430 rpm
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1919_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far_optic1 : close {
            reloadTime = 0.14; //430 rpm
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1919_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far_optic2 : far_optic1 {
            reloadTime = 0.14; //430 rpm
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1919_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class short : close {
            reloadTime = 0.14; //430 rpm
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1919_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class medium : close {
            reloadTime = 0.14; //430 rpm
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1919_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };

    class fow_w_m1919a4 : fow_w_m1919 {
        displayName = "M1919A4";
        descriptionShort = "Gun, Machine, Caliber .30, Browning, M1919A4";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 310.178;
        };
    };
    class fow_w_m1919a6 : fow_w_m1919 {
        displayName = "M1919A6";
        descriptionShort = "Gun, Machine, Caliber .30, Browning, M1919A6";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 320.184;
        };
    };

    class fow_w_mg34 : fow_rifle_base {
        displayName = "MG34";
        descriptionShort = "Maschinengewehr 34";
        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
        discreteDistanceInitIndex = 2;
        dispersion = MOA_TO_RAD(4);
        fow_burstLength = 6;
        magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","LIB_100Rnd_792x57","LIB_100Rnd_792x57_SMK_2PzD","LIB_100Rnd_792x57_sS_2PzD","LIB_150Rnd_792x57_2PzD","LIB_150Rnd_792x57_SMK_2PzD","LIB_150Rnd_792x57_sS_2PzD","LIB_200Rnd_792x57_2PzD","LIB_200Rnd_792x57_SMK_2PzD","LIB_200Rnd_792x57_sS_2PzD","LIB_250Rnd_792x57_2PzD","LIB_250Rnd_792x57_SMK_2PzD","LIB_250Rnd_792x57_sS_2PzD","fow_50Rnd_792x57","fow_250Rnd_792x57"};
        recoil = "recoil_2PzD_mmg_1";
        ace_overheating_allowSwapBarrel = 1;
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 266.8;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            reloadTime = 0.07; //850 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG34_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(4);
            reloadTime = 0.07; //850 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG34_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class close : FullAuto {
            reloadTime = 0.07; //850 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG34_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class short : close {
            reloadTime = 0.07; //850 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG34_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class medium : close {
            reloadTime = 0.07; //850 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG34_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far_optic1 : close {
            reloadTime = 0.07; //850 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG34_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far_optic2 : far_optic1 {
            reloadTime = 0.07; //850 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG34_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };

    class fow_w_mg42 : fow_rifle_base {
        displayName = "MG42";
        descriptionShort = "Maschinengewehr 42";
        dispersion = MOA_TO_RAD(5);
        fow_burstLength = 8;
        magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","LIB_100Rnd_792x57","LIB_100Rnd_792x57_SMK_2PzD","LIB_100Rnd_792x57_sS_2PzD","LIB_150Rnd_792x57_2PzD","LIB_150Rnd_792x57_SMK_2PzD","LIB_150Rnd_792x57_sS_2PzD","LIB_200Rnd_792x57_2PzD","LIB_200Rnd_792x57_SMK_2PzD","LIB_200Rnd_792x57_sS_2PzD","LIB_250Rnd_792x57_2PzD","LIB_250Rnd_792x57_SMK_2PzD","LIB_250Rnd_792x57_sS_2PzD","fow_50Rnd_792x57","fow_250Rnd_792x57"};
        recoil = "recoil_2PzD_mmg_1";
        ace_overheating_allowSwapBarrel = 1;
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 255.221;
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(5);
            reloadTime = 0.05; //1200 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG42_delayed_Shot_SoundSet","IFA3_MMG1_delayed_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class close : FullAuto {
            reloadTime = 0.05; //1200 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG42_delayed_Shot_SoundSet","IFA3_MMG1_delayed_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far_optic1 : close {
            reloadTime = 0.05; //1200 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG42_delayed_Shot_SoundSet","IFA3_MMG1_delayed_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far_optic2 : far_optic1 {
            reloadTime = 0.05; //1200 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG42_delayed_Shot_SoundSet","IFA3_MMG1_delayed_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class short : close {
            reloadTime = 0.05; //1200 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG42_delayed_Shot_SoundSet","IFA3_MMG1_delayed_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class medium : close {
            reloadTime = 0.05; //1200 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG42_delayed_Shot_SoundSet","IFA3_MMG1_delayed_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };

    class fow_w_type99_lmg : fow_rifle_base {
        displayName = "Type 99 LMG";
        descriptionShort = "Type 99 Light Machine Gun";
        dispersion = MOA_TO_RAD(4);
        fow_burstLength = 5;
        recoil = "recoil_2PzD_rifle_auto_1";
        ace_overheating_allowSwapBarrel = 1;
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 230.074;
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(4);
            reloadTime = 0.086; //700 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class close : FullAuto {
            reloadTime = 0.086; //700 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far_optic1 : close {
            reloadTime = 0.086; //700 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far_optic2 : far_optic1 {
            reloadTime = 0.086; //700 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class short : close {
            reloadTime = 0.086; //700 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class medium : close {
            reloadTime = 0.086; //700 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };

    class fow_w_vickers_mounted : HMG_M2 {
        dispersion = MOA_TO_RAD(4);
        //fow_burstLength = 7;
        /*class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
        class manual : MGun {
            dispersion = MOA_TO_RAD(4);
            reloadTime = 0.126; //475 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class close : manual {
            reloadTime = 0.126; //475 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class short : close {
            reloadTime = 0.126; //475 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class medium : close {
            reloadTime = 0.126; //475 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far : close {
            reloadTime = 0.126; //475 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };

    class fow_w_type92 : MGun {
        dispersion = MOA_TO_RAD(4);
        //fow_burstLength = 7;
        /*class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
        class manual : MGun {
            dispersion = MOA_TO_RAD(4);
            reloadTime = 0.141; //425 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class close : manual {
            reloadTime = 0.141; //425 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class short : close {
            reloadTime = 0.141; //425 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class medium : close {
            reloadTime = 0.141; //425 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far : close {
            reloadTime = 0.141; //425 rpm
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };
//End Machine Guns

//Other Weapons, Tripod, Launchers
    class fow_w_ithaca37 : fow_shotgun_base {
        displayName = "Ithaca 37";
        descriptionShort = "Ithaca 37 Trench Shotgun, 12 Gauge";
        dispersion = MOA_TO_RAD(8);
        magazines[] = {"fow_5Rnd_12G_Pellets","fow_5Rnd_12G_Slug"};
        recoil = "recoil_2PzD_rifle_short";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 67;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_01",2.51189,1,2200};
                begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_02",2.51189,1,2200};
                closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
                closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundsetshot[] = {"M320_Shot_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet"};
            };
        };
    };

    class fow_w_M1912 : fow_shotgun_base {
        displayName = "Winchester Model 12";
        descriptionShort = "Winchester Model 12 Trench Shotgun, 12 Gauge";
        dispersion = MOA_TO_RAD(8);
        magazines[] = {"fow_6Rnd_12G_Pellets","LEN_6Rnd_12G_Pellets","fow_6Rnd_12G_Slug","LEN_6Rnd_12G_Slug","fow_5Rnd_12G_Pellets","fow_5Rnd_12G_Slug"};
        recoil = "recoil_2PzD_rifle_short";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 79.412;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_01",2.51189,1,2200};
                begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_02",2.51189,1,2200};
                closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
                closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundsetshot[] = {"M320_Shot_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet"};
            };
        };
    };

    class fow_w_m1a1_bazooka : Launcher_Base_F {
        displayName = "M1A1 Bazooka";
        descriptionShort = "Rocket Launcher, M1A1";
        magazines[] = {"LIB_1Rnd_60mm_M6","fow_1Rnd_m6a1"};
        recoil = "recoil_single_primary_3outof10";
        ace_overpressure_angle = 45;
        ace_overpressure_range = 10;
        ace_overpressure_damage = 0.4;
        ace_reloadlaunchers_enabled = 1;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 127.941;
        };
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"LIB_LAUNCHER_SHOT_SOUNDSET","LIB_ROCKETLAUNCHER_TAIL_SOUNDSET"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_piat : fow_rifle_base {
        displayName = "PIAT";
        descriptionShort = "Projector, Infantry, Anti Tank Mk I";
        ace_overpressure_angle = 0;
        ace_overpressure_range = 0;
        ace_overpressure_damage = 0;
        ace_reloadlaunchers_enabled = 1;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 320;
        };
    };

    class fow_w_pzfaust_base : Launcher_Base_F {
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\Launchers\Gear_PzFaust_30m_X_ca.paa";
        class WeaponSlotsInfo;
        class Single : Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_pzf_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_pzfaust_30_klein : fow_w_pzfaust_base {
        displayName = "Panzerfaust 30 klein";
        descriptionShort = "Panzerfaust 30 klein";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\Launchers\Gear_PzFaust_30m_X_ca.paa";
        ace_overpressure_angle = 45;
        ace_overpressure_range = 4;
        ace_overpressure_damage = 0.3;
        ace_reloadlaunchers_enabled = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 70.5;
        };
    };
    class fow_w_pzfaust_30_klein_used : fow_w_pzfaust_30_klein {
        displayName = "Used Panzerfaust";
        descriptionShort = "Used Panzerfaust";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\Launchers\Gear_PzFaust30_Used_X_ca.paa";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 41.8;
        };
    };

    class fow_w_pzfaust_30 : fow_w_pzfaust_base {
        displayName = "Panzerfaust 30";
        descriptionShort = "Panzerfaust 30";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\Launchers\Gear_PzFaust_30m_X_ca.paa";
        ace_overpressure_angle = 45;
        ace_overpressure_range = 5;
        ace_overpressure_damage = 0.3;
        ace_reloadlaunchers_enabled = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 115.147;
        };
    };
    class fow_w_pzfaust_30_used : fow_w_pzfaust_30 {
        displayName = "Used Panzerfaust";
        descriptionShort = "Used Panzerfaust";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\Launchers\Gear_PzFaust30_Used_X_ca.paa";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 51.147;
        };
    };

    class fow_w_pzfaust_60 : fow_w_pzfaust_30 {
        displayName = "Panzerfaust 60";
        descriptionShort = "Panzerfaust 60";
        ace_overpressure_angle = 45;
        ace_overpressure_range = 6;
        ace_overpressure_damage = 0.3;
        ace_reloadlaunchers_enabled = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 138;
        };
    };
    class fow_w_pzfaust_60_used : fow_w_pzfaust_30_used {
        displayName = "Used Panzerfaust";
        descriptionShort = "Used Panzerfaust";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 67.5;
        };
    };

    class fow_w_pzfaust_100 : fow_w_pzfaust_30 {
        displayName = "Panzerfaust 100";
        descriptionShort = "Panzerfaust 100";
        ace_overpressure_angle = 45;
        ace_overpressure_range = 7;
        ace_overpressure_damage = 0.3;
        ace_reloadlaunchers_enabled = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 154.3;
        };
    };
    class fow_w_pzfaust_100_used : fow_w_pzfaust_30_used {
        displayName = "Used Panzerfaust";
        descriptionShort = "Used Panzerfaust";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 79.3;
        };
    };

    /*class fow_w_m2_flamethrower : fow_rifle_base {
        displayName = "M2 Flamethrower (Do Not Use, Not Working, Shoots Bullets)";
        descriptionShort = "M2 Flamethrower";
    };*/
//End Other Weapons, Tripod, Launchers
