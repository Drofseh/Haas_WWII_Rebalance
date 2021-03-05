
class csa38_Pistol;

class csa38_czvz22 : csa38_Pistol {
    class WeaponSlotsInfo;
};

class csa38_czvz24 : csa38_czvz22 {
    displayname = "vz. 24";
    descriptionShort = "Pistole vz. 24";
    magazines[] = {"CSA38_9mm_8xBrowning"};
    magazineWell[] = {"CBA_380ACP_Vz22Pistol"};
    recoil = "recoil_2PzD_pistol_light";
    ZOOM_NAKED_EYE;
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 14.77;
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(15);
    };
};
