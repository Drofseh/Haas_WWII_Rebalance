
class csa38_Pistol;

class csa38_czvz22 : csa38_Pistol {
    class WeaponSlotsInfo;
};

class csa38_p38 : csa38_czvz22 {};

class csa38_p38sd : csa38_p38 {
    displayName = "P38 (Threaded)";
    descriptionShort = "Pistole 38, the barrel on this P38 has been threaded to attach a suppressor.";
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
