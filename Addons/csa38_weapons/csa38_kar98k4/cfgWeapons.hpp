
class Rifle_Base_F;

class CSA38_vz24 : Rifle_Base_F {
    class WeaponSlotsInfo;
};

class CSA38_kar98k : CSA38_vz24 {};

class CSA38_kar98k2 : CSA38_kar98k {};

class CSA38_kar98k4 : CSA38_kar98k2 {
    displayName = "Kar98k (pre-war) (Zf39, Trench Mag)";
    descriptionShort = "Karabiner 98 kurz, pre-war model with Zf39 scope and trench magazine";
    magazines[] = {"CSA38_7_92_20xMauserCZ"};
    magazineWell[] = {"CBA_792x57_K98","CBA_792x57_K98_Trench"};
    LIB_fixedBayonet = "CSA38_kar98k4_Bayonet";
    LIB_GW1 = "CSA38_kar98k4_GW";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 93.773;
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(3.5);
        sounds[] = {"StandardSound"};
        class BaseSoundModeType {
            closure1[] = {"\CSA38II_sounds\w_m1895\reload2.ogg", 3, 1, 20};
            soundClosure[] = {"closure1", 1};
            weaponSoundEffect = "CSA38_Rifle";
        };
        class StandardSound: BaseSoundModeType {
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
