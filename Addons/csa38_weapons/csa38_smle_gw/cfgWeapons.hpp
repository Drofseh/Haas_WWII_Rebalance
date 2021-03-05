
class LIB_RifleGrenade_Muzzle;

class CSA38_SMLE;

class CSA38_SMLE_CUP : CSA38_SMLE {
    magazines[] = {"CSA38_7_7_10x56R","CSA38_7_7_10x56RAP"};
    muzzles[] = {"this","LIB_LeeEnfield_No4_RG","SAFE"};
    weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
    class LIB_LeeEnfield_No4_RG : LIB_RifleGrenade_Muzzle {
        magazines[] = {"LIB_1Rnd_G_MillsBomb"};
        cameraDir = "eye_look";
        discreteDistance[] = {50,100,150,200,250};
        discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
        discreteDistanceInitIndex = 1;
        reloadAction = "LIB_GestureReload_LeeEnfield_GL";
        reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
    };
    baseWeapon = "CSA38_SMLE";
    class LinkedItems {
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "LIB_ACC_GL_Enfield_CUP_Empty";
        };
    };
};
