
class Rifle_Base_F;

class CSA38_vz24 : Rifle_Base_F {
    class WeaponSlotsInfo;
};

class CSA38_SMLE : CSA38_vz24 {};

class CSA38_SMLE2 : CSA38_SMLE {
    displayName = "Lee Enfield No. 1 Mk III*";
    descriptionShort = "Rifle, No. 1 Mk III*";
    LIB_bayonetOffset[] = {-4.7,65,5};
    LIB_CUP_1 = "CSA38_SMLE2_CUP";
    LIB_fixedBayonet = "CSA38_SMLE2_Bayonet";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 85.2;
        class CowsSlot {
            compatibleItems[] = {};
        };
        class MuzzleSlot {
            linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            displayName = "Bayonet slot";
            compatibleItems[] = {"LIB_ACC_P1903_Bayo","LIB_ACC_GL_Enfield_CUP_Empty","LIB_ACC_GL_Enfield_CUP"};
        };
        class PointerSlot {
            compatibleItems[] = {};
        };
    };
};
