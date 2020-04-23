    class LIB_BaseRifleGrenade;
    class LIB_HandGrenade_base;
    class LIB_SmokeShell_base;

// Pistol magazines
    class LIB_6Rnd_455 : CA_Magazine {
        displayName = "Webley Mk VI, 6 Rounds, Ball (Mk VI)";
        displayNameShort = "Ball";
        descriptionShort = ".455 Webley, 6 Rounds, Ball (Mk VI)<br/>For use in the Webley Mk VI";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_M1895_Ball_ca.paa";
    };

    class LIB_6Rnd_9x19_Welrod : CA_Magazine {
        displayName = "Welrod Mk I, 6 Round Magazine, Ball (Mk Iz)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 6 Rounds, Ball (Mk Iz)<br/>For use in the Welrod Mk I";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Ball_ca.paa";
        mass = 3.8;
    };
    class LIB_6Rnd_9x19_Welrod_Tracer_2PzD : LIB_6Rnd_9x19_Welrod {
        displayName = "Welrod Mk I, 6 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "9x19mm, 6 Rounds, Tracer<br/>For use in the Welrod Mk I";
        ammo = "LIB_B_9x19_Ball_t";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Ball_Green_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 6;
    };
    class LIB_7Rnd_765x17 : LIB_6Rnd_9x19_Welrod {
        scope = 1;
    };

    class LIB_10Rnd_9x19_M1896 : CA_Magazine {
        displayName = "M1916 C-96 Mauser, 10 Round Magazine, Ball (PP08 mE)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 10 Rounds, Ball (PP08 mE)<br/>For use in the M1916 C-96 Mauser";
        ammo = "LIB_B_9x19_Ball";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Ball_ca.paa";
    };
    class LIB_10Rnd_9x19_M1896_Tracer_2PzD : LIB_10Rnd_9x19_M1896 {
        displayName = "M1916 C-96 Mauser, 10 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "9x19mm, 10 Rounds, Tracer<br/>For use in the M1916 C-96 Mauser";
        ammo = "LIB_B_9x19_Ball_t";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Ball_Green_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };
    class LIB_10Rnd_763x25_2PzD : LIB_10Rnd_9x19_M1896 {
        displayName = "M1930 C-96 Mauser, 10 Round Clip, Ball";
        displayNameShort = "Ball";
        descriptionShort = "7.63x25mm, 10 Rounds, Ball<br/>For use in the M1930 C-96 Mauser";
        ammo = "LIB_B_762x25_Ball";
        count = 10;
    };
    class LIB_10Rnd_763x25_AP_2PzD : LIB_10Rnd_9x19_M1896 {
        displayName = "M1930 C-96 Mauser, 10 Round Clip, APT";
        displayNameShort = "APT";
        descriptionShort = "7.63x25mm, 10 Rounds, APT<br/>For use in the M1930 C-96 Mauser";
        ammo = "LIB_B_762x25_p41";
        count = 10;
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_APT_Red_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };
    class LIB_10Rnd_763x25_Tracer_2PzD : LIB_10Rnd_763x25_2PzD {
        displayName = "M1930 C-96 Mauser, 10 Round Clip, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "7.63x25mm, 10 Rounds, Tracer<br/>For use in the M1930 C-96 Mauser";
        ammo = "LIB_B_762x25_pt";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };
    class LIB_10Rnd_763x25_Mixed_Ball_Tracer_2PzD : LIB_10Rnd_763x25_2PzD {
        displayName = "M1930 C-96 Mauser, 10 Round Clip, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.63x25mm, 10 Rounds, Mixed Ball/Tracer<br/>For use in the M1930 C-96 Mauser";
        ammo = "LIB_B_762x25_Mixed_pt";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Ball_Red_ca.paa";
        tracersEvery = 4;
        lastRoundsTracer = 1;
    };
    class LIB_20Rnd_763x25_2PzD : LIB_10Rnd_763x25_2PzD {
        displayName = "M712 Schnellfeuer, 20 Round Magazine, Ball";
        descriptionShort = "7.63x25mm, 20 Rounds, Ball<br/>For use in the M1916 C-96 Mauser";
        ammo = "LIB_B_762x25_Ball";
        count = 20;
    };
    class LIB_20Rnd_763x25_AP_2PzD : LIB_20Rnd_763x25_2PzD {
        displayName = "M712 Schnellfeuer, 20 Round Clip, APT";
        displayNameShort = "APT";
        descriptionShort = "7.63x25mm, 20 Rounds, APT<br/>For use in the M712 Schnellfeuer";
        ammo = "LIB_B_762x25_p41";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_APT_Red_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 20;
    };
    class LIB_20Rnd_763x25_Tracer_2PzD : LIB_20Rnd_763x25_2PzD {
        displayName = "M712 Schnellfeuer, 20 Round Clip, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "7.63x25mm, 20 Rounds, Tracer<br/>For use in the M712 Schnellfeuer";
        ammo = "LIB_B_762x25_pt";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Tracer_Red_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 20;
    };
    class LIB_20Rnd_763x25_Mixed_Ball_Tracer_2PzD : LIB_20Rnd_763x25_2PzD {
        displayName = "M712 Schnellfeuer, 20 Round Clip, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.63x25mm, 20 Rounds, Mixed Ball/Tracer<br/>For use in the M712 Schnellfeuer";
        ammo = "LIB_B_762x25_Mixed_pt";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Ball_Red_ca.paa";
        tracersEvery = 4;
        lastRoundsTracer = 1;
    };
    class LIB_40Rnd_763x25_2PzD : LIB_10Rnd_763x25_2PzD {
        displayName = "M712 Schnellfeuer, 40 Round Magazine, Ball";
        descriptionShort = "7.63x25mm, 40 Rounds, Ball<br/>For use in the M1916 C-96 Mauser";
        ammo = "LIB_B_762x25_Ball";
        count = 40;
    };
    class LIB_40Rnd_763x25_AP_2PzD : LIB_40Rnd_763x25_2PzD {
        displayName = "M712 Schnellfeuer, 40 Round Clip, APT";
        displayNameShort = "APT";
        descriptionShort = "7.63x25mm, 40 Rounds, APT<br/>For use in the M712 Schnellfeuer";
        ammo = "LIB_B_762x25_p41";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_APT_Red_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 40;
    };
    class LIB_40Rnd_763x25_Tracer_2PzD : LIB_40Rnd_763x25_2PzD {
        displayName = "M712 Schnellfeuer, 40 Round Clip, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "7.63x25mm, 40 Rounds, Tracer<br/>For use in the M712 Schnellfeuer";
        ammo = "LIB_B_762x25_pt";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Tracer_Red_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 40;
    };
    class LIB_40Rnd_763x25_Mixed_Ball_Tracer_2PzD : LIB_40Rnd_763x25_2PzD {
        displayName = "M712 Schnellfeuer, 40 Round Clip, Ball/Tracer";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.63x25mm, 40 Rounds, Mixed Ball/Tracer<br/>For use in the M712 Schnellfeuer";
        ammo = "LIB_B_762x25_Mixed_pt";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Ball_Red_ca.paa";
        tracersEvery = 4;
        lastRoundsTracer = 1;
    };

    class LIB_7Rnd_45ACP : CA_Magazine {
        displayName = "M1911A1, 7 Round Magazine, Ball (M1911)";
        displayNameShort = "Ball";
        descriptionShort = ".45 ACP, 7 Rounds, Ball (M1911)<br/>For use in the M1911A1";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Ball_ca.paa";
    };
    class LIB_7Rnd_45ACP_t : LIB_7Rnd_45ACP {
        displayName = "M1911A1, 7 Round Magazine, Tracer (M26)";
        displayNameShort = "Tracer";
        descriptionShort = ".45 ACP, 7 Rounds, Tracer (M26)<br/>For use in the M1911A1";
        ammo = "LIB_B_45ACP_Ball_t";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Tracer_Yellow_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 7;
    };

    class LIB_7Rnd_765x17_PPK : CA_Magazine {
        displayName = "Walther PPK, 7 Round Magazine, Ball";
        displayNameShort = "Ball";
        descriptionShort = ".32 ACP, 7 Rounds, Ball<br/>For use in the Walther PPK";
        ammo = "LIB_B_765x17_Ball";
        mass = 1.31;
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Ball_ca.paa";
    };
    class LIB_7Rnd_9x19 : LIB_7Rnd_765x17_PPK {
        scope = 1;
    };

    class LIB_7Rnd_762x38 : CA_Magazine {
        displayName = "M1895 Nagant, 7 Rounds, Ball (R hl)";
        displayNameShort = "Ball";
        descriptionShort = "7.62x38mm, 7 Rounds, Ball (R hl)<br/>For use in the M1895 Nagant";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_M1895_Ball_ca.paa";
    };

    class LIB_8Rnd_762x25 : CA_Magazine {
        displayName = "TT-33, 8 Round Magazine, Ball (Type P)";
        displayNameShort = "Ball";
        descriptionShort = "7.62x25mm, 8 Rounds, Ball (Type P)<br/>For use in the TT-33 Tokarev";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_TT33_Ball_ca.paa";
    };
    class LIB_8Rnd_762x25_APT_2PzD : LIB_8Rnd_762x25 {
        displayName = "TT-33, 8 Round Magazine, APT (Type P-41)";
        displayNameShort = "APT";
        descriptionShort = "7.62x25mm, 8 Rounds, APT (Type P-41)<br/>For use in the TT-33 Tokarev";
        ammo = "LIB_B_762x25_p41";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_TT33_APT_Redl_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 8;
    };
    class LIB_8Rnd_762x25_Tracer_2PzD : LIB_8Rnd_762x25 {
        displayName = "TT-33, 8 Round Magazine, Tracer (Type PT)";
        displayNameShort = "Tracer";
        descriptionShort = "7.62x25mm, 8 Rounds, Tracer (Type PT)<br/>For use in the TT-33";
        ammo = "LIB_B_762x25_pt";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_TT33_Tracer_Red_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 8;
    };
    class LIB_8Rnd_762x25_Mixed_Ball_Tracer_2PzD : LIB_8Rnd_762x25 {
        displayName = "TT-33, 8 Round Magazine, Ball/Tracer (Type P/Type PT)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.62x25mm, 8 Rounds, Mixed Ball/Tracer (Type P/Type PT)<br/>For use in the TT-33";
        ammo = "LIB_B_762x25_Mixed_pt";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_TT33_Ball_Red_ca.paa";
        tracersEvery = 4;
        lastRoundsTracer = 1;
    };

    class LIB_8Rnd_9x19 : CA_Magazine {
        displayName = "P38, 8 Round Magazine, Ball (PP08 mE)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 8 Rounds, Ball (PP08 mE)<br/>For use in the P38";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_P38_Ball_ca.paa";
    };
    class LIB_8Rnd_9x19_Tracer_2PzD : LIB_8Rnd_9x19 {
        displayName = "P38, 8 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "9x19mm, 8 Rounds, Tracer<br/>For use in the P38";
        ammo = "LIB_B_9x19_Ball_t";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_P38_Tracer_Green_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 8;
    };

    class LIB_8Rnd_9x19_P08 : LIB_8Rnd_9x19 {
        displayName = "P08, 8 Round Magazine, Ball (PP08 mE)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 8 Rounds, Ball (PP08 mE)<br/>For use in the P08";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_P08_Ball_ca.paa";
    };
    class LIB_8Rnd_9x19_P08_Tracer_2PzD : LIB_8Rnd_9x19_P08 {
        displayName = "P08, 8 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "9x19mm, 8 Rounds, Tracer<br/>For use in the P08";
        ammo = "LIB_B_9x19_Ball_t";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_P08_Tracer_Green_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 8;
    };
// End Pistol magazines

