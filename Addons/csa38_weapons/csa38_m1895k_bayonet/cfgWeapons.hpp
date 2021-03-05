
class LIB_Bayonet_base;

class CSA38_M1895k;

class CSA38_M1895k_Bayonet : CSA38_M1895k {
    baseweapon = "CSA38_M1895k";
    author = "(csa38)PetrTlach";
    muzzles[] = {"this","LIB_Bayonet_Muzzle","SAFE"};
    weaponInfoType = "LIB_Rsc_Bayonet_Zeroing";
    class LIB_Bayonet_Muzzle : LIB_Bayonet_base {
        displayname = "Bayonet";
    };
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "csa38_m95Bayonet";
        };
    };
};
