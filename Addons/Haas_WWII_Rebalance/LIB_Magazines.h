    class LIB_BaseRifleGrenade;

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

    class LIB_1Rnd_60mm_M6 : CA_LauncherMagazine {
        displayName = "Bazooka, 2.36-Inch Anti-Tank Rocket M6";
        displayNameShort = "HEAT Rocket";
        descriptionShort = "2.36-Inch Anti-Tank Rocket M6, for use in the Bazooka";
    };

    class LIB_1Rnd_flare_white : CA_Magazine {
        displayName = "Flare Ammo (White)";
        displayNameShort = "Flare (White)";
        descriptionShort = "Flare Ammo (White)";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Flare_White_ca.paa";
    };
    class LIB_1Rnd_flare_yellow : LIB_1Rnd_flare_white {
        displayName = "Flare Ammo (Yellow)";
        displayNameShort = "Flare (Yellow)";
        descriptionShort = "Flare Ammo (Yellow)";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Flare_Yellow_ca.paa";
    };
    class LIB_1Rnd_flare_blue : LIB_1Rnd_flare_white {
        displayName = "Flare Ammo (Blue)";
        displayNameShort = "Flare (Blue)";
        descriptionShort = "Flare Ammo (Blue)";
        ammo = "LIB_40mm_Blue";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Flare_Blue_ca.paa";
    };
    class LIB_1Rnd_flare_orange : LIB_1Rnd_flare_white {
        displayName = "Flare Ammo (Orange)";
        displayNameShort = "Flare (Orange)";
        descriptionShort = "Flare Ammo (Orange)";
        ammo = "LIB_40mm_Orange";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Flare_Orange_ca.paa";
    };
    class LIB_1Rnd_flare_purple : LIB_1Rnd_flare_white {
        displayName = "Flare Ammo (Purple)";
        displayNameShort = "Flare (Purple)";
        descriptionShort = "Flare Ammo (Purple)";
        ammo = "LIB_40mm_Purple";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Flare_Purple_ca.paa";
    };

    class LIB_1Rnd_G_DYAKONOV : CA_Magazine {
        displayName = "Dyakonov Rifle Grenade";
        displayNameShort = "Rifle Grenade";
        descriptionShort = "Dyakonov rifle grenade, for use in the Dyakonov grenade launcher.";
        mass = 8;
    };

    class LIB_1Rnd_G_MillsBomb : LIB_BaseRifleGrenade {
        displayName = "No. 36 Mk. 1 (Rifle Grenade)";
        displayNameShort = "No. 36 Mk. 1 (Frag)";
        descriptionShort = "No. 36 Mk. 1, standard British fragmentation grenade, adapted for grenade launcher.";
        mass = 16.865;
    };

    class LIB_1Rnd_G_Mk2 : CA_Magazine {
        displayName = "Grenade, Rifle, Fragmentation, Mk 2";
        displayNameShort = "Mk 2 (Frag)";
        descriptionShort = "Mk2 Fragmentation Grenade, for use in the M7 Grenade Launcher";
        mass = 13.117;
    };

    class LIB_1Rnd_G_M9A1 : LIB_1Rnd_G_Mk2 {
        displayName = "Grenade, Rifle, Antitank, M9A1";
        displayNameShort = "M9A1 (HEAT)";
        descriptionShort = "M9A1 HEAT Rifle Grenade, for use in the M7 Grenade Launcher";
        mass = 8.8;
    };

    class LIB_1Rnd_89m_G_PIAT : CA_Magazine {
        displayName = "PIAT, HEAT Bomb";
        displayNameShort = "HEAT Bomb";
        descriptionShort = "High Explosive Anti-Tank bomb, for use in the PIAT";
    };

    class LIB_1Rnd_89m_PIAT : CA_LauncherMagazine {
        displayName = "PIAT, HEAT Bomb";
        displayNameShort = "HEAT Bomb";
        descriptionShort = "High Explosive Anti-Tank bomb, for use in the PIAT";
        scope = 1;
    };

    class LIB_1Rnd_PzFaust_30m : CA_LauncherMagazine {
        displayName = "Panzerfaust 30 Warhead";
        displayNameShort = "30m HEAT Warhead";
        mass = 0.1;
    };
    class LIB_1Rnd_PzFaust_60m : LIB_1Rnd_PzFaust_30m {
        displayName = "Panzerfaust 60 Warhead";
        displayNameShort = "60m HEAT Warhead";
        mass = 0.1;
    };
    class LIB_1Rnd_Faustpatrone : LIB_1Rnd_PzFaust_30m {
        displayName = "Panzerfaust 30 Klein Warhead";
        displayNameShort = "30m HEAT Warhead";
        mass = 0.1;
    };

    class LIB_1Rnd_RPzB : CA_LauncherMagazine {
        displayName = "Panzerschreck, 88mm Gr. 4322 HEAT Rocket";
        displayNameShort = "HEAT Rocket";
        descriptionShort = "88mm Gr. 4322 HEAT Rocket, for use in the Panzerschreck RPzB 54";
    };

    class LIB_1Rnd_145x114 : CA_Magazine {
        displayName = "PTRD-41, 1 Round";
        displayNameShort = "14.5x114mm";
        descriptionShort = "14.5x114mm, 1 Round, for use in the PTRD-41 rifle.";
    };

    class LIB_5Rnd_762x54 : CA_Magazine {
        displayName = "Mosin, 5 Round Clip";
        displayNameShort = "7.62x54mm";
        descriptionShort = "7.62x54mm, 5 Rounds, for use in the Mosin Rifles";
    };

    class LIB_5Rnd_762x54_b30 : LIB_5Rnd_762x54 {
        displayName = "Mosin, 5 Round Clip, B30 AP";
        displayNameShort = "7.62x54mm B30 AP";
        descriptionShort = "7.62x54mm, 5 Rounds, B30 AP, for use in the Mosin Rifles";
    };

    class LIB_5Rnd_762x54_D : LIB_5Rnd_762x54 {
        displayName = "Mosin, 5 Round Clip, Type D Heavy";
        displayNameShort = "7.62x54mm Type D Heavy";
        descriptionShort = "7.62x54mm, 5 Rounds, Type D Heavy, for use in the Mosin Rifles";
    };

    class LIB_5Rnd_762x54_t30 : LIB_5Rnd_762x54 {
        displayName = "Mosin, 5 Round Clip, T30 Tracer";
        displayNameShort = "7.62x54mm Tracer";
        descriptionShort = "7.62x54mm, 5 Rounds, T30 Tracer, for use in the Mosin Rifles";
    };

    class LIB_5Rnd_762x54_t46 : LIB_5Rnd_762x54 {
        displayName = "Mosin, 5 Round Clip, T46 Tracer";
        displayNameShort = "7.62x54mm Tracer";
        descriptionShort = "7.62x54mm, 5 Rounds, T46 Tracer, for use in the Mosin Rifles";
        ammo = "LIB_B_762x54_Ball_t46_NoCartridge";
    };

    class LIB_10Rnd_762x54 : LIB_5Rnd_762x54 {
        displayName = "SVT-40, 10 Round Magazine";
        displayNameShort = "7.62x54mm";
        descriptionShort = "7.62x54mm, 10 Rounds, for use in the SVT-40";
    };

    class LIB_10Rnd_762x54_b30 : LIB_10Rnd_762x54 {
        displayName = "SVT-40, 10 Round Magazine, B30 AP";
        displayNameShort = "7.62x54mm B30 AP";
        descriptionShort = "7.62x54mm, 10 Rounds, AP, for use in the SVT-40";
    };

    class LIB_10Rnd_762x54_d : LIB_10Rnd_762x54 {
        displayName = "SVT-40, 10 Round Magazine, Type D Heavy";
        displayNameShort = "7.62x54mm Type D Heavy";
        descriptionShort = "7.62x54mm, 10 Rounds, Type D Heavy, for use in the SVT-40";
    };

    class LIB_10Rnd_762x54_t30 : LIB_10Rnd_762x54 {
        displayName = "SVT-40, 10 Round Magazine, T30 Tracer";
        displayNameShort = "7.62x54mm Tracer";
        descriptionShort = "7.62x54mm, 10 Rounds, T30 Tracer, for use in the SVT-40";
    };

    class LIB_10Rnd_762x54_t302 : LIB_10Rnd_762x54_t30 {
        displayName = "SVT-40, 10 Round Magazine, Last Rnd T30 Tracer";
        displayNameShort = "7.62x54mm";
        descriptionShort = "7.62x54mm, 10 Rounds, Last Round T30 Tracer, for use in the SVT-40";
    };

    class LIB_10Rnd_762x54_t46 : LIB_10Rnd_762x54 {
        displayName = "SVT-40, 10 Round Magazine, T46 Tracer";
        displayNameShort = "7.62x54mm Tracer";
        descriptionShort = "7.62x54mm, 10 Rounds, T46 Tracer, for use in the SVT-40";
        ammo = "LIB_B_762x54_Ball_t46";
    };

    class LIB_10Rnd_762x54_t462 : LIB_10Rnd_762x54_t46 {
        displayName = "SVT-40, 10 Round Magazine, Last Rnd T46 Tracer";
        displayNameShort = "7.62x54mm";
        descriptionShort = "7.62x54mm, 10 Rounds, Last Round T46 Tracer, for use in the SVT-40";
    };

    class LIB_5Rnd_762x63 : CA_Magazine {
        displayName = "M1903 Springfield, 5 Round Clip";
        displayNameShort = ".30-06";
        descriptionShort = ".30-06, 5 Rounds, for use in the M1903 Springfield";
    };

    class LIB_5Rnd_762x63_t : LIB_5Rnd_762x63 {
        displayName = "M1903 Springfield, 5 Round Clip, Tracer";
        displayNameShort = ".30-06 Tracer";
        descriptionShort = ".30-06, 5 Rounds, Tracer, for use in the M1903 Springfield";
    };

    class LIB_5Rnd_792x57 : CA_Magazine {
        displayName = "K98k, 5 Round Clip";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 5 Rounds, for use in the K98k";
    };

    class LIB_5Rnd_792x57_SMK : LIB_5Rnd_792x57 {
        displayName = "K98k, 5 Round Clip, S.m.K. AP";
        displayNameShort = "7.92x57mm S.m.K. AP";
        descriptionShort = "7.92x57mm, 5 Rounds, S.m.K. AP, for use in the K98k";
    };

    class LIB_5Rnd_792x57_sS : LIB_5Rnd_792x57 {
        displayName = "K98k, 5 Round Clip, S.m.E. Semi-AP";
        displayNameShort = "7.92x57mm S.m.E. Semi-AP";
        descriptionShort = "7.92x57mm, 5 Rounds, S.m.E. Semi-AP, for use in the K98k";
    };

    class LIB_5Rnd_792x57_t : LIB_5Rnd_792x57 {
        displayName = "K98k, 5 Round Clip, Tracer";
        displayNameShort = "7.92x57mm Tracer";
        descriptionShort = "7.92x57mm, 5 Rounds, Tracer, for use in the K98k";
        ammo = "LIB_B_792x57_Ball_t_NoCartridge";
    };

    class LIB_6Rnd_455 : CA_Magazine {
        displayName = "Webley Mk VI, 6 Rounds";
        displayNameShort = ".455 Webley";
        descriptionShort = ".455 Webley, 6 Rounds, for use in the Webley Mk VI";
    };

    class LIB_6Rnd_9x19_Welrod : CA_Magazine {
        displayName = "Welrod Mk I, 6 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 6 Rounds, for use in the Welrod Mk I";
        mass = 3.8;
    };

    class LIB_8Rnd_762x63 : CA_Magazine {
        displayName = "M1 Garand, 8 Round Clip";
        displayNameShort = ".30-06";
        descriptionShort = ".30-06, 8 Rounds, for use in the M1 Garand";
    };
    class LIB_8Rnd_762x63_t : LIB_8Rnd_762x63 {
        displayName = "M1 Garand, 8 Round Clip, Tracer";
        displayNameShort = ".30-06 Tracer";
        descriptionShort = ".30-06, 8 Rounds, Tracer, for use in the M1 Garand";
    };

    class LIB_10Rnd_792x57 : LIB_5Rnd_792x57 {
        displayName = "G43, 10 Round Magazine";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 10 Rounds, for use in the G43";
    };
    class LIB_10Rnd_792x57_SMK : LIB_10Rnd_792x57 {
        displayName = "G43, 10 Round Magazine, S.m.K. AP";
        displayNameShort = "7.92x57mm S.m.K. AP";
        descriptionShort = "7.92x57mm, 10 Rounds, S.m.K. AP, for use in the G43";
    };
    class LIB_10Rnd_792x57_sS : LIB_10Rnd_792x57 {
        displayName = "G43, 10 Round Magazine, S.m.E. Semi-AP";
        displayNameShort = "7.92x57mm S.m.E. Semi-AP";
        descriptionShort = "7.92x57mm, 10 Rounds, S.m.E. Semi-AP, for use in the G43";
    };
    class LIB_10Rnd_792x57_T : LIB_10Rnd_792x57 {
        displayName = "G43, 10 Round Magazine, Tracer";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 10 Rounds, Tracer, for use in the G43";
        ammo = "LIB_B_792x57_Ball_t";
    };
    class LIB_10Rnd_792x57_T2 : LIB_10Rnd_792x57_T {
        displayName = "G43, 10 Round Magazine, Last Round Tracer";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 10 Rounds, Last Round Tracer, for use in the G43";
        ammo = "LIB_B_792x57_Ball_t";
    };

    class LIB_10Rnd_792x57_clip : LIB_5Rnd_792x57 {
        displayName = "G41, 2x 5 Round Clips";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 10 Rounds, for use in the G41";
    };

    class LIB_10Rnd_770x56 : CA_Magazine {
        displayName = "Lee Enfield, 10 Round Clip";
        displayNameShort = ".303 British";
        descriptionShort = ".303 British, 10 Rounds, for use in the Lee Enfield";
    };

    class LIB_15Rnd_762x33 : LIB_8Rnd_762x63 {
        displayName = "M1 Carbine, 15 Round Magazine";
        displayNameShort = ".30 Carbine";
        descriptionShort = ".30 Carbine, 15 Rounds, for use in the M1 Carbine";
    };
    class LIB_15Rnd_762x33_t : LIB_15Rnd_762x33 {
        displayName = "M1 Carbine, 15 Round Magazine, Tracer";
        displayNameShort = ".30 Carbine Tracer";
        descriptionShort = ".30 Carbine, 15 Rounds, Tracer, for use in the M1 Carbine";
    };
    class LIB_30Rnd_762x33_2PzD : LIB_15Rnd_762x33 {
        displayName = "M2 Carbine, 30 Round Magazine";
        displayNameShort = ".30 Carbine";
        descriptionShort = ".30 Carbine, 30 Rounds, for use in the M2 Carbine";
        count = 30;
        mass = 5.5;
    };
    class LIB_30Rnd_762x33_t_2PzD : LIB_15Rnd_762x33_t {
        displayName = "M2 Carbine, 30 Round Magazine, Tracer";
        displayNameShort = ".30 Carbine Tracer";
        descriptionShort = ".30 Carbine, 30 Rounds, Tracer, for use in the M2 Carbine";
        count = 30;
        mass = 5.5;
    };

    class LIB_20Rnd_762x63 : CA_Magazine {
        displayName = "M1918A2 BAR, 20 Round Magazine";
        displayNameShort = ".30-06";
        descriptionShort = ".30-06, 20 Rounds, for use in the M1918A2 BAR";
    };

    class LIB_20Rnd_792x57 : LIB_5Rnd_792x57 {
        displayName = "FG42, 20 Round Magazine";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 20 Rounds, for use in the FG42";
    };

    class LIB_30Rnd_45ACP : CA_Magazine {
        displayName = "Thompson, 30 Round Magazine";
        displayNameShort = ".45 ACP";
        descriptionShort = ".45 ACP, 30 Rounds, for use in the M1928, M1, or M1A1 Thompson";
    };
    class LIB_30Rnd_45ACP_t : LIB_30Rnd_45ACP {
        displayName = "Thompson, 30 Round Magazine, Tracer";
        displayNameShort = ".45 ACP Tracer";
        descriptionShort = ".45 ACP, 30 Rounds, Tracer, for use in the M1928, M1, or M1A1 Thompson";
    };
    class LIB_50Rnd_45ACP : LIB_30Rnd_45ACP {
        displayName = "M1928 Thompson 50 Round Magazine";
        displayNameShort = ".45 ACP";
        descriptionShort = ".45 ACP, 50 Rounds, for use in the M1928 Thompson";
    };
    class LIB_20Rnd_45ACP_M1_2PzD : LIB_30Rnd_45ACP {
        displayName = "Thompson, 20 Round Magazine";
        displayNameShort = ".45 ACP";
        descriptionShort = ".45 ACP, 20 Rounds, for use in the M1928, M1, or M1A1 Thompson";
        count = 20;
        mass = 7;
    };

    class LIB_30Rnd_770x56 : CA_Magazine {
        displayName = "Bren Gun, 30 Round Magazine";
        displayNameShort = ".303 British";
        descriptionShort = ".303 British, 30 Rounds, for use in the Bren Gun";
        lastRoundsTracer = 3;
        tracersEvery = 3;
        ace_isbelt = 1;
    };

    class LIB_30Rnd_792x33 : CA_Magazine {
        displayName = "StG44, 30 Round Magazine";
        displayNameShort = "7.95x33mm";
        descriptionShort = "7.95x33mm, 30 Rounds, for use in the StG44";
    };
    class LIB_30rnd_792x33_t : LIB_30Rnd_792x33 {
        displayName = "StG44, 30 Round Magazine, Tracer";
        displayNameShort = "7.95x33mm Tracer";
        descriptionShort = "7.95x33mm, 30 Rounds, Tracer, for use in the StG44";
    };

    class LIB_30Rnd_M3_GreaseGun_45ACP : CA_Magazine {
        displayName = "M3 Grease Gun, 30 Round Magazine";
        displayNameShort = ".45 ACP";
        descriptionShort = ".45 ACP, 30 Rounds, for use in the M3 Grease Gun";
    };

    class LIB_32Rnd_9x19 : CA_Magazine {
        displayName = "MP40, 32 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 32 Rounds, for use in the MP40";
    };
    class LIB_32rnd_9x19_t : LIB_32Rnd_9x19 {
        displayName = "MP40, 32 Round Magazine, Tracer";
        displayNameShort = "9x19mm Tracer";
        descriptionShort = "9x19mm, 32 Rounds, Tracer, for use in the MP40";
    };

    class LIB_32Rnd_9x19_Sten : CA_Magazine {
        displayName = "Sten Gun, 32 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 32 Rounds, for use in the Sten Gun";
    };

    class LIB_35Rnd_762x25 : CA_Magazine {
        displayName = "PPSh-41, 35 Round Magazine";
        displayNameShort = "7.62x25mm";
        descriptionShort = "7.62x25mm, 35 Rounds, for use in the PPSh-41";
    };
    class LIB_35Rnd_762x25_ap : LIB_35Rnd_762x25 {
        displayName = "PPSh-41, 35 Round Magazine, AP";
        displayNameShort = "7.62x25mm AP";
        descriptionShort = "7.62x25mm, 35 Rounds, AP, for use in the PPSh-41";
    };
    class LIB_35Rnd_762x25_t : LIB_35Rnd_762x25 {
        displayName = "PPSh-41, 35 Round Magazine, Tracer";
        displayNameShort = "7.62x25mm Tracer";
        descriptionShort = "7.62x25mm, 35 Rounds, Tracer, for use in the PPSh-41";
    };
    class LIB_35Rnd_762x25_t2 : LIB_35Rnd_762x25_t {
        displayName = "PPSh-41, 35 Round Magazine, Last Round Tracer";
        displayNameShort = "7.62x25mm Tracer";
        descriptionShort = "7.62x25mm, 35 Rounds, Last Round Tracer, for use in the PPSh-41";
    };

    class LIB_47Rnd_762x54 : CA_Magazine {
        displayName = "DP28, 47 Round Magazine";
        displayNameShort = "7.62x54mm";
        descriptionShort = "7.62x54mm, 47 Rounds, for use in the DP28";
        ace_isbelt = 1;
    };
    class LIB_47Rnd_762x54d : LIB_47Rnd_762x54 {
        displayName = "DP28, 47 Round Magazine, Type D Heavy";
        displayNameShort = "7.62x54mm Type D Heavy";
        descriptionShort = "7.62x54mm, 47 Rounds, Type D Heavy, for use in the DP28";
    };

    class LIB_63Rnd_762x54 : LIB_47Rnd_762x54 {
        displayName = "DT, 60 Round Magazine";
        displayNameShort = "7.62x54mm";
        descriptionShort = "7.62x54mm, 60 Rounds, for use in the DT";
        count = 60;
    };
    class LIB_63Rnd_762x54d : LIB_63Rnd_762x54 {
        displayName = "DT, 60 Round Magazine, Type D Heavy";
        displayNameShort = "7.62x54mm Type D Heavy";
        descriptionShort = "7.62x54mm, 60 Rounds, Type D Heavy, for use in the DT";
    };

    class LIB_50Rnd_762x63 : CA_Magazine {
        displayName = "M1919, 50 Round Belt";
        displayNameShort = ".30-06";
        descriptionShort = ".30-06, 50 Rounds, for use in the M1919 Machine Guns";
        ace_isbelt = 1;
    };
    class LIB_100Rnd_762x63 : LIB_50Rnd_762x63 {
        displayName = "M1919, 100 Round Belt";
        displayNameShort = ".30-06";
        descriptionShort = ".30-06, 100 Rounds, for use in the M1919 Machine Guns";
        mass = 29.1;
        scope = 2;
    };
    class LIB_150Rnd_762x63_2PzD : LIB_50Rnd_762x63 {
        displayName = "M1919, 150 Round Belt";
        displayNameShort = ".30-06";
        descriptionShort = ".30-06, 150 Rounds, for use in the M1919 Machine Guns";
        count = 150;
        mass = 43.65;
    };
    class LIB_200Rnd_762x63_2PzD : LIB_50Rnd_762x63 {
        displayName = "M1919, 200 Round Belt";
        displayNameShort = ".30-06";
        descriptionShort = ".30-06, 200 Rounds, for use in the M1919 Machine Guns";
        count = 200;
        mass = 58.2;
    };
    class LIB_250Rnd_762x63_2PzD : LIB_50Rnd_762x63 {
        displayName = "M1919, 250 Round Belt";
        displayNameShort = ".30-06";
        descriptionShort = ".30-06, 250 Rounds, for use in the M1919 Machine Guns";
        count = 250;
        mass = 72.75;
    };

    class LIB_50Rnd_792x57 : CA_Magazine {
        displayName = "MG34/MG42, 50 Round Drum";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 50 Rounds, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball";
        ace_isbelt = 1;
    };
    class LIB_50Rnd_792x57_sS : LIB_50Rnd_792x57 {
        displayName = "MG34/MG42, 50 Round Drum, S.m.E. Semi-AP";
        displayNameShort = "7.92x57mm S.m.E. Semi-AP";
        descriptionShort = "7.92x57mm, 50 Rounds, S.m.E. Semi-AP, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SmE";
    };
    class LIB_50Rnd_792x57_SMK : LIB_50Rnd_792x57_sS {
        displayName = "MG34/MG42, 50 Round Drum, S.m.K. AP";
        displayNameShort = "7.92x57mm S.m.K. AP";
        descriptionShort = "7.92x57mm, 50 Rounds, S.m.K. AP, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SMK";
    };
    class LIB_100Rnd_792x57 : LIB_50Rnd_792x57 {
        displayName = "MG34/MG42, 100 Round Belt";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 100 Rounds, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball";
        count = 100;
        mass = 29.1;
    };
    class LIB_100Rnd_792x57_SMK_2PzD : LIB_50Rnd_792x57_SMK {
        displayName = "MG34/MG42, 100 Round Belt, S.m.K. AP";
        displayNameShort = "7.92x57mm S.m.K. AP";
        descriptionShort = "7.92x57mm, 100 Rounds, S.m.K. AP, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SMK";
        count = 100;
        mass = 29.1;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\MachineGun_Light\M_MG42_box_ca.paa";
    };
    class LIB_100Rnd_792x57_sS_2PzD : LIB_50Rnd_792x57_sS {
        displayName = "MG34/MG42, 100 Round Belt, S.m.E. Semi-AP";
        displayNameShort = "7.92x57mm S.m.E. Semi-AP";
        descriptionShort = "7.92x57mm, 100 Rounds, S.m.E. Semi-AP, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SmE";
        count = 100;
        mass = 29.1;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\MachineGun_Light\M_MG42_box_ca.paa";
    };
    class LIB_150Rnd_792x57_2PzD : LIB_50Rnd_792x57 {
        displayName = "MG34/MG42, 150 Round Belt";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 150 Rounds, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball";
        count = 150;
        mass = 43.65;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\MachineGun_Light\M_MG42_box_ca.paa";
    };
    class LIB_150Rnd_792x57_SMK_2PzD : LIB_50Rnd_792x57_SMK {
        displayName = "MG34/MG42, 150 Round Belt, S.m.K. AP";
        displayNameShort = "7.92x57mm S.m.K. AP";
        descriptionShort = "7.92x57mm, 150 Rounds, S.m.K. AP, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SMK";
        count = 150;
        mass = 43.65;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\MachineGun_Light\M_MG42_box_ca.paa";
    };
    class LIB_150Rnd_792x57_sS_2PzD : LIB_50Rnd_792x57_sS {
        displayName = "MG34/MG42, 150 Round Belt, S.m.E. Semi-AP";
        displayNameShort = "7.92x57mm S.m.E. Semi-AP";
        descriptionShort = "7.92x57mm, 150 Rounds, S.m.E. Semi-AP, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SmE";
        count = 150;
        mass = 43.65;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\MachineGun_Light\M_MG42_box_ca.paa";
    };
    class LIB_200Rnd_792x57_2PzD : LIB_50Rnd_792x57 {
        displayName = "MG34/MG42, 200 Round Belt";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 200 Rounds, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball";
        count = 200;
        mass = 58.2;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\MachineGun_Light\M_MG42_box_ca.paa";
    };
    class LIB_200Rnd_792x57_SMK_2PzD : LIB_50Rnd_792x57_SMK {
        displayName = "MG34/MG42, 200 Round Belt, S.m.K. AP";
        displayNameShort = "7.92x57mm S.m.K. AP";
        descriptionShort = "7.92x57mm, 200 Rounds, S.m.K. AP, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SMK";
        count = 200;
        mass = 58.2;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\MachineGun_Light\M_MG42_box_ca.paa";
    };
    class LIB_200Rnd_792x57_sS_2PzD : LIB_50Rnd_792x57_sS {
        displayName = "MG34/MG42, 200 Round Belt, S.m.E. Semi-AP";
        displayNameShort = "7.92x57mm S.m.E. Semi-AP";
        descriptionShort = "7.92x57mm, 200 Rounds, S.m.E. Semi-AP, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SmE";
        count = 200;
        mass = 58.2;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\MachineGun_Light\M_MG42_box_ca.paa";
    };
    class LIB_250Rnd_792x57_2PzD : LIB_50Rnd_792x57 {
        displayName = "MG34/MG42, 250 Round Belt";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 250 Rounds, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball";
        count = 250;
        mass = 72.75;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\MachineGun_Light\M_MG42_box_ca.paa";
    };
    class LIB_250Rnd_792x57_SMK_2PzD : LIB_50Rnd_792x57_SMK {
        displayName = "MG34/MG42, 250 Round Belt, S.m.K. AP";
        displayNameShort = "7.92x57mm S.m.K. AP";
        descriptionShort = "7.92x57mm, 250 Rounds, S.m.K. AP, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SMK";
        count = 250;
        mass = 72.75;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\MachineGun_Light\M_MG42_box_ca.paa";
    };
    class LIB_250Rnd_792x57_sS_2PzD : LIB_50Rnd_792x57_sS {
        displayName = "MG34/MG42, 250 Round Belt, S.m.E. Semi-AP";
        displayNameShort = "7.92x57mm S.m.E. Semi-AP";
        descriptionShort = "7.92x57mm, 250 Rounds, S.m.E. Semi-AP, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SmE";
        count = 250;
        mass = 72.75;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\MachineGun_Light\M_MG42_box_ca.paa";
    };

    class LIB_75Rnd_792x57 : LIB_50Rnd_792x57 {
        displayName = "MG34 (PT34), 75 Round Drum";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 50 Rounds, for use in the MG34 (PT34)";
        ace_isbelt = 1;
    };

    class LIB_71Rnd_762x25 : CA_Magazine {
        displayName = "PPSh-41, 71 Round Magazine";
        displayNameShort = "7.62x25mm";
        descriptionShort = "7.62x25mm, 71 Rounds, for use in the PPSh-41";
    };
    class LIB_71Rnd_762x25_ap : LIB_71Rnd_762x25 {
        displayName = "PPSh-41, 71 Round Magazine, AP";
        displayNameShort = "7.62x25mm AP";
        descriptionShort = "7.62x25mm, 71 Rounds, AP, for use in the PPSh-41";
    };
    class LIB_71Rnd_762x25_t : LIB_71Rnd_762x25 {
        displayName = "PPSh-41, 71 Round Magazine, Tracer";
        displayNameShort = "7.62x25mm Tracer";
        descriptionShort = "7.62x25mm, 71 Rounds, Tracer, for use in the PPSh-41";
    };
    class LIB_71Rnd_762x25_t2 : LIB_71Rnd_762x25_t {
        displayName = "PPSh-41, 71 Round Magazine, Last Round Tracer";
        displayNameShort = "7.62x25mm";
        descriptionShort = "7.62x25mm, 71 Rounds, Last Round Tracer, for use in the PPSh-41";
    };

    class LIB_10Rnd_9x19_M1896 : CA_Magazine {
        displayName = "M1916 C-96 Mauser, 10 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 10 Rounds, for use in the M1916 C-96 Mauser";
    };
    class LIB_10Rnd_763x25_2PzD : LIB_10Rnd_9x19_M1896 {
        displayName = "M1930 C-96 Mauser, 10 Round Clip";
        displayNameShort = "7.63x25mm";
        descriptionShort = "7.63x25mm, 10 Rounds, for use in the M1930 C-96 Mauser";
        ammo = "LIB_B_762x25_Ball";
        count = 10;
    };
    class LIB_20Rnd_763x25_2PzD : LIB_10Rnd_763x25_2PzD {
        displayName = "M712 Schnellfeuer , 20 Round Magazine";
        descriptionShort = "7.63x25mm, 20 Rounds, for use in the M1916 C-96 Mauser";
        ammo = "LIB_B_762x25_Ball";
        count = 20;
    };
    class LIB_40Rnd_763x25_2PzD : LIB_10Rnd_763x25_2PzD {
        displayName = "M712 Schnellfeuer , 20 Round Magazine";
        descriptionShort = "7.63x25mm, 20 Rounds, for use in the M1916 C-96 Mauser";
        ammo = "LIB_B_762x25_Ball";
        count = 40;
    };

    class LIB_7Rnd_45ACP : CA_Magazine {
        displayName = "M1911A1, 7 Round Magazine";
        displayNameShort = ".45 ACP";
        descriptionShort = ".45 ACP, 7 Rounds, for use in the M1911A1";
    };
    class LIB_7Rnd_45ACP_2PzD : LIB_7Rnd_45ACP {
        displayName = "De Lisle Carbine, 7 Round Magazine";
        displayNameShort = ".45 ACP";
        descriptionShort = ".45 ACP, 7 Rounds, for use in the De Lisle Carbine";
        count = 7;
    };
    class LIB_11Rnd_45ACP_2PzD : LIB_7Rnd_45ACP_2PzD {
        count = 11;
        displayName = "De Lisle Carbine, 11 Round Magazine";
        displayNameShort = ".45 ACP";
        descriptionShort = ".45 ACP, 11 Rounds, for use in the De Lisle Carbine";
    };

    class LIB_7Rnd_9x19 : CA_Magazine {
        displayName = "Walther PPK, 7 Round Magazine";
        displayNameShort = ".32 ACP";
        descriptionShort = ".32 ACP, 7 Rounds, for use in the Walther PPK";
        ammo = "LIB_B_765x17_Ball";
        mass = 1.31;
        scope = 2;
    };

    class LIB_7Rnd_762x38 : CA_Magazine {
        displayName = "M1895 Nagant, 7 Rounds";
        displayNameShort = "7.62x38mm";
        descriptionShort = "7.62x38mm, 7 Rounds, for use in the M1895 Nagant";
    };

    class LIB_8Rnd_762x25 : CA_Magazine {
        displayName = "TT-33, 8 Round Magazine";
        displayNameShort = "7.62x25mm";
        descriptionShort = "7.62x25mm, 8 Rounds, for use in the TT-33 Tokarev";
    };

    class LIB_8Rnd_9x19 : CA_Magazine {
        displayName = "P38, 8 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 8 Rounds, for use in the P38";
    };

    class LIB_8Rnd_9x19_P08 : LIB_8Rnd_9x19 {
        displayName = "P08, 8 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 8 Rounds, for use in the P08";
    };

    class LIB_M2_Flamethrower_Mag : CA_Magazine {
        displayName = "M2-2 Flame Thrower Fuel";
        displayNameShort = "Fuel";
        descriptionShort = "Fuel for the M2-2 Flame Thrower, allows for ~8 seconds of firing.";
        mass = 250;
        scope = 2;
    };

    class LIB_M2_Flamethrower_Mag_Empty : LIB_M2_Flamethrower_Mag {
        displayName = "M2-2 Flame Thrower Fuel (Empty)";
        descriptionShort = "Empty fuel tank for the M2-2 Flame Thrower.";
        mass = 0;
    };

