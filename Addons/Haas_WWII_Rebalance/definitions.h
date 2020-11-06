﻿
#define MOA_TO_RAD(d) ((d) * 0.00029088)
// dispersion = MOA_TO_RAD(4);

#define RPM_TO_TIME(rpm) (60 / (rpm))
// reloadTime = RPM_TO_TIME(650);

#define RequiredAddonsArray \
    "A3_Data_F_Enoch_Loadorder", \
    "A3_Data_F_Mod_Loadorder", \
    "A3_Weapons_F", \
    "ace_captives", \
    "ace_common", \
    "ace_frag", \
    "ace_overpressure", \
    "CSA38II_weapons_c", \
    "CSA38II_weapons2_c", \
    "fow_characters_c", \
    "fow_functions", \
    "fow_main", \
    "fow_statics_c", \
    "fow_weapons_c", \
    "IFA3_COMP_ACE_main", \
    "len_ifa3_wp", \
    "len_ifa3_wp_data", \
    "w39_bron_c", \
    "ww2_core_c_if_zzz_lastloaded_c"

#define MagazinesArray \
    "CSA38_7_92_5xMauser_Mixed_Ball_2PzD", \
    "CSA38_7_92_5xMauser_Tracer_2PzD", \
    "CSA38_7_92_5xMauser2_Mixed_AP_2PzD", \
    "csa38_7_92_20xMauserKAR_Mixed_sS_2PzD", \
    "csa38_7_92_20xMauserKAR_SmE_2PzD", \
    "csa38_7_92_20xMauserKAR_Mixed_SmE_2PzD", \
    "csa38_7_92_20xMauserKAR_Mixed_SmK_2PzD", \
    "csa38_7_92_20xMauserKAR_Tracer_2PzD", \
    "CSA38_7_92_20xMauserCZ_Mixed_Ball_2PzD", \
    "CSA38_7_92_20xMauserCZ_SmE_2PzD", \
    "CSA38_7_92_20xMauserCZ_Mixed_SmE_2PzD", \
    "CSA38_7_92_20xMauserCZ2_Mixed_AP_2PzD", \
    "CSA38_7_92_20xMauserCZ_Tracer_2PzD", \
    "csa38_9_MM_32xMP18_Tracer_2PzD", \
    "csa38_9_MM_32xMP28_Tracer_2PzD", \
    "csa38_9_MM_20xMP28_Tracer_2PzD", \
    "csa38_9_MM_32xMP35_Tracer_2PzD", \
    "csa38_9_MM_24xMP35_2PzD", \
    "csa38_9_MM_24xMP35_Tracer_2PzD", \
    "csa38_9_MM_20xMP35_2PzD", \
    "csa38_9_MM_20xMP35_Tracer_2PzD", \
    "CSA38_7_7_100x56R_MKVIII_2PzD", \
    "CSA38_7_7_100x56R_Tracer_2PzD", \
    "CSA38_7_7_100x56R_NoTrace_2PzD", \
    "CSA38_7_7_100x56R_MKVIII_NoTrace_2PzD", \
    "CSA38_7_7_100x56R_AP_NoTrace_2PzD", \
    "csa38_7_92_30xMauserMG_sS_NoTrace_2PzD", \
    "csa38_7_92_30xMauserMG_SmE_NoTrace_2PzD", \
    "csa38_7_92_30xMauserMG_SmK_NoTrace_2PzD", \
    "csa38_7_92_30xMauserMG_TraceOnly_2PzD", \
    "CSA38_7_92_20xMauser_Ball_NoTrace_2PzD", \
    "CSA38_7_92_20xMauser_SmE_2PzD", \
    "CSA38_7_92_20xMauser_SmE_NoTrace_2PzD", \
    "CSA38_7_92_20xMauser_AP_NoTrace_2PzD", \
    "CSA38_7_92_20xMauser_TraceOnly_2PzD", \
    "CSA38_7_92_30xMauser_2PzD", \
    "CSA38_7_92_30xMauser_Ball_NoTrace_2PzD", \
    "CSA38_7_92_30xMauser_SmE_2PzD", \
    "CSA38_7_92_30xMauser_SmE_NoTrace_2PzD", \
    "CSA38_7_92_30xMauser_AP_2PzD", \
    "CSA38_7_92_30xMauser_AP_NoTrace_2PzD", \
    "CSA38_7_92_30xMauser_TraceOnly_2PzD", \
    "csa38_8x56_25xMannlicherMG_sS_NoTrace_2PzD", \
    "csa38_8x56_25xMannlicherMG_SmE_NoTrace_2PzD", \
    "csa38_8x56_25xMannlicherMG_SmK_NoTrace_2PzD", \
    "csa38_8x56_25xMannlicherMG_TraceOnly_2PzD", \
    "LEN_8Rnd_765x17_2PzD", \
    "LEN_8Rnd_9x19_2PzD", \
    "LEN_35Rnd_762x25_2PzD", \
    "LEN_35Rnd_762x25_APT_2PzD", \
    "LEN_35Rnd_762x25_Tracer_2PzD", \
    "LEN_35Rnd_762x25_Mixed_Ball_Tracer_2PzD", \
    "LIB_6Rnd_9x19_Welrod_Tracer_2PzD", \
    "LIB_10Rnd_9x19_M1896_Tracer_2PzD", \
    "LIB_10Rnd_763x25_2PzD", \
    "LIB_10Rnd_763x25_AP_2PzD", \
    "LIB_10Rnd_763x25_Tracer_2PzD", \
    "LIB_10Rnd_763x25_Mixed_Ball_Tracer_2PzD", \
    "LIB_20Rnd_763x25_2PzD", \
    "LIB_20Rnd_763x25_AP_2PzD", \
    "LIB_20Rnd_763x25_Tracer_2PzD", \
    "LIB_20Rnd_763x25_Mixed_Ball_Tracer_2PzD", \
    "LIB_40Rnd_763x25_2PzD", \
    "LIB_40Rnd_763x25_AP_2PzD", \
    "LIB_40Rnd_763x25_Tracer_2PzD", \
    "LIB_40Rnd_763x25_Mixed_Ball_Tracer_2PzD", \
    "LIB_8Rnd_762x25_APT_2PzD", \
    "LIB_8Rnd_762x25_Tracer_2PzD", \
    "LIB_8Rnd_762x25_Mixed_Ball_Tracer_2PzD", \
    "LIB_8Rnd_9x19_Tracer_2PzD", \
    "LIB_8Rnd_9x19_P08_Tracer_2PzD", \
    "LIB_5Rnd_762x54_Mixed_Ball_t30_2PzD", \
    "LIB_5Rnd_762x54_Mixed_HeavyBall_t30_2PzD", \
    "LIB_5Rnd_762x54_Mixed_AP_t30_2PzD", \
    "LIB_5Rnd_762x54_Mixed_Ball_t46_2PzD", \
    "LIB_5Rnd_762x54_Mixed_HeavyBall_t46_2PzD", \
    "LIB_5Rnd_762x54_Mixed_AP_t46_2PzD", \
    "LIB_10Rnd_762x54_Mixed_HeavyBall_t30_2PzD", \
    "LIB_10Rnd_762x54_Mixed_AP_t30_2PzD", \
    "LIB_10Rnd_762x54_Mixed_HeavyBall_t46_2PzD", \
    "LIB_10Rnd_762x54_Mixed_AP_t46_2PzD", \
    "LIB_5Rnd_762x63_AP_2PzD", \
    "LIB_5Rnd_762x63_Mixed_Ball_M2_2PzD", \
    "LIB_5Rnd_762x63_Mixed_HeavyBall_M1_2PzD", \
    "LIB_5Rnd_762x63_Mixed_AP_M2_2PzD", \
    "LIB_5Rnd_792x57_Mixed_SmE_2PzD", \
    "LIB_5Rnd_792x57_Mixed_sS_2PzD", \
    "LIB_5Rnd_792x57_Mixed_SmK_2PzD", \
    "LIB_7Rnd_45ACP_2PzD", \
    "LIB_7Rnd_45ACP_Tracer_2PzD", \
    "LIB_11Rnd_45ACP_2PzD", \
    "LIB_11Rnd_45ACP_Tracer_2PzD", \
    "LIB_8Rnd_762x63_AP_2PzD", \
    "LIB_8Rnd_762x63_Mixed_Ball_M2_2PzD", \
    "LIB_8Rnd_762x63_Mixed_HeavyBall_M1_2PzD", \
    "LIB_8Rnd_762x63_Mixed_AP_M2_2PzD", \
    "LIB_10Rnd_792x57_Mixed_sS_2PzD", \
    "LIB_10Rnd_792x57_Mixed_SmK_2PzD", \
    "LIB_10Rnd_792x57_Mixed_sS_clip_2PzD", \
    "LIB_10Rnd_792x57_SmE_clip_2PzD", \
    "LIB_10Rnd_792x57_Mixed_SmE_clip_2PzD", \
    "LIB_10Rnd_792x57_SmK_clip_2PzD", \
    "LIB_10Rnd_792x57_Mixed_SmK_clip_2PzD", \
    "LIB_10Rnd_792x57_T_clip_2PzD", \
    "LIB_10Rnd_770x56_AP_2PzD", \
    "LIB_10Rnd_770x56_Tracer_2PzD", \
    "LIB_10Rnd_770x56_Mixed_2PzD", \
    "LIB_10Rnd_770x56_Mixed_MkVIII_2PzD", \
    "LIB_10Rnd_770x56_Mixed_AP_2PzD", \
    "LIB_30Rnd_762x33_2PzD", \
    "LIB_30Rnd_762x33_Tracer_2PzD", \
    "LIB_20Rnd_792x57_Mixed_SmE_2PzD", \
    "LIB_20Rnd_792x57_sS_2PzD", \
    "LIB_20Rnd_792x57_Mixed_sS_2PzD", \
    "LIB_20Rnd_792x57_SmK_2PzD", \
    "LIB_20Rnd_792x57_Mixed_SmK_2PzD", \
    "LIB_20Rnd_792x57_TraceOnly_2PzD", \
    "LIB_20Rnd_45ACP_M1_2PzD", \
    "LIB_20Rnd_45ACP_M1_Tracer_2PzD", \
    "LIB_50Rnd_45ACP_Tracer_2PzD", \
    "LIB_32rnd_9x19_Sten_Tracer_2PzD", \
    "LIB_20Rnd_762x63_Mixed_AP_2PzD", \
    "LIB_20Rnd_762x63_Tracer_2PzD", \
    "LIB_20Rnd_762x63_Ball_M2_NoTrace_2PzD", \
    "LIB_20Rnd_762x63_HeavyBall_M1_NoTrace_2PzD", \
    "LIB_20Rnd_762x63_AP_NoTrace_2PzD", \
    "LIB_30Rnd_770x56_Mixed_AP_2PzD", \
    "LIB_30Rnd_770x56_Tracer_2PzD", \
    "LIB_30Rnd_770x56_NoTrace_2PzD", \
    "LIB_30Rnd_770x56_MKVIII_NoTrace_2PzD", \
    "LIB_30Rnd_770x56_AP_NoTrace_2PzD", \
    "LIB_47Rnd_762x54_Mixed_AP_t46_2PzD", \
    "LIB_47Rnd_762x54_Mixed_Ball_t30_2PzD", \
    "LIB_47Rnd_762x54_Mixed_HeavyBall_t30_2PzD", \
    "LIB_47Rnd_762x54_Mixed_AP_t30_2PzD", \
    "LIB_47Rnd_762x54_noTrace_2PzD", \
    "LIB_47Rnd_762x54d_noTrace_2PzD", \
    "LIB_47Rnd_762x54_AP_noTrace_2PzD", \
    "LIB_47Rnd_762x54_t30_2PzD", \
    "LIB_47Rnd_762x54_t46_2PzD", \
    "LIB_63Rnd_762x54_Mixed_AP_t46_2PzD", \
    "LIB_63Rnd_762x54_Mixed_Ball_t30_2PzD", \
    "LIB_63Rnd_762x54_Mixed_HeavyBall_t30_2PzD", \
    "LIB_63Rnd_762x54_Mixed_AP_t30_2PzD", \
    "LIB_63Rnd_762x54_noTrace_2PzD", \
    "LIB_63Rnd_762x54d_noTrace_2PzD", \
    "LIB_63Rnd_762x54_AP_noTrace_2PzD", \
    "LIB_63Rnd_762x54_t30_2PzD", \
    "LIB_63Rnd_762x54_t46_2PzD", \
    "LIB_250Rnd_762x63_2PzD", \
    "LIB_250Rnd_762x63_M1_2PzD", \
    "LIB_250Rnd_762x63_AP_2PzD", \
    "LIB_250Rnd_762x63_TraceOnly_2PzD", \
    "LIB_250Rnd_762x63_NoTrace_2PzD", \
    "LIB_250Rnd_762x63_M1_NoTrace_2PzD", \
    "LIB_250Rnd_762x63_AP_NoTrace_2PzD", \
    "LIB_200Rnd_762x63_2PzD", \
    "LIB_200Rnd_762x63_M1_2PzD", \
    "LIB_200Rnd_762x63_AP_2PzD", \
    "LIB_200Rnd_762x63_TraceOnly_2PzD", \
    "LIB_200Rnd_762x63_NoTrace_2PzD", \
    "LIB_200Rnd_762x63_M1_NoTrace_2PzD", \
    "LIB_200Rnd_762x63_AP_NoTrace_2PzD", \
    "LIB_150Rnd_762x63_2PzD", \
    "LIB_150Rnd_762x63_M1_2PzD", \
    "LIB_150Rnd_762x63_AP_2PzD", \
    "LIB_150Rnd_762x63_TraceOnly_2PzD", \
    "LIB_150Rnd_762x63_NoTrace_2PzD", \
    "LIB_150Rnd_762x63_M1_NoTrace_2PzD", \
    "LIB_150Rnd_762x63_AP_NoTrace_2PzD", \
    "LIB_100Rnd_762x63_AP_2PzD", \
    "LIB_100Rnd_762x63_TraceOnly_2PzD", \
    "LIB_100Rnd_762x63_NoTrace_2PzD", \
    "LIB_100Rnd_762x63_M1_NoTrace_2PzD", \
    "LIB_100Rnd_762x63_AP_NoTrace_2PzD", \
    "LIB_50Rnd_762x63_AP_2PzD", \
    "LIB_50Rnd_762x63_TraceOnly_2PzD", \
    "LIB_50Rnd_762x63_NoTrace_2PzD", \
    "LIB_50Rnd_762x63_M1_NoTrace_2PzD", \
    "LIB_50Rnd_762x63_AP_NoTrace_2PzD", \
    "LIB_50Rnd_792x57_SmE_NoTrace_2PzD", \
    "LIB_50Rnd_792x57_sS_NoTrace_2PzD", \
    "LIB_50Rnd_792x57_Mixed_SmK_2PzD", \
    "LIB_50Rnd_792x57_SmK_NoTrace_2PzD", \
    "LIB_50Rnd_792x57_TraceOnly_2PzD", \
    "LIB_100Rnd_792x57_SmE_NoTrace_2PzD", \
    "LIB_100Rnd_792x57_sS_NoTrace_2PzD", \
    "LIB_100Rnd_792x57_Mixed_SmK_2PzD", \
    "LIB_100Rnd_792x57_SmK_NoTrace_2PzD", \
    "LIB_100Rnd_792x57_TraceOnly_2PzD", \
    "LIB_150Rnd_792x57_Mixed_SmE_2PzD", \
    "LIB_150Rnd_792x57_SmE_NoTrace_2PzD", \
    "LIB_150Rnd_792x57_Mixed_sS_2PzD", \
    "LIB_150Rnd_792x57_sS_NoTrace_2PzD", \
    "LIB_150Rnd_792x57_Mixed_SmK_2PzD", \
    "LIB_150Rnd_792x57_SmK_NoTrace_2PzD", \
    "LIB_150Rnd_792x57_TraceOnly_2PzD", \
    "LIB_200Rnd_792x57_Mixed_SmE_2PzD", \
    "LIB_200Rnd_792x57_SmE_NoTrace_2PzD", \
    "LIB_200Rnd_792x57_Mixed_sS_2PzD", \
    "LIB_200Rnd_792x57_sS_NoTrace_2PzD", \
    "LIB_200Rnd_792x57_Mixed_SmK_2PzD", \
    "LIB_200Rnd_792x57_SmK_NoTrace_2PzD", \
    "LIB_200Rnd_792x57_TraceOnly_2PzD", \
    "LIB_250Rnd_792x57_Mixed_SmE_2PzD", \
    "LIB_250Rnd_792x57_SmE_NoTrace_2PzD", \
    "LIB_250Rnd_792x57_Mixed_sS_2PzD", \
    "LIB_250Rnd_792x57_sS_NoTrace_2PzD", \
    "LIB_250Rnd_792x57_Mixed_SmK_2PzD", \
    "LIB_250Rnd_792x57_SmK_NoTrace_2PzD", \
    "LIB_250Rnd_792x57_TraceOnly_2PzD", \
    "LIB_75Rnd_792x57_NoTrace_2PzD", \
    "LIB_75Rnd_792x57_sS_2PzD", \
    "LIB_75Rnd_792x57_sS_NoTrace_2PzD", \
    "LIB_75Rnd_792x57_SmK_2PzD", \
    "LIB_75Rnd_792x57_SmK_NoTrance_2PzD", \
    "LIB_75Rnd_792x57_TraceOnly_2PzD", \
    "fow_13Rnd_9x19_Tracer_2PzD", \
    "fow_8Rnd_9x19_Vis_2PzD", \
    "fow_30Rnd_762x33_2PzD", \
    "fow_5Rnd_77x58_Tracer_2PzD", \
    "fow_5Rnd_77x58_Mixed_2PzD", \
    "fow_20Rnd_45acp_Tracer_2PzD", \
    "fow_12Rnd_45acp_2PzD", \
    "fow_12Rnd_45acp_Tracer_2PzD", \
    "fow_30Rnd_45acp_M1_2PzD", \
    "fow_30Rnd_45acp_T_M1_2PzD", \
    "fow_20Rnd_45acp_M1_2PzD", \
    "fow_20Rnd_45acp_T_M1_2PzD", \
    "fow_30Rnd_45acp_M3_2PzD", \
    "fow_30Rnd_45acp_T_M3_2PzD", \
    "fow_30Rnd_9x19_mab_Tracer_2PzD", \
    "fow_250Rnd_M1919_2PzD", \
    "fow_200Rnd_M1919_2PzD", \
    "fow_150Rnd_M1919_2PzD", \
    "fow_100Rnd_M1919_2PzD", \
    "fow_30Rnd_77x58_Tracer_2PzD", \
    "fow_30Rnd_77x58_noTrace_2PzD", \
    "fow_6Rnd_12G_Pellets_No0_Buck_2PzD", \
    "fow_6Rnd_12G_Pellets_No1_Buck_2PzD", \
    "fow_6Rnd_12G_Pellets_No2_Buck_2PzD", \
    "fow_6Rnd_12G_Pellets_No3_Buck_2PzD", \
    "fow_6Rnd_12G_Pellets_No4_Buck_2PzD", \
    "fow_6Rnd_12G_Pellets_No4_Bird_2PzD", \
    "fow_5Rnd_12G_Pellets_No0_Buck_2PzD", \
    "fow_5Rnd_12G_Pellets_No1_Buck_2PzD", \
    "fow_5Rnd_12G_Pellets_No2_Buck_2PzD", \
    "fow_5Rnd_12G_Pellets_No3_Buck_2PzD", \
    "fow_5Rnd_12G_Pellets_No4_Buck_2PzD", \
    "fow_5Rnd_12G_Pellets_No4_Bird_2PzD", \
    "w39_9mm_8xPARAVIS_Tracer_2PzD", \
    "w39_7_92_10xMauserS_Mixed_Ball_2PzD", \
    "w39_7_92_10xMauserS_SmE_2PzD", \
    "w39_7_92_10xMauserS_Mixed_SmE_2PzD", \
    "w39_7_92_10xMauserP_Mixed_AP_2PzD", \
    "w39_7_92_10xMauserS_Tracer_2PzD", \
    "w39_9_MM_24xPARA_Tracer_2PzD", \
    "w39_7_92_20xMauserS_Ball_NoTrace_2PzD", \
    "w39_7_92_20xMauserS_SmE", \
    "w39_7_92_20xMauserS_SmE_NoTrace_2PzD", \
    "w39_7_92_20xMauseeP_AP_NoTrace_2PzD", \
    "w39_7_92_20xMauserS_TraceOnly_2PzD"

