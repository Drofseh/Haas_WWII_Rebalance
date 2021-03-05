
class csa38_SMG;

class CSA38_Mp38 : csa38_SMG {
    class WeaponSlotsInfo;
};

class CSA38_Mp38ii : CSA38_Mp38 {};

class CSA38_Mp40 : CSA38_Mp38 {};

class CSA38_Mp40ii : CSA38_Mp38ii {};

class CSA38_Mp40s : CSA38_Mp40 {
    displayName = "MP40 (Threaded) (Folded)";
    descriptionShort = "Maschinenpistole 40 with stock folded, the barrel on this MP38 has been threaded to attach a suppressor.";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot {
            displayName = "Suppressor slot";
            linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            compatibleItems[] = {"csa38_ermasd"};
        };
    };
};

class CSA38_Mp40sii : CSA38_Mp40ii {
    baseWeapon = "CSA38_Mp40s";
    displayName = "MP40 (Threaded)";
    descriptionShort = "Maschinenpistole 40, the barrel on this MP38 has been threaded to attach a suppressor.";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot {
            displayName = "Suppressor slot";
            linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            compatibleItems[] = {"csa38_ermasd"};
        };
    };
};