// Grenades
    class LIB_F1 : HandGrenade_West {
        displayName = "F-1";
        displayNameShort = "F-1 (Frag)";
        descriptionShort = "F-1 Grenade, Russian copy of a French hand grenade.";
        initSpeed = 20;
        mass = 13.228;
    };

    class LIB_M39 : HandGrenade_West {
        displayName = "M39";
        displayNameShort = "M39 (Frag)";
        descriptionShort = "Model 39 Eihandgranate, German fragmentation grenade.";
        initSpeed = 27;
        mass = 7.496;
    };

    class LIB_MillsBomb : HandGrenade_West {
        displayName = "No. 36 Mk. 1 (Rifle Grenade)";
        displayNameShort = "No. 36 Mk. 1 (Frag)";
        descriptionShort = "No. 36 Mk. 1, standard British fragmentation grenade";
        initSpeed = 18;
        mass = 16.865;
    };

    class LIB_NB39 : SmokeShell {
        displayName = "Nb39B";
        displayNameShort = "Nb39B (Smoke)";
        descriptionShort = "Nebelhandgranate 39, German smoke grenade, 120 second burn time.";
        initSpeed = 20;
        mass = 18.739;
    };

    class LIB_No77 : SmokeShell {
        displayName = "No. 77 Bursting Smoke Grenade";
        displayNameShort = "No. 77 (WP)";
        descriptionShort = "No. 77 Bursting Smoke Grenade, explodes into a cloud of white phosphorus, 90 second burn time.";
        initSpeed = 25;
        mass = 8.444;
    };

    class LIB_No82 : HandGrenade_West {
        displayName = "No. 82 Gammon Bomb";
        displayNameShort = "No. 82 (HE)";
        descriptionShort = "No. 82 Gammon Bomb, large British high explosive grenade for demolitions or anti-vehicle use.";
        initSpeed = 15;
        mass = 27.337;
    };

    class LIB_Pwm : HandGrenade_West {
        displayName = "PWM";
        displayNameShort = "PWM (AT)";
        descriptionShort = "Panzerwurfmine, German AT grenade, explodes on impact.";
        initSpeed = 15;
        mass = 29.762;
    };

    class LIB_RDG : SmokeShell {
        displayName = "RDG-1";
        displayNameShort = "RDG-1 (Smoke)";
        descriptionShort = "RDG-1, Russian smoke grenade, 120 second burn time.";
        initSpeed = 26;
        mass = 7.716;
    };

    class LIB_Rg42 : HandGrenade_West {
        displayName = "RG-42";
        displayNameShort = "RG-42 (Frag)";
        descriptionShort = "RG-42, Russian fragmentation grenade.";
        initSpeed = 24;
        mass = 9.700;
    };

    class LIB_Rpg6 : HandGrenade_West {
        displayName = "RPG-6";
        displayNameShort = "RPG-6 (AT)";
        descriptionShort = "RPG-6, Russian AT grenade, explodes on impact.";
        initSpeed = 16;
        mass = 24.251;
    };

    class LIB_Shg24 : HandGrenade_West {
        displayName = "M24 Stielhandgranate";
        displayNameShort = "M24 (HE)";
        descriptionShort = "Model 1924 Stielhandgranate, standard German stick grenade.";
        ammo = "fow_e_m24";
        initSpeed = 24;
        mass = 13.117;
    };

    class LIB_Shg24x7 : LIB_Shg24 {
        displayName = "M24 (Geballte Ladung)";
        displayNameShort = "M24 (AT)";
        descriptionShort = "Model 1924 Stielhandgranate (Geballte Ladung), bundled charge for demolitions or anti-vehicle.";
        ammo = "fow_e_m24_at";
        initSpeed = 10;
        mass = 91.822;
    };

    class LIB_US_M18 : SmokeShell {
        displayName = "AN-M8 Smoke HC";
        displayNameShort = "AN-M8 (Smoke)";
        descriptionShort = "AN-M8 Smoke HC, a US smoke grenade, 130 second burn time.";
        initSpeed = 19;
        mass = 14.991;
    };

    class LIB_US_M18_Green : SmokeShell {
        displayName = "M18 Smoke Green";
        displayNameShort = "M18 (Green)";
        descriptionShort = "M18 Smoke Green, a US smoke grenade, 70 second burn time.";
        initSpeed = 23;
        mass = 11.861;
    };

    class LIB_US_M18_Red : SmokeShell {
        displayName = "M18 Smoke Red";
        displayNameShort = "M18 (Red)";
        descriptionShort = "M18 Smoke Red, a US smoke grenade, 70 second burn time.";
        initSpeed = 23;
        mass = 11.861;
    };

    class LIB_US_M18_Yellow : SmokeShell {
        displayName = "M18 Smoke Yellow";
        displayNameShort = "M18 (Yellow)";
        descriptionShort = "M18 Smoke Yellow, a US smoke grenade, 70 second burn time.";
        initSpeed = 23;
        mass = 11.861;
    };

    class LIB_US_Mk_2 : HandGrenade_West {
        displayName = "Mk 2 Grenade";
        displayNameShort = "Mk 2 (Frag)";
        descriptionShort = "Mk 2 Grenade, the standard US fragmentation grenade.";
        initSpeed = 20;
        mass = 13.117;
    };

