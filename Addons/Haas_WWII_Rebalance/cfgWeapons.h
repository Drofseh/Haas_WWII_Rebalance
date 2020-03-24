
class PistolCore;
class RifleCore;
class MGunCore;
class CannonCore;
class RocketPods;

class MGun : MGunCore {
    class WeaponSlotsInfo;
};

class HMG_M2;
class GrenadeLauncher;
//class UGL_F;

class UGL_F : GrenadeLauncher {
    dispersion = MOA_TO_RAD(50);
    recoil = "recoil_single_m320";
    recoilProne = "recoil_single_m320";
    aiDispersionCoefX = 5;
    aiDispersionCoefY = 10;
    aiRateOfFire = 5;
    aiRateOfFireDispersion = 5;
    aiRateOfFireDistance = 200;
    class Single : Mode_SemiAuto {
        dispersion = MOA_TO_RAD(50);
        recoil = "recoil_single_m320";
        recoilProne = "recoil_single_m320";
        aiDispersionCoefX = 5;
        aiDispersionCoefY = 10;
        aiRateOfFire = 5;
        aiRateOfFireDispersion = 5;
        aiRateOfFireDistance = 200;
    };
};

class Launcher;

class Launcher_Base_F : Launcher {
    class WeaponSlotsInfo;
};

class Rifle : RifleCore {
    class WeaponSlotsInfo;
};

class Rifle_Base_F : Rifle {
    class WeaponSlotsInfo;
};

class Rifle_Short_Base_F : Rifle_Base_F {
    class WeaponSlotsInfo;
};

class Rifle_Long_Base_F : Rifle_Base_F {
    class WeaponSlotsInfo;
};

class Pistol : PistolCore {
    class WeaponSlotsInfo;
};

class Pistol_Base_F : Pistol {
    class WeaponSlotsInfo;
    class Single;
};

class hgun_P07_F : Pistol_Base_F {
    class WeaponSlotsInfo;
    class Single;
};

class hgun_Rook40_F : Pistol_Base_F {
    class WeaponSlotsInfo;
    class Single;
};

class sgun_HunterShotgun_01_base_F : Rifle_Long_Base_F {
    displayName = "Browning Superposed";
    descriptionShort = "The Browning Superposed was the first over-under shotgun design.";
    discreteDistance[] = {50};
    discreteDistanceInitIndex = 0;
    magazineWell[] += {"CBA_12g_2rnds","CBA_12g_1rnd"};
};

class sgun_HunterShotgun_01_sawedoff_base_F : sgun_HunterShotgun_01_base_F {
    displayName = "Browning Superposed (Sawn Off)";
    descriptionShort = "The Browning Superposed was the first over-under shotgun design. Someone has cut down the barrel and stock on this one.";
    discreteDistance[] = {25};
    discreteDistanceInitIndex = 0;
    class MagazineCoef {
        initSpeed = 0.75;
    };
};

class ItemCore;
class InventoryItem_Base_F;
class UniformItem;
class VestItem;

class muzzle_snds_H : ItemCore {
    class ItemInfo;
};

class Uniform_Base : ItemCore {
    class ItemInfo;
};

class U_BasicBody : Uniform_Base {
    class ItemInfo;
};

class Vest_Camo_Base : ItemCore {
    class ItemInfo;
};

class CBA_MiscItem_ItemInfo;
class ACE_ItemCore;

#include "ACE_Weapons.h"

#include "FOW_Weapons.h"

#include "LIB_Weapons.h"

#include "LEN_Weapons.h"

#include "CSA38_Weapons.h"

#include "Sep39_Weapons.h"

#include "CSA38_Uniforms.h"

#include "FOW_Uniforms.h"

#include "FOW_Vests.h"

#include "LIB_Vests.h"

#include "CSA38_Vests.h"

#include "Sep39_Vests.h"
