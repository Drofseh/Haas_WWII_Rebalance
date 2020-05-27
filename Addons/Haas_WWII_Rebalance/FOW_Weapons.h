
    class fow_rifle_base : Rifle_Base_F {
        class EventHandlers;
        class WeaponSlotsInfo;
    };

    class fow_shotgun_base : fow_rifle_base {
        class EventHandlers;
        class WeaponSlotsInfo;
    };

    class fow_rifleBolt_base : fow_rifle_base {
        class EventHandlers;
        class WeaponSlotsInfo;
    };

// Pistols
    class fow_w_m1911 : Pistol_Base_F {
        displayName = "M1911A1";
        descriptionShort = "Automatic Pistol, Caliber .45, M1911A1";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"fow_7Rnd_45acp"};
        magazineWell[] = {"CBA_45ACP_1911"};
        recoil = "recoil_2PzD_pistol_heavy";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 24.375;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class fow_w_p640p : Pistol_Base_F {
        displayName = "Browning Hi-Power";
        descriptionShort = "Browning Hi-Power, known as the Pistole 640(b) in Wehrmacht service";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"fow_13Rnd_9x19"};
        magazineWell[] = {"CBA_9x19_HiPower"};
        recoil = "recoil_2PzD_pistol_medium";
        scope = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 15.851;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class fow_w_p08 : Pistol_Base_F {
        displayName = "P08";
        descriptionShort = "Pistole 08";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"fow_8Rnd_9x19"};
        magazineWell[] = {"CBA_9x19_P08"};
        recoil = "recoil_2PzD_pistol_medium";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 18.419;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class fow_w_p35 : Pistol_Base_F {
        displayName = "wz. 35 Vis";
        descriptionShort = "Pistolet wz. 35 Vis, known as the Pistole 35(p) in Wehrmacht service or the Radom in English";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"fow_8Rnd_9x19_Vis_2PzD"};
        magazineWell[] = {"CBA_9x19_Vis"};
        recoil = "recoil_2PzD_pistol_medium";
        scope = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 20.94;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class fow_w_ppk : Pistol_Base_F {
        displayName = "Walther PPK";
        descriptionShort = "Walther Polizeipistole Kriminalmodell in .32 ACP";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"fow_7Rnd_765x17"};
        magazineWell[] = {"CBA_32ACP_PPK","CBA_32ACP_PP"};
        recoil = "recoil_2PzD_pistol_medium";
        scope = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 12.507;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class fow_w_type10 : Pistol_Base_F {
        displayName = "Type 10 Flare Pistol";
        descriptionShort = "Type 10 Flare Pistol";
        magazines[] = {"fow_1Rnd_type10"};
        magazineWell[] = {"CBA_35mm_Type10"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 25.806;
        };
    };

    class fow_w_type14 : Pistol_Base_F {
        displayName = "Type 14 Nambu";
        descriptionShort = "Type 14 Nambu";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"fow_8Rnd_8x22"};
        magazineWell[] = {"CBA_8x22_Type14"};
        recoil = "recoil_2PzD_pistol_light";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 19.8;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class fow_w_webley : Pistol_Base_F {
        displayName = "Enfield No 2 Mk I";
        descriptionShort = "Enfield No 2 Mk I in .38/200";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"fow_6Rnd_455"};
        magazineWell[] = {"CBA_38_200_Webley"};
        recoil = "recoil_2PzD_pistol_light";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 16.87;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class fow_w_welrod_mkii : Pistol_Base_F {
        displayName = "Welrod Mk II";
        descriptionShort = "Welrod Mk II in .32 ACP";
        dispersion = MOA_TO_RAD(20);
        magazines[] = {"fow_8Rnd_765x17"};
        magazineWell[] = {"CBA_32ACP_Welrod"};
        recoil = "recoil_2PzD_pistol_light";
        scope = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 22;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(20);
        };
    };
// End Pistols

