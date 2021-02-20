
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
                    alive this && \
                    {this animationPhase ""hatch_rotate"" < 0.5 && \
                    {((call ww2_fnc_findPlayer) == driver this) || \
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
                    alive this && \
                    {this animationPhase ""hatch_rotate"" > 0.5 && \
                    {((call ww2_fnc_findPlayer) == driver this) || \
                    {([vehicle (call ww2_fnc_findPlayer), (call ww2_fnc_findPlayer)] call Haas_WWII_Rebalance_fnc_checkVehiclePosition) == ""cargo_4"" \
                    }}} \
                ";
                displayName = "Close Driver's Hatch";
                statement = "this animate [""hatch_rotate"",0]";
            };
            class hatchesCommander_open : hatches_open {
                condition = " \
                    alive this && \
                    {this animationPhase ""hatch2_rotate"" < 0.5 && \
                    {((call ww2_fnc_findPlayer) == driver this) || \
                    {([vehicle (call ww2_fnc_findPlayer), (call ww2_fnc_findPlayer)] call Haas_WWII_Rebalance_fnc_checkVehiclePosition) == ""cargo_4"" \
                    }}} \
                ";
                displayName = "Open Commander's Hatch";
                statement = "this animate [""hatch2_rotate"",1]";
            };
            class hatchesCommander_close : hatches_open {
                condition = " \
                    alive this && \
                    {this animationPhase ""hatch2_rotate"" > 0.5 && \
                    {((call ww2_fnc_findPlayer) == driver this) || \
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
                    alive this && \
                    {this animationPhase ""hatch_rotate"" < 0.5 && \
                    {((call ww2_fnc_findPlayer) == driver this) || \
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
                    alive this && \
                    {this animationPhase ""hatch_rotate"" > 0.5 && \
                    {((call ww2_fnc_findPlayer) == driver this) || \
                    {([vehicle (call ww2_fnc_findPlayer), (call ww2_fnc_findPlayer)] call Haas_WWII_Rebalance_fnc_checkVehiclePosition) == ""cargo_3"" \
                    }}} \
                ";
                displayName = "Close Driver's Hatch";
                statement = "this animate [""hatch_rotate"",0]";
            };
            class hatchesCommander_open : hatches_open {
                condition = " \
                    alive this && \
                    {this animationPhase ""hatch2_rotate"" < 0.5 && \
                    {((call ww2_fnc_findPlayer) == driver this) || \
                    {([vehicle (call ww2_fnc_findPlayer), (call ww2_fnc_findPlayer)] call Haas_WWII_Rebalance_fnc_checkVehiclePosition) == ""cargo_3"" \
                    }}} \
                ";
                displayName = "Open Commander's Hatch";
                statement = "this animate [""hatch2_rotate"",1]";
            };
            class hatchesCommander_close : hatches_open {
                condition = " \
                    alive this && \
                    {this animationPhase ""hatch2_rotate"" > 0.5 && \
                    {((call ww2_fnc_findPlayer) == driver this) || \
                    {([vehicle (call ww2_fnc_findPlayer), (call ww2_fnc_findPlayer)] call Haas_WWII_Rebalance_fnc_checkVehiclePosition) == ""cargo_3"" \
                    }}} \
                ";
                displayName = "Close Commander's Hatch";
                statement = "this animate [""hatch2_rotate"",0]";
            };
        };
    };

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

//Set all driverless vehicles to scope 1 as they do not work in multiplayer.
    class LIB_Churchill_Mk7;
    class LIB_Churchill_Mk7_desert;
    class LIB_Churchill_Mk7_w;
    class LIB_Churchill_Mk7_AVRE;
    class LIB_Churchill_Mk7_AVRE_w;
    class LIB_Churchill_Mk7_AVRE_desert;
    class LIB_Churchill_Mk7_Crocodile;
    class LIB_Churchill_Mk7_Crocodile_desert;
    class LIB_Churchill_Mk7_Crocodile_w;
    class LIB_Churchill_Mk7_Howitzer;
    class LIB_Churchill_Mk7_Howitzer_desert;
    class LIB_Churchill_Mk7_Howitzer_w;
    class LIB_Cromwell_Mk4;
    class LIB_Cromwell_Mk4_w;
    class LIB_Crusader_Mk1AA;
    class LIB_Crusader_Mk1AA_desert;
    class LIB_Crusader_Mk3;
    class LIB_Crusader_Mk3_desert;
    class LIB_DAK_M3_Halftrack;
    class LIB_DAK_PzKpfwIV_H;
    class LIB_DAK_PzKpfwVI_E;
    class LIB_DAK_Scout_M3;
    class LIB_DAK_SdKfz_7_AA;
    class LIB_DAK_SdKfz251;
    class LIB_FlakPanzerIV_Wirbelwind;
    class LIB_FlakPanzerIV_Wirbelwind_KOTH;
    class LIB_FlakPanzerIV_Wirbelwind_w;
    class LIB_JS2_43;
    class LIB_JS2_43_w;
    class LIB_Kfz1_MG42_camo;
    class LIB_Kfz1_MG42_sernyt;
    class LIB_M3A3_Stuart;
    class LIB_M4A2_SOV;
    class LIB_M4A2_SOV_w;
    class LIB_M4A3_75;
    class LIB_M4A3_75_Tubes;
    class LIB_M4A3_75_Tubes_w;
    class LIB_M4A3_75_w;
    class LIB_M4A3_76;
    class LIB_M4A3_76_HVSS;
    class LIB_M4A4_FIREFLY;
    class LIB_M5A1_Stuart;
    class LIB_M8_Greyhound;
    class LIB_PzKpfwIV_H;
    class LIB_PzKpfwIV_H_tarn51c;
    class LIB_PzKpfwIV_H_tarn51d;
    class LIB_PzKpfwIV_H_w;
    class LIB_PzKpfwV_no_lods;
    class LIB_PzKpfwV_w;
    class LIB_PzKpfwVI_B;
    class LIB_PzKpfwVI_B_camo;
    class LIB_PzKpfwVI_B_camo_w;
    class LIB_PzKpfwVI_B_tarn51c;
    class LIB_PzKpfwVI_B_tarn51d;
    class LIB_PzKpfwVI_B_w;
    class LIB_PzKpfwVI_E;
    class LIB_PzKpfwVI_E_1;
    class LIB_PzKpfwVI_E_2;
    class LIB_PzKpfwVI_E_tarn51c;
    class LIB_PzKpfwVI_E_tarn51d;
    class LIB_PzKpfwVI_E_tarn52c;
    class LIB_PzKpfwVI_E_tarn52d;
    class LIB_PzKpfwVI_E_w;
    class LIB_Scout_M3;
    class LIB_Scout_m3_w;
    class LIB_SdKfz_7_AA;
    class LIB_SdKfz_7_AA_KOTH;
    class LIB_SdKfz_7_AA_w;
    class LIB_SdKfz124;
    class LIB_SdKfz222;
    class LIB_SdKfz222_camo;
    class LIB_SdKfz222_gelbbraun;
    class LIB_SdKfz234_1;
    class LIB_SdKfz234_2;
    class LIB_SdKfz234_3;
    class LIB_SdKfz234_4;
    class LIB_SdKfz251;
    class LIB_SdKfz251_captured;
    class LIB_SdKfz251_captured_w;
    class LIB_Sdkfz251_w;
    class LIB_StuG_III_G;
    class LIB_StuG_III_G_w;
    class LIB_StuG_III_G_WS;
    class LIB_StuG_III_G_WS_w;
    class LIB_SU85;
    class LIB_SU85_w;
    class LIB_T34_76;
    class LIB_T34_76_w;
    class LIB_T34_85;
    class LIB_T34_85_w;
    class LIB_UK_DR_M3_Halftrack;
    class LIB_UK_DR_M4A3_75;
    class LIB_UK_DR_Willys_MB_M1919;
    class LIB_UK_Italy_M4A3_75;
    class LIB_UK_M3_Halftrack;
    class LIB_UK_Willys_MB_M1919;
    class LIB_UK_Willys_MB_M1919_w;
    class LIB_UniversalCarrier;
    class LIB_UniversalCarrier_desert;
    class LIB_UniversalCarrier_w;
    class LIB_US_M3_Halftrack;
    class LIB_US_M3_Halftrack_w;
    class LIB_US_NAC_M3_Halftrack;
    class LIB_US_NAC_M4A3_75;
    class LIB_US_NAC_Scout_M3;
    class LIB_US_NAC_Willys_MB_M1919;
    class LIB_US_Scout_M3;
    class LIB_US_Scout_m3_w;
    class LIB_US_Willys_MB_M1919;
    class LIB_US_Willys_MB_M1919_w;
    class LIB_Us6_bm13_w;
    class LIB_Zis5v_61K;

    class LIB_Churchill_Mk7_DLV : LIB_Churchill_Mk7 {
        scope = 1;
    };
    class LIB_Churchill_Mk7_desert_DLV : LIB_Churchill_Mk7_desert {
        scope = 1;
    };
    class LIB_Churchill_Mk7_w_DLV : LIB_Churchill_Mk7_w {
        scope = 1;
    };
    class LIB_Churchill_Mk7_AVRE_DLV : LIB_Churchill_Mk7_AVRE {
        scope = 1;
    };
    class LIB_Churchill_Mk7_AVRE_w_DLV : LIB_Churchill_Mk7_AVRE_w {
        scope = 1;
    };
    class LIB_Churchill_Mk7_AVRE_desert_DLV : LIB_Churchill_Mk7_AVRE_desert {
        scope = 1;
    };
    class LIB_Churchill_Mk7_Crocodile_DLV : LIB_Churchill_Mk7_Crocodile {
        scope = 1;
    };
    class LIB_Churchill_Mk7_Crocodile_desert_DLV : LIB_Churchill_Mk7_Crocodile_desert {
        scope = 1;
    };
    class LIB_Churchill_Mk7_Crocodile_w_DLV : LIB_Churchill_Mk7_Crocodile_w {
        scope = 1;
    };
    class LIB_Churchill_Mk7_Howitzer_DLV : LIB_Churchill_Mk7_Howitzer {
        scope = 1;
    };
    class LIB_Churchill_Mk7_Howitzer_desert_DLV : LIB_Churchill_Mk7_Howitzer_desert {
        scope = 1;
    };
    class LIB_Churchill_Mk7_Howitzer_w_DLV : LIB_Churchill_Mk7_Howitzer_w {
        scope = 1;
    };
    class LIB_Cromwell_Mk4_DLV : LIB_Cromwell_Mk4 {
        scope = 1;
    };
    class LIB_Cromwell_Mk4_w_DLV : LIB_Cromwell_Mk4_w {
        scope = 1;
    };
    class LIB_Crusader_Mk1AA_DLV : LIB_Crusader_Mk1AA {
        scope = 1;
    };
    class LIB_Crusader_Mk1AA_desert_DLV : LIB_Crusader_Mk1AA_desert {
        scope = 1;
    };
    class LIB_Crusader_Mk3_DLV : LIB_Crusader_Mk3 {
        scope = 1;
    };
    class LIB_Crusader_Mk3_desert_DLV : LIB_Crusader_Mk3_desert {
        scope = 1;
    };
    class LIB_DAK_M3_Halftrack_DLV : LIB_DAK_M3_Halftrack {
        scope = 1;
    };
    class LIB_DAK_PzKpfwIV_H_DLV : LIB_DAK_PzKpfwIV_H {
        scope = 1;
    };
    class LIB_DAK_PzKpfwVI_E_DLV : LIB_DAK_PzKpfwVI_E {
        scope = 1;
    };
    class LIB_DAK_Scout_M3_DLV : LIB_DAK_Scout_M3 {
        scope = 1;
    };
    class LIB_DAK_SdKfz_7_AA_DLV : LIB_DAK_SdKfz_7_AA {
        scope = 1;
    };
    class LIB_DAK_SdKfz251_DLV : LIB_DAK_SdKfz251 {
        scope = 1;
    };
    class LIB_FlakPanzerIV_Wirbelwind_DLV : LIB_FlakPanzerIV_Wirbelwind {
        scope = 1;
    };
    class LIB_FlakPanzerIV_Wirbelwind_KOTH_DLV : LIB_FlakPanzerIV_Wirbelwind_KOTH {
        scope = 1;
    };
    class LIB_FlakPanzerIV_Wirbelwind_w_DLV : LIB_FlakPanzerIV_Wirbelwind_w {
        scope = 1;
    };
    class LIB_JS2_43_DLV : LIB_JS2_43 {
        scope = 1;
    };
    class LIB_JS2_43_w_DLV : LIB_JS2_43_w {
        scope = 1;
    };
    class LIB_Kfz1_MG42_DLV : LIB_Kfz1_MG42 {
        scope = 1;
    };
    class LIB_Kfz1_MG42_camo_DLV : LIB_Kfz1_MG42_camo {
        scope = 1;
    };
    class LIB_Kfz1_MG42_sernyt_DLV : LIB_Kfz1_MG42_sernyt {
        scope = 1;
    };
    class LIB_M3A3_Stuart_DLV : LIB_M3A3_Stuart {
        scope = 1;
    };
    class LIB_M4A2_SOV_DLV : LIB_M4A2_SOV {
        scope = 1;
    };
    class LIB_M4A2_SOV_w_DLV : LIB_M4A2_SOV_w {
        scope = 1;
    };
    class LIB_M4A3_75_DLV : LIB_M4A3_75 {
        scope = 1;
    };
    class LIB_M4A3_75_Tubes_DLV : LIB_M4A3_75_Tubes {
        scope = 1;
    };
    class LIB_M4A3_75_Tubes_w_DLV : LIB_M4A3_75_Tubes_w {
        scope = 1;
    };
    class LIB_M4A3_75_w_DLV : LIB_M4A3_75_w {
        scope = 1;
    };
    class LIB_M4A3_76_DLV : LIB_M4A3_76 {
        scope = 1;
    };
    class LIB_M4A3_76_HVSS_DLV : LIB_M4A3_76_HVSS {
        scope = 1;
    };
    class LIB_M4A4_FIREFLY_DLV : LIB_M4A4_FIREFLY {
        scope = 1;
    };
    class LIB_M5A1_Stuart_DLV : LIB_M5A1_Stuart {
        scope = 1;
    };
    class LIB_M8_Greyhound_DLV : LIB_M8_Greyhound {
        scope = 1;
    };
    class LIB_PzKpfwIV_H_DLV : LIB_PzKpfwIV_H {
        scope = 1;
    };
    class LIB_PzKpfwIV_H_tarn51c_DLV : LIB_PzKpfwIV_H_tarn51c {
        scope = 1;
    };
    class LIB_PzKpfwIV_H_tarn51d_DLV : LIB_PzKpfwIV_H_tarn51d {
        scope = 1;
    };
    class LIB_PzKpfwIV_H_w_DLV : LIB_PzKpfwIV_H_w {
        scope = 1;
    };
    class LIB_PzKpfwV_no_lods_DLV : LIB_PzKpfwV_no_lods {
        scope = 1;
    };
    class LIB_PzKpfwV_w_DLV : LIB_PzKpfwV_w {
        scope = 1;
    };
    class LIB_PzKpfwVI_B_DLV : LIB_PzKpfwVI_B {
        scope = 1;
    };
    class LIB_PzKpfwVI_B_camo_DLV : LIB_PzKpfwVI_B_camo {
        scope = 1;
    };
    class LIB_PzKpfwVI_B_camo_w_DLV : LIB_PzKpfwVI_B_camo_w {
        scope = 1;
    };
    class LIB_PzKpfwVI_B_tarn51c_DLV : LIB_PzKpfwVI_B_tarn51c {
        scope = 1;
    };
    class LIB_PzKpfwVI_B_tarn51d_DLV : LIB_PzKpfwVI_B_tarn51d {
        scope = 1;
    };
    class LIB_PzKpfwVI_B_w_DLV : LIB_PzKpfwVI_B_w {
        scope = 1;
    };
    class LIB_PzKpfwVI_E_DLV : LIB_PzKpfwVI_E {
        scope = 1;
    };
    class LIB_PzKpfwVI_E_1_DLV : LIB_PzKpfwVI_E_1 {
        scope = 1;
    };
    class LIB_PzKpfwVI_E_2_DLV : LIB_PzKpfwVI_E_2 {
        scope = 1;
    };
    class LIB_PzKpfwVI_E_tarn51c_DLV : LIB_PzKpfwVI_E_tarn51c {
        scope = 1;
    };
    class LIB_PzKpfwVI_E_tarn51d_DLV : LIB_PzKpfwVI_E_tarn51d {
        scope = 1;
    };
    class LIB_PzKpfwVI_E_tarn52c_DLV : LIB_PzKpfwVI_E_tarn52c {
        scope = 1;
    };
    class LIB_PzKpfwVI_E_tarn52d_DLV : LIB_PzKpfwVI_E_tarn52d {
        scope = 1;
    };
    class LIB_PzKpfwVI_E_w_DLV : LIB_PzKpfwVI_E_w {
        scope = 1;
    };
    class LIB_Scout_M3_DLV : LIB_Scout_M3 {
        scope = 1;
    };
    class LIB_Scout_m3_w_DLV : LIB_Scout_m3_w {
        scope = 1;
    };
    class LIB_SdKfz_7_AA_DLV : LIB_SdKfz_7_AA {
        scope = 1;
    };
    class LIB_SdKfz_7_AA_KOTH_DLV : LIB_SdKfz_7_AA_KOTH {
        scope = 1;
    };
    class LIB_SdKfz_7_AA_w_DLV : LIB_SdKfz_7_AA_w {
        scope = 1;
    };
    class LIB_SdKfz124_DLV : LIB_SdKfz124 {
        scope = 1;
    };
    class LIB_SdKfz222_DLV : LIB_SdKfz222 {
        scope = 1;
    };
    class LIB_SdKfz222_camo_DLV : LIB_SdKfz222_camo {
        scope = 1;
    };
    class LIB_SdKfz222_gelbbraun_DLV : LIB_SdKfz222_gelbbraun {
        scope = 1;
    };
    class LIB_SdKfz234_1_DLV : LIB_SdKfz234_1 {
        scope = 1;
    };
    class LIB_SdKfz234_2_DLV : LIB_SdKfz234_2 {
        scope = 1;
    };
    class LIB_SdKfz234_3_DLV : LIB_SdKfz234_3 {
        scope = 1;
    };
    class LIB_SdKfz234_4_DLV : LIB_SdKfz234_4 {
        scope = 1;
    };
    class LIB_SdKfz251_DLV : LIB_SdKfz251 {
        scope = 1;
    };
    class LIB_SdKfz251_captured_DLV : LIB_SdKfz251_captured {
        scope = 1;
    };
    class LIB_SdKfz251_captured_w_DLV : LIB_SdKfz251_captured_w {
        scope = 1;
    };
    class LIB_Sdkfz251_w_DLV : LIB_Sdkfz251_w {
        scope = 1;
    };
    class LIB_StuG_III_G_DLV : LIB_StuG_III_G {
        scope = 1;
    };
    class LIB_StuG_III_G_w_DLV : LIB_StuG_III_G_w {
        scope = 1;
    };
    class LIB_StuG_III_G_WS_DLV : LIB_StuG_III_G_WS {
        scope = 1;
    };
    class LIB_StuG_III_G_WS_w_DLV : LIB_StuG_III_G_WS_w {
        scope = 1;
    };
    class LIB_SU85_DLV : LIB_SU85 {
        scope = 1;
    };
    class LIB_SU85_w_DLV : LIB_SU85_w {
        scope = 1;
    };
    class LIB_T34_76_DLV : LIB_T34_76 {
        scope = 1;
    };
    class LIB_T34_76_w_DLV : LIB_T34_76_w {
        scope = 1;
    };
    class LIB_T34_85_DLV : LIB_T34_85 {
        scope = 1;
    };
    class LIB_T34_85_w_DLV : LIB_T34_85_w {
        scope = 1;
    };
    class LIB_UK_DR_M3_Halftrack_DLV : LIB_UK_DR_M3_Halftrack {
        scope = 1;
    };
    class LIB_UK_DR_M4A3_75_DLV : LIB_UK_DR_M4A3_75 {
        scope = 1;
    };
    class LIB_UK_DR_Willys_MB_M1919_DLV : LIB_UK_DR_Willys_MB_M1919 {
        scope = 1;
    };
    class LIB_UK_Italy_M4A3_75_DLV : LIB_UK_Italy_M4A3_75 {
        scope = 1;
    };
    class LIB_UK_M3_Halftrack_DLV : LIB_UK_M3_Halftrack {
        scope = 1;
    };
    class LIB_UK_Willys_MB_M1919_DLV : LIB_UK_Willys_MB_M1919 {
        scope = 1;
    };
    class LIB_UK_Willys_MB_M1919_w_DLV : LIB_UK_Willys_MB_M1919_w {
        scope = 1;
    };
    class LIB_UniversalCarrier_DLV : LIB_UniversalCarrier {
        scope = 1;
    };
    class LIB_UniversalCarrier_desert_DLV : LIB_UniversalCarrier_desert {
        scope = 1;
    };
    class LIB_UniversalCarrier_w_DLV : LIB_UniversalCarrier_w {
        scope = 1;
    };
    class LIB_US_M3_Halftrack_DLV : LIB_US_M3_Halftrack {
        scope = 1;
    };
    class LIB_US_M3_Halftrack_w_DLV : LIB_US_M3_Halftrack_w {
        scope = 1;
    };
    class LIB_US_NAC_M3_Halftrack_DLV : LIB_US_NAC_M3_Halftrack {
        scope = 1;
    };
    class LIB_US_NAC_M4A3_75_DLV : LIB_US_NAC_M4A3_75 {
        scope = 1;
    };
    class LIB_US_NAC_Scout_M3_DLV : LIB_US_NAC_Scout_M3 {
        scope = 1;
    };
    class LIB_US_NAC_Willys_MB_M1919_DLV : LIB_US_NAC_Willys_MB_M1919 {
        scope = 1;
    };
    class LIB_US_Scout_M3_DLV : LIB_US_Scout_M3 {
        scope = 1;
    };
    class LIB_US_Scout_m3_w_DLV : LIB_US_Scout_m3_w {
        scope = 1;
    };
    class LIB_US_Willys_MB_M1919_DLV : LIB_US_Willys_MB_M1919 {
        scope = 1;
    };
    class LIB_US_Willys_MB_M1919_w_DLV : LIB_US_Willys_MB_M1919_w {
        scope = 1;
    };
    class LIB_US6_BM13_DLV : LIB_US6_BM13 {
        scope = 1;
    };
    class LIB_Us6_bm13_w_DLV : LIB_Us6_bm13_w {
        scope = 1;
    };
    class LIB_Zis5v_61K_DLV : LIB_Zis5v_61K {
        scope = 1;
    };