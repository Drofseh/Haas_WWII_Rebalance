
class RifleCore;

class Rifle : RifleCore {
    class WeaponSlotsInfo;
};

class Rifle_Base_F : Rifle {};

class csa38_SMG : Rifle_Base_F {};

class CSA38_Mp38 : csa38_SMG {};

class CSA38_Mp38ii : CSA38_Mp38 {};

class CSA38_Mp38s : CSA38_Mp38 {
    displayName = "MP38 (Threaded) (Folded)";
    descriptionShort = "Maschinenpistole 38 with stock folded, the barrel on this MP38 has been threaded to attach a suppressor.";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot {
            displayName = "Suppressor slot";
            linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            compatibleItems[] = {"csa38_ermasd"};
        };
    };
};

class CSA38_Mp38sii : CSA38_Mp38ii {
    baseWeapon = "CSA38_Mp38s";
    displayName = "MP38 (Threaded)";
    descriptionShort = "Maschinenpistole 38, the barrel on this MP38 has been threaded to attach a suppressor.";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot {
            displayName = "Suppressor slot";
            linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            compatibleItems[] = {"csa38_ermasd"};
        };
    };
};
