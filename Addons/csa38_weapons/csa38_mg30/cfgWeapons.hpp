
class Rifle_Long_Base_F;

class CSA38_MGBASE : Rifle_Long_Base_F {
    class WeaponSlotsInfo;
};

class CSA38_MG30 : CSA38_MGBASE {
    displayName = "MG30";
    descriptionShort = "Maschinengewehr 30";
    dispersion = MOA_TO_RAD(3);
    fow_burstLenght = 3;
    magazines[] = {"CSA38_7_92_30xMauserMG","CSA38_7_92_30xMauserMGAP"};
    magazineWell[] = {"CBA_792x57_MG30"};
    recoil = "recoil_2PzD_mmg_1";
    class Eventhandlers {
        class fow_mgRoF {
            fired = "_this spawn fow_main_fnc_mgRoF;";
        };
    };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 219.8;
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
        dispersion = MOA_TO_RAD(3);
        reloadTime = RPM_TO_TIME(750);
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(3);
        reloadTime = RPM_TO_TIME(750);
    };
};
