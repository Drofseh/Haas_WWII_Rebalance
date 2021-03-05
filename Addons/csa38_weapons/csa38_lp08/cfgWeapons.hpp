
class csa38_Pistol;

class csa38_czvz22 : csa38_Pistol {
    class WeaponSlotsInfo;
};

class csa38_p08 : csa38_czvz22 {};

class csa38_lp08 : csa38_p08 {
    displayName = "LP08";
    descriptionShort = "Lange Pistole 08";
    magazineWell[] = {"CBA_9x19_P08"};
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 22.419;
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
};

class csa38_lp082 : csa38_lp08 {
    magazines[] = {"csa38_9_MM_32xMP18"};
    scope = 1;
};
