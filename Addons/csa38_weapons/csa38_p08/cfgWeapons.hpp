
class csa38_Pistol;

class csa38_czvz22 : csa38_Pistol {
    class WeaponSlotsInfo;
};

class csa38_p08 : csa38_czvz22 {
    displayName = "P08";
    descriptionShort = "Pistole 08";
    magazines[] = {"csa38_9mm_8xLuger"};
    magazineWell[] = {"CBA_9x19_P08"};
    recoil = "recoil_2PzD_pistol_medium";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 18.419;
        class CowsSlot {
            compatibleItems[] = {};
        };
        class MuzzleSlot {
            compatibleItems[] = {};
        };
        class PointerSlot {
            compatibleItems[] = {};
        };
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(15);
    };
};

class csa38_p082 : csa38_p08 {
    magazines[] = {"csa38_9_MM_32xMP18"};
    scope = 1;
};
