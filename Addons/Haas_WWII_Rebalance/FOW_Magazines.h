
    class fow_fake : CA_Magazine {
        scope = 1;
    };

//Small arms magazines
    class fow_10Rnd_303 : CA_Magazine {
        displayName = "Lee Enfield, 10 Round Clip";
        descriptionShort = ".303 British, 10 Rounds, for use in the Lee Enfield";
        //ammo = "LIB_B_770x56_Ball_NoCartridge"; //TODO
        mass = 3.26;
    };

    class fow_10nd_792x57 : CA_Magazine {
        displayName = "G43, 10 Round Magazine";
        descriptionShort = "7.92x57mm, 10 Rounds, for use in the G43";
        ammo = "LIB_B_792x57_Ball_NoCartridge";
        mass = 3.26;
        scope = 1;
    };

    class fow_13Rnd_9x19 : CA_Magazine {
        displayName = "Browning Hi-Power, 13 Round Magazine";
        descriptionShort = "9x19mm, 13 Rounds, for use in the Browning Hi-Power";
        ammo = "LIB_B_9x19_Ball";
        mass = 1.86;
    };

    class fow_1Rnd_m6a1 : CA_LauncherMagazine {
        displayName = "Bazooka, 2.36-Inch Anti-Tank Rocket M6";
        descriptionShort = "2.36-Inch Anti-Tank Rocket M6, for use in the Bazooka";
        ammo = "LIB_60mm_M6";
        mass = 62.17;
    };

    class fow_1Rnd_m9a1 : 1Rnd_HE_Grenade_shell {
        displayName = "Grenade, Rifle, Antitank, M9A1";
        descriptionShort = "M9A1 HEAT Rifle Grenade, for use in the M7 Grenade Launcher";
        ammo = "LIB_G_M9A1";
        mass = 8.8;
    };

    class fow_1Rnd_piat_HE : 1Rnd_HE_Grenade_shell {
        displayName = "PIAT, HE Bomb";
        descriptionShort = "High Explosive bomb, for use in the PIAT";
        scope = 1;
        //ammo = "fow_g_piat_HE"; //TODO
        //mass = xx; //TODO
    };
    class fow_1Rnd_piat_HEAT : fow_1Rnd_piat_HE {
        displayName = "PIAT, HEAT Bomb";
        descriptionShort = "High Explosive Anti-Tank bomb, for use in the PIAT";
        scope = 2;
        //ammo = "LIB_G_89mm_PIAT"; //TODO
        //mass = xx; //TODO
    };

    class fow_1Rnd_pzfaust_30_klein : CA_Magazine {
        displayName = "Panzerfaust 30 Klein Warhead";
        displayNameShort = "Warhead from Panzerfaust 30 Klein";
        //ammo = "LIB_Faustpatrone";
        mass = 0.1;
    };
    class fow_1Rnd_pzfaust_30 : fow_1Rnd_pzfaust_30_klein {
        displayName = "Panzerfaust 30 Warhead";
        displayNameShort = "Warhead from Panzerfaust 30";
        //ammo = "LIB_PzFaust_30m";
        mass = 0.1;
    };
    class fow_1Rnd_pzfaust_60 : fow_1Rnd_pzfaust_30 {
        displayName = "Panzerfaust 60 Warhead";
        displayNameShort = "Warhead from Panzerfaust 60";
        //ammo = "LIB_PzFaust_60m";
        mass = 0.1;
    };
    class fow_1Rnd_pzfaust_100 : fow_1Rnd_pzfaust_30 {
        displayName = "Panzerfaust 100 Warhead";
        displayNameShort = "Warhead from Panzerfaust 100";
        //ammo = "fow_R_pzfaust_100"; //TODO
        mass = 0.1;
    };

    class fow_1Rnd_type10 : CA_Magazine {
        displayName = "Type 10 Flare Pistol, White Flare";
        descriptionShort = "White Flare, for use in the Type 10 Flare Pistol";
        ammo = "LIB_40mm_White";
    };

    class fow_1Rnd_type2_40 : 1Rnd_HE_Grenade_shell {
        displayName = "Type 2 Rifle Grenade, 40mm";
        descriptionShort = "Type 2 Rifle Grenade, 40mm, for use in the Type 99 Arisaka";
        //ammo = "G_40mm_HE";
    };

    class fow_15Rnd_762x33 : CA_Magazine {
        displayName = "M1 Carbine, 15 Round Magazine";
        descriptionShort = ".30 Carbine, 15 Rounds, for use in the M1 Carbine";
        ammo = "LIB_B_762x33_Ball";
        mass = 2.79;
        scope = 1;
    };
    class fow_30Rnd_762x33_2PzD : fow_15Rnd_762x33 {
        displayName = "M2 Carbine, 30 Round Magazine";
        descriptionShort = ".30 Carbine, 30 Rounds, for use in the M2 Carbine";
        count = 30;
        mass = 5.5;
        scope = 1;
    };

    class fow_20Rnd_45acp : CA_Magazine {
        displayName = "M55 Reising, 20 Round Magazine";
        descriptionShort = ".45 ACP, 20 Rounds, for use in the M55 Reising";
        ammo = "LIB_B_45ACP_Ball";
        mass = 7;
    };
    class fow_12Rnd_45acp_2PzD : fow_20Rnd_45acp {
        displayName = "M55 Reising, 12 Round Magazine";
        descriptionShort = ".45 ACP, 12 Rounds, for use in the M55 Reising";
        count = 12;
        mass = 4.3;
    };

    class fow_20Rnd_762x63 : CA_Magazine {
        displayName = "M1918A2 BAR, 20 Round Magazine";
        descriptionShort = ".30-06, 20 Rounds, for use in the M1918A2 BAR";
        ammo = "LIB_B_762x63_Ball";
        mass = 5.6;
        tracersEvery = 3;
        scope = 1;
        ace_isbelt = 1;
    };

    class fow_30Rnd_762x63 : CA_Magazine {
        displayName = "M1919, 30 Round Belt";
        descriptionShort = ".30-06, 30 Rounds, for use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball";
        lastRoundsTracer = 3;
        mass = 8.73;
        scope = 1;
        tracersEvery = 3;
        ace_isbelt = 1;
    };
    class fow_50Rnd_762x63 : fow_30Rnd_762x63 {
        displayName = "M1919, 50 Round Belt";
        descriptionShort = ".30-06, 50 Rounds, for use in the M1919 Machine Guns";
        mass = 14.55;
        scope = 1;
        ace_isbelt = 1;
    };
    class fow_100Rnd_762x63 : fow_30Rnd_762x63 {
        displayName = "M1919, 100 Round Belt";
        descriptionShort = ".30-06, 100 Rounds, for use in the M1919 Machine Guns";
        count = 100;
        mass = 29.1;
        scope = 1;
        ace_isbelt = 1;
    };
    class fow_200Rnd_M1919_2PzD : fow_250Rnd_M1919 {
        displayName = "M1919, 200 Round Belt";
        descriptionShort = ".30-06, 200 Rounds, for use in the M1919 Machine Guns";
        count = 200;
        mass = 58.2;
        scope = 1;
    };
    class fow_150Rnd_M1919_2PzD : fow_250Rnd_M1919 {
        displayName = "M1919, 150 Round Belt";
        descriptionShort = ".30-06, 150 Rounds, for use in the M1919 Machine Guns";
        count = 150;
        mass = 43.65;
        scope = 1;
    };
    class fow_100Rnd_M1919_2PzD : fow_250Rnd_M1919 {
        displayName = "M1919, 100 Round Belt";
        descriptionShort = ".30-06, 100 Rounds, for use in the M1919 Machine Guns";
        count = 100;
        mass = 29.1;
        scope = 1;
    };

    class fow_30Rnd_303_bren : CA_Magazine {
        displayName = "Bren Gun, 30 Round Magazine";
        descriptionShort = ".303 British, 30 Rounds, for use in the Bren Gun";
        //ammo = "LIB_B_770x56_Ball"; //TODO
        //mass = xxx; //TODO
        lastRoundsTracer = 3;
        tracersEvery = 3;
        ace_isbelt = 1;
    };

    class fow_30Rnd_45acp : CA_Magazine {
        displayName = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun";
        descriptionShort = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun, which is not right";
        ammo = "LIB_B_45ACP_Ball";
        mass = 10.36;
        scope = 1;
    };
    class fow_30Rnd_45acp_T : fow_30Rnd_45acp {
        displayName = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun";
        descriptionShort = "(Legacy For Zeus Spawn) Works in Thompson and Grease Gun, which is not right";
        scope = 1;
    };
    class fow_20Rnd_45acp_M1_2PzD : fow_30Rnd_45acp {
        displayName = "Thompson, 20 Round Magazine";
        descriptionShort = ".45 ACP, 20 Rounds, for use in the M1928, M1, or M1A1 Thompson";
        count = 20;
        mass = 7;
    };
    class fow_20Rnd_45acp_T_M1_2PzD : fow_30Rnd_45acp_T {
        displayName = "Thompson, 20 Round Tracer Magazine";
        descriptionShort = ".45 ACP (T), 20 Rounds, for use in the M1928, M1, or M1A1 Thompson";
        count = 20;
        mass = 7;
    };
    class fow_30Rnd_45acp_M1_2PzD : fow_30Rnd_45acp {
        displayName = "Thompson, 30 Round Magazine";
        descriptionShort = ".45 ACP, 30 Rounds, for use in the M1928, M1, or M1A1 Thompson";
        mass = 10.36;
    };
    class fow_30Rnd_45acp_T_M1_2PzD : fow_30Rnd_45acp_T {
        displayName = "Thompson, 30 Round Tracer Magazine";
        descriptionShort = ".45 ACP (T), 30 Rounds, for use in the M1928, M1, or M1A1 Thompson";
    };
    class fow_30Rnd_45acp_M3_2PzD : fow_30Rnd_45acp {
        displayName = "M3 Grease Gun, 30 Round Magazine";
        descriptionShort = ".45 ACP, 30 Rounds, for use in the M3 Grease Gun";
    };
    class fow_30Rnd_45acp_T_M3_2PzD : fow_30Rnd_45acp_T {
        displayName = "M3 Grease Gun, 30 Round Tracer Magazine";
        descriptionShort = ".45 ACP, 30 Rounds, for use in the M3 Grease Gun";
    };

    class fow_30Rnd_77x58 : CA_Magazine {
        displayName = "Type 99 LMG, 30 Round Magazine";
        descriptionShort = "7.7x58mm, 30 Rounds, for use in the Type 99 LMG";
        ammo = "LIB_B_77x58_Ball";
        //mass = xxx; //TODO
        ace_isbelt = 1;
    };

    class fow_30Rnd_792x33 : CA_Magazine {
        displayName = "StG44, 30 Round Magazine";
        descriptionShort = "7.92x33mm, 30 Rounds, for use in the StG44";
        ammo = "LIB_B_792x33_Ball";
        mass = 8.91;
        scope = 1;
    };

    class fow_30Rnd_9x19_mab : CA_Magazine {
        displayName = "Beretta Model 38, 30 Round Magazine";
        descriptionShort = "9x19mm, 30 Rounds, for use in the Beretta Model 38";
        ammo = "LIB_B_9x19_Ball";
        mass = 6.51;
        scope = 1;
    };

    class fow_32Rnd_8x22 : CA_Magazine {
        displayName = "Type 100, 30 Round Magazine";
        descriptionShort = "8x22mm Nambu, 30 Rounds, for use in the Type 100 SMG";
        //ammo = "fow_B_8x22_Ball";  //TODO
        count = 30;
        //mass = xxx; //TODO
    };

    class fow_32Rnd_9x19_mp40 : CA_Magazine {
        displayName = "MP40, 32 Round Magazine";
        descriptionShort = "9x19mm, 32 Rounds, for use in the MP40";
        ammo = "LIB_B_9x19_Ball";
        mass = 6.11;
        scope = 1;
    };

    class fow_32Rnd_9x19_sten : CA_Magazine {
        displayName = "Sten Gun, 32 Round Magazine";
        descriptionShort = "9x19mm, 32 Rounds, for use in the Sten Gun";
        ammo = "LIB_B_9x19_Ball";
        mass = 6.11;
    };

    class fow_50Rnd_792x57 : CA_Magazine {
        displayName = "MG34/MG42, 50 Round Drum";
        descriptionShort = "7.92x57mm, 50 Rounds, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball";
        mass = 14.55;
        scope = 1;
        ace_isbelt = 1;
    };

    class fow_5Rnd_762x63 : CA_Magazine {
        displayName = "M1903 Springfield, 5 Round Clip";
        descriptionShort = "7.62x63mm, 5 Rounds, for use in the M1903 Springfield";
        ammo = "LIB_B_762x63_Ball";
        mass = 1.73;
        scope = 1;
    };

    class fow_5Rnd_77x58 : CA_Magazine {
        displayName = "Type 99 Rifle, 5 Round Clip";
        descriptionShort = "7.7x58mm, 5 Rounds, for use in the Type 99 Rifle";
        ammo = "LIB_B_77x58_Ball_NoCartridge";
        mass = 1.74; //TODO - double check
    };

    class fow_5Rnd_792x57 : CA_Magazine {
        displayName = "K98k, 5 Round Clip";
        descriptionShort = "7.92x57mm, 5 Rounds, for use in the K98k";
        ammo = "LIB_B_792x57_Ball";
        mass = 1.85;
        scope = 1;
    };

    class fow_20Rnd_792x57 : fow_5Rnd_792x57 {
        displayName = "FG42, 20 Round Magazine";
        descriptionShort = "7.92x57mm, 20 Rounds, for use in the FG42";
        mass = 6.52;
        scope = 1;
    };

    class fow_6Rnd_455 : CA_Magazine {
        displayName = "Webley Mk IV, 6 Rounds";
        descriptionShort = ".455 Webley, 6 Rounds, for use in the Webley Mk IV";
        ammo = "LIB_B_45ACP_Ball";
        //mass = xxx; //TODO
    };

    class fow_6Rnd_12G_Slug : CA_Magazine {
        displayName = "Shotgun Slugs, 12 Gauge, 5";
        descriptionShort = "12 Gauge Slugs, 5 Rounds, for use in the Winchester M12";
        ammo = "LEN_B_12Gauge_Slug";
        count = 5;
        picture = "\fow\fow_weapons\m1912\data\UI\m_12g_s_ca.paa";
        mass = 2.5;
        scope = 2;
    };
    class fow_6Rnd_12G_Pellets : fow_6Rnd_12G_Slug {
        displayName = "Shotgun Buckshot, 12 Gauge, 5";
        descriptionShort = "12 Gauge Buckshot, 5 Rounds, for use in the Winchester M12";
        ammo = "LEN_B_12Gauge_Pellets";
        count = 5;
        picture = "\fow\fow_weapons\m1912\data\UI\m_12g_p_ca.paa";
        scope = 2;
        mass = 2.5;
    };
    class fow_5Rnd_12G_Slug : fow_6Rnd_12G_Slug {
        displayName = "Shotgun Slugs, 12 Gauge, 4";
        descriptionShort = "12 Gauge Slugs, 4 Rounds, for use in the Ithaca 37 or Winchester M12";
        count = 4;
        scope = 2;
        mass = 2;
    };
    class fow_5Rnd_12G_Pellets : fow_6Rnd_12G_Pellets {
        displayName = "Shotgun Buckshot, 12 Gauge, 4";
        descriptionShort = "12 Gauge Buckshot, 4 Rounds, for use in the Ithaca 37 or Winchester M12";
        count = 4;
        mass = 2;
        scope = 2;
    };

    class fow_7Rnd_45acp : CA_Magazine {
        displayName = "M1911A1, 7 Round Magazine";
        descriptionShort = ".45 ACP, 7 Rounds, for use in the M1911A1";
        ammo = "LIB_B_45ACP_Ball";
        mass = 2.76;
        scope = 1;
    };

    class fow_7Rnd_765x17 : CA_Magazine {
        displayName = "Walther PPK, 7 Round Magazine";
        descriptionShort = "7.65x17mm, 7 Rounds, for use in the Walther PPK";
        ammo = "LEN_B_765x17_Ball";
        mass = 1.31;
        scope = 1;
    };
    class fow_8Rnd_765x17 : fow_7Rnd_765x17 {
        displayName = "Welrod, 8 Round Magazine";
        descriptionShort = ".32 ACP, 8 Rounds, for use in the Welrod";
        ammo = "LEN_B_765x17_Ball";
        mass = 1.5;
    };

    class fow_8Rnd_762x63 : CA_Magazine {
        displayName = "M1 Garand, 8 Round Clip";
        descriptionShort = ".30-06, 8 Rounds, for use in the M1 Garand";
        ammo = "LIB_B_762x63_Ball";
        mass = 2.5;
        scope = 1;
    };
    class fow_8Rnd_762x63_T : fow_8Rnd_762x63 {
        displayName = "M1 Garand, 8 Round Clip, Tracer";
        descriptionShort = ".30-06, 8 Rounds, Tracer, for use in the M1 Garand";
        scope = 1;
    };

    class fow_8Rnd_8x22 : CA_Magazine {
        displayName = "Type 14 Nambu, 8 Round Magazine";
        descriptionShort = "8x22mm Nambu, 8 Rounds, for use in the Type 14 Nambu";
        //ammo = "fow_B_8x22_Ball"; //TODO
        //mass = xxx; //TODO
    };

    class fow_8Rnd_9x19 : CA_Magazine {
        displayName = "P08, 8 Round Magazine";
        descriptionShort = "9x19mm, 8 Rounds, for use in the P08";
        ammo = "LIB_B_9x19_Ball";
        mass = 1.86;
        scope = 1;
    };

    class fow_8Rnd_9x19_Vis_2PzD : fow_8Rnd_9x19 {
        displayName = "wz. 35 Vis, 8 Round Magazine";
        descriptionShort = "9x19mm, 8 Rounds, for use in the Pistolet wz. 35 Vis";
        mass = 1.86;
    };

