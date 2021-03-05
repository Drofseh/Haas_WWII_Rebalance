
class GrenadeLauncher;

class Rifle_Base_F;

class CSA38_vz24 : Rifle_Base_F {
    class WeaponSlotsInfo;
};

class csa38_gvz23 : CSA38_vz24 {
    displayname = "Mannlicher M1895 Carbine (Launcher)";
    descriptionShort = "Kavalerie Repetier-Carabiner M1895 with grenade launcher";
    magazines[] = {};
    magazineWell[] = {};
    recoil = "recoil_2PzD_rifle_at";
    ZOOM_NAKED_EYE;
    class GVZ23Muzzle : GrenadeLauncher {
        dispersion = MOA_TO_RAD(10);
        recoil = "recoil_2PzD_rifle_at";
        recoilProne = "recoil_2PzD_rifle_at";
        ZOOM_NAKED_EYE;
    };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 77.206;
    };
};
