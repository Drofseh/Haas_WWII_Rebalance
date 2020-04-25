    class CSA38_GrenadeHand;
    
    class CSA38_SmokeShell : CSA38_GrenadeHand {
        effectsSmoke = "SmokeShellWhiteEffect";
        timeToLive = 120;
    };

    class CSA38_Smokegrenade : CSA38_SmokeShell {
        explosionTime = 4.5;
        timeToLive = 120;
    };
    
    class CSA38_SmokegrenadeRed : CSA38_Smokegrenade {
        //smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
        effectsSmoke = "SmokeShellRedEffect";
    };
/*
    class CSA38_SmokegrenadeG : CSA38_Smokegrenade {
    };
*/
    class CSA38_shg24ammo: CSA38_GrenadeHand {
        explosionTime = 4.5;
        ace_frag_charge = 170;
        ace_frag_gurney_c = 2440 ;
        ace_frag_gurney_k = 1/2;
        ace_frag_metal = 300;
    };
    class CSA38_shg24tammo: CSA38_GrenadeHand {
        explosionTime = 4.5;
        ace_frag_charge = 170;
        ace_frag_classes[] = {"ace_frag_tiny_HD"};
        ace_frag_gurney_c = 2440 ;
        ace_frag_gurney_k = 1/2;
        ace_frag_metal = 100;
    };
