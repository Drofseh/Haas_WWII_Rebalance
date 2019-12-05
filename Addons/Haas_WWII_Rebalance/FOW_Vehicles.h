
    class fow_truppenfahrrad : Car_F {
        attenuationEffectType = "OpenCarAttenuation";
        maximumLoad = 500;
        tf_isolatedAmount = 0;
    };

    class fow_lcvp : Boat_F {
        attenuationEffectType = "OpenCarAttenuation";
        maximumLoad = 9000;
        tf_isolatedAmount = 0;
    };

    class fow_willys : Car_F {
        attenuationEffectType = "OpenCarAttenuation";
        maximumLoad = 2000;
        tf_isolatedAmount = 0;
    };

    class fow_v_cromwell : Tank_F {
        attenuationEffectType = "TankAttenuation";
        maximumLoad = 3000;
        tf_isolatedAmount = 1;
    };

    class fow_v_gmc : Truck_F {
        attenuationEffectType = "SemiOpenCarAttenuation";
        maximumLoad = 30000;
        tf_isolatedAmount = 0.25;
    };

    class fow_v_kubelwagen : Car_F {
        attenuationEffectType = "OpenCarAttenuation";
        maximumLoad = 2000;
        tf_isolatedAmount = 0;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class fow_v_kubelwagen_mg34 : fow_v_kubelwagen {
        maximumLoad = 1500;
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                maxHorizontalRotSpeed = 2;
                maxVerticalRotSpeed = 2;
            };
        };
    };

    class fow_v_lvta2 : Tank_F {
        attenuationEffectType = "SemiOpenCarAttenuation2";
        maximumLoad = 12000;
        tf_isolatedAmount = 0.5;
    };

    class fow_v_panther : Tank_F {
        attenuationEffectType = "TankAttenuation";
        maximumLoad = 3000;
        tf_isolatedAmount = 1;
    };

    class fow_v_sdkfz_250_base : Tank_F {
        attenuationEffectType = "SemiOpenCarAttenuation";
        maximumLoad = 3000;
        tf_isolatedAmount = 0.5;
    };

    class fow_v_sdkfz_251 : Tank_F {
        attenuationEffectType = "SemiOpenCarAttenuation";
        maximumLoad = 10000;
        tf_isolatedAmount = 0.5;
    };

    class fow_v_sdkfz_222 : Wheeled_APC_F {
        attenuationEffectType = "SemiOpenCarAttenuation2";
        maximumLoad = 3000;
        tf_isolatedAmount = 0.7;
    };

    class fow_v_sdkfz_234_1 : Wheeled_APC_F {
        attenuationEffectType = "SemiOpenCarAttenuation2";
        maximumLoad = 3000;
        tf_isolatedAmount = 0.7;
    };

    class fow_v_type95_HaGo : Tank_F {
        attenuationEffectType = "TankAttenuation";
        maximumLoad = 3000;
        tf_isolatedAmount = 1;
    };

    class fow_v_type97_truck_ija : Truck_F {
        attenuationEffectType = "SemiOpenCarAttenuation";
        maximumLoad = 20000;
        tf_isolatedAmount = 0.25;
    };

    class fow_v_type97_truck_fuel_ija : fow_v_type97_truck_ija {
        maximumLoad = 2000;
    };

    class fow_v_type97_truck_utility_ija : fow_v_type97_truck_ija {
        maximumLoad = 2000;
    };

    class fow_v_universalCarrier : Tank_F {
        attenuationEffectType = "OpenCarAttenuation";
        maximumLoad = 3000;
        tf_isolatedAmount = 0.1;
    };