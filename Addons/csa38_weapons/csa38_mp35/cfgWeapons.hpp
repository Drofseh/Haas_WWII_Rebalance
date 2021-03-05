
class csa38_SMG;

class CSA38_Mp18 : csa38_SMG {
    class WeaponSlotsInfo;
};

class CSA38_Mp28 : CSA38_Mp18 {};

class CSA38_Mp35 : CSA38_Mp28 {
    displayname = "MP35";
    descriptionShort = "Maschinenpistole 35";
    fow_burstLenght = 2;
    magazines[] = {"csa38_9_MM_32xMP35"};
    magazineWell[] = {"CBA_9x19_MP35"};
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 93.48;
        class CowsSlot : CowsSlot {
            compatibleItems[] = {};
        };
        class MuzzleSlot : MuzzleSlot {
            compatibleItems[] = {};
        };
        class PointerSlot : PointerSlot {
            compatibleItems[] = {};
        };
    };
    class FullAuto : Mode_FullAuto {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(540);
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
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(540);
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
    };
    class AI_Burst1 : Mode_Burst {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(540);
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
