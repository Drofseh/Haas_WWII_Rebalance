
class LIB_Bayonet_base;

class CSA38_vz33_40ii;

class CSA38_vz33_40ii_Bayonet : csa38_vz33_40ii {
    baseweapon = "CSA38_vz33_40ii";
    author = "(csa38)PetrTlach";
    muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
    weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
    class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
        displayname = "Bayonet";
    };
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "csa38_vz24Bayonet";
        };
    };
};

class CSA38_vz33_40ii_Bayonet2 : CSA38_vz33_40ii_Bayonet {
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "csa38_vz23Bayonet";
        };
    };
};

class CSA38_vz33_40ii_Bayonet3 : CSA38_vz33_40ii_Bayonet {
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "csa38_vz33Bayonet";
        };
    };
};
