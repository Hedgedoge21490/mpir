/* Generated by tuneup.c, 2014-03-20, gcc 4.7 */

#define MUL_KARATSUBA_THRESHOLD          21
#define MUL_TOOM3_THRESHOLD             133
#define MUL_TOOM4_THRESHOLD             360
#define MUL_TOOM8H_THRESHOLD            414

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          30
#define SQR_TOOM3_THRESHOLD             121
#define SQR_TOOM4_THRESHOLD             532
#define SQR_TOOM8_THRESHOLD             552

#define POWM_THRESHOLD                  984

#define DIVREM_1_NORM_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIVREM_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX  /* never */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1  /* native */
#define USE_PREINV_MOD_1                  1
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */
#define MOD_1_1_THRESHOLD                 5
#define MOD_1_2_THRESHOLD                 8
#define MOD_1_3_THRESHOLD                32
#define DIVREM_HENSEL_QR_1_THRESHOLD      7
#define RSH_DIVREM_HENSEL_QR_1_THRESHOLD      6
#define DIVREM_EUCLID_HENSEL_THRESHOLD     25

#define MUL_FFT_FULL_THRESHOLD         7232

#define SQR_FFT_FULL_THRESHOLD         3904

#define MULLOW_BASECASE_THRESHOLD         9
#define MULLOW_DC_THRESHOLD              29
#define MULLOW_MUL_THRESHOLD           9970

#define MULHIGH_BASECASE_THRESHOLD       13
#define MULHIGH_DC_THRESHOLD             33
#define MULHIGH_MUL_THRESHOLD          5732

#define MULMOD_2EXPM1_THRESHOLD          16

#define SB_DIVAPPR_Q_SMALL_THRESHOLD      0  /* always */
#define SB_DIV_QR_SMALL_THRESHOLD         7
#define DC_DIV_QR_THRESHOLD              60
#define INV_DIV_QR_THRESHOLD           2747
#define INV_DIVAPPR_Q_N_THRESHOLD        60
#define DC_DIV_Q_THRESHOLD               60
#define INV_DIV_Q_THRESHOLD            2009
#define DC_DIVAPPR_Q_THRESHOLD           32
#define INV_DIVAPPR_Q_THRESHOLD       19406
#define DC_BDIV_QR_THRESHOLD             51
#define DC_BDIV_Q_THRESHOLD              31

#define ROOTREM_THRESHOLD                 6

#define MATRIX22_STRASSEN_THRESHOLD      27
#define HGCD_THRESHOLD                  105
#define HGCD_APPR_THRESHOLD              50
#define HGCD_REDUCE_THRESHOLD          6852
#define GCD_DC_THRESHOLD                535
#define GCDEXT_DC_THRESHOLD             368
#define JACOBI_BASE_METHOD                1

#define GET_STR_DC_THRESHOLD             13
#define GET_STR_PRECOMPUTE_THRESHOLD     22
#define SET_STR_DC_THRESHOLD            542
#define SET_STR_PRECOMPUTE_THRESHOLD   1655

#define FAC_DSC_THRESHOLD               890
#define FAC_ODD_THRESHOLD                29

/* fft_tuning -- autogenerated by tune-fft */

#define FFT_TAB \
   { { 4, 4 }, { 4, 3 }, { 3, 2 }, { 2, 1 }, { 2, 1 } }

#define MULMOD_TAB \
   { 4, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 3, 2, 2, 2, 2, 2, 2, 1, 2, 2, 1, 1 }

#define FFT_N_NUM 23

#define FFT_MULMOD_2EXPP1_CUTOFF 256


/* Tuneup completed successfully, took 151 seconds */

