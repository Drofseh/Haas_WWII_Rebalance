    class fow_b_heer_aframe : Bag_Base {
        maximumLoad = 100;
    };

    class fow_b_heer_ammo_belt : Bag_Base {
        maximumLoad = 45;
    };

    class fow_b_ija_ammobox : Bag_Base {
        maximumLoad = 500;
    };

    class fow_b_ija_ammobox_metal : Bag_Base {
        maximumLoad = 500;
    };

    class fow_b_ija_ammobox_wood : Bag_Base {
        maximumLoad = 500;
    };

    class fow_b_ija_backpack : Bag_Base {
        maximumLoad = 150;
    };

    class fow_b_ija_backpack_medic : fow_b_ija_backpack {
        maximumLoad = 150;
    };

    class fow_b_ija_backpack_rifleman : fow_b_ija_backpack {
        maximumLoad = 150;
    };

    class fow_b_ija_backpack_asst_type99 : fow_b_ija_backpack {
        maximumLoad = 150;
    };

    class fow_b_ija_backpack_foliage : fow_b_ija_backpack {
        maximumLoad = 150;
    };

    class fow_b_ija_backpack_foliage_asst_type99 : fow_b_ija_backpack_foliage {
        maximumLoad = 150;
    };

    class fow_b_ija_backpack_foliage_medic : fow_b_ija_backpack_foliage {
        maximumLoad = 150;
    };

    class fow_b_ija_backpack_foliage_rifleman : fow_b_ija_backpack_foliage {
        maximumLoad = 150;
    };

    class fow_b_uk_p37 : Bag_Base {
        maximumLoad = 150;
    };

    class fow_b_uk_p37_AAR_2PzD : fow_b_uk_p37 {
        scope = 1;
        class TransportMagazines {
            class _xx_fow_30Rnd_303_bren {
                count = 4;
                magazine = "fow_30Rnd_303_bren";
            };
            class _xx_ACE_SpareBarrel {
                count = 1;
                magazine = "ACE_SpareBarrel";
            };
        };
    };

    class fow_b_uk_p37_ARAB_2PzD : fow_b_uk_p37 {
        scope = 1;
        class TransportMagazines {
            class _xx_fow_30Rnd_303_bren {
                count = 10;
                magazine = "fow_30Rnd_303_bren";
            };
        };
    };

    class fow_b_uk_p37_ATR_2PzD : fow_b_uk_p37 {
        scope = 1;
        class TransportMagazines {
            class _xx_LIB_1Rnd_145x114 {
                count = 20;
                magazine = "LIB_1Rnd_145x114";
            };
        };
    };

    class fow_b_uk_p37_Med_2PzD : fow_b_uk_p37 {
        scope = 1;
        class TransportItems {
            class _xx_ACE_fieldDressing {
                count = 20
                name = "ACE_fieldDressing"
            };
            class _xx_ACE_elasticBandage {
                count = 10
                name = "ACE_elasticBandage"
            };
            class _xx_ACE_morphine {
                count = 10
                name = "ACE_morphine"
            };
            class _xx_ACE_epinephrine {
                count = 5
                name = "ACE_epinephrine"
            };
            class _xx_ACE_tourniquet {
                count = 2
                name = "ACE_tourniquet"
            };
            class _xx_ACE_surgicalKit {
                count = 1
                name = "ACE_surgicalKit"
            };
            class _xx_ACE_personalAidKit {
                count = 5
                name = "ACE_personalAidKit"
            };
            class _xx_ACE_salineIV_500 {
                count = 5
                name = "ACE_salineIV_500"
            };
        };
    };

    class fow_b_uk_p37_Tool_2PzD : fow_b_uk_p37 {
        scope = 1;
        class TransportItems {
            class _xx_ToolKit {
                count = 1
                name = "ToolKit"
            };
        };
    };

    class fow_b_uk_p37_blanco : fow_b_uk_p37 {
        maximumLoad = 150;
    };

    class fow_b_uk_p37_medic : fow_b_uk_p37 {
        maximumLoad = 150;
    };

    class fow_b_uk_p37_radio : fow_b_uk_p37 {
        maximumLoad = 150;
    };

    class fow_b_uk_piat : fow_b_uk_p37 {
        maximumLoad = 75;
    };

    class fow_b_uk_piat_AT_2PzD : fow_b_uk_piat {
        scope = 1;
        class TransportMagazines {
            class _xx_fow_1Rnd_piat {
                count = 3;
                magazine = "fow_1Rnd_piat";
            };
        };
    };

    class fow_b_uk_bergenpack : fow_b_uk_p37 {
        maximumLoad = 250;
    };

    class fow_b_uk_bergenpack_Mort2A_2PzD : fow_b_uk_bergenpack {
        scope = 1;
        class TransportMagazines {
            class _xx_LIB_1Rnd_60mm_Mo_HE {
                count = 8;
                magazine = "LIB_1Rnd_60mm_Mo_HE";
            };
        };
    };

    class fow_b_uk_bergenpack_Mort2B_2PzD : fow_b_uk_bergenpack {
        scope = 1;
        class TransportMagazines {
            class _xx_LIB_1Rnd_60mm_Mo_HE {
                count = 5;
                magazine = "LIB_1Rnd_60mm_Mo_HE";
            };
        };
    };

    class fow_b_uk_bergenpack_Mort3A_2PzD : fow_b_uk_bergenpack {
        scope = 1;
        class TransportMagazines {
            class _xx_LIB_1Rnd_60mm_Mo_HE {
                count = 3;
                magazine = "LIB_1Rnd_82mm_Mo_HE";
            };
        };
    };

    class fow_b_uk_bergenpack_Mort3B_2PzD : fow_b_uk_bergenpack {
        scope = 1;
        class TransportMagazines {
            class _xx_LIB_1Rnd_60mm_Mo_HE {
                count = 5;
                magazine = "LIB_1Rnd_82mm_Mo_HE";
            };
        };
    };

    class fow_b_uk_bergenpack_medic : fow_b_uk_bergenpack {
        maximumLoad = 250;
    };

    class fow_b_us_bandoleer : Bag_Base {
        maximumLoad = 50;
    };

    class fow_b_us_m1928 : Bag_Base {
        maximumLoad = 150;
    };

    class fow_b_us_m1928_asst_bar : fow_b_us_m1928 {
        maximumLoad = 150;
    };

    class fow_b_us_m1928_medic : fow_b_us_m1928 {
        maximumLoad = 150;
    };

    class fow_b_us_m1928_rifleman : fow_b_us_m1928 {
        maximumLoad = 150;
    };

    class fow_b_us_rocket_bag : Bag_Base {
        maximumLoad = 200;
    };

    class fow_b_usmc_m1928 : Bag_Base {
        maximumLoad = 150;
    };

    class fow_b_usmc_m1928_asst_bar : fow_b_usmc_m1928 {
        maximumLoad = 150;
    };

    class fow_b_usmc_m1928_medic : fow_b_usmc_m1928 {
        maximumLoad = 150;
    };

    class fow_b_usmc_m1928_rifleman : fow_b_usmc_m1928 {
        maximumLoad = 150;
    };