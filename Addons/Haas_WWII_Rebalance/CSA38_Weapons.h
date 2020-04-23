
    class csa38_Pistol : Pistol_Base_F {
        class EventHandlers;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };/*
            class UnderBarrelSlot : SlotInfo {
                compatibleItems[] = {};
            };*/
        };
    };

    class csa38_SMG : Rifle_Base_F {
        class EventHandlers;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
    };

    class CSA38_MGBASE : Rifle_Long_Base_F {
        class EventHandlers;
        class WeaponSlotsInfo : WeaponSlotsInfo {
        };
    };


    class CSA38_LMGA3_base : MGun {
        class EventHandlers;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            delete CowsSlot;
            delete MuzzleSlot;
            delete PointerSlot;
        };
    };

    class CSA38_HMGA3_base : MGun {
        class EventHandlers;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            delete CowsSlot;
            delete MuzzleSlot;
            delete PointerSlot;
        };
    };


    class csa38_MAS36Bayonet : ItemCore {
        LIB_AttachmentType = "LIB_fixedBayonet";
        LIB_bayonetLength = 30;
    };

    class csa38_vz24Bayonet : csa38_MAS36Bayonet {
        LIB_bayonetLength = 30;
    };

    class csa38_vz23Bayonet : csa38_MAS36Bayonet {
        LIB_bayonetLength = 40;
    };

    class csa38_vz33Bayonet : csa38_MAS36Bayonet {
        LIB_bayonetLength = 25;
    };

    class csa38_sg84Bayonet : csa38_MAS36Bayonet {
        LIB_bayonetLength = 25;
    };

    class csa38_m95Bayonet : csa38_MAS36Bayonet {
        LIB_bayonetLength = 30;
    };

    class CSA38_PGvz23_Empty : muzzle_snds_H {
        LIB_AttachmentType = "LIB_GW1";
        class LIB_RifleGrenade {
            ammo = "";
            magazine = "";
            firingCup = "CSA38_PGvz23_Empty";
            magazines[] = {"CSA38_PRG21"};
        };
    };

    class CSA38_PGvz23 : CSA38_PGvz23_Empty {
        class LIB_RifleGrenade {
            ammo = "CSA38_PRG21ammo";
            magazine = "CSA38_PRG21";
            firingCup = "CSA38_PGvz23_Empty";
        };
    };

    class csa38_czvz27tlumic : muzzle_snds_H {
        displayName = "vz.27 Suppressor";
    };


