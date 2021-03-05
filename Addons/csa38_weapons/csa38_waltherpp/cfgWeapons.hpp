
class csa38_Pistol;

class csa38_czvz22 : csa38_Pistol {
    class WeaponSlotsInfo;
};

class CSA38_WaltherPP : csa38_czvz22 {
    displayName = "Walther PP";
    descriptionShort = "Walther Polizeipistole in .32 ACP";
    dispersion = MOA_TO_RAD(15);
    magazines[] = {"csa38_7_65mm_8xBrow"};
    magazineWell[] = {"CBA_32ACP_PP"};
    recoil = "recoil_2PzD_pistol_medium";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 14.5505;
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(15);
    };
};
