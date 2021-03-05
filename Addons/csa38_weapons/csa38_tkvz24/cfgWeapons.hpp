
class Rifle_Long_Base_F;

class CSA38_MGBASE : Rifle_Long_Base_F {
    class WeaponSlotsInfo;
};

class CSA38_TKVZ24 : CSA38_MGBASE {
    displayName = "vz. 7/24";
    descriptionShort = "Schwarzlose-Janeček vz. 7/24";
    dispersion = MOA_TO_RAD(4);
    fow_burstLenght = 3;
    magazines[] = {"CSA38_TKVZ24mag","CSA38_TKVZ24mag2"};
    magazineWell[] = {"CBA_792x57_vz7_24"};
    recoil = "recoil_2PzD_mmg_1";
    class Eventhandlers {
        class fow_mgRoF {
            fired = "_this spawn fow_main_fnc_mgRoF;";
        };
    };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 507.06;
        class CowsSlot {
            compatibleItems[] = {};
        };
        class MuzzleSlot {
            compatibleItems[] = {};
        };
        class PointerSlot {
            compatibleItems[] = {};
        };
    };
    class FullAuto : Mode_FullAuto {
        dispersion = MOA_TO_RAD(4);
        reloadTime = RPM_TO_TIME(400);
    };
};

class csa38_m36hlaven;

class CSA38_TKVZ24tripod : csa38_m36hlaven {
    displayName = "vz. 7/24 Tripod";
    descriptionShort = "Tripod for the Schwarzlose-Janeček vz. 7/24";
    class WeaponSlotsInfo {
        mass = 405.65;
    };
};
