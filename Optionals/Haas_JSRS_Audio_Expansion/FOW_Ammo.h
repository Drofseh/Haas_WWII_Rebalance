//Bullets
    class fow_B_303_Ball : BulletBase {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerColor[] = {0.7,0.7,0.5,0.04};
        tracerColorR[] = {0.7,0.7,0.5,0.04};
        tracerEndTime = 3;
        tracerScale = 1.5;
        tracerStartTime = 0.073;
    };

    class fow_B_762x63_Ball : BulletBase {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerColor[] = {0.7,0.7,0.5,0.04};
        tracerColorR[] = {0.7,0.7,0.5,0.04};
        tracerEndTime = 4.5;
        tracerScale = 1.5;
        tracerStartTime = 0.073;
    };

//Grenades/Explosives
    class fow_e_m24 : GrenadeHand {
        explosionTime = 4.5;
        ace_frag_charge = 170;
        ace_frag_classes[] = {"ace_frag_tiny_HD"};
        ace_frag_gurney_c = 2440 ;
        ace_frag_gurney_k = 1/2;
        ace_frag_metal = 100;
    };

    class fow_e_m24_at : GrenadeHand {
        explosionTime = 4.5;
        ace_frag_charge = 1155;
        ace_frag_classes[] = {"ace_frag_tiny_HD"};
        ace_frag_gurney_c = 2440 ;
        ace_frag_gurney_k = 3/5;
        ace_frag_metal = 300;
    };

    class fow_e_m24_spli : GrenadeHand {
        explosionTime = 4.5;
        ace_frag_charge = 170;
        ace_frag_gurney_c = 2440 ;
        ace_frag_gurney_k = 1/2;
        ace_frag_metal = 300;
    };

    class fow_e_m24K : fow_e_m24 {
        explosionTime = 4.5;
        ace_frag_charge = 170;
        ace_frag_classes[] = {"ace_frag_tiny_HD"};
        ace_frag_gurney_c = 2100;
        ace_frag_gurney_k = 1/2;
        ace_frag_metal = 100;
    };

    class fow_e_m24K_at : fow_e_m24_at {
        explosionTime = 4.5;
        ace_frag_charge = 1155;
        ace_frag_classes[] = {"ace_frag_tiny_HD"};
        ace_frag_gurney_c = 2100;
        ace_frag_gurney_k = 3/5;
        ace_frag_metal = 300;
    };

    class fow_e_m24K_spli : fow_e_m24_spli {
        explosionTime = 4.5;
        ace_frag_charge = 170;
        ace_frag_gurney_c = 2100;
        ace_frag_gurney_k = 1/2;
        ace_frag_metal = 300;
    };

    class fow_e_mk2 : GrenadeHand {
        explosionTime = 5;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = 3/5;
        ace_frag_metal = 400;
    };

    class fow_e_nb39b : SmokeShell {
        effectsSmoke = "SmokeShellWhiteEffect";
        explosionEffects = "NoExplosion";
        explosionTime = 4.5;
        timeToLive = 120;
    };

    class fow_e_no36mk1 : GrenadeHand {
        explosionTime = 4;
        ace_frag_charge = 224;
        ace_frag_gurney_c = 2908;
        ace_frag_gurney_k = 3/5;
        ace_frag_metal = 220;
    };

    class fow_e_no69 : GrenadeHand {
        explosionTime = 0;
        fuseDistance = 0.5;
    };

    class fow_e_no73 : GrenadeHand {
        explosionTime = 0;
        fuseDistance = 0.5;
    };

    class fow_e_no77 : SmokeShell {
        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        hit = 0;
        indirectHit = 2;
        indirectHitRange = 2;
        explosionTime = 0;
        fuseDistance = 2;
        explosionEffects = "LIB_WPExplosion";
        //explosionEffects = "FOW_no79_Grenade_Effects";
        timeToLive = 90;
        LIB_WP_Delay = 0.8;
        LIB_WP_Intensity = 0.08;
        LIB_WP_BurnTime = 35;
        LIB_WP_Range = 2;
        class EventHandlers {
            class WW2_GAS {
                fired = "_this spawn WW2_fnc_fired_Gas";
            };
        };
    };

    class fow_e_no79 : SmokeShell {
        hit = 1;
        indirectHit = 0;
        indirectHitRange = 0;
        explosionTime = 0;
        fuseDistance = 0.5;
        simulation = "shotDeploy";
        submunitionAmmo = "fow_e_no79_Smoke";
        //submunitionAmmo = "SmokeShellArty";
    };
    class fow_e_no79_Smoke : SmokeShell {
        effectsSmoke = "SmokeShellWhiteEffect";
        explosionTime = 0.1;
        model = "\fow\fow_weapons\explosives\HLS_UK_No79_Thrown.p3d";
        scope = 1;
        simulation = "shotSmoke";
        submunitionAmmo = "";
        timeToLive = 130;
    };

    class fow_e_no82 : GrenadeHand {
        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        explosionTime = 0;
        fuseDistance = 0.5;
    };

    class fow_e_type97 : GrenadeHand {
        explosionTime = 4.5;
        ace_frag_charge = 65;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = 1/2;
        ace_frag_metal = 257;
    };

    class fow_e_type99 : GrenadeHand {
        explosionTime = 4.5;
        ace_frag_charge = 58;
        ace_frag_gurney_c = 2600;
        ace_frag_gurney_k = 1/2;
        ace_frag_metal = 161;
    };

    class fow_e_type99_at : GrenadeHand {
        explosionTime = 9;
    };
