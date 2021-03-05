
class Rifle_Long_Base_F;

class CSA38_MGBASE : Rifle_Long_Base_F {
    class WeaponSlotsInfo;
};

class CSA38_MG34 : CSA38_MGBASE {
    displayName = "MG34";
    descriptionShort = "Maschinengewehr 34";
    discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
    discreteDistanceInitIndex = 1;
    dispersion = MOA_TO_RAD(4);
    fow_burstLenght = 5;
    magazines[] = {"CSA38_7_92_30xMauserMG","CSA38_7_92_30xMauserMGAP"};
    magazineWell[] = {"CBA_792x57_LINKS"};
    recoil = "recoil_2PzD_mmg_1";
    ace_overheating_allowSwapBarrel = 1;
    class Eventhandlers {
        class fow_mgRoF {
            fired = "_this spawn fow_main_fnc_mgRoF;";
        };
    };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 266.8;
        class CowsSlot {
            compatibleItems[] = {};
        };
        class MuzzleSlot {
            compatibleItems[] = {};
        };
        class PointerSlot {
            compatibleItems[] = {};
        };
    };
    class FullAuto : Mode_FullAuto {
        dispersion = MOA_TO_RAD(4);
        reloadTime = RPM_TO_TIME(850);
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
        dispersion = MOA_TO_RAD(4);
        reloadTime = RPM_TO_TIME(850);
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

class csa38_m36hlaven;

class CSA38_mg34tripod2 : csa38_m36hlaven {
    displayName = "Lafette Tripod";
    descriptionShort = "Lafette Tripod for the MG34 and MG42";
    class WeaponSlotsInfo {
        mass = 440.925;
    };
};
