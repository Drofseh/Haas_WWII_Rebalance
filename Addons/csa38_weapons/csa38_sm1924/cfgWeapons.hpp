
class Rifle_Base_F;

class CSA38_vz24 : Rifle_Base_F {
    class WeaponSlotsInfo;
};

class CSA38_kar98k : CSA38_vz24 {};

class CSA38_sm1924 : CSA38_kar98k {
    displayname = "FN Model 24";
    descriptionShort = "FN Model 24, known as the Gewehr 220 (b), Karabiner 420 (b), Gewehr 285 (b), Gewehr 291/1 (j), or Gewehr 291/2 (j) in Wehrmacht service depending on country of prodution.";
    recoil = "recoil_2PzD_rifle_short";
    LIB_fixedBayonet = "CSA38_sm1924_Bayonet";
    LIB_GW1 = "CSA38_sm1924_GW";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 68.34;
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(4);
        sounds[] = {"StandardSound"};
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
