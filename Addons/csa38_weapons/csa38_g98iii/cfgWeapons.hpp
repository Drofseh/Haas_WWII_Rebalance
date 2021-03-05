
class CSA38_vz24;

class CSA38_kar98k : CSA38_vz24 {
    class WeaponSlotsInfo;
};

class CSA38_g98 : CSA38_kar98k {};

class CSA38_g98iii : CSA38_g98 {
    displayName = "Gewehr 98 (Trench Mag)";
    descriptionShort = "Gewehr 98 with trench magazine";
    magazines[] = {"csa38_7_92_20xMauserKAR"};
    magazineWell[] = {"CBA_792x57_K98","CBA_792x57_K98_Trench"};
    LIB_fixedBayonet = "CSA38_g98iii_Bayonet";
    LIB_GW1 = "CSA38_g98iii_GW";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 91.22;
    };
};
