
class Rifle_Base_F;

class CSA38_vz24 : Rifle_Base_F {
    class WeaponSlotsInfo;
};

class CSA38_MAS36 : CSA38_vz24 {
    displayname = "MAS 36";
    descriptionShort = "MAS Modèle 36";
    magazines[] = {"CSA38_7_5_5xMAS"};
    magazineWell[] = {"CBA_75x54mmFrench_MAS36"};
    recoil = "recoil_2PzD_rifle_bolt";
    muzzles[] = {"this"};
    LIB_bayonetOffset[] = {-4.7,65,5};
    LIB_fixedBayonet = "CSA38_MAS36_Bayonet";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 82;
        class CowsSlot {
            compatibleItems[] = {};
        };
        class MuzzleSlot {
            linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            displayName = "Bayonet slot";
            compatibleItems[] = {"csa38_mas36Bayonet"};
        };
        class PointerSlot {
            compatibleItems[] = {};
        };
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(4);
    };
};
