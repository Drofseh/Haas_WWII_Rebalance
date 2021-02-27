#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"haas_wwii_rebalance_common"};
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        authorUrl = "https://github.com/Drofseh/Haas_WWII_Rebalance";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

class cfgVehicles {

    #include "cfgVehicles.hpp"

};
