
class Rifle_Base_F;

class CSA38_vz24 : Rifle_Base_F {
    class WeaponSlotsInfo;
};

class CSA38_kar98k : CSA38_vz24 {};

class CSA38_kar98k5 : CSA38_kar98k {
    displayName = "Kar98k";
    descriptionShort = "Karabiner 98 kurz, 1939 upgrade";
    LIB_fixedBayonet = "CSA38_kar98k5_Bayonet";
    LIB_GW1 = "CSA38_kar98k5_GW";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 87.993;
    };
};
