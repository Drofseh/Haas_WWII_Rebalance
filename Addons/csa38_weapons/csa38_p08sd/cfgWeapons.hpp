
class csa38_Pistol;

class csa38_czvz22 : csa38_Pistol {
    class WeaponSlotsInfo;
};

class csa38_p08 : csa38_czvz22 {};

class csa38_p082 : csa38_p08 {};

class csa38_p08sd : csa38_p08 {
    displayName = "P08 (Threaded)";
    descriptionShort = "Pistole 08, the barrel on this P08 has been threaded to attach a suppressor.";
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

class csa38_p082sd : csa38_p082 {
    displayName = "P08 (Threaded)";
    descriptionShort = "Pistole 08, the barrel on this P08 has been threaded to attach a suppressor.";
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
