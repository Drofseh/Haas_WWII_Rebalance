
class csa38_SMG;

class CSA38_Mp38 : csa38_SMG {
    class WeaponSlotsInfo;
    class FullAuto;
};

class CSA38_Mp38ii : CSA38_Mp38 {
    class FullAuto;
    class AI_Burst1;
};

class CSA38_Mp40 : CSA38_Mp38 {
    displayName = "MP40 (Folded)";
    descriptionShort = "Maschinenpistole 40 with stock folded";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 87.551;
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
    class AI_Burst1 : FullAuto {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(525);
    };
    class FullAuto : Mode_FullAuto {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(525);
    };
};

class CSA38_Mp40ii : CSA38_Mp38ii {
    displayName = "MP40";
    descriptionShort = "Maschinenpistole 40";
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 87.551;
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
    class FullAuto : FullAuto {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(525);
    };
    class AI_Burst1 : AI_Burst1 {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(525);
    };
};
