
//Small arms magazines
    class fow_10Rnd_303 : CA_Magazine {
        descriptionShort = ".303 British, 10 Rounds, for use in the Lee Enfield";
        displayName = "Lee Enfield, 10 Round Clip (FOW)";
    };

    class fow_10nd_792x57 : CA_Magazine {
        descriptionShort = "7.92x57mm, 10 Rounds, for use in the G43";
        displayName = "G43, 10 Round Magazine (FOW)";
    };

    class fow_13Rnd_9x19 : CA_Magazine {
        descriptionShort = "9x19mm, 13 Rounds, for use in the Browning Hi-Power";
        displayName = "Browning Hi-Power, 13 Round Magazine";
        mass = 1.86;
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
        scope = 1;
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
        tracersEvery = 3;
        ace_isbelt = 1;
    };

    class fow_30Rnd_762x63 : CA_Magazine {
        descriptionShort = ".30-06, 30 Rounds, for use in the M1919 Machine Guns";
        displayName = "M1919, 30 Round Belt (FOW)";
        lastRoundsTracer = 3;
        mass = 8.73;
        scope = 1;
        tracersEvery = 3;
    };
    class fow_50Rnd_762x63 : fow_30Rnd_762x63 {
        descriptionShort = ".30-06, 50 Rounds, for use in the M1919 Machine Guns";
        displayName = "M1919, 50 Round Belt (FOW)";
        mass = 14.55;
        scope = 2;
        ace_isbelt = 1;
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
        ace_isbelt = 1;
    };

    class fow_30Rnd_45acp : CA_Magazine {
        descriptionShort = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun, which is not right";
        displayName = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun";
        scope = 1;
    };
    class fow_30Rnd_45acp_T : fow_30Rnd_45acp {
        descriptionShort = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun, which is not right";
        displayName = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun";
        scope = 1;
    };
    class fow_20Rnd_45acp_M1_2PzD : fow_30Rnd_45acp {
        count = 20;
        descriptionShort = ".45 ACP, 20 Rounds, for use in the M1928, M1, or M1A1 Thompson";
        displayName = "Thompson, 20 Round Magazine (FOW)";
    };
    class fow_20Rnd_45acp_T_M1_2PzD : fow_30Rnd_45acp_T {
        count = 20;
        descriptionShort = ".45 ACP (T), 20 Rounds, for use in the M1928, M1, or M1A1 Thompson";
        displayName = "Thompson, 20 Round Tracer Magazine (FOW)";
    };
    class fow_30Rnd_45acp_M1_2PzD : fow_30Rnd_45acp {
        descriptionShort = ".45 ACP, 30 Rounds, for use in the M1928, M1, or M1A1 Thompson";
        displayName = "Thompson, 30 Round Magazine (FOW)";
    };
    class fow_30Rnd_45acp_T_M1_2PzD : fow_30Rnd_45acp_T {
        count = 20;
        descriptionShort = ".45 ACP (T), 30 Rounds, for use in the M1928, M1, or M1A1 Thompson";
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
        ace_isbelt = 1;
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
        ace_isbelt = 1;
    };
    class fow_250Rnd_792x57 : fow_50Rnd_792x57 {
        descriptionShort = "7.92x57mm, 250 Rounds, for use in the MG34 or MG42";
        displayName = "MG34/MG42, 250 Round Belt (FOW)";
        mass = 72.75;
        ace_isbelt = 1;
    };

    class fow_5Rnd_792x57 : CA_Magazine {
        descriptionShort = "7.92x57mm, 5 Rounds, for use in the K98k";
        displayName = "K98k, 5 Round Clip (FOW)";
    };

    class fow_20Rnd_792x57 : fow_5Rnd_792x57 {
        descriptionShort = "7.92x57mm, 20 Rounds, for use in the FG42";
        displayName = "FG42, 20 Round Magazine (FOW)";
        mass = 6.1;
    };

    class fow_5Rnd_762x63 : CA_Magazine {
        descriptionShort = "7.62x63mm, 5 Rounds, for use in the M1903 Springfield";
        displayName = "M1903 Springfield, 5 Round Clip (FOW)";
    };

    class fow_5Rnd_77x58 : CA_Magazine {
        descriptionShort = "7.7x58mm, 5 Rounds, for use in the Type 99 Rifle";
        displayName = "Type 99 Rifle, 5 Round Clip (FOW)";
    };

    class fow_6Rnd_455 : CA_Magazine {
        descriptionShort = ".455 Webley, 6 Rounds, for use in the Webley Mk IV";
        displayName = "Webley Mk IV, 6 Rounds (FOW)";
    };

    class fow_6Rnd_12G_Slug : CA_Magazine {
        descriptionShort = "12 Gauge Slugs, 5 Rounds, for use in the Winchester M12";
        displayName = "Shotgun Slugs, 12 Gauge, 5 (FOW)";
        count = 5;
        mass = 2.5;
    };
    class fow_6Rnd_12G_Pellets : fow_6Rnd_12G_Slug {
        descriptionShort = "12 Gauge Buckshot, 5 Rounds, for use in the Winchester M12";
        displayName = "Shotgun Buckshot, 12 Gauge, 5 (FOW)";
        count = 5;
        mass = 2.5;
    };
    class fow_5Rnd_12G_Slug : fow_6Rnd_12G_Slug {
        descriptionShort = "12 Gauge Slugs, 4 Rounds, for use in the Ithaca 37 or Winchester M12";
        displayName = "Shotgun Slugs, 12 Gauge, 4 (FOW)";
        count = 4;
        mass = 2;
    };
    class fow_5Rnd_12G_Pellets : fow_6Rnd_12G_Pellets {
        descriptionShort = "12 Gauge Buckshot, 4 Rounds, for use in the Ithaca 37 or Winchester M12";
        displayName = "Shotgun Buckshot, 12 Gauge, 4 (FOW)";
        count = 4;
        mass = 2;
    };

    class fow_7Rnd_45acp : CA_Magazine {
        descriptionShort = ".45 ACP, 7 Rounds, for use in the M1911A1";
        displayName = "M1911A1, 7 Round Magazine (FOW)";
    };

    class fow_7Rnd_765x17 : CA_Magazine {
        descriptionShort = "7.65x17mm, 7 Rounds, for use in the Walther PPK";
        displayName = "Walther PPK, 7 Round Magazine (FOW)";
        mass = 1.31;
    };

    class fow_8Rnd_762x63 : CA_Magazine {
        descriptionShort = ".30-06, 8 Rounds, for use in the M1 Garand";
        displayName = "M1 Garand, 8 Round Clip (FOW)";
    };

    class fow_8Rnd_765x17 : CA_Magazine {
        descriptionShort = ".32 ACP, 8 Rounds, for use in the Welrod";
        displayName = "Welrod, 8 Round Magazine";
        mass = 1.5;
    };

    class fow_8Rnd_8x22 : CA_Magazine {
        descriptionShort = "8x22mm Nambu, 8 Rounds, for use in the Type 14 Nambu";
        displayName = "Type 14 Nambu, 8 Round Magazine (FOW)";
    };

    class fow_8Rnd_9x19 : CA_Magazine {
        descriptionShort = "9x19mm, 8 Rounds, for use in the P08";
        displayName = "P08, 8 Round Magazine (FOW)";
        mass = 1.86;
    };

    class fow_8Rnd_9x19_Vis_2PzD : fow_8Rnd_9x19 {
        descriptionShort = "9x19mm, 8 Rounds, for use in the P08";
        displayName = "P08, 8 Round Magazine (FOW)";
        mass = 1.86;
    };

