
class PistolCore;
class RifleCore;
class MGunCore;
class CannonCore;
class RocketPods;

class MGun : MGunCore {};

class HMG_01;

class HMG_M2 : HMG_01 {
    class manual;
};

class HMG_M2_Mounted;

class GrenadeLauncher;

class UGL_F;

class Launcher;

class Launcher_Base_F;

class Rifle;

class Rifle_Base_F;

class Rifle_Short_Base_F;

class Rifle_Long_Base_F;

class Pistol : PistolCore {};

class Pistol_Base_F : Pistol {
    class Single;
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

#include "FOW_Weapons.h"

#include "LIB_Weapons.h"

#include "LEN_Weapons.h"

#include "CSA38_Weapons.h"

#include "Sep39_Weapons.h"