// Rifles
    class fow_w_fg42 : fow_rifle_base {
        displayName = "FG42 Ausf.G";
        descriptionShort = "Fallschirmjagergewehr 42 Ausfuhrung G";
        dispersion = MOA_TO_RAD(4);
        // fow_burstLenght = 2;
        magazines[] = {"fow_20Rnd_792x57"};
        magazineWell[] = {"CBA_792x57_FG42"};
        recoil = "recoil_2PzD_rifle_FG42";
        class WeaponSlotsInfo {
            mass = 109.191;
        };
        class OpticsModes {
            class Ironsights {
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
                discreteDistanceInitIndex = 1;
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            recoil = "recoil_single_primary_3outof10";
            recoilProne = "recoil_single_primary_prone_3outof10";
            reloadTime = RPM_TO_TIME(750); // 750 rpm
            maxRange = 600;
            maxRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.7;
            minRange = 50;
            minRangeProbab = 0.3;
        };
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(5);
            recoil = "recoil_single_primary_3outof10";
            recoilProne = "recoil_single_primary_prone_3outof10";
            reloadTime = RPM_TO_TIME(750); // 750 rpm
            maxRange = 50;
            maxRangeProbab = 0.5;
            midRange = 25;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.9;
        };
    };

    class fow_w_g43 : fow_rifle_base {
        displayName = "G43";
        descriptionShort = "Gewehr 43";
        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
        discreteDistanceInitIndex = 2;
        dispersion = MOA_TO_RAD(6);
        magazineWell[] = {"CBA_792x57_G43","CBA_792x57_G41","CBA_792x57_wz38M","CBA_792x57_K98"};
        magazines[] = {"fow_10nd_792x57"};
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\Rifles\Gear_G43_X_ca.paa";
        recoil = "recoil_2PzD_rifle_semi";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 90.441;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(6);
        };
    };

    class fow_w_k98 : fow_rifleBolt_base {
        displayName = "Kar98k";
        descriptionShort = "Karabiner 98 kurz";
        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
        discreteDistanceInitIndex = 2;
        dispersion = MOA_TO_RAD(5);
        magazines[] = {"fow_5Rnd_792x57"};
        magazineWell[] = {"CBA_792x57_K98"};
        recoil = "recoil_2PzD_rifle_bolt";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 87.993;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(5);
        };
    };

    class fow_w_k98_scoped : fow_w_k98 {
        displayName = "Kar98k (Zf41)";
        descriptionShort = "Karabiner 98 kurz with Zf41 sight";
        dispersion = MOA_TO_RAD(3.5);
        magazines[] = {"fow_5Rnd_792x57"};
        magazineWell[] = {"CBA_792x57_K98"};
        recoil = "recoil_2PzD_rifle_bolt";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 89;
        };
        class OpticsModes {
            class Optic {
                opticsZoomInit = 0.166;
                opticsZoomMax = 0.166;
                opticsZoomMin = 0.166;
            };
            class IronSight : Optic {
                opticsZoomInit = 0.75;
                opticsZoomMax = 1.25;
                opticsZoomMin = 0.25;
            };
        };
        class Far : Single {
            dispersion = MOA_TO_RAD(3.5);
        };
        class Medium : Single {
            dispersion = MOA_TO_RAD(3.5);
        };
        class Short : Single {
            dispersion = MOA_TO_RAD(3.5);
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(3.5);
        };
    };

    class fow_w_leeenfield_no4mk1 : fow_rifleBolt_base {
        displayName = "Lee Enfield No. 4 Mk I";
        descriptionShort = "Rifle, No. 4 Mk I";
        discreteDistance[] = {300,600};
        discreteDistanceInitIndex = 0;
        dispersion = MOA_TO_RAD(4);
        magazines[] = {"fow_10Rnd_303"};
        magazineWell[] = {"CBA_303B_LeeEn"};
        recoil = "recoil_2PzD_rifle_bolt";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 88.037;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
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
        magazines[] = {"fow_15Rnd_762x33"};
        magazineWell[] = {"CBA_30Carbine_M1Carbine"};
        recoil = "recoil_2PzD_rifle_light";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 50.735;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(5);
            reloadTime = RPM_TO_TIME(750); // 700 rpm
        };
    };
    class fow_w_m2_carbine_2PzD : fow_w_m1_carbine {
        displayName = "M2 Carbine";
        descriptionShort = "Carbine, Cal .30, M2";
        fow_burstLenght = 1;
        magazines[] = {"fow_30Rnd_762x33_2PzD"};
        magazineWell[] = {"CBA_30Carbine_M1Carbine"};
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
            reloadTime = RPM_TO_TIME(750); // 700 rpm
            textureType = "fullAuto";
        };
    };

    class fow_w_m1_garand : fow_rifle_base {
        displayName = "M1 Garand";
        descriptionShort = "Rifle, Caliber .30, M1";
        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
        discreteDistanceInitIndex = 2;
        dispersion = MOA_TO_RAD(4);
        magazines[] = {"fow_8Rnd_762x63"};
        magazineWell[] = {"CBA_3006_Garand"};
        recoil = "recoil_2PzD_rifle_semi";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 95.074;
        };
        class fow_w_m7_gl : UGL_F {
            discreteDistance[] = {50, 75, 100, 125, 150, 200};
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
        };
    };
    class fow_w_m1_garand_l : fow_w_m1_garand {
        displayName = "M1 Garand";
        descriptionShort = "Rifle, Caliber .30, M1";
        magazines[] = {"fow_8Rnd_762x63"};
        magazineWell[] = {"CBA_3006_Garand"};
        recoil = "recoil_2PzD_rifle_semi";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 95.074;
        };
    };
    class fow_w_m1_garand_2 : fow_w_m1_garand {
        displayName = "M1 Garand";
        descriptionShort = "Rifle, Caliber .30, M1";
        magazines[] = {"fow_8Rnd_762x63"};
        magazineWell[] = {"CBA_3006_Garand"};
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
        magazines[] = {"fow_5Rnd_762x63"};
        magazineWell[] = {"CBA_3006_Spring"};
        recoil = "recoil_2PzD_rifle_bolt";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 86.912;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(3);
        };
        class Far : Single {};
        class Medium : Single {};
        class Short : Single {};
    };

    class fow_w_m1903A1_sniper : fow_w_m1903A1 {
        displayName = "M1903A1 Springfield, Unertl Sight";
        descriptionShort = "Rifle, Caliber .30, M1903A1 with Unertl sight";
        dispersion = MOA_TO_RAD(2);
        magazines[] = {"fow_5Rnd_762x63"};
        magazineWell[] = {"CBA_3006_Spring"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 96;
        };
        class Single : Single {
            dispersion = MOA_TO_RAD(2);
        };
        class Far : Far {};
        class Medium : Medium {};
        class Short : Short {};
    };

    class fow_w_stg44 : fow_rifle_base {
        displayName = "StG44";
        descriptionShort = "Sturmgewehr 44";
        discreteDistance[] = {100,200,300,400,500,600,700,800};
        discreteDistanceInitIndex = 1;
        dispersion = MOA_TO_RAD(7);
        // fow_burstLenght = 2;
        magazines[] = {"fow_30Rnd_792x33"};
        magazineWell[] = {"CBA_792x33_StG"};
        //modes[] = {"Single","Full","Burst_AI"};
        recoil = "recoil_2PzD_rifle_light";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 97.588;
        };
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(7);
            reloadTime = RPM_TO_TIME(575); // 575 rpm
        };
        class Burst_AI : Mode_Burst {
            dispersion = MOA_TO_RAD(7);
            reloadTime = RPM_TO_TIME(575); // 575 rpm
            showToPlayer = 0;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(7);
            reloadTime = RPM_TO_TIME(575); // 575 rpm
        };
    };

    class fow_w_type99 : fow_rifleBolt_base {
        displayName = "Type 99 Arisaka";
        descriptionShort = "Type 99 Arisaka";
        discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
        discreteDistanceInitIndex = 0;
        dispersion = MOA_TO_RAD(4);
        magazines[] = {"fow_5Rnd_77x58"};
        magazineWell[] = {"CBA_77x58_Arisaka"};
        recoil = "recoil_2PzD_rifle_bolt";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 82.500;
        };
        class fow_w_type2_gl : UGL_F {
            discreteDistance[] = {50, 75, 100, 125, 150, 200};
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
        };
    };
    class fow_w_type99_sniper : fow_w_type99 {
        displayName = "Type 99 Sniper";
        descriptionShort = "Type 99 Arisaka Sniper";
        discreteDistance[] = {300};
        discreteDistanceInitIndex = 0;
        magazines[] = {"fow_5Rnd_77x58"};
        magazineWell[] = {"CBA_77x58_Arisaka"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 105.500;
        };
        class Far : Single {
            dispersion = MOA_TO_RAD(3);
        };
        class Medium : Single {
            dispersion = MOA_TO_RAD(3);
        };
        class Short : Single {
            dispersion = MOA_TO_RAD(3);
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(3);
        };
    };
