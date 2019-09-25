
    class LIB_Bullet_base;

    class LIB_B_762x54_Ball_t46;

    class LIB_B_762x54_Ball_t46_NoCartridge : LIB_B_762x54_Ball_t46 {
        cartridge = "";
    };

    class LIB_B_792x57_Ball_NoCartridge;

    class LIB_B_792x57_Ball_t_NoCartridge : LIB_B_792x57_Ball_NoCartridge {
        cartridge = "";
    };

    class LIB_B_792x57_Ball;

    class LIB_B_792x57_Ball_t : LIB_B_792x57_Ball {};

    class LIB_B_770x56_Ball_NoCartridge; // .303

    class LIB_B_770x56_Ball_NoCartridge_AP : LIB_B_770x56_Ball_NoCartridge {
        caliber = 1.16;
    };

    class LIB_B_77x58_Ball_NoCartridge : LIB_B_770x56_Ball_NoCartridge {
        cartridge = "";
};

    class LIB_B_770x56_Ball; // .303

    class LIB_B_770x56_Ball_AP : LIB_B_770x56_Ball {
        caliber = 1.16;
    };

    class LIB_B_77x58_Ball : LIB_B_770x56_Ball {};

    class LIB_B_765x17_Ball : LIB_Bullet_base { // .32 ACP
        hit = 2.8;
    };

    class LIB_B_9x17_Ball : LIB_B_765x17_Ball { // .380 ACP
        hit = 3.2;
    };

    class LIB_B_765x20_Ball : LIB_B_765x17_Ball { // 7.65x20mm Longue
        hit = 3;
    };

    class LIB_B_635x16_Ball : LIB_B_765x17_Ball { // .25 ACP
        hit = 2.4;
    };

    class LIB_B_38_200_Ball : LIB_B_765x17_Ball { // .38/200
        hit = 3;
    };

    class LIB_B_9x18_Ball;

    class LIB_B_9x19_Ball; /* : LIB_B_9x18_Ball {

    };*/

    class LIB_B_145x144_Ball : LIB_Bullet_base {
        hit = 120;
        indirectHit = 5;
        indirectHitRange = 0.25;
        explosive = 0.05
    };

    class LIB_M2_Flamethrower_Ammo : BulletBase_NonAceAB {
        timetolive = "1";
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

//Grenades, Explosives, Rockets
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

    class LIB_No77 : LIB_GrenadeHand_base {
        hit = 0;
        indirectHit = 2;
        indirectHitRange = 1.5;
        explosionTime = 0;
        fuseDistance = 2;
        explosionEffects = "LIB_WPExplosion";
        //explosionEffects = "FOW_no79_Grenade_Effects";
        timeToLive = 90;
        LIB_WP_Delay = 0.8;
        LIB_WP_Intensity = 0.08;
        LIB_WP_BurnTime = 35;
        LIB_WP_Range = 2;
    };

    class LIB_No82 : LIB_GrenadeHand_base {
        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        explosionTime = 0;
        fuseDistance = 0.5;
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
        indirectHitRange = 5;
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
