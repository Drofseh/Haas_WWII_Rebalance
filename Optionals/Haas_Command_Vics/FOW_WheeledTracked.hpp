class fow_v_sdkfz_251_camo_ger_heer;

class fow_v_sdkfz_251_camo_ger_heer_Com : fow_v_sdkfz_251_camo_ger_heer {
    displayName = "Sd.Kfz. 251/3 Funkpanzerwagen";

    class AcreRacks {
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver", {"cargo", 0}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
        class Rack_2 {
            displayName = "Command Radio";
            shortName = "Cmnd";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"cargo", 0}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};
