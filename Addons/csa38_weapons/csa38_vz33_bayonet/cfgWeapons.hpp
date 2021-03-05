
class LIB_Bayonet_base;

class csa38_vz33;

class CSA38_vz33_Bayonet : csa38_vz33 {
    baseweapon = "CSA38_vz33";
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

class CSA38_vz33_Bayonet2 : CSA38_vz33_Bayonet {
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "csa38_vz23Bayonet";
        };
    };
};

class CSA38_vz33_Bayonet3 : CSA38_vz33_Bayonet {
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "csa38_vz33Bayonet";
        };
    };
};
