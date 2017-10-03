    class fow_10Rnd_303 : CA_Magazine {
        descriptionShort = ".303 British, 10 Rounds, for use in the Lee Enfield";
        displayName = "Lee Enfield, 10 Round Clip (FOW)";
    };

    class fow_1Rnd_m6a1 : CA_LauncherMagazine {
        descriptionShort = "2.36-Inch Anti-Tank Rocket M6, for use in the Bazooka";
        displayName = "Bazooka, 2.36-Inch Anti-Tank Rocket M6 (FOW)";
        mass = 62.17;
    };

    class fow_1Rnd_m9a1 : 1Rnd_HE_Grenade_shell {
        descriptionShort = "M9A1 HEAT Rifle Grenade, for use in the M7 Grenade Launcher";
        displayName = "Grenade, Rifle, Antitank, M9A1 (FOW)";
    };

    class fow_1Rnd_piat : CA_LauncherMagazine {
        descriptionShort = "High Explosive Anti-Tank bomb, for use in the PIAT";
        displayName = "PIAT, HEAT Bomb (FOW)";
    };

    class fow_1Rnd_piat_HE : CA_LauncherMagazine {
        descriptionShort = "High Explosive bomb, for use in the PIAT";
        displayName = "PIAT, HE Bomb (FOW)";
    };

    class fow_1Rnd_piat_test : CA_Magazine {
        scope = 0;
    };

    class fow_1Rnd_type10 : CA_Magazine {
        descriptionShort = "White Flare, for use in the M1 Carbine";
        displayName = "Type 10 Flare Pistol, White Flare (FOW)";
    };

    class fow_1Rnd_type2_40 : 1Rnd_HE_Grenade_shell {
        descriptionShort = "Type 2 Rifle Grenade, 40mm, for use in the Type 99 Arisaka";
        displayName = "Type 2 Rifle Grenade, 40mm (FOW)";
    };

    class fow_15Rnd_762x33 : CA_Magazine {
        descriptionShort = ".30 Carbine, 15 Rounds, for use in the M1 Carbine";
        displayName = "M1 Carbine, 15 Round Magazine (FOW)";
    };
    class fow_30Rnd_762x33_2PzD : fow_15Rnd_762x33 {
        count = 30;
        descriptionShort = ".30 Carbine, 30 Rounds, for use in the M2 Carbine";
        displayName = "M2 Carbine, 30 Round Magazine (FOW)";
        mass = 11;
     };

    class fow_20Rnd_45acp : CA_Magazine {
        descriptionShort = ".45 ACP, 20 Rounds, for use in the M55 Reising";
        displayName = "M55 Reising, 20 Round Magazine (FOW)";
    };
    class fow_12Rnd_45acp_2PzD : fow_20Rnd_45acp {
        count = 12;
        descriptionShort = ".45 ACP, 12 Rounds, for use in the M55 Reising";
        displayName = "M55 Reising, 12 Round Magazine (FOW)";
     };

    class fow_20Rnd_762x63 : CA_Magazine {
        descriptionShort = ".30-06, 20 Rounds, for use in the M1918A2 BAR";
        displayName = "M1918A2 BAR, 20 Round Magazine (FOW)";
    };

    class fow_30Rnd_762x63 : CA_Magazine {
        descriptionShort = ".30-06, 30 Rounds, for use in the M1919 Machine Guns";
        displayName = "M1919, 30 Round Belt (FOW)";
        lastRoundsTracer = 3;
        mass = 8.73;
        scope = 0;
        tracersEvery = 3;
    };
    class fow_50Rnd_762x63 : fow_30Rnd_762x63 {
        descriptionShort = ".30-06, 50 Rounds, for use in the M1919 Machine Guns";
        displayName = "M1919, 50 Round Belt (FOW)";
        mass = 14.55;
        scope = 2;
     };
    class fow_250Rnd_M1919 : fow_50Rnd_762x63 {
        count = 250;
        descriptionShort = ".30-06, 250 Rounds, for use in the M1919 Machine Guns";
        displayName = "M1919, 250 Round Belt (FOW)";
        mass = 72.75;
     };
    class fow_200Rnd_M1919_2PzD : fow_250Rnd_M1919 {
        count = 200;
        descriptionShort = ".30-06, 200 Rounds, for use in the M1919 Machine Guns";
        displayName = "M1919, 200 Round Belt (FOW)";
        mass = 58.2;
     };
    class fow_150Rnd_M1919_2PzD : fow_250Rnd_M1919 {
        count = 150;
        descriptionShort = ".30-06, 150 Rounds, for use in the M1919 Machine Guns";
        displayName = "M1919, 150 Round Belt (FOW)";
        mass = 43.65;
     };
    class fow_100Rnd_M1919_2PzD : fow_250Rnd_M1919 {
        count = 100;
        descriptionShort = ".30-06, 100 Rounds, for use in the M1919 Machine Guns";
        displayName = "M1919, 100 Round Belt (FOW)";
        mass = 29.1;
     };

    class fow_30Rnd_303_bren : CA_Magazine {
        descriptionShort = ".303 British, 30 Rounds, for use in the Bren Gun";
        displayName = "Bren Gun, 30 Round Magazine (FOW)";
        lastRoundsTracer = 3;
        tracersEvery = 3;
    };

    class fow_30Rnd_45acp : CA_Magazine {
        descriptionShort = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun, which is not right";
        displayName = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun";
    };
    class fow_30Rnd_45acp_T : fow_30Rnd_45acp {
        descriptionShort = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun, which is not right";
        displayName = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun";
     };
    class fow_20Rnd_45acp_M1_2PzD : fow_30Rnd_45acp {
        count = 20;
        descriptionShort = ".45 ACP, 20 Rounds, for use in the M1A1 Thompson";
        displayName = "Thompson, 20 Round Magazine (FOW)";
     };
    class fow_20Rnd_45acp_T_M1_2PzD : fow_30Rnd_45acp_T {
        count = 20;
        descriptionShort = ".45 ACP (T), 20 Rounds, for use in the M1A1 Thompson";
        displayName = "Thompson, 20 Round Tracer Magazine (FOW)";
     };
    class fow_30Rnd_45acp_M1_2PzD : fow_30Rnd_45acp {
        descriptionShort = ".45 ACP, 30 Rounds, for use in the M1A1 Thompson";
        displayName = "Thompson, 30 Round Magazine (FOW)";
     };
    class fow_30Rnd_45acp_T_M1_2PzD : fow_30Rnd_45acp_T {
        count = 20;
        descriptionShort = ".45 ACP (T), 30 Rounds, for use in the M1A1 Thompson";
        displayName = "Thompson, 30 Round Tracer Magazine (FOW)";
     };
    class fow_30Rnd_45acp_M3_2PzD : fow_30Rnd_45acp {
        descriptionShort = ".45 ACP, 30 Rounds, for use in the M3 Grease Gun";
        displayName = "M3 Grease Gun, 30 Round Magazine (FOW)";
     };
    class fow_30Rnd_45acp_T_M3_2PzD : fow_30Rnd_45acp_T {
        descriptionShort = ".45 ACP, 30 Rounds, for use in the M3 Grease Gun";
        displayName = "M3 Grease Gun, 30 Round Tracer Magazine (FOW)";
     };

    class fow_30Rnd_77x58 : CA_Magazine {
        descriptionShort = "7.7x58mm, 30 Rounds, for use in the Type 99 LMG";
        displayName = "Type 99 LMG, 30 Round Magazine (FOW)";
    };

    class fow_30Rnd_792x33 : CA_Magazine {
        descriptionShort = "7.92x33mm, 30 Rounds, for use in the StG44";
        displayName = "StG44, 30 Round Magazine (FOW)";
    };

    class fow_32Rnd_8x22 : CA_Magazine {
        count = 30;
        descriptionShort = "8x22mm Nambu, 30 Rounds, for use in the Type 100 SMG";
        displayName = "Type 100, 30 Round Magazine (FOW)";
    };

    class fow_32Rnd_9x19_mp40 : CA_Magazine {
        descriptionShort = "9x19mm, 32 Rounds, for use in the MP40";
        displayName = "MP40, 32 Round Magazine (FOW)";
    };

    class fow_32Rnd_9x19_sten : CA_Magazine {
        descriptionShort = "9x19mm, 32 Rounds, for use in the Sten Gun";
        displayName = "Sten Gun, 32 Round Magazine (FOW)";
    };

    class fow_50Rnd_792x57 : CA_Magazine {
        descriptionShort = "7.92x57mm, 50 Rounds, for use in the MG34 or MG42";
        displayName = "MG34/MG42, 50 Round Drum (FOW)";
        mass = 14.55;
    };
    class fow_250Rnd_792x57 : fow_50Rnd_792x57 {
        descriptionShort = "7.92x57mm, 250 Rounds, for use in the MG34 or MG42";
        displayName = "MG34/MG42, 250 Round Belt (FOW)";
        mass = 72.75;
     };

    class fow_5Rnd_77x58 : CA_Magazine {
        descriptionShort = "7.7x58mm, 5 Rounds, for use in the Type 99 Rifle";
        displayName = "Type 99 Rifle, 5 Round Clip (FOW)";
    };

    class fow_5Rnd_792x57 : CA_Magazine {
        descriptionShort = "7.92x57mm, 5 Rounds, for use in the K98k";
        displayName = "K98k, 5 Round Clip (FOW)";
    };

    class fow_6Rnd_455 : CA_Magazine {
        descriptionShort = ".455 Webley, 6 Rounds, for use in the Webley Mk IV";
        displayName = "Webley Mk IV, 6 Rounds (FOW)";
    };

    class fow_7Rnd_45acp : CA_Magazine {
        descriptionShort = ".45 ACP, 7 Rounds, for use in the M1911A1";
        displayName = "M1911A1, 7 Round Magazine (FOW)";
    };

    class fow_8Rnd_762x63 : CA_Magazine {
        descriptionShort = ".30-06, 8 Rounds, for use in the M1 Garand";
        displayName = "M1 Garand, 8 Round Clip (FOW)";
    };

    class fow_8Rnd_8x22 : CA_Magazine {
        descriptionShort = "8x22mm Nambu, 8 Rounds, for use in the Type 14 Nambu";
        displayName = "Type 14 Nambu, 8 Round Magazine (FOW)";
    };