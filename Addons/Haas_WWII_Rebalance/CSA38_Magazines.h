    class CSA38_Magazine;
    class CSA38_PistolMagazine;
    class CSA38_HandGrenade;
    class CSA38_VehicleMagazine;

// Pistol magazines
    class csa38_7_63mm_10xMauser : CSA38_PistolMagazine {
        displayName = "M1930 C-96 Mauser, 10 Round Magazine";
        displayNameShort = "7.63x25mm";
        descriptionShort = "7.63x25mm, 10 Rounds, for use in the M1930 C-96 Mauser";
        ammo = "LIB_B_762x25_Ball";
        mass = 1.8;
    };

    class csa38_7_65mm_8xBrow : CSA38_PistolMagazine {
        displayName = "Walther PP, 8 Round Magazine";
        displayNameShort = ".32 ACP";
        descriptionShort = ".32 ACP, 8 Rounds, for use in the Walther PP";
        ammo = "LIB_B_765x17_Ball";
        mass = 1.5;
    };

    class csa38_7_65mm_7xBrow : CSA38_PistolMagazine {
        displayName = "Walther PPK, 7 Round Magazine";
        displayNameShort = ".32 ACP";
        descriptionShort = ".32 ACP, 8 Rounds, for use in the Walther PPK";
        ammo = "LIB_B_765x17_Ball";
        mass = 1.31;
    };

    class CSA38_9mm_8xBrowning : CSA38_PistolMagazine {
        displayName = "vz. 22, 8 Round Magazine";
        displayNameShort = ".380 ACP";
        descriptionShort = ".380 ACP, 8 Rounds, for use in the vz. 22 and vz. 24 pistol";
        ammo = "LIB_B_9x17_Ball";
        mass = 1.86;
    };

    class CSA38_6_35mm_8xBrowning : CSA38_9mm_8xBrowning {
        displayName = "vz. 36, 8 Round Magazine";
        displayNameShort = ".25 ACP";
        descriptionShort = ".25 ACP, 8 Rounds, for use in the vz. 36";
        ammo = "LIB_B_635x16_Ball";
        mass = 1.86;
    };
    class CSA38_7_65mm_8xBrowning : CSA38_9mm_8xBrowning {
        displayName = "vz. 27, 8 Round Magazine";
        displayNameShort = ".32 ACP";
        descriptionShort = ".32 ACP, 8 Rounds, for use in the vz. 27";
        ammo = "LIB_B_765x17_Ball";
        mass = 1.31;
    };
    class CSA38_7_65mm_8xBrowningSD : CSA38_9mm_8xBrowning {
        displayName = "vz. 27, 8 Round Magazine";
        displayNameShort = ".32 ACP";
        descriptionShort = ".32 ACP, 8 Rounds, for use in the vz. 27";
        ammo = "LIB_B_765x17_Ball";
        mass = 1.31;
        scope = 1;
    };

    class csa38_9mm_8xLuger : CSA38_PistolMagazine {
        displayName = "P08, 8 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 8 Rounds, for use in the P08";
        ammo = "LIB_B_9x19_Ball";
        mass = 1.86;
        scope = 1;
    };

    class CSA38_9mm_9xBrowning : CSA38_PistolMagazine {
        displayName = "vz. 38, 9 Round Magazine";
        displayNameShort = ".380 ACP";
        descriptionShort = ".380 ACP, 9 Rounds, for use in the vz. 38";
        ammo = "LIB_B_9x17_Ball";
        mass = 2.09;
    };
// End Pistol magazines

