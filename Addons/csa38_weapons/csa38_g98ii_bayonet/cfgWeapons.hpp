
class LIB_Bayonet_base;

class CSA38_g98ii;

class CSA38_g98ii_Bayonet : CSA38_g98ii {
    baseweapon = "CSA38_g98ii";
    muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
    weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
    class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
        displayname = "Bayonet";
    };
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "LIB_ACC_K98_Bayo";
        };
    };
};

class CSA38_g98ii_Bayonet2 : CSA38_g98ii_Bayonet {
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "csa38_SG84Bayonet";
        };
    };
};
