
class CSA38_HMGA3_base;

class CSA38_TKVZ24mg : CSA38_HMGA3_base {
    displayName = "vz. 7/24";
    descriptionShort = "Schwarzlose-Janeček vz. 7/24";
    dispersion = MOA_TO_RAD(4);
    fow_burstLenght = 3;
    magazines[] = {"CSA38_TKVZ24mag2","CSA38_TKVZ24mag"};
    magazineWell[] = {"CBA_792x57_vz7_24"};
    recoil = "recoil_2PzD_mmg_1";
    class Eventhandlers {
        class fow_mgRoF {
            fired = "_this spawn fow_main_fnc_mgRoFStatic;";
        };
    };
    class manual : CSA38_HMGA3_base {
        dispersion = MOA_TO_RAD(4);
        reloadTime = RPM_TO_TIME(400); // 400 rpm
    };
};