// Pistols
    class csa38_czvz22 : csa38_Pistol {
        displayname = "vz. 22";
        descriptionShort = "Pistole vz. 22";
        magazines[] = {"CSA38_9mm_8xBrowning"};
        magazineWell[] = {"CBA_380ACP_Vz22Pistol"};
        recoil = "recoil_2PzD_pistol_light";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 13.98;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class csa38_czvz24 : csa38_czvz22 {
        displayname = "vz. 24";
        descriptionShort = "Pistole vz. 24";
        magazines[] = {"CSA38_9mm_8xBrowning"};
        magazineWell[] = {"CBA_380ACP_Vz22Pistol"};
        recoil = "recoil_2PzD_pistol_light";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 14.77;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_czvz27\reload2.ogg", 3, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound: BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_czvz24\fire01.wav", 1.51189, 1, 1000};
                begin2[] = {"\CSA38II_sounds\w_czvz24\fire02.wav", 1.51189, 1, 1000};
                begin3[] = {"\CSA38II_sounds\w_czvz24\fire03.wav", 1.51189, 1, 1000};
                begin4[] = {"\CSA38II_sounds\w_czvz24\fire04.wav", 1.51189, 1, 1000};
                soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
                soundSetShot[] = {"CSA38_czvz22_Shot_SoundSet", "SMGPDW2000_Tail_SoundSet", "SMGPDW2000_InteriorTail_SoundSet"};
            };
        };
    };

    class csa38_czvz27 : csa38_czvz22 {
        displayname = "vz. 27";
        descriptionShort = "Pistole vz. 27, known as the Pistole 27(t) in Wehrmacht service";
        magazines[] = {"CSA38_7_65mm_8xBrowning","CSA38_7_65mm_8xBrowningSD"};
        magazineWell[] = {"CBA_32ACP_Vz27"};
        recoil = "recoil_2PzD_pistol_light";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 14.77;
            class CowsSlot {
                compatibleItems[] = {};
            };
            class MuzzleSlot {
                compatibleItems[] = {"csa38_czvz27tlumic"};
                displayName = "Suppressor slot";
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            };
            class PointerSlot {
                compatibleItems[] = {};
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_czvz27\reload2.ogg", 3, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound: BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_czvz24\fire01.wav", 1.51189, 1, 1000};
                begin2[] = {"\CSA38II_sounds\w_czvz24\fire02.wav", 1.51189, 1, 1000};
                begin3[] = {"\CSA38II_sounds\w_czvz24\fire03.wav", 1.51189, 1, 1000};
                begin4[] = {"\CSA38II_sounds\w_czvz24\fire04.wav", 1.51189, 1, 1000};
                soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
                soundSetShot[] = {"CSA38_czvz22_Shot_SoundSet", "SMGPDW2000_Tail_SoundSet", "SMGPDW2000_InteriorTail_SoundSet"};
            };
            class SilencedSound : BaseSoundModeType {
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

    class csa38_czvz27s : csa38_czvz27 {
        displayname = "vz. 27 (Suppressed)";
        descriptionShort = "Pistole vz. 27 with supressor, known as the Pistole 27(t) in Wehrmacht service";
        scope = 1;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 20.21;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {"csa38_czvz27tlumic"};
                displayName = "Suppressor slot";
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
            sounds[] = {"SilencedSound"};
        };
    };

    class csa38_czvz36 : csa38_czvz22 {
        displayname = "vz. 36";
        descriptionShort = "Pistole vz. 36";
        magazines[] = {"CSA38_6_35mm_8xBrowning"};
        magazineWell[] = {"CBA_32ACP_Vz27"};
        recoil = "recoil_2PzD_pistol_light";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 8.95;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class csa38_czvz38 : csa38_czvz22 {
        displayname = "vz. 38";
        descriptionShort = "Pistole vz. 38, known as the Pistole 39(t) in Wehrmacht service";
        magazines[] = {"csa38_9mm_9xBrowning"};
        magazineWell[] = {"CBA_380ACP_Vz38Pistol"};
        recoil = "recoil_2PzD_pistol_light";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 21.6053;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class csa38_p08 : csa38_czvz22 {
        displayName = "P08";
        descriptionShort = "Pistole 08";
        magazines[] = {"csa38_9mm_8xLuger"};
        magazineWell[] = {"CBA_9x19_P08"};
        recoil = "recoil_2PzD_pistol_medium";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 18.419;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class csa38_p082 : csa38_p08 {
        magazines[] = {"csa38_9_MM_32xMP18"};
        magazineWell[] = {"CBA_9x19_P08"};
    };

    class csa38_lp08 : csa38_p08 {
        displayName = "LP08";
        descriptionShort = "Lange Pistole 08";
        magazineWell[] = {"CBA_9x19_P08"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 22.419;
        };
    };

    class csa38_lp082 : csa38_lp08 {
        magazines[] = {"csa38_9_MM_32xMP18"};
        magazineWell[] = {"CBA_9x19_P08"};
    };

    class csa38_p38 : csa38_czvz22 {
        displayName = "P38";
        descriptionShort = "Pistole 38";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"csa38_9mm_8xPARA"};
        magazineWell[] = {"CBA_9x19_P38"};
        recoil = "recoil_2PzD_pistol_medium";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 17.647;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class csa38_m1896 : csa38_p38 {
        displayName = "M1930 C-96 Mauser";
        descriptionShort = "C-96 Mauser pistol, in 7.63x25mm";
        dispersion = MOA_TO_RAD(15);
        recoil = "recoil_2PzD_pistol_light";
        magazines[] = {"csa38_7_63mm_10xMauser"};
        magazineWell[] = {"CBA_763x25_C96"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 23.81;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
            reloadTime = RPM_TO_TIME(952); // 952 rpm
        };
    };

    class CSA38_WaltherPP : csa38_czvz22 {
        displayName = "Walther PP";
        descriptionShort = "Walther Polizeipistole in .32 ACP";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"csa38_7_65mm_8xBrow"};
        magazineWell[] = {"CBA_32ACP_PP"};
        recoil = "recoil_2PzD_pistol_medium";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 14.5505;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
        };
    };

    class CSA38_WaltherPPK : CSA38_WaltherPP {
        displayName = "Walther PPK";
        descriptionShort = "Walther Polizeipistole Kriminalmodell in .32 ACP";
        magazines[] = {"csa38_7_65mm_7xBrow"};
        magazineWell[] = {"CBA_32ACP_PPK","CBA_32ACP_PP"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 12.507;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                weaponSoundEffect = "CSA38_HandGun";
                closure1[] = {"\CSA38II_sounds\w_pp\reload2.ogg", 3, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound: BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_pp\fire01.ogg", 1.51189, 1, 1000};
                begin2[] = {"\CSA38II_sounds\w_pp\fire02.ogg", 1.51189, 1, 1000};
                begin3[] = {"\CSA38II_sounds\w_pp\fire03.ogg", 1.51189, 1, 1000};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
                soundSetShot[] = {"CSA38_WaltherPP_Shot_SoundSet", "SMGPDW2000_Tail_SoundSet", "SMGPDW2000_InteriorTail_SoundSet"};
            };
        };
    };
// End Pistols

// Rifles
    class CSA38_vz24 : Rifle_Base_F {
        displayname = "vz. 24";
        descriptionShort = "Puška vz. 24, known as the G24(t) in Wehrmacht service.";
        discreteDistanceInitIndex = 1;
        dispersion = MOA_TO_RAD(4);
        magazines[] = {"CSA38_7_92_5xMauser"};
        magazineWell[] = {"CBA_792x57_K98"};
        recoil = "recoil_2PzD_rifle_bolt";
        LIB_bayonetOffset[] = {-4.7,65,5};
        LIB_fixedBayonet = "CSA38_vz24_Bayonet";
        class SAFE : LIB_SAFE_BASE {};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 89.95;
            class CowsSlot {
                compatibleItems[] = {};
            };
            class MuzzleSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "Bayonet slot";
                compatibleItems[] = {"csa38_vz24Bayonet","csa38_vz23Bayonet","csa38_vz33Bayonet"};
            };
            class PointerSlot {
                compatibleItems[] = {};
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            sounds[] = {"StandardSound"};
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
        class GunParticles {
            class FirstEffect {
                effectName = "RifleAssaultCloud";
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
            };
            class SmokeEffect {
                positionName = "usti hlavne";
                directionName = "usti hlavne";
                effectName = "LIB_RifleSmokeTrail";
            };
        };
    };

    class CSA38_vz24_Bayonet : csa38_vz24 {
        baseweapon = "CSA38_vz24";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz24Bayonet";
            };
        };
    };

    class CSA38_vz24_Bayonet2 : CSA38_vz24_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz23Bayonet";
            };
        };
    };

    class CSA38_vz24_Bayonet3 : CSA38_vz24_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz33Bayonet";
            };
        };
    };

    class CSA38_vz24ii : CSA38_vz24 {
        displayname = "vz. 24 (Scope)";
        descriptionShort = "Puska vz. 24 with scope, known as the G24(t) in Wehrmacht service.";
        LIB_bayonetOffset[] = {-4.7,65,5};
        LIB_fixedBayonet = "CSA38_vz24ii_Bayonet";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 94.95;
            class CowsSlot {
                compatibleItems[] = {};
            };
            class MuzzleSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "Bayonet slot";
                compatibleItems[] = {"csa38_vz24Bayonet","csa38_vz23Bayonet","csa38_vz33Bayonet"};
            };
            class PointerSlot {
                compatibleItems[] = {};
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(3);
            sounds[] = {"StandardSound"};
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
    class CSA38_vz24ii_Bayonet : CSA38_vz24ii {
        baseweapon = "CSA38_vz24ii";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz24Bayonet";
            };
        };
    };
    class CSA38_vz24ii_Bayonet2 : CSA38_vz24ii_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz23Bayonet";
            };
        };
    };
    class CSA38_vz24ii3_Bayonet3 : CSA38_vz24ii_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz33Bayonet";
            };
        };
    };

    class CSA38_vz24iii : CSA38_vz24 {
        displayname = "vz. 24 (Trench Mag)";
        descriptionShort = "Puska vz. 24 with trench magazine, known as the G24(t) in Wehrmacht service.";
        magazines[] = {"CSA38_7_92_20xMauserCZ"};
        magazineWell[] = {"CBA_792x57_K98","CBA_792x57_K98_Trench"};
        LIB_bayonetOffset[] = {-4.7,65,5};
        LIB_fixedBayonet = "CSA38_vz24iii_Bayonet";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 90.95;
            class CowsSlot {
                compatibleItems[] = {};
            };
            class MuzzleSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "Bayonet slot";
                compatibleItems[] = {"csa38_vz24Bayonet","csa38_vz23Bayonet","csa38_vz33Bayonet"};
            };
            class PointerSlot {
                compatibleItems[] = {};
            };
        };
    };
    class CSA38_vz24iii_Bayonet : CSA38_vz24iii {
        baseweapon = "CSA38_vz24iii";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz24Bayonet";
            };
        };
    };
    class CSA38_vz24iii_Bayonet2 : CSA38_vz24iii_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz23Bayonet";
            };
        };
    };
    class CSA38_vz24iii3_Bayonet3 : CSA38_vz24iii_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz33Bayonet";
            };
        };
    };

    class CSA38_vz23 : CSA38_vz24 {
        displayname = "vz. 23";
        descriptionShort = "Puška vz. 23";
        LIB_bayonetOffset[] = {-4.7,65,5};
        LIB_fixedBayonet = "CSA38_vz23_Bayonet";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 87.74;
            class CowsSlot {
                compatibleItems[] = {};
            };
            class MuzzleSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "Bayonet slot";
                compatibleItems[] = {"csa38_vz24Bayonet","csa38_vz23Bayonet","csa38_vz33Bayonet"};
            };
            class PointerSlot {
                compatibleItems[] = {};
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            sounds[] = {"StandardSound"};
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
    class CSA38_vz23_Bayonet : csa38_vz23 {
        baseweapon = "CSA38_vz23";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz24Bayonet";
            };
        };
    };
    class CSA38_vz23_Bayonet2 : CSA38_vz23_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz23Bayonet";
            };
        };
    };
    class CSA38_vz23_Bayonet3 : CSA38_vz23_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz33Bayonet";
            };
        };
    };

    class CSA38_vz22 : CSA38_vz24 {
        displayname = "vz. 98/22";
        descriptionShort = "Puška vz. 98/22";
        LIB_bayonetOffset[] = {-4.7,65,5};
        LIB_fixedBayonet = "CSA38_vz22_Bayonet";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 91.51;
            class CowsSlot {
                compatibleItems[] = {};
            };
            class MuzzleSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "Bayonet slot";
                compatibleItems[] = {"csa38_vz24Bayonet","csa38_vz23Bayonet","csa38_vz33Bayonet"};
            };
            class PointerSlot {
                compatibleItems[] = {};
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            sounds[] = {"StandardSound"};
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
    class CSA38_vz22_Bayonet : CSA38_vz22 {
        baseweapon = "CSA38_vz22";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz24Bayonet";
            };
        };
    };
    class CSA38_vz22_Bayonet2 : CSA38_vz22_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz23Bayonet";
            };
        };
    };
    class CSA38_vz22_Bayonet3 : CSA38_vz22_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz33Bayonet";
            };
        };
    };

    class CSA38_vz33 : CSA38_vz24 {
        displayname = "vz. 16/33";
        descriptionShort = "Puška vz. 16/33";
        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
        discreteDistanceInitIndex = 1;
        recoil = "recoil_2PzD_rifle_short";
        LIB_bayonetOffset[] = {-4.7,65,5};
        LIB_fixedBayonet = "CSA38_vz33_Bayonet";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 73.897;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "Bayonet slot";
                compatibleItems[] = {"csa38_vz24Bayonet","csa38_vz23Bayonet","csa38_vz33Bayonet"};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            sounds[] = {"StandardSound"};
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
    class CSA38_vz33_Bayonet : csa38_vz33 {
        baseweapon = "CSA38_vz33";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz24Bayonet";
            };
        };
    };
    class CSA38_vz33_Bayonet2 : CSA38_vz33_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz23Bayonet";
            };
        };
    };
    class CSA38_vz33_Bayonet3 : CSA38_vz33_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz33Bayonet";
            };
        };
    };

    class CSA38_vz33_40 : CSA38_vz33 {
        displayName = "G33/40(t)";
        descriptionShort = "Puška vz. 16/33, known as the Gewehr 33/40(t) in Wehrmacht service";
        LIB_bayonetOffset[] = {-4.7,65,5};
        LIB_fixedBayonet = "CSA38_vz33_40_Bayonet";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 73.897;
            class MuzzleSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "Bayonet slot";
                compatibleItems[] = {"csa38_vz24Bayonet","csa38_vz23Bayonet","csa38_vz33Bayonet"};
            };
        };
    };
    class CSA38_vz33_40_Bayonet : csa38_vz33_40 {
        baseweapon = "CSA38_vz33_40";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz24Bayonet";
            };
        };
    };
    class CSA38_vz33_40_Bayonet2 : CSA38_vz33_40_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz23Bayonet";
            };
        };
    };
    class CSA38_vz33_40_Bayonet3 : CSA38_vz33_40_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz33Bayonet";
            };
        };
    };

    class CSA38_vz33_40ii : CSA38_vz33_40 {
        displayName = "G33/40(t) (Trench Mag)";
        descriptionShort = "Puška vz. 16/33 with trench magazine, known as the Gewehr 33/40(t) in Wehrmacht service";
        magazines[] = {"csa38_7_92_20xMauserKAR"};
        magazineWell[] = {"CBA_792x57_K98","CBA_792x57_K98_Trench"};
        LIB_bayonetOffset[] = {-4.7,65,5};
        LIB_fixedBayonet = "CSA38_vz33_40ii_Bayonet";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 74.897;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "Bayonet slot";
                compatibleItems[] = {"csa38_vz24Bayonet","csa38_vz23Bayonet","csa38_vz33Bayonet"};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            sounds[] = {"StandardSound"};
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
    class CSA38_vz33_40ii_Bayonet : csa38_vz33_40ii {
        baseweapon = "CSA38_vz33_40ii";
        author = "(csa38)PetrTlach";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz24Bayonet";
            };
        };
    };
    class CSA38_vz33_40ii_Bayonet2 : CSA38_vz33_40ii_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz23Bayonet";
            };
        };
    };
    class CSA38_vz33_40ii_Bayonet3 : CSA38_vz33_40ii_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_vz33Bayonet";
            };
        };
    };

    class csa38_gvz23 : CSA38_vz24 {
        displayname = "Mannlicher M1895 Carbine (Launcher)";
        descriptionShort = "Kavalerie Repetier-Carabiner M1895 with grenade launcher";
        magazines[] = {};
        magazineWell[] = {};
        recoil = "recoil_2PzD_rifle_at";
        class GVZ23Muzzle : GrenadeLauncher {
            dispersion = MOA_TO_RAD(10);
            recoil = "recoil_single_m320";
            recoilProne = "recoil_single_m320";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 77.206;
        };
    };

    class CSA38_kar98k : CSA38_vz24 {
        displayName = "Kar98k (pre-war)";
        descriptionShort = "Karabiner 98 kurz, pre-war model";
        discreteDistanceInitIndex = 2;
        magazines[] = {"csa38_7_92_5xMauserKAR"};
        recoil = "recoil_2PzD_rifle_bolt";
        LIB_bayonetOffset[] = {-4.7,65,5};
        LIB_fixedBayonet = "CSA38_kar98k_Bayonet";
        LIB_GW1 = "CSA38_kar98k_GW";
        muzzles[] = {"this","SAFE"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 87.7;
            class CowsSlot {
                compatibleItems[] = {};
            };
            class MuzzleSlot {
                displayName = "Bayonet slot";
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"LIB_ACC_K98_Bayo","LIB_ACC_GW_SB_Empty","LIB_ACC_GW_SB_SPRGR_30","LIB_ACC_GW_SB_PZGR_30","LIB_ACC_GW_SB_PZGR_40","csa38_SG84Bayonet"};
            };
            class PointerSlot {
                compatibleItems[] = {};
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(5);
            sounds[] = {"StandardSound"};
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
    class CSA38_kar98k_Bayonet : CSA38_kar98k {
        baseweapon = "CSA38_kar98k";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_K98_Bayo";
            };
        };
    };
    class CSA38_kar98k_Bayonet2 : CSA38_kar98k_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_SG84Bayonet";
            };
        };
    };
    class CSA38_kar98k_GW : CSA38_kar98k {
        baseWeapon = "CSA38_kar98k";
        magazines[] = {"CSA38_7_92_5xMauser","CSA38_7_92_5xMauser2","CSA38_7_92_5xMauserkAR","CSA38_7_92_5xMauserkAR2","CSA38_7_92_5xMauser3"};
        muzzles[] = {"this","LIB_K98_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"LIB_1Rnd_G_SPRGR_30","LIB_1Rnd_G_PZGR_30","LIB_1Rnd_G_PZGR_40"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_k98k_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_GW_SB_Empty";
            };
        };
    };

    class CSA38_kar98k2 : CSA38_kar98k {
        displayName = "Kar98k (pre-war) (Zf39)";
        descriptionShort = "Karabiner 98 kurz, pre-war model with Zf39 scope";
        LIB_fixedBayonet = "CSA38_kar98k2_Bayonet";
        LIB_GW1 = "CSA38_kar98k2_GW2";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 92.773;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(3.5);
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_m1895\reload2.ogg", 3, 1, 20};
                soundClosure[] = {"closure1", 1};
                weaponSoundEffect = "CSA38_Rifle";
            };
            class StandardSound: BaseSoundModeType {
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
    class CSA38_kar98k2_Bayonet : CSA38_kar98k2 {
        baseweapon = "CSA38_kar98k2";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_K98_Bayo";
            };
        };
    };
    class CSA38_kar98k2_Bayonet2 : CSA38_kar98k2_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_SG84Bayonet";
            };
        };
    };
    class CSA38_kar98k2_GW : CSA38_kar98k2 {
        baseWeapon = "CSA38_kar98k2";
        magazines[] = {"CSA38_7_92_5xMauser","CSA38_7_92_5xMauser2","CSA38_7_92_5xMauserkAR","CSA38_7_92_5xMauserkAR2","CSA38_7_92_5xMauser3"};
        muzzles[] = {"this","LIB_K98_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"LIB_1Rnd_G_SPRGR_30","LIB_1Rnd_G_PZGR_30","LIB_1Rnd_G_PZGR_40"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_k98k_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_GW_SB_Empty";
            };
        };
    };

    class CSA38_kar98k3 : CSA38_kar98k {
        displayName = "Kar98k (pre-war) (Trench Mag)";
        descriptionShort = "Karabiner 98 kurz, pre-war model with trench magazine";
        magazines[] = {"csa38_7_92_20xMauserKAR"};
        magazineWell[] = {"CBA_792x57_K98","CBA_792x57_K98_Trench"};
        LIB_fixedBayonet = "CSA38_kar98k3_Bayonet";
        LIB_GW1 = "CSA38_kar98k3_GW";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 88.7;
        };
    };
    class CSA38_kar98k3_Bayonet : CSA38_kar98k3 {
        baseweapon = "CSA38_kar98k3";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_K98_Bayo";
            };
        };
    };
    class CSA38_kar98k3_Bayonet2 : CSA38_kar98k3_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_SG84Bayonet";
            };
        };
    };
    class CSA38_kar98k3_GW : CSA38_kar98k3 {
        baseWeapon = "CSA38_kar98k3";
        magazines[] = {"CSA38_7_92_5xMauser","CSA38_7_92_5xMauser2","CSA38_7_92_5xMauserkAR","CSA38_7_92_5xMauserkAR2","CSA38_7_92_5xMauser3"};
        muzzles[] = {"this","LIB_K98_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"LIB_1Rnd_G_SPRGR_30","LIB_1Rnd_G_PZGR_30","LIB_1Rnd_G_PZGR_40"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_k98k_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_GW_SB_Empty";
            };
        };
    };

    class CSA38_kar98k4 : CSA38_kar98k2 {
        displayName = "Kar98k (pre-war) (Zf39, Trench Mag)";
        descriptionShort = "Karabiner 98 kurz, pre-war model with Zf39 scope and trench magazine";
        magazines[] = {"CSA38_7_92_20xMauserCZ"};
        magazineWell[] = {"CBA_792x57_K98","CBA_792x57_K98_Trench"};
        LIB_fixedBayonet = "CSA38_kar98k4_Bayonet";
        LIB_GW1 = "CSA38_kar98k4_GW";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 93.773;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(3.5);
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_m1895\reload2.ogg", 3, 1, 20};
                soundClosure[] = {"closure1", 1};
                weaponSoundEffect = "CSA38_Rifle";
            };
            class StandardSound: BaseSoundModeType {
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
    class CSA38_kar98k4_Bayonet : CSA38_kar98k4 {
        baseweapon = "CSA38_kar98k4";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_K98_Bayo";
            };
        };
    };
    class CSA38_kar98k4_Bayonet2 : CSA38_kar98k4_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_SG84Bayonet";
            };
        };
    };
    class CSA38_kar98k4_GW : CSA38_kar98k4 {
        baseWeapon = "CSA38_kar98k4";
        magazines[] = {"CSA38_7_92_5xMauser","CSA38_7_92_5xMauser2","CSA38_7_92_5xMauserkAR","CSA38_7_92_5xMauserkAR2","CSA38_7_92_5xMauser3"};
        muzzles[] = {"this","LIB_K98_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"LIB_1Rnd_G_SPRGR_30","LIB_1Rnd_G_PZGR_30","LIB_1Rnd_G_PZGR_40"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_k98k_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_GW_SB_Empty";
            };
        };
    };

    class CSA38_kar98k5 : CSA38_kar98k {
        displayName = "Kar98k";
        descriptionShort = "Karabiner 98 kurz, 1939 upgrade";
        LIB_fixedBayonet = "CSA38_kar98k5_Bayonet";
        LIB_GW1 = "CSA38_kar98k5_GW";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 87.993;
        };
    };
    class CSA38_kar98k5_Bayonet : CSA38_kar98k5 {
        baseweapon = "CSA38_kar98k5";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_K98_Bayo";
            };
        };
    };
    class CSA38_kar98k5_Bayonet2 : CSA38_kar98k5_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_SG84Bayonet";
            };
        };
    };
    class CSA38_kar98k5_GW : CSA38_kar98k5 {
        baseWeapon = "CSA38_kar98k5";
        magazines[] = {"CSA38_7_92_5xMauser","CSA38_7_92_5xMauser2","CSA38_7_92_5xMauserkAR","CSA38_7_92_5xMauserkAR2","CSA38_7_92_5xMauser3"};
        muzzles[] = {"this","LIB_K98_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"LIB_1Rnd_G_SPRGR_30","LIB_1Rnd_G_PZGR_30","LIB_1Rnd_G_PZGR_40"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_k98k_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_GW_SB_Empty";
            };
        };
    };

    class CSA38_kar98k6 : CSA38_kar98k {
        displayName = "Kar98k (Trench Mag)";
        descriptionShort = "Karabiner 98 kurz, 1939 upgrade with trench magazine";
        magazines[] = {"csa38_7_92_20xMauserKAR"};
        magazineWell[] = {"CBA_792x57_K98","CBA_792x57_K98_Trench"};
        LIB_fixedBayonet = "CSA38_kar98k6_Bayonet";
        LIB_GW1 = "CSA38_kar98k6_GW";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 88.993;
        };
    };
    class CSA38_kar98k6_Bayonet : CSA38_kar98k6 {
        baseweapon = "CSA38_kar98k6";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_K98_Bayo";
            };
        };
    };
    class CSA38_kar98k6_Bayonet2 : CSA38_kar98k6_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_SG84Bayonet";
            };
        };
    };
    class CSA38_kar98k6_GW : CSA38_kar98k6 {
        baseWeapon = "CSA38_kar98k6";
        magazines[] = {"CSA38_7_92_5xMauser","CSA38_7_92_5xMauser2","CSA38_7_92_5xMauserkAR","CSA38_7_92_5xMauserkAR2","CSA38_7_92_5xMauser3"};
        muzzles[] = {"this","LIB_K98_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"LIB_1Rnd_G_SPRGR_30","LIB_1Rnd_G_PZGR_30","LIB_1Rnd_G_PZGR_40"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_k98k_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_GW_SB_Empty";
            };
        };
    };

    class CSA38_g98 : CSA38_kar98k {
        displayName = "Kar98b";
        descriptionShort = "Karabiner 98b";
        magazines[] = {"csa38_7_92_5xMauserKAR"};
        magazineWell[] = {"CBA_792x57_K98"};
        LIB_fixedBayonet = "CSA38_g98_Bayonet";
        LIB_GW1 = "CSA38_g98_GW";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 88.24;
        };
    };
    class CSA38_g98_Bayonet : CSA38_g98 {
        baseweapon = "CSA38_g98";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_K98_Bayo";
            };
        };
    };
    class CSA38_g98_Bayonet2 : CSA38_g98_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_SG84Bayonet";
            };
        };
    };
    class CSA38_g98_GW : CSA38_g98 {
        baseWeapon = "CSA38_g98";
        magazines[] = {"CSA38_7_92_5xMauser","CSA38_7_92_5xMauser2","CSA38_7_92_5xMauserkAR","CSA38_7_92_5xMauserkAR2","CSA38_7_92_5xMauser3"};
        muzzles[] = {"this","LIB_K98_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"LIB_1Rnd_G_SPRGR_30","LIB_1Rnd_G_PZGR_30","LIB_1Rnd_G_PZGR_40"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_k98k_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_GW_SB_Empty";
            };
        };
    };

    class CSA38_g98i : CSA38_g98 {
        displayName = "Gewehr 98";
        descriptionShort = "Gewehr 98";
        LIB_fixedBayonet = "CSA38_g98i_Bayonet";
        LIB_GW1 = "CSA38_g98i_GW";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 90.22;
        };
    };
    class CSA38_g98i_Bayonet : CSA38_g98i {
        baseweapon = "CSA38_g98i";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_K98_Bayo";
            };
        };
    };
    class CSA38_g98i_Bayonet2 : CSA38_g98i_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_SG84Bayonet";
            };
        };
    };
    class CSA38_g98i_GW : CSA38_g98i {
        baseWeapon = "CSA38_g98i";
        magazines[] = {"CSA38_7_92_5xMauser","CSA38_7_92_5xMauser2","CSA38_7_92_5xMauserkAR","CSA38_7_92_5xMauserkAR2","CSA38_7_92_5xMauser3"};
        muzzles[] = {"this","LIB_K98_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"LIB_1Rnd_G_SPRGR_30","LIB_1Rnd_G_PZGR_30","LIB_1Rnd_G_PZGR_40"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_k98k_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_GW_SB_Empty";
            };
        };
    };

    class CSA38_g98ii : CSA38_g98 {
        displayName = "Gewehr 98 (Scope)";
        descriptionShort = "Gewehr 98 with scope";
        LIB_fixedBayonet = "CSA38_g98ii_Bayonet";
        LIB_GW1 = "CSA38_g98ii_GW";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 95.22;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(3.5);
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_m1895\reload2.ogg", 3, 1, 20};
                soundClosure[] = {"closure1", 1};
                weaponSoundEffect = "CSA38_Rifle";
            };
            class StandardSound: BaseSoundModeType {
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
    class CSA38_g98ii_Bayonet : CSA38_g98ii {
        baseweapon = "CSA38_g98ii";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_K98_Bayo";
            };
        };
    };
    class CSA38_g98ii_Bayonet2 : CSA38_g98ii_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_SG84Bayonet";
            };
        };
    };
    class CSA38_g98ii_GW : CSA38_g98ii {
        baseWeapon = "CSA38_g98ii";
        magazines[] = {"CSA38_7_92_5xMauser","CSA38_7_92_5xMauser2","CSA38_7_92_5xMauserkAR","CSA38_7_92_5xMauserkAR2","CSA38_7_92_5xMauser3"};
        muzzles[] = {"this","LIB_K98_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"LIB_1Rnd_G_SPRGR_30","LIB_1Rnd_G_PZGR_30","LIB_1Rnd_G_PZGR_40"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_k98k_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_GW_SB_Empty";
            };
        };
    };

    class CSA38_g98iii : CSA38_g98 {
        displayName = "Gewehr 98 (Trench Mag)";
        descriptionShort = "Gewehr 98 with trench magazine";
        magazines[] = {"csa38_7_92_20xMauserKAR"};
        magazineWell[] = {"CBA_792x57_K98","CBA_792x57_K98_Trench"};
        LIB_fixedBayonet = "CSA38_g98iii_Bayonet";
        LIB_GW1 = "CSA38_g98iii_GW";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 91.22;
        };
    };
    class CSA38_g98iii_Bayonet : CSA38_g98iii {
        baseweapon = "CSA38_g98iii";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_K98_Bayo";
            };
        };
    };
    class CSA38_g98iii_Bayonet2 : CSA38_g98iii_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_SG84Bayonet";
            };
        };
    };
    class CSA38_g98iii_GW : CSA38_g98iii {
        baseWeapon = "CSA38_g98iii";
        magazines[] = {"CSA38_7_92_5xMauser","CSA38_7_92_5xMauser2","CSA38_7_92_5xMauserkAR","CSA38_7_92_5xMauserkAR2","CSA38_7_92_5xMauser3"};
        muzzles[] = {"this","LIB_K98_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"LIB_1Rnd_G_SPRGR_30","LIB_1Rnd_G_PZGR_30","LIB_1Rnd_G_PZGR_40"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_k98k_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_GW_SB_Empty";
            };
        };
    };

    class CSA38_g98iv : CSA38_g98 {
        displayName = "Gewehr 98 (Scope, Trench Mag)";
        descriptionShort = "Gewehr 98 with scope and trench magazine";
        magazines[] = {"CSA38_7_92_20xMauserCZ"};
        magazineWell[] = {"CBA_792x57_K98","CBA_792x57_K98_Trench"};
        LIB_fixedBayonet = "CSA38_g98iv_Bayonet";
        LIB_GW1 = "CSA38_g98iv_GW";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 91.22;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(3.5);
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_m1895\reload2.ogg", 3, 1, 20};
                soundClosure[] = {"closure1", 1};
                weaponSoundEffect = "CSA38_Rifle";
            };
            class StandardSound: BaseSoundModeType {
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
    class CSA38_g98iv_Bayonet : CSA38_g98iv {
        baseweapon = "CSA38_g98iv";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_K98_Bayo";
            };
        };
    };
    class CSA38_g98iv_Bayonet2 : CSA38_g98iv_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_SG84Bayonet";
            };
        };
    };
    class CSA38_g98iv_GW : CSA38_g98iv {
        baseWeapon = "CSA38_g98iv";
        magazines[] = {"CSA38_7_92_5xMauser","CSA38_7_92_5xMauser2","CSA38_7_92_5xMauserkAR","CSA38_7_92_5xMauserkAR2","CSA38_7_92_5xMauser3"};
        muzzles[] = {"this","LIB_K98_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"LIB_1Rnd_G_SPRGR_30","LIB_1Rnd_G_PZGR_30","LIB_1Rnd_G_PZGR_40"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_k98k_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_GW_SB_Empty";
            };
        };
    };

    class CSA38_M1895 : CSA38_kar98k {
        displayname = "Mannlicher M1895";
        descriptionShort = "Infanterie Repetier-Gewehr M.95";
        magazines[] = {"CSA38_8_00_5xMannlicher"};
        magazineWell[] = {"CBA_8x50mmR_Mannlicher_M1895"};
        LIB_bayonetOffset[] = {-4.7,65,5};
        LIB_fixedBayonet = "CSA38_M1895_Bayonet";
        LIB_GW1 = "CSA38_M1895_GW";
        muzzles[] = {"this","SAFE"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 83.33;
            class CowsSlot {
                compatibleItems[] = {};
            };
            class MuzzleSlot {
                displayName = "Bayonet slot";
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"CSA38_PGvz23_Empty","csa38_m95Bayonet"};
            };
            class PointerSlot {
                compatibleItems[] = {};
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(5);
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_m1895\reload2.ogg", 3, 1, 20};
                soundClosure[] = {"closure1", 1};
                weaponSoundEffect = "CSA38_Rifle";
            };
            class StandardSound : BaseSoundModeType {
                soundSetShot[] = {"CSA38_M1895_Shot_SoundSet", "Mk200_Tail_SoundSet", "Mk200_InteriorTail_SoundSet"};
                begin1[] = {"\CSA38II_sounds\w_m1895\fire01.ogg", 1.77828, 1, 1200};
                begin2[] = {"\CSA38II_sounds\w_m1895\fire02.ogg", 1.77828, 1, 1200};
                begin3[] = {"\CSA38II_sounds\w_m1895\fire03.ogg", 1.77828, 1, 1200};
                begin4[] = {"\CSA38II_sounds\w_m1895\fire04.ogg", 1.77828, 1, 1200};
                begin5[] = {"\CSA38II_sounds\w_m1895\fire05.ogg", 1.77828, 1, 1200};
                soundBegin[] = {"begin1", 0.2, "begin2", 0.2, "begin3", 0.2, "begin4", 0.2, "begin5", 0.2};
            };
        };
    };
    class CSA38_M1895_Bayonet : CSA38_M1895 {
        baseweapon = "CSA38_M1895";
        author = "(csa38)PetrTlach";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_m95Bayonet";
            };
        };
    };
    class CSA38_M1895_GW : CSA38_M1895 {
        baseWeapon = "CSA38_M1895";
        muzzles[] = {"this","CSA38_M1895_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class CSA38_M1895_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"CSA38_PRG21"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_k98k_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "CSA38_PGvz23_Empty";
            };
        };
    };

    class CSA38_M1895k : CSA38_M1895 {
        displayname = "Mannlicher M1895 Carbine";
        descriptionShort = "Kavalerie Repetier-Carabiner M1895";
        recoil = "recoil_2PzD_rifle_short";
        LIB_fixedBayonet = "CSA38_M1895k_Bayonet";
        LIB_GW1 = "CSA38_M1895k_GW";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 68.34;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(5);
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_m1895\reload2.ogg", 3, 1, 20};
                soundClosure[] = {"closure1", 1};
                weaponSoundEffect = "CSA38_Rifle";
            };
            class StandardSound : BaseSoundModeType {
                soundSetShot[] = {"CSA38_M1895_Shot_SoundSet", "Mk200_Tail_SoundSet", "Mk200_InteriorTail_SoundSet"};
                begin1[] = {"\CSA38II_sounds\w_m1895\fire01.ogg", 1.77828, 1, 1200};
                begin2[] = {"\CSA38II_sounds\w_m1895\fire02.ogg", 1.77828, 1, 1200};
                begin3[] = {"\CSA38II_sounds\w_m1895\fire03.ogg", 1.77828, 1, 1200};
                begin4[] = {"\CSA38II_sounds\w_m1895\fire04.ogg", 1.77828, 1, 1200};
                begin5[] = {"\CSA38II_sounds\w_m1895\fire05.ogg", 1.77828, 1, 1200};
                soundBegin[] = {"begin1", 0.2, "begin2", 0.2, "begin3", 0.2, "begin4", 0.2, "begin5", 0.2};
            };
        };
    };
    class CSA38_M1895k_Bayonet : CSA38_M1895k {
        baseweapon = "CSA38_M1895k";
        author = "(csa38)PetrTlach";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_m95Bayonet";
            };
        };
    };
    class CSA38_M1895k_GW : CSA38_M1895k {
        baseWeapon = "CSA38_M1895k";
        muzzles[] = {"this","CSA38_M1895_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class CSA38_M1895_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"CSA38_PRG21"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_k98k_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "CSA38_PGvz23_Empty";
            };
        };
    };

    class CSA38_sm1924 : CSA38_kar98k {
        displayname = "FN Model 24";
        descriptionShort = "FN Model 24, known as the Gewehr 220 (b), Karabiner 420 (b), Gewehr 285 (b), Gewehr 291/1 (j), or Gewehr 291/2 (j) in Wehrmacht service depending on country of prodution.";
        recoil = "recoil_2PzD_rifle_short";
        LIB_fixedBayonet = "CSA38_sm1924_Bayonet";
        LIB_GW1 = "CSA38_sm1924_GW";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 68.34;
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            sounds[] = {"StandardSound"};
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
    class CSA38_sm1924_Bayonet : CSA38_sm1924 {
        baseweapon = "CSA38_sm1924";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_K98_Bayo";
            };
        };
    };
    class CSA38_sm1924_Bayonet2 : CSA38_sm1924_Bayonet {
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_SG84Bayonet";
            };
        };
    };
    class CSA38_sm1924_GW : CSA38_sm1924 {
        baseWeapon = "CSA38_sm1924";
        magazines[] = {"CSA38_7_92_5xMauser","CSA38_7_92_5xMauser2","CSA38_7_92_5xMauserkAR","CSA38_7_92_5xMauserkAR2","CSA38_7_92_5xMauser3"};
        muzzles[] = {"this","LIB_K98_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"LIB_1Rnd_G_SPRGR_30","LIB_1Rnd_G_PZGR_30","LIB_1Rnd_G_PZGR_40"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_k98k_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_GW_SB_Empty";
            };
        };
    };

    class CSA38_SMLE : CSA38_vz24 {
        displayName = "Lee Enfield No. 1 Mk III";
        descriptionShort = "Rifle, No. 1 Mk III";
        magazines[] = {"CSA38_7_7_10x56R"};
        magazineWell[] = {"CBA_303B_LeeEn"};
        recoil = "recoil_2PzD_rifle_bolt";
        LIB_bayonetOffset[] = {-4.7,65,5};
        LIB_CUP_1 = "CSA38_SMLE_CUP";
        LIB_fixedBayonet = "CSA38_SMLE_Bayonet";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 86.2;
            class CowsSlot {
                compatibleItems[] = {};
            };
            class MuzzleSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "Bayonet slot";
                compatibleItems[] = {"LIB_ACC_P1903_Bayo","LIB_ACC_GL_Enfield_CUP_Empty","LIB_ACC_GL_Enfield_CUP"};
            };
            class PointerSlot {
                compatibleItems[] = {};
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_enfield_Shot_SoundSet","WW2_rifle2_Tail_SoundSet","WW2_enfield_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
    class CSA38_SMLE_Bayonet : CSA38_SMLE {
        baseweapon = "CSA38_SMLE";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_P1903_Bayo";
            };
        };
    };
    class CSA38_SMLE_CUP : CSA38_SMLE {
        magazines[] = {"CSA38_7_7_10x56R","CSA38_7_7_10x56RAP"};
        muzzles[] = {"this","LIB_LeeEnfield_No4_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class LIB_LeeEnfield_No4_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"LIB_1Rnd_G_MillsBomb"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_LeeEnfield_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        baseWeapon = "CSA38_SMLE";
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_GL_Enfield_CUP_Empty";
            };
        };
    };

    class CSA38_SMLE2 : CSA38_SMLE {
        displayName = "Lee Enfield No. 1 Mk III*";
        descriptionShort = "Rifle, No. 1 Mk III*";
        LIB_bayonetOffset[] = {-4.7,65,5};
        LIB_CUP_1 = "CSA38_SMLE2_CUP";
        LIB_fixedBayonet = "CSA38_SMLE2_Bayonet";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 85.2;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "Bayonet slot";
                compatibleItems[] = {"LIB_ACC_P1903_Bayo","LIB_ACC_GL_Enfield_CUP_Empty","LIB_ACC_GL_Enfield_CUP"};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
    };
    class CSA38_SMLE2_Bayonet : CSA38_SMLE2 {
        baseweapon = "CSA38_SMLE2";
        muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_P1903_Bayo";
            };
        };
    };
    class CSA38_SMLE2_CUP : CSA38_SMLE2 {
        baseWeapon = "CSA38_SMLE2";
        magazines[] = {"CSA38_7_7_10x56R","CSA38_7_7_10x56RAP"};
        muzzles[] = {"this","LIB_LeeEnfield_No4_RG","SAFE"};
        weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
        class LIB_LeeEnfield_No4_RG : LIB_RifleGrenade_Muzzle {
            magazines[] = {"LIB_1Rnd_G_MillsBomb"};
            cameraDir = "eye_look";
            discreteDistance[] = {50,100,150,200,250};
            discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
            discreteDistanceInitIndex = 1;
            reloadAction = "LIB_GestureReload_LeeEnfield_GL";
            reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "LIB_ACC_GL_Enfield_CUP_Empty";
            };
        };
    };

    class CSA38_MAS36 : CSA38_vz24 {
        displayname = "MAS 36";
        descriptionShort = "MAS Modèle 36";
        magazines[] = {"CSA38_7_5_5xMAS"};
        magazineWell[] = {"CBA_75x54mmFrench_MAS36"};
        recoil = "recoil_2PzD_rifle_bolt";
        muzzles[] = {"this"};
        LIB_bayonetOffset[] = {-4.7,65,5};
        LIB_fixedBayonet = "CSA38_MAS36_Bayonet";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 82;
            class CowsSlot {
                compatibleItems[] = {};
            };
            class MuzzleSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "Bayonet slot";
                compatibleItems[] = {"csa38_mas36Bayonet"};
            };
            class PointerSlot {
                compatibleItems[] = {};
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
        };
    };
    class CSA38_MAS36_Bayonet : CSA38_MAS36 {
        baseweapon = "CSA38_MAS36";
        muzzles[] = {"this","LIB_Bayonet_Muzzle"};
        weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
            displayname = "Bayonet";
        };
        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "csa38_mas36Bayonet";
            };
        };
    };
