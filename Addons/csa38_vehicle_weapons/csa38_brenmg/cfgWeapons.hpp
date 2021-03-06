
class CSA38_LMGA3_base;

class csa38_Brenmg : CSA38_LMGA3_base {
    displayName = "Bren Gun Mk II";
    descriptionShort = "BREN L.M.G. Mk II";
    dispersion = MOA_TO_RAD(3);
    reloadTime = RPM_TO_TIME(510); // 510 rpm
    fow_burstLenght = 6;
    class Eventhandlers {
        class fow_mgRoF {
            fired = "_this spawn fow_main_fnc_mgRoFStatic;";
        };
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(3);
        reloadTime = RPM_TO_TIME(510); // 510 rpm
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
    class manual : CSA38_LMGA3_base {
        dispersion = MOA_TO_RAD(3);
        reloadTime = RPM_TO_TIME(510); // 510 rpm
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
