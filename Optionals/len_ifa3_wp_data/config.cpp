
class CfgPatches {
    class len_ifa3_wp_data {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        units[] = {};
        magazines[] = {};
        weapons[] = {};
        requiredAddons[] = {"len_ifa3_wp"};
    };
}; //End CfgPatches

//cfgMagazines
class cfgMagazines {
    class CA_Magazine;
    class 16Rnd_9x21_Mag;
    class 20Rnd_762x51_Mag;
    class lib_8Rnd_9x19;
    class lib_10Rnd_792x57;
    class LIB_30Rnd_45ACP;
    class lib_32Rnd_9x19;
    class LIB_35Rnd_762x25;

    class LEN_10Rnd_303 : 20Rnd_762x51_Mag {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_13Rnd_9x19 : lib_8Rnd_9x19 {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_20Rnd_792x57 : lib_10Rnd_792x57 {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_30Rnd_45ACP_M3 : LIB_30Rnd_45ACP {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_32Rnd_9x19 : lib_32Rnd_9x19 {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_35Rnd_762x25_2PzD : LIB_35Rnd_762x25 {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_6Rnd_12G_Slug : CA_Magazine {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_6Rnd_12G_Pellets : LEN_6Rnd_12G_Slug {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_7Rnd_765x17 : 16Rnd_9x21_Mag {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };
    class LEN_8Rnd_765x17_2PzD : LEN_7Rnd_765x17 {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_8Rnd_9x19_2PzD : LIB_8Rnd_9x19 {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };
}; //End cfgMagazines

//cfgWeapons
class cfgWeapons {
    class hgun_Rook40_F;
    class hgun_P07_F;
    class LIB_MP44;
    class LIB_K98;
    class LIB_M1A1_Thompson;
    class LIB_PPSh41_m;
    class LIB_MP40;

    class LEN_P35 : hgun_Rook40_F {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_P640b : hgun_P07_F {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_PPK : hgun_Rook40_F {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_Welrod : hgun_Rook40_F {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_FG42 : LIB_MP44 {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_MP44 : LIB_MP44 {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_SMLE_No4Mk1 : LIB_K98 {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };
    class LEN_SMLE_No4Mk1T : LEN_SMLE_No4Mk1 {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_M3a1 : LIB_M1A1_Thompson {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_PPS43 : LIB_PPSh41_m {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_StenMk2 : LIB_MP40 {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };
    class LEN_StenMk2S : LEN_StenMk2 {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };
    class LEN_StenMk5 : LEN_StenMk2 {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class LEN_M12 : LIB_K98 {
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 0;
    };
}; //End cfgWeapons