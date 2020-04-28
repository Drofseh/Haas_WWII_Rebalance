// Pistols
    class LEN_P35 : hgun_Rook40_F {
        class Single : Single {
        };
    };

    class LEN_P640b : hgun_P07_F {
        class Single : Single {
        };
    };

    class LEN_PPK : hgun_Rook40_F {
        class Single : Single {
        };
    };

    class LEN_Welrod : hgun_Rook40_F {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_sd_subs_delisle_Shot_SoundSet","WW2_sd_subsonic_Tail_SoundSet","WW2_sd_subs_delisle_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
// End Pistols

// Rifles
    class LEN_FG42 : LIB_MP44 {
        class Single : Mode_SemiAuto {
        };
        class FullAuto : Mode_FullAuto {
        };
    };

    class LEN_MP44 : LIB_MP44 {
        class Full : Mode_FullAuto {
        };
    };

    class LEN_SMLE_No4Mk1 : LIB_K98 {
        class Single;
        class Short;
        class Medium;
        class Far;
    };
    class LEN_SMLE_No4Mk1T : LEN_SMLE_No4Mk1 {
        class Single : Single {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_nagant_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        /*
        class Short : Short {
        };
        class Medium : Medium {
        };
        class Far : Far {
        };
        */
    };
// End Rifles

// Submachine Guns
    class LEN_M3a1 : LIB_M1A1_Thompson {
        class Full : Mode_FullAuto {
        };
        /*
        class Far : Full {
        };
        class Medium : Full {
        };
        class Short : Medium {
        };
        */
    };

    class LEN_PPS43 : LIB_PPSh41_m {
        class Full : Full {
        };
        /*
        class Far : Far {
        };
        class Medium : Medium {
        };
        class Short : Short {
        };
        */
    };

    class LEN_StenMk2 : LIB_MP40 {
        class FullAuto : Mode_FullAuto {
        };
        class Single : Mode_SemiAuto {
        };
    };
    class LEN_StenMk2S : LEN_StenMk2 {
        class FullAuto : Mode_FullAuto {
        };
        class Single : Mode_SemiAuto {
        };
    };
    class LEN_StenMk5 : LEN_StenMk2 {
        /*
        class FullAuto : Mode_FullAuto {
        };
        class Single : Mode_SemiAuto {
        };
        */
    };
// End Submachine Guns

// Machine Guns

// End Machine Guns

// Other Weapons
    class LEN_M12 : LIB_K98 {
    };
// End Other Weapons
