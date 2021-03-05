
class csa38_Pistol;

class csa38_czvz22;

class csa38_p38 : csa38_czvz22 {
    class WeaponSlotsInfo;
};

class csa38_m1896 : csa38_p38 {
    displayName = "M1930 C-96 Mauser";
    descriptionShort = "C-96 Mauser pistol, in 7.63x25mm";
    dispersion = MOA_TO_RAD(15);
    recoil = "recoil_2PzD_pistol_light";
    magazines[] = {"csa38_7_63mm_10xMauser"};
    magazineWell[] = {"CBA_763x25_C96"};
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 23.81;
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(15);
        reloadTime = RPM_TO_TIME(952);
    };
};
