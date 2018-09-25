
class fow_v_cromwell_uk;
class fow_v_m4a2_usa;
class fow_v_m4a2_usmc;
class fow_v_m5a1_usa;
class fow_v_m5a1_usmc;
class fow_v_panther_ger_heer;

class fow_v_cromwell_uk_com : fow_v_cromwell_uk {
    displayName = "Cromwell (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Able";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,2}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class fow_v_m4a2_usa_com : fow_v_m4a2_usa {
    displayName = "M4A2 Medium Tank (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Able";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class fow_v_m4a2_usmc_com : fow_v_m4a2_usmc {
    displayName = "M4A2 Medium Tank (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Able";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class fow_v_m5a1_usa_com : fow_v_m5a1_usa {
    displayName = "M5A1 Stuart (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Able";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class fow_v_m5a1_usmc_com : fow_v_m5a1_usmc {
    displayName = "M5A1 Stuart (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Able";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class fow_v_panther_ger_heer_com : fow_v_panther_ger_heer {
    displayName = "Sd.Kfz. 267 PzBefWg VI Panther";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Anton";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Bruno";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};