//Vehicle Magazines

    class fow_1000Rnd_77x56_Tracer_Yellow : VehicleMagazine {
        displayName = "Type 97 1000 Round Belt";
        ammo = "fow_B_77x56_Ball_Tracer_Yellow"; //TODO
    };
/*
    class fow_10Rnd_57mm_APCBC : VehicleMagazine {
        ammo = "fow_Sh_57mm_APCBC";
    };

    class fow_10Rnd_57mm_APCR : VehicleMagazine {
        ammo = "fow_Sh_57mm_APCR";
    };

    class fow_10Rnd_57mm_APDS : VehicleMagazine {
        ammo = "fow_Sh_57mm_APDS";
    };
*/
    class fow_120Rnd_20mm_shells : 1000Rnd_20mm_shells {
        displayName = "Type 99, 120 Round Belt";
        ammo = "fow_B_20mm_Tracer_Yellow";
    };

    class fow_1600Rnd_127x99_Tracer_Red : 500Rnd_127x99_mag_Tracer_Red {
        displayName = "M2 HMG, 1600 Round Belt";
        ammo = "LIB_B_127x99_Ball";
    };
    class fow_2400Rnd_127x99_Tracer_Red : fow_1600Rnd_127x99_Tracer_Red {
        displayName = "M2 HMG, 2400 Round Belt";
    };

    class fow_1Rnd_60mm_m2_HE : VehicleMagazine {
        ammo = "LIB_Sh_60_HE";
    };

    class fow_1Rnd_60mm_m2_ILL : VehicleMagazine {
        ammo = "Flare_82mm_AMOS_White";
    };

    class fow_1Rnd_60mm_m2_SMOKE : VehicleMagazine {
        ammo = "Smoke_82mm_AMOS_White";
    };

    class fow_1Rnd_81mm_type97_HE : VehicleMagazine {
        ammo = "LIB_Sh_81_HE";
    };

    class fow_1Rnd_81mm_type97_ILL : VehicleMagazine {
        ammo = "Flare_82mm_AMOS_White";
    };

    class fow_1Rnd_81mm_type97_SMOKE : VehicleMagazine {
        ammo = "Smoke_82mm_AMOS_White";
    };

    class fow_200Rnd_792x57 : VehicleMagazine {
        displayName = "MG34/MG42, 200 Round Belt";
        ammo = "LIB_B_792x57_Ball";
    };
