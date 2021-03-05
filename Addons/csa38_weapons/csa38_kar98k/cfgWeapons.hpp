
class Rifle_Base_F;

class CSA38_vz24 : Rifle_Base_F {
    class WeaponSlotsInfo;
};

class CSA38_kar98k : CSA38_vz24 {
    displayName = "Kar98k (pre-war)";
    descriptionShort = "Karabiner 98 kurz, pre-war model";
    discreteDistanceInitIndex = 2;
    magazines[] = {"csa38_7_92_5xMauserKAR"};
    recoil = "recoil_2PzD_rifle_bolt";
    LIB_bayonetOffset[] = {-4.7,65,5};
    LIB_fixedBayonet = "CSA38_kar98k_Bayonet";
    LIB_GW1 = "CSA38_kar98k_GW";
    muzzles[] = {"this","SAFE"};
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 87.7;
        class CowsSlot {
            compatibleItems[] = {};
        };
        class MuzzleSlot {
            displayName = "Bayonet slot";
            linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            compatibleItems[] = {"LIB_ACC_K98_Bayo","LIB_ACC_GW_SB_Empty","LIB_ACC_GW_SB_SPRGR_30","LIB_ACC_GW_SB_PZGR_30","LIB_ACC_GW_SB_PZGR_40","csa38_SG84Bayonet"};
        };
        class PointerSlot {
            compatibleItems[] = {};
        };
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(5);
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
