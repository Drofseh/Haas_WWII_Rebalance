
class LIB_RifleGrenade_Muzzle;

class CSA38_M1895k;

class CSA38_M1895k_GW : CSA38_M1895k {
    baseWeapon = "CSA38_M1895k";
    muzzles[] = {"this","CSA38_M1895_RG","SAFE"};
    weaponInfoType = "LIB_Rsc_RifleGrenade_Zeroing";
    class CSA38_M1895_RG : LIB_RifleGrenade_Muzzle {
        magazines[] = {"CSA38_PRG21"};
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
            item = "CSA38_PGvz23_Empty";
        };
    };
};
