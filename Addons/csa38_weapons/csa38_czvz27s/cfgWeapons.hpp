
class csa38_Pistol;

class csa38_czvz22 : csa38_Pistol {
    class WeaponSlotsInfo;
};

class csa38_czvz27 : csa38_czvz22 {};

class csa38_czvz27s : csa38_czvz27 {
    displayname = "vz. 27 (Threaded)";
    descriptionShort = "Pistole vz. 27, the barrel on this vz. 27 has been threaded to attach a suppressor.";
    magazines[] = {"CSA38_7_65mm_8xBrowning","CSA38_7_65mm_8xBrowningSD"};
    baseweapon = "csa38_czvz27";
    magazineWell[] = {"CBA_32ACP_Vz27"};
    recoil = "recoil_2PzD_pistol_light";
    ZOOM_NAKED_EYE;
    scope = 2;
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 14.77;
        class CowsSlot {
            compatibleItems[] = {};
        };
        class MuzzleSlot {
            compatibleItems[] = {"csa38_czvz27tlumic"};
            displayName = "Suppressor slot";
            linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
        };
        class PointerSlot {
            compatibleItems[] = {};
        };
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(15);
    };
};
