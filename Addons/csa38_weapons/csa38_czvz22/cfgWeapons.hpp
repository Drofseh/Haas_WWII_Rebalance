
class Pistol;

class Pistol_Base_F : Pistol {
    class WeaponSlotsInfo;
};

class csa38_Pistol : Pistol_Base_F {};

class csa38_czvz22 : csa38_Pistol {
    displayname = "vz. 22";
    descriptionShort = "Pistole vz. 22";
    magazines[] = {"CSA38_9mm_8xBrowning"};
    magazineWell[] = {"CBA_380ACP_Vz22Pistol"};
    recoil = "recoil_2PzD_pistol_light";
    ZOOM_NAKED_EYE;
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 13.98;
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(15);
    };
};
