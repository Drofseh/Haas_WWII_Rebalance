
// Pistol magazines
// End Pistol magazines

// Rifle magazines
// End Rifle magazines

// SMG magazines
// End SMG magazines

// MG magazines
// End MG magazines

// Other magazines
// End Other magazines

// Vehicle magazines
// End Vehicle magazines

    class LEN_10Rnd_303 : 20Rnd_762x51_Mag {
        displayName = "Lee Enfield, 10 Round Clip";
        displayNameShort = ".303 British";
        descriptionShort = ".303 British, 10 Rounds, for use in the Lee Enfield";
        mass = 6;
        scope = 1;
    };

    class LEN_13Rnd_9x19 : lib_8Rnd_9x19 {
        displayName = "Browning Hi-Power, 13 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 13 Rounds, for use in the Browning Hi-Power";
        mass = 1.86;
        scope = 1;
    };

    class LEN_20Rnd_792x57 : lib_10Rnd_792x57 {
        displayName = "FG42, 20 Round Magazine";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 20 Rounds, for use in the FG42";
        mass = 6.52;
        scope = 1;
    };

    class LEN_30Rnd_45ACP_M3 : LIB_30Rnd_45ACP {
        displayName = "M3 Grease Gun, 30 Round Magazine";
        displayNameShort = ".45 ACP";
        descriptionShort = ".45 ACP, 30 Rounds, for use in the M3 Grease Gun";
        mass = 10.36;
        scope = 1;
    };

    class LEN_32Rnd_9x19 : lib_32Rnd_9x19 {
        displayName = "Sten Gun, 32 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 32 Rounds, for use in the Sten Gun";
        mass = 6.11;
        scope = 1;
    };

    class LEN_35Rnd_762x25_2PzD : LIB_35Rnd_762x25 {
        displayName = "PPS-43, 35 Round Magazine";
        displayNameShort = "7.62x25mm";
        descriptionShort = "7.62x25mm, 35 Rounds, for use in the PPS-43";
        mass = 4.76;
    };

    class LEN_6Rnd_12G_Slug : CA_Magazine {
        displayName = "Shotgun Slugs, 12 Gauge, 5";
        displayNameShort = "Slugs";
        descriptionShort = "Slugs, 5 Rounds, for use in the Winchester M12";
        count = 5;
        mass = 2.5;
        scope = 1;
    };

    class LEN_6Rnd_12G_Pellets : LEN_6Rnd_12G_Slug {
        displayName = "Shotgun Buckshot, 12 Gauge, 5";
        displayNameShort = "Buckshot";
        descriptionShort = "Buckshot, 5 Rounds, for use in the Winchester M12";
        count = 5;
        mass = 2.5;
        scope = 1;
    };

    class LEN_7Rnd_765x17 : 16Rnd_9x21_Mag {
        displayName = "Walther PPK, 7 Round Magazine";
        displayNameShort = ".32 ACP";
        descriptionShort = ".32 ACP, 7 Rounds, for use in the Walther PPK";
        ammo = "LIB_B_765x17_Ball";
        mass = 1.31;
        scope = 1;
    };
    class LEN_8Rnd_765x17_2PzD : LEN_7Rnd_765x17 {
        displayName = "Welrod Mk II, 8 Round Magazine";
        displayNameShort = ".32 ACP";
        descriptionShort = ".32 ACP, 8 Rounds, for use in the Welrod Mk II";
        ammo = "LIB_B_765x17_Ball";
        count = 8;
        mass = 1.5;
        scope = 2;
    };

    class LEN_8Rnd_9x19_2PzD : LIB_8Rnd_9x19 {
        displayName = "wz. 35 Vis, 8 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 8 Rounds, for use in the Pistolet wz. 35 Vis";
        mass = 1.86;
        scope = 2;
    };