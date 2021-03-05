
class csa38_Pistol;

class csa38_czvz22 : csa38_Pistol {
    class WeaponSlotsInfo;
};

class csa38_czvz27 : csa38_czvz22 {
    displayname = "vz. 27";
    descriptionShort = "Pistole vz. 27, known as the Pistole 27(t) in Wehrmacht service";
    magazines[] = {"CSA38_7_65mm_8xBrowning","CSA38_7_65mm_8xBrowningSD"};
    magazineWell[] = {"CBA_32ACP_Vz27"};
    recoil = "recoil_2PzD_pistol_light";
    ZOOM_NAKED_EYE;
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 14.77;
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
