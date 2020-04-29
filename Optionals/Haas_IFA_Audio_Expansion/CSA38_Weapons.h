
    class csa38_Pistol;

    class csa38_SMG;

    class CSA38_MGBASE;

    class CSA38_LMGA3_base;

    class CSA38_HMGA3_base;

    class csa38_MAS36Bayonet;

    class csa38_vz24Bayonet;

    class csa38_vz23Bayonet;

    class csa38_vz33Bayonet;

    class csa38_sg84Bayonet;

    class csa38_m95Bayonet;

    class CSA38_PGvz23_Empty : muzzle_snds_H {
        class LIB_RifleGrenade {};
    };

    class CSA38_PGvz23 : CSA38_PGvz23_Empty {};

    class csa38_czvz27tlumic : muzzle_snds_H {};


// Pistols
    class csa38_czvz22 : csa38_Pistol {
        class Single : Mode_SemiAuto {};
    };

    class csa38_czvz24 : csa38_czvz22 {
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_czvz27\reload2.ogg", 3, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound: BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_czvz24\fire01.wav", 1.51189, 1, 1000};
                begin2[] = {"\CSA38II_sounds\w_czvz24\fire02.wav", 1.51189, 1, 1000};
                begin3[] = {"\CSA38II_sounds\w_czvz24\fire03.wav", 1.51189, 1, 1000};
                begin4[] = {"\CSA38II_sounds\w_czvz24\fire04.wav", 1.51189, 1, 1000};
                soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
                soundSetShot[] = {"CSA38_czvz22_Shot_SoundSet", "SMGPDW2000_Tail_SoundSet", "SMGPDW2000_InteriorTail_SoundSet"};
            };
        };
    };

    class csa38_czvz27 : csa38_czvz22 {
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_czvz27\reload2.ogg", 3, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound: BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_czvz24\fire01.wav", 1.51189, 1, 1000};
                begin2[] = {"\CSA38II_sounds\w_czvz24\fire02.wav", 1.51189, 1, 1000};
                begin3[] = {"\CSA38II_sounds\w_czvz24\fire03.wav", 1.51189, 1, 1000};
                begin4[] = {"\CSA38II_sounds\w_czvz24\fire04.wav", 1.51189, 1, 1000};
                soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
                soundSetShot[] = {"CSA38_czvz22_Shot_SoundSet", "SMGPDW2000_Tail_SoundSet", "SMGPDW2000_InteriorTail_SoundSet"};
            };
            class SilencedSound : BaseSoundModeType {
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

    class csa38_czvz27s : csa38_czvz27 {
        class Single : Mode_SemiAuto {
            sounds[] = {"SilencedSound"};
        };
    };

    class csa38_czvz36 : csa38_czvz22 {
        class Single : Mode_SemiAuto {};
    };

    class csa38_czvz38 : csa38_czvz22 {
        class Single : Mode_SemiAuto {};
    };

    class csa38_p08 : csa38_czvz22 {
        class Single : Mode_SemiAuto {};
    };

    class csa38_p082 : csa38_p08 {};

    class csa38_lp08 : csa38_p08 {};

    class csa38_lp082 : csa38_lp08 {};

    class csa38_p38 : csa38_czvz22 {
        class Single : Mode_SemiAuto {};
    };

    class csa38_m1896 : csa38_p38 {
        class Single : Mode_SemiAuto {};
    };

    class CSA38_WaltherPP : csa38_czvz22 {
        class Single : Mode_SemiAuto {};
    };

    class CSA38_WaltherPPK : CSA38_WaltherPP {
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                weaponSoundEffect = "CSA38_HandGun";
                closure1[] = {"\CSA38II_sounds\w_pp\reload2.ogg", 3, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound: BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_pp\fire01.ogg", 1.51189, 1, 1000};
                begin2[] = {"\CSA38II_sounds\w_pp\fire02.ogg", 1.51189, 1, 1000};
                begin3[] = {"\CSA38II_sounds\w_pp\fire03.ogg", 1.51189, 1, 1000};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
                soundSetShot[] = {"CSA38_WaltherPP_Shot_SoundSet", "SMGPDW2000_Tail_SoundSet", "SMGPDW2000_InteriorTail_SoundSet"};
            };
        };
    };
// End Pistols

