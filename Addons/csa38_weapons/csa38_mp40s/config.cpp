#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {"CSA38_Mp40s","CSA38_Mp40sii"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"haas_wwii_rebalance_csa38_weapons_mp40"};
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        authorUrl = "https://github.com/Drofseh/Haas_WWII_Rebalance";
        VERSION_CONFIG;
    };
};

// #include "CfgEventHandlers.hpp"

class Mode_FullAuto;

class cfgWeapons {

    #include "cfgWeapons.hpp"

};
