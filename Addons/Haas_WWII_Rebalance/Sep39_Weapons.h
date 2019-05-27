
    class w39_Pistol : Pistol_Base_F {
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

    class W39_Rifle_Long_Base_F : Rifle_Base_F {
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

    class w39_SMG : Rifle_Base_F {
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

    class W39_MGBASE : Rifle_Base_F {
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

    class w39_LMGA3_base : MGun {
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

    class w39_HMGA3_base : MGun {
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

// Pistols
    class w39_vis : w39_Pistol {
        displayName = "wz. 35 Vis";
        descriptionShort = "Pistolet wz. 35 Vis, known as the Pistole 35(p) in Wehrmacht service and also called the Radom in English";
        dispersion = MOA_TO_RAD(15);
        magazines[] = {"w39_9mm_8xPARAVIS"};
        magazineWell[] = {"CBA_9x19_Vis"};
        recoil = "recoil_2PzD_pistol_medium";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 20.94;
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
// End Pistols

// Rifles
    class w39_wz29 : Rifle_Base_F {
        displayName = "wz. 29";
        descriptionShort = "Karabinek wz. 29";
        dispersion = MOA_TO_RAD(3);
        magazines[] = {"w39_7_92_5xMauserS","w39_7_92_5xMauserP"};
        magazineWell[] = {"CBA_792x57_K98"};
        recoil = "recoil_2PzD_rifle_bolt";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 85.98;
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
        class Single : Mode_SemiAuto {
            aiDispersionCoefX = 2;
            aiDispersionCoefY = 3;
            dispersion = MOA_TO_RAD(3);
            class BaseSoundModeType;
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

    class w39_wz91_98_23 : LIB_M9130 {
        displayName = "wz. 91/98/23";
        descriptionShort = "Karabinek wz. 91/98/23";
        discreteDistance[] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
        discreteDistanceInitIndex = 0;
        magazines[] = {"w39_7_92_5xMauserS","w39_7_92_5xMauserP"};
        magazineWell[] = {"CBA_792x57_K98"};
        recoil = "recoil_2PzD_rifle_bolt";
        LIB_fixedBayonet = "w39_wz91_98_23_Bayonet";
        delete LIB_DYAKONOV_1;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 81.571;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {"LIB_ACC_M1891_Bayo"};
                iconPosition[] = {0.2,0.8};
                iconScale = 0.3;
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
    };

    class w39_wz91_98_23_Bayonet : LIB_M9130_Bayonet {
        displayName = "wz. 91/98/23";
        descriptionShort = "Karabinek wz. 91/98/23";
        discreteDistance[] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
        discreteDistanceInitIndex = 0;
        magazines[] = {"w39_7_92_5xMauserS","w39_7_92_5xMauserP"};
        magazineWell[] = {"CBA_792x57_K98"};
        recoil = "recoil_2PzD_rifle_bolt";
        baseweapon = "w39_wz91_98_23";
        LIB_fixedBayonet = "w39_wz91_98_23_Bayonet";
        delete LIB_DYAKONOV_1;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 81.571;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {"LIB_ACC_M1891_Bayo"};
                iconPosition[] = {0.2,0.8};
                iconScale = 0.3;
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
    };

    class w39_urwz35 : w39_wz29 {
        displayName = "wz. 35";
        descriptionShort = "Karabin przeciwpancerny wz. 35, known as the PzB 35(p), PzB 770(p), or PzB 770(i) in Wehrmacht service";
        discreteDistance[] = {300};
        discreteDistanceInitIndex = 0;
        dispersion = MOA_TO_RAD(2);
        magazines[] = {"w39_7_92_4x107DS"};
        magazineWell[] = {"CBA_792x107mmDS_wz35"};
        recoil = "recoil_2PzD_rifle_bolt";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 214.792;
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
        class Single : Mode_SemiAuto {
            aiDispersionCoefX = 2;
            aiDispersionCoefY = 3;
            dispersion = MOA_TO_RAD(2);
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"GM6Lynx_Shot_SoundSet","GM6Lynx_Tail_SoundSet","GM6Lynx_InteriorTail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class w39_wz38m : W39_Rifle_Long_Base_F {
        displayName = "wz. 38M";
        descriptionShort = "Karabin samopowtarzalny wz. 38M";
        dispersion = MOA_TO_RAD(4);
        magazines[] = {"w39_7_92_10xMauserS","w39_7_92_10xMauserP"};
        magazineWell[] = {"CBA_792x57_G41","CBA_792x57_wz38M","CBA_792x57_K98"};
        recoil = "recoil_2PzD_rifle_semi";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 99.21;
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
        class Single : Mode_SemiAuto {
            aiDispersionCoefX = 2;
            aiDispersionCoefY = 3;
            dispersion = MOA_TO_RAD(4);
            class BaseSoundModeType;
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
// End Rifles

// SMGs
    class w39_mors : w39_SMG {
        displayName = "wz. 39 Mors";
        descriptionShort = "Pistolet maszynowy wz. 39 Mors";
        dispersion = MOA_TO_RAD(8);
        fow_burstLength = 4;
        magazines[] = {"w39_9_MM_24xPARA"};
        magazineWell[] = {"CBA_9x19_wz39Mors"};
        recoil = "recoil_2PzD_smg_medium";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 93.70;
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
            aiDispersionCoefX = 2;
            aiDispersionCoefY = 3;
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(525); // 525 rpm
            class BaseSoundModeType;
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
            aiDispersionCoefX = 2;
            aiDispersionCoefY = 3;
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(525); // 525 rpm
            class BaseSoundModeType;
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
// End SMGs

// Machine Guns
    class w39_wz28 : W39_MGBASE {
        displayName = "wz. 28";
        descriptionShort = "Karabin maszynowy Browning wz. 28";
        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
        discreteDistanceInitIndex = 1;
        dispersion = MOA_TO_RAD(3);
        fow_burstLength = 4;
        magazines[] = {"w39_7_92_20xMauserS","w39_7_92_20xMauserP"};
        magazineWell[] = {"CBA_792x57_wz28"};
        recoil = "recoil_2PzD_rifle_auto_1";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 198.416;
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
            aiDispersionCoefX = 2;
            aiDispersionCoefY = 3;
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(600); // 600 rpm
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
            aiDispersionCoefX = 2;
            aiDispersionCoefY = 3;
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(600); // 600 rpm
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
// End Machine Guns

// Other Weapons, Tripods, Launchers
/*
    class w39_CKMwz25mg : w39_LMGA3_base {
        displayName = "CKM wz.25";
        class manual : w39_LMGA3_base {
    };
    
    class w39_ckmwz25veh : w39_CKMwz25mg {
        scope = 1;
        displayName = "CKM wz.25";
        nameSound = "mgun";
        aiDispersionCoefX = 21;
        aiDispersionCoefY = 21;
        magazines[] = {"w39_7_92_30xMauserS", "w39_7_92_30xMauserP"};
        canLock = 1;
        cursor = "EmptyCursor";
        cursoraim = "mg";
        showAimCursorInternal = 1;
    };
*/
// End Other Weapons, Tripods, Launchers

// Vehicle Weapons
// End Vehicle Weapons
