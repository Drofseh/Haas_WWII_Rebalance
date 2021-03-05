
class Rifle_Base_F;

class CSA38_vz24 : Rifle_Base_F {
    class WeaponSlotsInfo;
};

class CSA38_vz33_40 : CSA38_vz24 {};

class CSA38_vz33_40ii : CSA38_vz33_40 {
    displayName = "G33/40(t) (Trench Mag)";
    descriptionShort = "Puška vz. 16/33 with trench magazine, known as the Gewehr 33/40(t) in Wehrmacht service";
    magazines[] = {"csa38_7_92_20xMauserKAR"};
    magazineWell[] = {"CBA_792x57_K98","CBA_792x57_K98_Trench"};
    LIB_bayonetOffset[] = {-4.7,65,5};
    LIB_fixedBayonet = "CSA38_vz33_40ii_Bayonet";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 74.897;
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
};
