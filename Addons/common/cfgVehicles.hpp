
class Land;

class Man : Land {
    class UserActions;
};

class FloatingStructure_F;

class ThingX;

class TargetBase;

class Land_Camping_Light_F : FloatingStructure_F {
    class MarkerLights {
        class Light_1 {
            color[] = {1,0.6,0.4};
            intensity = 500;
        };
    };
};

class ReammoBox_F : ThingX {
    maximumLoad = 4000;
};
class CAManBase : Man {
    class UserActions : UserActions {
        delete CSA38_lp08son;
        delete CSA38_lp08off;
        delete CSA38_p08son;
        delete CSA38_p08off;
        delete csa38_kpvz38;
        delete csa38_kpvz38P;
        delete CSA38_czvz27son;
        delete CSA38_czvz27soff;
        delete csa38_brenkonverson;
        delete csa38_brenkonversoff;
        delete CSA38_zada;
        /*
        class csa38_brenbednaon {
            displayName = "Place Ammobox";
        };
        class csa38_brenbednaoff {
            displayName = "Pick Up Ammobox";
        };
        class csa38_brenbednaon2 {
            displayName = "Place Ammobox";
        };
        class csa38_brenbednaoff2 {
            displayName = "Pick Up Ammobox";
        };
        class csa38_lk26bednaon2 {
            displayName = "Place Ammobox";
        };
        class csa38_lk26bednaoff2 {
            displayName = "Pick Up Ammobox";
        };
        class csa38_tkvz24faze1on {
            displayName = "Place Tripod";
        };
        class csa38_tkvz24faze1off {
            displayName = "Pick Up Tripod";
        };
        class csa38_tkvz24faze2on {
            displayName = "Mount Gun On Tripod";
        };
        class CSA38_Grenadelauncher1 {
            displayName = "Attach Grenade Launcher";
        };
        class CSA38_Grenadelauncher2 {
            displayName = "Detach Grenade Launcher";
        };
        class CSA38_MP38operkaon {
            displayName = "Unfold Stock";
        };
        class CSA38_MP38operkaoff {
            displayName = "Fold Stock";
        };
        class CSA38_MP40operkaon {
            displayName = "Unfold Stock";
        };
        class CSA38_MP40operkaoff {
            displayName = "Fold Stock";
        };
        class csa38_m36faze1on {
            displayName = "Place The Mortar Tube";
        };
        class csa38_m36faze1off {
            displayName = "Pick Up The Mortar Tube";
        };
        class csa38_m36faze2on {
            displayName = "Attach The Mortar Base To The Mortar";
        };
        class csa38_m36faze2off {
            displayName = "Pick Up The Mortar Base";
        };
        class csa38_m36faze3on {
            displayName = "Complete Mortar";
        };
        class csa38_brenfaze1on {
            displayName = "Place Tripod";
        };
        class csa38_brenfaze1off {
            displayName = "Pick Up Tripod";
        };
        class csa38_brenfaze2on {
            displayName = "Mount Gun On Tripod";
        };
        class csa38_brenfaze2bon {
            displayName = "Mount Gun On Tripod";
        };
        class csa38_mg34faze1on {
            displayName = "Place tripod";
        };
        class csa38_mg34faze1off {
            displayName = "Pick Up tripod";
        };
        class csa38_MG34faze1c {
            displayName = "Create static pos 3";
        };
        class csa38_MG34faze2on {
            displayName = "Mount Gun On Tripod";
        };
        class csa38_MG34faze1a {
            displayName = "Create static pos";
        };
        class csa38_MG34faze1b {
            displayName = "Create static pos 2";
        };
        */
    };
};

class LIB_Target_base : TargetBase { // ["LIB_Target_base","TargetBase","Static","All"]
    class EventHandlers {
        hit = "['hit', _this] call BIS_fnc_target;";
        hitPart = "['hitPart', _this] call BIS_fnc_target;";
    };
};
