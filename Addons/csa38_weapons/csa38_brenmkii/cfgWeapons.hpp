
class CSA38_MGBASE;

class CSA38_BRENMKII : CSA38_MGBASE {
    displayName = "Bren Gun Mk II";
    descriptionShort = "BREN L.M.G. Mk II";
    dispersion = MOA_TO_RAD(3);
    fow_burstLenght = 3;
    magazines[] = {"CSA38_7_7_30x56R"};
    magazineWell[] = {"CBA_303B_BREN"};
    recoil = "recoil_2PzD_mmg_1";
    reloadAction = "LIB_GestureReload_Bren";
    ace_overheating_allowSwapBarrel = 1;
    class Eventhandlers {
        class fow_mgRoF {
            fired = "_this spawn fow_main_fnc_mgRoF;";
        };
    };
    class WeaponSlotsInfo {
        mass = 228.309;
    };
    class FullAuto : Mode_FullAuto {
        dispersion = MOA_TO_RAD(3);
        reloadTime = RPM_TO_TIME(510);
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
        dispersion = MOA_TO_RAD(3);
        reloadTime = RPM_TO_TIME(510);
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

class CSA38_BRENMKII2 : CSA38_BRENMKII {
    displayName = "Bren Gun Mk II";
    descriptionShort = "BREN L.M.G. Mk II";
    magazines[] = {"CSA38_7_7_100x56R"};
    scope = 1;
};

class CSA38_BRENMKI : CSA38_BRENMKII {
    displayName = "Bren Gun Mk I";
    descriptionShort = "BREN L.M.G. Mk II";
    magazines[] = {"CSA38_7_7_30x56R"};
};

class CSA38_BRENMKI2 : CSA38_BRENMKII {
    displayName = "Bren Gun Mk I";
    descriptionShort = "BREN L.M.G. Mk II";
    magazines[] = {"CSA38_7_7_100x56R"};
    scope = 1;
};

class csa38_m36hlaven;

class csa38_brentripod2 : csa38_m36hlaven {
    displayName = "Bren Gun Tripod";
    descriptionShort = "Tripod for the Bren gun";
    class WeaponSlotsInfo {
        mass = 120.202;
    };
};
