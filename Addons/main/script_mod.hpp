// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX haas_wwii_rebalance

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

#define HAAS_WWII_REBALANCE_TAG HAAS_WWII_REBALANCE

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.56

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(haas_wwii_rebalance - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(haas_wwii_rebalance - COMPONENT)
#endif
