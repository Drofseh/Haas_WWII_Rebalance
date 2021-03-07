#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "Wilhelm Haas (Drofseh)";
        authorUrl = "https://github.com/Drofseh/Haas_WWII_Rebalance";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        name = COMPONENT_NAME;
        requiredAddons[] = {"haas_wwii_rebalance_common"};
        requiredVersion = REQUIRED_VERSION;
        units[] = {};
        magazines[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

class cfgVehicles {

    #include "cfgVehicles.hpp"

};
