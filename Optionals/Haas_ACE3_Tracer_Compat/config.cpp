class CfgPatches {
    class Haas_Tracer_Compat {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"ace_tracers","Haas_WWII_Rebalance"};
    };
 };

class cfgAmmo {

/*
    // 30mm or smaller
        model = "\z\ace\addons\tracers\ace_TracerRed2.p3d";
        model = "\z\ace\addons\tracers\ace_TracerGreen2.p3d";
        model = "\z\ace\addons\tracers\ace_TracerYellow2.p3d";
        model = "\z\ace\addons\tracers\ace_TracerWhite2.p3d";

    // bigger than 30mm
        model = "\z\ace\addons\tracers\ace_shell_tracer_red.p3d";
        model = "\z\ace\addons\tracers\ace_shell_tracer_green.p3d";
        model = "\z\ace\addons\tracers\ace_shell_tracer_yellow.p3d";
        model = "\z\ace\addons\tracers\ace_shell_tracer_white.p3d";
*/

    class BulletBase;
    class FlareBase;
    class ShellBase;
    class SubmunitionBullet;

    class B_45ACP_Ball;
    class B_9x21_Ball;
    class B_762x51_Ball;
    class Sh_155mm_AMOS;

    #include "FOW_Ammo.h"

    #include "LIB_Ammo.h"

    #include "LEN_Ammo.h"

    #include "CSA_Ammo.h"

};