/*
    class fow_20Rnd_20mm_AP : VehicleMagazine {
        ammo = "fow_B_20mm_AP";
        count = 20;
        tracersEvery = 1;
    };

    class fow_20Rnd_20mm_HE : VehicleMagazine {
        ammo = "fow_B_20mm_HE";
        count = 20;
        tracersEvery = 1;
    };

    class fow_20Rnd_57mm_AP : VehicleMagazine {
        ammo = "fow_Sh_57mm_AP";
    };
*/
    class fow_20Rnd_77x58_Type97 : VehicleMagazine {
        displayName = "Type 97, 20 Round Strip";
        ammo = "LIB_B_77x58_Ball";
        scope = 1;
    };

    class fow_250Rnd_792x57 : VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt";
        descriptionShort = "MG34/MG42, 250 Round Belt";
        mass = 72.75;
        count = 250;
        scope = 1;
    };

    class fow_250Rnd_vickers : VehicleMagazine {
        displayName = "Vickers Gun, 250 Round Belt";
        //ammo = "LIB_B_770x56_Ball"; //TODO
    };

    class fow_27Rnd_37mm_M51_APC : VehicleMagazine {
        displayName = "37mm M51 AP";
        ammo = "fow_Sh_37mm_M51_APC";
    };
/*
    class fow_27Rnd_75mm_M72_AP : VehicleMagazine {
        ammo = "fow_Sh_75mm_M72_AP";
    };
*/
    class fow_30Rnd_303_bren_mounted : VehicleMagazine {
        displayName = "Bren Gun, 30 Round Magazine";
        //ammo = "LIB_B_770x56_Ball"; //TODO
        lastRoundsTracer = 3;
        tracersEvery = 3;
    };

    class fow_30Rnd_37mm_M74_AP : VehicleMagazine {
        displayName = "37mm M74 APC";
        ammo = "fow_Sh_37mm_M74_AP";
    };