// Vehicle Magazines

    class LIB_APCR_VehicleMagazine_base : VehicleMagazine {
        tracersEvery = 1;
    };

    class LIB_Bomb_VehicleMagazine_base;

    class LIB_Shell_20L55_PzGr_AP;
    class LIB_Shell_20L55_PzGr40_APCR;
    class LIB_Shell_20L55_SprGr_HE;

    class LIB_10x_20L55_PzGr_AP : LIB_Shell_20L55_PzGr_AP {
        count = 20;
    };

    class LIB_10x_20L55_PzGr40_APCR : LIB_Shell_20L55_PzGr40_APCR {
        count = 20;
    };

    class LIB_10x_20L55_SprGr_HE : LIB_Shell_20L55_SprGr_HE {
        count = 20;
    };

    class LIB_1Rnd_FAB250 : LIB_Bomb_VehicleMagazine_base {
        displayName = "FAB-250 Bomb";
        descriptionShort = "FAB-250 Bomb";
    };

    class LIB_100Rnd_127x99_M2 : VehicleMagazine {
        displayName = "M2, 100 Round Belt";
    };
    class LIB_50Rnd_127x108 : LIB_100Rnd_127x99_M2 {
        displayName = "M2, 50 Round Belt";
    };

    class LIB_250rnd_7_62x54R_maxim : VehicleMagazine {
        displayName = "Maxim Gun, 250 Round Belt";
    };
    class LIB_250rnd_7_62x54R_maxim_D : LIB_250rnd_7_62x54R_maxim {
        displayName = "Maxim Gun, 250 Round Belt, Type D Heavy";
    };

    class LIB_50Rnd_792x57_Veh : VehicleMagazine {
        displayName = "MG34/MG42, 50 Round Drum";
    };
    class LIB_250Rnd_792x57 : LIB_50Rnd_792x57_Veh {
        displayName = "MG34/MG42, 250 Round Belt";
    };
    class LIB_250Rnd_792x57_sS : LIB_250Rnd_792x57 {
        displayName = "MG34/MG42, 250 Round Belt, s.S. - Heavy";
    };
    class LIB_250Rnd_792x57_SMK : LIB_250Rnd_792x57 {
        displayName = "MG34/MG42, 250 Round Belt, S.m.K. AP";
    };

    class LIB_63rnd_DT : VehicleMagazine {
        displayName = "DT, 60 Round Magazine";
        count = 60;
    };

    class LIB_150rnd_MG34 : VehicleMagazine {
        displayName = "MG34/MG42, 150 Round Belt";
    };

    class LIB_250Rnd_M1919A4 : VehicleMagazine {
        displayName = "M1919, 250 Round Belt";
    };

    class LIB_2000Rnd_MG131_FW190 : VehicleMagazine {
        displayName = "MG131, 13mm HE-T";
        descriptionShort = "MG131, 13mm HE-T";
    };

    class LIB_500Rnd_MG151_FW190 : VehicleMagazine {
        displayName = "MG151, 20mm HEI-T";
        descriptionShort = "MG151, 20mm HEI-T";
    };

    class LIB_2000Rnd_MG81_JU87 : VehicleMagazine {
        displayName = "MG81, 7.92x57mm";
    };

    class LIB_1000Rnd_M2_P39 : VehicleMagazine {
        displayName = "AN/M2, .50 Cal";
    };

    class LIB_30Rnd_M4_P39 : VehicleMagazine {
        displayName = "M4, 37mm HE-T";
        descriptionShort = "M4, 37mm HE-T";
    };

    class LIB_450Rnd_ShKAS_PE2 : VehicleMagazine {
        displayName = "ShKAS, 7.62x54R";
    };

    class LIB_150Rnd_UBK_PE2 : VehicleMagazine {
        displayName = "UBK, .50 Cal";
    };

    class LIB_1500Rnd_UBT_PE2 : LIB_150Rnd_UBK_PE2 {
        displayName = "UBT, .50 Cal";
    };

    class LIB_4000Rnd_M2_P47 : VehicleMagazine {
        displayName = "AN/M2, .50 Cal";
        count = 3400;
    };

    class LIB_1Rnd_SC50 : LIB_Bomb_VehicleMagazine_base {
        displayName = "SC-50 Bomb";
    };

    class LIB_1Rnd_SC250 : LIB_Bomb_VehicleMagazine_base {
        displayName = "SC-250 Bomb";
    };

    class LIB_1Rnd_SC500 : LIB_Bomb_VehicleMagazine_base {
        displayName = "SC-500 Bomb";
    };

    class LIB_6Rnd_M8_P47 : VehicleMagazine {
        displayName = "5 inch Rockets";
    };

    class LIB_8Rnd_82mmHE_BM37 : VehicleMagazine {
        displayName = "BM-37 82mm HE Mortar Bomb";
    };
    class LIB_8Rnd_81mmHE_GRWR34 : LIB_8Rnd_82mmHE_BM37 {
        displayName = "GrWr34 81mm HE Mortar Bomb";
    };
    class LIB_8Rnd_60mmHE_M2 : LIB_8Rnd_82mmHE_BM37 {
        displayName = "M2 60mm HE Mortar Bomb";
    };
    class LIB_82mm_BM37_SmokeShell : 8Rnd_82mm_Mo_Smoke_white {
        displayName = "BM-37 82mm Smoke Mortar Bomb";
    };
    class LIB_81mm_GRWR34_SmokeShell : 8Rnd_82mm_Mo_Smoke_white {
        displayName = "GrWr34 81mm Smoke Mortar Bomb";
    };
    class LIB_60mm_M2_SmokeShell : 8Rnd_82mm_Mo_Smoke_white {
        displayName = "M2 60mm Smoke Mortar Bomb";
    };

    class LIB_16Rnd_BM13 : VehicleMagazine {
        displayName = "BM-13 132mm Rocket";
    };

    class LIB_6Rnd_NbW41 : VehicleMagazine {
        displayName = "Nebelwerfer 41 15cm Rocket";
    };

    class LIB_5Rnd_NbW42 : VehicleMagazine {
        displayName = "Nebelwerfer 42 21cm Rocket";
    };

    class LIB_5x_61k : VehicleMagazine {
        displayName = "61-K OR-167 (HE)";
    };
    class LIB_5x_61kAP : LIB_5x_61k {
        displayName = "61-K BR-167 (AP)";
    };

    class LIB_80x_SprGr_FlaK_38 : VehicleMagazine {
        displayName = "FlaK-38";
    };
    class LIB_80x_SprGr_FlaK_38_APHE_T : LIB_80x_SprGr_FlaK_38 {
        displayName = "FlaK-38 (APHE-T)";
    };