
class CSA38_vz24;

class CSA38_kar98k : CSA38_vz24 {
    class WeaponSlotsInfo;
};

class CSA38_g98 : CSA38_kar98k {};

class CSA38_g98i : CSA38_g98 {
    displayName = "Gewehr 98";
    descriptionShort = "Gewehr 98";
    LIB_fixedBayonet = "CSA38_g98i_Bayonet";
    LIB_GW1 = "CSA38_g98i_GW";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 90.22;
    };
};
