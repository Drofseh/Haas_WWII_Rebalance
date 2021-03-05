
class LIB_Bayonet_base;

class CSA38_sm1924;

class CSA38_sm1924_Bayonet : CSA38_sm1924 {
    baseweapon = "CSA38_sm1924";
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

class CSA38_sm1924_Bayonet2 : CSA38_sm1924_Bayonet {
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "csa38_SG84Bayonet";
        };
    };
};