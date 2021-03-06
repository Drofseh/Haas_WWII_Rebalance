
class CSA38_HMGA3_base;

class csa38_MG34MG : CSA38_HMGA3_base {
    displayName = "MG34 Lafette";
    descriptionShort = "Maschinengewehr 34 on Lafette Tripod";
    discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
    discreteDistanceInitIndex = 1;
    dispersion = MOA_TO_RAD(4);
    fow_burstLenght = 6;
    magazines[] = {"CSA38_MG34mg","CSA38_MG34mg2","CSA38_MG34mg3","CSA38_MG34mg4","CSA38_MG34mgAP","CSA38_MG34mg2AP","CSA38_MG34mg3AP","CSA38_MG34mg4AP","lib_250Rnd_792x57","lib_250Rnd_792x57_sS","lib_250Rnd_792x57_SmK","LIB_50Rnd_792x57_Veh","LIB_100Rnd_792x57","LIB_50Rnd_792x57","lib_50Rnd_792x57_SmK","lib_50Rnd_792x57_sS"};
    magazineWell[] = {"CBA_792x57_LINKS"};
    recoil = "recoil_2PzD_mmg_1";
    ZOOM_NAKED_EYE;
    class Eventhandlers {
        class fow_mgRoF {
            fired = "_this spawn fow_main_fnc_mgRoFStatic;";
        };
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(4);
        reloadTime = RPM_TO_TIME(850); // 850 rpm
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
    class manual : CSA38_HMGA3_base {
        dispersion = MOA_TO_RAD(4);
        reloadTime = RPM_TO_TIME(850); // 850 rpm
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
