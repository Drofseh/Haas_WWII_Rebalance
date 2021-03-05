
class LIB_SAFE_BASE;

class RifleCore;

class Rifle : RifleCore {
    class WeaponSlotsInfo;
};

class Rifle_Base_F : Rifle {};

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