//Vehicle Magazines
    class fow_20Rnd_20mm_AP : VehicleMagazine {
        tracersEvery = 1;
        count = 20;
    };

    class fow_20Rnd_20mm_HE : VehicleMagazine {
        tracersEvery = 1;
        count = 20;
    };

//Grenades
    class fow_e_m24 : HandGrenade {
        descriptionShort = "Model 1924 Stielhandgranate, standard German stick grenade.";
        displayName = "M24 (HE)";
        displayNameShort = "M24 (HE)";
        initSpeed = 24;
        mass = 13.117;
    };

    class fow_e_m24_at : HandGrenade {
        descriptionShort = "Model 1924 Stielhandgranate (Geballte Ladung), bundled charge for demolitions or anti-vehicle.";
        displayName = "M24 (Geballte Ladung)";
        displayNameShort = "M24 (AT)";
        initSpeed = 10;
        mass = 91.822;
    };

    class fow_e_m24_spli : HandGrenade {
        descriptionShort = "Model 1924 Stielhandgranate (Splitterring), M24 with fragmentation sleeve.";
        displayName = "M24 (Splitterring)";
        displayNameShort = "M24 (Frag)";
        initSpeed = 22;
        mass = 17.527;
    };

    class fow_e_m24K : fow_e_m24 {
        descriptionShort = "Model 1924 Stielhandgranate (Kalt), cold weather version.";
        displayName = "M24 (Kalt)";
        displayNameShort = "M24 (HE)";
        initSpeed = 24;
        mass = 13.117;
    };

    class fow_e_m24K_at : fow_e_m24_at {
        descriptionShort = "Model 1924 Stielhandgranate (Geballte Ladung), bundled charge for demolitions or anti-vehicle use.";
        displayName = "M24 (Geballte Ladung)";
        displayNameShort = "M24 (AT)";
        initSpeed = 10;
        mass = 91.822;
    };

    class fow_e_m24K_spli : fow_e_m24_spli {
        descriptionShort = "Model 1924 Stielhandgranate (Kalt, Splitterring), cold weather version with fragmentation sleeve.";
        displayName = "M24 (Kalt, Splitterring)";
        displayNameShort = "M24 (Frag)";
        initSpeed = 22;
        mass = 17.527;
    };

    class fow_e_mk2 : HandGrenade {
        descriptionShort = "Mk 2 Grenade, the standard US fragmentation grenade.";
        displayName = "Mk 2 Grenade";
        displayNameShort = "Mk 2 (Frag)";
        initSpeed = 20;
        mass = 13.117;
    };

    class fow_e_nb39b : HandGrenade {
        descriptionShort = "Nebelhandgranate 39, German smoke grenade, 120 second burn time.";
        displayName = "Nb39B";
        displayNameShort = "Nb39B (Smoke)";
        initSpeed = 20;
        mass = 18.739;
    };

    class fow_e_no36mk1 : HandGrenade {
        descriptionShort = "No. 36 Mk. 1, standard British fragmentation grenade.";
        displayName = "No. 36 Mk. 1";
        displayNameShort = "No. 36 Mk. 1 (Frag)";
        initSpeed = 18;
        mass = 16.865;
    };

    class fow_e_no69 : HandGrenade {
        descriptionShort = "No. 69, British high explosive grenade.";
        displayName = "No. 69";
        displayNameShort = "No. 69 (HE)";
        initSpeed = 25;
        mass = 8.444;
    };

    class fow_e_no73 : HandGrenade {
        descriptionShort = "No. 73 Thermos Bomb, very large British high explosive grenade for demolitions or anti-vehicle use.";
        displayName = "No. 73 Thermos Bomb";
        displayNameShort = "No. 73 (HE)";
        initSpeed = 12;
        mass = 44.092;
    };

    class fow_e_no77 : HandGrenade {
        descriptionShort = "No. 77 Bursting Smoke Grenade, explodes into a cloud of white phosphorus, 90 second burn time.";
        displayName = "No. 77 Bursting Smoke Grenade";
        displayNameShort = "No. 77 (WP)";
        initSpeed = 25;
        mass = 8.444;
    };

    class fow_e_no79 : HandGrenade {
        descriptionShort = "No. 79 MK. 1 Smoke Grenade, produces a steady steam of smoke, 130 second burn time.";
        displayName = "No. 79 MK. 1";
        displayNameShort = "No. 79 (Smoke)";
        initSpeed = 18;
        mass = 16.250;
    };

    class fow_e_no82 : HandGrenade {
        descriptionShort = "No. 82 Gammon Bomb, large British high explosive grenade for demolitions or anti-vehicle use.";
        displayName = "No. 82 Gammon Bomb";
        displayNameShort = "No. 82 (HE)";
        initSpeed = 15;
        mass = 27.337;
    };

    class fow_e_tnt_halfpound : HandGrenade {
        descriptionShort = "TNT (1/2 lb)";
        displayName = "TNT (1/2 lb)";
        displayNameShort = "TNT (1/2 lb, HE)";
        initSpeed = 29;
        mass = 6.000;
    };

    class fow_e_type97 : HandGrenade {
        descriptionShort = "Type 97 Hand Grenade, Japanese fragmentation grenade.";
        displayName = "Type 97";
        displayNameShort = "Type 97 (Frag)";
        initSpeed = 24;
        mass = 9.921;
    };

    class fow_e_type99 : HandGrenade {
        descriptionShort = "Type 99, Hand Grenade, Japanese fragmentation grenade.";
        displayName = "Type 99";
        displayNameShort = "Type 99 (Frag)";
        initSpeed = 28;
        mass = 6.614;
    };

    class fow_e_type99_at : HandGrenade {
        descriptionShort = "Type 99 Mine, Japanese anti-tank grenade.";
        displayName = "Type 99 Mine";
        displayNameShort = "Type 99 (AT)";
        initSpeed = 16;
        mass = 26.676;
    };
