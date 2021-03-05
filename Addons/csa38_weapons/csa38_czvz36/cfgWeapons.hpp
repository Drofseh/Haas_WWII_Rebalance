
class csa38_Pistol;

class csa38_czvz22 : csa38_Pistol {
    class WeaponSlotsInfo;
};

class csa38_czvz36 : csa38_czvz22 {
    displayname = "vz. 36";
    descriptionShort = "Pistole vz. 36";
    magazines[] = {"CSA38_6_35mm_8xBrowning"};
    magazineWell[] = {"CBA_32ACP_Vz27"};
    recoil = "recoil_2PzD_pistol_light";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 8.95;
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(15);
    };
};
