
    class LIB_ArmouredCar_base;

    class LIB_Boat_base;

    class LIB_Car_base : Car_F {
        maximumLoad = 1500;
        class Turrets;
    };

    class LIB_Plane_base;

    class LIB_Tank_base : Tank_F {
        maximumLoad = 5000;
    };

    class LIB_Truck_base : Truck_F {
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class LIB_US_Plane_base;

    class LIB_WheeledTracked_APC_base : LIB_Truck_base {
        class Turrets : Turrets {
            class MainTurret;
        };
        class UserActions;
    };

    class LIB_C47_Skytrain : LIB_US_Plane_base {
        maximumLoad = 10000;
    };

    class LIB_CG4_WACO : LIB_US_Plane_base {
        maximumLoad = 1000;
    };

    class LIB_GazM1_base : LIB_Car_base {
        maximumLoad = 4000;
    };

    class LIB_Halftrack_base : LIB_WheeledTracked_APC_base {
        maximumLoad = 10000;
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                maxHorizontalRotSpeed = 0.5;
                maxVerticalRotSpeed = 2;
            };
        };
    };

    class LIB_HORSA : LIB_US_Plane_base {
        maximumLoad = 2000;
    };

    class LIB_Kfz1_base : LIB_Car_base {
        maximumLoad = 1500;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class LIB_Kfz1 : LIB_Kfz1_base {
        maximumLoad = 2000;
    };

    class LIB_Kfz1_MG42 : LIB_Kfz1_base {
        maximumLoad = 1500;
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                maxHorizontalRotSpeed = 2;
                maxVerticalRotSpeed = 2;
            };
        };
    };

    class LIB_LCI : LIB_Boat_base {
        maximumLoad = 100000;
    };

    class LIB_LCVP : LIB_Boat_base {
        maximumLoad = 9000;
    };

    class LIB_M8_Greyhound_base : LIB_ArmouredCar_base {
        maximumLoad = 3000;
    };

    class LIB_opelblitz_base;

    class LIB_opelblitz_open_y_camo : LIB_opelblitz_base {
        maximumLoad = 30000;
    };

    class LIB_OpelBlitz_Ambulance : LIB_opelblitz_base {
        maximumLoad = 10000;
    };

    class LIB_opelblitz_fuel : LIB_opelblitz_base {
        maximumLoad = 2000;
    };

    class LIB_opelblitz_parm : LIB_opelblitz_base {
        maximumLoad = 2000;
    };

    class LIB_Scout_M3_base : LIB_Truck_base {
        maximumLoad = 5000;
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                maxHorizontalRotSpeed = 2;
                maxVerticalRotSpeed = 2;
            };
        };
    };

    class LIB_SdKfz_7_base;

    class LIB_SdKfz_7 : LIB_SdKfz_7_base {
        maximumLoad = 40000;
    };

    class LIB_SdKfz_7_AA_base : LIB_SdKfz_7_base {
        maximumLoad = 1000;
    };

    class LIB_SdKfz222_base : LIB_ArmouredCar_base  {
        maximumLoad = 3000;
    };

    class LIB_SdKfz234_base : LIB_ArmouredCar_base  {
        maximumLoad = 3000;
    };

    class LIB_SdKfz251_base : LIB_WheeledTracked_APC_base {
        maximumLoad = 10000;
        class UserActions : UserActions {
            class hatches_open {
                condition = " \
                    Alive(this) AND \
                    {this animationPhase ""hatch_rotate"" < 0.5 AND \
                    {((call ww2_fnc_findPlayer) == driver this) OR \
                    {([vehicle (call ww2_fnc_findPlayer), (call ww2_fnc_findPlayer)] call Haas_WWII_Rebalance_fnc_checkVehiclePosition) == ""cargo_4"" \
                    }}} \
                ";
                displayName = "Open Driver's Hatch";
                onlyForplayer = 0;
                position = "zamerny";
                radius = 1;
                showWindow = 0;
                statement = "this animate [""hatch_rotate"",1]";
            };
            class hatches_close : hatches_open {
                condition = " \
                    Alive(this) AND \
                    {this animationPhase ""hatch_rotate"" > 0.5 AND \
                    {((call ww2_fnc_findPlayer) == driver this) OR \
                    {([vehicle (call ww2_fnc_findPlayer), (call ww2_fnc_findPlayer)] call Haas_WWII_Rebalance_fnc_checkVehiclePosition) == ""cargo_4"" \
                    }}} \
                ";
                displayName = "Close Driver's Hatch";
                statement = "this animate [""hatch_rotate"",0]";
            };
            class hatchesCommander_open : hatches_open {
                condition = " \
                    Alive(this) AND \
                    {this animationPhase ""hatch2_rotate"" < 0.5 AND \
                    {((call ww2_fnc_findPlayer) == driver this) OR \
                    {([vehicle (call ww2_fnc_findPlayer), (call ww2_fnc_findPlayer)] call Haas_WWII_Rebalance_fnc_checkVehiclePosition) == ""cargo_4"" \
                    }}} \
                ";
                displayName = "Open Commander's Hatch";
                statement = "this animate [""hatch2_rotate"",1]";
            };
            class hatchesCommander_close : hatches_open {
                condition = " \
                    Alive(this) AND \
                    {this animationPhase ""hatch2_rotate"" > 0.5 AND \
                    {((call ww2_fnc_findPlayer) == driver this) OR \
                    {([vehicle (call ww2_fnc_findPlayer), (call ww2_fnc_findPlayer)] call Haas_WWII_Rebalance_fnc_checkVehiclePosition) == ""cargo_4"" \
                    }}} \
                ";
                displayName = "Close Commander's Hatch";
                statement = "this animate [""hatch2_rotate"",0]";
            };
            class Doors_open {
                displayName = "Open Doors";
            };
            class Doors_close : Doors_open {
                displayName = "Close Doors";
            };
        };
    };

    class LIB_SdKfz251_FFV_base : LIB_SdKfz251_base {
        class UserActions : UserActions {
            class hatches_open {
                condition = " \
                    Alive(this) AND \
                    {this animationPhase ""hatch_rotate"" < 0.5 AND \
                    {((call ww2_fnc_findPlayer) == driver this) OR \
                    {([vehicle (call ww2_fnc_findPlayer), (call ww2_fnc_findPlayer)] call Haas_WWII_Rebalance_fnc_checkVehiclePosition) == ""cargo_3"" \
                    }}} \
                ";
                displayName = "Open Driver's Hatch";
                onlyForplayer = 0;
                position = "zamerny";
                radius = 1;
                showWindow = 0;
                statement = "this animate [""hatch_rotate"",1]";
            };
            class hatches_close : hatches_open {
                condition = " \
                    Alive(this) AND \
                    {this animationPhase ""hatch_rotate"" > 0.5 AND \
                    {((call ww2_fnc_findPlayer) == driver this) OR \
                    {([vehicle (call ww2_fnc_findPlayer), (call ww2_fnc_findPlayer)] call Haas_WWII_Rebalance_fnc_checkVehiclePosition) == ""cargo_3"" \
                    }}} \
                ";
                displayName = "Close Driver's Hatch";
                statement = "this animate [""hatch_rotate"",0]";
            };
            class hatchesCommander_open : hatches_open {
                condition = " \
                    Alive(this) AND \
                    {this animationPhase ""hatch2_rotate"" < 0.5 AND \
                    {((call ww2_fnc_findPlayer) == driver this) OR \
                    {([vehicle (call ww2_fnc_findPlayer), (call ww2_fnc_findPlayer)] call Haas_WWII_Rebalance_fnc_checkVehiclePosition) == ""cargo_3"" \
                    }}} \
                ";
                displayName = "Open Commander's Hatch";
                statement = "this animate [""hatch2_rotate"",1]";
            };
            class hatchesCommander_close : hatches_open {
                condition = " \
                    Alive(this) AND \
                    {this animationPhase ""hatch2_rotate"" > 0.5 AND \
                    {((call ww2_fnc_findPlayer) == driver this) OR \
                    {([vehicle (call ww2_fnc_findPlayer), (call ww2_fnc_findPlayer)] call Haas_WWII_Rebalance_fnc_checkVehiclePosition) == ""cargo_3"" \
                    }}} \
                ";
                displayName = "Close Commander's Hatch";
                statement = "this animate [""hatch2_rotate"",0]";
            };
        };
    };
