#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "Wilhelm Haas (Drofseh)";
        authorUrl = "https://github.com/Drofseh/Haas_WWII_Rebalance";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        name = COMPONENT_NAME;
        requiredAddons[] = {"haas_wwii_rebalance_csa38_weapons_mp40"};
        requiredVersion = REQUIRED_VERSION;
        units[] = {};
        magazines[] = {};
        weapons[] = {"CSA38_Mp40s","CSA38_Mp40sii"};
        VERSION_CONFIG;
    };
};

// #include "CfgEventHandlers.hpp"

class Mode_FullAuto;

class cfgWeapons {

    #include "cfgWeapons.hpp"

};
