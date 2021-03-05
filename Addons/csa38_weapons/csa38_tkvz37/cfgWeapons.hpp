
class Rifle_Long_Base_F;

class CSA38_MGBASE : Rifle_Long_Base_F {
    class WeaponSlotsInfo;
};

class CSA38_TKVZ37 : CSA38_MGBASE {
    displayName = "vz. 37";
    descriptionShort = "vz. 37, known as the MG 37(t) in Wehrmacht service";
    dispersion = MOA_TO_RAD(4);
    fow_burstLenght = 3;
    magazines[] = {"CSA38_ZB53mg5", "CSA38_ZB53mg6"};
    magazineWell[] = {"CBA_792x57_ZB53"};
    modes[] = {"FullAuto","FastAuto","close","short","medium","far"};
    recoil = "recoil_2PzD_mmg_1";
    class Eventhandlers {
        class fow_mgRoF {
            fired = "_this spawn fow_main_fnc_mgRoF;";
        };
    };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 418.88;
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
        reloadTime = RPM_TO_TIME(500);
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
    class FastAuto : FullAuto {
        reloadTime = RPM_TO_TIME(750);
        textureType = "fastAuto";
    };
};

class csa38_m36hlaven;

class CSA38_TKVZ37tripod : csa38_m36hlaven {
    displayName = "vz. 37 Tripod";
    descriptionShort = "Tripod for vz. 37";
    class WeaponSlotsInfo {
        mass = 385.81;
    };
};
