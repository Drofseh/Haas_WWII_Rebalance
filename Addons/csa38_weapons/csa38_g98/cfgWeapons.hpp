
class CSA38_vz24;

class CSA38_kar98k : CSA38_vz24 {
    class WeaponSlotsInfo;
};

class CSA38_g98 : CSA38_kar98k {
    displayName = "Kar98b";
    descriptionShort = "Karabiner 98b";
    magazines[] = {"csa38_7_92_5xMauserKAR"};
    magazineWell[] = {"CBA_792x57_K98"};
    LIB_fixedBayonet = "CSA38_g98_Bayonet";
    LIB_GW1 = "CSA38_g98_GW";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 88.24;
    };
};
