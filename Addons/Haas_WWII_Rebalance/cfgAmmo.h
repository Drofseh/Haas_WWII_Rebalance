
class BulletBase;
class BulletBase_NonAceAB;
class ShotgunBase;

/*
E = .5 * mass * velocity squared
E = .5 * m * v^2
172 = 5 * 0.123oz * 1200fps
172 = 5 * 53.8gr * 1200fps
*/

class B_12Gauge_Pellets_Submunition: BulletBase { //#00 Buckshot
    //vanilla values have been left as comments for reference purposes
    caliber = 0.525; //penetration of ~3mm RHA, ~9.6mm metal
    //caliber = 1; //too high, ~5.7mm of RHA (380*1*15/1000=5.7), ~18.25 metal
    //cost = 1;
    //hit = 20;
    //simulationStep = 0.0001;
    //cartridge = "";
    //submunitionAmmo = "B_12Gauge_Pellets_Submunition_Deploy";
    submunitionConeType[] = {"poissondisc", 9};  //#00 Buckshot generally has 9 pellets per shell
    //submunitionConeType[] = {"poissondisc", 18};
    //submunitionConeAngle = 0.8;
    //triggerSpeedCoef[] = {0.85, 1};
    triggerTime = 0.008; // Shot takes ~5-15 feet to start spreading out and the vanilla triggerTime is too short to allow that
    //triggerTime = 0.001;
};
class B_12Gauge_Pellets_Submunition_Deploy: BulletBase {
    airFriction = -0.0030;
    //airFriction = -0.0067;
    caliber = 0.525;
    hit = 2.55; //vanilla hit is way too high
    //hit = 6;
    //indirectHit = 0;
    //indirectHitRange = 0;
    //typicalSpeed = 360;
    //deflecting = 35;
};

class B_12Gauge_Pellets: ShotgunBase { //This doesn't seem to be used for anything, but I want to standardize the caliber with the other pellet classes.
    caliber = 0.525; //3mm RHA, probably still too high though as RHA is hardened.
};

class ACE_12Gauge_Pellets_Submunition_No0_Buck: B_12Gauge_Pellets_Submunition {
    caliber = 0.5;
    submunitionAmmo = "ACE_12Gauge_Pellets_Submunition_No0_Buck_Deploy";
    submunitionConeType[] = {"poissondisc", 9};
    submunitionConeAngle = 0.81;
};
class ACE_12Gauge_Pellets_Submunition_No0_Buck_Deploy: B_12Gauge_Pellets_Submunition_Deploy {
    airFriction = -0.0033;
    caliber = 0.5;
    hit = 2.27;
};
class ACE_12Gauge_Pellets_Submunition_No1_Buck: B_12Gauge_Pellets_Submunition {
    caliber = 0.475;
    submunitionAmmo = "ACE_12Gauge_Pellets_Submunition_No1_Buck_Deploy";
    submunitionConeType[] = {"poissondisc", 11};
    submunitionConeAngle = 0.83;
};
class ACE_12Gauge_Pellets_Submunition_No1_Buck_Deploy: B_12Gauge_Pellets_Submunition_Deploy {
    airFriction = -0.0038;
    caliber = 0.475;
    hit = 1.86;
};
class ACE_12Gauge_Pellets_Submunition_No2_Buck: B_12Gauge_Pellets_Submunition {
    caliber = 0.45;
    submunitionAmmo = "ACE_12Gauge_Pellets_Submunition_No2_Buck_Deploy";
    submunitionConeType[] = {"poissondisc", 14};
    submunitionConeAngle = 0.85;
};
class ACE_12Gauge_Pellets_Submunition_No2_Buck_Deploy: B_12Gauge_Pellets_Submunition_Deploy {
    airFriction = -0.0048;
    caliber = 0.45;
    hit = 1.46;
};
class ACE_12Gauge_Pellets_Submunition_No3_Buck: B_12Gauge_Pellets_Submunition {
    caliber = 0.425;
    submunitionAmmo = "ACE_12Gauge_Pellets_Submunition_No3_Buck_Deploy";
    submunitionConeType[] = {"poissondisc", 18};
    submunitionConeAngle = 0.87;
};
class ACE_12Gauge_Pellets_Submunition_No3_Buck_Deploy: B_12Gauge_Pellets_Submunition_Deploy {
    airFriction = -0.0067;
    caliber = 0.425;
    hit = 1.13;
};
class ACE_12Gauge_Pellets_Submunition_No4_Buck: B_12Gauge_Pellets_Submunition {
    caliber = 0.4;
    submunitionAmmo = "ACE_12Gauge_Pellets_Submunition_No4_Buck_Deploy";
    submunitionConeType[] = {"poissondisc", 21};
    submunitionConeAngle = 0.89;
};
class ACE_12Gauge_Pellets_Submunition_No4_Buck_Deploy: B_12Gauge_Pellets_Submunition_Deploy {
    airFriction = -0.0085;
    caliber = 0.4;
    hit = 0.97;
};
class ACE_12Gauge_Pellets_Submunition_No4_Bird: B_12Gauge_Pellets_Submunition {
    caliber = 0.2;
    hit = 3;
    submunitionAmmo = "ACE_12Gauge_Pellets_Submunition_No4_Bird_Deploy";
    submunitionConeType[] = {"poissondisc", 135};
    submunitionConeAngle = 1.1;
    triggerSpeedCoef[] = {0.8, 1};
};
class ACE_12Gauge_Pellets_Submunition_No4_Bird_Deploy: B_12Gauge_Pellets_Submunition_Deploy {
    caliber = 0.2;
    airFriction = -0.0800;
    hit = 0.15;
};

/*
class B_12Gauge_Slug : BulletBase {
    hit = 42;
    indirectHit = 0;
    indirectHitRange = 0;
    cartridge = "FxCartridge_slug";
    cost = 5;
    typicalSpeed = 600;
    airFriction = -0.008;
    caliber = 3;
    deflecting = 30;
};

class B_12Gauge_Slug_NoCartridge : B_12Gauge_Slug {
    model = "\A3\weapons_f\empty";
    cartridge = "";
    simulation = "shotSubmunitions";
};
*/

class B_12Gauge_Slug: BulletBase {
    //caliber = 3; //too high, ~20mm of RHA (450*3*15/1000=20), ~64mm metal
    caliber = 1.037; //~7mm RHA, ~22.4mm metal, probably still too high though as RHA is hardened.
};

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

#include "FOW_Ammo.h"

#include "LIB_Ammo.h"
