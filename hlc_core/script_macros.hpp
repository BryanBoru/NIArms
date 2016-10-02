#define private		0
#define protected	1
#define public		2

#define true	1
#define false	0

#define __M_MAG(x,y)	class _xx_##x {magazine = ##x; count = ##y;}
#define __M_WEP(x,y)	class _xx_##x {weapon = ##x; count = ##y;}
#define __M_ITM(x,y)	class _xx_##x {name = ##x; count = ##y;}

#define __OPTIC_CQB opticType = 0
#define __OPTIC_DMR opticType = 1
#define __OPTIC_SNP opticType = 2

#define __ROF(rpm) reloadtime = (60/##rpm)
#define __MOA(__X) dispersion = __EVAL(__X * 0.0002909)

#define __OPTICSZOOM_1X opticsZoomMin = 0.25; opticsZoomMax = 1.25; opticsZoomInit = 0.75

#define __556STANAG_MAGS "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_SPR", "hlc_30rnd_556x45_MDim", "hlc_30rnd_556x45_TDim", "hlc_50rnd_556x45_EPR", "hlc_30rnd_556x45_S"
#define __556STANAG_BI_MAGS "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_green", "30Rnd_556x45_Stanag_red"
#define __556STANAG_RHS_MAGS "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow", "rhs_mag_30Rnd_556x45_M200_Stanag"
#define __556STANAG_CUP_MAGS "CUP_30Rnd_556x45_Stanag", "CUP_100Rnd_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"

#define __556NATO_BELTS "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_B_SAW", "hlc_200rnd_556x45_T_SAW", "hlc_200rnd_556x45_Mdim_SAW"
#define __556NATO_BI_BELTS "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_Red_F", "200Rnd_556x45_Box_Tracer_F", "200Rnd_556x45_Box_Tracer_Red_F"
#define __556NATO_RHS_BELTS "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_200Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_M200_soft_pouch", "rhs_200rnd_556x45_M_SAW", "rhs_200rnd_556x45_T_SAW", "rhs_200rnd_556x45_B_SAW"
#define __556NATO_CUP_BELTS "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_200Rnd_TE4_Green_Tracer_556x45_M249", "CUP_200Rnd_TE1_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Green_Tracer_556x45_M249", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1", "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1"

#define __556NATO_BI_DRUMS "150Rnd_556x45_Drum_Mag_F", "150Rnd_556x45_Drum_Mag_Tracer_F"

#define __762NATO_BELTS "hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_B_M60E4", "hlc_100Rnd_762x51_Barrier_M60E4", "hlc_100Rnd_762x51_T_M60E4", "hlc_100Rnd_762x51_Mdim_M60E4"
#define __762NATO_BI_BELTS "150Rnd_762x51_Box", "150Rnd_762x51_Box_Tracer"
#define __762NATO_RHS_BELTS "rhsusf_50Rnd_762x51", "rhsusf_50Rnd_762x51_m61_ap", "rhsusf_50Rnd_762x51_m62_tracer", "rhsusf_50Rnd_762x51_m80a1epr", "rhsusf_50Rnd_762x51_m82_blank", "rhsusf_100Rnd_762x51", "rhsusf_100Rnd_762x51_m61_ap", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m80a1epr", "rhsusf_100Rnd_762x51_m82_blank", "rhsusf_50Rnd_762x51_m993", "rhsusf_100Rnd_762x51_m993"
#define __762NATO_CUP_BELTS "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"

#define __545x39_MAGS "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK", "hlc_60Rnd_545x39_t_rpk"
#define __545x39_BI_MAGS "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_Green_F", "30Rnd_545x39_Mag_Tracer_F", "30Rnd_545x39_Mag_Tracer_Green_F"
#define __545x39_RHS_MAGS "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_45Rnd_545x39_AK_green", "rhs_45Rnd_545x39_7U1_AK"

#define __762x39_MAGS "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_t_ak", "hlc_45Rnd_762x39_m_rpk", "HLC_45rnd_762x39_T_RPK", "hlc_30rnd_762x39_s_ak"
#define __762x39_BI_MAGS "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_Green_F", "30Rnd_762x39_Mag_Tracer_F", "30Rnd_762x39_Mag_Tracer_Green_F"
#define __762x39_RHS_MAGS "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_U"

#define __40MM_GP_GRENADES "hlc_VOG25_AK", "hlc_GRD_White", "hlc_GRD_Red", "hlc_GRD_Green", "hlc_GRD_Yellow", "hlc_GRD_Purple", "hlc_GRD_Blue", "hlc_GRD_Orange"
#define __40MM_GP_RHS_GRENADES "rhs_VOG25", "rhs_VOG25p", "rhs_vg40tb", "rhs_vg40sz", "rhs_vg40op_white", "rhs_vg40op_green", "rhs_vg40op_red", "rhs_GRD40_white", "rhs_GRD40_green", "rhs_GRD40_red", "rhs_VG40MD_White", "rhs_VG40MD_Green", "rhs_VG40MD_Red", "rhs_GDM40"

#define __40MM_M203_BI_GRENADES "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"
#define __40MM_M203_RHS_GRENADES "rhs_mag_M441_HE", "rhs_mag_M433_HEDP", "rhs_mag_M4009", "rhs_mag_m576", "rhs_mag_M585_white", "rhs_mag_M661_green", "rhs_mag_M662_red", "rhs_mag_M713_red", "rhs_mag_M714_white", "rhs_mag_M715_green", "rhs_mag_M716_yellow"
#define __40MM_M203_CUP_GRENADES "CUP_1Rnd_StarCluster_White_M203", "CUP_1Rnd_StarCluster_Red_M203", "CUP_1Rnd_StarCluster_Green_M203", "CUP_1Rnd_StarFlare_White_M203", "CUP_1Rnd_StarFlare_Red_M203", "CUP_1Rnd_StarFlare_Green_M203", "CUP_1Rnd_HE_M203", "CUP_1Rnd_HEDP_M203", "CUP_FlareWhite_M203", "CUP_FlareGreen_M203", "CUP_FlareRed_M203", "CUP_FlareYellow_M203", "CUP_1Rnd_Smoke_M203", "CUP_1Rnd_SmokeRed_M203", "CUP_1Rnd_SmokeGreen_M203", "CUP_1Rnd_SmokeYellow_M203"

#define __762FAL_MAGS "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_mk316_fal", "hlc_20Rnd_762x51_Barrier_fal", "hlc_20Rnd_762x51_t_fal", "hlc_20Rnd_762x51_TDim_fal", "hlc_20Rnd_762x51_S_fal", "hlc_50rnd_762x51_M_FAL"