// Rifles
    class CSA38_vz24 : Rifle_Base_F {
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

    class CSA38_vz24_Bayonet : csa38_vz24 {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };

    class CSA38_vz24_Bayonet2 : CSA38_vz24_Bayonet {};

    class CSA38_vz24_Bayonet3 : CSA38_vz24_Bayonet {};

    class CSA38_vz24ii : CSA38_vz24 {
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
    class CSA38_vz24ii_Bayonet : CSA38_vz24ii {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_vz24ii_Bayonet2 : CSA38_vz24ii_Bayonet {};
    class CSA38_vz24ii3_Bayonet3 : CSA38_vz24ii_Bayonet {};

    class CSA38_vz24iii : CSA38_vz24 {};
    class CSA38_vz24iii_Bayonet : CSA38_vz24iii {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_vz24iii_Bayonet2 : CSA38_vz24iii_Bayonet {};
    class CSA38_vz24iii3_Bayonet3 : CSA38_vz24iii_Bayonet {};

    class CSA38_vz23 : CSA38_vz24 {
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
    class CSA38_vz23_Bayonet : csa38_vz23 {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_vz23_Bayonet2 : CSA38_vz23_Bayonet {};
    class CSA38_vz23_Bayonet3 : CSA38_vz23_Bayonet {};

    class CSA38_vz22 : CSA38_vz24 {
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
    class CSA38_vz22_Bayonet : CSA38_vz22 {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_vz22_Bayonet2 : CSA38_vz22_Bayonet {};
    class CSA38_vz22_Bayonet3 : CSA38_vz22_Bayonet {};

    class CSA38_vz33 : CSA38_vz24 {
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
    class CSA38_vz33_Bayonet : csa38_vz33 {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_vz33_Bayonet2 : CSA38_vz33_Bayonet {};
    class CSA38_vz33_Bayonet3 : CSA38_vz33_Bayonet {};

    class CSA38_vz33_40 : CSA38_vz33 {};
    class CSA38_vz33_40_Bayonet : csa38_vz33_40 {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_vz33_40_Bayonet2 : CSA38_vz33_40_Bayonet {};
    class CSA38_vz33_40_Bayonet3 : CSA38_vz33_40_Bayonet {};

    class CSA38_vz33_40ii : CSA38_vz33_40 {
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
    class CSA38_vz33_40ii_Bayonet : csa38_vz33_40ii {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_vz33_40ii_Bayonet2 : CSA38_vz33_40ii_Bayonet {};
    class CSA38_vz33_40ii_Bayonet3 : CSA38_vz33_40ii_Bayonet {};

    class csa38_gvz23 : CSA38_vz24 {
        class GVZ23Muzzle : GrenadeLauncher {};
    };

    class CSA38_kar98k : CSA38_vz24 {
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
    class CSA38_kar98k_Bayonet : CSA38_kar98k {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_kar98k_Bayonet2 : CSA38_kar98k_Bayonet {};
    class CSA38_kar98k_GW : CSA38_kar98k {
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {};
    };

    class CSA38_kar98k2 : CSA38_kar98k {
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_m1895\reload2.ogg", 3, 1, 20};
                soundClosure[] = {"closure1", 1};
                weaponSoundEffect = "CSA38_Rifle";
            };
            class StandardSound: BaseSoundModeType {
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
    class CSA38_kar98k2_Bayonet : CSA38_kar98k2 {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_kar98k2_Bayonet2 : CSA38_kar98k2_Bayonet {};
    class CSA38_kar98k2_GW : CSA38_kar98k2 {
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {};
    };

    class CSA38_kar98k3 : CSA38_kar98k {};
    class CSA38_kar98k3_Bayonet : CSA38_kar98k3 {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_kar98k3_Bayonet2 : CSA38_kar98k3_Bayonet {};
    class CSA38_kar98k3_GW : CSA38_kar98k3 {
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {};
    };

    class CSA38_kar98k4 : CSA38_kar98k2 {
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_m1895\reload2.ogg", 3, 1, 20};
                soundClosure[] = {"closure1", 1};
                weaponSoundEffect = "CSA38_Rifle";
            };
            class StandardSound: BaseSoundModeType {
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
    class CSA38_kar98k4_Bayonet : CSA38_kar98k4 {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_kar98k4_Bayonet2 : CSA38_kar98k4_Bayonet {};
    class CSA38_kar98k4_GW : CSA38_kar98k4 {
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {};
    };

    class CSA38_kar98k5 : CSA38_kar98k {};
    class CSA38_kar98k5_Bayonet : CSA38_kar98k5 {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_kar98k5_Bayonet2 : CSA38_kar98k5_Bayonet {};
    class CSA38_kar98k5_GW : CSA38_kar98k5 {
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {};
    };

    class CSA38_kar98k6 : CSA38_kar98k {};
    class CSA38_kar98k6_Bayonet : CSA38_kar98k6 {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_kar98k6_Bayonet2 : CSA38_kar98k6_Bayonet {};
    class CSA38_kar98k6_GW : CSA38_kar98k6 {
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {};
    };

    class CSA38_g98 : CSA38_kar98k {};
    class CSA38_g98_Bayonet : CSA38_g98 {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_g98_Bayonet2 : CSA38_g98_Bayonet {};
    class CSA38_g98_GW : CSA38_g98 {
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {};
    };

    class CSA38_g98i : CSA38_g98 {};
    class CSA38_g98i_Bayonet : CSA38_g98i {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_g98i_Bayonet2 : CSA38_g98i_Bayonet {};
    class CSA38_g98i_GW : CSA38_g98i {
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {};
    };

    class CSA38_g98ii : CSA38_g98 {
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_m1895\reload2.ogg", 3, 1, 20};
                soundClosure[] = {"closure1", 1};
                weaponSoundEffect = "CSA38_Rifle";
            };
            class StandardSound: BaseSoundModeType {
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
    class CSA38_g98ii_Bayonet : CSA38_g98ii {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_g98ii_Bayonet2 : CSA38_g98ii_Bayonet {};
    class CSA38_g98ii_GW : CSA38_g98ii {
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {};
    };

    class CSA38_g98iii : CSA38_g98 {};
    class CSA38_g98iii_Bayonet : CSA38_g98iii {
        class LIB_Bayonet_Muzzle : LIB_Bayonet_base {};
    };
    class CSA38_g98iii_Bayonet2 : CSA38_g98iii_Bayonet {};
    class CSA38_g98iii_GW : CSA38_g98iii {
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {};
    };

    class CSA38_g98iv : CSA38_g98 {
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_m1895\reload2.ogg", 3, 1, 20};
                soundClosure[] = {"closure1", 1};
                weaponSoundEffect = "CSA38_Rifle";
            };
            class StandardSound: BaseSoundModeType {
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
    class CSA38_g98iv_Bayonet : CSA38_g98iv {};
    class CSA38_g98iv_Bayonet2 : CSA38_g98iv_Bayonet {};
    class CSA38_g98iv_GW : CSA38_g98iv {
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {};
    };

    class CSA38_M1895 : CSA38_kar98k {
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_m1895\reload2.ogg", 3, 1, 20};
                soundClosure[] = {"closure1", 1};
                weaponSoundEffect = "CSA38_Rifle";
            };
            class StandardSound : BaseSoundModeType {
                soundSetShot[] = {"CSA38_M1895_Shot_SoundSet", "Mk200_Tail_SoundSet", "Mk200_InteriorTail_SoundSet"};
                begin1[] = {"\CSA38II_sounds\w_m1895\fire01.ogg", 1.77828, 1, 1200};
                begin2[] = {"\CSA38II_sounds\w_m1895\fire02.ogg", 1.77828, 1, 1200};
                begin3[] = {"\CSA38II_sounds\w_m1895\fire03.ogg", 1.77828, 1, 1200};
                begin4[] = {"\CSA38II_sounds\w_m1895\fire04.ogg", 1.77828, 1, 1200};
                begin5[] = {"\CSA38II_sounds\w_m1895\fire05.ogg", 1.77828, 1, 1200};
                soundBegin[] = {"begin1", 0.2, "begin2", 0.2, "begin3", 0.2, "begin4", 0.2, "begin5", 0.2};
            };
        };
    };
    class CSA38_M1895_Bayonet : CSA38_M1895 {};
    class CSA38_M1895_GW : CSA38_M1895 {
        class CSA38_M1895_RG : LIB_RifleGrenade_Muzzle {};
    };

    class CSA38_M1895k : CSA38_M1895 {
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_m1895\reload2.ogg", 3, 1, 20};
                soundClosure[] = {"closure1", 1};
                weaponSoundEffect = "CSA38_Rifle";
            };
            class StandardSound : BaseSoundModeType {
                soundSetShot[] = {"CSA38_M1895_Shot_SoundSet", "Mk200_Tail_SoundSet", "Mk200_InteriorTail_SoundSet"};
                begin1[] = {"\CSA38II_sounds\w_m1895\fire01.ogg", 1.77828, 1, 1200};
                begin2[] = {"\CSA38II_sounds\w_m1895\fire02.ogg", 1.77828, 1, 1200};
                begin3[] = {"\CSA38II_sounds\w_m1895\fire03.ogg", 1.77828, 1, 1200};
                begin4[] = {"\CSA38II_sounds\w_m1895\fire04.ogg", 1.77828, 1, 1200};
                begin5[] = {"\CSA38II_sounds\w_m1895\fire05.ogg", 1.77828, 1, 1200};
                soundBegin[] = {"begin1", 0.2, "begin2", 0.2, "begin3", 0.2, "begin4", 0.2, "begin5", 0.2};
            };
        };
    };
    class CSA38_M1895k_Bayonet : CSA38_M1895k {};
    class CSA38_M1895k_GW : CSA38_M1895k {
        class CSA38_M1895_RG : LIB_RifleGrenade_Muzzle {};
    };

    class CSA38_sm1924 : CSA38_kar98k {
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
    class CSA38_sm1924_Bayonet : CSA38_sm1924 {};
    class CSA38_sm1924_Bayonet2 : CSA38_sm1924_Bayonet {};
    class CSA38_sm1924_GW : CSA38_sm1924 {
        class LIB_K98_RG : LIB_RifleGrenade_Muzzle {};
    };

    class CSA38_SMLE : CSA38_vz24 {
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
    class CSA38_SMLE_Bayonet : CSA38_SMLE {};
    class CSA38_SMLE_CUP : CSA38_SMLE {
        class LIB_LeeEnfield_No4_RG : LIB_RifleGrenade_Muzzle {};
    };

    class CSA38_SMLE2 : CSA38_SMLE {};
    class CSA38_SMLE2_Bayonet : CSA38_SMLE2 {};
    class CSA38_SMLE2_CUP : CSA38_SMLE2 {};

    class CSA38_MAS36 : CSA38_vz24 {
        class Single : Mode_SemiAuto {};
    };
    class CSA38_MAS36_Bayonet : CSA38_MAS36 {};
// End Rifles

// SMGs
    class csa38_kpvz38P : csa38_SMG {
        class FullAuto : Mode_FullAuto {};
        class AI_Burst1 : Mode_Burst {};
    };

    class csa38_kpvz38 : csa38_kpvz38P {};

    class csa38_mas38 : csa38_SMG {
        class FullAuto : Mode_FullAuto {};
        class AI_Burst1 : Mode_Burst {};
    };

    class CSA38_Mp18 : csa38_SMG {
        class FullAuto : Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_mp38\fire01.ogg",2.81838,1,1200};
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.5,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",1};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
            };
        };
        class AI_Burst1 : Mode_Burst {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_mp38\fire01.ogg",2.81838,1,1200};
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.5,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",1};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
            };
        };
    };

    class CSA38_Mp28 : CSA38_Mp18 {
        class FullAuto : Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_mp38\fire01.ogg",2.81838,1,1200};
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.5,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",1};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
            };
        };
        class FullAuto2 : Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_mp38\fire01.ogg",2.81838,1,1200};
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",0.5,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",1};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
            };
        };
    };

    class CSA38_Mp35 : CSA38_Mp28 {
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 1, 1, 10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 1, 1, 10};
                soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
            };
            class StandardSound : BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_mp28\fire01.ogg", 2.81838, 1, 1200};
                begin2[] = {"\CSA38II_sounds\w_mp28\fire02.ogg", 2.81838, 1, 1200};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                soundBegin[] = {"begin1", 0.2, "begin2", 0.2};
            };
        };
        class FullAuto2 : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.501187, 1, 10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.501187, 1.1, 10};
                soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
            };
            class StandardSound : BaseSoundModeType {
                begin1[] = {"\CSA38II_sounds\w_mp28\fire01.ogg", 2.81838, 1, 1200};
                begin2[] = {"\CSA38II_sounds\w_mp28\fire02.ogg", 2.81838, 1, 1200};
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                soundBegin[] = {"begin1", 0.2, "begin2", 0.2};
            };
        };
        class AI_Burst1 : Mode_Burst {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.501187, 1, 10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.501187, 1.1, 10};
                soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
            };
            class StandardSound : BaseSoundModeType {
                soundSetShot[] = {"IFA3_MP40_Shot_SoundSet","IFA3_pistol1_Tail_SoundSet"};
                begin1[] = {"\CSA38II_sounds\w_mp28\fire01.ogg", 2.81838, 1, 1200};
                begin2[] = {"\CSA38II_sounds\w_mp28\fire02.ogg", 2.81838, 1, 1200};
                soundBegin[] = {"begin1", 0.2, "begin2", 0.2};
            };
        };
    };

    class CSA38_Mp38 : csa38_SMG {
        class FullAuto : Mode_FullAuto {
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.5, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
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
        class AI_Burst1 : FullAuto {
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.5, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
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

    class CSA38_Mp38ii : CSA38_Mp38 {
        class FullAuto;
        class AI_Burst1;
    };

    class CSA38_Mp40 : CSA38_Mp38 {
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.5, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
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
        class AI_Burst1 : Mode_Burst {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.5, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
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

    class CSA38_Mp40ii : CSA38_Mp38ii {
        class FullAuto : FullAuto {};
        class AI_Burst1 : AI_Burst1 {};
    };

    class CSA38_stenMkII : csa38_SMG {
        class FullAuto : Mode_FullAuto {
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",3,1,10};
                soundClosure[] = {"closure1", 1};
            };
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
        class FullAuto2 : Mode_SemiAuto {
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",3,1,10};
                soundClosure[] = {"closure1", 1};
            };
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
        class AI_Burst1 : Mode_Burst {
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",3,1,10};
                soundClosure[] = {"closure1", 1};
            };
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

    class CSA38_stenMkIIs : CSA38_stenMkII {};
// End SMGs

// Machine Guns
    class CSA38_BRENMKII : CSA38_MGBASE {
        class FullAuto : Mode_FullAuto {
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",3,1,10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound : BaseSoundModeType {
                begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_01",1.58489,1,300};
                begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_02",1.58489,1,300};
                begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_03",1.58489,1,300};
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4",0.353973,1,3};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.353973,1,3};
                soundBegin[] = {"begin1",0.34,"begin2",0.34,"begin3",0.32};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
        };
        class Single : Mode_SemiAuto {
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",3,1,10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound : BaseSoundModeType {
                begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_01",1.58489,1,300};
                begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_02",1.58489,1,300};
                begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_03",1.58489,1,300};
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4",0.353973,1,3};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.353973,1,3};
                soundBegin[] = {"begin1",0.34,"begin2",0.34,"begin3",0.32};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
        };
        class AI_Burst1 : Mode_Burst {
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",3,1,10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound : BaseSoundModeType {
                begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_01",1.58489,1,300};
                begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_02",1.58489,1,300};
                begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_03",1.58489,1,300};
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4",0.353973,1,3};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.353973,1,3};
                soundBegin[] = {"begin1",0.34,"begin2",0.34,"begin3",0.32};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
        };
    };

    class CSA38_BRENMKII2 : CSA38_BRENMKII {};

    class CSA38_BRENMKI : CSA38_BRENMKII {};

    class CSA38_BRENMKI2 : CSA38_BRENMKII {};

    class CSA38_TKVZ24 : CSA38_MGBASE {
        class FullAuto : Mode_FullAuto {};
    };

    class CSA38_TKVZ37 : CSA38_MGBASE {
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 1, 1, 15};
                closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 1, 1, 15};
                soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
                weaponSoundEffect = "CSA38_Rifle";
            };
            class StandardSound : BaseSoundModeType {
                soundSetShot[] = {"CSA38_TKVZ37_Shot_SoundSet", "Mk200_Tail_SoundSet", "Mk200_InteriorTail_SoundSet"};
                begin1[] = {"\CSA38II_sounds\w_tkvz37\fire.ogg", 1.77828, 1, 1200};
                soundBegin[] = {"begin1", 1};
            };
        };
        class FastAuto : FullAuto {};
    };

    class CSA38_zb26 : CSA38_MGBASE {
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
        class Single : Mode_SemiAuto {
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
    };

    class CSA38_MG30 : CSA38_MGBASE {
        class FullAuto : Mode_FullAuto {};
        class Single : Mode_SemiAuto {};
    };

    class CSA38_31m : CSA38_MG30 {};

    class CSA38_MG34 : CSA38_MGBASE {
        class FullAuto : Mode_FullAuto {
            class BaseSoundModeType;
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
        class Single : Mode_SemiAuto {
            class BaseSoundModeType;
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
// End Machine Guns

// Other Weapons, Tripods, Launchers
    class csa38_m36hlaven; /* : Launcher_Base_F {};
    };*/

    class csa38_brentripod2 : csa38_m36hlaven {};

    class CSA38_mg34tripod2 : csa38_m36hlaven {};

    class CSA38_TKVZ24tripod : csa38_m36hlaven {};

    class CSA38_TKVZ37tripod : csa38_m36hlaven {};
// End Other Weapons, Tripods, Launchers

// Vehicle Weapons
    class csa38_Brenmg : CSA38_LMGA3_base {};

    class csa38_MG34MG : CSA38_HMGA3_base {
        class manual : CSA38_HMGA3_base {
            class BaseSoundModeType;
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
        class Single : Mode_SemiAuto {
            class BaseSoundModeType;
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

    class CSA38_TKVZ24mg : CSA38_HMGA3_base {};

    class CSA38_ZB53mg : CSA38_HMGA3_base {};
// End Vehicle Weapons
