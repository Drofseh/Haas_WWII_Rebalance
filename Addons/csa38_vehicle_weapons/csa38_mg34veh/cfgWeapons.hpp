
class CSA38_HMGA3_base;

class CSA38_MG34mgveh : CSA38_HMGA3_base {
    displayName = "MG34";
    descriptionShort = "Maschinengewehr 34";
    discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
    discreteDistanceInitIndex = 1;
    dispersion = MOA_TO_RAD(4);
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