/*
    class fow_30Rnd_57mm_HE : VehicleMagazine {
        ammo = "fow_Sh_57mm_HE";
    };
*/
    class fow_30Rnd_75mm_M61_APCBC : VehicleMagazine {
        displayName = "75mm M61 APCBC";
        ammo = "fow_Sh_75mm_M61_APCBC";
    };
/*
    class fow_30Rnd_75mm_pzgr3942_APCBC_HE : VehicleMagazine {
        ammo = "fow_Sh_75mm_pzgr3942_APCBC_HE";
    };

    class fow_30Rnd_75mm_pzgr4042_APCR : VehicleMagazine {
        ammo = "fow_Sh_75mm_pzgr4042_APCR";
    };

    class fow_30Rnd_75mm_sprg42_HE : VehicleMagazine {
        ammo = "fow_Sh_75mm_sprg42_HE";
    };
*/
    class fow_30Rnd_77x58_Type92 : VehicleMagazine {
        ammo = "LIB_B_77x58_Ball";
    };
/*
    class fow_30Rnd_88mm_AP : VehicleMagazine {
        ammo = "fow_Sh_88mm_AP";
    };

    class fow_30Rnd_88mm_HE : VehicleMagazine {
        ammo = "fow_Sh_88mm_HE";
    };
*/
    class fow_40Rnd_37mm_M63_HE : VehicleMagazine {
        displayName = "37mm M63 HE";
        ammo = "fow_Sh_37mm_M63_HE";
    };

    class fow_40Rnd_75mm_M48_HE : VehicleMagazine {
        displayName = "75mm M48 HE";
        ammo = "fow_Sh_75mm_M48_HE";
    };

    class fow_450Rnd_20mm_shells : 1000Rnd_20mm_shells {
        displayName = "AN/M2 20mm, 450 Round Belt";
        ammo = "fow_B_20mm_Tracer_Yellow";
    };
