
class recoil_default;

// Pistol
class recoil_2PzD_pistol_light : recoil_default {
    muzzleOuter[] = {0.0,2.5,0.4,1.0};
    //muzzleOuter[] = {0.0,3.5,0.4,1.0};
    kickBack[] = {0.02,0.03};
    permanent = 0.05;
    temporary = 0.04;
};
class recoil_2PzD_pistol_medium : recoil_default {
    muzzleOuter[] = {0.0,3,0.5,1.5};
    ///muzzleOuter[] = {0.0,4,0.5,2.0};
    kickBack[] = {0.03,0.04};
    permanent = 0.05;
    temporary = 0.05;
};
class recoil_2PzD_pistol_heavy : recoil_default {
    muzzleOuter[] = {0.0,4,0.5,2};
    //muzzleOuter[] = {0.0,4,0.4,1.5};
    kickBack[] = {0.04,0.05};
    permanent = 0.05;
    temporary = 0.06;
};
// End Pistol

// SMG
class recoil_2PzD_smg_light : recoil_default {
    muzzleOuter[] = {0.25,0.5,0.2,0.4};
    //muzzleOuter[] = {0.25,0.4,0.2,0.4};
    kickBack[] = {0.01,0.02};
    permanent = 0.01;
    temporary = 0.03;
};
class recoil_2PzD_smg_medium : recoil_default {
    muzzleOuter[] = {0.25,0.75,0.3,0.5};
    //muzzleOuter[] = {0.25,0.5,0.3,0.5};
    kickBack[] = {0.01,0.03};
    permanent = 0.01;
    temporary = 0.03;
};
class recoil_2PzD_smg_heavy : recoil_default {
    muzzleOuter[] = {0.25,1,0.4,0.6};
    //muzzleOuter[] = {0.25,0.6,0.4,0.6};
    kickBack[] = {0.02,0.04};
    permanent = 0.01;
    temporary = 0.03;
};
// End SMG

// Light Rifles
class recoil_2PzD_rifle_light : recoil_default {
    muzzleOuter[] = {0.5,1.5,0.5,0.5};
    kickBack[] = {0.03,0.04};
    permanent = 0.02;
    temporary = 0.02;
};
// End Light Rifles

// Full Power Rifles
class recoil_2PzD_rifle_FG42 : recoil_default {
    muzzleOuter[] = {0.5,2,1,1.0};
    kickBack[] = {0.07,0.1};
    permanent = 0.01;
    temporary = 0.02;
};
class recoil_2PzD_rifle_semi : recoil_default {
    muzzleOuter[] = {1.0,3.5,0.8,0.8};
    kickBack[] = {0.07,0.09};
    permanent = 0.05;
    temporary = 0.03;
};
class recoil_2PzD_rifle_bolt : recoil_default {
    muzzleOuter[] = {1.0,4,1,1.0};
    kickBack[] = {0.06,0.08};
    permanent = 0.08;
    temporary = 0.02;
};
class recoil_2PzD_rifle_short : recoil_default {
    muzzleOuter[] = {1.0,4,1.2,1.2};
    kickBack[] = {0.07,0.1};
    permanent = 0.1;
    temporary = 0.01;
};
// End Power Rifles

// Heavy Rifles
class recoil_2PzD_rifle_at : recoil_default {
    muzzleOuter[] = {1.0,8,2,3.0};
    kickBack[] = {0.1,0.15};
    permanent = 0.05;
    temporary = 0.02;
};
// End Heavy Rifles

// Automatic Rifle
class recoil_2PzD_rifle_auto_1 : recoil_default {
    muzzleOuter[] = {0.5,0.5,1,0.5};
    kickBack[] = {0.04,0.06};
    permanent = 0.01;
    temporary = 0.03;
};
// End Automatic Rifle

// MMG
class recoil_2PzD_mmg_1 : recoil_default {
    muzzleOuter[] = {0.0,0.5,0.5,0.5};
    kickBack[] = {0.04,0.06};
    permanent = 0.01;
    temporary = 0.02;
};
// End MMG
