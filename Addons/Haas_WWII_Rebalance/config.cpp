
#include "definitions.h"

class CfgPatches {
    class Haas_WWII_Rebalance {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        units[] = {};
        magazineWell[] = {};
        magazines[] = {MagazinesArray};
        weapons[] = {WeaponsArray};
        requiredAddons[] = {RequiredAddonsArray};
    };
}; // End CfgPatches

#include "RscDisplayMain.h"

class Mode_SemiAuto;

class Mode_Burst;

class Mode_FullAuto;

class BaseSoundModeType;

class SlotInfo;

class cfgAmmo {

    #include "cfgAmmo.h"

};

class Eventhandlers;

class CfgFunctions {

    #include "cfgFunctions.h"

};

class CfgMagazineWells {

    #include "cfgMagazineWells.h"

};

class cfgMagazines {

    #include "cfgMagazines.h"

};

class cfgWeapons {

    #include "cfgWeapons.h"

};

class cfgRecoils {

    #include "cfgRecoils.h"

};

class cfgWeaponHandling {

    #include "cfgWeaponHandling.h"

};

class cfgVehicles {

    #include "cfgVehicles.h"

};

class cfgEditorSubcategories {
    class EdSubcat_2PzD_1_Essentials {
        displayName = "2PzD !Essentials";
    };

    class EdSubcat_2PzD_Belgian {
        displayName = "2PzD Belgium";
    };

    class EdSubcat_2PzD_Canadian {
        displayName = "2PzD Canada";
    };

    class EdSubcat_2PzD_Civilains {
        displayName = "2PzD Civilian";
    };

    class EdSubcat_2PzD_French {
        displayName = "2PzD France";
    };

    class EdSubcat_2PzD_German {
        displayName = "2PzD Germany";
    };

    class EdSubcat_2PzD_Japan {
        displayName = "2PzD Japan";
    };

    class EdSubcat_2PzD_Netherlands {
        displayName = "2PzD Netherlands";
    };

    class EdSubcat_2PzD_Partisan {
        displayName = "2PzD Partisans";
    };

    class EdSubcat_2PzD_PHA {
        displayName = "2PzD Poland";
    };

    class EdSubcat_2PzD_Russian {
        displayName = "2PzD Russia";
    };

    class EdSubcat_2PzD_United_Kingdom {
        displayName = "2PzD United Kingdom";
    };

    class EdSubcat_2PzD_United_States {
        displayName = "2PzD United States";
    };
}; // End cfgEditorSubcategories

class FOW_no79_Grenade_Effects {
    class FOW_no79_Stage1 {
        simulation = "particles";
        type = "FOW_Grenade_FuseDetonation";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.07;
    };
    class FOW_no79_Stage2 {
        simulation = "particles";
        type = "FOW_Grenade_Detonation_Phosphorus";
        position[] = {0, 0, 0};
        intensity = 0.5;
        interval = 1;
        lifeTime = 0.5;
    };
    class FOW_no79_Stage3 {
        simulation = "particles";
        type = "FOW_Grenade_Detonation_Heat";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.1;
    };
    class FOW_no79_Stage4 {
        simulation = "particles";
        type = "FOW_Grenade_Detonation_Smoke";
        position[] = {0, 0, 0};
        intensity = 0.5;
        interval = 1;
    };
}; // End FOW_no79_Grenade_Effects
