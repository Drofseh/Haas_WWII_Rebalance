
class CfgPatches {
    class Haas_JSRS_Audio_Expansion {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        units[] = {};
        magazineWell[] = {};
        magazines[] = {};
        weapons[] = {};
        requiredAddons[] = {"Haas_WWII_Rebalance"}; // add JSRS IFA dependancy
    };
}; // End CfgPatches

class BaseSoundModeType;

class Eventhandlers;

class Mode_SemiAuto;

class Mode_Burst;

class Mode_FullAuto;

class SlotInfo;

class cfgAmmo {

    #include "cfgAmmo.h"

};

class cfgSoundShaders {

    #include "cfgSoundShaders.h"

};

class cfgWeapons {

    #include "cfgWeapons.h"

};
