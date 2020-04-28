
    class LIB_LMG : Rifle_Long_Base_F {};

    class LIB_LAUNCHER : Launcher_Base_F {};

    class LIB_PISTOL : Pistol_Base_F {};

    class LIB_RIFLE : Rifle_Base_F {};

    class LIB_SMG : Rifle_Short_Base_F {};

    class LIB_SRIFLE : Rifle_Long_Base_F {};

    class LIB_RifleGrenade_Muzzle;

    class LIB_Bayonet_base;
    class LIB_SAFE_BASE;

// Pistols
    class LIB_Colt_M1911 : LIB_PISTOL {
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_FLARE_PISTOL : LIB_PISTOL {
    };

    class LIB_M1895 : LIB_PISTOL {
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_M1896 : LIB_PISTOL {
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_M712_2PzD : LIB_M1896 {
        class Single : Single {
        };
        class Full : Single {
        };
    };

    class LIB_P38 : LIB_PISTOL {
        class Single : Mode_SemiAuto {
        };
    };
    class LIB_P08 : LIB_P38 {
    };
    class LIB_M1908 : LIB_P08 {
    };

    class LIB_TT33 : LIB_PISTOL {
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_WaltherPPK : LIB_PISTOL {
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_Webley_mk6 : LIB_PISTOL {
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_Welrod_mk1 : LIB_PISTOL {
        class Single : Mode_SemiAuto {
        };
    };
// End Pistols

// Rifles
    class LIB_DELISLE : LIB_RIFLE {
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_FG42G : LIB_RIFLE {
        class Single : Mode_SemiAuto {
        };
        class Full : Mode_FullAuto {
        };
    };

    class LIB_G41 : LIB_RIFLE {
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_G43 : LIB_RIFLE {
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_K98 : LIB_RIFLE {
        class Single : Mode_SemiAuto {
        };
        class Short;
        class Medium;
        class Far;
    };
/*
    class LIB_K98_GW : LIB_K98 {};
*/
    class LIB_K98_Late : LIB_K98 {
    };
/*
    class LIB_K98_Late_GW : LIB_K98_Late {};
*/
    class LIB_G3340 : LIB_K98 {
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\CSA38II_sounds\w_m1895\reload2.ogg", 3, 1, 20};
                soundClosure[] = {"closure1", 1};
                weaponSoundEffect = "CSA38_Rifle";
            };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {"CSA38_M1895_Shot_SoundSet", "Mk200_Tail_SoundSet", "Mk200_InteriorTail_SoundSet"};
                begin1[] = {"\CSA38II_sounds\w_m1895\fire01.ogg", 1.77828, 1, 1200};
                begin2[] = {"\CSA38II_sounds\w_m1895\fire02.ogg", 1.77828, 1, 1200};
                begin3[] = {"\CSA38II_sounds\w_m1895\fire03.ogg", 1.77828, 1, 1200};
                begin4[] = {"\CSA38II_sounds\w_m1895\fire04.ogg", 1.77828, 1, 1200};
                begin5[] = {"\CSA38II_sounds\w_m1895\fire05.ogg", 1.77828, 1, 1200};
                soundBegin[] = {"begin1", 0.2, "begin2", 0.2, "begin3", 0.2, "begin4", 0.2, "begin5", 0.2};
            };
        };
    };

    class LIB_K98ZF39 : LIB_SRIFLE {
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_LeeEnfield_No4 : LIB_RIFLE {
        class Single : Mode_SemiAuto {
        };
    };
/*
    class LIB_LeeEnfield_No4_CUP : LIB_LeeEnfield_No4 {};
*/
    class LIB_LeeEnfield_No1 : LIB_LeeEnfield_No4 {
    };
/*
    class LIB_LeeEnfield_No1_CUP : LIB_LeeEnfield_No1 {};
*/
    class LIB_LeeEnfield_No4_Scoped : LIB_SRIFLE {
        class Single : Mode_SemiAuto {
        };
    };
/*
    class LIB_LeeEnfield_No4_Scoped_CUP : LIB_LeeEnfield_No4_Scoped {};
*/
    class LIB_M1_Carbine : LIB_RIFLE {
        class Single : Mode_SemiAuto {
        };
    };
    class LIB_M1A1_Carbine : LIB_M1_Carbine {
    };
    class LIB_M2_Carbine_2PzD : LIB_M1_Carbine {
        class Single;
        class Full : Single {
        };
   };

    class LIB_M1_Garand : LIB_RIFLE {
        class Single : Mode_SemiAuto {
        };
    };
/*
    class LIB_M1_Garand_M7 : LIB_M1_Garand {};
*/
    class LIB_M1903A3_Springfield : LIB_RIFLE {
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_M1903A4_Springfield : LIB_SRIFLE {
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_M9130 : LIB_RIFLE {
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_M9130_Bayonet : LIB_M9130 {
    };
/*
    class LIB_M9130_DYAKONOV : LIB_M9130 {};
*/
    class LIB_M38 : LIB_M9130 {
    };

    class LIB_M44 : LIB_M9130 {
    };

    class LIB_M9130PU : LIB_SRIFLE {
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_MP44 : LIB_RIFLE {
        class Single : Mode_SemiAuto {
        };
        class Full : Mode_FullAuto {
        };
    };
/*
    class LIB_MP44_GW : LIB_MP44 {};
*/
    class LIB_SVT_40 : LIB_RIFLE {
        class Single : Mode_SemiAuto {
        };
    };
    class LIB_AVT_40_2PzD : LIB_SVT_40 {
        class Single;
        class Full : Single {
        };
    };

    class LIB_PTRD : LIB_RIFLE {
        class Single : Mode_SemiAuto {
        };
    };
// End Rifles

// Submachine Guns
    class LIB_M1A1_Thompson : LIB_SMG {
        class Single : Mode_SemiAuto {
        };
        class Full : Mode_FullAuto {
        };
    };
    class LIB_M1928_Thompson : LIB_M1A1_Thompson {
        class Far : Full {
        };
        class Medium : Full {
        };
        class Short : Medium {
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound : BaseSoundModeType {
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
            };
        };
        class Full : Full {
            sounds[] = {"StandardSound"};
            class StandardSound : BaseSoundModeType {
                soundSetShot[] = {"IFA3_thompson_Shot_SoundSet","IFA3_rifle1_Tail_SoundSet"};
            };
        };
    };
    class LIB_M1928_Thompson_d : LIB_M1928_Thompson {
    };
    class LIB_M1928A1_Thompson : LIB_M1928_Thompson {
        class Full : Full {
        };
    };

    class LIB_M3_GreaseGun : LIB_SMG {
        class Full : Mode_FullAuto {
        };
    };

    class LIB_MP38 : LIB_SMG {
        class Full : Mode_FullAuto {
        };
    };

    class LIB_MP40 : LIB_SMG {
        class Full : Mode_FullAuto {
        };
    };

    class LIB_PPSh41_m : LIB_SMG {
        class Single : Mode_SemiAuto {
        };
        class Full : Mode_FullAuto {
        };
    };
    class LIB_PPSh41_d : LIB_PPSh41_m {
    };

    class LIB_Sten_Mk2 : LIB_SMG {
        class Full : Mode_FullAuto {
        };
        class Single : Mode_SemiAuto {
        };
    };
    class LIB_Sten_Mk5 : LIB_Sten_Mk2 {
    };
// End Submachine Guns

// Machineguns
    class LIB_Bren_Mk2 : LIB_LMG {
        class Full : Mode_FullAuto {
        };
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_DP28 : LIB_LMG {
        class Full : Mode_FullAuto {
        };
    };

    class LIB_DT : LIB_LMG {
        class Full : Mode_FullAuto {
        };
    };

    class LIB_DT_OPTIC : LIB_DT {
    };

    class LIB_M1918A2_BAR : LIB_LMG {
        class Full : Mode_FullAuto {
        };
        class Full_Rapid : Full {
        };
    };

    class LIB_M1919A4 : LIB_LMG {
        class Full : Mode_FullAuto {
        };
    };
    class LIB_M1919A6 : LIB_M1919A4 {
    };

    class LIB_MG34 : LIB_LMG {
        class Full : Mode_FullAuto {
        };
        class Single : Mode_SemiAuto {
        };
    };

    class LIB_MG34_PT : LIB_MG34 {
    };

    class LIB_MG42 : LIB_LMG {
        class Full : Mode_FullAuto {
        };
        class Far : Full {
        };
        class Medium : Full {
        };
        class Short : Full {
        };
    };
// End Machineguns

// Other Weapons, Tripods, Launchers
    class LIB_Slung_Static_Weapon_Base : Launcher_Base_F {
    };
/*
    class LIB_Bagpipes: LIB_LAUNCHER {
    };
*/
    class LIB_PIAT_Rifle : LIB_RIFLE {
    };

    class LIB_PIAT : LIB_LAUNCHER {
    };

    class LIB_M1A1_Bazooka : LIB_LAUNCHER {
    };

    class LIB_PzFaust_30m : LIB_LAUNCHER {
    };
    class LIB_PzFaust_30m_used : LIB_PzFaust_30m {
    };

    class LIB_PzFaust_60m : LIB_PzFaust_30m {
    };
    class LIB_PzFaust_60m_used : LIB_PzFaust_60m {
    };

    class LIB_Faustpatrone : LIB_PzFaust_30m {
    };

    class LIB_RPzB : LIB_LAUNCHER {
    };
    class LIB_RPzB_w : LIB_RPzB {
    };

    class LIB_M2_Flamethrower : LIB_RIFLE {
        class FullAuto : Mode_FullAuto {
        };
    };

    class LIB_BM37_Barrel : LIB_Slung_Static_Weapon_Base {
    };

    class LIB_BM37_Tripod : LIB_Slung_Static_Weapon_Base {
    };

    class LIB_GrWr34_Barrel : LIB_Slung_Static_Weapon_Base {
    };

    class LIB_GrWr34_Tripod : LIB_Slung_Static_Weapon_Base {
    };

    class LIB_M2_60_Barrel : LIB_Slung_Static_Weapon_Base {
    };

    class LIB_M2_60_Tripod : LIB_Slung_Static_Weapon_Base {
    };

    class LIB_M2_Tripod : LIB_Slung_Static_Weapon_Base {
    };

    class LIB_Laffete_Tripod : LIB_Slung_Static_Weapon_Base {
    };
// End Other Weapons, Tripods, Launchers

// Vehicle Weapons
    class LIB_MLMG_base : MGun {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };

    class LIB_Maxim_M30 : LIB_MLMG_base {
        class manual : manual {
        };
        class close : close {
        };
        class short : short {
        };
        class medium : medium {
        };
        class far : far {
        };
    };

    class LIB_MLMG42 : LIB_MLMG_base {
        class manual : manual {
        };
        class close : close {
        };
        class short : short {
        };
        class medium : medium {
        };
        class far : far {
        };
    };

    class LIB_MG42_Tripod : LIB_MLMG42 {
    };

    class LIB_MG42_Veh : LIB_MG42_Tripod {
    };

    class LIB_M2 : LIB_MLMG_base {
        class manual : manual {
        };
        class close : close {
        };
        class short : short {
        };
        class medium : medium {
        };
        class far : far {
        };
    };

    class LIB_PlaneCannon_base : CannonCore {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };

    class LIB_2xMG151_FW190 : LIB_PlaneCannon_base {
        class manual : manual {
        };
        class close : close {
        };
        class short : short {
        };
        class medium : medium {
        };
        class far : far {
        };
    };

    class LIB_2xMG151_JU87 : LIB_PlaneCannon_base {
        class manual : manual {
        };
        class close : close {
        };
        class short : short {
        };
        class medium : medium {
        };
        class far : far {
        };
    };

    class LIB_M4_P39 : LIB_PlaneCannon_base {
        class manual : manual {
        };
        class close : close {
        };
        class short : short {
        };
        class medium : medium {
        };
        class far : far {
        };
    };

    class LIB_PlaneMGun_base : MGun {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };

    class LIB_2xMG131_FW190 : LIB_PlaneMGun_base {
        class manual : manual {
        };
        class close : close {
        };
        class short : short {
        };
        class medium : medium {
        };
        class far : far {
        };
    };

    class LIB_4xM2_P39 : LIB_PlaneMGun_base {
        class manual : manual {
        };
        class close : close {
        };
        class short : short {
        };
        class medium : medium {
        };
        class far : far {
        };
    };

    class LIB_8xM2_P47 : LIB_PlaneMGun_base {
        class manual : manual {
        };
        class close : close {
        };
        class short : short {
        };
        class medium : medium {
        };
        class far : far {
        };
    };

    class LIB_MG81_Ju87 : LIB_PlaneMGun_base {
        class manual : manual {
        };
        class close : close {
        };
        class short : short {
        };
        class medium : medium {
        };
        class far : far {
        };
    };

    class LIB_ShKAS_PE2 : LIB_PlaneMGun_base {
        class manual : manual {
        };
        class close : close {
        };
        class short : short {
        };
        class medium : medium {
        };
        class far : far {
        };
    };

    class LIB_UBK_PE2 : LIB_PlaneMGun_base {
        class manual : manual {
        };
        class close : close {
        };
        class short : short {
        };
        class medium : medium {
        };
        class far : far {
        };
    };

    class LIB_UBT_PE2 : LIB_UBK_PE2 {
        class manual : manual {
        };
    };

    class LIB_M8_Launcher_P47 : RocketPods {
        class Burst : RocketPods {
        };
    };

    class LIB_Bomb_Mount_base;

    class LIB_TankMGun_base : MGun {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };

    class LIB_Bren_Mk2_coax: LIB_TankMGun_base {
        class manual : manual {
        };
        class Single : manual {
        };
    };

    class LIB_Besa_coax: LIB_TankMGun_base {
        class manual : manual {
        };
        class Full_Auto : manual {
        };
        class Full_Rapid : manual {
        };
        class close : close {
        };
        class short : short {
        };
        class medium : medium {
        };
        class far : far {
        };
    };

    class LIB_MG34_coax : LIB_TankMGun_base {
        class manual : manual {
        };
        class close : close {
        };
        class short : short {
        };
        class medium : medium {
        };
        class far : far {
        };
    };

    class LIB_MG34_Tripod : LIB_MG34_coax {
    };

    class LIB_M1919A4_coax : LIB_TankMGun_base {
        class manual : manual {
        };
        class close : close {
        };
        class short : short {
        };
        class medium : medium {
        };
        class far : far {
        };
    };

    class LIB_M1919A4_tripod : LIB_MLMG_base {
    };
// End Vehicle Weapons

// Accessories
    class LIB_ACC_base;

    class LIB_ACC_GL_DYAKONOV_Empty : LIB_ACC_base {
    };

    class LIB_ACC_GL_DYAKONOV : LIB_ACC_GL_DYAKONOV_Empty {
    };

    class LIB_ACC_GL_Enfield_CUP_Empty : LIB_ACC_base {
    };

    class LIB_ACC_GL_Enfield_CUP : LIB_ACC_GL_Enfield_CUP_Empty {
    };

    class LIB_ACC_GL_M7 : LIB_ACC_base {
    };

    class LIB_ACC_GL_M9A1 : LIB_ACC_GL_M7 {
    };

    class LIB_ACC_GL_MK2 : LIB_ACC_GL_M7 {
    };

    class LIB_ACC_GW_SB_Empty : LIB_ACC_base {
    };

    class LIB_ACC_GW_SB_PZGR_30 : LIB_ACC_GW_SB_Empty {
    };

    class LIB_ACC_GW_SB_PZGR_40 : LIB_ACC_GW_SB_Empty {
    };

    class LIB_ACC_GW_SB_SPRGR_30 : LIB_ACC_GW_SB_Empty {
    };

    class LIB_ACC_M44_Bayo : LIB_ACC_base {
    };

    class LIB_ACC_K98_Bayo : LIB_ACC_M44_Bayo {
    };

    class LIB_ACC_M1_Bayo : LIB_ACC_M44_Bayo {
    };

    class LIB_ACC_M1891_Bayo : LIB_ACC_M44_Bayo {
    };

    class LIB_ACC_No4_Mk2_Bayo : LIB_ACC_M44_Bayo {
    };

    class LIB_ACC_P1903_Bayo : LIB_ACC_M44_Bayo {
    };
// End Accessories