/*
    class fow_49Rnd_37mm_APHE : VehicleMagazine {
        ammo = "fow_Sh_37mm_APHE";
    };

    class fow_49Rnd_37mm_HE : VehicleMagazine {
        ammo = "fow_Sh_37mm_HE";
    };
*/ 
    class fow_50Rnd_M1919 : VehicleMagazine {
        displayName = "M1919, 50 Round Belt";
        ammo = "LIB_B_762x63_Ball";
    };
    class fow_250Rnd_M1919 : fow_50Rnd_M1919 {
        displayName = "M1919, 250 Round Belt";
        descriptionShort = ".30-06, 250 Rounds, for use in the M1919 Machine Guns";
        count = 250;
        mass = 72.75;
        scope = 1;
    };

    class fow_8Rnd_60mm_m2_HE : VehicleMagazine {
        ammo = "LIB_Sh_60_HE";
    };

    class fow_8Rnd_60mm_m2_ILL : fow_8Rnd_60mm_m2_HE {
        ammo = "Flare_82mm_AMOS_White";
    };

    class fow_8Rnd_60mm_m2_SMOKE : fow_8Rnd_60mm_m2_HE {
        ammo = "Smoke_82mm_AMOS_White";
    };

    class fow_8Rnd_81mm_type97_HE : VehicleMagazine {
        ammo = "LIB_Sh_81_HE";
    };

    class fow_8Rnd_81mm_type97_ILL : fow_8Rnd_81mm_type97_HE {
        ammo = "Flare_82mm_AMOS_White";
    };

    class fow_8Rnd_81mm_type97_SMOKE : fow_8Rnd_81mm_type97_HE {
        ammo = "Smoke_82mm_AMOS_White";
    };

