
class Default;

class HMG_01;

class HMG_M2 : HMG_01 {
    class manual;
};

class HMG_M2_Mounted : HMG_M2 {
    fow_burstLenght = 6;
    class Eventhandlers {
        class fow_mgRoF {
            fired = "_this spawn fow_main_fnc_mgRoFStatic;";
        };
    };
    class manual : manual {
        dispersion = MOA_TO_RAD(4);
        reloadTime = RPM_TO_TIME(525); // 525 rpm
    };
    class close : manual {};
    class short : close {};
    class medium : close {};
    class far : close {};
};

class GrenadeLauncher;

class UGL_F : GrenadeLauncher {
    dispersion = MOA_TO_RAD(50);
    recoil = "recoil_single_m320";
    recoilProne = "recoil_single_m320";
    aiDispersionCoefX = 5;
    aiDispersionCoefY = 10;
    aiRateOfFire = 5;
    aiRateOfFireDispersion = 5;
    aiRateOfFireDistance = 200;
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(50);
        recoil = "recoil_single_m320";
        recoilProne = "recoil_single_m320";
        aiDispersionCoefX = 5;
        aiDispersionCoefY = 10;
        aiRateOfFire = 5;
        aiRateOfFireDispersion = 5;
        aiRateOfFireDistance = 200;
    };
};

class sgun_HunterShotgun_01_base_F;
class sgun_HunterShotgun_01_F : sgun_HunterShotgun_01_base_F {
    displayName = "Browning Superposed";
    descriptionShort = "The Browning Superposed was the first over-under shotgun design.";
    discreteDistance[] = {50};
    discreteDistanceInitIndex = 0;
    magazineWell[] += {"CBA_12g_2rnds","CBA_12g_1rnd"};
    allowedSlots[] = {701,901};
};

class sgun_HunterShotgun_01_sawedoff_base_F;
class sgun_HunterShotgun_01_sawedoff_F : sgun_HunterShotgun_01_sawedoff_base_F {
    displayName = "Browning Superposed (Sawn Off)";
    descriptionShort = "The Browning Superposed was the first over-under shotgun design. Someone has cut down the barrel and stock on this one.";
    discreteDistance[] = {25};
    discreteDistanceInitIndex = 0;
    allowedSlots[] = {701,801,901};
    class MagazineCoef {
        initSpeed = 0.75;
    };
};

class CBA_MiscItem_ItemInfo;
class ACE_ItemCore;

#include "ACE_Weapons.hpp"
