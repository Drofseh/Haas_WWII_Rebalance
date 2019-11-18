
    class w39_Magazine;

    class w39_PistolMagazine;

    class w39_VehicleMagazine;

// Pistol magazines
    class w39_9mm_8xPARAVIS : w39_PistolMagazine {
        displayName = "wz. 35 Vis, 8 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 8 Rounds, Ball<br/>For use in the Pistolet wz. 35 Vis";
        ammo = "LIB_B_9x19_Ball";
        mass = 1.86;
    };
    class w39_9mm_8xPARAVIS_Tracer_2PzD : w39_9mm_8xPARAVIS {
        displayName = "wz. 35 Vis, 8 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "9x19mm, 8 Rounds, Tracer<br/>For use in the wz. 35 Vis";
        ammo = "LIB_B_9x19_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 8;
    };
// End Pistol magazines

// Rifle magazines
    class w39_7_92_5xMauserS : w39_Magazine {
        displayName = "Mauser, 5 Round Clip, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 5 Rounds, Ball<br/>For use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_sS_NoCartridge";
        mass = 1.85;
        lastRoundsTracer = 0;
        tracersEvery = 0;
        scope = 1;
    };
    class w39_7_92_5xMauserP : w39_7_92_5xMauserS {
        displayName = "Mauser, 5 Round Clip, AP";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 5 Rounds, AP<br/>For use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_SmK_NoCartridge";
        mass = 1.85;
        lastRoundsTracer = 0;
        tracersEvery = 0;
        scope = 1;
    };

    class w39_7_92_10xMauserS : w39_Magazine {
        displayName = "wz. 38M, 2x 5 Round Clips, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 10 Rounds, Ball<br/>For use in the wz. 38M";
        ammo = "LIB_B_792x57_Ball_sS_NoCartridge";
        mass = 3.7;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class w39_7_92_10xMauserS_Mixed_Ball_2PzD : w39_7_92_10xMauserS {
        displayName = "wz. 38M, 2x 5 Round Clips, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 10 Rounds, Mixed Ball/Tracer<br/>For use in the wz. 38M";
        ammo = "LIB_B_792x57_Mixed_sS_NoCartridge";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class w39_7_92_10xMauserS_SmE_2PzD : w39_7_92_10xMauserS {
        displayName = "wz. 38M, 2x 5 Round Clips, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 10 Rounds, Ball<br/>For use in the wz. 38M";
        ammo = "LIB_B_792x57_Ball_SmE_NoCartridge";
    };
    class w39_7_92_10xMauserS_Mixed_SmE_2PzD : w39_7_92_10xMauserS {
        displayName = "wz. 38M, 2x 5 Round Clips, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 10 Rounds, Mixed Ball/Tracer<br/>For use in the wz. 38M";
        ammo = "LIB_B_792x57_Mixed_SmE_NoCartridge";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class w39_7_92_10xMauserP : w39_7_92_10xMauserS {
        displayName = "wz. 38M, 2x 5 Round Clips, AP";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 10 Rounds, AP<br/>For use in the wz. 38M";
        ammo = "LIB_B_792x57_Ball_SmK_NoCartridge";
        mass = 3.7;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class w39_7_92_10xMauserP_Mixed_AP_2PzD : w39_7_92_10xMauserS {
        displayName = "wz. 38M, 2x 5 Round Clips, AP/Tracer";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 10 Rounds, Mixed AP/Tracer<br/>For use in the wz. 38M";
        ammo = "LIB_B_792x57_Mixed_SmK_NoCartridge";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class w39_7_92_10xMauserS_Tracer_2PzD : w39_7_92_10xMauserS {
        displayName = "wz. 38M, 2x 5 Round Clips, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 10 Rounds, Tracer<br/>For use in the wz. 38M";
        ammo = "LIB_B_792x57_Tracer_NoCartridge";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };

    class w39_7_92_4x107DS : w39_Magazine {
        displayName = "wz.35, 4 Rounds, AP";
        displayNameShort = "AP";
        descriptionShort = "7.92x107mm, 4 Rounds, AP<br/>For use in the wz.35";
        count = 4;
        mass = 5.67;
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
// End Rifle magazines

// SMG magazines
    class w39_9_MM_24xPARA : w39_Magazine {
        displayName = "wz. 38M, 24 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 24 Rounds, Ball<br/>For use in the wz. 38M";
        ammo = "LIB_B_9x19_Ball";
        mass = 4.59;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class w39_9_MM_24xPARA_Tracer_2PzD : w39_9_MM_24xPARA {
        displayName = "wz. 38M, 24 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "9x19mm, 24 Rounds, Tracer<br/>For use in the wz. 38M";
        ammo = "LIB_B_9x19_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 24;
    };
// End SMG magazines

// MG magazines
    class w39_7_92_20xMauserS : w39_7_92_5xMauserS {
        displayName = "wz. 28, 20 Round Magazine, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 50 Rounds, Mixed Ball/Tracer<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Mixed_sS";
        mass = 5.6;
        tracersEvery = 3;
        lastRoundsTracer = 3;
    };
    class w39_7_92_20xMauserS_Ball_NoTrace_2PzD : w39_7_92_20xMauserS {
        displayName = "wz. 28, 20 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 50 Rounds, Ball<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_sS";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class w39_7_92_20xMauserS_SmE : w39_7_92_20xMauserS {
        displayName = "wz. 28, 20 Round Magazine, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 50 Rounds, Mixed Ball/Tracer (sS Patrone/LS L'spur)<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Mixed_SmE";
    };
    class w39_7_92_20xMauserS_SmE_NoTrace_2PzD : w39_7_92_20xMauserS {
        displayName = "wz. 28, 20 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 50 Rounds, Ball (sS Patrone)<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SmE";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class w39_7_92_20xMauserP : w39_7_92_20xMauserS {
        displayName = "wz. 28, 20 Round Magazine, AP/Tracer";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 50 Rounds, Mixed AP/Tracer (SmK/LS L'spur)<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Mixed_SmK";
    };
    class w39_7_92_20xMauseeP_AP_NoTrace_2PzD : w39_7_92_20xMauserP {
        displayName = "wz. 28, 20 Round Magazine, AP";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 50 Rounds, AP<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SmK";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class w39_7_92_20xMauserS_TraceOnly_2PzD : w39_7_92_20xMauserS {
        displayName = "wz. 28, 20 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 50 Rounds, Tracer<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Tracer";
        tracersEvery = 1;
        lastRoundsTracer = 1;
    };
// End MG magazines

// Other magazines
// End Other magazines

// Vehicle magazines
// End Vehicle magazines
