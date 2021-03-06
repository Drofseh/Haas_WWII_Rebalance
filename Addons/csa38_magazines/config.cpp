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
        magazines[] = {
            "CSA38_7_7_100x56R_AP_NoTrace_2PzD",
            "CSA38_7_7_100x56R_MKVIII_2PzD",
            "CSA38_7_7_100x56R_MKVIII_NoTrace_2PzD",
            "CSA38_7_7_100x56R_NoTrace_2PzD",
            "CSA38_7_7_100x56R_Tracer_2PzD",
            "CSA38_7_92_20xMauserCZ2_Mixed_AP_2PzD",
            "CSA38_7_92_20xMauserCZ_Mixed_Ball_2PzD",
            "CSA38_7_92_20xMauserCZ_Mixed_SmE_2PzD",
            "CSA38_7_92_20xMauserCZ_SmE_2PzD",
            "CSA38_7_92_20xMauserCZ_Tracer_2PzD",
            "CSA38_7_92_20xMauser_AP_NoTrace_2PzD",
            "CSA38_7_92_20xMauser_Ball_NoTrace_2PzD",
            "CSA38_7_92_20xMauser_SmE_2PzD",
            "CSA38_7_92_20xMauser_SmE_NoTrace_2PzD",
            "CSA38_7_92_20xMauser_TraceOnly_2PzD",
            "CSA38_7_92_30xMauser_2PzD",
            "CSA38_7_92_30xMauser_AP_2PzD",
            "CSA38_7_92_30xMauser_AP_NoTrace_2PzD",
            "CSA38_7_92_30xMauser_Ball_NoTrace_2PzD",
            "CSA38_7_92_30xMauser_SmE_2PzD",
            "CSA38_7_92_30xMauser_SmE_NoTrace_2PzD",
            "CSA38_7_92_30xMauser_TraceOnly_2PzD",
            "CSA38_7_92_5xMauser2_Mixed_AP_2PzD",
            "CSA38_7_92_5xMauser_Mixed_Ball_2PzD",
            "CSA38_7_92_5xMauser_Tracer_2PzD",
            "csa38_7_92_20xMauserKAR_Mixed_SmE_2PzD",
            "csa38_7_92_20xMauserKAR_Mixed_SmK_2PzD",
            "csa38_7_92_20xMauserKAR_Mixed_sS_2PzD",
            "csa38_7_92_20xMauserKAR_SmE_2PzD",
            "csa38_7_92_20xMauserKAR_Tracer_2PzD",
            "csa38_7_92_30xMauserMG_SmE_NoTrace_2PzD",
            "csa38_7_92_30xMauserMG_SmK_NoTrace_2PzD",
            "csa38_7_92_30xMauserMG_TraceOnly_2PzD",
            "csa38_7_92_30xMauserMG_sS_NoTrace_2PzD",
            "csa38_8x56_25xMannlicherMG_SmE_NoTrace_2PzD",
            "csa38_8x56_25xMannlicherMG_SmK_NoTrace_2PzD",
            "csa38_8x56_25xMannlicherMG_TraceOnly_2PzD",
            "csa38_8x56_25xMannlicherMG_sS_NoTrace_2PzD",
            "csa38_9_MM_20xMP28_Tracer_2PzD",
            "csa38_9_MM_20xMP35_2PzD",
            "csa38_9_MM_20xMP35_Tracer_2PzD",
            "csa38_9_MM_24xMP35_2PzD",
            "csa38_9_MM_24xMP35_Tracer_2PzD",
            "csa38_9_MM_32xMP18_Tracer_2PzD",
            "csa38_9_MM_32xMP28_Tracer_2PzD",
            "csa38_9_MM_32xMP35_Tracer_2PzD"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

class cfgMagazines {

    #include "cfgMagazines.hpp"

};
