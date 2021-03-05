
class csa38_Pistol;

class csa38_czvz22 : csa38_Pistol {
    class WeaponSlotsInfo;
};

class csa38_p38 : csa38_czvz22 {
    displayName = "P38";
    descriptionShort = "Pistole 38";
    dispersion = MOA_TO_RAD(15);
    magazines[] = {"csa38_9mm_8xPARA"};
    magazineWell[] = {"CBA_9x19_P38"};
    recoil = "recoil_2PzD_pistol_medium";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 17.647;
        class MuzzleSlot {};
        class CowsSlot {};
        class PointerSlot {};
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(15);
    };
};
