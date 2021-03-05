
class csa38_SMG;

class csa38_mas38 : csa38_SMG {
    displayname = "MAS 38";
    descriptionShort = "MAS 38, known as the MP722(f) in Wehrmacht service";
    fow_burstLenght = 2;
    magazines[] = {"CSA38_mas38mag"};
    magazineWell[] = {"CBA_765x20mmLongue_MAS38"};
    recoil = "recoil_2PzD_smg_light";
    class Eventhandlers {
        class fow_mgRoF {
            fired = "_this spawn fow_main_fnc_mgRoF;";
        };
    };
    class WeaponSlotsInfo {
        mass = 63.31;
    };
    class FullAuto : Mode_FullAuto {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(640);
    };
    class AI_Burst1 : Mode_Burst {
        dispersion = MOA_TO_RAD(8);
        reloadTime = RPM_TO_TIME(640);
    };
};
