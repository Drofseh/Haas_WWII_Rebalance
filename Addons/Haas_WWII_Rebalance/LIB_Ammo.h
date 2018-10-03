
    class LIB_M2_Flamethrower_Ammo : BulletBase {
        timetolive = "3";
    };

    class LIB_40mm_White;
    class LIB_40mm_Blue : LIB_40mm_White {
        lightColor[] = {0,0.25,0.5,0.5};
    };
    class LIB_40mm_Orange : LIB_40mm_White {
        lightColor[] = {0.5,0.25,0.1,0.5};
    };
    class LIB_40mm_Purple : LIB_40mm_White {
        lightColor[] = {0.3,0.1,0.5,0.5};
    };

//Grenades
    class LIB_GrenadeHand_base;
    class LIB_SmokeShell_base;

    class LIB_F1 : LIB_GrenadeHand_base {
        explosionTime = 3.7;
        ace_frag_charge = 60;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = 3/5;
        ace_frag_metal = 290;
    };

    class LIB_M39 : LIB_GrenadeHand_base {
        explosionTime = 4.5;
        ace_frag_charge = 112;
        ace_frag_gurney_c = 2908;
        ace_frag_gurney_k = 3/5;
        ace_frag_metal = 290;
    };

    class LIB_NB39 : LIB_SmokeShell_base {
        effectsSmoke = "SmokeShellWhiteEffect";
        explosionEffects = "NoExplosion";
        explosionTime = 4.5;
        timeToLive = 120;
    };

    class LIB_PWM : LIB_GrenadeHand_base {
        ace_frag_charge = 520;
        ace_frag_classes[] = {"ace_frag_tiny_HD"};
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = 3/5;
        ace_frag_metal = 300;
    };

    class LIB_RDG : LIB_SmokeShell_base {
        explosionTime = 0.1;
    };

    class LIB_Rg42 : LIB_GrenadeHand_base {
        explosionTime = 3.7;
        ace_frag_charge = 200;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = 3/5;
        ace_frag_metal = 150;
    };

    class LIB_Rpg6 : LIB_GrenadeHand_base {
        ace_frag_charge = 562;
        ace_frag_classes[] = {"ace_frag_tiny_HD"};
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = 3/5;
        ace_frag_metal = 350;
    };

    class LIB_SHG24 : LIB_GrenadeHand_base {
        explosionTime = 4.5;
        ace_frag_charge = 170;
        ace_frag_classes[] = {"ace_frag_tiny_HD"};
        ace_frag_gurney_c = 2440 ;
        ace_frag_gurney_k = 1/2;
        ace_frag_metal = 100;
    };

    class LIB_SHG24x7 : LIB_GrenadeHand_base {
        explosionTime = 4.5;
        ace_frag_charge = 1155;
        ace_frag_classes[] = {"ace_frag_tiny_HD"};
        ace_frag_gurney_c = 2440 ;
        ace_frag_gurney_k = 3/5;
        ace_frag_metal = 300;
    };

    class LIB_US_M18 : LIB_SmokeShell_base {
        explosionTime = 1.6;
        timeToLive = 130;
    };

    class LIB_US_M18_Green : LIB_SmokeShell_base {
        explosionTime = 1.6;
        timeToLive = 70;
    };

    class LIB_US_M18_Red : LIB_SmokeShell_base {
        explosionTime = 1.6;
        timeToLive = 70;
    };

    class LIB_US_M18_Yellow : LIB_SmokeShell_base {
        explosionTime = 1.6;
        timeToLive = 70;
    };

    class LIB_US_Mk_2 : LIB_GrenadeHand_base {
        explosionTime = 5;
        ace_frag_charge = 52;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = 3/5;
        ace_frag_metal = 400;
    };

//Vehicle Ammo
    class LIB_Bullet_Plane_base;

    class LIB_B_13x64_Ball : LIB_Bullet_Plane_base {
        indirectHit = 5;
        indirectHitRange = 0.5;
        explosive = 0.2;
        explosionEffects = "ExploAmmoExplosion";
    };

    class LIB_R_M8 : R_60mm_HE {
        ace_frag_skip = 0;
        hit = 250;
        indirectHit = 50;
    };

    class LIB_Bomb_base;

    class LIB_SC50_Bomb : LIB_Bomb_base {
        hit = 500;
        indirectHit = 200;
        indirectHitRange = 12;
    };

    class LIB_US_500lb_Bomb : LIB_Bomb_base {
        hit = 2500;
        indirectHit = 1000;
        indirectHitRange = 25;
    };

    class LIB_FAB250_Bomb : LIB_Bomb_base {
        hit = 2500;
        indirectHit = 1000;
        indirectHitRange = 25;
    };

    class LIB_FAB500_Bomb : LIB_Bomb_base {
        hit = 5000;
        indirectHit = 2000;
        indirectHitRange = 50;
    };
