
class BulletBase;
class BulletBase_NonAceAB;
class ShotgunBase;
class Grenade;

class GrenadeHand : Grenade {
    ace_frag_classes[] = {"ace_frag_tiny_HD","ACE_frag_small_HD","ACE_frag_small_HD"};
    ace_frag_enabled = 1;
    ace_frag_force = 1;
    ace_frag_gurney_k = "3/5";
    ace_frag_skip = 0;
    ace_grenades_pullPinSound[] = {"A3\sounds_f\weapons\grenades\Grenade_PullPin.wss",1.5,1,10};
};

class R_60mm_HE;

class ShotDeployBase;

class Smoke_82mm_AMOS_White : ShotDeployBase {
    soundFakeFall[] = {"soundFakeFall0",0.25,"soundFakeFall1",0.25,"soundFakeFall2",0.25,"soundFakeFall3",0.25};
    soundFakeFall0[] = {"a3\Sounds_F\weapons\falling_bomb\fall_01",3.16228,1,1000};
    soundFakeFall1[] = {"a3\Sounds_F\weapons\falling_bomb\fall_02",3.16228,1,1000};
    soundFakeFall2[] = {"a3\Sounds_F\weapons\falling_bomb\fall_03",3.16228,1,1000};
    soundFakeFall3[] = {"a3\Sounds_F\weapons\falling_bomb\fall_04",3.16228,1,1000};
};

class SmokeShell;

class SmokeShellArty : SmokeShell {
    hit = 0;
    indirectHit = 2;
    indirectHitRange = 1.5;
    explosionEffects = "LIB_WPExplosion";
    //explosionEffects = "FOW_no79_Grenade_Effects";
    timeToLive = 180; // TODO check before release
    LIB_WP_Delay = 0.8;
    LIB_WP_Intensity = 0.08;
    LIB_WP_BurnTime = 35;
    LIB_WP_Range = 10;
    SoundSetExplosion[] = {"WW2_explo_phosphorusGrenade_SoundSet", "WW2_explo_phosphorusGrenade_sizzling_SoundSet"};
};

class SubmunitionBase;

class Smoke_120mm_AMOS_White : SubmunitionBase {
    soundFakeFall[] = {"soundFakeFall0",0.25,"soundFakeFall1",0.25,"soundFakeFall2",0.25,"soundFakeFall3",0.25};
    soundFakeFall0[] = {"a3\Sounds_F\weapons\falling_bomb\fall_01",3.16228,1,1000};
    soundFakeFall1[] = {"a3\Sounds_F\weapons\falling_bomb\fall_02",3.16228,1,1000};
    soundFakeFall2[] = {"a3\Sounds_F\weapons\falling_bomb\fall_03",3.16228,1,1000};
    soundFakeFall3[] = {"a3\Sounds_F\weapons\falling_bomb\fall_04",3.16228,1,1000};
};
