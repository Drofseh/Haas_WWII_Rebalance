
class Weapon_Base_F;

class Weapon_CSA38_SMLE_Bayonet : Weapon_Base_F {
    DLC = "CSA38";
    scope = 2;
    scopeCurator = 2;
    displayname = "SMLE Bayonet";
    author = "(csa38)PetrTlach";
    editorCategory = "EdCat_Weapons";
    vehicleClass = "WeaponsPrimary";
    editorSubcategory = "EdSubcat_AssaultRifles";
    class TransportWeapons {
        class CSA38_SMLE_Bayonet {
            weapon = "CSA38_SMLE_Bayonet";
            count = 1;
        };
    };
    class TransportMagazines {
        class CSA38_7_7_10x56R {
            magazine = "CSA38_7_7_10x56R";
            count = 1;
        };
    };
};

class Weapon_CSA38_SMLE2_Bayonet : Weapon_CSA38_SMLE_Bayonet {
    scope = 2;
    scopeCurator = 2;
    displayname = "SMLE Bayonet";
    author = "(csa38)PetrTlach";
    vehicleClass = "WeaponsPrimary";
    editorSubcategory = "EdSubcat_AssaultRifles";
    class TransportWeapons {
        class CSA38_SMLE2_Bayonet {
            weapon = "CSA38_SMLE2_Bayonet";
            count = 1;
        };
    };
};

class csa38_m3a3;
class csa38_m3a3RU1 : csa38_m3a3 {
    crew = "LIB_sov_tank_overall_crew";
};

class csa38_t34cz1;
class csa38_t34RU1 : csa38_t34cz1 {
    crew = "LIB_sov_tank_overall_crew";
};

class csa38_matildaii;
class csa38_matildaii_RU1 : csa38_matildaii {
    crew = "LIB_sov_tank_overall_crew";
};

class csa38_valentineMkII;
class csa38_valentineMkIIRU1 : csa38_valentineMkII {
    crew = "LIB_sov_tank_overall_crew";
};