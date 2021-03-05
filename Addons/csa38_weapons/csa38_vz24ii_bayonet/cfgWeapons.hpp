
class LIB_Bayonet_base;

class CSA38_vz24ii;

class CSA38_vz24ii_Bayonet : CSA38_vz24ii {
    baseweapon = "CSA38_vz24ii";
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

class CSA38_vz24ii_Bayonet2 : CSA38_vz24ii_Bayonet {
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "csa38_vz23Bayonet";
        };
    };
};

class CSA38_vz24ii3_Bayonet3 : CSA38_vz24ii_Bayonet {
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "csa38_vz33Bayonet";
        };
    };
};
