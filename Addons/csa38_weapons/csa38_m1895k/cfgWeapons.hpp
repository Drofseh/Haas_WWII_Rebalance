
class CSA38_vz24;

class CSA38_kar98k : CSA38_vz24 {
    class WeaponSlotsInfo;
};

class CSA38_M1895 : CSA38_kar98k {};

class CSA38_M1895k : CSA38_M1895 {
    displayname = "Mannlicher M1895 Carbine";
    descriptionShort = "Kavalerie Repetier-Carabiner M1895";
    recoil = "recoil_2PzD_rifle_short";
    LIB_fixedBayonet = "CSA38_M1895k_Bayonet";
    LIB_GW1 = "CSA38_M1895k_GW";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 68.34;
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(5);
        sounds[] = {"StandardSound"};
        class BaseSoundModeType {
            closure1[] = {"\CSA38II_sounds\w_m1895\reload2.ogg", 3, 1, 20};
            soundClosure[] = {"closure1", 1};
            weaponSoundEffect = "CSA38_Rifle";
        };
        class StandardSound : BaseSoundModeType {
            soundSetShot[] = {"CSA38_M1895_Shot_SoundSet", "Mk200_Tail_SoundSet", "Mk200_InteriorTail_SoundSet"};
            begin1[] = {"\CSA38II_sounds\w_m1895\fire01.ogg", 1.77828, 1, 1200};
            begin2[] = {"\CSA38II_sounds\w_m1895\fire02.ogg", 1.77828, 1, 1200};
            begin3[] = {"\CSA38II_sounds\w_m1895\fire03.ogg", 1.77828, 1, 1200};
            begin4[] = {"\CSA38II_sounds\w_m1895\fire04.ogg", 1.77828, 1, 1200};
            begin5[] = {"\CSA38II_sounds\w_m1895\fire05.ogg", 1.77828, 1, 1200};
            soundBegin[] = {"begin1", 0.2, "begin2", 0.2, "begin3", 0.2, "begin4", 0.2, "begin5", 0.2};
        };
    };
};
