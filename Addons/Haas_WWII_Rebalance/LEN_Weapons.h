// Pistols
    class LEN_P35 : hgun_Rook40_F {
        displayName = "wz. 35 Vis";
        descriptionShort = "Pistolet wz. 35 Vis, known as the Pistole 35(p) in Wehrmacht service and also called the Radom in English";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"LEN_8Rnd_9x19_2PzD"};
        magazineWell[] = {"CBA_9x19_Vis"};
        recoil = "recoil_2PzD_pistol_medium";
        scope = 2;
        class WeaponSlotsInfo {
            mass = 20.94;
        };
        class Single : Single {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class LEN_P640b : hgun_P07_F {
        displayName = "Browning Hi-Power";
        descriptionShort = "Browning Hi-Power, known as the Pistole 640(b) in Wehrmacht service";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"LEN_13Rnd_9x19"};
        magazineWell[] = {"CBA_9x19_HiPower"};
        recoil = "recoil_2PzD_pistol_medium";
        scope = 2;
        class WeaponSlotsInfo {
            mass = 15.851;
        };
        class Single : Single {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class LEN_PPK : hgun_Rook40_F {
        displayName = "Walther PPK";
        descriptionShort = "Walther Polizeipistole Kriminalmodell in .32 ACP";
        magazines[] = {"LEN_7Rnd_765x17"};
        magazineWell[] = {"CBA_32ACP_PPK","CBA_32ACP_PP"};
        recoil = "recoil_2PzD_pistol_light";
        scope = 2;
        class WeaponSlotsInfo {
            mass = 12.507;
        };
        class Single : Single {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class LEN_Welrod : hgun_Rook40_F {
        displayName = "Welrod Mk II";
        descriptionShort = "Welrod Mk II in .32 ACP";
        magazines[] = {"LEN_8Rnd_765x17_2PzD"};
        magazineWell[] = {"CBA_32ACP_Welrod"};
        recoil = "recoil_2PzD_pistol_light";
        scope = 2;
        class WeaponSlotsInfo {
            mass = 24.044;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_sd_subs_delisle_Shot_SoundSet","WW2_sd_subsonic_Tail_SoundSet","WW2_sd_subs_delisle_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
// End Pistols

// Rifles
    class LEN_FG42 : LIB_MP44 {
        displayName = "FG42 Ausf.G";
        descriptionShort = "Fallschirmjagergewehr 42 Ausfuhrung G";
        // fow_burstLength = 2;
        magazines[] = {"len_20Rnd_792x57"};
        magazineWell[] = {"CBA_792x57_FG42"};
        modes[] = {"Single","FullAuto"};
        recoil = "recoil_2PzD_rifle_FG42";
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
        ZOOM_NAKED_EYE;
        /*class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
        class WeaponSlotsInfo {
            mass = 109.191;
        };
        class OpticsModes {
            class Ironsights {
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
                discreteDistanceInitIndex = 1;
                ZOOM_NAKED_EYE;
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            recoil = "recoil_single_primary_3outof10";
            recoilProne = "recoil_single_primary_prone_3outof10";
            reloadTime = RPM_TO_TIME(750); // 750 rpm
            maxRange = 600;
            maxRangeProbab = 0.05;
            midRange = 275;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.3;
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(5);
            recoil = "recoil_single_primary_3outof10";
            recoilProne = "recoil_single_primary_prone_3outof10";
            reloadTime = RPM_TO_TIME(750); // 750 rpm
            maxRange = 50;
            maxRangeProbab = 0.05;
            midRange = 25;
            midRangeProbab = 0.7;
            minRange = 1;
            minRangeProbab = 0.3;
        };
    };

    class LEN_MP44 : LIB_MP44 {
        displayName = "StG44";
        descriptionShort = "Sturmgewehr 44";
        discreteDistance[] = {100,200,300,400,500,600,700,800};
        discreteDistanceInitIndex = 1;
        // fow_burstLength = 2;
        magazines[] = {"LIB_30Rnd_792x33"};
        magazineWell[] = {"CBA_792x33_StG"};
        recoil = "recoil_2PzD_rifle_light";
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
            reloadTime = RPM_TO_TIME(575); // 575 rpm
        };
    };

    class LEN_SMLE_No4Mk1 : LIB_K98 {
        displayName = "Lee Enfield No. 4 Mk I";
        descriptionShort = "Rifle, No. 4 Mk I";
        magazines[] = {"LEN_10Rnd_303"};
        magazineWell[] = {"CBA_303B_LeeEn"};
        recoil = "recoil_2PzD_rifle_bolt";
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
        ZOOM_NAKED_EYE;
        class OpticsModes {
            class Ironsights {
                discreteDistance[] = {300,600};
                discreteDistanceInitIndex = 0;
                ZOOM_NAKED_EYE;
            };
        };
        class WeaponSlotsInfo {
            mass = 88.037;
        };
        class Single;
        class Short;
        class Medium;
        class Far;
    };
    class LEN_SMLE_No4Mk1T : LEN_SMLE_No4Mk1 {
        displayName = "Lee Enfield No. 4 Mk I (T)";
        descriptionShort = "Rifle, No. 4 Mk I (T) with No.32 Scope 3.5x power telescopic sight";
        dispersion = MOA_TO_RAD(2.5);
        magazines[] = {"LEN_10Rnd_303"};
        magazineWell[] = {"CBA_303B_LeeEn"};
        // modes[] = {"Single","Far","Medium","Short"};
        recoil = "recoil_2PzD_rifle_bolt";
        scope = 1;
        ZOOM_NAKED_EYE;
        class WeaponSlotsInfo {
            mass = 109.924;
        };
        class OpticsModes {
            class Scope {
                ZOOM_POWER(3.5, 3.5, 3.5);
            };
            class Ironsights : Scope {
                ZOOM_NAKED_EYE;
            };
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
// End Rifles

// Submachine Guns
    class LEN_M3a1 : LIB_M1A1_Thompson {
        displayName = "M3A1 Grease Gun";
        descriptionShort = "Submachine Gun, Caliber .45, M3A1";
        // dispersion = 8);
        fow_burstLength = 2;
        modes[] = {"Full","Far","Medium","Short"};
        magazines[] = {"LEN_30Rnd_45ACP_M3"};
        magazineWell[] = {"CBA_45ACP_Grease"};
        recoil = "recoil_2PzD_smg_medium";
        scope = 2;
        ZOOM_NAKED_EYE;
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 77.426;
        };
        class OpticsModes {
            class Ironsights {
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
                ZOOM_NAKED_EYE;
            };
        };
        class Full : Mode_FullAuto {
            // dispersion = 8);
            reloadTime = RPM_TO_TIME(451); // 451 rpm
        };/*
        class Far : Full {
            reloadTime = RPM_TO_TIME(451); // 451 rpm
        };
        class Medium : Full {
            reloadTime = RPM_TO_TIME(451); // 451 rpm
        };
        class Short : Medium {
            reloadTime = RPM_TO_TIME(451); // 451 rpm
        };*/
    };

    class LEN_PPS43 : LIB_PPSh41_m {
        displayName = "PPS-43";
        descriptionShort = "Pistolet-Pulemyot Sudayeva 43";
        fow_burstLength = 2;
        magazines[] = {"LEN_35Rnd_762x25_2PzD"};
        magazineWell[] = {"CBA_762x25_PPS"};
        recoil = "recoil_2PzD_smg_medium";
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
            reloadTime = RPM_TO_TIME(600); // 600 rpm
        };/*
        class Far : Far {
            reloadTime = RPM_TO_TIME(600); // 600 rpm
        };
        class Medium : Medium {
            reloadTime = RPM_TO_TIME(600); // 600 rpm
        };
        class Short : Short {
            reloadTime = RPM_TO_TIME(600); // 600 rpm
        };*/
    };

    class LEN_StenMk2 : LIB_MP40 {
        displayName = "Sten Mk II (Canadian)";
        descriptionShort = "Sten Mk II (Canadian)";
        dispersion = MOA_TO_RAD(8);
        fow_burstLength = 2;
        magazines[] = {"LEN_32Rnd_9x19"};
        magazineWell[] = {"CBA_9x19_STEN"};
        recoil = "recoil_2PzD_smg_medium";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
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
            reloadTime = RPM_TO_TIME(550); // 550 rpm
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(550); // 550 rpm
        };
    };
    class LEN_StenMk2S : LEN_StenMk2 {
        displayName = "Sten Mk IIS (Canadian)";
        descriptionShort = "Sten Mk IIS (Canadian)";
        dispersion = MOA_TO_RAD(8);
        fow_burstLength = 3;
        magazines[] = {"LEN_32Rnd_9x19"};
        magazineWell[] = {"CBA_9x19_STEN"};
        recoil = "recoil_2PzD_smg_light";
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
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(451); // 451 rpm
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(451); // 451 rpm
        };
    };
    class LEN_StenMk5 : LEN_StenMk2 {
        displayName = "Sten Mk V";
        descriptionShort = "Sten Mk V";
        dispersion = MOA_TO_RAD(8);
        fow_burstLength = 2;
        magazines[] = {"LEN_32Rnd_9x19"};
        magazineWell[] = {"CBA_9x19_STEN"};
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
        };/*
        class FullAuto : Mode_FullAuto {
            reloadTime = RPM_TO_TIME(550); // 550 rpm
        };
        class Single : Mode_SemiAuto {
            reloadTime = RPM_TO_TIME(550); // 550 rpm
        };*/
    };
// End Submachine Guns

// Machine Guns

// End Machine Guns

// Other Weapons
    class LEN_M12 : LIB_K98 {
        displayName = "Winchester Model 12";
        descriptionShort = "Winchester Model 12 Trench Shotgun, 12 Gauge";
        magazines[] = {"LEN_6Rnd_12G_Pellets"};
        magazineWell[] = {"CBA_12g_5rnds","CBA_12g_4rnds","CBA_12g_3rnds","CBA_12g_2rnds","CBA_12g_1rnd"};
        recoil = "recoil_2PzD_rifle_short";
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
        ZOOM_NAKED_EYE;
        class WeaponSlotsInfo {
            mass = 79.412;
        };
        class OpticsModes {
            class Ironsights {
                discreteDistance[] = {50};
                discreteDistanceInitIndex = 0;
                ZOOM_NAKED_EYE;
            };
        };
    };
// End Other Weapons

// Accessories
    class LEN_optic_SVT_PU : ItemCore {
        scope = 1;
        descriptionShort = "PU 3.5x power telescopic sight on a mount for the SVT-40";
        class ItemInfo : InventoryOpticsItem_Base_F {
            modelOptics = "\WW2\Assets_m\Weapons\Optics_m\WW2_Optika_pu.p3d";
            class OpticsModes {
                class Scope {
                    OpticsID = 1;
                    UseModelOptics = 1;
                    MemoryPointCamera = "Eye";
                    opticsPPEffects[] = {"LIB_Sniper_OpticsCHAbera", "LIB_Sniper_OpticsBlur"};
                    OpticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    ZOOM_POWER(3.5, 3.5, 3.5);
                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                    discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
                    discreteDistanceInitIndex = 2;
                    VisionMode[] = {"Normal"};
                    CameraDir = "";
                };
                class Ironsights {
                    OpticsID = 2;
                    UseModelOptics = 0;
                    MemoryPointCamera = "Eye";
                    OpticsPPEffects[] = {};
                    OpticsFlare = 0;
                    OpticsDisablePeripherialVision = 0;
                    ZOOM_NAKED_EYE;
                    DistanceZoomMin = 100;
                    DistanceZoomMax = 100;
                    VisionMode[] = {};
                    CameraDir = "";
                };
            };
        };
    };
// End Accessories
