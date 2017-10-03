    class B_LIB_GER_A_frame : B_LIB_AssaultPack_Base {
        maximumLoad = 100;
    };
  
    class B_LIB_GER_A_frame_AT : B_LIB_GER_A_frame {
        maximumLoad = 100;
    };
    
    class B_LIB_GER_A_frame_Gef : B_LIB_GER_A_frame {
        maximumLoad = 100;
    };
  
    class B_LIB_GER_A_frame_kit : B_LIB_GER_A_frame {
        maximumLoad = 100;
    };
  
    class B_LIB_GER_A_frame_zeltbahn : B_LIB_GER_A_frame {
        maximumLoad = 100;
    };

    class B_LIB_DAK_A_frame : B_LIB_GER_A_frame {
        maximumLoad = 100;
    };

    class B_LIB_DAK_A_frame_AT : B_LIB_DAK_A_frame {
        maximumLoad = 100;
    };

    class B_LIB_DAK_A_frame_Gef : B_LIB_DAK_A_frame {
        maximumLoad = 100;
    };

    class B_LIB_DAK_A_frame_kit : B_LIB_GER_A_frame_kit {
        maximumLoad = 100;
    };

    class B_LIB_GER_Backpack : B_LIB_AssaultPack_Base {
        maximumLoad = 200;
    };

    class B_LIB_GER_MedicBackpack : B_LIB_AssaultPack_Base {
        maximumLoad = 200;
    };

    class B_LIB_GER_MedicBackpack_Empty : B_LIB_GER_MedicBackpack {
        maximumLoad = 200;
    };

    class B_LIB_GER_MedicBackpack_Big_Empty : B_LIB_GER_MedicBackpack_Empty {
        maximumLoad = 200;
    };

    class B_LIB_GER_Panzer : B_LIB_GER_MedicBackpack_Empty {
        maximumLoad = 375;
    };

    class B_LIB_GER_Panzer_Empty : B_LIB_GER_Panzer {
        maximumLoad = 375;
    };

    class B_LIB_GER_Panzer_Big_Empty : B_LIB_GER_Panzer_Empty {
        maximumLoad = 375;
    };

    class B_LIB_GER_Tonister34_cowhide : B_LIB_GER_MedicBackpack_Empty {
        maximumLoad = 200;
    };

    class B_LIB_GER_SapperBackpack_empty : B_LIB_GER_Backpack {
        maximumLoad = 200;
    };

    class B_LIB_GER_SapperBackpack : B_LIB_GER_SapperBackpack_empty {
        maximumLoad = 200;
    };

    class B_LIB_GER_SapperBackpack2 : B_LIB_GER_SapperBackpack_empty {
        maximumLoad = 200;
    };

    class B_LIB_SOV_RA_GasBag : B_LIB_AssaultPack_Base {
        maximumLoad = 150;
    };

    class B_LIB_SOV_RA_MedicalBag : B_LIB_AssaultPack_Base {
        maximumLoad = 100;
    };

    class B_LIB_SOV_RA_MedicalBag_Empty : B_LIB_SOV_RA_MedicalBag {
        maximumLoad = 100;
    };

    class B_LIB_SOV_RA_MedicalBag_Big_Empty : B_LIB_SOV_RA_MedicalBag_Empty {
        maximumLoad = 100;
    };

    class B_LIB_SOV_RA_MGAmmoBag : B_LIB_AssaultPack_Base {
        maximumLoad = 150;
    };

    class B_LIB_SOV_RA_MGAmmoBag_Empty : B_LIB_SOV_RA_MGAmmoBag {
        maximumLoad = 150;
    };

    class B_LIB_SOV_RA_MGAmmoBag_Big_Empty : B_LIB_SOV_RA_MGAmmoBag_Empty {
        maximumLoad = 150;
    };

    class B_LIB_SOV_RA_Rucksack : B_LIB_AssaultPack_Base {
        maximumLoad = 150;
    };

    class B_LIB_SOV_RA_Rucksack_Green : B_LIB_SOV_RA_Rucksack {
        maximumLoad = 150;
    };

    class B_LIB_SOV_RA_Rucksack2 : B_LIB_SOV_RA_Rucksack {
        maximumLoad = 150;
    };

    class B_LIB_SOV_RA_Rucksack2_Green : B_LIB_SOV_RA_Rucksack2 {
        maximumLoad = 150;
    };

    class B_LIB_SOV_RA_Shinel : B_LIB_SOV_RA_Rucksack {
        maximumLoad = 100;
    };

    class B_LIB_US_Backpack : B_LIB_AssaultPack_Base {
        maximumLoad = 150;
    };

    class B_LIB_US_Backpack_AR_2PzD : B_LIB_US_Backpack {
        scope = 1;
        class TransportMagazines {
            class _xx_LIB_20Rnd_762x63 {
                count = 10;
                magazine = "LIB_20Rnd_762x63";
            };
        };
    };

    class B_LIB_US_Backpack_ARAB_2PzD : B_LIB_US_Backpack {
        scope = 1;
        class TransportMagazines {
            class _xx_LIB_20Rnd_762x63 {
                count = 15;
                magazine = "LIB_20Rnd_762x63";
            };
        };
    };

    class B_LIB_US_Backpack_MGTL_2PzD : B_LIB_US_Backpack {
        scope = 1;
        class TransportMagazines {
            class _xx_LIB_250Rnd_762x63_2PzD {
                count = 2;
                magazine = "LIB_250Rnd_762x63_2PzD";
            };
        };
    };

    class B_LIB_US_Backpack_Tool_2PzD : B_LIB_US_Backpack {
        scope = 1;
        class TransportItems {
            class _xx_ToolKit {
                count = 1;
                magazine = "ToolKit";
            };
        };
    };

    class B_LIB_US_Backpack_dday : B_LIB_US_Backpack {
        maximumLoad = 150;
    };

    class B_LIB_US_Backpack_eng : B_LIB_US_Backpack {
        maximumLoad = 150;
    };

    class B_LIB_US_Bandoleer : B_LIB_AssaultPack_Base {
        maximumLoad = 50;
    };

    class B_LIB_US_M2Flamethrower : B_LIB_AssaultPack_Base {
        maximumLoad = 440.94;
    };

    class B_LIB_US_M2Flamethrower_2PzD : B_LIB_US_M2Flamethrower {
        scope = 1;
        class TransportMagazines {
            class _xx_LIB_M2_Flamethrower_Mag {
                count = 1;
                magazine = "LIB_M2_Flamethrower_Mag";
            };
        };
    };

    class B_LIB_US_M36 : B_LIB_AssaultPack_Base {
        maximumLoad = 150;
    };

    class B_LIB_US_M36_Rope : B_LIB_US_M36 {
        maximumLoad = 150;
    };

    class B_LIB_US_MGbag : B_LIB_AssaultPack_Base {
        maximumLoad = 150;
    };

    class B_LIB_US_MGbag_Empty : B_LIB_US_MGbag {
        maximumLoad = 150;
    };

    class B_LIB_US_MGbag_MGA_2PzD : B_LIB_US_MGbag_Empty {
        scope = 1;
        class TransportMagazines {
            class _xx_LIB_250Rnd_762x63_2PzD {
                count = 2;
                magazine = "LIB_250Rnd_762x63_2PzD";
            };
        };
    };

    class B_LIB_US_MGbag_MortTL_2PzD : B_LIB_US_MGbag_Empty {
        scope = 1;
        class TransportMagazines {
            class _xx_LIB_1Rnd_60mm_Mo_HE {
                count = 5;
                magazine = "LIB_1Rnd_60mm_Mo_HE";
            };
        };
    };

    class B_LIB_US_MGbag_Mort_2PzD : B_LIB_US_MGbag_Empty {
        scope = 1;
        class TransportMagazines {
            class _xx_LIB_1Rnd_60mm_Mo_HE {
                count = 8;
                magazine = "LIB_1Rnd_60mm_Mo_HE";
            };
        };
    };

    class B_LIB_US_MGbag_Big_Empty : B_LIB_US_MGbag_Empty {
        maximumLoad = 150;
    };

    class B_LIB_US_RocketBag : B_LIB_AssaultPack_Base {
        maximumLoad = 200;
    };

    class B_LIB_US_RocketBag_Empty : B_LIB_US_RocketBag {
        maximumLoad = 200;
    };

    class B_LIB_US_RocketBag_AT_2PzD : B_LIB_US_RocketBag_Empty {
        scope = 1;
        class TransportMagazines {
            class _xx_LIB_1Rnd_60mm_M6 {
                count = 3;
                magazine = "LIB_1Rnd_60mm_M6";
            };
        };
    };

    class B_LIB_US_RocketBag_Big_Empty : B_LIB_US_RocketBag_Empty {
        maximumLoad = 200;
    };