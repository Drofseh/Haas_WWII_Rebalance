
class LIB_Bayonet_base;

class CSA38_SMLE2;

class CSA38_SMLE2_Bayonet : CSA38_SMLE2 {
    baseweapon = "CSA38_SMLE2";
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