// End Rifles

// Submachine Guns
    class fow_w_m1a1_thompson : fow_rifle_base {
        displayName = "M1A1 Thompson";
        descriptionShort = "Submachine Gun, Caliber .45, M1A1";
        discreteDistance[] = {100,250};
        discreteDistanceInitIndex = 0;
        dispersion = MOA_TO_RAD(8);
        fow_burstLenght = 3;
        magazines[] = {"fow_30Rnd_45acp_M1_2PzD"};
        magazineWell[] = {"CBA_45ACP_Thompson_Stick"};
        recoil = "recoil_2PzD_smg_heavy";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 105.882;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(700); // 700 rpm
        };
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(700); // 700 rpm
        };
        class Burst_AI : Mode_Burst {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(700); // 700 rpm
            showToPlayer = 0;
        };
    };
    class fow_w_m1_thompson : fow_w_m1a1_thompson {
        displayName = "M1 Thompson";
        descriptionShort = "Submachine Gun, Caliber .45, M1";
        fow_burstLenght = 3;
        magazines[] = {"fow_30Rnd_45acp_M1_2PzD"};
        magazineWell[] = {"CBA_45ACP_Thompson_Stick"};
        recoil = "recoil_2PzD_smg_heavy";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 108;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(780); // 780 rpm
        };
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(780); // 780 rpm
        };
        class Burst_AI : Mode_Burst {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(780); // 780 rpm
            showToPlayer = 0;
        };
    };

    class fow_w_m3 : fow_rifle_base {
        displayName = "M3 Grease Gun";
        descriptionShort = "Submachine Gun, Caliber .45, M3";
        dispersion = MOA_TO_RAD(8);
        fow_burstLenght = 2;
        magazines[] = {"fow_30Rnd_45acp_M3_2PzD"};
        magazineWell[] = {"CBA_45ACP_Grease"};
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
            reloadTime = RPM_TO_TIME(451); // 451 rpm
            showToPlayer = 0;
        };
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(451); // 451 rpm
        };
        class Burst_AI : Mode_Burst {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(451); // 451 rpm
            showToPlayer = 0;
        };
    };

    class fow_w_m55_reising : fow_rifle_base {
        displayName = "M55 Reising";
        descriptionShort = "Submachine Gun, Caliber .45, M55";
        discreteDistance[] = {50,100,200,300};
        discreteDistanceInitIndex = 1;
        dispersion = MOA_TO_RAD(8);
        fow_burstLenght = 3;
        magazineWell[] = {"CBA_45ACP_Reising"};
        magazines[] = {"fow_20Rnd_45acp"};
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
            reloadTime = RPM_TO_TIME(800); // 800 rpm
        };
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(800); // 800 rpm
        };
        class Burst_AI : Mode_Burst {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(800); // 800 rpm
            showToPlayer = 0;
        };
    };

    class fow_w_mp40 : fow_rifle_base {
        displayName = "MP40";
        descriptionShort = "Maschinenpistole 40";
        discreteDistance[] = {100,200};
        discreteDistanceInitIndex = 0;
        dispersion = MOA_TO_RAD(8);
        fow_burstLenght = 2;
        magazines[] = {"fow_32Rnd_9x19_mp40"};
        magazineWell[] = {"CBA_9x19_MP40"};
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
            reloadTime = RPM_TO_TIME(525); // 525 rpm
        };
        class Burst_AI : Mode_Burst {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(525); // 525 rpm
            showToPlayer = 0;
        };
    };

    class fow_w_sten_mk2 : fow_rifle_base {
        displayName = "Sten Mk II";
        descriptionShort = "Sten Mk II";
        dispersion = MOA_TO_RAD(8);
        fow_burstLenght = 2;
        magazines[] = {"fow_32Rnd_9x19_sten"};
        magazineWell[] = {"CBA_9x19_STEN"};
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
            reloadTime = RPM_TO_TIME(550); // 550 rpm
        };
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(550); // 550 rpm
        };
        class Burst_AI : Mode_Burst {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(550); // 550 rpm
            showToPlayer = 0;
        };
    };
    class fow_w_sten_mk5 : fow_w_sten_mk2 {
        displayName = "Sten Mk V";
        descriptionShort = "Sten Mk V";
        dispersion = MOA_TO_RAD(8);
        magazines[] = {"fow_32Rnd_9x19_sten"};
        magazineWell[] = {"CBA_9x19_STEN"};
        recoil = "recoil_2PzD_smg_medium";
        fow_burstLenght = 2;
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 79.632;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(600); // 600 rpm
        };
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(600); // 600 rpm
        };
        class Burst_AI : Mode_Burst {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(600); // 600 rpm
            showToPlayer = 0;
        };
    };

    class fow_w_type100 : fow_rifle_base {
        displayName = "Type 100 SMG";
        descriptionShort = "Type 100 Submachine Gun";
        dispersion = MOA_TO_RAD(8);
        fow_burstLenght = 2;
        magazines[] = {"fow_32Rnd_8x22"};
        magazineWell[] = {"CBA_9x19_STEN"};
        recoil = "recoil_2PzD_smg_light";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 75.000;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(400); // 400 rpm
        };
        class Full : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(400); // 400 rpm
        };
        class Burst_AI : Mode_Burst {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(400); // 400 rpm
            showToPlayer = 0;
        };
    };
    class fow_w_type100_44_2PzD : fow_w_type100 {
        displayName = "Type 100/44 SMG";
        descriptionShort = "Type 100/44 Submachine Gun";
        dispersion = MOA_TO_RAD(8);
        fow_burstLenght = 4;
        magazines[] = {"fow_32Rnd_8x22"};
        magazineWell[] = {"CBA_9x19_STEN"};
        recoil = "recoil_2PzD_smg_light";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class Single : Single {
            reloadTime = RPM_TO_TIME(800); // 800 rpm
        };
        class Full : Full {
            reloadTime = RPM_TO_TIME(800); // 800 rpm
        };
        class Burst_AI : Burst_AI {
            reloadTime = RPM_TO_TIME(800); // 800 rpm
        };
    };
