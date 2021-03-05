
class RifleCore;

class Rifle : RifleCore {
    class WeaponSlotsInfo;
};

class CSA38_vz24 : Rifle {};

class CSA38_vz24ii : CSA38_vz24 {
    displayname = "vz. 24 (Zf39)";
    descriptionShort = "Puska vz. 24, known as the G24(t) in Wehrmacht service, with Zf39 4x power telescopic sight.";
    LIB_bayonetOffset[] = {-4.7,65,5};
    LIB_fixedBayonet = "CSA38_vz24ii_Bayonet";
    ZOOM_NAKED_EYE;
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
    class OpticsModes {
        class csa38_vz24_scope {
            ZOOM_POWER(4, 4, 4);
        };
        class csa38_vz24_iron {
            ZOOM_NAKED_EYE;
        };
    };
    class Single : Mode_SemiAuto {
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
