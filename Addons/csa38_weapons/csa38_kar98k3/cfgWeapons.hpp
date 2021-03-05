
class Rifle_Base_F;

class CSA38_vz24 : Rifle_Base_F {
    class WeaponSlotsInfo;
};

class CSA38_kar98k : CSA38_vz24 {};

class CSA38_kar98k3 : CSA38_kar98k {
    displayName = "Kar98k (pre-war) (Trench Mag)";
    descriptionShort = "Karabiner 98 kurz, pre-war model with trench magazine";
    magazines[] = {"csa38_7_92_20xMauserKAR"};
    magazineWell[] = {"CBA_792x57_K98","CBA_792x57_K98_Trench"};
    LIB_fixedBayonet = "CSA38_kar98k3_Bayonet";
    LIB_GW1 = "CSA38_kar98k3_GW";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 88.7;
    };
};
