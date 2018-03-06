class CfgPatches {
    class Haas_Command_Vics {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        requiredVersion = 0.1;
        requiredAddons[] = {"FOW_ACRE2_Compat","Haas_WWII_Rebalance","IFA3_ACRE2_Compat"};
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        ammo[] = {};
    };
};

class cfgVehicles {

    // #include "FOW_Boats.hpp"

    #include "FOW_Tanks.hpp"

    #include "FOW_Wheeled.hpp"

    #include "FOW_WheeledTracked.hpp"

    // #include "LIB_Boats.hpp"

    // #include "LIB_Planes.hpp"

    #include "LIB_Tanks.hpp"

    #include "LIB_Wheeled.hpp"

    #include "LIB_WheeledTracked_APC_base.hpp"

};
