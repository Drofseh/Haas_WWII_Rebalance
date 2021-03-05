
class csa38_Pistol;

class csa38_czvz22 : csa38_Pistol {
    class WeaponSlotsInfo;
};

class csa38_czvz38 : csa38_czvz22 {
    displayname = "vz. 38";
    descriptionShort = "Pistole vz. 38, known as the Pistole 39(t) in Wehrmacht service";
    magazines[] = {"csa38_9mm_9xBrowning"};
    magazineWell[] = {"CBA_380ACP_Vz38Pistol"};
    recoil = "recoil_2PzD_pistol_light";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 21.6053;
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(15);
    };
};
