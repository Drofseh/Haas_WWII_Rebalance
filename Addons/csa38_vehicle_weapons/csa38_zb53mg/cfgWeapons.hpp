
class CSA38_HMGA3_base;

class CSA38_ZB53mg : CSA38_HMGA3_base {
    displayName = "vz. 37";
    descriptionShort = "vz. 37, known as the MG 37(t) in Wehrmacht service";
    dispersion = MOA_TO_RAD(4);
    fow_burstLenght = 3;
    magazines[] = {"CSA38_ZB53mg2","CSA38_ZB53mg","CSA38_ZB53mg4","CSA38_ZB53mg3","CSA38_ZB53mg6","CSA38_ZB53mg5","CSA38_ZB53mg2G","CSA38_ZB53mgG","CSA38_ZB53mg4G","CSA38_ZB53mg3G","CSA38_ZB53mg6G","CSA38_ZB53mg5G"};
    magazineWell[] = {"CBA_792x57_ZB53"};
    modes[] = {"manual","manual2","close","short","medium","far"};
    recoil = "recoil_2PzD_mmg_1";
    class Eventhandlers {
        class fow_mgRoF {
            fired = "_this spawn fow_main_fnc_mgRoFStatic;";
        };
    };
    class manual : CSA38_HMGA3_base {
        dispersion = MOA_TO_RAD(4);
        reloadTime = RPM_TO_TIME(750); // 750  rpm
        textureType = "fastAuto";
    };
    class manual2 : manual {
        reloadTime = RPM_TO_TIME(500) ; // 500  rpm
        textureType = "fullAuto";
    };
};
