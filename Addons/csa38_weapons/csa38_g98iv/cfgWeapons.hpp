
class CSA38_vz24;

class CSA38_kar98k : CSA38_vz24 {
    class WeaponSlotsInfo;
};

class CSA38_g98 : CSA38_kar98k {};

class CSA38_g98iv : CSA38_g98 {
    displayName = "Gewehr 98 (Scope, Trench Mag)";
    descriptionShort = "Gewehr 98 with 4x power telescopic sight and trench magazine";
    magazines[] = {"CSA38_7_92_20xMauserCZ"};
    magazineWell[] = {"CBA_792x57_K98","CBA_792x57_K98_Trench"};
    LIB_fixedBayonet = "CSA38_g98iv_Bayonet";
    LIB_GW1 = "CSA38_g98iv_GW";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 91.22;
    };
    class OpticsModes {
        class csa38_kar98_scope {
            ZOOM_POWER(4, 4, 4);
        };
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
