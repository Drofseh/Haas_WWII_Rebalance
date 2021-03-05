
class LIB_RifleGrenade_Muzzle;

class CSA38_kar98k2;

class CSA38_kar98k2_GW : CSA38_kar98k2 {
    baseWeapon = "CSA38_kar98k2";
    magazines[] = {"CSA38_7_92_5xMauser","CSA38_7_92_5xMauser2","CSA38_7_92_5xMauserkAR","CSA38_7_92_5xMauserkAR2","CSA38_7_92_5xMauser3"};
    muzzles[] = {"this","LIB_K98_RG","SAFE"};
    weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
    class LIB_K98_RG : LIB_RifleGrenade_Muzzle {
        magazines[] = {"LIB_1Rnd_G_SPRGR_30","LIB_1Rnd_G_PZGR_30","LIB_1Rnd_G_PZGR_40"};
        cameraDir = "eye_look";
        discreteDistance[] = {50,100,150,200,250};
        discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
        discreteDistanceInitIndex = 1;
        reloadAction = "LIB_GestureReload_k98k_GL";
        reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
    };
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "LIB_ACC_GW_SB_Empty";
        };
    };
};
