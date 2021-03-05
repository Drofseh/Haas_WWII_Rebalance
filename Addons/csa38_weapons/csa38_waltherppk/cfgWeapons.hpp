
class csa38_czvz22;

class CSA38_WaltherPP : csa38_czvz22 {
    class WeaponSlotsInfo;
};

class CSA38_WaltherPPK : CSA38_WaltherPP {
    displayName = "Walther PPK";
    descriptionShort = "Walther Polizeipistole Kriminalmodell in .32 ACP";
    magazines[] = {"csa38_7_65mm_7xBrow"};
    magazineWell[] = {"CBA_32ACP_PPK","CBA_32ACP_PP"};
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 12.507;
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(15);
    };
};