/*
    class LIB_SdKfz251 : LIB_SdKfz251_base {
        maximumLoad = 10000;
    };
*/
    class LIB_zis5v_base;

    class LIB_Zis5v : LIB_zis5v_base {
        maximumLoad = 30000;
    };

    class LIB_Zis5v_Med : LIB_zis5v_base {
        maximumLoad = 5000;
    };

    class LIB_zis5v_fuel : LIB_zis5v_base {
        maximumLoad = 2000;
    };

    class LIB_zis6_parm : LIB_zis5v_base {
        maximumLoad = 2000;
    };

    class LIB_US6_base;

    class LIB_US6_BM13 : LIB_US6_base {
        maximumLoad = 2000;
    };

    class LIB_US6_Unarmed_base;

    class LIB_US6_Tent_Cargo : LIB_US6_Unarmed_base {
        maximumLoad = 30000;
    };

    class LIB_US6_Open_Cargo : LIB_US6_Tent_Cargo {
        maximumLoad = 30000;
    };

    class LIB_US6_Ammo : LIB_US6_Open_Cargo {
        maximumLoad = 30000;
    };

    class LIB_US6_Open : LIB_US6_Unarmed_base {
        maximumLoad = 30000;
    };

    class LIB_US6_Tent : LIB_US6_Unarmed_base {
        maximumLoad = 30000;
    };

    class LIB_US_GMC_Base;

    class LIB_US_GMC_Ambulance : LIB_US_GMC_Base {
        maximumLoad = 5000;
    };

    class LIB_US_GMC_Ammo : LIB_US_GMC_Base {
        maximumLoad = 30000;
    };

    class LIB_US_GMC_Fuel : LIB_US_GMC_Base {
        maximumLoad = 2000;
    };

    class LIB_US_GMC_Open : LIB_US_GMC_Base {
        maximumLoad = 30000;
    };

    class LIB_US_GMC_Parm : LIB_US_GMC_Base {
        maximumLoad = 2000;
    };

    class LIB_US_GMC_Tent : LIB_US_GMC_Open {
        maximumLoad = 30000;
    };

    class LIB_Willys_MB_base : LIB_Car_base {
        maximumLoad = 2000;
    };

    class LIB_AustinK5_base: LIB_Truck_base {
        maximumLoad = 30000;
    };
    class LIB_AustinK5_Ammo: LIB_AustinK5_base {
        maximumLoad = 30000;
    };

    class LIB_UniversalCarrier_base: LIB_Tank_base {
        maximumLoad = 4000;
    };