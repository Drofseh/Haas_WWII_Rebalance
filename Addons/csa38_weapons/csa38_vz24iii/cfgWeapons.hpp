
class RifleCore;

class Rifle : RifleCore {
    class WeaponSlotsInfo;
};

class CSA38_vz24 : Rifle {};

class CSA38_vz24iii : CSA38_vz24 {
    displayname = "vz. 24 (Trench Mag)";
    descriptionShort = "Puska vz. 24 with trench magazine, known as the G24(t) in Wehrmacht service.";
    magazines[] = {"CSA38_7_92_20xMauserCZ"};
    magazineWell[] = {"CBA_792x57_K98","CBA_792x57_K98_Trench"};
    LIB_bayonetOffset[] = {-4.7,65,5};
    LIB_fixedBayonet = "CSA38_vz24iii_Bayonet";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 90.95;
        class CowsSlot {
            compatibleItems[] = {};
        };
        class MuzzleSlot {
            linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            displayName = "Bayonet slot";
            compatibleItems[] = {"csa38_vz24Bayonet","csa38_vz23Bayonet","csa38_vz33Bayonet"};
        };
        class PointerSlot {
            compatibleItems[] = {};
        };
    };
};