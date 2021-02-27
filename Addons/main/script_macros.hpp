#include "\z\ace\addons\main\script_macros.hpp"

#define MOA_TO_RAD(d) ((d) * 0.00029088)
// dispersion = MOA_TO_RAD(4);

#define RPM_TO_TIME(rpm) (60 / (rpm))
// reloadTime = RPM_TO_TIME(650);

#define ZOOM_NAKED_EYE \
    opticsZoomInit = 0.75; \
    opticsZoomMax = 1.25; \
    opticsZoomMin = 0.25
// ZOOM_NAKED_EYE;

#define ZOOM_POWER(min, init, max) \
    opticsZoomInit = (0.25 / (init)); \
    opticsZoomMax = (0.25 / (max)); \
    opticsZoomMin = (0.25 / (min))
// ZOOM_POWER(3, 3, 3);

#define QUOTE(var1) #var1

#define YEAR(x) class Number##x { \
    name = QUOTE(x); \
    value = x; \
}

#define REQUIRED_ADDONS_ARRAY \
    "A3_Data_F_Enoch_Loadorder", \
    "A3_Data_F_Mod_Loadorder", \
    "A3_Weapons_F", \
    "ace_captives", \
    "ace_common", \
    "ace_frag", \
    "ace_overpressure", \
    "CSA38II_weapons_c", \
    "CSA38II_weapons2_c", \
    "fow_characters_c", \
    "fow_functions", \
    "fow_main", \
    "fow_statics_c", \
    "fow_weapons_c", \
    "IFA3_COMP_ACE_main", \
    "len_ifa3_wp", \
    "len_ifa3_wp_data", \
    "w39_bron_c", \
    "ww2_core_c_if_zzz_lastloaded_c"