#define WeaponsArray \
    "fow_w_bren", \
    "fow_w_k98", \
    "fow_w_leeenfield_no4mk1", \
    "fow_w_leeenfield_no4mk1_redwood", \
    "fow_w_m1a1_bazooka", \
    "fow_w_m1a1_thompson", \
    "fow_w_m1_carbine", \
    "fow_w_m1_garand", \
    "fow_w_m2_carbine_2PzD", \
    "fow_w_m3", \
    "fow_w_m55_reising", \
    "fow_w_m1911", \
    "fow_w_m1918a2", \
    "fow_w_m1918a2_bak", \
    "fow_w_m1919a4", \
    "fow_w_m1919a6", \
    "fow_w_mg42", \
    "fow_w_mp40", \
    "fow_w_piat", \
    "fow_w_sten_mk2", \
    "fow_w_sten_mk5", \
    "fow_w_stg44", \
    "fow_w_type10", \
    "fow_w_type14", \
    "fow_w_type92", \
    "fow_w_type99", \
    "fow_w_type99_lmg", \
    "fow_w_type99_sniper", \
    "fow_w_type100", \
    "fow_w_vickers_mounted", \
    "fow_w_webley", \
    "LEN_FG42", \
    "LEN_M3a1", \
    "LEN_M12", \
    "LEN_MP44", \
    "LEN_P35", \
    "LEN_P640b", \
    "LEN_PPK", \
    "LEN_PPS43", \
    "LEN_SMLE_No4Mk1", \
    "LEN_SMLE_No4Mk1T", \
    "LEN_StenMk2", \
    "LEN_StenMk2S", \
    "LEN_StenMk5", \
    "LEN_Welrod", \
    "LIB_AVT_40_2PzD", \
    "LIB_BM37_Barrel", \
    "LIB_BM37_Tripod", \
    "LIB_Colt_M1911", \
    "LIB_DELISLE", \
    "LIB_DP28", \
    "LIB_DT", \
    "LIB_DT_OPTIC", \
    "LIB_G43", \
    "LIB_G3340", \
    "LIB_GrWr34_Barrel", \
    "LIB_GrWr34_Tripod", \
    "LIB_K98", \
    "LIB_K98ZF39", \
    "LIB_Laffete_Tripod", \
    "LIB_M1A1_Bazooka", \
    "LIB_M1A1_Carbine", \
    "LIB_M1A1_Thompson", \
    "LIB_M1_Carbine", \
    "LIB_M1_Garand", \
    "LIB_M2_60_Barrel", \
    "LIB_M2_60_Tripod", \
    "LIB_M2_Carbine_2PzD", \
    "LIB_M2_Flamethrower", \
    "LIB_M2_Tripod", \
    "LIB_M38", \
    "LIB_M44", \
    "LIB_M1895", \
    "LIB_M1903A3_Springfield", \
    "LIB_M1903A4_Springfield", \
    "LIB_M1918A2_BAR", \
    "LIB_M1919A4", \
    "LIB_M1919A4_tripod", \
    "LIB_M1919A6", \
    "LIB_M1928A1_Thompson", \
    "LIB_M1928_Thompson", \
    "LIB_M1928_Thompson_d", \
    "LIB_M9130", \
    "LIB_M9130PU", \
    "LIB_MG34", \
    "LIB_MG34_PT", \
    "LIB_MG34_Tripod", \
    "LIB_MG42", \
    "LIB_MG42_Tripod", \
    "LIB_MP40", \
    "LIB_MP44", \
    "LIB_P08", \
    "LIB_P38", \
    "LIB_PPSh41_d", \
    "LIB_PPSh41_m", \
    "LIB_PTRD", \
    "LIB_PzFaust_30m", \
    "LIB_RPzB", \
    "LIB_RPzB_w", \
    "LIB_SVT_40", \
    "LIB_TT33", \
    "fow_v_fall_bandoleer", \
    "fow_v_heer_g43", \
    "fow_v_heer_k98", \
    "fow_v_heer_k98_ass", \
    "fow_v_heer_k98_bayo", \
    "fow_v_heer_k98_light", \
    "fow_v_heer_mg", \
    "fow_v_heer_mp40", \
    "fow_v_heer_mp40_nco", \
    "fow_v_heer_mp44", \
    "fow_v_heer_p38", \
    "fow_v_ija_bayonet", \
    "fow_v_ija_grenadier", \
    "fow_v_ija_medic", \
    "fow_v_ija_mg", \
    "fow_v_ija_mortar", \
    "fow_v_ija_nco", \
    "fow_v_ija_officer", \
    "fow_v_ija_rifle", \
    "fow_v_uk_base", \
    "fow_v_uk_bren", \
    "fow_v_uk_officer", \
    "fow_v_uk_para_base", \
    "fow_v_uk_para_bren", \
    "fow_v_uk_para_sten", \
    "fow_v_uk_sten", \
    "fow_v_usmc_45", \
    "fow_v_usmc_bar", \
    "fow_v_usmc_carbine", \
    "fow_v_usmc_garand", \
    "fow_v_usmc_thompson", \
    "fow_v_usmc_thompson_nco", \
    "fow_v_us_45", \
    "fow_v_us_asst_mg", \
    "fow_v_us_bar", \
    "fow_v_us_carbine", \
    "fow_v_us_carbine_eng", \
    "fow_v_us_carbine_nco", \
    "fow_v_us_garand", \
    "fow_v_us_grenade", \
    "fow_v_us_medic", \
    "fow_v_us_thompson", \
    "fow_v_us_thompson_nco", \
    "V_LIB_DAK_FieldOfficer", \
    "V_LIB_DAK_OfficerBelt", \
    "V_LIB_DAK_OfficerVest", \
    "V_LIB_DAK_PioneerVest", \
    "V_LIB_DAK_PrivateBelt", \
    "V_LIB_DAK_SniperBelt", \
    "V_LIB_DAK_VestG43", \
    "V_LIB_DAK_VestKar98", \
    "V_LIB_DAK_VestMG", \
    "V_LIB_DAK_VestMP40", \
    "V_LIB_DAK_VestSTG", \
    "V_LIB_DAK_VestUnterofficer", \
    "V_LIB_GER_FieldOfficer", \
    "V_LIB_GER_OfficerBelt", \
    "V_LIB_GER_OfficerVest", \
    "V_LIB_GER_PioneerVest", \
    "V_LIB_GER_PrivateBelt", \
    "V_LIB_GER_SniperBelt", \
    "V_LIB_GER_TankPrivateBelt", \
    "V_LIB_GER_VestG43", \
    "V_LIB_GER_VestKar98", \
    "V_LIB_GER_VestMG", \
    "V_LIB_GER_VestMP40", \
    "V_LIB_GER_VestSTG", \
    "V_LIB_GER_VestUnterofficer", \
    "V_LIB_SOV_IShBrVestMG", \
    "V_LIB_SOV_IShBrVestPPShDisc", \
    "V_LIB_SOV_IShBrVestPPShMag", \
    "V_LIB_SOV_RAZV_MGBelt", \
    "V_LIB_SOV_RAZV_OfficerVest", \
    "V_LIB_SOV_RAZV_PPShBelt", \
    "V_LIB_SOV_RAZV_SVTBelt", \
    "V_LIB_SOV_RA_Belt", \
    "V_LIB_SOV_RA_MGBelt", \
    "V_LIB_SOV_RA_MosinBelt", \
    "V_LIB_SOV_RA_OfficerVest", \
    "V_LIB_SOV_RA_PPShBelt", \
    "V_LIB_SOV_RA_SniperVest", \
    "V_LIB_SOV_RA_SVTBelt", \
    "V_LIB_SOV_RA_TankOfficerSet", \
    "V_LIB_US_AB_Vest_Bar", \
    "V_LIB_US_AB_Vest_Carbine", \
    "V_LIB_US_AB_Vest_Carbine_nco", \
    "V_LIB_US_AB_Vest_Garand", \
    "V_LIB_US_AB_Vest_Grenadier", \
    "V_LIB_US_AB_Vest_Thompson", \
    "V_LIB_US_AB_Vest_Thompson_nco", \
    "V_LIB_US_Vest_45", \
    "V_LIB_US_Vest_Asst_MG", \
    "V_LIB_US_Vest_Bar", \
    "V_LIB_US_Vest_Carbine", \
    "V_LIB_US_Vest_Carbine_eng", \
    "V_LIB_US_Vest_Carbine_nco", \
    "V_LIB_US_Vest_Garand", \
    "V_LIB_US_Vest_Grenadier", \
    "V_LIB_US_Vest_Medic", \
    "V_LIB_US_Vest_Medic2", \
    "V_LIB_US_Vest_Thompson", \
    "V_LIB_US_Vest_Thompson_nco", \
    "V_LIB_WP_G43Vest", \
    "V_LIB_WP_Kar98Vest", \
    "V_LIB_WP_MGVest", \
    "V_LIB_WP_MP40Vest", \
    "V_LIB_WP_OfficerVest", \
    "V_LIB_WP_SniperBela", \
    "V_LIB_WP_STGVest"

#define QUOTE(var1) #var1

#define YEAR(x) class Number##x {\
    name = QUOTE(x);\
    value = x;\
}
