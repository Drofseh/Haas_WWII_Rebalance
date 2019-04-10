
    class w39_Magazine;

    class w39_PistolMagazine;

    class w39_VehicleMagazine;

// Pistol magazines
    class w39_9mm_8xPARAVIS: w39_PistolMagazine {
        displayName = "wz. 35 Vis, 8 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 8 Rounds, for use in the Pistolet wz. 35 Vis";
        ammo = "LIB_B_9x19_Ball";
        mass = 1.86;
        scope = 1;
    };
// End Pistol magazines

// Rifle magazines
    class w39_7_92_5xMauserS: w39_Magazine {
        displayName = "Mauser, 5 Round Clip";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 5 Rounds, for use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_NoCartridge";
        mass = 1.85;
        lastRoundsTracer = 0;
        tracersEvery = 0;
    };

    class w39_7_92_5xMauserP: w39_7_92_5xMauserS {
        displayName = "Mauser, 5 Round Clip, AP";
        displayNameShort = "7.92x57mm AP";
        descriptionShort = "7.92x57mm, 5 Rounds, AP, for use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_SMK_NoCartridge";
        mass = 1.85;
        lastRoundsTracer = 0;
        tracersEvery = 0;
    };

    class w39_7_92_10xMauserS: w39_Magazine {
        displayName = "Mauser, 2x 5 Round Clips";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 10 Rounds, for use in the wz. 38M";
        ammo = "LIB_B_792x57_Ball";
        mass = 3.7;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class w39_7_92_10xMauserP: w39_7_92_10xMauserS {
        displayName = "Mauser, 2x 5 Round Clips, AP";
        displayNameShort = "7.92x57mm AP";
        descriptionShort = "7.92x57mm, 10 Rounds, AP, for use in the wz. 38M";
        ammo = "LIB_B_792x57_Ball_SMK";
        mass = 3.7;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class w39_7_92_4x107DS : w39_Magazine {
        displayName = "wz.35, 4 Rounds, AP";
        displayNameShort = "7.92x107mm AP";
        descriptionShort = "7.92x107mm, 4 Rounds, AP, for use in the wz.35";
        count = 4;
        mass = 5.67;
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
// End Rifle magazines

// SMG magazines
    class w39_9_MM_24xPARA: w39_Magazine {
        displayName = "wz. 38M, 24 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 24 Rounds, for use in the wz. 38M";
        ammo = "LIB_B_9x19_Ball";
        mass = 4.59;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
// End SMG magazines

// MG magazines
    class w39_7_92_20xMauserS: w39_7_92_5xMauserS {
        displayName = "wz. 28, 20 Round Magazine";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 20 Rounds, for use in the wz. 28";
        ammo = "LIB_B_792x57_Ball";
        mass = 5.6;
        lastRoundsTracer = 0;
        tracersEvery = 3;
    };

    class w39_7_92_20xMauserP: w39_7_92_20xMauserS {
        displayName = "wz. 28, 20 Round Magazine, AP";
        displayNameShort = "7.92x57mm AP";
        descriptionShort = "7.92x57mm, 20 Rounds, AP, for use in the wz. 28";
        ammo = "LIB_B_792x57_Ball_SMK";
        mass = 5.6;
        lastRoundsTracer = 0;
        tracersEvery = 3;
    };
// End MG magazines

// Other magazines
// End Other magazines

// Vehicle magazines
// End Vehicle magazines
