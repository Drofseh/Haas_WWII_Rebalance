
class Rifle_Long_Base_F;

class CSA38_MGBASE : Rifle_Long_Base_F {
    class WeaponSlotsInfo;
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
        class CowsSlot {
            compatibleItems[] = {};
        };
        class MuzzleSlot {
            compatibleItems[] = {};
        };
        class PointerSlot {
            compatibleItems[] = {};
        };
    };
    class FullAuto : Mode_FullAuto {
        dispersion = MOA_TO_RAD(3);
        reloadTime = RPM_TO_TIME(500);
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
        reloadTime = RPM_TO_TIME(500);
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
