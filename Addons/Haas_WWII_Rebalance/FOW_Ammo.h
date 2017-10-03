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

    class fow_e_m24 : GrenadeHand {
        ace_frag_charge = 170;
        ace_frag_classes[] = {"ace_frag_tiny_HD"};
        ace_frag_gurney_c = 2440 ;
        ace_frag_metal = 50;
    };

    class fow_e_m24_at : GrenadeHand {
        ace_frag_charge = 1155;
        ace_frag_classes[] = {"ace_frag_tiny_HD"};
        ace_frag_gurney_c = 2440 ;
        ace_frag_metal = 250;
    };

    class fow_e_m24_spli : GrenadeHand {
        ace_frag_charge = 170;
        ace_frag_gurney_c = 2440 ;
        ace_frag_metal = 449;
    };

    class fow_e_m24K : fow_e_m24 {
        ace_frag_charge = 170;
        ace_frag_classes[] = {"ace_frag_tiny_HD"};
        ace_frag_gurney_c = 2100;
        ace_frag_metal = 50;
    };

    class fow_e_m24K_at : fow_e_m24_at {
        ace_frag_charge = 1155;
        ace_frag_classes[] = {"ace_frag_tiny_HD"};
        ace_frag_gurney_c = 2100;
        ace_frag_metal = 250;
    };

    class fow_e_m24K_spli : fow_e_m24_spli {
        ace_frag_charge = 170;
        ace_frag_gurney_c = 2100;
        ace_frag_metal = 449;
    };