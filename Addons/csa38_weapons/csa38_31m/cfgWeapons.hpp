
class CSA38_MG30;

class CSA38_31m : CSA38_MG30 {
    displayname = "$STR_Haas_Solothurn_31M_displayName";
    descriptionShort = "$STR_Haas_Solothurn_31M_descriptionShort";
    magazines[] = {"csa38_8x56_25xMannlicherMG"};
    magazineWell[] = {"CBA_8x56mmR_Solothurn_31M"};
    class FullAuto : Mode_FullAuto {
        dispersion = MOA_TO_RAD(3);
        reloadTime = RPM_TO_TIME(600);
    };
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(3);
        reloadTime = RPM_TO_TIME(600);
    };
};
