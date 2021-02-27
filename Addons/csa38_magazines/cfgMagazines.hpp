
    class CSA38_BaseRifleGrenade;
    class CSA38_Magazine;
    class CSA38_PistolMagazine;
    class CSA38_HandGrenade;
    class CSA38_VehicleMagazine;

// Pistol magazines
    class csa38_7_63mm_10xMauser : CSA38_PistolMagazine {
        displayName = "M1930 C-96 Mauser, 10 Round Clip, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.63x25mm, 10 Rounds, Ball<br/>For use in the M1930 C-96 Mauser";
        ammo = "LIB_B_762x25_Ball";
        mass = 1.8;
        scope = 1;
    };

    class csa38_7_65mm_8xBrow : CSA38_PistolMagazine {
        displayName = "Walther PP, 8 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = ".32 ACP, 8 Rounds, Ball<br/>For use in the Walther PP";
        ammo = "LIB_B_765x17_Ball";
        mass = 1.5;
    };

    class csa38_7_65mm_7xBrow : CSA38_PistolMagazine {
        displayName = "Walther PPK, 7 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = ".32 ACP, 7 Rounds, Ball<br/>For use in the Walther PPK";
        ammo = "LIB_B_765x17_Ball";
        mass = 1.31;
        scope = 1;
    };

    class CSA38_9mm_8xBrowning : CSA38_PistolMagazine {
        displayName = "vz. 22, 8 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = ".380 ACP, 8 Rounds, Ball<br/>For use in the vz. 22 and vz. 24 pistol";
        ammo = "LIB_B_9x17_Ball";
        mass = 1.86;
    };

    class CSA38_6_35mm_8xBrowning : CSA38_9mm_8xBrowning {
        displayName = "vz. 36, 8 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = ".25 ACP, 8 Rounds, Ball<br/>For use in the vz. 36";
        ammo = "LIB_B_635x16_Ball";
        mass = 1.86;
    };
    class CSA38_7_65mm_8xBrowning : CSA38_9mm_8xBrowning {
        displayName = "vz. 27, 8 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = ".32 ACP, 8 Rounds, Ball<br/>For use in the vz. 27";
        ammo = "LIB_B_765x17_Ball";
        mass = 1.31;
    };
    class CSA38_7_65mm_8xBrowningSD : CSA38_9mm_8xBrowning {
        displayName = "vz. 27, 8 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = ".32 ACP, 8 Rounds, Ball<br/>For use in the vz. 27";
        ammo = "LIB_B_765x17_Ball";
        mass = 1.31;
        scope = 1;
    };

    class csa38_9mm_8xLuger : CSA38_PistolMagazine {
        displayName = "P08, 8 Round Magazine, Ball (PP08 mE)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 8 Rounds, Ball (PP08 mE)<br/>For use in the P08";
        ammo = "LIB_B_9x19_Ball";
        mass = 1.86;
        scope = 1;
    };

    class CSA38_9mm_9xBrowning : CSA38_PistolMagazine {
        displayName = "vz. 38, 9 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = ".380 ACP, 9 Rounds, Ball<br/>For use in the vz. 38 pistol";
        ammo = "LIB_B_9x17_Ball";
        mass = 2.09;
    };
// End Pistol magazines