// Rifle magazines
    class CSA38_7_7_10x56R : CSA38_Magazine {
        displayName = "Lee Enfield, 10 Round Clip";
        displayNameShort = ".303 British";
        descriptionShort = ".303 British, 10 Rounds, for use in the Lee Enfield";
        ammo = "LIB_B_770x56_Ball_NoCartridge";
        mass = 3.26;
        scope = 1;
    };

    class CSA38_7_7_10x56RAP : CSA38_7_7_10x56R {
        displayName = "Lee Enfield, 10 Round Clip, AP";
        displayNameShort = ".303 British AP";
        descriptionShort = ".303 British, 10 Rounds, AP, for use in the Lee Enfield";
        ammo = "LIB_B_770x56_Ball_NoCartridge_AP";
    };

    class CSA38_7_92_5xMauser : CSA38_Magazine {
        displayName = "Mauser, 5 Round Clip";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 5 Rounds, for use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_NoCartridge";
        mass = 1.85;
        lastRoundsTracer = 0;
        tracersEvery = 0;
    };

    class csa38_7_92_5xMauserKAR : CSA38_7_92_5xMauser {
        displayName = "K98k, 5 Round Clip";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 5 Rounds, for use in the K98k";
        ammo = "LIB_B_792x57_Ball_NoCartridge";
        mass = 1.85;
        lastRoundsTracer = 0;
        tracersEvery = 0;
    };

    class CSA38_7_92_5xMauser2 : CSA38_7_92_5xMauser {
        displayName = "Mauser, 5 Round Clip, AP";
        displayNameShort = "7.92x57mm AP";
        descriptionShort = "7.92x57mm, 5 Rounds, AP, for use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_SMK_NoCartridge";
        lastRoundsTracer = 0;
        tracersEvery = 0;
    };

    class csa38_7_92_5xMauserKAR2 : CSA38_7_92_5xMauser {
        displayName = "K98k, 5 Round Clip, S.m.K. AP";
        displayNameShort = "7.92x57mm S.m.K. AP";
        descriptionShort = "7.92x57mm, 5 Rounds, S.m.K. AP, for use in the K98k";
        ammo = "LIB_B_792x57_Ball_SMK_NoCartridge";
        lastRoundsTracer = 0;
        tracersEvery = 0;
    };

    class CSA38_7_92_5xMauser3 : CSA38_7_92_5xMauser {
        displayName = "Mauser, 5 Round Clip";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 5 Rounds, for use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_NoCartridge";
        lastRoundsTracer = 0;
        tracersEvery = 0;
    };

    class CSA38_7_5_5xMAS : CSA38_7_92_5xMauser {
        displayName = "MAS 36, 5 Round Clip";
        displayNameShort = "7.5x54mm French";
        descriptionShort = "7.5x54mm French, 5 Rounds, for use in the MAS 36";
        ammo = "CSA38_7_5MAS";
        mass = 1.85;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class CSA38_7_92_20xMauserCZ : CSA38_7_92_5xMauser {
        displayName = "Mauser, 4x 5 Round Clips";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 20 Rounds, for use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_NoCartridge";
        mass = 7.4;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class csa38_7_92_20xMauserKAR : csa38_7_92_5xMauserKAR {
        displayName = "K98k, 4x 5 Round Clips";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 20 Rounds, for use in the K98k";
        ammo = "LIB_B_792x57_Ball_NoCartridge";
        mass = 7.4;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class CSA38_7_92_20xMauserCZ2 : CSA38_7_92_5xMauser2 {
        displayName = "Mauser, 4x 5 Round Clips, AP";
        displayNameShort = "7.92x57mm AP";
        descriptionShort = "7.92x57mm, 20 Rounds, AP, for use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_SMK_NoCartridge";
        mass = 7.4;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class CSA38_7_92_20xMauserkAR2 : csa38_7_92_5xMauserKAR {
        displayName = "K98k, 4x 5 Round Clips, S.m.K. AP";
        displayNameShort = "7.92x57mm S.m.K. AP";
        descriptionShort = "7.92x57mm, 20 Rounds, S.m.K. AP, for use in the K98k";
        ammo = "LIB_B_792x57_Ball_SMK_NoCartridge";
        mass = 7.4;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
// End Rifle magazines

// SMG magazines
    class csa38_32_9x19 : CSA38_Magazine {
        displayName = "Sten Gun, 32 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 32 Rounds, for use in the Sten Gun";
        ammo = "LIB_B_9x19_Ball";
        mass = 6.11;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class csa38_9_MM_32xMP18 : CSA38_Magazine {
        displayName = "P08, 32 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 32 Rounds, for use in the P08 and MP18";
        ammo = "LIB_B_9x19_Ball";
        mass = 8.11;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class csa38_9_MM_32xMP28 : CSA38_Magazine {
        displayName = "MP28, 32 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 32 Rounds, for use in the MP28";
        ammo = "LIB_B_9x19_Ball";
        mass = 6.11;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class csa38_9_MM_20xMP28 : csa38_9_MM_32xMP28 {
        displayName = "MP28, 20 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 20 Rounds, for use in the MP28";
        ammo = "LIB_B_9x19_Ball";
        count = 20;
        mass = 4;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class csa38_9_MM_32xMP35 : CSA38_Magazine {
        displayName = "MP35, 32 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 32 Rounds, for use in the MP35";
        ammo = "LIB_B_9x19_Ball";
        mass = 6.11;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class csa38_9_MM_24xMP35 : csa38_9_MM_32xMP35 {
        displayName = "MP35, 24 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 24 Rounds, for use in the MP35";
        ammo = "LIB_B_9x19_Ball";
        mass = 4.6;
        count = 24;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class csa38_9_MM_20xMP35 : csa38_9_MM_32xMP35 {
        displayName = "MP35, 20 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 20 Rounds, for use in the MP35";
        ammo = "LIB_B_9x19_Ball";
        mass = 4;
        mass = 6.11;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class csa38_9_MM_32xPARA : CSA38_Magazine {
        displayName = "MP40, 32 Round Magazine";
        displayNameShort = "9x19mm";
        descriptionShort = "9x19mm, 32 Rounds, for use in the MP40";
        ammo = "LIB_B_9x19_Ball";
        mass = 6.11;
        scope = 1;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class CSA38_9_mm_36xBrowning : CSA38_Magazine {
        displayName = "vz. 38, 36 Round Magazine";
        displayNameShort = ".380 ACP";
        descriptionShort = ".380 ACP, 36 Rounds, for use in the vz. 38";
        ammo = "LIB_B_9x17_Ball";
        mass = 7;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class CSA38_9_mm_96xBrowning : CSA38_Magazine {
        displayName = "vz. 38, 96 Round Magazine";
        displayNameShort = ".380 ACP";
        descriptionShort = ".380 ACP, 96 Rounds, for use in the vz. 38";
        ammo = "LIB_B_9x17_Ball";
        mass = 20;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class csa38_mas38mag : CSA38_Magazine {
        displayname = "MAS 38, 32 Round Magazine";
        displayNameShort = "7.65x20mm Longue";
        descriptionShort = "7.65x20mm Longue, 32 Rounds, for use in the MAS 38";
        ammo = "LIB_B_765x20_Ball";
        mass = 6.11;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
// End SMG magazines

// MG magazines
    class CSA38_7_7_30x56R : CSA38_Magazine {
        displayName = "Bren Gun, 30 Round Magazine";
        displayNameShort = ".303 British";
        descriptionShort = ".303 British, 30 Rounds, for use in the Bren Gun";
        ammo = "LIB_B_770x56_Ball";
        mass = 8.91;
        scope = 1;
    };

    class CSA38_7_7_30x56RAP : CSA38_7_7_30x56R {
        displayName = "Bren Gun, 30 Round Magazine, AP";
        displayNameShort = ".303 British AP";
        descriptionShort = ".303 British, 30 Rounds, AP, for use in the Bren Gun";
        ammo = "CSA38_7_70BritishAP";
        scope = 2;
    };

    class CSA38_7_7_100x56R : CSA38_7_7_30x56R {
        displayName = "Bren Gun, 100 Round Magazine";
        displayNameShort = ".303 British";
        descriptionShort = ".303 British, 100 Rounds, for use in the Bren Gun";
        ammo = "LIB_B_770x56_Ball";
        mass = 32;
        scope = 2;
    };

    class CSA38_7_7_100x56RAP : CSA38_7_7_100x56R {
        displayName = "Bren Gun, 100 Round Magazine, AP";
        displayNameShort = ".303 British AP";
        descriptionShort = ".303 British, 100 Rounds, AP, for use in the Bren Gun";
        ammo = "CSA38_7_70BritishAP";
        scope = 2;
    };

    class csa38_7_92_50xMauserMG : CSA38_Magazine {
        displayName = "MG34/MG42, 50 Round Drum";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 50 Rounds, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball";
        mass = 14.55;
    };

    class csa38_7_92_50xMauserMGAP : CSA38_7_92_50xMauserMG {
        displayName = "MG34/MG42, 50 Round Drum, S.m.K. AP";
        displayNameShort = "7.92x57mm S.m.K. AP";
        descriptionShort = "7.92x57mm, 50 Rounds, S.m.K. AP, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SMK";
        mass = 14.55;
    };

    class csa38_7_92_250xMauserMG : CSA38_7_92_50xMauserMG {
        displayName = "MG34/MG42, 250 Round Belt";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 250 Rounds, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball";
        mass = 72.75;
    };

    class csa38_7_92_250xMauserMGAP : CSA38_7_92_250xMauserMG {
        displayName = "MG34/MG42, 250 Round Belt, S.m.K. AP";
        displayNameShort = "7.92x57mm S.m.K. AP";
        descriptionShort = "7.92x57mm, 250 Rounds, S.m.K. AP, for use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SMK";
        mass = 72.75;
    };

    class csa38_7_92_30xMauserMG : CSA38_Magazine {
        displayName = "MG30, 30 Round Magazine";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 30 Round Magazine, for use in the MG30";
        ammo = "LIB_B_792x57_Ball";
        mass = 14.55;
    };

    class csa38_7_92_30xMauserMGAP : CSA38_7_92_30xMauserMG {
        displayName = "MG30, 30 Round Magazine, S.m.K. AP";
        displayNameShort = "7.92x57mm S.m.K. AP";
        descriptionShort = "7.92x57mm, 30 Round Magazine, S.m.K. AP, for use in the MG30";
        ammo = "LIB_B_792x57_Ball_SMK";
        mass = 14.55;
    };

    class CSA38_7_92_20xMauser : CSA38_7_92_5xMauser {
        displayName = "vz. 26, 20 Round Magazine";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 20 Rounds, for use in the vz. 26";
        ammo = "LIB_B_792x57_Ball";
        mass = 5.94;
    };

    class CSA38_7_92_30xMauser : CSA38_7_92_20xMauser {
        displayName = "vz. 26, 30 Round Magazine";
        displayNameShort = "";
        descriptionShort = "7.92x57mm, 30 Rounds, for use in the vz. 26";
        ammo = "LIB_B_792x57_Ball";
        mass = 8.91;
    };

    class CSA38_7_92_20xMauser2 : CSA38_7_92_20xMauser {
        displayName = "vz. 26, 20 Round Magazine, AP";
        displayNameShort = "7.92x57mm AP";
        descriptionShort = "7.92x57mm, 20 Rounds, AP, for use in the vz. 26";
        ammo = "LIB_B_792x57_Ball_SMK";
        mass = 5.94;
    };

    class csa38_7_92_30xMauser2 : CSA38_7_92_20xMauser2 {
        displayName = "vz. 26, 30 Round Magazine, AP";
        displayNameShort = "7.92x57mm AP";
        descriptionShort = "7.92x57mm, 30 Rounds, AP, for use in the vz. 26";
        ammo = "LIB_B_792x57_Ball_SMK";
        mass = 8.91;
    };

    class csa38_8x56_25xMannlicherMG : CSA38_Magazine {
        displayName = "Solothurn 31.M, 30 Round Magazine";
        displayNameShort = "7.92x57mm";
        descriptionShort = "7.92x57mm, 30 Round Magazine, for use in the Solothurn 31.M";
        ammo = "LIB_B_792x57_Ball";
        mass = 14.55;
    };
// End MG magazines

// Other magazines
// End Other magazines

// Grenades
    class CSA38_HandGrenade;

    class CSA38_Grg21: CSA38_HandGrenade {
        displayName = "vz. 21 Rifle Grenade";
        displayNameShort = "vz. 21 (HE)";
        descriptionShort = "vz. 21, rifle grenade";
        mass = 9.92;
    };

    class CSA38_rg21: CSA38_HandGrenade {
        displayName = "vz. 21 Hand Grenade";
        displayNameShort = "vz. 21 (HE)";
        descriptionShort = "vz. 21, hand grenade";
        initSpeed = 24;
        mass = 9.92;
    };

    class CSA38_F1: CSA38_HandGrenade {
        displayName = "F-1";
        displayNameShort = "F-1 (Frag)";
        descriptionShort = "F-1 Grenade, Russian copy of a French hand grenade.";
        initSpeed = 20;
        mass = 13.228;
    };

    class CSA38_rg34: CSA38_HandGrenade {
        displayName = "vz. 34";
        descriptionShort = "vz. 34 (HE)";
        displayNameShort = "vz. 34, Czech hand grenade";
        initSpeed = 26;
        mass = 7.716;
    };

    class CSA38_rg38: CSA38_HandGrenade {
        displayName = "vz. 38";
        descriptionShort = "vz. 38 (HE)";
        displayNameShort = "vz. 38, Czech hand grenade";
        initSpeed = 25;
        mass = 7.848;
    };

    class CSA38_Gsmoke: CSA38_HandGrenade {
        displayName = "Smoke Grenade";
        displayNameShort = "Smoke Grenade";
        descriptionShort = "Smoke Grenade";
        initSpeed = 25;
        mass = 7.8498;
    };

    class CSA38_shg24: CSA38_HandGrenade {
        displayName = "M24 (Splitterring)";
        displayNameShort = "M24 (Frag)";
        descriptionShort = "Model 1924 Stielhandgranate (Splitterring), M24 with fragmentation sleeve.";
        ammo = "fow_e_m24_spli";
        initSpeed = 22;
        mass = 17.527;
    };

    class CSA38_shg24t: CSA38_HandGrenade {
        displayName = "M24 (HE)";
        displayNameShort = "M24 (HE)";
        descriptionShort = "Model 1924 Stielhandgranate, standard German stick grenade.";
        ammo = "fow_e_m24";
        initSpeed = 24;
        mass = 13.117;
    };
// End Grenades

// Vehicle magazines
    class CSA38_7_7_30x56RMG : CSA38_VehicleMagazine {
        displayName = "Bren Gun, 30 Round Magazine";
        displayNameShort = ".303 British";
        descriptionShort = "Bren Gun, 30 Round Magazine";
        ammo = "LIB_B_770x56_Ball";
        mass = 8.91;
    };

    class CSA38_7_7_30x56RAPMG : CSA38_7_7_30x56RMG {
        displayName = "Bren Gun, 30 Round Magazine, AP";
        displayNameShort = ".303 British, AP";
        descriptionShort = "Bren Gun, 30 Round Magazine, AP";
        ammo = "LIB_B_770x56_Ball_AP";
    };

    class CSA38_7_7_100x56RMG : CSA38_VehicleMagazine {
        displayName = "Bren Gun, 100 Round Magazine";
        displayNameShort = ".303 British";
        descriptionShort = "Bren Gun, 100 Round Magazine";
        ammo = "LIB_B_770x56_Ball";
        mass = 32;
    };

    class CSA38_7_7_100x56RAPMG : CSA38_7_7_100x56RMG {
        displayName = "Bren Gun, 100 Round Magazine, AP";
        displayNameShort = ".303 British, AP";
        descriptionShort = "Bren Gun, 100 Round Magazine, AP";
        ammo = "LIB_B_770x56_Ball_AP";
    };

    class csa38_MG34mg : CSA38_VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt";
        displayNameShort = "MG34/MG42, 250 Rounds";
        descriptionShort = "MG34/MG42, 250 Round Belt";
        ammo = "LIB_B_792x57_Ball";
    };

    class csa38_MG34mgAP : CSA38_VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt, S.m.K. AP";
        displayNameShort = "MG34/MG42, 250 Rounds, S.m.K. AP";
        descriptionShort = "MG34/MG42, 250 Round Belt, S.m.K. AP";
        ammo = "LIB_B_792x57_Ball_SMK";
    };

    class CSA38_MG34mg2 : CSA38_VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt";
        displayNameShort = "MG34/MG42, 250 Rounds";
        descriptionShort = "MG34/MG42, 250 Round Belt";
        ammo = "LIB_B_792x57_Ball";
    };

    class CSA38_MG34mg2AP : CSA38_VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt, S.m.K. AP";
        displayNameShort = "MG34/MG42, 250 Rounds, S.m.K. AP";
        descriptionShort = "MG34/MG42, 250 Round Belt, S.m.K. AP";
        ammo = "LIB_B_792x57_Ball_SMK";
    };

    class CSA38_MG34mg3 : CSA38_VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt";
        displayNameShort = "MG34/MG42, 250 Rounds";
        descriptionShort = "MG34/MG42, 250 Round Belt";
        ammo = "LIB_B_792x57_Ball";
    };

    class CSA38_MG34mg3AP : CSA38_VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt, S.m.K. AP";
        displayNameShort = "MG34/MG42, 250 Rounds, S.m.K. AP";
        descriptionShort = "MG34/MG42, 250 Round Belt, S.m.K. AP";
        ammo = "LIB_B_792x57_Ball_SMK";
    };

    class CSA38_MG34mg4 : CSA38_VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt";
        displayNameShort = "MG34/MG42, 250 Rounds";
        descriptionShort = "MG34/MG42, 250 Round Belt";
        ammo = "LIB_B_792x57_Ball";
    };

    class CSA38_MG34mg4AP : CSA38_VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt, S.m.K. AP";
        displayNameShort = "MG34/MG42, 250 Rounds, S.m.K. AP";
        descriptionShort = "MG34/MG42, 250 Round Belt, S.m.K. AP";
        ammo = "LIB_B_792x57_Ball_SMK";
    };

    class CSA38_TKVZ24mag : CSA38_VehicleMagazine {
        displayName = "vz. 7/24, 250 Round Belt";
        displayNameShort = "vz. 7/24, 250 Rounds";
        descriptionShort = "vz. 7/24, 250 Round Belt";
        ammo = "LIB_B_792x57_Ball";
    };

    class CSA38_TKVZ24mag2 : CSA38_TKVZ24mag {
        displayName = "vz. 7/24, 250 Round Belt, S.m.K. AP";
        displayNameShort = "vz. 7/24, 250 Rounds, S.m.K. AP";
        descriptionShort = "vz. 7/24, 250 Round Belt, S.m.K. AP";
        ammo = "LIB_B_792x57_Ball_SMK";
    };

    class CSA38_ZB53mg : CSA38_VehicleMagazine {
        displayName = "ZB-53, 300 Round Magazine";
        displayNameShort = "ZB-53, 300 Rounds";
        descriptionShort = "7.92x57mm, 300 Rounds, for use in the ZB-53";
        ammo = "LIB_B_792x57_Ball";
    };

    class CSA38_ZB53mgG : CSA38_ZB53mg {
        displayName = "ZB-53, 300 Round Magazine";
        displayNameShort = "ZB-53, 300 Rounds";
        descriptionShort = "7.92x57mm, 300 Rounds, for use in the ZB-53";
        ammo = "LIB_B_792x57_Ball";
    };
    
    class CSA38_ZB53mg2 : CSA38_VehicleMagazine {
        displayName = "ZB-53, 300 Round Magazine, AP";
        displayNameShort = "ZB-53, 300 Rounds, AP";
        descriptionShort = "7.92x57mm, 300 Rounds, AP, for use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_SMK";
    };
    
    class CSA38_ZB53mg2G : CSA38_ZB53mg2 {
        displayName = "ZB-53, 300 Round Magazine, AP";
        displayNameShort = "ZB-53, 300 Rounds, AP";
        descriptionShort = "7.92x57mm, 300 Rounds, AP, for use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_SMK";
    };
    
    class CSA38_ZB53mg3 : CSA38_VehicleMagazine {
        displayName = "ZB-53, 100 Round Magazine";
        displayNameShort = "ZB-53, 100 Rounds";
        descriptionShort = "7.92x57mm, 100 Rounds, for use in the ZB-53";
        ammo = "LIB_B_792x57_Ball";
    };
    
    class CSA38_ZB53mg3G : CSA38_ZB53mg3 {
        displayName = "ZB-53, 100 Round Magazine";
        displayNameShort = "ZB-53, 100 Rounds";
        descriptionShort = "7.92x57mm, 100 Rounds, for use in the ZB-53";
        ammo = "LIB_B_792x57_Ball";
    };
    
    class CSA38_ZB53mg4 : CSA38_VehicleMagazine {
        displayName = "ZB-53, 100 Round Magazine, AP";
        displayNameShort = "ZB-53, 100 Rounds, AP";
        descriptionShort = "7.92x57mm, 100 Rounds, AP, for use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_SMK";
    };
    
    class CSA38_ZB53mg4G : CSA38_ZB53mg4 {
        displayName = "ZB-53, 100 Round Magazine, AP";
        displayNameShort = "ZB-53, 100 Rounds, AP";
        descriptionShort = "7.92x57mm, 100 Rounds, AP, for use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_SMK";
    };
    
    class CSA38_ZB53mg5 : CSA38_VehicleMagazine {
        displayName = "ZB-53, 200 Round Magazine";
        displayNameShort = "ZB-53, 200 Rounds";
        descriptionShort = "7.92x57mm, 200 Rounds, for use in the ZB-53";
        ammo = "LIB_B_792x57_Ball";
    };
    
    class CSA38_ZB53mg5G : CSA38_ZB53mg5 {
        displayName = "ZB-53, 200 Round Magazine";
        displayNameShort = "ZB-53, 200 Rounds";
        descriptionShort = "7.92x57mm, 200 Rounds, for use in the ZB-53";
        ammo = "LIB_B_792x57_Ball";
    };
    
    class CSA38_ZB53mg6 : CSA38_ZB53mg5 {
        displayName = "ZB-53, 200 Round Magazine, AP";
        displayNameShort = "ZB-53, 200 Rounds, AP";
        descriptionShort = "7.92x57mm, 200 Rounds, AP, for use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_SMK";
    };
    
    class CSA38_ZB53mg6G : CSA38_ZB53mg6 {
        displayName = "ZB-53, 200 Round Magazine, AP";
        displayNameShort = "ZB-53, 200 Rounds, AP";
        descriptionShort = "7.92x57mm, 200 Rounds, AP, for use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_SMK";
    };
    class csa38_8_00_5xMannlicher : CSA38_Magazine {
        displayName = "Mannlicher M1895, 5 Round Clip";
        displayNameShort = "Mannlicher M1895, 5 Rounds";
        descriptionShort = "7.92x57mm, 5 Rounds, for use in the Mannlicher M1895";
    };
// End Vehicle magazines