// Rifle magazines
    class LIB_1Rnd_145x114 : CA_Magazine {
        displayName = "PTRD-41, 1 Round, API (B-32)";
        displayNameShort = "API";
        descriptionShort = "14.5x114mm, 1 Round, API (B-32)<br/>For use in the PTRD-41 rifle.";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_PTRD_API_ca.paa";
    };

    class LIB_5Rnd_762x54 : CA_Magazine {
        displayName = "Mosin, 5 Round Clip, Ball (Type L)";
        displayNameShort = "Ball";
        descriptionShort = "7.62x54mm, 5 Rounds, Ball (Type L)<br/>For use in the Mosin Rifles";
        ammo = "LIB_B_762x54_Ball_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_M9130_Ball_ca.paa";
    };
    class LIB_5Rnd_762x54_D : LIB_5Rnd_762x54 {
        displayName = "Mosin, 5 Round Clip, Heavy Ball (Type D)";
        displayNameShort = "Heavy Ball";
        descriptionShort = "7.62x54mm, 5 Rounds, Heavy Ball (Type D)<br/>For use in the Mosin Rifles";
        ammo = "LIB_B_762x54_Ball_D_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_M9130_Heavy_ca.paa";
    };
    class LIB_5Rnd_762x54_b30 : LIB_5Rnd_762x54 {
        displayName = "Mosin, 5 Round Clip, AP (B30)";
        displayNameShort = "AP";
        descriptionShort = "7.62x54mm, 5 Rounds, AP (B30)<br/>For use in the Mosin Rifles";
        ammo = "LIB_B_762x54_Ball_b30_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_M9130_AP_ca.paa";
    };
    class LIB_5Rnd_762x54_t30 : LIB_5Rnd_762x54 {
        displayName = "Mosin, 5 Round Clip, Tracer (T30)";
        displayNameShort = "Tracer";
        descriptionShort = "7.62x54mm, 5 Rounds, Tracer (T30)<br/>For use in the Mosin Rifles";
        ammo = "LIB_B_762x54_Ball_t30_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_M9130_Tracer_White_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 5;
    };
    class LIB_5Rnd_762x54_Mixed_Ball_t30_2PzD : LIB_5Rnd_762x54 {
        displayName = "Mosin, 5 Round Clip, Ball/Tracer (Type L/T30)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.62x54mm, 5 Rounds, Mixed Ball/Tracer (Type L/T30)<br/>For use in the Mosin Rifles";
        ammo = "LIB_B_762x54_Mixed_t30_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_M9130_Ball_White_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_5Rnd_762x54_Mixed_HeavyBall_t30_2PzD : LIB_5Rnd_762x54_D {
        displayName = "Mosin, 5 Round Clip, Heavy Ball/Tracer (Type D/T30)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = "7.62x54mm, 5 Rounds, Mixed Heavy Ball/Tracer (Type D/T30)<br/>For use in the Mosin Rifles";
        ammo = "LIB_B_762x54_Mixed_D_t30_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_M9130_Heavy_White_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_5Rnd_762x54_Mixed_AP_t30_2PzD : LIB_5Rnd_762x54_b30 {
        displayName = "Mosin, 5 Round Clip, AP/Tracer (B30/T30)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.62x54mm, 5 Rounds, Mixed AP/Tracer (B30/T30)<br/>For use in the Mosin Rifles";
        ammo = "LIB_B_762x54_Mixed_b30_t30";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_M9130_AP_White_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_5Rnd_762x54_t46 : LIB_5Rnd_762x54 {
        displayName = "Mosin, 5 Round Clip, Tracer (T46)";
        displayNameShort = "Tracer";
        descriptionShort = "7.62x54mm, 5 Rounds, Tracer (T46)<br/>For use in the Mosin Rifles";
        ammo = "LIB_B_762x54_Ball_t46_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_M9130_Tracer_Red_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 5;
    };
    class LIB_5Rnd_762x54_Mixed_Ball_t46_2PzD : LIB_5Rnd_762x54 {
        displayName = "Mosin, 5 Round Clip, Ball/Tracer (Type L/T46)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.62x54mm, 5 Rounds, Mixed Ball/Tracer (Type L/T46)<br/>For use in the Mosin Rifles";
        ammo = "LIB_B_762x54_Mixed_t46_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_M9130_Ball_Red_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_5Rnd_762x54_Mixed_HeavyBall_t46_2PzD : LIB_5Rnd_762x54_D {
        displayName = "Mosin, 5 Round Clip, Heavy Ball/Tracer (Type D/T46)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = "7.62x54mm, 5 Rounds, Mixed Heavy Ball/Tracer (Type D/T46)<br/>For use in the Mosin Rifles";
        ammo = "LIB_B_762x54_Mixed_D_t46_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_M9130_Heavy_Red_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_5Rnd_762x54_Mixed_AP_t46_2PzD : LIB_5Rnd_762x54_b30 {
        displayName = "Mosin, 5 Round Clip, AP/Tracer (B30/T46)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.62x54mm, 5 Rounds, Mixed AP/Tracer (B30/T46)<br/>For use in the Mosin Rifles";
        ammo = "LIB_B_762x54_Mixed_b30_t46_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_M9130_AP_Red_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };

    class LIB_10Rnd_762x54 : LIB_5Rnd_762x54 {
        displayName = "SVT-40, 10 Round Magazine, Ball (Type L)";
        displayNameShort = "Ball";
        descriptionShort = "7.62x54mm, 10 Rounds, Ball (Type L)<br/>For use in the SVT-40";
        ammo = "LIB_B_762x54_Ball";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Svt40_Ball_ca.paa";
    };
    class LIB_10Rnd_762x54_d : LIB_10Rnd_762x54 {
        displayName = "SVT-40, 10 Round Magazine, Heavy Ball (Type D)";
        displayNameShort = "Heavy Ball";
        descriptionShort = "7.62x54mm, 10 Rounds, Heavy Ball (Type D)<br/>For use in the SVT-40";
        ammo = "LIB_B_762x54_Ball_D";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Svt40_Heavy_ca.paa";
    };
    class LIB_10Rnd_762x54_b30 : LIB_10Rnd_762x54 {
        displayName = "SVT-40, 10 Round Magazine, AP (B30)";
        displayNameShort = "AP";
        descriptionShort = "7.62x54mm, 10 Rounds, AP<br/>For use in the SVT-40";
        ammo = "LIB_B_762x54_Ball_b30";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Svt40_AP_ca.paa";
    };
    class LIB_10Rnd_762x54_t30 : LIB_10Rnd_762x54 {
        displayName = "SVT-40, 10 Round Magazine, Tracer (T30)";
        displayNameShort = "Tracer";
        descriptionShort = "7.62x54mm, 10 Rounds, Tracer (T30)<br/>For use in the SVT-40";
        ammo = "LIB_B_762x54_Ball_t30";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Svt40_Tracer_White_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };
    class LIB_10Rnd_762x54_t302 : LIB_10Rnd_762x54_t30 {
        displayName = "SVT-40, 10 Round Magazine, Ball/Tracer (Type L/T30)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.62x54mm, 10 Rounds, Mixed Ball/Tracer (Type L/T30)<br/>For use in the SVT-40";
        ammo = "LIB_B_762x54_Mixed_t30";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Svt40_Ball_White_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_10Rnd_762x54_Mixed_HeavyBall_t30_2PzD : LIB_10Rnd_762x54_d {
        displayName = "SVT-40, 10 Round Magazine, Heavy Ball/Tracer (Type D/T30)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = "7.62x54mm, 10 Rounds, Mixed Ball/Tracer (Type D/T30)<br/>For use in the SVT-40";
        ammo = "LIB_B_762x54_Mixed_D_t30";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Svt40_Heavy_White_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_10Rnd_762x54_Mixed_AP_t30_2PzD : LIB_10Rnd_762x54_b30 {
        displayName = "SVT-40, 10 Round Magazine, Ball/Tracer (B30/T30)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.62x54mm, 10 Rounds, Mixed Ball/Tracer (B30/T30)<br/>For use in the SVT-40";
        ammo = "LIB_B_762x54_Mixed_b30_t30";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Svt40_AP_White_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_10Rnd_762x54_t46 : LIB_10Rnd_762x54 {
        displayName = "SVT-40, 10 Round Magazine, Tracer (T46)";
        displayNameShort = "Tracer";
        descriptionShort = "7.62x54mm, 10 Rounds, Tracer (T46)<br/>For use in the SVT-40";
        ammo = "LIB_B_762x54_Ball_t46";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Svt40_Tracer_Red_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };
    class LIB_10Rnd_762x54_t462 : LIB_10Rnd_762x54_t46 {
        displayName = "SVT-40, 10 Round Magazine, Ball/Tracer (Type L/T46)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.62x54mm, 10 Rounds, Mixed Ball/Tracer (Type L/T46)<br/>For use in the SVT-40";
        ammo = "LIB_B_762x54_Mixed_t46";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Svt40_Ball_Red_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_10Rnd_762x54_Mixed_HeavyBall_t46_2PzD : LIB_10Rnd_762x54_d {
        displayName = "SVT-40, 10 Round Magazine, Heavy Ball/Tracer (Type D/T46)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = "7.62x54mm, 10 Rounds, Mixed Ball/Tracer (Type D/T46)<br/>For use in the SVT-40";
        ammo = "LIB_B_762x54_Mixed_D_t46";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Svt40_Heavy_Red_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_10Rnd_762x54_Mixed_AP_t46_2PzD : LIB_10Rnd_762x54_b30 {
        displayName = "SVT-40, 10 Round Magazine, AP/Tracer (B30/T46)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.62x54mm, 10 Rounds, Mixed AP/Tracer (B30/T46)<br/>For use in the SVT-40";
        ammo = "LIB_B_762x54_Mixed_b30_t46";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Svt40_AP_Red_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };

    class LIB_5Rnd_762x63 : CA_Magazine {
        displayName = "M1903 Springfield, 5 Round Clip, Ball (M2)";
        displayNameShort = "Ball";
        descriptionShort = ".30-06, 5 Rounds, Ball (M2)<br/>For use in the M1903 Springfield";
        ammo = "LIB_B_762x63_Ball_NoCartridge";
    };
    class LIB_5Rnd_762x63_M1 : LIB_5Rnd_762x63 {
        displayName = "M1903 Springfield, 5 Round Clip, Heavy Ball (M1)";
        displayNameShort = "Heavy Ball";
        descriptionShort = ".30-06, 5 Rounds, Heavy Ball (M1)<br/>For use in the M1903 Springfield";
        ammo = "LIB_B_762x63_Ball_M1_NoCartridge";
    };
    class LIB_5Rnd_762x63_AP_2PzD : LIB_5Rnd_762x63 {
        displayName = "M1903 Springfield, 5 Round Clip, AP (M2)";
        displayNameShort = "AP";
        descriptionShort = ".30-06, 5 Rounds, AP (M2)<br/>For use in the M1903 Springfield";
        ammo = "LIB_B_762x63_Ball_M2_AP_NoCartridge";
    };
    class LIB_5Rnd_762x63_t : LIB_5Rnd_762x63 {
        displayName = "M1903 Springfield, 5 Round Clip, Tracer (M1)";
        displayNameShort = "Tracer";
        descriptionShort = ".30-06, 5 Rounds, Tracer (M1)<br/>For use in the M1903 Springfield";
        ammo = "LIB_B_762x63_Ball_NoCartridge_t";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    class LIB_5Rnd_762x63_Mixed_Ball_M2_2PzD : LIB_5Rnd_762x63 {
        displayName = "M1903 Springfield, 5 Round Clip, Ball/Tracer (M2/M1)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = ".30-06, 5 Rounds, Mixed Ball/Tracer (M2/M1)<br/>For use in the M1903 Springfield";
        ammo = "LIB_B_762x63_Mixed_Ball_Tracer_NoCartridge";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_5Rnd_762x63_Mixed_HeavyBall_M1_2PzD : LIB_5Rnd_762x63_M1 {
        displayName = "M1903 Springfield, 5 Round Clip, Heavy Ball/Tracer (M1/M1)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = ".30-06, 5 Rounds, Mixed Heavy Ball/Tracer (M1/M1)<br/>For use in the M1903 Springfield";
        ammo = "LIB_B_762x63_Mixed_HeavyBall_Tracer_NoCartridge";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_5Rnd_762x63_Mixed_AP_M2_2PzD : LIB_5Rnd_762x63 {
        displayName = "M1903 Springfield, 5 Round Clip, AP/Tracer (M2/M1)";
        displayNameShort = "AP/Tracer";
        descriptionShort = ".30-06, 5 Rounds, Mixed AP/Tracer (M2/M1)<br/>For use in the M1903 Springfield";
        ammo = "LIB_B_762x63_Mixed_AP_Tracer_NoCartridge";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };

    class LIB_5Rnd_792x57 : CA_Magazine {
        displayName = "K98k, 5 Round Clip, Ball (SmE)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 5 Rounds, Ball (SmE)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Ball_SmE_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_K98_Ball_ca.paa";
    };
    class LIB_5Rnd_792x57_Mixed_SmE_2PzD : LIB_5Rnd_792x57 {
        displayName = "K98k, 5 Round Clip, Ball/Tracer (SmE/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 5 Rounds, Mixed Ball/Tracer (SmE/LS L'spur)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Mixed_SmE_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_K98_Ball_Yellow_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_5Rnd_792x57_sS : LIB_5Rnd_792x57 {
        displayName = "K98k, 5 Round Clip, Ball (sS Patrone)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 5 Rounds, Ball (sS Patrone)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Ball_sS_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_K98_Ball_ca.paa";
    };
    class LIB_5Rnd_792x57_Mixed_sS_2PzD : LIB_5Rnd_792x57_sS {
        displayName = "K98k, 5 Round Clip, Ball/Tracer (sS Patrone/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 5 Rounds, Mixed Ball/Tracer (sS Patrone/LS L'spur)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Mixed_sS_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_K98_Ball_Yellow_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_5Rnd_792x57_SmK : LIB_5Rnd_792x57 {
        displayName = "K98k, 5 Round Clip, AP (SmK)";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 5 Rounds, AP (SmK)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Ball_SmK_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_K98_AP_ca.paa";
    };
    class LIB_5Rnd_792x57_Mixed_SmK_2PzD : LIB_5Rnd_792x57_SmK {
        displayName = "K98k, 5 Round Clip, AP/Tracer (SmK/LS L'spur)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 5 Rounds, Mixed AP/Tracer (SmK/LS L'spur)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Mixed_SmK_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_K98_AP_Yellow_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_5Rnd_792x57_t : LIB_5Rnd_792x57 {
        displayName = "K98k, 5 Round Clip, Tracer (LS L'spur)";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 5 Rounds, Tracer (LS L'spur)<br/>For use in the K98k";
        ammo = "LIB_B_792x57_Tracer_NoCartridge";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_K98_Tracer_Yellow_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 5;
    };

    class LIB_7Rnd_45ACP_DeLisle : LIB_7Rnd_45ACP {
        displayName = "De Lisle Carbine, 7 Round Magazine, Ball (Mk Iz)";
        displayNameShort = "Ball";
        descriptionShort = ".45 ACP, 7 Rounds, Ball (Mk Iz)<br/>For use in the De Lisle Carbine";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Ball_ca.paa";
        scope = 1;
    };
    class LIB_7Rnd_45ACP_2PzD : LIB_7Rnd_45ACP_DeLisle {
        displayName = "De Lisle Carbine, 7 Round Magazine, Ball (Mk Iz)";
        displayNameShort = "Ball";
        descriptionShort = ".45 ACP, 7 Rounds, Ball (Mk Iz)<br/>For use in the De Lisle Carbine";
        count = 7;
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Ball_ca.paa";
    };
    class LIB_7Rnd_45ACP_Tracer_2PzD : LIB_7Rnd_45ACP_2PzD {
        displayName = "De Lisle Carbine, 7 Round Magazine, Tracer (M26)";
        displayNameShort = "Tracer";
        descriptionShort = ".45 ACP, 7 Rounds, Tracer (M26)<br/>For use in the De Lisle Carbine";
        ammo = "LIB_B_45ACP_Ball_t";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Tracer_Yellow_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 7;
    };
    class LIB_11Rnd_45ACP_2PzD : LIB_7Rnd_45ACP_2PzD {
        displayName = "De Lisle Carbine, 11 Round Magazine, Ball (Mk Iz)";
        displayNameShort = "Ball";
        descriptionShort = ".45 ACP, 11 Rounds, Ball (Mk Iz)<br/>For use in the De Lisle Carbine";
        count = 11;
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Ball_ca.paa";
    };
    class LIB_11Rnd_45ACP_Tracer_2PzD : LIB_11Rnd_45ACP_2PzD {
        displayName = "De Lisle Carbine, 11 Round Magazine, Tracer (M26)";
        displayNameShort = "Tracer";
        descriptionShort = ".45 ACP, 11 Rounds, Tracer (M26)<br/>For use in the De Lisle Carbine";
        ammo = "LIB_B_45ACP_Ball_t";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Colt1911_Tracer_Yellow_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 11;
    };

    class LIB_8Rnd_762x63 : CA_Magazine {
        displayName = "M1 Garand, 8 Round Clip, Ball (M2)";
        displayNameShort = "Ball";
        descriptionShort = ".30-06, 8 Rounds, Ball (M2)<br/>For use in the M1 Garand";
        ammo = "LIB_B_762x63_Ball";
    };
    class LIB_8Rnd_762x63_M1 : LIB_8Rnd_762x63 {
        displayName = "M1 Garand, 8 Round Clip, Heavy Ball (M1)";
        displayNameShort = "Heavy Ball";
        descriptionShort = ".30-06, 8 Rounds, Heavy Ball (M1)<br/>For use in the M1 Garand";
        ammo = "LIB_B_762x63_Ball_M1";
    };
    class LIB_8Rnd_762x63_AP_2PzD : LIB_8Rnd_762x63 {
        displayName = "M1 Garand, 8 Round Clip, AP (M2)";
        displayNameShort = "AP";
        descriptionShort = ".30-06, 8 Rounds, AP (M2)<br/>For use in the M1 Garand";
        ammo = "LIB_B_762x63_Ball_M2_AP";
    };
    class LIB_8Rnd_762x63_t : LIB_8Rnd_762x63 {
        displayName = "M1 Garand, 8 Round Clip, Tracer (M1)";
        displayNameShort = "Tracer";
        descriptionShort = ".30-06, 8 Rounds, Tracer (M1)<br/>For use in the M1 Garand";
        ammo = "LIB_B_762x63_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    class LIB_8Rnd_762x63_Mixed_Ball_M2_2PzD : LIB_8Rnd_762x63 {
        displayName = "M1 Garand, 8 Round Clip, Ball/Tracer (M2/M1)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = ".30-06, 8 Rounds, Mixed Ball/Tracer (M2/M1)<br/>For use in the M1 Garand";
        ammo = "LIB_B_762x63_Mixed_Ball_Tracer";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_8Rnd_762x63_Mixed_HeavyBall_M1_2PzD : LIB_8Rnd_762x63_M1 {
        displayName = "M1 Garand, 8 Round Clip, Heavy Ball/Tracer (M1/M1)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = ".30-06, 8 Rounds, Mixed Heavy Ball/Tracer (M1/M1)<br/>For use in the M1 Garand";
        ammo = "LIB_B_762x63_Mixed_HeavyBall_Tracer";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_8Rnd_762x63_Mixed_AP_M2_2PzD : LIB_8Rnd_762x63 {
        displayName = "M1 Garand, 8 Round Clip, AP/Tracer (M2/M1)";
        displayNameShort = "AP/Tracer";
        descriptionShort = ".30-06, 8 Rounds, Mixed AP/Tracer (M2/M1)<br/>For use in the M1 Garand";
        ammo = "LIB_B_762x63_Mixed_AP_Tracer";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };

    class LIB_10Rnd_792x57 : LIB_5Rnd_792x57 {
        displayName = "G43, 10 Round Magazine, Ball (SmE)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 10 Rounds, Ball (SmE)<br/>For use in the G43";
        ammo = "LIB_B_792x57_Ball_SmE";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_G43_Ball_ca.paa";
    };
    class LIB_10Rnd_792x57_sS : LIB_10Rnd_792x57 {
        displayName = "G43, 10 Round Magazine, Ball (sS Patrone)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 10 Rounds, Ball (sS Patrone)<br/>For use in the G43";
        ammo = "LIB_B_792x57_Ball_sS";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_G43_Ball_ca.paa";
    };
    class LIB_10Rnd_792x57_Mixed_sS_2PzD : LIB_10Rnd_792x57_sS {
        displayName = "G43, 10 Round Magazine, Ball/Tracer (sS Patrone/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 10 Rounds, Mixed Ball/Tracer (sS Patrone/LS L'spur)<br/>For use in the G43";
        ammo = "LIB_B_792x57_Mixed_sS";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_G43_Ball_Yellow_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_10Rnd_792x57_SmK : LIB_10Rnd_792x57 {
        displayName = "G43, 10 Round Magazine, AP (SmK)";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 10 Rounds, AP (SmK)<br/>For use in the G43";
        ammo = "LIB_B_792x57_Ball_SmK";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_G43_AP_ca.paa";
    };
    class LIB_10Rnd_792x57_Mixed_SmK_2PzD : LIB_10Rnd_792x57_SmK {
        displayName = "G43, 10 Round Magazine, AP/Tracer (SmK/LS L'spur)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 10 Rounds, Mixed AP/Tracer (SmK/LS L'spur)<br/>For use in the G43";
        ammo = "LIB_B_792x57_Mixed_SmK";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_G43_AP_Yellow_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_10Rnd_792x57_T : LIB_10Rnd_792x57 {
        displayName = "G43, 10 Round Magazine, Tracer (LS L'spur)";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 10 Rounds, Tracer (LS L'spur)<br/>For use in the G43";
        ammo = "LIB_B_792x57_Tracer";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_G43_Tracer_Yellow_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };
    class LIB_10Rnd_792x57_T2 : LIB_10Rnd_792x57_T {
        displayName = "G43, 10 Round Magazine, Ball/Tracer (SmE/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 10 Rounds, Mixed Ball/Tracer (SmE/LS L'spur)<br/>For use in the G43";
        ammo = "LIB_B_792x57_Mixed_SmE";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_G43_Ball_Yellow_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };

    class LIB_10Rnd_792x57_clip : LIB_5Rnd_792x57 {
        displayName = "G41, 2x 5 Round Clips, Ball (sS Patrone)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 10 Rounds, Ball (sS Patrone)<br/>For use in the G41";
        ammo = "LIB_B_792x57_Ball_sS";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_K98_Ball_ca.paa";
    };
    class LIB_10Rnd_792x57_Mixed_sS_clip_2PzD : LIB_10Rnd_792x57_clip {
        displayName = "G41, 2x 5 Round Clips, Ball/Tracer (sS Patrone/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 10 Rounds, Mixed Ball/Tracer (sS Patrone/LS L'spur)<br/>For use in the G41";
        ammo = "LIB_B_792x57_Mixed_sS";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_K98_Ball_Yellow_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_10Rnd_792x57_SmE_clip_2PzD : LIB_10Rnd_792x57_clip {
        displayName = "G41, 2x 5 Round Clips, Ball (SmE)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 10 Rounds, Ball (SmE)<br/>For use in the G41";
        ammo = "LIB_B_792x57_Ball_SmE";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_K98_Ball_ca.paa";
    };
    class LIB_10Rnd_792x57_Mixed_SmE_clip_2PzD : LIB_10Rnd_792x57_SmE_clip_2PzD {
        displayName = "G41, 2x 5 Round Clips, Ball/Tracer (SmE/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 10 Rounds, Mixed Ball/Tracer (SmE/LS L'spur)<br/>For use in the G41";
        ammo = "LIB_B_792x57_Mixed_SmE";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_K98_Ball_Yellow_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_10Rnd_792x57_SmK_clip_2PzD : LIB_10Rnd_792x57_clip {
        displayName = "G41, 2x 5 Round Clips, Ball (AP)";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 10 Rounds, Ball (AP)<br/>For use in the G41";
        ammo = "LIB_B_792x57_Ball_SmK";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_K98_AP_ca.paa";
    };
    class LIB_10Rnd_792x57_Mixed_SmK_clip_2PzD : LIB_10Rnd_792x57_SmK_clip_2PzD {
        displayName = "G41, 2x 5 Round Clips, AP/Tracer (SmK/LS L'spur)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 10 Rounds, Mixed AP/Tracer (SmK/LS L'spur)<br/>For use in the G41";
        ammo = "LIB_B_792x57_Mixed_SmK";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_K98_AP_Yellow_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 1;
    };
    class LIB_10Rnd_792x57_T_clip_2PzD : LIB_10Rnd_792x57_clip {
        displayName = "G41, 2x 5 Round Clips, Tracer (LS L'spur)";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 10 Rounds, Tracer (LS L'spur)<br/>For use in the G41";
        ammo = "LIB_B_792x57_Tracer";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_K98_Tracer_Yellow_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };

    class LIB_10Rnd_770x56 : CA_Magazine {
        displayName = "Lee Enfield, 2x 5 Round Clips, Ball (Mk VIIz)";
        displayNameShort = "Ball";
        descriptionShort = ".303 British, 10 Rounds, Ball (Mk VIIz)<br/>For use in the Lee Enfield";
        ammo = "LIB_B_770x56_Ball_NoCartridge";
    };
    class LIB_10Rnd_770x56_MkVIII : LIB_10Rnd_770x56 {
        displayName = "Lee Enfield, 2x 5 Round Clips, Long Range (Mk IIIz)";
        displayNameShort = "Long Range";
        descriptionShort = ".303 British, 10 Rounds, Long Range (Mk IIIz)<br/>For use in the Lee Enfield";
        ammo = "LIB_B_770x56_MkVIII_NoCartridge";
    };
    class LIB_10Rnd_770x56_AP_2PzD : LIB_10Rnd_770x56 {
        displayName = "Lee Enfield, 2x 5 Round Clips, AP (W Iz)";
        displayNameShort = "AP";
        descriptionShort = ".303 British, 10 Rounds, AP (W Iz)<br/>For use in the Lee Enfield";
        ammo = "LIB_B_770x56_AP_NoCartridge";
    };
    class LIB_10Rnd_770x56_Tracer_2PzD : LIB_10Rnd_770x56 {
        displayName = "Lee Enfield, 2x 5 Round Clips, Tracer (G IIz)";
        displayNameShort = "Tracer";
        descriptionShort = ".303 British, 10 Rounds, Tracer (G IIz)<br/>For use in the Lee Enfield";
        ammo = "LIB_B_770x56_Tracer_NoCartridge";
    };
    class LIB_10Rnd_770x56_Mixed_2PzD : LIB_10Rnd_770x56 {
        displayName = "Lee Enfield, 2x 5 Round Clips, Ball/Tracer (Mk VIIz/G IIz)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = ".303 British, 10 Rounds, Mixed Ball/Tracer (Mk VIIz/G IIz)<br/>For use in the Lee Enfield";
        ammo = "LIB_B_770x56_Mixed_Ball_Tracer_NoCartridge";
    };
    class LIB_10Rnd_770x56_Mixed_MkVIII_2PzD : LIB_10Rnd_770x56 {
        displayName = "Lee Enfield, 2x 5 Round Clips, Long Range/Tracer (Mk IIIz/G IIz)";
        displayNameShort = "Long Range/Tracer";
        descriptionShort = ".303 British, 10 Rounds, Mixed Long Range/Tracer (Mk IIIz/G IIz)<br/>For use in the Lee Enfield";
        ammo = "LIB_B_770x56_Mixed_MkVIII_Tracer_NoCartridge";
    };
    class LIB_10Rnd_770x56_Mixed_AP_2PzD : LIB_10Rnd_770x56 {
        displayName = "Lee Enfield, 2x 5 Round Clips, AP/Tracer (W Iz/G IIz)";
        displayNameShort = "AP/Tracer";
        descriptionShort = ".303 British, 10 Rounds, Mixed AP/Tracer (W Iz/G IIz)<br/>For use in the Lee Enfield";
        ammo = "LIB_B_770x56_Mixed_AP_Tracer_NoCartridge";
    };

    class LIB_15Rnd_762x33 : LIB_8Rnd_762x63 {
        displayName = "M1 Carbine, 15 Round Magazine, Ball (M1)";
        displayNameShort = "Ball";
        descriptionShort = ".30 Carbine, 15 Rounds, Ball (M1)<br/>For use in the M1 Carbine";
    };
    class LIB_15Rnd_762x33_t : LIB_15Rnd_762x33 {
        displayName = "M1 Carbine, 15 Round Magazine, Tracer (M27)";
        displayNameShort = "Tracer";
        descriptionShort = ".30 Carbine, 15 Rounds, Tracer (M27)<br/>For use in the M1 Carbine";
    };
    class LIB_30Rnd_762x33_2PzD : LIB_15Rnd_762x33 {
        displayName = "M2 Carbine, 30 Round Magazine, Ball (M1)";
        displayNameShort = "Ball";
        descriptionShort = ".30 Carbine, 30 Rounds, Ball (M1)<br/>For use in the M2 Carbine";
        count = 30;
        mass = 5.5;
    };
    class LIB_30Rnd_762x33_Tracer_2PzD : LIB_15Rnd_762x33_t {
        displayName = "M2 Carbine, 30 Round Magazine, Tracer (M27)";
        displayNameShort = "Tracer Tracer";
        descriptionShort = ".30 Carbine, 30 Rounds, Tracer (M27)<br/>For use in the M2 Carbine";
        count = 30;
        mass = 5.5;
    };

    class LIB_20Rnd_792x57 : LIB_5Rnd_792x57 {
        displayName = "FG42, 20 Round Magazine, Ball (SmE)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 20 Rounds, Ball (SmE)<br/>For use in the FG42";
        ammo = "LIB_B_792x57_Ball_SmE";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_FG42_Ball_ca.paa";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_20Rnd_792x57_Mixed_SmE_2PzD : LIB_20Rnd_792x57 {
        displayName = "FG42, 20 Round Magazine, Ball/Tracer (SmE/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Mixed Ball/Tracer (SmE/LS L'spur)<br/>For use in the FG42";
        ammo = "LIB_B_792x57_Mixed_SmE";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_FG42_Ball_Yellow_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 3;
    };
    class LIB_20Rnd_792x57_sS_2PzD : LIB_20Rnd_792x57 {
        displayName = "FG42, 20 Round Magazine, Ball (sS Patrone)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 20 Rounds, Ball (sS Patrone)<br/>For use in the FG42";
        ammo = "LIB_B_792x57_Ball_sS";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_FG42_Ball_ca.paa";
    };
    class LIB_20Rnd_792x57_Mixed_sS_2PzD : LIB_20Rnd_792x57 {
        displayName = "FG42, 20 Round Magazine, Ball/Tracer (sS Patrone/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Mixed Ball/Tracer (sS Patrone/LS L'spur)<br/>For use in the FG42";
        ammo = "LIB_B_792x57_Mixed_sS";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_FG42_Ball_Yellow_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 3;
    };
    class LIB_20Rnd_792x57_SmK_2PzD : LIB_20Rnd_792x57 {
        displayName = "FG42, 20 Round Magazine, AP (SmK)";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 20 Rounds, AP (SmK)<br/>For use in the FG42";
        ammo = "LIB_B_792x57_Ball_SmK";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_FG42_AP_ca.paa";
    };
    class LIB_20Rnd_792x57_Mixed_SmK_2PzD : LIB_20Rnd_792x57 {
        displayName = "FG42, 20 Round Magazine, AP/Tracer (SmK/LS L'spur)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Mixed AP/Tracer (SmK/LS L'spur)<br/>For use in the FG42";
        ammo = "LIB_B_792x57_Mixed_SmK";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_FG42_AP_Yellow_ca.paa";
        tracersEvery = 3;
        lastRoundsTracer = 3;
    };
    class LIB_20Rnd_792x57_TraceOnly_2PzD : LIB_20Rnd_792x57 {
        displayName = "FG42, 20 Round Magazine, Tracer (LS L'spur)";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 20 Rounds, Tracer (LS L'spur)<br/>For use in the FG42";
        ammo = "LIB_B_792x57_Tracer";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_FG42_Tracer_Yellow_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 1;
    };

    class LIB_30Rnd_792x33 : CA_Magazine {
        displayName = "StG44, 30 Round Magazine, Ball (M43)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x33mm, 30 Rounds,  Ball (M43)<br/>For use in the StG44";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_StG44_Ball_ca.paa";
    };
    class LIB_30rnd_792x33_t : LIB_30Rnd_792x33 {
        displayName = "StG44, 30 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x33mm, 30 Rounds, Tracer<br/>For use in the StG44";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_StG44_Tracer_Yellow_ca.paa";
    };
// End Rifle magazines

// SMG magazines
    class LIB_30Rnd_45ACP : CA_Magazine {
        displayName = "Thompson, 30 Round Magazine, Ball (M1911)";
        displayNameShort = "Ball";
        descriptionShort = ".45 ACP, 30 Rounds, Ball (M1911)<br/>For use in the M1928, M1, or M1A1 Thompson";
    };
    class LIB_30Rnd_45ACP_t : LIB_30Rnd_45ACP {
        displayName = "Thompson, 30 Round Magazine, Tracer (M26)";
        displayNameShort = "Tracer";
        descriptionShort = ".45 ACP, 30 Rounds, Tracer (M26)<br/>For use in the M1928, M1, or M1A1 Thompson";
    };
    class LIB_20Rnd_45ACP_M1_2PzD : LIB_30Rnd_45ACP {
        displayName = "Thompson, 20 Round Magazine, Ball (M1911)";
        displayNameShort = "Ball";
        descriptionShort = ".45 ACP, 20 Rounds, Ball (M1911)<br/>For use in the M1928, M1, or M1A1 Thompson";
        count = 20;
        mass = 7;
    };
    class LIB_20Rnd_45ACP_M1_Tracer_2PzD : LIB_20Rnd_45ACP_M1_2PzD {
        displayName = "Thompson, 20 Round Magazine, Tracer (M26)";
        displayNameShort = "Tracer";
        descriptionShort = ".45 ACP, 20 Rounds, Tracer (M26)<br/>For use in the M1928, M1, or M1A1 Thompson";
        ammo = "LIB_B_45ACP_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 20;
    };
    class LIB_50Rnd_45ACP : LIB_30Rnd_45ACP {
        displayName = "Thompson M1928, 50 Round Magazine, Ball (M1911)";
        displayNameShort = "Ball";
        descriptionShort = ".45 ACP, 50 Rounds, Ball (M1911)<br/>For use in the M1928 Thompson";
    };
    class LIB_50Rnd_45ACP_Tracer_2PzD : LIB_50Rnd_45ACP {
        displayName = "Thompson M1928, 20 Round Magazine, Tracer (M26)";
        displayNameShort = "Tracer";
        descriptionShort = ".45 ACP, 50 Rounds, Tracer (M26)<br/>For use in the M1928 Thompson";
        ammo = "LIB_B_45ACP_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 50;
    };

    class LIB_30Rnd_M3_GreaseGun_45ACP : CA_Magazine {
        displayName = "M3 Grease Gun, 30 Round Magazine, Ball (M1911)";
        displayNameShort = "Ball";
        descriptionShort = ".45 ACP, 30 Rounds, Ball (M1911)<br/>For use in the M3 Grease Gun";
    };
    class LIB_30Rnd_M3_GreaseGun_t_45ACP : LIB_50Rnd_45ACP {
        displayName = "M3 Grease Gun, 30 Round Magazine, Tracer (M26)";
        displayNameShort = "Tracer";
        descriptionShort = ".45 ACP, 30 Rounds, Tracer (M26)<br/>For use in the M3 Grease Gun";
        ammo = "LIB_B_45ACP_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 30;
    };

    class LIB_32Rnd_9x19 : CA_Magazine {
        displayName = "MP40, 32 Round Magazine, Ball (PP08 mE)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 32 Rounds, Ball (PP08 mE)<br/>For use in the MP40";
    };
    class LIB_32rnd_9x19_t : LIB_32Rnd_9x19 {
        displayName = "MP40, 32 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "9x19mm, 32 Rounds, Tracer<br/>For use in the MP40";
    };

    class LIB_32Rnd_9x19_Sten : CA_Magazine {
        displayName = "Sten Gun, 32 Round Magazine, Ball (Mk Iz)";
        displayNameShort = "Ball";
        descriptionShort = "9x19mm, 32 Rounds, Ball (Mk Iz)<br/>For use in the Sten Gun";
    };
    class LIB_32rnd_9x19_Sten_Tracer_2PzD : LIB_32Rnd_9x19_Sten {
        displayName = "Sten Gun, 32 Round Magazine, Tracer";
        displayNameShort = "Tracer";
        descriptionShort = "9x19mm, 32 Rounds, Tracer<br/>For use in the Sten Gun";
        ammo = "LIB_B_9x19_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 32;
    };

    class LIB_35Rnd_762x25 : CA_Magazine {
        displayName = "PPSh-41, 35 Round Magazine, Ball (Type P)";
        displayNameShort = "Ball";
        descriptionShort = "7.62x25mm, 35 Rounds, Ball (Type P)<br/>For use in the PPSh-41";
    };
    class LIB_35Rnd_762x25_ap : LIB_35Rnd_762x25 {
        displayName = "PPSh-41, 35 Round Magazine, APT (Type P-41)";
        displayNameShort = "APT";
        descriptionShort = "7.62x25mm, 35 Rounds, APT (Type P-41)<br/>For use in the PPSh-41";
    };
    class LIB_35Rnd_762x25_t : LIB_35Rnd_762x25 {
        displayName = "PPSh-41, 35 Round Magazine, Tracer (Type PT)";
        displayNameShort = "Tracer";
        descriptionShort = "7.62x25mm, 35 Rounds, Tracer (Type PT)<br/>For use in the PPSh-41";
    };
    class LIB_35Rnd_762x25_t2 : LIB_35Rnd_762x25_t {
        displayName = "PPSh-41, 35 Round Magazine, Ball/Tracer (Type P/Type PT)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.62x25mm, 35 Rounds, Mixed Ball/Tracer (Type P/Type PT)<br/>For use in the PPSh-41";
        ammo = "LIB_B_762x25_Mixed_pt";
        tracersEvery = 4;
        lastRoundsTracer = 1;
    };

    class LIB_71Rnd_762x25 : CA_Magazine {
        displayName = "PPSh-41, 71 Round Magazine, Ball (Type P)";
        displayNameShort = "Ball";
        descriptionShort = "7.62x25mm, 71 Rounds, Ball (Type P)<br/>For use in the PPSh-41";
    };
    class LIB_71Rnd_762x25_ap : LIB_71Rnd_762x25 {
        displayName = "PPSh-41, 71 Round Magazine, APT (Type P-41)";
        displayNameShort = "APT";
        descriptionShort = "7.62x25mm, 71 Rounds, APT (Type P-41)<br/>For use in the PPSh-41";
    };
    class LIB_71Rnd_762x25_t : LIB_71Rnd_762x25 {
        displayName = "PPSh-41, 71 Round Magazine, Tracer (Type PT)";
        displayNameShort = "Tracer";
        descriptionShort = "7.62x25mm, 71 Rounds, Tracer (Type PT)<br/>For use in the PPSh-41";
    };
    class LIB_71Rnd_762x25_t2 : LIB_71Rnd_762x25_t {
        displayName = "PPSh-41, 71 Round Magazine, Ball/Tracer (Type P/Type PT)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.62x25mm, 71 Rounds, Mixed Ball/Tracer (Type P/Type PT)<br/>For use in the PPSh-41";
        ammo = "LIB_B_762x25_Mixed_pt";
        tracersEvery = 4;
        lastRoundsTracer = 1;
    };
// End SMG magazines

// MG magazines

    class LIB_20Rnd_762x63 : CA_Magazine {
        displayName = "M1918A2 BAR, 20 Round Clip, Ball/Tracer (M2/M1)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = ".30-06, 20 Rounds, Ball/Tracer (M2/M1)<br/>For use in the M1918A2 BAR";
        ammo = "LIB_B_762x63_Mixed_Ball_Tracer";
        tracersEvery = 3;
        lastRoundsTracer = 3;
    };
    class LIB_20Rnd_762x63_M1 : LIB_20Rnd_762x63 {
        displayName = "M1918A2 BAR, 20 Round Clip, Heavy Ball/Tracer (M1/M1)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = ".30-06, 20 Rounds, Heavy Ball/Tracer (M1/M1)<br/>For use in the M1918A2 BAR";
        ammo = "LIB_B_762x63_Mixed_HeavyBall_Tracer";
    };
    class LIB_20Rnd_762x63_Mixed_AP_2PzD : LIB_20Rnd_762x63 {
        displayName = "M1918A2 BAR, 20 Round Clip, AP/Tracer (M2/M1)";
        displayNameShort = "AP/Tracer";
        descriptionShort = ".30-06, 20 Rounds, AP/Tracer (M2/M1)<br/>For use in the M1918A2 BAR";
        ammo = "LIB_B_762x63_Mixed_AP_Tracer";
    };
    class LIB_20Rnd_762x63_Tracer_2PzD : LIB_20Rnd_762x63 {
        displayName = "M1918A2 BAR, 20 Round Clip, Tracer (M1)";
        displayNameShort = "Tracer";
        descriptionShort = ".30-06, 20 Rounds, Tracer (M1)<br/>For use in the M1918A2 BAR";
        ammo = "LIB_B_762x63_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    class LIB_20Rnd_762x63_Ball_M2_NoTrace_2PzD : LIB_20Rnd_762x63 {
        displayName = "M1918A2 BAR, 20 Round Clip, Ball (M2)";
        displayNameShort = "Ball";
        descriptionShort = ".30-06, 20 Rounds, Ball (M2)<br/>For use in the M1918A2 BAR";
        ammo = "LIB_B_762x63_Ball";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_20Rnd_762x63_HeavyBall_M1_NoTrace_2PzD : LIB_20Rnd_762x63_M1 {
        displayName = "M1918A2 BAR, 20 Round Clip, Heavy Ball (M1)";
        displayNameShort = "Heavy Ball";
        descriptionShort = ".30-06, 20 Rounds, Heavy Ball (M1)<br/>For use in the M1918A2 BAR";
        ammo = "LIB_B_762x63_Ball_M1";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_20Rnd_762x63_AP_NoTrace_2PzD : LIB_20Rnd_762x63 {
        displayName = "M1918A2 BAR, 20 Round Clip, AP (M2)";
        displayNameShort = "AP";
        descriptionShort = ".30-06, 20 Rounds, AP (M2)<br/>For use in the M1918A2 BAR";
        ammo = "LIB_B_762x63_Ball_M2_AP";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class LIB_30Rnd_770x56 : CA_Magazine {
        displayName = "Bren Gun, 30 Round Magazine, Ball/Tracer (Mk VIIz/G IIz)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = ".303 British, 30 Rounds Mixed Ball/Tracer (Mk VIIz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_Mixed_Ball_Tracer";
        tracersEvery = 3;
        lastRoundsTracer = 3;
        ace_isbelt = 1;
    };
    class LIB_30Rnd_770x56_MKVIII : LIB_30Rnd_770x56 {
        displayName = "Bren Gun, 30 Round Magazine, Long Range/Tracer (Mk IIIz/G IIz)";
        displayNameShort = "Long Range/Tracer";
        descriptionShort = ".303 British, 30 Rounds, Mixed Long Range/Tracer (Mk IIIz/G IIz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_Mixed_MkVIII_Tracer";
    };
    class LIB_30Rnd_770x56_Mixed_AP_2PzD : LIB_30Rnd_770x56 {
        displayName = "Bren Gun, 30 Round Magazine, AP/Tracer (W Iz/G IIz)";
        displayNameShort = "AP/Tracer";
        descriptionShort = ".303 British, 30 Rounds, Mixed AP/Tracer (W Iz/G IIz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_Mixed_AP_Tracer";
    };
    class LIB_30Rnd_770x56_Tracer_2PzD : LIB_30Rnd_770x56 {
        displayName = "Bren Gun, 30 Round Magazine, Tracer (G IIz)";
        displayNameShort = "Tracer";
        descriptionShort = ".303 British, 30 Rounds, Tracer (G IIz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_Tracer";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    class LIB_30Rnd_770x56_NoTrace_2PzD : LIB_30Rnd_770x56 {
        displayName = "Bren Gun, 30 Round Magazine, Ball (Mk VIIz)";
        displayNameShort = "Ball";
        descriptionShort = ".303 British, 30 Rounds Ball (Mk VIIz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_Ball";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_30Rnd_770x56_MKVIII_NoTrace_2PzD : LIB_30Rnd_770x56 {
        displayName = "Bren Gun, 30 Round Magazine, Long Range (Mk IIIz)";
        displayNameShort = "Long Range";
        descriptionShort = ".303 British, 30 Rounds, Long Range (Mk IIIz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_MkVIII";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_30Rnd_770x56_AP_NoTrace_2PzD : LIB_30Rnd_770x56 {
        displayName = "Bren Gun, 30 Round Magazine, AP (W Iz)";
        displayNameShort = "AP";
        descriptionShort = ".303 British, 30 Rounds, AP (W Iz)<br/>For use in the Bren Gun";
        ammo = "LIB_B_770x56_AP";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class LIB_47Rnd_762x54 : CA_Magazine {
        displayName = "DP28, 47 Round Magazine, Ball/Tracer (Type L/T46)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.62x54mm, 47 Rounds, Mixed Ball/Tracer (Type L/T46)<br/>For use in the DP28";
        ammo = "LIB_B_762x54_Mixed_t46";
        tracersEvery = 3;
        lastRoundsTracer = 3;
        ace_isbelt = 1;
    };
    class LIB_47Rnd_762x54d : LIB_47Rnd_762x54 {
        displayName = "DP28, 47 Round Magazine, Heavy Ball/Tracer (Type D/T46)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = "7.62x54mm, 47 Rounds, Mixed Ball/Tracer (Type D/T46)<br/>For use in the DP28";
        ammo = "LIB_B_762x54_Mixed_D_t46";
        tracersEvery = 3;
        lastRoundsTracer = 3;
    };
    class LIB_47Rnd_762x54_Mixed_AP_t46_2PzD : LIB_47Rnd_762x54 {
        displayName = "DP28, 47 Round Magazine, AP/Tracer (B30/T46)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.62x54mm, 47 Rounds, Mixed AP/Tracer (B30/T46)<br/>For use in the DP28";
        ammo = "LIB_B_762x54_Mixed_b30_t46";
        tracersEvery = 3;
        lastRoundsTracer = 3;
    };
    class LIB_47Rnd_762x54_Mixed_Ball_t30_2PzD : LIB_47Rnd_762x54 {
        displayName = "DP28, 47 Round Magazine, Ball/Tracer (Type L/T30)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.62x54mm, 47 Rounds, Mixed Ball/Tracer (Type L/T30)<br/>For use in the DP28";
        ammo = "LIB_B_762x54_Mixed_t30";
    };
    class LIB_47Rnd_762x54_Mixed_HeavyBall_t30_2PzD : LIB_47Rnd_762x54d {
        displayName = "DP28, 47 Round Magazine, Heavy Ball/Tracer (Type D/T30)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = "7.62x54mm, 47 Rounds, Mixed Ball/Tracer (Type D/T30)<br/>For use in the DP28";
        ammo = "LIB_B_762x54_Mixed_D_t30";
    };
    class LIB_47Rnd_762x54_Mixed_AP_t30_2PzD : LIB_47Rnd_762x54_Mixed_AP_t46_2PzD {
        displayName = "DP28, 47 Round Magazine, AP/Tracer (B30/T30)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.62x54mm, 47 Rounds, Mixed AP/Tracer (B30/T30)<br/>For use in the DP28";
        ammo = "LIB_B_762x54_Mixed_b30_t30";
    };
    class LIB_47Rnd_762x54_noTrace_2PzD : LIB_47Rnd_762x54 {
        displayName = "DP28, 47 Round Magazine, Ball (Type L)";
        displayNameShort = "Ball";
        descriptionShort = "7.62x54mm, 47 Rounds, Ball (Type L)<br/>For use in the DP28";
        ammo = "LIB_B_762x54_Ball";
        tracersEvery = 0;
        lastRoundsTracer = 0;
        ace_isbelt = 1;
    };
    class LIB_47Rnd_762x54d_noTrace_2PzD : LIB_47Rnd_762x54d {
        displayName = "DP28, 47 Round Magazine, Heavy Ball (Type D)";
        displayNameShort = "Heavy Ball";
        descriptionShort = "7.62x54mm, 47 Rounds, Heavy Ball (Type D)<br/>For use in the DP28";
        ammo = "LIB_B_762x54_Ball_D";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_47Rnd_762x54_AP_noTrace_2PzD : LIB_47Rnd_762x54_Mixed_AP_t46_2PzD {
        displayName = "DP28, 47 Round Magazine, AP (B30)";
        displayNameShort = "AP";
        descriptionShort = "7.62x54mm, 47 Rounds, AP (B30)<br/>For use in the DP28";
        ammo = "LIB_B_762x54_Ball_b30";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_47Rnd_762x54_t30_2PzD : LIB_47Rnd_762x54 {
        displayName = "DP28, 47 Round Magazine, Tracer (T30)";
        displayNameShort = "Tracer";
        descriptionShort = "7.62x54mm, 47 Rounds, Tracer (T30)<br/>For use in the DP28";
        ammo = "LIB_B_762x54_Ball_t30";
    };
    class LIB_47Rnd_762x54_t46_2PzD : LIB_47Rnd_762x54 {
        displayName = "DP28, 47 Round Magazine, Tracer (T46)";
        displayNameShort = "Tracer";
        descriptionShort = "7.62x54mm, 47 Rounds, Tracer (T46)<br/>For use in the DP28";
        ammo = "LIB_B_762x54_Ball_t46";
    };

    class LIB_63Rnd_762x54 : LIB_47Rnd_762x54 {
        displayName = "DT, 60 Round Magazine, Ball/Tracer (Type L/T46)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.62x54mm, 60 Rounds, Ball/Tracer (Type L/T46)<br/>For use in the DT";
        count = 60;
        ammo = "LIB_B_762x54_Mixed_t46";
        tracersEvery = 3;
        lastRoundsTracer = 3;
        ace_isbelt = 1;
    };
    class LIB_63Rnd_762x54d : LIB_63Rnd_762x54 {
        displayName = "DT, 60 Round Magazine, Heavy Ball/Tracer (Type D/T46)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = "7.62x54mm, 60 Rounds, Mixed Ball/Tracer (Type D/T46)<br/>For use in the DT";
        ammo = "LIB_B_762x54_Mixed_D_t46";
        tracersEvery = 3;
        lastRoundsTracer = 3;
    };
    class LIB_63Rnd_762x54_Mixed_AP_t46_2PzD : LIB_63Rnd_762x54 {
        displayName = "DT, 60 Round Magazine, AP/Tracer (B30/T46)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.62x54mm, 60 Rounds, Mixed AP/Tracer (B30/T46)<br/>For use in the DT";
        ammo = "LIB_B_762x54_Mixed_b30_t46";
        tracersEvery = 3;
        lastRoundsTracer = 3;
    };
    class LIB_63Rnd_762x54_Mixed_Ball_t30_2PzD : LIB_63Rnd_762x54 {
        displayName = "DT, 60 Round Magazine, Ball/Tracer (Type L/T30)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.62x54mm, 60 Rounds, Mixed Ball/Tracer (Type L/T30)<br/>For use in the DT";
        ammo = "LIB_B_762x54_Mixed_t30";
    };
    class LIB_63Rnd_762x54_Mixed_HeavyBall_t30_2PzD : LIB_63Rnd_762x54d {
        displayName = "DT, 60 Round Magazine, Heavy Ball/Tracer (Type D/T30)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = "7.62x54mm, 60 Rounds, Mixed Ball/Tracer (Type D/T30)<br/>For use in the DT";
        ammo = "LIB_B_762x54_Mixed_D_t30";
    };
    class LIB_63Rnd_762x54_Mixed_AP_t30_2PzD : LIB_63Rnd_762x54_Mixed_AP_t46_2PzD {
        displayName = "DT, 60 Round Magazine, AP/Tracer (B30/T30)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.62x54mm, 60 Rounds, Mixed AP/Tracer (B30/T30)<br/>For use in the DT";
        ammo = "LIB_B_762x54_Mixed_b30_t30";
    };
    class LIB_63Rnd_762x54_noTrace_2PzD : LIB_63Rnd_762x54 {
        displayName = "DT, 60 Round Magazine, Ball (Type L)";
        displayNameShort = "Ball";
        descriptionShort = "7.62x54mm, 60 Rounds, Ball (Type L)<br/>For use in the DT";
        ammo = "LIB_B_762x54_Ball";
        tracersEvery = 0;
        lastRoundsTracer = 0;
        ace_isbelt = 1;
    };
    class LIB_63Rnd_762x54d_noTrace_2PzD : LIB_63Rnd_762x54d {
        displayName = "DT, 60 Round Magazine, Heavy Ball (Type D)";
        displayNameShort = "Heavy Ball";
        descriptionShort = "7.62x54mm, 60 Rounds, Heavy Ball (Type D)<br/>For use in the DT";
        ammo = "LIB_B_762x54_Ball_D";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_63Rnd_762x54_AP_noTrace_2PzD : LIB_63Rnd_762x54_Mixed_AP_t46_2PzD {
        displayName = "DT, 60 Round Magazine, AP (B30)";
        displayNameShort = "AP";
        descriptionShort = "7.62x54mm, 60 Rounds, AP (B30)<br/>For use in the DT";
        ammo = "LIB_B_762x54_Ball_b30";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_63Rnd_762x54_t30_2PzD : LIB_63Rnd_762x54 {
        displayName = "DT, 60 Round Magazine, Tracer (T30)";
        displayNameShort = "Tracer";
        descriptionShort = "7.62x54mm, 60 Rounds, Tracer (T30)<br/>For use in the DT";
        ammo = "LIB_B_762x54_Ball_t30";
    };
    class LIB_63Rnd_762x54_t46_2PzD : LIB_63Rnd_762x54 {
        displayName = "DT, 60 Round Magazine, Tracer (T46)";
        displayNameShort = "Tracer";
        descriptionShort = "7.62x54mm, 60 Rounds, Tracer (T46)<br/>For use in the DT";
        ammo = "LIB_B_762x54_Ball_t46";
    };

    class LIB_50Rnd_762x63 : CA_Magazine {
        displayName = "M1919, 50 Round Belt, Ball/Tracer (M2/M1)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = ".30-06, 50 Rounds, Mixed Ball/Tracer (M2/M1)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Mixed_Ball_Tracer";
        tracersEvery = 3;
        lastRoundsTracer = 3;
        ace_isbelt = 1;
    };
    class LIB_50Rnd_762x63_M1 : LIB_50Rnd_762x63 {
        displayName = "M1919, 50 Round Belt, Heavy Ball/Tracer (M1/M1)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = ".30-06, 20 Rounds, Mixed Heavy Ball/Tracer (M1/M1)<br/>For use in theM1919 Machine Guns";
        ammo = "LIB_B_762x63_Mixed_HeavyBall_Tracer";
    };
    class LIB_50Rnd_762x63_AP_2PzD : LIB_50Rnd_762x63 {
        displayName = "M1919, 50 Round Belt, AP/Tracer (M2/M1)";
        displayNameShort = "AP/Tracer";
        descriptionShort = ".30-06, 50 Rounds, Mixed AP/Tracer (M2/M1)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Mixed_AP_Tracer";
    };
    class LIB_50Rnd_762x63_TraceOnly_2PzD : LIB_50Rnd_762x63 {
        displayName = "M1919, 50 Round Belt, Tracer (M1)";
        displayNameShort = "Tracer";
        descriptionShort = ".30-06, 50 Rounds, Tracer (M1)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    class LIB_50Rnd_762x63_NoTrace_2PzD : LIB_50Rnd_762x63 {
        displayName = "M1919, 50 Round Belt, Ball (M2)";
        displayNameShort = "Ball";
        descriptionShort = ".30-06, 50 Rounds, Ball (M2)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_50Rnd_762x63_M1_NoTrace_2PzD : LIB_50Rnd_762x63 {
        displayName = "M1919, 50 Round Belt, Heavy Ball (M1)";
        displayNameShort = "Heavy Ball";
        descriptionShort = ".30-06, 50 Rounds, Heavy Ball (M1)<br/>For use in theM1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball_M1";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_50Rnd_762x63_AP_NoTrace_2PzD : LIB_50Rnd_762x63 {
        displayName = "M1919, 50 Round Belt, AP (M2)";
        displayNameShort = "AP";
        descriptionShort = ".30-06, 50 Rounds, AP (M2)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball_M2_AP";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_100Rnd_762x63 : LIB_50Rnd_762x63 {
        displayName = "M1919, 100 Round Belt, Ball/Tracer (M2/M1)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = ".30-06, 100 Rounds, Mixed Ball/Tracer (M2/M1)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Mixed_Ball_Tracer";
        count = 100;
        mass = 29.1;
        type = "2* 256";
    };
    class LIB_100Rnd_762x63_M1 : LIB_100Rnd_762x63 {
        displayName = "M1919, 100 Round Belt, Heavy Ball/Tracer (M1/M1)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = ".30-06, 20 Rounds, Mixed Heavy Ball/Tracer (M1/M1)<br/>For use in theM1919 Machine Guns";
        ammo = "LIB_B_762x63_Mixed_HeavyBall_Tracer";
    };
    class LIB_100Rnd_762x63_AP_2PzD : LIB_100Rnd_762x63 {
        displayName = "M1919, 100 Round Belt, AP/Tracer (M2/M1)";
        displayNameShort = "AP/Tracer";
        descriptionShort = ".30-06, 100 Rounds, Mixed AP/Tracer (M2/M1)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Mixed_AP_Tracer";
    };
    class LIB_100Rnd_762x63_TraceOnly_2PzD : LIB_100Rnd_762x63 {
        displayName = "M1919, 100 Round Belt, Tracer (M1)";
        displayNameShort = "Tracer";
        descriptionShort = ".30-06, 100 Rounds, Tracer (M1)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    class LIB_100Rnd_762x63_NoTrace_2PzD : LIB_100Rnd_762x63 {
        displayName = "M1919, 100 Round Belt, Ball (M2)";
        displayNameShort = "Ball";
        descriptionShort = ".30-06, 100 Rounds, Ball (M2)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_100Rnd_762x63_M1_NoTrace_2PzD : LIB_100Rnd_762x63 {
        displayName = "M1919, 100 Round Belt, Heavy Ball (M1)";
        displayNameShort = "Heavy Ball";
        descriptionShort = ".30-06, 100 Rounds, Heavy Ball (M1)<br/>For use in theM1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball_M1";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_100Rnd_762x63_AP_NoTrace_2PzD : LIB_100Rnd_762x63 {
        displayName = "M1919, 100 Round Belt, AP (M2)";
        displayNameShort = "AP";
        descriptionShort = ".30-06, 100 Rounds, AP (M2)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball_M2_AP";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_150Rnd_762x63_2PzD : LIB_50Rnd_762x63 {
        displayName = "M1919, 150 Round Belt, Ball/Tracer (M2/M1)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = ".30-06, 150 Rounds, Mixed Ball/Tracer (M2/M1)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Mixed_Ball_Tracer";
        count = 150;
        mass = 43.65;
    };
    class LIB_150Rnd_762x63_M1_2PzD : LIB_150Rnd_762x63_2PzD {
        displayName = "M1919, 150 Round Belt, Heavy Ball/Tracer (M1/M1)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = ".30-06, 20 Rounds, Mixed Heavy Ball/Tracer (M1/M1)<br/>For use in theM1919 Machine Guns";
        ammo = "LIB_B_762x63_Mixed_HeavyBall_Tracer";
    };
    class LIB_150Rnd_762x63_AP_2PzD : LIB_150Rnd_762x63_2PzD {
        displayName = "M1919, 150 Round Belt, AP/Tracer (M2/M1)";
        displayNameShort = "AP/Tracer";
        descriptionShort = ".30-06, 150 Rounds, Mixed AP/Tracer (M2/M1)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Mixed_AP_Tracer";
    };
    class LIB_150Rnd_762x63_TraceOnly_2PzD : LIB_150Rnd_762x63_2PzD {
        displayName = "M1919, 150 Round Belt, Tracer (M1)";
        displayNameShort = "Tracer";
        descriptionShort = ".30-06, 150 Rounds, Tracer (M1)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    class LIB_150Rnd_762x63_NoTrace_2PzD : LIB_150Rnd_762x63_2PzD {
        displayName = "M1919, 150 Round Belt, Ball (M2)";
        displayNameShort = "Ball";
        descriptionShort = ".30-06, 150 Rounds, Ball (M2)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_150Rnd_762x63_M1_NoTrace_2PzD : LIB_150Rnd_762x63_2PzD {
        displayName = "M1919, 150 Round Belt, Heavy Ball (M1)";
        displayNameShort = "Heavy Ball";
        descriptionShort = ".30-06, 150 Rounds, Heavy Ball (M1)<br/>For use in theM1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball_M1";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_150Rnd_762x63_AP_NoTrace_2PzD : LIB_150Rnd_762x63_2PzD {
        displayName = "M1919, 150 Round Belt, AP (M2)";
        displayNameShort = "AP";
        descriptionShort = ".30-06, 150 Rounds, AP (M2)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball_M2_AP";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_200Rnd_762x63_2PzD : LIB_50Rnd_762x63 {
        displayName = "M1919, 200 Round Belt, Ball/Tracer (M2/M1)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = ".30-06, 200 Rounds, Mixed Ball/Tracer (M2/M1)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Mixed_Ball_Tracer";
        count = 200;
        mass = 58.2;
    };
    class LIB_200Rnd_762x63_M1_2PzD : LIB_200Rnd_762x63_2PzD {
        displayName = "M1919, 200 Round Belt, Heavy Ball/Tracer (M1/M1)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = ".30-06, 20 Rounds, Mixed Heavy Ball/Tracer (M1/M1)<br/>For use in theM1919 Machine Guns";
        ammo = "LIB_B_762x63_Mixed_HeavyBall_Tracer";
    };
    class LIB_200Rnd_762x63_AP_2PzD : LIB_200Rnd_762x63_2PzD {
        displayName = "M1919, 200 Round Belt, AP/Tracer (M2/M1)";
        displayNameShort = "AP/Tracer";
        descriptionShort = ".30-06, 200 Rounds, Mixed AP/Tracer (M2/M1)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Mixed_AP_Tracer";
    };
    class LIB_200Rnd_762x63_TraceOnly_2PzD : LIB_200Rnd_762x63_2PzD {
        displayName = "M1919, 200 Round Belt, Tracer (M1)";
        displayNameShort = "Tracer";
        descriptionShort = ".30-06, 200 Rounds, Tracer (M1)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    class LIB_200Rnd_762x63_NoTrace_2PzD : LIB_200Rnd_762x63_2PzD {
        displayName = "M1919, 200 Round Belt, Ball (M2)";
        displayNameShort = "Ball";
        descriptionShort = ".30-06, 200 Rounds, Ball (M2)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_200Rnd_762x63_M1_NoTrace_2PzD : LIB_200Rnd_762x63_2PzD {
        displayName = "M1919, 200 Round Belt, Heavy Ball (M1)";
        displayNameShort = "Heavy Ball";
        descriptionShort = ".30-06, 200 Rounds, Heavy Ball (M1)<br/>For use in theM1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball_M1";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_200Rnd_762x63_AP_NoTrace_2PzD : LIB_200Rnd_762x63_2PzD {
        displayName = "M1919, 200 Round Belt, AP (M2)";
        displayNameShort = "AP";
        descriptionShort = ".30-06, 200 Rounds, AP (M2)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball_M2_AP";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_250Rnd_762x63_2PzD : LIB_50Rnd_762x63 {
        displayName = "M1919, 250 Round Belt, Ball/Tracer (M2/M1)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = ".30-06, 250 Rounds, Mixed Ball/Tracer (M2/M1)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Mixed_Ball_Tracer";
        count = 250;
        mass = 58.2;
    };
    class LIB_250Rnd_762x63_M1_2PzD : LIB_250Rnd_762x63_2PzD {
        displayName = "M1919, 250 Round Belt, Heavy Ball/Tracer (M1/M1)";
        displayNameShort = "Heavy Ball/Tracer";
        descriptionShort = ".30-06, 20 Rounds, Mixed Heavy Ball/Tracer (M1/M1)<br/>For use in theM1919 Machine Guns";
        ammo = "LIB_B_762x63_Mixed_HeavyBall_Tracer";
    };
    class LIB_250Rnd_762x63_AP_2PzD : LIB_250Rnd_762x63_2PzD {
        displayName = "M1919, 250 Round Belt, AP/Tracer (M2/M1)";
        displayNameShort = "AP/Tracer";
        descriptionShort = ".30-06, 250 Rounds, Mixed AP/Tracer (M2/M1)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Mixed_AP_Tracer";
    };
    class LIB_250Rnd_762x63_TraceOnly_2PzD : LIB_250Rnd_762x63_2PzD {
        displayName = "M1919, 250 Round Belt, Tracer (M1)";
        displayNameShort = "Tracer";
        descriptionShort = ".30-06, 250 Rounds, Tracer (M1)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball_t";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    class LIB_250Rnd_762x63_NoTrace_2PzD : LIB_250Rnd_762x63_2PzD {
        displayName = "M1919, 250 Round Belt, Ball (M2)";
        displayNameShort = "Ball";
        descriptionShort = ".30-06, 250 Rounds, Ball (M2)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_250Rnd_762x63_M1_NoTrace_2PzD : LIB_250Rnd_762x63_2PzD {
        displayName = "M1919, 250 Round Belt, Heavy Ball (M1)";
        displayNameShort = "Heavy Ball";
        descriptionShort = ".30-06, 250 Rounds, Heavy Ball (M1)<br/>For use in theM1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball_M1";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_250Rnd_762x63_AP_NoTrace_2PzD : LIB_250Rnd_762x63_2PzD {
        displayName = "M1919, 250 Round Belt, AP (M2)";
        displayNameShort = "AP";
        descriptionShort = ".30-06, 250 Rounds, AP (M2)<br/>For use in the M1919 Machine Guns";
        ammo = "LIB_B_762x63_Ball_M2_AP";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class LIB_50Rnd_792x57 : CA_Magazine {
        displayName = "MG34/MG42, 50 Round Drum, Ball/Tracer (SmE/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 50 Rounds, Mixed Ball/Tracer (SmE/LS L'spur)<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Mixed_SmE";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_MG42_Ball_Yellow_ca.paa";
        mass = 21.82;
        tracersEvery = 3;
        lastRoundsTracer = 3;
        ace_isbelt = 1;
    };
    class LIB_50Rnd_792x57_SmE_NoTrace_2PzD : LIB_50Rnd_792x57 {
        displayName = "MG34/MG42, 50 Round Drum, Ball (SmE)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 50 Rounds, Ball (SmE)<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SmE";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_MG42_Ball_ca.paa";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_50Rnd_792x57_sS : LIB_50Rnd_792x57 {
        displayName = "MG34/MG42, 50 Round Drum, Ball/Tracer (sS Patrone/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 50 Rounds, Mixed Ball/Tracer (sS Patrone/LS L'spur)<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Mixed_sS";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_MG42_Ball_Yellow_ca.paa";
    };
    class LIB_50Rnd_792x57_sS_NoTrace_2PzD : LIB_50Rnd_792x57_sS {
        displayName = "MG34/MG42, 50 Round Drum, Ball (sS Patrone)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 50 Rounds, Ball (sS Patrone)<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_sS";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_MG42_Ball_ca.paa";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_50Rnd_792x57_Mixed_SmK_2PzD : LIB_50Rnd_792x57_sS {
        displayName = "MG34/MG42, 50 Round Drum, AP/Tracer (SmK/LS L'spur)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 50 Rounds, Mixed AP/Tracer (SmK/LS L'spur)<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Mixed_SmK";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_MG42_AP_Yellow_ca.paa";
    };
    class LIB_50Rnd_792x57_SmK_NoTrace_2PzD : LIB_50Rnd_792x57_Mixed_SmK_2PzD {
        displayName = "MG34/MG42, 50 Round Drum, AP (SmK)";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 50 Rounds, AP (SmK)<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Ball_SmK";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_MG42_AP_ca.paa";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_50Rnd_792x57_TraceOnly_2PzD : LIB_50Rnd_792x57 {
        displayName = "MG34/MG42, 50 Round Drum, Tracer (LS L'spur)";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 50 Rounds, Tracer (LS L'spur)<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Tracer";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_MG42_Tracer_Yellow_ca.paa";
        tracersEvery = 1;
        lastRoundsTracer = 1;
    };
    class LIB_100Rnd_792x57 : LIB_50Rnd_792x57 {
        displayName = "MG34/MG42, 100 Round Belt, Ball/Tracer (SmE/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 100 Rounds, Mixed Ball/Tracer (SmE/LS L'spur)<br/>For use in the MG34 or MG42";
        count = 100;
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_MG42_box_Ball_Yellow_ca.paa";
        mass = 29.1;
    };
    class LIB_100Rnd_792x57_SmE_NoTrace_2PzD : LIB_50Rnd_792x57_SmE_NoTrace_2PzD {
        displayName = "MG34/MG42, 100 Round Belt, Ball (SmE)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 100 Rounds, Ball (SmE)<br/>For use in the MG34 or MG42";
        count = 100;
        mass = 29.1;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_MG42_box_Ball_ca.paa";
    };
    class LIB_100Rnd_792x57_sS : LIB_50Rnd_792x57_sS {
        displayName = "MG34/MG42, 100 Round Belt, Ball/Tracer (sS Patrone/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 100 Rounds, Mixed Ball/Tracer (sS Patrone/LS L'spur)<br/>For use in the MG34 or MG42";
        count = 100;
        mass = 29.1;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_MG42_box_Ball_Yellow_ca.paa";
    };
    class LIB_100Rnd_792x57_sS_NoTrace_2PzD : LIB_50Rnd_792x57_sS_NoTrace_2PzD {
        displayName = "MG34/MG42, 100 Round Belt, Ball (sS Patrone)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 100 Rounds, Ball (sS Patrone)<br/>For use in the MG34 or MG42";
        count = 100;
        mass = 29.1;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_MG42_box_Ball_ca.paa";
    };
    class LIB_100Rnd_792x57_Mixed_SmK_2PzD : LIB_50Rnd_792x57_Mixed_SmK_2PzD {
        displayName = "MG34/MG42, 100 Round Belt, AP/Tracer (SmK/LS L'spur)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 100 Rounds, Mixed AP/Tracer (SmK/LS L'spur)<br/>For use in the MG34 or MG42";
        count = 100;
        mass = 29.1;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_MG42_box_AP_Yellow_ca.paa";
    };
    class LIB_100Rnd_792x57_SmK_NoTrace_2PzD : LIB_50Rnd_792x57_SmK_NoTrace_2PzD {
        displayName = "MG34/MG42, 100 Round Belt, AP (SmK)";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 100 Rounds, AP (SmK)<br/>For use in the MG34 or MG42";
        count = 100;
        mass = 29.1;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_MG42_box_AP_ca.paa";
    };
    class LIB_100Rnd_792x57_TraceOnly_2PzD : LIB_50Rnd_792x57_TraceOnly_2PzD {
        displayName = "MG34/MG42, 100 Round Belt, Tracer (LS L'spur)";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 100 Rounds, Tracer (LS L'spur)<br/>For use in the MG34 or MG42";
        ammo = "LIB_B_792x57_Tracer";
        count = 100;
        mass = 29.1;
        model = "\WW2\Assets_m\Weapons\WeaponsMagazines_m\IF_MG42_Box.p3d";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_MG42_box_Tracer_Yellow_ca.paa";
    };
    class LIB_150Rnd_792x57_Mixed_SmE_2PzD : LIB_100Rnd_792x57 {
        displayName = "MG34/MG42, 150 Round Belt, Ball/Tracer (SmE/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 150 Rounds, Mixed Ball/Tracer (SmE/LS L'spur)<br/>For use in the MG34 or MG42";
        count = 150;
        mass = 43.65;
    };
    class LIB_150Rnd_792x57_SmE_NoTrace_2PzD : LIB_100Rnd_792x57_SmE_NoTrace_2PzD {
        displayName = "MG34/MG42, 150 Round Belt, Ball (SmE)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 150 Rounds, Ball (SmE)<br/>For use in the MG34 or MG42";
        count = 150;
        mass = 43.65;
    };
    class LIB_150Rnd_792x57_Mixed_sS_2PzD : LIB_100Rnd_792x57_sS {
        displayName = "MG34/MG42, 150 Round Belt, Ball/Tracer (sS Patrone/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 150 Rounds, Mixed Ball/Tracer (sS Patrone/LS L'spur)<br/>For use in the MG34 or MG42";
        count = 150;
        mass = 43.65;
    };
    class LIB_150Rnd_792x57_sS_NoTrace_2PzD : LIB_100Rnd_792x57_sS_NoTrace_2PzD {
        displayName = "MG34/MG42, 150 Round Belt, Ball (sS Patrone)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 150 Rounds, Ball (sS Patrone)<br/>For use in the MG34 or MG42";
        count = 150;
        mass = 43.65;
    };
    class LIB_150Rnd_792x57_Mixed_SmK_2PzD : LIB_100Rnd_792x57_Mixed_SmK_2PzD {
        displayName = "MG34/MG42, 150 Round Belt, AP/Tracer (SmK/LS L'spur)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 150 Rounds, Mixed AP/Tracer (SmK/LS L'spur))<br/>For use in the MG34 or MG42";
        count = 150;
        mass = 43.65;
    };
    class LIB_150Rnd_792x57_SmK_NoTrace_2PzD : LIB_100Rnd_792x57_SmK_NoTrace_2PzD {
        displayName = "MG34/MG42, 150 Round Belt, AP (SmK)";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 150 Rounds, AP (SmK)<br/>For use in the MG34 or MG42";
        count = 150;
        mass = 43.65;
    };
    class LIB_150Rnd_792x57_TraceOnly_2PzD : LIB_100Rnd_792x57_TraceOnly_2PzD {
        displayName = "MG34/MG42, 150 Round Belt, Tracer (LS L'spur)";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 150 Rounds, Tracer (LS L'spur)<br/>For use in the MG34 or MG42";
        count = 150;
        mass = 43.65;
    };
    class LIB_200Rnd_792x57_Mixed_SmE_2PzD : LIB_100Rnd_792x57 {
        displayName = "MG34/MG42, 200 Round Belt, Ball/Tracer (SmE/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 200 Rounds, Mixed Ball/Tracer (SmE/LS L'spur)<br/>For use in the MG34 or MG42";
        count = 200;
        mass = 58.2;
    };
    class LIB_200Rnd_792x57_SmE_NoTrace_2PzD : LIB_100Rnd_792x57_SmE_NoTrace_2PzD {
        displayName = "MG34/MG42, 200 Round Belt, Ball (SmE)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 200 Rounds, Ball (SmE)<br/>For use in the MG34 or MG42";
        count = 200;
        mass = 58.2;
    };
    class LIB_200Rnd_792x57_Mixed_sS_2PzD : LIB_100Rnd_792x57_sS {
        displayName = "MG34/MG42, 200 Round Belt, Ball/Tracer (sS Patrone/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 200 Rounds, Mixed Ball/Tracer (sS Patrone/LS L'spur)<br/>For use in the MG34 or MG42";
        count = 200;
        mass = 58.2;
    };
    class LIB_200Rnd_792x57_sS_NoTrace_2PzD : LIB_100Rnd_792x57_sS_NoTrace_2PzD {
        displayName = "MG34/MG42, 200 Round Belt, Ball (sS Patrone)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 200 Rounds, Ball (sS Patrone)<br/>For use in the MG34 or MG42";
        count = 200;
        mass = 58.2;
    };
    class LIB_200Rnd_792x57_Mixed_SmK_2PzD : LIB_100Rnd_792x57_Mixed_SmK_2PzD {
        displayName = "MG34/MG42, 200 Round Belt, AP/Tracer (SmK/LS L'spur)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 200 Rounds, Mixed AP/Tracer (SmK/LS L'spur)<br/>For use in the MG34 or MG42";
        count = 200;
        mass = 58.2;
    };
    class LIB_200Rnd_792x57_SmK_NoTrace_2PzD : LIB_100Rnd_792x57_SmK_NoTrace_2PzD {
        displayName = "MG34/MG42, 200 Round Belt, AP (SmK)";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 200 Rounds, AP (SmK)<br/>For use in the MG34 or MG42";
        count = 200;
        mass = 58.2;
    };
    class LIB_200Rnd_792x57_TraceOnly_2PzD : LIB_100Rnd_792x57_TraceOnly_2PzD {
        displayName = "MG34/MG42, 200 Round Belt, Tracer (LS L'spur)";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 200 Rounds, Tracer (LS L'spur)<br/>For use in the MG34 or MG42";
        count = 200;
        mass = 58.2;
    };
    class LIB_250Rnd_792x57_Mixed_SmE_2PzD : LIB_100Rnd_792x57 {
        displayName = "MG34/MG42, 250 Round Belt, Ball/Tracer (SmE/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 250 Rounds, Mixed Ball/Tracer (SmE/LS L'spur)<br/>For use in the MG34 or MG42";
        count = 250;
        mass = 72.75;
    };
    class LIB_250Rnd_792x57_SmE_NoTrace_2PzD : LIB_100Rnd_792x57_SmE_NoTrace_2PzD {
        displayName = "MG34/MG42, 250 Round Belt, Ball (SmE)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 250 Rounds, Ball (SmE)<br/>For use in the MG34 or MG42";
        count = 250;
        mass = 72.75;
    };
    class LIB_250Rnd_792x57_Mixed_sS_2PzD : LIB_100Rnd_792x57_sS {
        displayName = "MG34/MG42, 250 Round Belt, Ball/Tracer (sS Patrone/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 250 Rounds, Mixed Ball/Tracer (sS Patrone/LS L'spur)<br/>For use in the MG34 or MG42";
        count = 250;
        mass = 72.75;
    };
    class LIB_250Rnd_792x57_sS_NoTrace_2PzD : LIB_100Rnd_792x57_sS_NoTrace_2PzD {
        displayName = "MG34/MG42, 250 Round Belt, Ball (sS Patrone)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 250 Rounds, Ball (sS Patrone)<br/>For use in the MG34 or MG42";
        count = 250;
        mass = 72.75;
    };
    class LIB_250Rnd_792x57_Mixed_SmK_2PzD : LIB_100Rnd_792x57_Mixed_SmK_2PzD {
        displayName = "MG34/MG42, 250 Round Belt, AP/Tracer (SmK/LS L'spur)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 250 Rounds, Mixed AP/Tracer (SmK/LS L'spur)<br/>For use in the MG34 or MG42";
        count = 250;
        mass = 72.75;
    };
    class LIB_250Rnd_792x57_SmK_NoTrace_2PzD : LIB_100Rnd_792x57_SmK_NoTrace_2PzD {
        displayName = "MG34/MG42, 250 Round Belt, AP (SmK)";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 250 Rounds, AP (SmK)<br/>For use in the MG34 or MG42";
        count = 250;
        mass = 72.75;
    };
    class LIB_250Rnd_792x57_TraceOnly_2PzD : LIB_100Rnd_792x57_TraceOnly_2PzD {
        displayName = "MG34/MG42, 250 Round Belt, Tracer (LS L'spur)";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 250 Rounds, Tracer (LS L'spur)<br/>For use in the MG34 or MG42";
        count = 250;
        mass = 72.75;
    };

    class LIB_75Rnd_792x57 : LIB_50Rnd_792x57 {
        displayName = "MG34 (PT34), 75 Round Magazine, Ball/Tracer (SmE/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 75 Rounds, Ball/Tracer (SmE/LS L'spur)<br/>For use in the MG34 (PT34)";
        ammo = "LIB_B_792x57_Mixed_SmE";
        count = 250;
        mass = 25.45;
    };
    class LIB_75Rnd_792x57_NoTrace_2PzD : LIB_75Rnd_792x57 {
        displayName = "MG34 (PT34), 75 Round Magazine, Ball (SmE)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 75 Rounds, Ball (SmE)<br/>For use in the MG34 (PT34)";
        ammo = "LIB_B_792x57_Ball_SmE";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class LIB_75Rnd_792x57_sS_2PzD : LIB_75Rnd_792x57 {
        displayName = "MG34 (PT34), 75 Round Magazine, Ball/Tracer (sS Patrone/LS L'spur)";
        displayNameShort = "Ball/Tracer";
        descriptionShort = "7.92x57mm, 75 Rounds, Ball/Tracer (sS Patrone/LS L'spur)<br/>For use in the MG34 (PT34)";
        ammo = "LIB_B_792x57_Mixed_sS";
    };
    class LIB_75Rnd_792x57_sS_NoTrace_2PzD : LIB_75Rnd_792x57 {
        displayName = "MG34 (PT34), 75 Round Magazine, Ball (sS Patrone)";
        displayNameShort = "Ball";
        descriptionShort = "7.92x57mm, 75 Rounds, Ball (sS Patrone)<br/>For use in the MG34 (PT34)";
        ammo = "LIB_B_792x57_Ball_sS";
    };
    class LIB_75Rnd_792x57_SmK_2PzD : LIB_75Rnd_792x57 {
        displayName = "MG34 (PT34), 75 Round Magazine, AP/Tracer (SmK/LS L'spur)";
        displayNameShort = "AP/Tracer";
        descriptionShort = "7.92x57mm, 75 Rounds, AP/Tracer (SmK/LS L'spur)<br/>For use in the MG34 (PT34)";
        ammo = "LIB_B_792x57_Mixed_SmK";
    };
    class LIB_75Rnd_792x57_SmK_NoTrance_2PzD : LIB_75Rnd_792x57 {
        displayName = "MG34 (PT34), 75 Round Magazine, AP (SmK)";
        displayNameShort = "AP";
        descriptionShort = "7.92x57mm, 75 Rounds, AP (SmK)<br/>For use in the MG34 (PT34)";
        ammo = "LIB_B_792x57_Ball_SmK";
    };
    class LIB_75Rnd_792x57_TraceOnly_2PzD : LIB_75Rnd_792x57 {
        displayName = "MG34 (PT34), 75 Round Magazine, Tracer (LS L'spur)";
        displayNameShort = "Tracer";
        descriptionShort = "7.92x57mm, 75 Rounds, Tracer (LS L'spur)<br/>For use in the MG34 (PT34)";
        ammo = "LIB_B_792x57_Tracer";
        tracersEvery = 1;
        lastRoundsTracer = 1;
    };
// End MG magazines

// Other magazines
    /*
    class LIB_Bagpipes_Mag : CA_LauncherMagazine {
    };
    */

    class LIB_1Rnd_60mm_M6 : CA_LauncherMagazine {
        displayName = "Bazooka, 2.36-Inch Anti-Tank Rocket M6";
        displayNameShort = "HEAT Rocket";
        descriptionShort = "2.36-Inch Anti-Tank Rocket M6<br/>For use in the Bazooka";
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

    class LIB_1Rnd_G_SPRGR_30 : LIB_BaseRifleGrenade {
        displayName = "Spr.Gr. 30 (HE)";
        displayNameShort = "Spr.Gr. 30 (HE)";
        descriptionShort = "Spr.Gr. 30, German high explosive rifle grenade<br/>For use in the Schiessbecher grenade launcher.";
        mass = 5.6;
    };
    class LIB_1Rnd_G_PZGR_30 : LIB_1Rnd_G_SPRGR_30 {
        displayName = "Pz.Gr. 30 (HEAT)";
        displayNameShort = "Pz.Gr. 30 HEAT";
        descriptionShort = "Pz.Gr. 30 (HEAT)";
        mass = 5.29;
    };
    class LIB_1Rnd_G_PZGR_40 : LIB_1Rnd_G_SPRGR_30 {
        displayName = "Pz.Gr. 40 (HEAT)";
        displayNameShort = "Pz.Gr. 40 (HEAT)";
        descriptionShort = "Pz.Gr. 40 (HEAT)";
        mass = 8.6;
    };

    class LIB_1Rnd_G_DYAKONOV : LIB_BaseRifleGrenade {
        displayName = "Dyakonov Rifle Grenade (Frag)";
        displayNameShort = "Rifle Grenade (Frag)";
        descriptionShort = "Dyakonov rifle grenade<br/>For use in the Dyakonov grenade launcher.";
        mass = 8;
    };

    class LIB_1Rnd_G_DYAKONOV_Flare : LIB_1Rnd_flare_white { // TODO add to magwell and magazine
        displayName = "Dyakonov Rifle Grenade (Flare, White)";
        displayNameShort = "Rifle Grenade (Flare, White)";
        descriptionShort = "Dyakonov rifle grenade flare (white)<br/>For use in the Dyakonov grenade launcher.";
        mass = 3.5;
        model = "\WW2\Assets_m\Weapons\WeaponsAmmo_m\WW2_GL_DYAKONOV.p3d";
        modelSpecial = "\WW2\Assets_m\Weapons\Rifles_m\LEN_GL_Mosin_Grenade.p3d";
        modelSpecialIsProxy = 1;
        nameSound = "";
        picture = "\Haas_WWII_Rebalance\UI\Gear_Magazine_Mosin_GL_Flare_ca.paa"; // TODO make new icon to indicate flare
        class LIB_RifleGrenade {
            attachment = "LIB_ACC_GL_DYAKONOV";
            initSpeed = 80;
        };
    };

    class LIB_1Rnd_G_MillsBomb : LIB_BaseRifleGrenade {
        displayName = "No. 36 Mk. 1 (Rifle Frag Grenade)";
        displayNameShort = "No. 36 Mk. 1 (Frag)";
        descriptionShort = "No. 36 Mk. 1, standard British fragmentation grenade, adapted for grenade launcher.";
        mass = 16.865;
    };

    class LIB_1Rnd_G_Mk2 : LIB_BaseRifleGrenade {
        displayName = "Grenade, Rifle, Fragmentation, Mk 2";
        displayNameShort = "Mk2 (Frag)";
        descriptionShort = "Mk2 Fragmentation Grenade<br/>For use in the M7 Grenade Launcher";
        mass = 13.117;
    };

    class LIB_1Rnd_G_M9A1 : LIB_BaseRifleGrenade {
        displayName = "Grenade, Rifle, Antitank, M9A1";
        displayNameShort = "M9A1 (HEAT)";
        descriptionShort = "M9A1 HEAT Rifle Grenade<br/>For use in the M7 Grenade Launcher";
        mass = 8.8;
    };

    class LIB_1Rnd_89m_G_PIAT : CA_Magazine {
        displayName = "PIAT, HEAT Bomb";
        displayNameShort = "HEAT Bomb";
        descriptionShort = "High Explosive Anti-Tank bomb<br/>For use in the PIAT";
    };

    class LIB_1Rnd_89m_PIAT : CA_LauncherMagazine {
        displayName = "PIAT, HEAT Bomb";
        displayNameShort = "HEAT Bomb";
        descriptionShort = "High Explosive Anti-Tank bomb<br/>For use in the PIAT";
        scope = 1;
    };

    class LIB_1Rnd_PzFaust_30m : CA_LauncherMagazine {
        displayName = "Panzerfaust 30 Warhead";
        displayNameShort = "30m HEAT Warhead";
        mass = 0;
    };
    class LIB_1Rnd_PzFaust_60m : LIB_1Rnd_PzFaust_30m {
        displayName = "Panzerfaust 60 Warhead";
        displayNameShort = "60m HEAT Warhead";
        mass = 0;
    };
    class LIB_1Rnd_Faustpatrone : LIB_1Rnd_PzFaust_30m {
        displayName = "Panzerfaust 30 Klein Warhead";
        displayNameShort = "30m HEAT Warhead";
        mass = 0;
    };

    class LIB_1Rnd_RPzB : CA_LauncherMagazine {
        displayName = "Panzerschreck, 88mm Gr. 4322 HEAT Rocket";
        displayNameShort = "HEAT Rocket";
        descriptionShort = "88mm Gr. 4322 HEAT Rocket<br/>For use in the Panzerschreck RPzB 54";
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
// End Other magazines

// Grenades
    class LIB_F1 : LIB_HandGrenade_base {
        displayName = "F-1";
        displayNameShort = "F-1 (Frag)";
        descriptionShort = "F-1 Grenade, Russian copy of a French hand grenade.";
        initSpeed = 20;
        mass = 13.228;
    };

    class LIB_M39 : LIB_HandGrenade_base {
        displayName = "M39";
        displayNameShort = "M39 (Frag)";
        descriptionShort = "Model 39 Eihandgranate, German fragmentation grenade.";
        initSpeed = 27;
        mass = 7.496;
    };

    class LIB_MillsBomb : LIB_HandGrenade_base {
        displayName = "No. 36 Mk. 1 (Frag)";
        displayNameShort = "No. 36 Mk. 1 (Frag)";
        descriptionShort = "No. 36 Mk. 1, standard British fragmentation grenade";
        initSpeed = 18;
        mass = 16.865;
    };

    class LIB_NB39 : LIB_SmokeShell_base {
        displayName = "Nb39B";
        displayNameShort = "Nb39B (Smoke)";
        descriptionShort = "Nebelhandgranate 39, German smoke grenade, 120 second burn time.";
        initSpeed = 20;
        mass = 18.739;
    };

    class LIB_No77 : LIB_SmokeShell_base {
        displayName = "No. 77 Bursting Smoke Grenade";
        displayNameShort = "No. 77 (WP)";
        descriptionShort = "No. 77 Bursting Smoke Grenade, explodes into a cloud of white phosphorus, 90 second burn time.";
        ammo = "LIB_No77";
        initSpeed = 25;
        mass = 8.444;
    };

    class LIB_No82 : LIB_HandGrenade_base {
        displayName = "No. 82 Gammon Bomb";
        displayNameShort = "No. 82 (HE)";
        descriptionShort = "No. 82 Gammon Bomb, large British high explosive grenade for demolitions or anti-vehicle use.";
        initSpeed = 15;
        mass = 27.337;
    };

    class LIB_Pwm : LIB_HandGrenade_base {
        displayName = "PWM";
        displayNameShort = "PWM (AT)";
        descriptionShort = "Panzerwurfmine, German AT grenade, explodes on impact.";
        initSpeed = 15;
        mass = 29.762;
    };

    class LIB_RDG : LIB_SmokeShell_base {
        displayName = "RDG-1";
        displayNameShort = "RDG-1 (Smoke)";
        descriptionShort = "RDG-1, Russian smoke grenade, 120 second burn time.";
        initSpeed = 26;
        mass = 7.716;
    };

    class LIB_Rg42 : LIB_HandGrenade_base {
        displayName = "RG-42";
        displayNameShort = "RG-42 (Frag)";
        descriptionShort = "RG-42, Russian fragmentation grenade.";
        initSpeed = 24;
        mass = 9.700;
    };

    class LIB_Rpg6 : LIB_HandGrenade_base {
        displayName = "RPG-6";
        displayNameShort = "RPG-6 (AT)";
        descriptionShort = "RPG-6, Russian AT grenade, explodes on impact.";
        initSpeed = 16;
        mass = 24.251;
    };

    class LIB_Shg24 : LIB_HandGrenade_base {
        displayName = "M24 Stielhandgranate";
        displayNameShort = "M24 (HE)";
        descriptionShort = "Model 1924 Stielhandgranate, standard German stick grenade.";
        ammo = "fow_e_m24";
        initSpeed = 24;
        mass = 13.117;
        scope = 1;
    };

    class LIB_Shg24x7 : LIB_Shg24 {
        displayName = "M24 (Geballte Ladung)";
        displayNameShort = "M24 (AT)";
        descriptionShort = "Model 1924 Stielhandgranate (Geballte Ladung), bundled charge for demolitions or anti-vehicle.";
        ammo = "fow_e_m24_at";
        initSpeed = 10;
        mass = 91.822;
        scope = 1;
    };

    class LIB_US_M18 : LIB_SmokeShell_base {
        displayName = "AN-M8 Smoke HC";
        displayNameShort = "AN-M8 (Smoke)";
        descriptionShort = "AN-M8 Smoke HC, a US smoke grenade, 130 second burn time.";
        initSpeed = 19;
        mass = 14.991;
    };

    class LIB_US_M18_Green : LIB_SmokeShell_base {
        displayName = "M18 Smoke Green";
        displayNameShort = "M18 (Green)";
        descriptionShort = "M18 Smoke Green, a US smoke grenade, 70 second burn time.";
        initSpeed = 23;
        mass = 11.861;
    };

    class LIB_US_M18_Red : LIB_SmokeShell_base {
        displayName = "M18 Smoke Red";
        displayNameShort = "M18 (Red)";
        descriptionShort = "M18 Smoke Red, a US smoke grenade, 70 second burn time.";
        initSpeed = 23;
        mass = 11.861;
    };

    class LIB_US_M18_Yellow : LIB_SmokeShell_base {
        displayName = "M18 Smoke Yellow";
        displayNameShort = "M18 (Yellow)";
        descriptionShort = "M18 Smoke Yellow, a US smoke grenade, 70 second burn time.";
        initSpeed = 23;
        mass = 11.861;
    };

    class LIB_US_Mk_2 : LIB_HandGrenade_base {
        displayName = "Mk 2 Grenade";
        displayNameShort = "Mk 2 (Frag)";
        descriptionShort = "Mk 2 Grenade, the standard US fragmentation grenade.";
        initSpeed = 20;
        mass = 13.117;
    };
// End Grenades magazines

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
        ammo = "LIB_B_762x54_Mixed_t46";
        tracersEvery = 3;
        lastRoundsTracer = 3;
    };
    class LIB_250rnd_7_62x54R_maxim_D : LIB_250rnd_7_62x54R_maxim {
        displayName = "Maxim Gun, 250 Round Belt, Heavy Ball (Type D)";
        ammo = "LIB_B_762x54_Mixed_D_t46";
        tracersEvery = 3;
        lastRoundsTracer = 3;
    };

    class LIB_30Rnd_Bren : VehicleMagazine {
        displayName = "Bren Gun, 30 Round Magazine";
    };

    class LIB_225Rnd_Besa : VehicleMagazine {
        displayName = "BESA, 225 Round Magazine";
    };

    class LIB_50Rnd_792x57_Veh : VehicleMagazine {
        displayName = "MG34/MG42, 50 Round Drum";
    };
    class LIB_250Rnd_792x57 : LIB_50Rnd_792x57_Veh {
        displayName = "MG34/MG42, 250 Round Belt";
    };
    class LIB_250Rnd_792x57_sS : LIB_250Rnd_792x57 {
        displayName = "MG34/MG42, 250 Round Belt, s.S. - Heavy Ball";
    };
    class LIB_250Rnd_792x57_SmK : LIB_250Rnd_792x57 {
        displayName = "MG34/MG42, 250 Round Belt, AP (SmK)";
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
        ammo = "LIB_B_762x54_Mixed_t46";
        tracersEvery = 3;
        lastRoundsTracer = 3;
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
// End Vehicle magazines
