
class RifleCore;

class Rifle : RifleCore {
    class WeaponSlotsInfo;
};

class Rifle_Base_F : Rifle {};

class csa38_SMG : Rifle_Base_F {};

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
    class Full : Mode_FullAuto {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(550);
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
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(550);
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
    class Far;
    class Medium;
    class Short;
};

class CSA38_stenMkIIs : CSA38_stenMkII {
    displayName = "Sten Mk IIS";
    descriptionShort = "Sten Mk IIS";
    class Full : Mode_FullAuto {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(451);
    };
    class Single : Single {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(451);
    };
    class Far : Far {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(451);
    };
    class Medium : Medium {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(451);
    };
    class Short : Short {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(451);
    };
};