// End Submachine Guns

// Machine Guns
    class fow_w_bren : fow_rifle_base {
        displayName = "Bren Gun Mk II";
        descriptionShort = "BREN L.M.G. Mk II";
        dispersion = MOA_TO_RAD(3);
        fow_burstLenght = 3;
        magazines[] = {"fow_30Rnd_303_bren"};
        magazineWell[] = {"CBA_303B_BREN"};
        modes[] = {"FullAuto","Single","close","short","medium","far_optic1","far_optic2"};
        recoil = "recoil_2PzD_mmg_1";
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
            reloadTime = RPM_TO_TIME(510); // 510 rpm
        };
        class Single : FullAuto {
            autoFire = 0;
            maxRange = 10;
            maxRangeProbab = 0.01;
            midRange = 5;
            midRangeProbab = 0.01;
            minRange = 0;
            minRangeProbab = 0.01;
            textureType = "semi";
        };
    };

    class fow_w_m1918a2 : fow_rifle_base {
        displayName = "M1918A2 BAR";
        descriptionShort = "Rifle, Caliber .30, Automatic, Browning, M1918A2";
        dispersion = MOA_TO_RAD(3);
        fow_burstLenght = 3;
        magazines[] = {"fow_20Rnd_762x63"};
        magazineWell[] = {"CBA_3006_BAR"};
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
            reloadTime = RPM_TO_TIME(300); // 300 rpm
            textureType = "fullAuto";
        };
        class close : FullAuto_300 {
            reloadTime = RPM_TO_TIME(650); // 650 rpm
        };
        class FullAuto_650 : Mode_FullAuto {
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(650); // 650 rpm
            textureType = "fastAuto";
            maxRange = 100;
            maxRangeProbab = 0.25;
            midRange = 50;
            midRangeProbab = 0.5;
            minRange = 0;
            minRangeProbab = 0.9;
        };
    };
    class fow_w_m1918a2_bak : fow_w_m1918a2 {
        displayName = "M1918A2 BAR";
        descriptionShort = "Rifle, Caliber .30, Automatic, Browning, M1918A2";
   };

    class fow_w_m1919 : fow_rifle_base {
        // discreteDistance[] = {100,200,400,600,800,1000,1200,1400,1600,1800};
        // discreteDistanceInitIndex = 1;
        dispersion = MOA_TO_RAD(4);
        fow_burstLenght = 4;
        magazines[] = {"fow_250Rnd_M1919"};
        magazineWell[] = {"CBA_3006_Belt"};
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
            reloadTime = RPM_TO_TIME(430); // 430 rpm
        };
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
        discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
        discreteDistanceInitIndex = 1;
        dispersion = MOA_TO_RAD(4);
        fow_burstLenght = 5;
        magazines[] = {"fow_50Rnd_792x57"};
        magazineWell[] = {"CBA_792x57_LINKS"};
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
            reloadTime = RPM_TO_TIME(850); // 850 rpm
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(4);
            reloadTime = RPM_TO_TIME(850); // 850 rpm
        };
    };

    class fow_w_mg42 : fow_rifle_base {
        displayName = "MG42";
        descriptionShort = "Maschinengewehr 42";
        dispersion = MOA_TO_RAD(5);
        fow_burstLenght = 7;
        magazines[] = {"fow_50Rnd_792x57"};
        magazineWell[] = {"CBA_792x57_LINKS"};
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
            reloadTime = RPM_TO_TIME(1200); // 1200 rpm
        };
    };

    class fow_w_type99_lmg : fow_rifle_base {
        displayName = "Type 99 LMG";
        descriptionShort = "Type 99 Light Machine Gun";
        dispersion = MOA_TO_RAD(4);
        fow_burstLenght = 4;
        magazines[] = {"fow_30Rnd_77x58"};
        magazineWell[] = {"CBA_77x58_Type99"};
        recoil = "recoil_2PzD_mmg_1";
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
            reloadTime = RPM_TO_TIME(700); // 700 rpm
        };
    };
