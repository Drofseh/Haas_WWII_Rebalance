
class RifleCore;

class Rifle : RifleCore {
    class WeaponSlotsInfo;
};

class Rifle_Base_F : Rifle {};

class csa38_SMG : Rifle_Base_F {};

class CSA38_Mp18 : csa38_SMG {};

class CSA38_Mp28 : CSA38_Mp18 {
    displayname = "MP28";
    descriptionShort = "Maschinenpistole 28/II";
    fow_burstLenght = 2;
    magazines[] = {"csa38_9_MM_32xMP28"};
    magazineWell[] = {"CBA_9x19_MP28"};
    reloadAction = "LIB_GestureReload_Sten";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 88.19;
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
        reloadTime = RPM_TO_TIME(575);
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
        reloadTime = RPM_TO_TIME(575);
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
