
    class fow_rifle_base : Rifle_Base_F {};

    class fow_shotgun_base : fow_rifle_base {};

    class fow_rifleBolt_base : fow_rifle_base {};

// Pistols
    class fow_w_m1911 : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_m1895_Shot_SoundSet","IFA3_Pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_p640p : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_01",3.98107,1,1200};
                begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_02",3.98107,1,1200};
                begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_03",3.98107,1,1200};
                closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_01",0.223872,1,10};
                closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_02",0.223872,1.2,10};
                soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"P07_Shot_SoundSet","P07_Tail_SoundSet","P07_InteriorTail_SoundSet"};
            };
        };
    };

    class fow_w_p08 : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_luger_Shot_SoundSet","IFA3_Pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_p35 : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_01",3.16228,1,1200};
                begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_02",3.16228,1,1200};
                begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_03",3.16228,1,1200};
                closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01",0.158489,1,10};
                closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02",0.158489,1.1,10};
                soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"Rook40_Shot_SoundSet","Rook40_Tail_SoundSet","Rook40_InteriorTail_SoundSet"};
            };
        };
    };

    class fow_w_ppk : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_p38_Shot_SoundSet","IFA3_Pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_type10 : Pistol_Base_F {
    };

    class fow_w_type14 : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_m1895_Shot_SoundSet","IFA3_Pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_webley : Pistol_Base_F {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_webleymk6_Shot_SoundSet","WW2_rifle_small_Tail_SoundSet","WW2_webleymk6_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_welrod_mkii : Pistol_Base_F {
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
    class fow_w_fg42 : fow_rifle_base {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_G43_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Full : Mode_FullAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_G43_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_g43 : fow_rifle_base {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_G43_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_k98 : fow_rifleBolt_base {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_k98_scoped : fow_w_k98 {
        class Far : Single {
        };
        class Medium : Single {
        };
        class Short : Single {
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_leeenfield_no4mk1 : fow_rifleBolt_base {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_enfield_Shot_SoundSet","WW2_rifle2_Tail_SoundSet","WW2_enfield_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
    class fow_w_leeenfield_no4mk1_redwood : fow_w_leeenfield_no4mk1 {
    };
    class fow_w_leeenfield_no5mk1_junglecarbine : fow_w_leeenfield_no4mk1 {
    };

    class fow_w_m1_carbine : fow_rifle_base {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1Car_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
    class fow_w_m2_carbine_2PzD : fow_w_m1_carbine {
        class Single;
        class Full : Single {
        };
    };

    class fow_w_m1_garand : fow_rifle_base {
        class fow_w_m7_gl : UGL_F {
        };
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
    class fow_w_m1_garand_l : fow_w_m1_garand {
    };
    class fow_w_m1_garand_2 : fow_w_m1_garand {
    };

    class fow_w_m1903A1 : fow_rifleBolt_base {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1903A4_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Far : Single {};
        class Medium : Single {};
        class Short : Single {};
    };

    class fow_w_m1903A1_sniper : fow_w_m1903A1 {
        class Single : Single {
        };
        class Far : Far {};
        class Medium : Medium {};
        class Short : Short {};
    };

    class fow_w_stg44 : fow_rifle_base {
        class Full : Mode_FullAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_STG44_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Burst_AI : Mode_Burst {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_STG44_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_STG44_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_type99 : fow_rifleBolt_base {
        class fow_w_type2_gl : UGL_F {
        };
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
    class fow_w_type99_sniper : fow_w_type99 {
        class Far : Single {
            sounds[] = {"StandardSound"};
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Medium : Single {
            sounds[] = {"StandardSound"};
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Short : Single {
            sounds[] = {"StandardSound"};
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
// End Rifles

// Submachine Guns
    class fow_w_m1a1_thompson : fow_rifle_base {
        class Single : Mode_SemiAuto {
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Full : Mode_FullAuto {
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Burst_AI : Mode_Burst {
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
    class fow_w_m1_thompson : fow_w_m1a1_thompson {
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Full : Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Burst_AI : Mode_Burst {
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_m3 : fow_rifle_base {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Full : Mode_FullAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Burst_AI : Mode_Burst {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_m55_reising : fow_rifle_base {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Full : Mode_FullAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Burst_AI : Mode_Burst {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_mp40 : fow_rifle_base {
        class Full : Mode_FullAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Burst_AI : Mode_Burst {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_sten_mk2 : fow_rifle_base {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_Sten_Shot_SoundSet","WW2_rifle_small_Tail_SoundSet","WW2_Sten_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Full : Mode_FullAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_Sten_Shot_SoundSet","WW2_rifle_small_Tail_SoundSet","WW2_Sten_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Burst_AI : Mode_Burst {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_Sten_Shot_SoundSet","WW2_rifle_small_Tail_SoundSet","WW2_Sten_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
    class fow_w_sten_mk5 : fow_w_sten_mk2 {
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_Sten_Shot_SoundSet","WW2_rifle_small_Tail_SoundSet","WW2_Sten_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Full : Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_Sten_Shot_SoundSet","WW2_rifle_small_Tail_SoundSet","WW2_Sten_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Burst_AI : Mode_Burst {
            sounds[] = {"StandardSound"};
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_Sten_Shot_SoundSet","WW2_rifle_small_Tail_SoundSet","WW2_Sten_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_type100 : fow_rifle_base {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Full : Mode_FullAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Burst_AI : Mode_Burst {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
    class fow_w_type100_44_2PzD : fow_w_type100 {
        class Single : Single {
        };
        class Full : Full {
        };
        class Burst_AI : Burst_AI {
        };
    };
// End Submachine Guns

// Machine Guns
    class fow_w_bren : fow_rifle_base {
        class FullAuto : Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_BAR_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Single : FullAuto {
        };
    };

    class fow_w_m1918a2 : fow_rifle_base {
        class FullAuto_300 : Mode_FullAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_BAR_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class close : FullAuto_300 {
        };
        class FullAuto_650 : Mode_FullAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_BAR_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
    class fow_w_m1918a2_bak : fow_w_m1918a2 {
   };

    class fow_w_m1919 : fow_rifle_base {
        class FullAuto : Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_M1919_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_m1919a4 : fow_w_m1919 {
    };
    class fow_w_m1919a6 : fow_w_m1919 {
    };

    class fow_w_mg34 : fow_rifle_base {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG34_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class FullAuto : Mode_FullAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG34_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_mg42 : fow_rifle_base {
        class FullAuto : Mode_FullAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_MG42_delayed_Shot_SoundSet","IFA3_MMG1_delayed_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_type99_lmg : fow_rifle_base {
        class FullAuto : Mode_FullAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
// End Machine Guns

// Other Weapons, Tripods, Launchers
    class fow_w_ithaca37 : fow_shotgun_base {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_01",2.51189,1,2200};
                begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_02",2.51189,1,2200};
                closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
                closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundsetshot[] = {"M320_Shot_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet"};
            };
        };
    };

    class fow_w_M1912 : fow_shotgun_base {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_01",2.51189,1,2200};
                begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_02",2.51189,1,2200};
                closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
                closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundsetshot[] = {"M320_Shot_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet"};
            };
        };
    };

    class fow_w_m1a1_bazooka : Launcher_Base_F {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"LIB_LAUNCHER_SHOT_SOUNDSET","LIB_ROCKETLAUNCHER_TAIL_SOUNDSET"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_piat : fow_rifle_base {
    };

    class fow_w_pzfaust_base : Launcher_Base_F {
        class Single : Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_pzf_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class fow_w_pzfaust_30_klein : fow_w_pzfaust_base {
    };
    class fow_w_pzfaust_30_klein_used : fow_w_pzfaust_30_klein {
    };

    class fow_w_pzfaust_30 : fow_w_pzfaust_base {
    };
    class fow_w_pzfaust_30_used : fow_w_pzfaust_30 {
    };

    class fow_w_pzfaust_60 : fow_w_pzfaust_30 {
    };
    class fow_w_pzfaust_60_used : fow_w_pzfaust_30_used {
    };

    class fow_w_pzfaust_100 : fow_w_pzfaust_30 {
    };
    class fow_w_pzfaust_100_used : fow_w_pzfaust_30_used {
    };

    /*class fow_w_m2_flamethrower : fow_rifle_base {
    };*/
// End Other Weapons, Tripods, Launchers

// Vehicle Weapons
    class fow_w_besa_mg_mounted : HMG_M2 {
        class slow : MGun {
        };
        class fast : slow {
        };
        class close : slow {
        };
        class short : close {
        };
        class medium : close {
        };
        class far : close {
        };
    };

    class fow_w_bren_mounted : HMG_M2 {
        class manual : MGun {
        };
        class Single : manual {
        };
    };

    class fow_w_m1919a4_mounted : MGun {
        class manual : MGun {
        };
        class close : manual {};
        class short : close {};
        class medium : close {};
        class far : close {};
    };
    class fow_w_m1919a4_static : fow_w_m1919a4_mounted {};

    class fow_w_mg34_mounted : HMG_M2 {
        class manual : MGun {
        };
        class close : manual {};
        class short : close {};
        class medium : close {};
        class far : close {};
    };

    class fow_w_mg42_mounted : HMG_M2 {
        class FullAuto : Mode_FullAuto {
        };
        class close : FullAuto {};
        class short : close {};
        class medium : close {};
        class far_optic1 : close {};
        class far_optic2 : far_optic1 {};
    };

    class fow_w_vickers_mounted : HMG_M2 {
        class manual : MGun {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class close : manual {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class short : close {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class medium : close {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far : close {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_dp_Shot_SoundSet","IFA3_MMG1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };

    class fow_w_type92 : MGun {
        class manual : MGun {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };/*
        class close : manual {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class short : close {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class medium : close {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class far : close {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_K98_Shot_SoundSet","IFA3_rifle2_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };*/
    };
// End Vehicle Weapons
