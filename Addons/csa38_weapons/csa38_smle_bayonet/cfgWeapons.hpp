
class LIB_Bayonet_base;

class CSA38_SMLE;

class CSA38_SMLE_Bayonet : CSA38_SMLE {
    baseweapon = "CSA38_SMLE";
    muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
    weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
    class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
        displayname = "Bayonet";
    };
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "LIB_ACC_P1903_Bayo";
        };
    };
};
