
class Rifle_Base_F;

class CSA38_vz24 : Rifle_Base_F {
    class WeaponSlotsInfo;
};

class CSA38_vz33 : CSA38_vz24 {};

class CSA38_vz33_40 : CSA38_vz33 {
    displayName = "G33/40(t)";
    descriptionShort = "Puška vz. 16/33, known as the Gewehr 33/40(t) in Wehrmacht service";
    LIB_bayonetOffset[] = {-4.7,65,5};
    LIB_fixedBayonet = "CSA38_vz33_40_Bayonet";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 73.897;
        class MuzzleSlot {
            linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            displayName = "Bayonet slot";
            compatibleItems[] = {"csa38_vz24Bayonet","csa38_vz23Bayonet","csa38_vz33Bayonet"};
        };
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(4);
    };
};
