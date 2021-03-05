
class RifleCore;

class Rifle : RifleCore {
    class WeaponSlotsInfo;
};

class Rifle_Base_F : Rifle {};

class csa38_SMG : Rifle_Base_F {};

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
    class Eventhandlers {
        class fow_mgRoF {
            fired = "_this spawn fow_main_fnc_mgRoF;";
        };
    };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 63.31;
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
        reloadTime = RPM_TO_TIME(475);
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
        reloadTime = RPM_TO_TIME(475);
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
