
class LIB_Bayonet_base;

class CSA38_MAS36;

class CSA38_MAS36_Bayonet : CSA38_MAS36 {
    baseweapon = "CSA38_MAS36";
    muzzles[] = {"this","LIB_Bayonet_Muzzle"};
    weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
    class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
        displayname = "Bayonet";
    };
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "csa38_mas36Bayonet";
        };
    };
};
