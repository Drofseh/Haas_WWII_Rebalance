
class RifleCore;

class Rifle : RifleCore {
    class WeaponSlotsInfo;
};

class Rifle_Base_F : Rifle {};

class csa38_SMG : Rifle_Base_F {};

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
    class Eventhandlers {
        class fow_mgRoF {
            fired = "_this spawn fow_main_fnc_mgRoF;";
        };
    };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 91.3;
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
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(500);
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
    baseWeapon = "CSA38_Mp38";
    displayName = "MP38";
    descriptionShort = "Maschinenpistole 38";
    recoil = "recoil_2PzD_smg_medium";
};
