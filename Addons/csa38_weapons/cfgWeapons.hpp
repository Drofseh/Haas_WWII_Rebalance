
class Default;

class PistolCore;

class ItemCore;

class Put : Default {
    class csa38_PutMuzzle : Default {
        ZOOM_NAKED_EYE;
    };
};

class csa38_Put : Put {};

class Pistol : PistolCore {
    class WeaponSlotsInfo;
};

class Pistol_Base_F : Pistol {};

class Rifle_Base_F;

class csa38_Pistol : Pistol_Base_F {
    ZOOM_NAKED_EYE;
    class EventHandlers;
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class CowsSlot : SlotInfo {
            compatibleItems[] = {};
        };
        class MuzzleSlot : SlotInfo {
            compatibleItems[] = {};
        };
        class PointerSlot : SlotInfo {
            compatibleItems[] = {};
        };/*
        class UnderBarrelSlot : SlotInfo {
            compatibleItems[] = {};
        };*/
    };
};

class csa38_SMG : Rifle_Base_F {
    ZOOM_NAKED_EYE;
    class EventHandlers;
    class WeaponSlotsInfo {
        class CowsSlot : CowsSlot {
            compatibleItems[] = {};
        };
        class MuzzleSlot : MuzzleSlot {
            compatibleItems[] = {};
        };
        class PointerSlot : PointerSlot {
            compatibleItems[] = {};
        };
    };
};

class muzzle_snds_H : ItemCore {
    class ItemInfo;
};

class csa38_MAS36Bayonet : ItemCore {
    displayname = "MAS 36 Bayonet";
    descriptionShort = "Bayonet for the MAS 36 rifle. Put it in the muzzle slot and change firemodes to use it";
    LIB_AttachmentType = "LIB_fixedBayonet";
    LIB_bayonetLength = 30;
};

class csa38_vz23Bayonet : csa38_MAS36Bayonet {
    displayname = "vz. 23 Bayonet";
    descriptionShort = "Bayonet for the vz. 23 rifle. Put it in the muzzle slot and change firemodes to use it";
    LIB_bayonetLength = 40;
};

class csa38_vz24Bayonet : csa38_MAS36Bayonet {
    displayname = "vz. 24 Bayonet";
    descriptionShort = "Bayonet for the vz. 24 rifle. Put it in the muzzle slot and change firemodes to use it";
    LIB_bayonetLength = 30;
};

class csa38_vz33Bayonet : csa38_MAS36Bayonet {
    displayname = "vz. 33 Bayonet";
    descriptionShort = "Bayonet for the vz. 33 rifle. Put it in the muzzle slot and change firemodes to use it";
    LIB_bayonetLength = 25;
};

class csa38_sg84Bayonet : csa38_MAS36Bayonet {
    displayname = "K98k SG84 Bayonet";
    descriptionShort = "Bayonet for the K98k rifle. Put it in the muzzle slot and change firemodes to use it";
    LIB_bayonetLength = 25;
};

class csa38_m95Bayonet : csa38_MAS36Bayonet {
    displayname = "Mannlicher M1895 Bayonet";
    descriptionShort = "Bayonet for the Mannlicher M1895 rifle. Put it in the muzzle slot and change firemodes to use it";
    LIB_bayonetLength = 30;
};

class CSA38_PGvz23_Empty : muzzle_snds_H {
    LIB_AttachmentType = "LIB_GW1";
    class LIB_RifleGrenade {
        ammo = "";
        magazine = "";
        firingCup = "CSA38_PGvz23_Empty";
        magazines[] = {"CSA38_PRG21"};
    };
};

class CSA38_PGvz23 : CSA38_PGvz23_Empty {
    class LIB_RifleGrenade {
        ammo = "CSA38_PRG21ammo";
        magazine = "CSA38_PRG21";
        firingCup = "CSA38_PGvz23_Empty";
    };
};

class csa38_czvz27tlumic : muzzle_snds_H {
    displayName = "vz.27 Suppressor";
    class ItemInfo : ItemInfo {
        mass = 5.44;
    };
};

class csa38_ermasd : muzzle_snds_H {
    displayName = "ERMA 9mm Suppressor";
    class ItemInfo : ItemInfo {
        mass = 5.44;
    };
};
