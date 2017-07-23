    class V_LIB_GER_FieldOfficer : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply70";
        };
    };

    class V_LIB_GER_OfficerBelt : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply30";
        };
    };

    class V_LIB_GER_OfficerVest : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply70";
        };
    };

    class V_LIB_GER_PioneerVest : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply120";
        };
    };

    class V_LIB_GER_PrivateBelt : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply30";
        };
    };

    class V_LIB_GER_SniperBelt : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply70";
        };
    };

    class V_LIB_GER_TankPrivateBelt : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply30";
        };
    };

    class V_LIB_GER_VestG43 : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_GER_VestKar98 : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_GER_VestMG : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply120";
        };
    };

    class V_LIB_GER_VestMP40 : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_GER_VestSTG : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_GER_VestUnterofficer : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_DAK_FieldOfficer : V_LIB_GER_FieldOfficer {
        class ItemInfo : ItemInfo {
            containerClass = "Supply70";
        };
    };

    class V_LIB_DAK_OfficerBelt : V_LIB_GER_OfficerBelt {
        class ItemInfo : ItemInfo {
            containerClass = "Supply30";
        };
    };

    class V_LIB_DAK_OfficerVest : V_LIB_GER_OfficerVest {
        class ItemInfo : ItemInfo {
            containerClass = "Supply70";
        };
    };

    class V_LIB_DAK_PioneerVest : V_LIB_GER_PioneerVest {
        class ItemInfo : ItemInfo {
            containerClass = "Supply120";
        };
    };

    class V_LIB_DAK_PrivateBelt : V_LIB_GER_PrivateBelt {
        class ItemInfo : ItemInfo {
            containerClass = "Supply30";
        };
    };

    class V_LIB_DAK_SniperBelt : V_LIB_GER_SniperBelt {
        class ItemInfo : ItemInfo {
            containerClass = "Supply70";
        };
    };

    class V_LIB_DAK_VestG43 : V_LIB_GER_VestG43 {
        class ItemInfo : ItemInfo {
            containerClass = "Supply90";
        };
    };

    class V_LIB_DAK_VestKar98 : V_LIB_GER_VestKar98 {
        class ItemInfo : ItemInfo {
            containerClass = "Supply90";
        };
    };

    class V_LIB_DAK_VestMG : V_LIB_GER_VestMG {
        class ItemInfo : ItemInfo {
            containerClass = "Supply120";
        };
    };

    class V_LIB_DAK_VestMP40 : V_LIB_GER_VestMP40 {
        class ItemInfo : ItemInfo {
            containerClass = "Supply90";
        };
    };

    class V_LIB_DAK_VestSTG : V_LIB_GER_VestSTG {
        class ItemInfo : ItemInfo {
            containerClass = "Supply90";
        };
    };

    class V_LIB_DAK_VestUnterofficer : V_LIB_GER_VestUnterofficer {
        class ItemInfo : ItemInfo {
            containerClass = "Supply90";
        };
    };

    class V_LIB_SOV_IShBrVestMG : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply60";
            mass = 100;
            class HitpointsProtectionInfo {
               class Body {
                    armor = 6;
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
        };
    };

    class V_LIB_SOV_IShBrVestPPShDisc : V_LIB_SOV_IShBrVestMG {
        class ItemInfo : ItemInfo {
            containerClass = "Supply90";
            mass = 100;
            class HitpointsProtectionInfo {
                class Body {
                    armor = 6;
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
        };
    };

    class V_LIB_SOV_IShBrVestPPShMag : V_LIB_SOV_IShBrVestMG {
        class ItemInfo : ItemInfo {
            containerClass = "Supply90";
            mass = 100;
            class HitpointsProtectionInfo {
                class Body {
                    armor = 6;
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
        };
    };

    class V_LIB_SOV_RA_Belt : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply30";
        };
    };

    class V_LIB_SOV_RA_MGBelt : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply120";
        };
    };

    class V_LIB_SOV_RA_MosinBelt : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_SOV_RA_OfficerVest : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply70";
        };
    };

    class V_LIB_SOV_RA_PPShBelt : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_SOV_RA_SniperVest : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply70";
        };
    };

    class V_LIB_SOV_RA_SVTBelt : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_SOV_RA_TankOfficerSet : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply50";
        };
    };

    class V_LIB_SOV_RAZV_MGBelt : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply120";
        };
    };

    class V_LIB_SOV_RAZV_OfficerVest : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply70";
        };
    };

    class V_LIB_SOV_RAZV_PPShBelt : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_SOV_RAZV_SVTBelt : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_US_AB_Vest_Bar : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply120";
        };
    };

    class V_LIB_US_AB_Vest_Carbine : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply100";
        };
    };

    class V_LIB_US_AB_Vest_Carbine_nco : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply100";
        };
    };

    class V_LIB_US_AB_Vest_Garand : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply130";
        };
    };

    class V_LIB_US_AB_Vest_Grenadier : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply200";
        };
    };

    class V_LIB_US_AB_Vest_Thompson : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply150";
        };
    };

    class V_LIB_US_AB_Vest_Thompson_nco : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply100";
        };
    };

    class V_LIB_US_Vest_45 : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply30";
        };
    };

    class V_LIB_US_Vest_Asst_MG : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply120";
        };
    };

    class V_LIB_US_Vest_Bar : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply120";
        };
    };

    class V_LIB_US_Vest_Carbine : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_US_Vest_Carbine_eng : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_US_Vest_Carbine_nco : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply100";
        };
    };

    class V_LIB_US_Vest_Garand : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_US_Vest_Grenadier : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply200";
        };
    };

    class V_LIB_US_Vest_Medic : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply100";
        };
    };

    class V_LIB_US_Vest_Medic2 : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply100";
        };
    };

    class V_LIB_US_Vest_Thompson : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_US_Vest_Thompson_nco : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply100";
        };
    };

    class V_LIB_WP_G43Vest : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_WP_Kar98Vest : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_WP_MGVest : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply120";
        };
    };

    class V_LIB_WP_MP40Vest : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };

    class V_LIB_WP_OfficerVest : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply70";
        };
    };

    class V_LIB_WP_SniperBela : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply70";
        };
    };

    class V_LIB_WP_STGVest : V_LIB_Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply90";
        };
    };