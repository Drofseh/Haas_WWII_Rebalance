
class RifleCore;

class Rifle : RifleCore {
    class WeaponSlotsInfo;
};

class Rifle_Base_F : Rifle {};

class csa38_SMG : Rifle_Base_F {};

class csa38_kpvz38P : csa38_SMG {
    displayname = "vz. 38";
    descriptionShort = "Kulometná Pistole vz. 38 with stick magazine";
    fow_burstLenght = 2;
    magazines[] = {"csa38_9_mm_36xBrowning"};
    magazineWell[] = {"CBA_380ACP_Vz38SMG"};
    recoil = "recoil_2PzD_smg_light";
    class Eventhandlers {
        class fow_mgRoF {
            fired = "_this spawn fow_main_fnc_mgRoF;";
        };
    };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 70.5479;
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
    class FullAuto : Mode_FullAuto {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(550);
    };
};

class csa38_kpvz38 : csa38_kpvz38P {
    displayname = "vz. 38 (Drum)";
    descriptionShort = "Kulometná Pistole vz. 38 with drum magazine";
    magazines[] = {"csa38_9_mm_96xBrowning"};
};
