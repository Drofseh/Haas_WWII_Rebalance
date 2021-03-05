
class Rifle_Base_F;

class CSA38_vz24 : Rifle_Base_F {
    class WeaponSlotsInfo;
};

class CSA38_SMLE : CSA38_vz24 {
    displayName = "Lee Enfield No. 1 Mk III";
    descriptionShort = "Rifle, No. 1 Mk III";
    magazines[] = {"CSA38_7_7_10x56R"};
    magazineWell[] = {"CBA_303B_LeeEn"};
    recoil = "recoil_2PzD_rifle_bolt";
    LIB_bayonetOffset[] = {-4.7,65,5};
    LIB_CUP_1 = "CSA38_SMLE_CUP";
    LIB_fixedBayonet = "CSA38_SMLE_Bayonet";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 86.2;
        class CowsSlot {
            compatibleItems[] = {};
        };
        class MuzzleSlot {
            linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            displayName = "Bayonet slot";
            compatibleItems[] = {"LIB_ACC_P1903_Bayo","LIB_ACC_GL_Enfield_CUP_Empty","LIB_ACC_GL_Enfield_CUP"};
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
            soundSetShot[] = {"WW2_enfield_Shot_SoundSet","WW2_rifle2_Tail_SoundSet","WW2_enfield_stereoLayer_SoundSet"};
            weaponSoundEffect = "DefaultRifle";
        };
    };
};