//Grenades
    class fow_e_m24 : HandGrenade {
        displayName = "M24 (HE)";
        displayNameShort = "M24 (HE)";
        descriptionShort = "Model 1924 Stielhandgranate, standard German stick grenade.";
        initSpeed = 24;
        mass = 13.117;
    };

    class fow_e_m24_at : HandGrenade {
        displayName = "M24 (Geballte Ladung)";
        displayNameShort = "M24 (AT)";
        descriptionShort = "Model 1924 Stielhandgranate (Geballte Ladung), bundled charge for demolitions or anti-vehicle.";
        initSpeed = 10;
        mass = 91.822;
    };

    class fow_e_m24_spli : HandGrenade {
        displayName = "M24 (Splitterring)";
        displayNameShort = "M24 (Frag)";
        descriptionShort = "Model 1924 Stielhandgranate (Splitterring), M24 with fragmentation sleeve.";
        initSpeed = 22;
        mass = 17.527;
    };

    class fow_e_m24K : fow_e_m24 {
        displayName = "M24 (Kalt)";
        displayNameShort = "M24 (HE)";
        descriptionShort = "Model 1924 Stielhandgranate (Kalt), cold weather version.";
        initSpeed = 24;
        mass = 13.117;
    };

    class fow_e_m24K_at : fow_e_m24_at {
        displayName = "M24 (Kalt, Geballte Ladung)";
        displayNameShort = "M24 (AT)";
        descriptionShort = "Model 1924 Stielhandgranate (Geballte Ladung), bundled charge for demolitions or anti-vehicle use.";
        initSpeed = 10;
        mass = 91.822;
    };

    class fow_e_m24K_spli : fow_e_m24_spli {
        displayName = "M24 (Kalt, Splitterring)";
        displayNameShort = "M24 (Frag)";
        descriptionShort = "Model 1924 Stielhandgranate (Kalt, Splitterring), cold weather version with fragmentation sleeve.";
        initSpeed = 22;
        mass = 17.527;
    };

    class fow_e_mk2 : HandGrenade {
        displayName = "Mk 2 Grenade";
        displayNameShort = "Mk 2 (Frag)";
        descriptionShort = "Mk 2 Grenade, the standard US fragmentation grenade.";
        initSpeed = 20;
        mass = 13.117;
    };

    class fow_e_nb39b : HandGrenade {
        displayName = "Nb39B";
        displayNameShort = "Nb39B (Smoke)";
        descriptionShort = "Nebelhandgranate 39, German smoke grenade, 120 second burn time.";
        initSpeed = 20;
        mass = 18.739;
    };

    class fow_e_no36mk1 : HandGrenade {
        displayName = "No. 36 Mk. 1";
        displayNameShort = "No. 36 Mk. 1 (Frag)";
        descriptionShort = "No. 36 Mk. 1, standard British fragmentation grenade.";
        initSpeed = 18;
        mass = 16.865;
    };

    class fow_e_no69 : HandGrenade {
        displayName = "No. 69";
        displayNameShort = "No. 69 (HE)";
        descriptionShort = "No. 69, British high explosive grenade.";
        initSpeed = 25;
        mass = 8.444;
    };

    class fow_e_no73 : HandGrenade {
        displayName = "No. 73 Thermos Bomb";
        displayNameShort = "No. 73 (HE)";
        descriptionShort = "No. 73 Thermos Bomb, very large British high explosive grenade for demolitions or anti-vehicle use.";
        initSpeed = 12;
        mass = 44.092;
    };

    class fow_e_no77 : HandGrenade {
        displayName = "No. 77 Bursting Smoke Grenade";
        displayNameShort = "No. 77 (WP)";
        descriptionShort = "No. 77 Bursting Smoke Grenade, explodes into a cloud of white phosphorus, 90 second burn time.";
        initSpeed = 25;
        mass = 8.444;
    };

    class fow_e_no79 : HandGrenade {
        displayName = "No. 79 MK. 1";
        displayNameShort = "No. 79 (Smoke)";
        descriptionShort = "No. 79 MK. 1 Smoke Grenade, produces a steady steam of smoke, 130 second burn time.";
        initSpeed = 18;
        mass = 16.250;
    };

    class fow_e_no82 : HandGrenade {
        displayName = "No. 82 Gammon Bomb";
        displayNameShort = "No. 82 (HE)";
        descriptionShort = "No. 82 Gammon Bomb, large British high explosive grenade for demolitions or anti-vehicle use.";
        initSpeed = 15;
        mass = 27.337;
    };

    class fow_e_tnt_halfpound : HandGrenade {
        displayName = "TNT (1/2 lb)";
        displayNameShort = "TNT (1/2 lb, HE)";
        descriptionShort = "TNT (1/2 lb)";
        initSpeed = 29;
        mass = 6.000;
    };

    class fow_e_tnt_onepound_mag : SatchelCharge_Remote_Mag {
        displayName = "TNT (1 lb)";
        displayNameShort = "TNT (1 lb)";
    };
    class fow_e_tnt_twopound_mag : fow_e_tnt_onepound_mag {
        displayName = "TNT (2 lbs)";
        displayNameShort = "TNT (2 lbs)";
    };
    class fow_e_tnt_twohalfpound_mag : fow_e_tnt_onepound_mag {
        displayName = "TNT (2 1/2 lbs)";
        displayNameShort = "TNT (2.5 lbs)";
    };

    class fow_e_type97 : HandGrenade {
        displayName = "Type 97";
        displayNameShort = "Type 97 (Frag)";
        descriptionShort = "Type 97 Hand Grenade, Japanese fragmentation grenade.";
        initSpeed = 24;
        mass = 9.921;
    };

    class fow_e_type99 : HandGrenade {
        displayName = "Type 99";
        displayNameShort = "Type 99 (Frag)";
        descriptionShort = "Type 99, Hand Grenade, Japanese fragmentation grenade.";
        initSpeed = 28;
        mass = 6.614;
    };

    class fow_e_type99_at : HandGrenade {
        displayName = "Type 99 Mine";
        displayNameShort = "Type 99 (AT)";
        descriptionShort = "Type 99 Mine, Japanese anti-tank grenade.";
        initSpeed = 16;
        mass = 26.676;
    };