// End Rifles

// SMGs
    class csa38_kpvz38P : csa38_SMG {
        displayname = "vz. 38";
        descriptionShort = "Kulometná Pistole vz. 38 with stick magazine";
        fow_burstLenght = 2;
        magazines[] = {"csa38_9_mm_36xBrowning"};
        magazineWell[] = {"CBA_380ACP_Vz38SMG"};
        recoil = "recoil_2PzD_smg_light";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 70.5479;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(550); // 550 rpm
        };
        class AI_Burst1 : Mode_Burst {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(550); // 550 rpm
        };
    };

    class csa38_kpvz38 : csa38_kpvz38P {
        displayname = "vz. 38 (Drum)";
        descriptionShort = "Kulometná Pistole vz. 38 with drum magazine";
        magazines[] = {"csa38_9_mm_96xBrowning"};
    };

    class csa38_mas38 : csa38_SMG {
        displayname = "MAS 38";
        descriptionShort = "MAS 38, known as the MP722(f) in Wehrmacht service";
        fow_burstLenght = 2;
        magazines[] = {"CSA38_mas38mag"};
        magazineWell[] = {"CBA_765x20mmLongue_MAS38"};
        recoil = "recoil_2PzD_smg_light";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo {
            mass = 63.31;
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(640); // 640 rpm
        };
        class AI_Burst1 : Mode_Burst {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(640); // 640 rpm
        };
    };

    class CSA38_Mp18 : csa38_SMG {
        displayname = "MP18";
        descriptionShort = "Maschinenpistole 18";
        discreteDistance[] = {100,200};
        discreteDistanceInitIndex = 0;
        fow_burstLenght = 2;
        magazines[] = {"csa38_9_MM_32xMP18"};
        magazineWell[] = {"CBA_9x19_P08"};
        recoil = "recoil_2PzD_smg_medium";
        reloadAction = "LIB_GestureReload_Sten";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 63.31;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(475); // 475 rpm
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_mp38\fire01.ogg",2.81838,1,1200};
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.5,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",1};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
            };
        };
        class AI_Burst1 : Mode_Burst {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(475); // 475 rpm
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_mp38\fire01.ogg",2.81838,1,1200};
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.5,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",1};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
            };
        };
    };

    class CSA38_Mp28 : CSA38_Mp18 {
        displayname = "MP28";
        descriptionShort = "Maschinenpistole 28/II";
        fow_burstLenght = 2;
        magazines[] = {"csa38_9_MM_32xMP28"};
        magazineWell[] = {"CBA_9x19_MP28"};
        reloadAction = "LIB_GestureReload_Sten";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 88.19;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(575); // 575 rpm
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_mp38\fire01.ogg",2.81838,1,1200};
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.5,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",1};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
            };
        };
        class FullAuto2 : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(575); // 575 rpm
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_mp38\fire01.ogg",2.81838,1,1200};
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.5,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",1};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
            };
        };
    };

    class CSA38_Mp35 : CSA38_Mp28 {
        displayname = "MP35";
        descriptionShort = "Maschinenpistole 35";
        fow_burstLenght = 2;
        magazines[] = {"csa38_9_MM_32xMP35"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 93.48;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(540); // 540 rpm
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 1, 1, 10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 1, 1, 10};
                soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
            };
            class StandardSound : BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_mp28\fire01.ogg", 2.81838, 1, 1200};
                begin2[] = {"\CSA38II_sounds\w_mp28\fire02.ogg", 2.81838, 1, 1200};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                soundBegin[] = {"begin1", 0.2, "begin2", 0.2};
            };
        };
        class FullAuto2 : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.501187, 1, 10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.501187, 1.1, 10};
                soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
            };
            class StandardSound : BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_mp28\fire01.ogg", 2.81838, 1, 1200};
                begin2[] = {"\CSA38II_sounds\w_mp28\fire02.ogg", 2.81838, 1, 1200};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                soundBegin[] = {"begin1", 0.2, "begin2", 0.2};
            };
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(540); // 540 rpm
        };
        class AI_Burst1 : Mode_Burst {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(540); // 540 rpm
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.501187, 1, 10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.501187, 1.1, 10};
                soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
            };
            class StandardSound : BaseSoundModeType {
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                begin1[] = {"\CSA38II_sounds\w_mp28\fire01.ogg", 2.81838, 1, 1200};
                begin2[] = {"\CSA38II_sounds\w_mp28\fire02.ogg", 2.81838, 1, 1200};
                soundBegin[] = {"begin1", 0.2, "begin2", 0.2};
            };
        };
    };

    class CSA38_Mp38 : csa38_SMG {
        displayName = "MP38 (Folded)";
        descriptionShort = "Maschinenpistole 38 with stock folded";
        discreteDistance[] = {100,200};
        fow_burstLenght = 2;
        magazines[] = {"csa38_9_MM_32xPARA"};
        magazineWell[] = {"CBA_9x19_MP40"};
        recoil = "recoil_2PzD_smg_heavy";
        handAnim[] = {"OFP2_ManSkeleton","\WW2\Core_a\IF_Animations_a\Weapons\MP40\WW2_MP40_handanim.rtm"};
        reloadAction = "LIB_GestureReload_MP40";
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 91.3;
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(500); // 500 rpm
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.5, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
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
        class AI_Burst1 : FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(500); // 500 rpm
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.5, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
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
    };

    class CSA38_Mp38ii : CSA38_Mp38 {
        displayName = "MP38";
        descriptionShort = "Maschinenpistole 38";
        recoil = "recoil_2PzD_smg_medium";
        class FullAuto;
        class AI_Burst1;
    };

    class CSA38_Mp40 : CSA38_Mp38 {
        displayName = "MP40 (Folded)";
        descriptionShort = "Maschinenpistole 40 with stock folded";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 87.551;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(525); // 525 rpm
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.5, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
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
        class AI_Burst1 : Mode_Burst {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(525); // 525 rpm
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.5, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
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
    };

    class CSA38_Mp40ii : CSA38_Mp38ii {
        displayName = "MP40";
        descriptionShort = "Maschinenpistole 40";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 87.551;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
        class FullAuto : FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(525); // 525 rpm
        };
        class AI_Burst1 : AI_Burst1 {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(525); // 525 rpm
        };
    };

    class CSA38_stenMkII : csa38_SMG {
        displayName = "Sten Mk II";
        descriptionShort = "Sten Mk II";
        dispersion = MOA_TO_RAD(8);
        fow_burstLenght = 2;
        magazines[] = {"csa38_32_9x19"};
        magazineWell[] = {"CBA_9x19_STEN"};
        recoil = "recoil_2PzD_smg_medium";
        reloadAction = "LIB_GestureReload_Sten";
        class Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo {
            mass = 65.074;
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(550); // 550 rpm
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",3,1,10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_Sten_Shot_SoundSet","WW2_rifle_small_Tail_SoundSet","WW2_Sten_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class FullAuto2 : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(550); // 550 rpm
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",3,1,10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_Sten_Shot_SoundSet","WW2_rifle_small_Tail_SoundSet","WW2_Sten_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class AI_Burst1 : Mode_Burst {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(550); // 550 rpm
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",3,1,10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_Sten_Shot_SoundSet","WW2_rifle_small_Tail_SoundSet","WW2_Sten_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class CSA38_stenMkIIs : CSA38_stenMkII {
        displayName = "Sten Mk IIS";
        descriptionShort = "Sten Mk IIS";
    };
// End SMGs

// Machine Guns
    class CSA38_BRENMKII : CSA38_MGBASE {
        displayName = "Bren Gun Mk II";
        descriptionShort = "BREN L.M.G. Mk II";
        dispersion = MOA_TO_RAD(3);
        fow_burstLenght = 3;
        magazines[] = {"CSA38_7_7_30x56R"};
        magazineWell[] = {"CBA_303B_BREN"};
        recoil = "recoil_2PzD_mmg_1";
        reloadAction = "LIB_GestureReload_Bren";
        ace_overheating_allowSwapBarrel = 1;
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo {
            mass = 228.309;
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(510); // 510 rpm
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",3,1,10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound : BaseSoundModeType {
                begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_01",1.58489,1,300};
                begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_02",1.58489,1,300};
                begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_03",1.58489,1,300};
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4",0.353973,1,3};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.353973,1,3};
                soundBegin[] = {"begin1",0.34,"begin2",0.34,"begin3",0.32};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(510); // 510 rpm
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",3,1,10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound : BaseSoundModeType {
                begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_01",1.58489,1,300};
                begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_02",1.58489,1,300};
                begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_03",1.58489,1,300};
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4",0.353973,1,3};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.353973,1,3};
                soundBegin[] = {"begin1",0.34,"begin2",0.34,"begin3",0.32};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
        };
        class AI_Burst1 : Mode_Burst {
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(550); // 550 rpm
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",3,1,10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound : BaseSoundModeType {
                begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_01",1.58489,1,300};
                begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_02",1.58489,1,300};
                begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_03",1.58489,1,300};
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4",0.353973,1,3};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.353973,1,3};
                soundBegin[] = {"begin1",0.34,"begin2",0.34,"begin3",0.32};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
        };
    };

    class CSA38_BRENMKII2 : CSA38_BRENMKII {
        displayName = "Bren Gun Mk II";
        descriptionShort = "BREN L.M.G. Mk II";
        magazines[] = {"CSA38_7_7_100x56R"};
        scope = 1;
    };

    class CSA38_BRENMKI : CSA38_BRENMKII {
        displayName = "Bren Gun Mk I";
        descriptionShort = "BREN L.M.G. Mk II";
        magazines[] = {"CSA38_7_7_30x56R"};
    };

    class CSA38_BRENMKI2 : CSA38_BRENMKII {
        displayName = "Bren Gun Mk I";
        descriptionShort = "BREN L.M.G. Mk II";
        magazines[] = {"CSA38_7_7_100x56R"};
        scope = 1;
    };

    class CSA38_TKVZ24 : CSA38_MGBASE {
        displayName = "vz. 7/24";
        descriptionShort = "Schwarzlose-Janeček vz. 7/24";
        dispersion = MOA_TO_RAD(4);
        fow_burstLenght = 3;
        magazines[] = {"CSA38_TKVZ24mag","CSA38_TKVZ24mag2"};
        magazineWell[] = {"CBA_792x57_vz7_24"};
        recoil = "recoil_2PzD_mmg_1";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 507.06;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(4);
            reloadTime = RPM_TO_TIME(400); // 400 rpm
        };
    };

    class CSA38_TKVZ37 : CSA38_MGBASE {
        displayName = "vz. 37";
        descriptionShort = "vz. 37, known as the MG 37(t) in Wehrmacht service";
        dispersion = MOA_TO_RAD(4);
        fow_burstLenght = 3;
        magazines[] = {"CSA38_ZB53mg5", "CSA38_ZB53mg6"};
        magazineWell[] = {"CBA_792x57_ZB53"};
        modes[] = {"FullAuto","FastAuto","close","short","medium","far"};
        recoil = "recoil_2PzD_mmg_1";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 418.88;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(4);
            reloadTime = RPM_TO_TIME(500); // 500  rpm
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 1, 1, 15};
                closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 1, 1, 15};
                soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
                weaponSoundEffect = "CSA38_Rifle";
            };
            class StandardSound : BaseSoundModeType {
                soundSetShot[] = {"CSA38_TKVZ37_Shot_SoundSet", "Mk200_Tail_SoundSet", "Mk200_InteriorTail_SoundSet"};
                begin1[] = {"\CSA38II_sounds\w_tkvz37\fire.ogg", 1.77828, 1, 1200};
                soundBegin[] = {"begin1", 1};
            };
        };
        class FastAuto : FullAuto {
            reloadTime = RPM_TO_TIME(750); // 750  rpm
            textureType = "fastAuto";
        };
    };

    class CSA38_zb26 : CSA38_MGBASE {
        displayName = "vz. 26";
        descriptionShort = "vz. 26, known as the MG 26(t) in Wehrmacht service";
        dispersion = MOA_TO_RAD(3);
        fow_burstLenght = 3;
        magazines[] = {"CSA38_7_92_20xMauser","CSA38_7_92_20xMauser2"};
        magazineWell[] = {"CBA_792x57_ZB26"};
        recoil = "recoil_2PzD_mmg_1";
        reloadAction = "LIB_GestureReload_Bren";
        ace_overheating_allowSwapBarrel = 1;
        class Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 212.75;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(500); // 510 rpm
            class BaseSoundModeType;
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
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(500); // 510 rpm
            class BaseSoundModeType;
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
    };

    class CSA38_MG30 : CSA38_MGBASE {
        displayName = "MG30";
        descriptionShort = "Maschinengewehr 30";
        dispersion = MOA_TO_RAD(3);
        fow_burstLenght = 3;
        magazines[] = {"CSA38_7_92_30xMauserMG","CSA38_7_92_30xMauserMGAP"};
        magazineWell[] = {"CBA_792x57_MG30"};
        recoil = "recoil_2PzD_mmg_1";
        class Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 219.8;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(750); // 750 rpm
        };
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(750); // 750 rpm
        };
    };

    class CSA38_31m : CSA38_MG30 {
        displayname = "$STR_Haas_Solothurn_31M";
        magazines[] = {"csa38_8x56_25xMannlicherMG"};
        magazineWell[] = {"CBA_8x56mmR_Solothurn_31M"};
    };

    class CSA38_MG34 : CSA38_MGBASE {
        displayName = "MG34";
        descriptionShort = "Maschinengewehr 34";
        discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
        discreteDistanceInitIndex = 1;
        dispersion = MOA_TO_RAD(4);
        fow_burstLenght = 5;
        magazines[] = {"CSA38_7_92_30xMauserMG","CSA38_7_92_30xMauserMGAP"};
        magazineWell[] = {"CBA_792x57_LINKS"};
        recoil = "recoil_2PzD_mmg_1";
        ace_overheating_allowSwapBarrel = 1;
        class Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 266.8;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
        class FullAuto : Mode_FullAuto {
            dispersion = MOA_TO_RAD(4);
            reloadTime = RPM_TO_TIME(850); // 850 rpm
            class BaseSoundModeType;
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
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            reloadTime = RPM_TO_TIME(850); // 850 rpm
            class BaseSoundModeType;
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
    };
// End Machine Guns

// Other Weapons, Tripods, Launchers
    class csa38_m36hlaven; /* : Launcher_Base_F {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 440.925;
        };
    };*/

    class csa38_brentripod2 : csa38_m36hlaven {
        displayName = "Bren Gun Tripod";
        descriptionShort = "Tripod for the Bren gun";
        class WeaponSlotsInfo {
            mass = 120.202;
        };
    };

    class CSA38_mg34tripod2 : csa38_m36hlaven {
        displayName = "Lafette Tripod";
        descriptionShort = "Lafette Tripod for the MG34 and MG42";
        class WeaponSlotsInfo {
            mass = 440.925;
        };
    };

    class CSA38_TKVZ24tripod : csa38_m36hlaven {
        displayName = "vz. 7/24 Tripod";
        descriptionShort = "Tripod for the Schwarzlose-Janeček vz. 7/24";
        class WeaponSlotsInfo {
            mass = 405.65;
        };
    };

    class CSA38_TKVZ37tripod : csa38_m36hlaven {
        displayName = "vz. 37 Tripod";
        descriptionShort = "Tripod for vz. 37";
        class WeaponSlotsInfo {
            mass = 385.81;
        };
    };
// End Other Weapons, Tripods, Launchers

// Vehicle Weapons
    class csa38_Brenmg : CSA38_LMGA3_base {
        fow_burstLenght = 6;
        class Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoFStatic;";
            };
        };
        class manual : CSA38_LMGA3_base {
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(510); // 510 rpm
        };
    };

    class csa38_MG34MG : CSA38_HMGA3_base {
        displayName = "MG34 Lafette";
        descriptionShort = "Maschinengewehr 34 on Lafette Tripod";
        discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
        discreteDistanceInitIndex = 1;
        dispersion = MOA_TO_RAD(4);
        fow_burstLenght = 6;
        magazines[] = {"CSA38_MG34mg","CSA38_MG34mg2","CSA38_MG34mg3","CSA38_MG34mg4","CSA38_MG34mgAP","CSA38_MG34mg2AP","CSA38_MG34mg3AP","CSA38_MG34mg4AP","lib_250Rnd_792x57","lib_250Rnd_792x57_sS","lib_250Rnd_792x57_SmK","LIB_50Rnd_792x57_Veh","LIB_100Rnd_792x57","LIB_50Rnd_792x57","lib_50Rnd_792x57_SmK","lib_50Rnd_792x57_sS"};
        magazineWell[] = {"CBA_792x57_LINKS"};
        recoil = "recoil_2PzD_mmg_1";
        class Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoFStatic;";
            };
        };
        class manual : CSA38_HMGA3_base {
            dispersion = MOA_TO_RAD(4);
            reloadTime = RPM_TO_TIME(850); // 850 rpm
            class BaseSoundModeType;
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
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(4);
            reloadTime = RPM_TO_TIME(850); // 850 rpm
            class BaseSoundModeType;
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
    };

    class CSA38_TKVZ24mg : CSA38_HMGA3_base {
        displayName = "vz. 7/24";
        descriptionShort = "Schwarzlose-Janeček vz. 7/24";
        dispersion = MOA_TO_RAD(4);
        fow_burstLenght = 3;
        magazines[] = {"CSA38_TKVZ24mag2","CSA38_TKVZ24mag"};
        magazineWell[] = {"CBA_792x57_vz7_24"};
        recoil = "recoil_2PzD_mmg_1";
        class Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoFStatic;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 507.06;
        };
        class manual : CSA38_HMGA3_base {
            dispersion = MOA_TO_RAD(4);
            reloadTime = RPM_TO_TIME(400); // 400 rpm
        };
    };

    class CSA38_ZB53mg : CSA38_HMGA3_base {
        displayName = "vz. 37";
        descriptionShort = "vz. 37, known as the MG 37(t) in Wehrmacht service";
        dispersion = MOA_TO_RAD(4);
        fow_burstLenght = 3;
        magazines[] = {"CSA38_ZB53mg2","CSA38_ZB53mg","CSA38_ZB53mg4","CSA38_ZB53mg3","CSA38_ZB53mg6","CSA38_ZB53mg5","CSA38_ZB53mg2G","CSA38_ZB53mgG","CSA38_ZB53mg4G","CSA38_ZB53mg3G","CSA38_ZB53mg6G","CSA38_ZB53mg5G"};
        magazineWell[] = {"CBA_792x57_ZB53"};
        modes[] = {"manual","manual2","close","short","medium","far"};
        recoil = "recoil_2PzD_mmg_1";
        class Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoFStatic;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 418.88;
        };
        class manual : CSA38_HMGA3_base {
            dispersion = MOA_TO_RAD(4);
            reloadTime = RPM_TO_TIME(750); // 750  rpm
            textureType = "fastAuto";
        };
        class manual2 : manual {
            reloadTime = RPM_TO_TIME(500) ; // 500  rpm
            textureType = "fullAuto";
        };
    };
// End Vehicle Weapons
