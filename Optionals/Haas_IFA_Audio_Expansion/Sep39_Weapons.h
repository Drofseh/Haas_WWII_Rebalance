
    class w39_Pistol;

    class W39_Rifle_Long_Base_F;

    class w39_SMG;

    class W39_MGBASE;

    class w39_LMGA3_base;

    class w39_HMGA3_base;

// Pistols
    class w39_vis : w39_Pistol {
        class Single : Mode_SemiAuto {
            dispersion = MOA_TO_RAD(15);
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
// End Pistols

// Rifles
    class w39_wz29 : Rifle_Base_F {
        class Single : Mode_SemiAuto {
            aiDispersionCoefX = 2;
            aiDispersionCoefY = 3;
            dispersion = MOA_TO_RAD(3);
            class BaseSoundModeType;
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

    class w39_wz91_98_23 : LIB_M9130 {};

    class w39_wz91_98_23_Bayonet : LIB_M9130_Bayonet {};

    class w39_urwz35 : w39_wz29 {
        class Single : Mode_SemiAuto {
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"GM6Lynx_Shot_SoundSet","GM6Lynx_Tail_SoundSet","GM6Lynx_InteriorTail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };

    class w39_wz38m : W39_Rifle_Long_Base_F {
        class Single : Mode_SemiAuto {
            class BaseSoundModeType;
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
// End Rifles

// SMGs
    class w39_mors : w39_SMG {
        class FullAuto : Mode_FullAuto {
            class BaseSoundModeType;
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
            class BaseSoundModeType;
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
// End SMGs

// Machine Guns
    class w39_wz28 : W39_MGBASE {
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
// End Machine Guns

// Other Weapons, Tripods, Launchers
// End Other Weapons, Tripods, Launchers

// Vehicle Weapons
    class w39_CKMwz25mg : w39_LMGA3_base {
        displayName = "CKM wz.25";
        class manual : w39_LMGA3_base {
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(480); // 480 rpm
        };
    };
/*
    class w39_ckmwz25veh : w39_CKMwz25mg {
        scope = 1;
        displayName = "CKM wz.25";
        nameSound = "mgun";
        aiDispersionCoefX = 21;
        aiDispersionCoefY = 21;
        magazines[] = {"w39_7_92_30xMauserS", "w39_7_92_30xMauserP"};
        canLock = 1;
        cursor = "EmptyCursor";
        cursoraim = "mg";
        showAimCursorInternal = 1;
    };
/*
// End Vehicle Weapons
