
class CSA38_vz24;

class CSA38_kar98k : CSA38_vz24 {
    class WeaponSlotsInfo;
};

class CSA38_M1895 : CSA38_kar98k {
    displayname = "Mannlicher M1895";
    descriptionShort = "Infanterie Repetier-Gewehr M.95";
    magazines[] = {"CSA38_8_00_5xMannlicher"};
    magazineWell[] = {"CBA_8x50mmR_Mannlicher_M1895"};
    LIB_bayonetOffset[] = {-4.7,65,5};
    LIB_fixedBayonet = "CSA38_M1895_Bayonet";
    LIB_GW1 = "CSA38_M1895_GW";
    muzzles[] = {"this","SAFE"};
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 83.33;
        class CowsSlot {
            compatibleItems[] = {};
        };
        class MuzzleSlot {
            displayName = "Bayonet slot";
            linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            compatibleItems[] = {"CSA38_PGvz23_Empty","csa38_m95Bayonet"};
        };
        class PointerSlot {
            compatibleItems[] = {};
        };
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