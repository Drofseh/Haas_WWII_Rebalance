class LIB_SdKfz251;

class LIB_SdKfz251_Com : LIB_SdKfz251 {
    displayName = "Sd.Kfz. 251/3 Funkpanzerwagen";

    class AcreRacks {
        class Rack_1 {
            displayName = "Vehicle Radio";
            shortName = "Rack";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver", {"cargo", 4}};
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
            allowedPositions[] = {{"cargo", 4}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};