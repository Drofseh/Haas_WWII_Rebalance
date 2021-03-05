
class csa38_Pistol;

class csa38_czvz22 : csa38_Pistol {
    class WeaponSlotsInfo;
};

class csa38_lp08 : csa38_czvz22 {};

class csa38_lp082 : csa38_lp08 {};

class csa38_lp08sd : csa38_lp08 {
    displayName = "LP08 (Threaded)";
    descriptionShort = "Lange Pistole 08, the barrel on this LP08 has been threaded to attach a suppressor.";
    class LinkedItems {};
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot {
            displayName = "Suppressor slot";
            linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            compatibleItems[] = {"csa38_ermasd"};
        };
        class CowsSlot {};
        class PointerSlot {};
    };
};

class csa38_lp082sd : csa38_lp082 {
    displayName = "LP08 (Threaded)";
    descriptionShort = "Lange Pistole 08, the barrel on this LP08 has been threaded to attach a suppressor.";
    class LinkedItems {};
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot {
            displayName = "Suppressor slot";
            linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            compatibleItems[] = {"csa38_ermasd"};
        };
        class CowsSlot {};
        class PointerSlot {};
    };
};