// Rifle magazines
    class CSA38_7_7_10x56R : CSA38_Magazine {
        displayName = "Lee Enfield, 2x 5 Round Clips, Ball (Mk VIIz)";
        displayNameShort = "Ball";
        descriptionShort = ".303 British, 10 Rounds, Ball (Mk VIIz)<br/>For use in the Lee Enfield";
        ammo = "LIB_B_770x56_Ball_NoCartridge";
        mass = 3.26;
        scope = 1;
    };

    class CSA38_7_7_10x56RAP : CSA38_7_7_10x56R {
        displayName = "Lee Enfield, 2x 5 Round Clips, AP (W Mark Iz)";
        displayNameShort = "AP";
        descriptionShort = ".303 British, 10 Rounds, AP (W Mark Iz)<br/>For use in the Lee Enfield";
        ammo = "LIB_B_770x56_AP_NoCartridge";
        scope = 1;
    };

    class CSA38_7_92_5xMauser : CSA38_Magazine {
        displayName = "Mauser, 5 Round Clip, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 5 Rounds, Ball<br/>For use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_sS_NoCartridge";
        mass = 1.85;
        lastRoundsTracer = 0;
        tracersEvery = 0;
    };
    class CSA38_7_92_5xMauser_Mixed_Ball_2PzD : CSA38_7_92_5xMauser {
        displayName = "Mauser, 5 Round Clip, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 5 Rounds, Mixed Ball/Tracer<br/>For use in in Mauser type rifles";
        ammo = "LIB_B_792x57_Mixed_sS_NoCartridge";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class CSA38_7_92_5xMauser_Tracer_2PzD : CSA38_7_92_5xMauser {
        displayName = "Mauser, 5 Round Clip, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 5 Rounds, Tracer<br/>For use in Mauser type rifles";
        ammo = "LIB_B_792x57_Tracer_NoCartridge";
        mass = 1.85;
        lastRoundsTracer = 1;
        tracersEvery = 5;
    };
    class CSA38_7_92_5xMauser2 : CSA38_7_92_5xMauser {
        displayName = "Mauser, 5 Round Clip, AP";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 5 Rounds, AP<br/>For use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_SmK_NoCartridge";
        lastRoundsTracer = 0;
        tracersEvery = 0;
    };
    class CSA38_7_92_5xMauser2_Mixed_AP_2PzD : CSA38_7_92_5xMauser {
        displayName = "Mauser, 5 Round Clip, AP/Tracer";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 5 Rounds, Mixed AP/Tracer<br/>For use in in Mauser type rifles";
        ammo = "LIB_B_792x57_Mixed_SmK_NoCartridge";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class CSA38_7_92_5xMauser3 : CSA38_7_92_5xMauser {
        displayName = "Mauser, 5 Round Clip, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 5 Rounds, Ball<br/>For use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_SmE_NoCartridge";
        lastRoundsTracer = 0;
        tracersEvery = 0;
    };
    class CSA38_7_92_5xMauser3_Mixed_Ball_2PzD : CSA38_7_92_5xMauser3 {
        displayName = "Mauser, 5 Round Clip, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 5 Rounds, Mixed Ball/Tracer<br/>For use in in Mauser type rifles";
        ammo = "LIB_B_792x57_Mixed_SmE_NoCartridge";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };

    class csa38_7_92_5xMauserKAR : CSA38_7_92_5xMauser {
        displayName = "K98k, 5 Round Clip, Ball (SmE)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 5 Rounds, Ball (SmE)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Ball_SmE_NoCartridge";
        mass = 1.85;
        lastRoundsTracer = 0;
        tracersEvery = 0;
        scope = 1;
    };
    class csa38_7_92_5xMauserKAR2 : CSA38_7_92_5xMauser {
        displayName = "K98k, 5 Round Clip, AP (SmK)";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 5 Rounds, AP (SmK)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Ball_SmK_NoCartridge";
        lastRoundsTracer = 0;
        tracersEvery = 0;
        scope = 1;
    };

    class CSA38_7_5_5xMAS : CSA38_7_92_5xMauser {
        displayName = "MAS 36, 5 Round Clip, Ball (Balle C)";
        displayNameShort = "Ball";
        descriptionShort = "7.5x54mm French, 5 Rounds, Ball (Balle C)<br/>For use in the MAS 36";
        ammo = "CSA38_7_5MAS";
        mass = 1.85;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class csa38_7_92_20xMauserKAR : csa38_7_92_5xMauserKAR {
        displayName = "K98k, 4x 5 Round Clips, Ball (sS Patrone)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 20 Rounds, Ball (sS Patrone)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Ball_sS_NoCartridge";
        mass = 7.4;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class csa38_7_92_20xMauserKAR_Mixed_sS_2PzD : csa38_7_92_20xMauserKAR {
        displayName = "K98k, 4x 5 Round Clips, Ball/Tracer (sS Patrone/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Mixed Ball/Tracer (sS Patrone/LS L'spur)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Mixed_sS_NoCartridge";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class csa38_7_92_20xMauserKAR_SmE_2PzD : csa38_7_92_20xMauserKAR {
        displayName = "K98k, 4x 5 Round Clips, Ball (SmE)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 20 Rounds, Ball (SmE)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Ball_SmE_NoCartridge";
    };
    class csa38_7_92_20xMauserKAR_Mixed_SmE_2PzD : csa38_7_92_20xMauserKAR {
        displayName = "K98k, 4x 5 Round Clips, Ball/Tracer (SmE/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Mixed Ball/Tracer (SmE/LS L'spur)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Mixed_SmE_NoCartridge";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class CSA38_7_92_20xMauserkAR2 : csa38_7_92_5xMauserKAR {
        displayName = "K98k, 4x 5 Round Clips, AP (SmK)";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 20 Rounds, AP (SmK)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Ball_SmK_NoCartridge";
        mass = 7.4;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class csa38_7_92_20xMauserKAR_Mixed_SmK_2PzD : CSA38_7_92_20xMauserkAR2 {
        displayName = "K98k, 4x 5 Round Clips, AP/Tracer (SmK/LS L'spur)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Mixed AP/Tracer (SmK/LS L'spur)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Mixed_SmK_NoCartridge";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class csa38_7_92_20xMauserKAR_Tracer_2PzD : csa38_7_92_20xMauserKAR {
        displayName = "K98k, 4x 5 Round Clips, Tracer (LS L'spur)";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Tracer (LS L'spur)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Tracer_NoCartridge";
        tracersEvery = 1;
        lastRoundsTracer = 20;
    };

    class CSA38_7_92_20xMauserCZ : CSA38_7_92_5xMauser {
        displayName = "Mauser, 4x 5 Round Clips, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 20 Rounds, Ball<br/>For use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_sS_NoCartridge";
        mass = 7.4;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class CSA38_7_92_20xMauserCZ_Mixed_Ball_2PzD : CSA38_7_92_5xMauser2 {
        displayName = "Mauser, 4x 5 Round Clips, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Mixed Ball/Tracer<br/>For use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_sS_NoCartridge";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class CSA38_7_92_20xMauserCZ_SmE_2PzD : CSA38_7_92_20xMauserCZ {
        displayName = "Mauser, 4x 5 Round Clips, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 20 Rounds, Ball<br/>For use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_SmE_NoCartridge";
        mass = 7.4;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class CSA38_7_92_20xMauserCZ_Mixed_SmE_2PzD : CSA38_7_92_20xMauserCZ {
        displayName = "Mauser, 4x 5 Round Clips, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Mixed Ball/Tracer<br/>For use in Mauser type rifles";
        ammo = "LIB_B_792x57_Mixed_SmE_NoCartridge";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class CSA38_7_92_20xMauserCZ2 : CSA38_7_92_5xMauser2 {
        displayName = "Mauser, 4x 5 Round Clips, AP";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 20 Rounds, AP<br/>For use in Mauser type rifles";
        ammo = "LIB_B_792x57_Ball_SmK_NoCartridge";
        mass = 7.4;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class CSA38_7_92_20xMauserCZ2_Mixed_AP_2PzD : CSA38_7_92_20xMauserCZ2 {
        displayName = "Mauser, 4x 5 Round Clips, AP/Tracer";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Mixed AP/Tracer<br/>For use in Mauser type rifles";
        ammo = "LIB_B_792x57_Mixed_SmK_NoCartridge";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class CSA38_7_92_20xMauserCZ_Tracer_2PzD : CSA38_7_92_20xMauserCZ {
        displayName = "Mauser, 4x 5 Round Clips, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Tracer<br/>For use in Mauser type rifles";
        ammo = "LIB_B_792x57_Tracer_NoCartridge";
        tracersEvery = 1;
        lastRoundsTracer = 20;
    };
// End Rifle magazines

// SMG magazines
    class csa38_32_9x19 : CSA38_Magazine {
        displayName = "Sten Gun, 32 Round Magazine, Ball (Mk Iz)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 32 Rounds, Ball (Mk Iz)<br/>For use in the Sten Gun";
        ammo = "LIB_B_9x19_Ball";
        mass = 6.11;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        scope = 1;
    };

    class csa38_9_MM_32xMP18 : CSA38_Magazine {
        displayName = "P08, 32 Round Magazine, Ball (PP08 mE)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 32 Rounds, Ball (PP08 mE)<br/>For use in the P08 and MP18";
        ammo = "LIB_B_9x19_Ball";
        mass = 8.11;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class csa38_9_MM_32xMP18_Tracer_2PzD : csa38_9_MM_32xMP18 {
        displayName = "P08, 32 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "9x19mm, 32 Rounds, Tracer<br/>For use in the P08";
        ammo = "LIB_B_9x19_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 32;
    };

    class csa38_9_MM_32xMP28 : CSA38_Magazine {
        displayName = "MP28, 32 Round Magazine, Ball (PP08 mE)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 32 Rounds, Ball (PP08 mE)<br/>For use in the MP28";
        ammo = "LIB_B_9x19_Ball";
        mass = 6.11;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class csa38_9_MM_32xMP28_Tracer_2PzD : csa38_9_MM_32xMP28 {
        displayName = "MP28, 32 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "9x19mm, 32 Rounds, Tracer<br/>For use in the MP28";
        ammo = "LIB_B_9x19_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 32;
    };

    class csa38_9_MM_20xMP28 : csa38_9_MM_32xMP28 {
        displayName = "MP28, 20 Round Magazine, Ball (PP08 mE)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 20 Rounds, Ball (PP08 mE)<br/>For use in the MP28";
        ammo = "LIB_B_9x19_Ball";
        count = 20;
        mass = 4;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class csa38_9_MM_20xMP28_Tracer_2PzD : csa38_9_MM_20xMP28 {
        displayName = "MP28, 20 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "9x19mm, 20 Rounds, Tracer<br/>For use in the MP28";
        ammo = "LIB_B_9x19_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 20;
    };

    class csa38_9_MM_32xMP35 : CSA38_Magazine {
        displayName = "MP35, 32 Round Magazine, Ball (PP08 mE)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 32 Rounds, Ball (PP08 mE)<br/>For use in the MP35";
        ammo = "LIB_B_9x19_Ball";
        mass = 6.11;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class csa38_9_MM_32xMP35_Tracer_2PzD : csa38_9_MM_32xMP35 {
        displayName = "MP35, 32 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "9x19mm, 32 Rounds, Tracer<br/>For use in the MP35";
        ammo = "LIB_B_9x19_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 32;
    };
    class csa38_9_MM_24xMP35_2PzD : csa38_9_MM_32xMP35 {
        displayName = "MP35, 24 Round Magazine, Ball (PP08 mE)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 24 Rounds, Ball (PP08 mE)<br/>For use in the MP35";
        ammo = "LIB_B_9x19_Ball";
        mass = 4.6;
        count = 24;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class csa38_9_MM_24xMP35_Tracer_2PzD : csa38_9_MM_24xMP35_2PzD {
        displayName = "MP35, 24 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "9x19mm, 24 Rounds, Tracer<br/>For use in the MP35";
        ammo = "LIB_B_9x19_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 24;
    };
    class csa38_9_MM_20xMP35_2PzD : csa38_9_MM_32xMP35 {
        displayName = "MP35, 20 Round Magazine, Ball (PP08 mE)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 20 Rounds, Ball (PP08 mE)<br/>For use in the MP35";
        ammo = "LIB_B_9x19_Ball";
        count = 20;
        mass = 4;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class csa38_9_MM_20xMP35_Tracer_2PzD : csa38_9_MM_20xMP35_2PzD {
        displayName = "MP35, 20 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "9x19mm, 20 Rounds, Tracer<br/>For use in the MP35";
        ammo = "LIB_B_9x19_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 20;
    };

    class csa38_9_MM_32xPARA : CSA38_Magazine {
        displayName = "MP40, 32 Round Magazine, Ball (PP08 mE)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 32 Rounds, Ball (PP08 mE)<br/>For use in the MP40";
        ammo = "LIB_B_9x19_Ball";
        mass = 6.11;
        scope = 1;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class CSA38_9_mm_36xBrowning : CSA38_Magazine {
        displayName = "vz. 38, 36 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = ".380 ACP, 36 Rounds, Ball<br/>For use in the vz. 38 SMG";
        ammo = "LIB_B_9x17_Ball";
        mass = 7;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class CSA38_9_mm_96xBrowning : CSA38_9_mm_36xBrowning {
        displayName = "vz. 38, 96 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = ".380 ACP, 96 Rounds, Ball<br/>For use in the vz. 38 SMG";
        ammo = "LIB_B_9x17_Ball";
        mass = 20;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class csa38_mas38mag : CSA38_Magazine {
        displayname = "MAS 38, 32 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.65x20mm Longue, 32 Rounds, Ball<br/>For use in the MAS 38";
        ammo = "LIB_B_765x20_Ball";
        mass = 6.11;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
// End SMG magazines

// MG magazines
    class CSA38_7_7_30x56R : CSA38_Magazine {
        displayName = "Bren Gun, 30 Round Magazine, Ball/Tracer (Mk VIIz/G IIz)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = ".303 British, 30 Rounds Mixed Ball/Tracer (Mk VIIz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_Mixed_Ball_Tracer";
        mass = 8.91;
        tracersEvery = 3;
        lastRoundsTracer = 3;
        ace_isbelt = 1;
        scope = 1;
    };
    class CSA38_7_7_30x56RAP : CSA38_7_7_30x56R {
        displayName = "Bren Gun, 30 Round Magazine, Long Range/Tracer (Mk IIIz/G IIz)";
        displayNameShort = "Long Range/Tracer";
        descriptionShort = ".303 British, 30 Rounds, Mixed Long Range/Tracer (Mk IIIz/G IIz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_Mixed_MkVIII_Tracer";
        scope = 1;
    };

    class CSA38_7_7_100x56R : CSA38_7_7_30x56R {
        displayName = "Bren Gun, 100 Round Magazine, Ball/Tracer (Mk VIIz/G IIz)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = ".303 British, 100 Rounds Mixed Ball/Tracer (Mk VIIz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_Mixed_Ball_Tracer";
        tracersEvery = 3;
        lastRoundsTracer = 3;
        ace_isbelt = 1;
        mass = 32;
        scope = 1;
    };
    class CSA38_7_7_100x56RAP : CSA38_7_7_100x56R {
        displayName = "Bren Gun, 100 Round Magazine, AP/Tracer (W Iz/G IIz)";
        displayNameShort = "AP/Tracer";
        descriptionShort = ".303 British, 100 Rounds, Mixed AP/Tracer (W Iz/G IIz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_Mixed_AP_Tracer";
        picture = "\CSA38II_weapons2\data\csa38_zgb34mag3.paa";
        scope = 1;
    };
    class CSA38_7_7_100x56R_MKVIII_2PzD : CSA38_7_7_100x56R {
        displayName = "Bren Gun, 100 Round Magazine, Long Range/Tracer (Mk IIIz/G IIz)";
        displayNameShort = "Long Range/Tracer";
        descriptionShort = ".303 British, 100 Rounds, Mixed Long Range/Tracer (Mk IIIz/G IIz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_Mixed_MkVIII_Tracer";
    };
    class CSA38_7_7_100x56R_Tracer_2PzD : CSA38_7_7_100x56R {
        displayName = "Bren Gun, 100 Round Magazine, Tracer (G IIz)";
        displayNameShort = "Tracer";
        descriptionShort = ".303 British, 100 Rounds, Tracer (G IIz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_Tracer";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    class CSA38_7_7_100x56R_NoTrace_2PzD : CSA38_7_7_100x56R {
        displayName = "Bren Gun, 100 Round Magazine, Ball (Mk VIIz)";
        displayNameShort = "Ball";
        descriptionShort = ".303 British, 100 Rounds Ball (Mk VIIz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_Ball";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class CSA38_7_7_100x56R_MKVIII_NoTrace_2PzD : CSA38_7_7_100x56R {
        displayName = "Bren Gun, 100 Round Magazine, Long Range (Mk IIIz)";
        displayNameShort = "Long Range";
        descriptionShort = ".303 British, 100 Rounds, Long Range (Mk IIIz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_MkVIII";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class CSA38_7_7_100x56R_AP_NoTrace_2PzD : CSA38_7_7_100x56R {
        displayName = "Bren Gun, 100 Round Magazine, AP (W Iz)";
        displayNameShort = "AP";
        descriptionShort = ".303 British, 100 Rounds, AP (W Iz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_AP";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class csa38_7_92_50xMauserMG : CSA38_Magazine {
        displayName = "MG34/MG42, 50 Round Drum, Ball/Tracer (sS Patrone/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 50 Rounds, Mixed Ball/Tracer (sS Patrone/LS L'spur)<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_sS";
        mass = 14.55;
        tracersEvery = 3;
        lastRoundsTracer = 3;
        scope = 1;
    };

    class csa38_7_92_50xMauserMGAP : CSA38_7_92_50xMauserMG {
        displayName = "MG34/MG42, 50 Round Drum, AP/Tracer (SmK/LS L'spur)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 50 Rounds, AP/Tracer (SmK/LS L'spur)<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SmK";
        mass = 14.55;
        tracersEvery = 3;
        lastRoundsTracer = 3;
        scope = 1;
    };

    class csa38_7_92_250xMauserMG : CSA38_7_92_50xMauserMG {
        displayName = "MG34/MG42, 250 Round Belt, Ball/Tracer (sS Patrone/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 250 Rounds, Mixed Ball/Tracer (sS Patrone/LS L'spur)<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_sS";
        mass = 72.75;
        tracersEvery = 3;
        lastRoundsTracer = 3;
        scope = 1;
    };

    class csa38_7_92_250xMauserMGAP : CSA38_7_92_250xMauserMG {
        displayName = "MG34/MG42, 250 Round Belt, AP/Tracer (SmK/LS L'spur)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 250 Rounds, Mixed AP/Tracer (SmK/LS L'spur)<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SmK";
        mass = 72.75;
        tracersEvery = 3;
        lastRoundsTracer = 3;
        scope = 1;
    };

    class csa38_7_92_30xMauserMG : CSA38_Magazine {
        displayName = "MG30, 30 Round Magazine, Ball/Tracer (sS Patrone/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 30 Rounds, Mixed Ball/Tracer (sS Patrone/LS L'spur)<br/>For use in the MG30";
        ammo = "LIB_B_792x57_Mixed_sS";
        mass = 14.55;
        tracersEvery = 3;
        lastRoundsTracer = 3;
        ace_isbelt = 1;
    };
    class csa38_7_92_30xMauserMG_sS_NoTrace_2PzD : csa38_7_92_30xMauserMG {
        displayName = "MG30, 30 Round Magazine, Ball (sS Patrone)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 30 Rounds, Ball (sS Patrone)<br/>For use in the MG30";
        ammo = "LIB_B_792x57_Ball_sS";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class csa38_7_92_30xMauserMG_SmE : csa38_7_92_30xMauserMG {
        displayName = "MG30, 30 Round Magazine, Ball/Tracer (SmE/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 30 Rounds, Mixed Ball/Tracer (SmE/LS L'spur)<br/>For use in the MG30";
        ammo = "LIB_B_792x57_Mixed_SmE";
    };
    class csa38_7_92_30xMauserMG_SmE_NoTrace_2PzD : csa38_7_92_30xMauserMG {
        displayName = "MG30, 30 Round Magazine, Ball (SmE)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 30 Rounds, Ball (SmE)<br/>For use in the MG30";
        ammo = "LIB_B_792x57_Ball_SmE";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class csa38_7_92_30xMauserMGAP : csa38_7_92_30xMauserMG {
        displayName = "MG30, 30 Round Magazine, AP/Tracer (SmK/LS L'spur)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 30 Rounds, Mixed AP/Tracer (SmK/LS L'spur)<br/>For use in the MG30";
        ammo = "LIB_B_792x57_Mixed_SmK";
        mass = 14.55;
    };
    class csa38_7_92_30xMauserMG_SmK_NoTrace_2PzD : csa38_7_92_30xMauserMG {
        displayName = "MG30, 30 Round Magazine, AP (SmK)";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 30 Rounds, AP (SmK)<br/>For use in the MG30";
        ammo = "LIB_B_792x57_Ball_SmK";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class csa38_7_92_30xMauserMG_TraceOnly_2PzD : csa38_7_92_30xMauserMG {
        displayName = "MG30, 30 Round Magazine, Tracer (LS L'spur)";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 30 Rounds, Tracer (LS L'spur)<br/>For use in the MG30";
        ammo = "LIB_B_792x57_Tracer";
        tracersEvery = 1;
        lastRoundsTracer = 1;
    };

    class CSA38_7_92_20xMauser : CSA38_7_92_5xMauser {
        displayName = "vz. 26, 20 Round Magazine, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Mixed Ball/Tracer<br/>For use in the vz. 26";
        ammo = "LIB_B_792x57_Mixed_sS";
        mass = 5.94;
        tracersEvery = 3;
        lastRoundsTracer = 3;
        ace_isbelt = 1;
    };
    class CSA38_7_92_20xMauser_Ball_NoTrace_2PzD : CSA38_7_92_20xMauser {
        displayName = "vz. 26, 20 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 20 Rounds, Ball<br/>For use in the vz. 26";
        ammo = "LIB_B_792x57_Ball_sS";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class CSA38_7_92_20xMauser_SmE_2PzD : CSA38_7_92_20xMauser {
        displayName = "vz. 26, 20 Round Magazine, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Mixed Ball/Tracer<br/>For use in the vz. 26";
        ammo = "LIB_B_792x57_Mixed_SmE";
    };
    class CSA38_7_92_20xMauser_SmE_NoTrace_2PzD : CSA38_7_92_20xMauser {
        displayName = "vz. 26, 20 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 20 Rounds, Ball<br/>For use in the vz. 26";
        ammo = "LIB_B_792x57_Ball_SmE";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class CSA38_7_92_20xMauser2 : CSA38_7_92_20xMauser {
        displayName = "vz. 26, 20 Round Magazine, AP/Tracer";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Mixed AP/Tracer<br/>For use in the vz. 26";
        ammo = "LIB_B_792x57_Mixed_SmK";
        mass = 5.94;
    };
    class CSA38_7_92_20xMauser_AP_NoTrace_2PzD : CSA38_7_92_20xMauser {
        displayName = "vz. 26, 20 Round Magazine, AP";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 20 Rounds, AP<br/>For use in the vz. 26";
        ammo = "LIB_B_792x57_Ball_SmK";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class CSA38_7_92_20xMauser_TraceOnly_2PzD : CSA38_7_92_20xMauser {
        displayName = "vz. 26, 20 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Tracer<br/>For use in the vz. 26";
        ammo = "LIB_B_792x57_Tracer";
        tracersEvery = 1;
        lastRoundsTracer = 1;
    };

    class CSA38_7_92_30xMauser_2PzD : CSA38_7_92_20xMauser {
        displayName = "vz. 26, 30 Round Magazine, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 30 Rounds, Mixed Ball/Tracer<br/>For use in the vz. 26";
        ammo = "LIB_B_792x57_Mixed_sS";
        mass = 8.91;
        tracersEvery = 3;
        lastRoundsTracer = 3;
        ace_isbelt = 1;
    };
    class CSA38_7_92_30xMauser_Ball_NoTrace_2PzD : CSA38_7_92_30xMauser_2PzD {
        displayName = "vz. 26, 30 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 30 Rounds, Ball<br/>For use in the vz. 26";
        ammo = "LIB_B_792x57_Ball_sS";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class CSA38_7_92_30xMauser_SmE_2PzD : CSA38_7_92_30xMauser_2PzD {
        displayName = "vz. 26, 30 Round Magazine, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 30 Rounds, Mixed Ball/Tracer<br/>For use in the vz. 26";
        ammo = "LIB_B_792x57_Mixed_SmE";
    };
    class CSA38_7_92_30xMauser_SmE_NoTrace_2PzD : CSA38_7_92_30xMauser_2PzD {
        displayName = "vz. 26, 30 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 30 Rounds, Ball<br/>For use in the vz. 26";
        ammo = "LIB_B_792x57_Ball_SmE";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class CSA38_7_92_30xMauser_AP_2PzD : CSA38_7_92_30xMauser_2PzD {
        displayName = "vz. 26, 30 Round Magazine, AP/Tracer";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 30 Rounds, Mixed AP/Tracer<br/>For use in the vz. 26";
        ammo = "LIB_B_792x57_Mixed_SmK";
        mass = 8.91;
    };
    class CSA38_7_92_30xMauser_AP_NoTrace_2PzD : CSA38_7_92_30xMauser_2PzD {
        displayName = "vz. 26, 30 Round Magazine, AP";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 30 Rounds, AP<br/>For use in the vz. 26";
        ammo = "LIB_B_792x57_Ball_SmK";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class CSA38_7_92_30xMauser_TraceOnly_2PzD : CSA38_7_92_30xMauser_2PzD {
        displayName = "vz. 26, 30 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 30 Rounds, Tracer<br/>For use in the vz. 26";
        ammo = "LIB_B_792x57_Tracer";
        tracersEvery = 1;
        lastRoundsTracer = 1;
    };

    class csa38_8x56_25xMannlicherMG : CSA38_Magazine {
        displayName = "Solothurn 31.M, 30 Round Magazine, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 30 Rounds, Mixed Ball/Tracer<br/>For use in the Solothurn 31.M";
        ammo = "LIB_B_792x57_Mixed_sS";
        count = 30;
        mass = 14.55;
        tracersEvery = 3;
        lastRoundsTracer = 3;
        ace_isbelt = 1;
    };
    class csa38_8x56_25xMannlicherMG_sS_NoTrace_2PzD : csa38_8x56_25xMannlicherMG {
        displayName = "Solothurn 31.M, 30 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 30 Rounds, Ball<br/>For use in the Solothurn 31.M";
        ammo = "LIB_B_792x57_Ball_sS";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class csa38_8x56_25xMannlicherMG_SmE : csa38_8x56_25xMannlicherMG {
        displayName = "Solothurn 31.M, 30 Round Magazine, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 30 Rounds, Mixed Ball/Tracer<br/>For use in the Solothurn 31.M";
        ammo = "LIB_B_792x57_Mixed_SmE";
    };
    class csa38_8x56_25xMannlicherMG_SmE_NoTrace_2PzD : csa38_8x56_25xMannlicherMG {
        displayName = "Solothurn 31.M, 30 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 30 Rounds, Ball<br/>For use in the Solothurn 31.M";
        ammo = "LIB_B_792x57_Ball_SmE";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class csa38_8x56_25xMannlicherMG_SmK : csa38_8x56_25xMannlicherMG {
        displayName = "Solothurn 31.M, 30 Round Magazine, AP/Tracer";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 30 Rounds, Mixed AP/Tracer<br/>For use in the Solothurn 31.M";
        ammo = "LIB_B_792x57_Mixed_SmK";
    };
    class csa38_8x56_25xMannlicherMG_SmK_NoTrace_2PzD : csa38_8x56_25xMannlicherMG {
        displayName = "Solothurn 31.M, 30 Round Magazine, AP";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 30 Rounds, AP<br/>For use in the Solothurn 31.M";
        ammo = "LIB_B_792x57_Ball_SmK";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class csa38_8x56_25xMannlicherMG_TraceOnly_2PzD : csa38_8x56_25xMannlicherMG {
        displayName = "Solothurn 31.M, 30 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 30 Rounds, Tracer<br/>For use in the Solothurn 31.M";
        ammo = "LIB_B_792x57_Tracer";
        tracersEvery = 1;
        lastRoundsTracer = 1;
    };
// End MG magazines

// Other magazines
    class csa38_8_00_30xMauserMG : CSA38_Magazine {
        scope = 1;
    };
// End Other magazines

// Grenades
    class CSA38_Grg21 :  CSA38_HandGrenade {
        displayName = "vz. 21 Rifle Grenade";
        displayNameShort = "vz. 21 (HE)";
        descriptionShort = "vz. 21, rifle grenade";
        mass = 9.92;
    };

    class CSA38_rg21 :  CSA38_HandGrenade {
        displayName = "vz. 21 Hand Grenade";
        displayNameShort = "vz. 21 (HE)";
        descriptionShort = "vz. 21, hand grenade";
        initSpeed = 24;
        mass = 9.92;
    };

    class CSA38_F1 :  CSA38_HandGrenade {
        displayName = "F-1";
        displayNameShort = "F-1 (Frag)";
        descriptionShort = "F-1 Grenade, Russian copy of a French hand grenade.";
        initSpeed = 20;
        mass = 13.228;
        scope = 1;
    };

    class CSA38_rg34 :  CSA38_HandGrenade {
        displayName = "vz. 34";
        descriptionShort = "vz. 34 (HE)";
        displayNameShort = "vz. 34, hand grenade";
        initSpeed = 26;
        mass = 7.716;
    };

    class CSA38_rg38 :  CSA38_HandGrenade {
        displayName = "vz. 38";
        descriptionShort = "vz. 38 (HE)";
        displayNameShort = "vz. 38, hand grenade";
        initSpeed = 25;
        mass = 7.848;
    };

    class CSA38_Gsmoke :  CSA38_HandGrenade {
        displayName = "Smoke Grenade";
        displayNameShort = "Smoke Grenade";
        descriptionShort = "Smoke Grenade";
        initSpeed = 25;
        mass = 7.8498;
    };

    class CSA38_shg24 :  CSA38_HandGrenade {
        displayName = "M24 (Splitterring)";
        displayNameShort = "M24 (Frag)";
        descriptionShort = "Model 1924 Stielhandgranate (Splitterring), M24 with fragmentation sleeve.";
        ammo = "fow_e_m24_spli";
        initSpeed = 22;
        mass = 17.527;
        scope = 1;
    };

    class CSA38_shg24t :  CSA38_HandGrenade {
        displayName = "M24 (HE)";
        displayNameShort = "M24 (HE)";
        descriptionShort = "Model 1924 Stielhandgranate, standard German stick grenade.";
        ammo = "fow_e_m24";
        initSpeed = 24;
        mass = 13.117;
        scope = 1;
    };

    class CSA38_PRG21 : CSA38_BaseRifleGrenade {
        class LIB_RifleGrenade {
            initSpeed = 50;
            attachment = "CSA38_PGvz23";
        };
    };
// End Grenades

// Vehicle magazines
    class CSA38_7_7_30x56RMG : CSA38_VehicleMagazine {
        displayName = "Bren Gun, 30 Round Magazine";
        displayNameShort = ".303 British, Ball";
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
        displayNameShort = ".303 British, Ball";
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
        ammo = "LIB_B_792x57_Ball_sS";
        mass = 72.75;
        scope = 1;
    };

    class csa38_MG34mgAP : CSA38_VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt, AP (SmK)";
        displayNameShort = "MG34/MG42, 250 Rounds, AP (SmK)";
        descriptionShort = "MG34/MG42, 250 Round Belt, AP (SmK)";
        ammo = "LIB_B_792x57_Ball_SmK";
        mass = 72.75;
        scope = 1;
    };

    class CSA38_MG34mg2 : CSA38_VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt";
        displayNameShort = "MG34/MG42, 250 Rounds";
        descriptionShort = "MG34/MG42, 250 Round Belt";
        ammo = "LIB_B_792x57_Ball_sS";
        mass = 72.75;
    };

    class CSA38_MG34mg2AP : CSA38_VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt, AP (SmK)";
        displayNameShort = "MG34/MG42, 250 Rounds, AP (SmK)";
        descriptionShort = "MG34/MG42, 250 Round Belt, AP (SmK)";
        ammo = "LIB_B_792x57_Ball_SmK";
        mass = 72.75;
    };

    class CSA38_MG34mg3 : CSA38_VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt";
        displayNameShort = "MG34/MG42, 250 Rounds";
        descriptionShort = "MG34/MG42, 250 Round Belt";
        ammo = "LIB_B_792x57_Ball_sS";
        mass = 72.75;
    };

    class CSA38_MG34mg3AP : CSA38_VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt, AP (SmK)";
        displayNameShort = "MG34/MG42, 250 Rounds, AP (SmK)";
        descriptionShort = "MG34/MG42, 250 Round Belt, AP (SmK)";
        ammo = "LIB_B_792x57_Ball_SmK";
        mass = 72.75;
    };

    class CSA38_MG34mg4 : CSA38_VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt";
        displayNameShort = "MG34/MG42, 250 Rounds";
        descriptionShort = "MG34/MG42, 250 Round Belt";
        ammo = "LIB_B_792x57_Ball_sS";
        mass = 72.75;
    };

    class CSA38_MG34mg4AP : CSA38_VehicleMagazine {
        displayName = "MG34/MG42, 250 Round Belt, AP (SmK)";
        displayNameShort = "MG34/MG42, 250 Rounds, AP (SmK)";
        descriptionShort = "MG34/MG42, 250 Round Belt, AP (SmK)";
        ammo = "LIB_B_792x57_Ball_SmK";
        mass = 72.75;
    };

    class CSA38_TKVZ24mag : CSA38_VehicleMagazine {
        displayName = "vz. 7/24, 250 Round Belt";
        displayNameShort = "vz. 7/24, 250 Rounds";
        descriptionShort = "vz. 7/24, 250 Round Belt";
        ammo = "LIB_B_792x57_Ball_sS";
        mass = 72.75;
    };

    class CSA38_TKVZ24mag2 : CSA38_TKVZ24mag {
        displayName = "vz. 7/24, 250 Round Belt, AP (SmK)";
        displayNameShort = "vz. 7/24, 250 Rounds, AP (SmK)";
        descriptionShort = "vz. 7/24, 250 Round Belt, AP (SmK)";
        ammo = "LIB_B_792x57_Ball_SmK";
        mass = 72.75;
    };

    class CSA38_ZB53mg : CSA38_VehicleMagazine {
        displayName = "ZB-53, 300 Round Magazine";
        displayNameShort = "ZB-53, 300 Rounds";
        descriptionShort = "7.92x57mm, 300 Rounds<br/>For use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_sS";
        mass = 87.3;
    };

    class CSA38_ZB53mgG : CSA38_ZB53mg {
        displayName = "ZB-53, 300 Round Magazine";
        displayNameShort = "ZB-53, 300 Rounds";
        descriptionShort = "7.92x57mm, 300 Rounds<br/>For use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_sS";
        mass = 87.3;
    };

    class CSA38_ZB53mg2 : CSA38_VehicleMagazine {
        displayName = "ZB-53, 300 Round Magazine, AP";
        displayNameShort = "ZB-53, 300 Rounds, AP";
        descriptionShort = "7.92x57mm, 300 Rounds, AP<br/>For use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_SmK";
        mass = 87.3;
    };

    class CSA38_ZB53mg2G : CSA38_ZB53mg2 {
        displayName = "ZB-53, 300 Round Magazine, AP";
        displayNameShort = "ZB-53, 300 Rounds, AP";
        descriptionShort = "7.92x57mm, 300 Rounds, AP<br/>For use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_SmK";
        mass = 87.3;
    };

    class CSA38_ZB53mg3 : CSA38_VehicleMagazine {
        displayName = "ZB-53, 100 Round Magazine";
        displayNameShort = "ZB-53, 100 Rounds";
        descriptionShort = "7.92x57mm, 100 Rounds<br/>For use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_sS";
        mass = 29.1;
    };

    class CSA38_ZB53mg3G : CSA38_ZB53mg3 {
        displayName = "ZB-53, 100 Round Magazine";
        displayNameShort = "ZB-53, 100 Rounds";
        descriptionShort = "7.92x57mm, 100 Rounds<br/>For use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_sS";
        mass = 29.1;
    };

    class CSA38_ZB53mg4 : CSA38_VehicleMagazine {
        displayName = "ZB-53, 100 Round Magazine, AP";
        displayNameShort = "ZB-53, 100 Rounds, AP";
        descriptionShort = "7.92x57mm, 100 Rounds, AP<br/>For use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_SmK";
        mass = 29.1;
    };

    class CSA38_ZB53mg4G : CSA38_ZB53mg4 {
        displayName = "ZB-53, 100 Round Magazine, AP";
        displayNameShort = "ZB-53, 100 Rounds, AP";
        descriptionShort = "7.92x57mm, 100 Rounds, AP<br/>For use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_SmK";
        mass = 29.1;
    };

    class CSA38_ZB53mg5 : CSA38_VehicleMagazine {
        displayName = "ZB-53, 200 Round Magazine";
        displayNameShort = "ZB-53, 200 Rounds";
        descriptionShort = "7.92x57mm, 200 Rounds<br/>For use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_sS";
        mass = 58.2;
    };

    class CSA38_ZB53mg5G : CSA38_ZB53mg5 {
        displayName = "ZB-53, 200 Round Magazine";
        displayNameShort = "ZB-53, 200 Rounds";
        descriptionShort = "7.92x57mm, 200 Rounds<br/>For use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_sS";
        mass = 58.2;
    };

    class CSA38_ZB53mg6 : CSA38_ZB53mg5 {
        displayName = "ZB-53, 200 Round Magazine, AP";
        displayNameShort = "ZB-53, 200 Rounds, AP";
        descriptionShort = "7.92x57mm, 200 Rounds, AP<br/>For use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_SmK";
        mass = 58.2;
    };

    class CSA38_ZB53mg6G : CSA38_ZB53mg6 {
        displayName = "ZB-53, 200 Round Magazine, AP";
        displayNameShort = "ZB-53, 200 Rounds, AP";
        descriptionShort = "7.92x57mm, 200 Rounds, AP<br/>For use in the ZB-53";
        ammo = "LIB_B_792x57_Ball_SmK";
        mass = 58.2;
    };
    class csa38_8_00_5xMannlicher : CSA38_Magazine {
        displayName = "Mannlicher M1895, 5 Round Clip";
        displayNameShort = "Mannlicher M1895, 5 Rounds";
        descriptionShort = "7.92x57mm, 5 Rounds<br/>For use in the Mannlicher M1895";
    };
// End Vehicle magazines