// End Machine Guns

// Other Weapons, Tripods, Launchers
    class fow_w_ithaca37 : fow_shotgun_base {
        displayName = "Ithaca 37";
        descriptionShort = "Ithaca 37 Trench Shotgun, 12 Gauge";
        discreteDistance[] = {50};
        discreteDistanceInitIndex = 0;
        dispersion = MOA_TO_RAD(8);
        magazines[] = {"fow_5Rnd_12G_Pellets"};
        magazineWell[] += {"CBA_12g_4rnds","CBA_12g_3rnds","CBA_12g_2rnds","CBA_12g_1rnd"};
        recoil = "recoil_2PzD_rifle_short";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 67;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
        };
    };

    class fow_w_M1912 : fow_shotgun_base {
        displayName = "Winchester Model 12";
        descriptionShort = "Winchester Model 12 Trench Shotgun, 12 Gauge";
        dispersion = MOA_TO_RAD(8);
        magazines[] = {"fow_6Rnd_12G_Pellets"};
        magazineWell[] += {"CBA_12g_5rnds","CBA_12g_4rnds","CBA_12g_3rnds","CBA_12g_2rnds","CBA_12g_1rnd"};
        recoil = "recoil_2PzD_rifle_short";
        class WeaponSlotsInfo {
            mass = 79.412;
        };
        class OpticsModes {
            class Ironsights {
                discreteDistance[] = {50};
                discreteDistanceInitIndex = 0;
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
        };
    };

    class fow_w_m1a1_bazooka : Launcher_Base_F {
        displayName = "M1A1 Bazooka";
        descriptionShort = "Rocket Launcher, M1A1";
        magazines[] = {"fow_1Rnd_m6a1"};
        magazineWell[] = {"CBA_Bazooka"};
        recoil = "recoil_single_primary_3outof10";
        ace_overpressure_angle = 45;
        ace_overpressure_range = 10;
        ace_overpressure_damage = 0.4;
        ace_reloadlaunchers_enabled = 1;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 127.941;
        };
        class Single : Mode_SemiAuto {
        };
    };

    class fow_w_piat : fow_rifle_base {
        displayName = "PIAT";
        descriptionShort = "Projector, Infantry, Anti Tank Mk I";
        magazines[] = {"fow_1Rnd_piat_HEAT"};
        magazineWell[] = {"CBA_PIAT"};
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
// End Other Weapons, Tripods, Launchers

// Vehicle Weapons
    class fow_w_besa_mg_mounted : HMG_M2 {
        displayName = "Besa MG";
        class slow : MGun {
            displayName = "Besa (Low)";
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(500); // 500 rpm
            textureType = "fullAuto";
        };
        class fast : slow {
            displayName = "Besa (High)";
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(800); // 800 rpm
            textureType = "fastAuto";
        };
        class close : slow {
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(800); // 800 rpm
        };
        class short : close {
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(800); // 800 rpm
        };
        class medium : close {
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(500); // 500 rpm
        };
        class far : close {
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(500); // 500 rpm
        };
    };

    class fow_w_bren_mounted : HMG_M2 {
        displayName = "Bren Gun Mk II";
        descriptionShort = "Bren L.M.G. Mk II";
        dispersion = MOA_TO_RAD(3);
        modes[] = {"manual","Single","close","short","medium","far"};
        class manual : MGun {
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(510); // 510 rpm
            textureType = "fullAuto";
        };
        class Single : manual {
            autoFire = 0;
            dispersion = MOA_TO_RAD(3);
            maxRange = 10;
            maxRangeProbab = 0.01;
            midRange = 5;
            midRangeProbab = 0.01;
            minRange = 0;
            minRangeProbab = 0.01;
            reloadTime = RPM_TO_TIME(510); // 510 rpm
            textureType = "semi";
        };
    };

    class fow_w_m1919a4_mounted : MGun {
        displayName = "M1919A4";
        discreteDistance[] = {100,200,400,600,800,1000,1200,1400,1600,1800};
        discreteDistanceInitIndex = 1;
        dispersion = MOA_TO_RAD(4);
        class manual : MGun {
            displayName = "M1919A4";
            dispersion = MOA_TO_RAD(4);
            reloadTime = RPM_TO_TIME(430); // 430 rpm
        };
        class close : manual {};
        class short : close {};
        class medium : close {};
        class far : close {};
    };
    class fow_w_m1919a4_static : fow_w_m1919a4_mounted {};

    class fow_w_mg34_mounted : HMG_M2 {
        displayName = "MG34";
        descriptionShort = "Maschinengewehr 34";
        discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
        discreteDistanceInitIndex = 1;
        dispersion = MOA_TO_RAD(4);
        class manual : MGun {
            displayName = "MG34";
            descriptionShort = "Maschinengewehr 34";
            dispersion = MOA_TO_RAD(4);
        };
        class close : manual {};
        class short : close {};
        class medium : close {};
        class far : close {};
    };

    class fow_w_mg42_mounted : HMG_M2 {
        displayName = "MG42";
        descriptionShort = "Maschinengewehr 42";
        discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
        discreteDistanceInitIndex = 1;
        dispersion = MOA_TO_RAD(4);
        class FullAuto : Mode_FullAuto {
            displayName = "MG42";
            descriptionShort = "Maschinengewehr 42";
            dispersion = MOA_TO_RAD(4);
        };
        class close : FullAuto {};
        class short : close {};
        class medium : close {};
        class far_optic1 : close {};
        class far_optic2 : far_optic1 {};
    };

    class fow_w_vickers_mounted : HMG_M2 {
        displayName = "Vicker Gun";
        descriptionShort = "Vicker Machine Gun";
        dispersion = MOA_TO_RAD(4);
        // fow_burstLenght = 6;
        class manual : MGun {
            dispersion = MOA_TO_RAD(4);
            reloadTime = RPM_TO_TIME(475); // 475 rpm
        };/*
        class close : manual {
            reloadTime = RPM_TO_TIME(475); // 475 rpm
        };
        class short : close {
            reloadTime = RPM_TO_TIME(475); // 475 rpm
        };
        class medium : close {
            reloadTime = RPM_TO_TIME(475); // 475 rpm
        };
        class far : close {
            reloadTime = RPM_TO_TIME(475); // 475 rpm
        };*/
    };

    class fow_w_type92 : MGun {
        dispersion = MOA_TO_RAD(4);
        // fow_burstLenght = 6;
        class manual : MGun {
            dispersion = MOA_TO_RAD(4);
            reloadTime = RPM_TO_TIME(425); // 425 rpm
        };/*
        class close : manual {
            reloadTime = RPM_TO_TIME(425); // 425 rpm
        };
        class short : close {
            reloadTime = RPM_TO_TIME(425); // 425 rpm
        };
        class medium : close {
            reloadTime = RPM_TO_TIME(425); // 425 rpm
        };
        class far : close {
            reloadTime = RPM_TO_TIME(425); // 425 rpm
        };*/
    };
// End Vehicle Weapons
