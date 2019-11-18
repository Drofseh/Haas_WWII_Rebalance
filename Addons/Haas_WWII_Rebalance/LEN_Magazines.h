
// Pistol magazines
    class LEN_13Rnd_9x19 : lib_8Rnd_9x19 {
        displayName = "Browning Hi-Power, 13 Round Magazine, Ball (Mk Iz)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 13 Rounds, Ball (Mk Iz)<br/>For use in the Browning Hi-Power";
        ammo = "LIB_B_9x19_Ball";
        mass = 1.86;
        scope = 1;
    };

    class LEN_7Rnd_765x17 : 16Rnd_9x21_Mag {
        displayName = "Walther PPK, 7 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = ".32 ACP, 7 Rounds, Ball<br/>For use in the Walther PPK";
        ammo = "LIB_B_765x17_Ball";
        mass = 1.31;
        scope = 1;
    };
    class LEN_8Rnd_765x17_2PzD : LEN_7Rnd_765x17 {
        displayName = "Welrod Mk II, 8 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = ".32 ACP, 8 Rounds, Ball<br/>For use in the Welrod Mk II";
        ammo = "LIB_B_765x17_Ball";
        count = 8;
        mass = 1.5;
        scope = 2;
    };

    class LEN_8Rnd_9x19_2PzD : LIB_8Rnd_9x19 {
        displayName = "wz. 35 Vis, 8 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 8 Rounds, Ball<br/>For use in the Pistolet wz. 35 Vis";
        ammo = "LIB_B_9x19_Ball";
        mass = 1.86;
        scope = 1;
    };
// End Pistol magazines

// Rifle magazines
    class LEN_10Rnd_303 : 20Rnd_762x51_Mag {
        displayName = "Lee Enfield, 2x 5 Round Clips, Ball (Mk VIIz)";
        displayNameShort = "Ball";
        descriptionShort = ".303 British, 10 Rounds, Ball (Mk VIIz)<br/>For use in the Lee Enfield";
        mass = 6;
        scope = 1;
    };

    class LEN_20Rnd_792x57 : lib_10Rnd_792x57 {
        displayName = "FG42, 20 Round Magazine, Ball (SmE)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 20 Rounds, Ball (SmE)<br/>For use in the FG42";
        ammo = "LIB_B_792x57_Ball";
        mass = 6.52;
        scope = 1;
    };
// End Rifle magazines

// SMG magazines
    class LEN_30Rnd_45ACP_M3 : LIB_30Rnd_45ACP {
        displayName = "M3 Grease Gun, 30 Round Magazine, Ball (M1911)";
        displayNameShort = "Ball";
        descriptionShort = ".45 ACP, 30 Rounds, Ball (M1911)<br/>For use in the M3 Grease Gun";
        ammo = "LIB_B_45ACP_Ball";
        mass = 10.36;
        scope = 1;
    };

    class LEN_32Rnd_9x19 : lib_32Rnd_9x19 {
        displayName = "Sten Gun, 32 Round Magazine, Ball (Mk Iz)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 32 Rounds, Ball (Mk Iz)<br/>For use in the Sten Gun";
        ammo = "LIB_B_9x19_Ball";
        mass = 6.11;
        scope = 1;
    };

    class LEN_35Rnd_762x25_2PzD : LIB_35Rnd_762x25 {
        displayName = "PPS-43, 35 Round Magazine, Ball (Type P)";
        displayNameShort = "Ball";
        descriptionShort = "7.62x25mm, 35 Rounds, Ball (Type P)<br/>For use in the PPS-43";
        ammo = "LIB_B_762x25_Ball";
        mass = 4.76;
    };
    class LEN_35Rnd_762x25_AP_2PzD : LEN_35Rnd_762x25_2PzD {
        displayName = "PPS-43, 35 Round Magazine, APT (Type P-41)";
        displayNameShort = "APT";
        descriptionShort = "7.62x25mm, 35 Rounds, APT (Type P-41)<br/>For use in the PPS-43";
        ammo = "LIB_B_762x25_p41";
        tracersEvery = 1;
        lastRoundsTracer = 35;
    };
    class LEN_35Rnd_762x25_Tracer_2PzD : LEN_35Rnd_762x25_2PzD {
        displayName = "PPS-43, 35 Round Magazine, Tracer (Type PT)";
        displayNameShort = "Tracer";
        descriptionShort = "7.62x25mm, 35 Rounds, Tracer (Type PT)<br/>For use in the PPS-43";
        ammo = "LIB_B_762x25_pt";
        tracersEvery = 1;
        lastRoundsTracer = 35;
    };
    class LEN_35Rnd_762x25_Mixed_Ball_Tracer_2PzD : LEN_35Rnd_762x25_2PzD {
        displayName = "PPS-43, 35 Round Magazine, Ball/Tracer (Type P/Type PT)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.62x25mm, 35 Rounds, Mixed Ball/Tracer (Type P/Type PT)<br/>For use in the PPS-43";
        ammo = "LIB_B_762x25_Mixed_pt";
        tracersEvery = 4;
        lastRoundsTracer = 1;
    };
// End SMG magazines

// MG magazines
// End MG magazines

// Other magazines
    class LEN_6Rnd_12G_Slug : CA_Magazine {
        displayName = "12 Gauge, Slugs, 5 rounds";
        displayNameShort = "Slugs";
        descriptionShort = "Slugs, 5 Rounds<br/>For use in the Winchester M12";
        ammo = "B_12Gauge_Slug";
        count = 5;
        mass = 2.5;
        scope = 1;
    };

    class LEN_6Rnd_12G_Pellets : LEN_6Rnd_12G_Slug {
        displayName = "12 Gauge, #3 Buckshot, 5 rounds";
        displayNameShort = "#00 Buckshot";
        descriptionShort = "#00 Buckshot, 5 Rounds<br/>For use in the Winchester M12";
        ammo = "B_12Gauge_Pellets_Submunition";
        count = 5;
        mass = 2.5;
        scope = 1;
    };
// End Other magazines

// Vehicle magazines
// End Vehicle magazines
