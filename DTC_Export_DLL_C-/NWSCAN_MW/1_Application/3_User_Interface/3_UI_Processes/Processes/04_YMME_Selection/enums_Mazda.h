/******************************************************************************************************************
* Engineer    : automatic generated
* Date        : 10/14/2015
* Version   : V01.00.01
********************************************************************************************************************/


#ifndef __ENUMS_Mazda_H__
#define __ENUMS_Mazda_H__





typedef enum _enumCommand_Mazda{
    ecommand_UNKNOWN_Mazda   = 0,
    ecommand_3E_____01_Mazda  = 1,
    ecommand_02_____3E_____01_____00_____00_____00_____00_____00_Mazda  = 2,
    ecommand_22_____02_____00_Mazda  = 3,
    ecommand_14_Mazda  = 4,
    ecommand_13_Mazda  = 5,
    ecommand_13_____FF_____FF_Mazda  = 6,
    ecommand_03_____22_____02_____00_____00_____00_____00_____00_Mazda  = 7,
    ecommand_03_____14_____FF_____00_____00_____00_____00_____00_Mazda  = 8,
    ecommand_04_____18_____00_____FF_____00_____00_____00_____00_Mazda  = 9,
    ecommand_03_____22_____02_____02_____00_____00_____00_____00_Mazda  = 10,
    ecommand_04_____14_____FF_____FF_____FF_____00_____00_____00_Mazda  = 11,
    ecommand_03_____19_____02_____8F_____00_____00_____00_____00_Mazda  = 12,
}enumCommand_Mazda;


typedef enum _enumReaddtccommandlist_Mazda{
    ereaddtccommandlist_UNKNOWN_Mazda   = 0,
    ereaddtccommandlist_13_CM___1_Mazda  = 1,
    ereaddtccommandlist_22_____02_____00_Number_2_1____13_____FF_____FF_CM___2_Mazda  = 2,
    ereaddtccommandlist_22_____02_____00_Number_2_1____13_CM___3_Mazda  = 3,
    ereaddtccommandlist_04_____18_____00_____FF_____00_____00_____00_____00_CM___4_Mazda  = 4,
    ereaddtccommandlist_03_____19_____02_____8F_____00_____00_____00_____00_CM___5_Mazda  = 5,
}enumReaddtccommandlist_Mazda;


typedef enum _enumCommandlist_Mazda{
    ecommandlist_UNKNOWN_Mazda   = 0,
    ecommandlist_22_____02_____00_Mazda  = 1,
    ecommandlist_14_Mazda  = 2,
    ecommandlist_03_____22_____02_____00_____00_____00_____00_____00_Mazda  = 3,
    ecommandlist_03_____14_____FF_____00_____00_____00_____00_____00_Mazda  = 4,
    ecommandlist_03_____22_____02_____02_____00_____00_____00_____00_Mazda  = 5,
    ecommandlist_04_____14_____FF_____FF_____FF_____00_____00_____00_Mazda  = 6,
}enumCommandlist_Mazda;


typedef enum _enumEcuinfotype_Mazda{
    eecuinfotype_UNKNOWN_Mazda   = 0,
}enumEcuinfotype_Mazda;


typedef enum _enumDtcreadtype_Mazda{
    edtcreadtype_UNKNOWN_Mazda   = 0,
    edtcreadtype_ReadDTCType_ID0001_Mazda  = 1,
    edtcreadtype_ReadDTCType_ID0000_Mazda  = 2,
}enumDtcreadtype_Mazda;


typedef enum _enumLookuptable_Mazda{
    elookuptable_UNKNOWN_Mazda   = 0,
}enumLookuptable_Mazda;


typedef enum _enumMessageid_Mazda{
    emessageid_UNKNOWN_Mazda   = 0,
    emessageid_Mazda_ABS_PROTOCOL_ISO9141_001_Mazda  = 1,
    emessageid_Mazda_PCM_PROTOCOL_ISO9141_002_Mazda  = 2,
    emessageid_Mazda_PCM_PROTOCOL_PWM_003_Mazda  = 3,
    emessageid_Mazda_GEM_PROTOCOL_ISO9141_004_Mazda  = 4,
    emessageid_Mazda_RAP_PROTOCOL_ISO9141_005_Mazda  = 5,
    emessageid_Mazda_IABM_PROTOCOL_ISO9141_006_Mazda  = 6,
    emessageid_Mazda_RCM_PROTOCOL_ISO9141_007_Mazda  = 7,
    emessageid_Mazda_PATS_PROTOCOL_PWM_008_Mazda  = 8,
    emessageid_Mazda_4X4M_PROTOCOL_ISO9141_009_Mazda  = 9,
    emessageid_Mazda_IC_PROTOCOL_PWM_010_Mazda  = 10,
    emessageid_Mazda_TCM_PROTOCOL_ISO9141_011_Mazda  = 11,
    emessageid_Mazda_TCM_PROTOCOL_CAN_012_Mazda  = 12,
    emessageid_Mazda_PCM_PROTOCOL_CAN_013_Mazda  = 13,
    emessageid_Mazda_PAM_PROTOCOL_ISO9141_014_Mazda  = 14,
    emessageid_Mazda_IC_PROTOCOL_CAN_015_Mazda  = 15,
    emessageid_Mazda_EPS_PROTOCOL_CAN_016_Mazda  = 16,
    emessageid_Mazda_TPM_PROTOCOL_CAN_017_Mazda  = 17,
    emessageid_Mazda_RKE_PROTOCOL_CAN_018_Mazda  = 18,
    emessageid_Mazda_TPM_PROTOCOL_PWM_019_Mazda  = 19,
    emessageid_Mazda_4X4M_PROTOCOL_CAN_020_Mazda  = 20,
    emessageid_Mazda_ABS_PROTOCOL_CAN_021_Mazda  = 21,
    emessageid_Mazda_GEM_PROTOCOL_MCAN_022_Mazda  = 22,
    emessageid_Mazda_EATC_PROTOCOL_MCAN_023_Mazda  = 23,
    emessageid_Mazda_RCM_PROTOCOL_CAN_024_Mazda  = 24,
    emessageid_Mazda_OCS_PROTOCOL_CAN_025_Mazda  = 25,
    emessageid_Mazda_GEM_PROTOCOL_CAN_026_Mazda  = 26,
    emessageid_Mazda_SDARS_PROTOCOL_MCAN_027_Mazda  = 27,
    emessageid_Mazda_RHT_PROTOCOL_CAN_028_Mazda  = 28,
    emessageid_Mazda_BSML_PROTOCOL_CAN_UDS_029_Mazda  = 29,
    emessageid_Mazda_BSMR_PROTOCOL_CAN_UDS_030_Mazda  = 30,
    emessageid_Mazda_GEM_SJB_PROTOCOL_CAN_031_Mazda  = 31,
    emessageid_Mazda_OBD_BCM_PROTOCOL_CAN_032_Mazda  = 32,
    emessageid_Mazda_BCM_PROTOCOL_CAN_033_Mazda  = 33,
    emessageid_Mazda_GEM_SJB_PROTOCOL_MCAN_034_Mazda  = 34,
    emessageid_Mazda_FDIM_PROTOCOL_MCAN_035_Mazda  = 35,
    emessageid_Mazda_FCIM_PROTOCOL_MCAN_036_Mazda  = 36,
    emessageid_Mazda_ACM_PROTOCOL_MCAN_037_Mazda  = 37,
    emessageid_Mazda_HVAC_PROTOCOL_MCAN_038_Mazda  = 38,
    emessageid_Mazda_PSCM_PROTOCOL_CAN_039_Mazda  = 39,
    emessageid_Mazda_LCM_PROTOCOL_ISO9141_040_Mazda  = 40,
    emessageid_Mazda_RCM_PROTOCOL_CAN_UDS_041_Mazda  = 41,
    emessageid_Mazda_ACM_PROTOCOL_CAN_UDS_042_Mazda  = 42,
    emessageid_Mazda_APIM_PROTOCOL_CAN_UDS_043_Mazda  = 43,
    emessageid_Mazda_APIM_PROTOCOL_CAN_044_Mazda  = 44,
    emessageid_Mazda_BCM_GEM_PROTOCOL_CAN_UDS_045_Mazda  = 45,
    emessageid_Mazda_PCM_PROTOCOL_CAN_UDS_046_Mazda  = 46,
    emessageid_Mazda_ACM_PROTOCOL_MCAN_____UDS_047_Mazda  = 47,
    emessageid_Mazda_ABS_PROTOCOL_CAN_UDS_048_Mazda  = 48,
    emessageid_Mazda_TCM_PROTOCOL_CAN_UDS_049_Mazda  = 49,
    emessageid_Mazda_DSM_PROTOCOL_CAN_UDS_050_Mazda  = 50,
    emessageid_Mazda_ACU_PROTOCOL_CAN_UDS_051_Mazda  = 51,
    emessageid_Mazda_PAM_PROTOCOL_CAN_UDS_052_Mazda  = 52,
    emessageid_Mazda_GPSM_PROTOCOL_MCAN_____UDS_053_Mazda  = 53,
    emessageid_Mazda_ACCM_PROTOCOL_CAN_UDS_054_Mazda  = 54,
    emessageid_Mazda_HVAC_PROTOCOL_MCAN_____UDS_055_Mazda  = 55,
    emessageid_Mazda_IC_PROTOCOL_CAN_UDS_056_Mazda  = 56,
    emessageid_Mazda_MID_PROTOCOL_MCAN_057_Mazda  = 57,
    emessageid_Mazda_LTM_PROTOCOL_CAN_058_Mazda  = 58,
    emessageid_Mazda_VSM_PROTOCOL_CAN_UDS_059_Mazda  = 59,
    emessageid_Mazda_EPS_PROTOCOL_CAN_UDS_060_Mazda  = 60,
    emessageid_Mazda_RKE_PROTOCOL_CAN_UDS_061_Mazda  = 61,
    emessageid_Mazda_EATC_PROTOCOL_CAN_UDS_062_Mazda  = 62,
    emessageid_Mazda_FACM_PROTOCOL_CAN_063_Mazda  = 63,
    emessageid_Mazda_EATC_PROTOCOL_MCAN_____UDS_064_Mazda  = 64,
    emessageid_Mazda_AFS_PROTOCOL_CAN_UDS_065_Mazda  = 65,
    emessageid_Mazda_RVM_PROTOCOL_CAN_UDS_066_Mazda  = 66,
    emessageid_Mazda_FFH_PROTOCOL_MCAN_067_Mazda  = 67,
    emessageid_Mazda_ICCM_PROTOCOL_CAN_068_Mazda  = 68,
    emessageid_Mazda_IC_PROTOCOL_MCAN_____UDS_069_Mazda  = 69,
    emessageid_Mazda_LPSDM_PROTOCOL_CAN_070_Mazda  = 70,
    emessageid_Mazda_RPSDM_PROTOCOL_CAN_071_Mazda  = 71,
    emessageid_Mazda_FSC_PROTOCOL_CAN_UDS_072_Mazda  = 72,
    emessageid_Mazda_F_PROTOCOL_MCAN_____UDS_073_Mazda  = 73,
    emessageid_Mazda_SSU_PROTOCOL_CAN_UDS_074_Mazda  = 74,
    emessageid_Mazda_DCDC_PROTOCOL_CAN_UDS_075_Mazda  = 75,
    emessageid_Mazda_4X4M_PROTOCOL_CAN_UDS_076_Mazda  = 76,
    emessageid_Mazda_SBS_MRCC_PROTOCOL_CAN_UDS_077_Mazda  = 77,
    emessageid_Mazda_ICA_PROTOCOL_CAN_UDS_078_Mazda  = 78,
    emessageid_Mazda_AM_PROTOCOL_CAN_UDS_079_Mazda  = 79,
    emessageid_Mazda_R_PROTOCOL_CAN_UDS_080_Mazda  = 80,
    emessageid_Mazda_BSML_PROTOCOL_MCAN_____UDS_081_Mazda  = 81,
    emessageid_Mazda_BSMR_PROTOCOL_MCAN_____UDS_082_Mazda  = 82,
}enumMessageid_Mazda;


typedef enum _enumSystem_Mazda{
    esystem_UNKNOWN_Mazda   = 0,
    esystem_PCM_Mazda  = 1,
    esystem_ABS_Mazda  = 2,
    esystem_GEM_Mazda  = 3,
    esystem_IABM_Mazda  = 4,
    esystem_RAP_Mazda  = 5,
    esystem_RCM_Mazda  = 6,
    esystem_PATS_Mazda  = 7,
    esystem_4X4M_Mazda  = 8,
    esystem_IC_Mazda  = 9,
    esystem_TCM_Mazda  = 10,
    esystem_PAM_Mazda  = 11,
    esystem_EPS_Mazda  = 12,
    esystem_TPM_Mazda  = 13,
    esystem_RKE_Mazda  = 14,
    esystem_EATC_Mazda  = 15,
    esystem_OCS_Mazda  = 16,
    esystem_SDARS_Mazda  = 17,
    esystem_BSML_Mazda  = 18,
    esystem_BSMR_Mazda  = 19,
    esystem_RHT_Mazda  = 20,
    esystem_GEM_SJB_Mazda  = 21,
    esystem_ACM_Mazda  = 22,
    esystem_BCM_Mazda  = 23,
    esystem_FCIM_Mazda  = 24,
    esystem_FDIM_Mazda  = 25,
    esystem_HVAC_Mazda  = 26,
    esystem_OBD_BCM_Mazda  = 27,
    esystem_PSCM_Mazda  = 28,
    esystem_LCM_Mazda  = 29,
    esystem_APIM_Mazda  = 30,
    esystem_BCM_GEM_Mazda  = 31,
    esystem_ACU_Mazda  = 32,
    esystem_DSM_Mazda  = 33,
    esystem_ACCM_Mazda  = 34,
    esystem_GPSM_Mazda  = 35,
    esystem_MID_Mazda  = 36,
    esystem_LTM_Mazda  = 37,
    esystem_VSM_Mazda  = 38,
    esystem_AFS_Mazda  = 39,
    esystem_FACM_Mazda  = 40,
    esystem_FFH_Mazda  = 41,
    esystem_RVM_Mazda  = 42,
    esystem_ICCM_Mazda  = 43,
    esystem_LPSDM_Mazda  = 44,
    esystem_RPSDM_Mazda  = 45,
    esystem_AM_Mazda  = 46,
    esystem_DCDC_Mazda  = 47,
    esystem_F_BCM_Mazda  = 48,
    esystem_FSC_Mazda  = 49,
    esystem_ICA_Mazda  = 50,
    esystem_R_BCM_Mazda  = 51,
    esystem_SBS_MRCC_Mazda  = 52,
    esystem_SSU_Mazda  = 53,
}enumSystem_Mazda;


typedef enum _enumSubsystem_Mazda{
    esubsystem_UNKNOWN_Mazda   = 0,
}enumSubsystem_Mazda;


typedef enum _enumTiming_Mazda{
    etiming_UNKNOWN_Mazda   = 0,
    etiming_Twup_Mazda_ISO9141_Mazda  = 1,
    etiming_TimingP_Mazda_ISO9141_Mazda  = 2,
    etiming_TimingW_Mazda_ISO9141_Mazda  = 3,
    etiming_Twup_Mazda_PWM_Mazda  = 4,
    etiming_TimingP_Mazda_PWM_Mazda  = 5,
    etiming_TimingW_Mazda_PWM_Mazda  = 6,
    etiming_TimingP_Mazda_CAN_Mazda  = 7,
    etiming_TimingP_Mazda_MCAN_Mazda  = 8,
    etiming_TimingP_Mazda_CAN_UDS_Mazda  = 9,
    etiming_TimingP_Mazda_MCAN_____UDS_Mazda  = 10,
    etiming_Kw1281Default_Mazda  = 11,
    etiming_TimingP_Chrysler_CAN_Mazda  = 12,
    etiming_TimingP_Chrysler_CAN_C_UDS_Mazda  = 13,
    etiming_TimingP_Chrysler_CAN_I_UDS_Mazda  = 14,
    etiming_TimingP_Chrysler_CCD_Mazda  = 15,
    etiming_TimingP_Chrysler_CCD2_Mazda  = 16,
    etiming_TimingP_Chrysler_KW2000_Mazda  = 17,
    etiming_TimingP_Chrysler_KWFB_Mazda  = 18,
    etiming_TimingP_Chrysler_MB_ISO_Mazda  = 19,
    etiming_TimingP_Chrysler_MUT_Mazda  = 20,
    etiming_TimingP_Chrysler_SCI_Mazda  = 21,
    etiming_TimingP_Chrysler_VPW_Mazda  = 22,
    etiming_TimingP_Ford_CAN_Mazda  = 23,
    etiming_TimingP_Ford_CAN_UDS_Mazda  = 24,
    etiming_TimingP_Ford_ISO9141_Mazda  = 25,
    etiming_TimingP_Ford_MCAN_Mazda  = 26,
    etiming_TimingP_Ford_MCAN_____UDS_Mazda  = 27,
    etiming_TimingP_Ford_PWM_Mazda  = 28,
    etiming_TimingP_Ford_UBP_Mazda  = 29,
    etiming_TimingP_GM_ALDL_Mazda  = 30,
    etiming_TimingP_GM_CAN_Mazda  = 31,
    etiming_TimingP_GM_GMLAN_Mazda  = 32,
    etiming_TimingP_GM_KW_Mazda  = 33,
    etiming_TimingP_GM_SDL_Mazda  = 34,
    etiming_TimingP_GM_SWCAN_Mazda  = 35,
    etiming_TimingP_GM_VPW_Mazda  = 36,
    etiming_TimingP_Honda_92HM_Mazda  = 37,
    etiming_TimingP_Honda_95HM_Mazda  = 38,
    etiming_TimingP_Honda_BOSCH_Mazda  = 39,
    etiming_TimingP_Honda_CAN_Mazda  = 40,
    etiming_TimingP_Honda_H99B_Mazda  = 41,
    etiming_TimingP_Honda_KW2000_Mazda  = 42,
    etiming_TimingP_Toyota_CAN_Mazda  = 43,
    etiming_TimingP_Toyota_ISO9141_Mazda  = 44,
    etiming_TimingP_Toyota_KW2000_Mazda  = 45,
    etiming_TimingP_Toyota_VPW_Mazda  = 46,
    etiming_TimingW_Chrysler_MB_ISO_Mazda  = 47,
    etiming_TimingW_Chrysler_MUT_Mazda  = 48,
    etiming_TimingW_Ford_ISO9141_Mazda  = 49,
    etiming_TimingW_GM_KW_Mazda  = 50,
    etiming_TimingW_Honda_BOSCH_Mazda  = 51,
    etiming_TimingW_Toyota_ISO9141_Mazda  = 52,
    etiming_Twup_Chrysler_KW2000_Mazda  = 53,
    etiming_Twup_Chrysler_KWFB_Mazda  = 54,
    etiming_Twup_Ford_UBP_Mazda  = 55,
    etiming_Twup_GM_KW_Mazda  = 56,
    etiming_Twup_Honda_92HM_Mazda  = 57,
    etiming_Twup_Honda_95HM_Mazda  = 58,
    etiming_Twup_Honda_H99B_Mazda  = 59,
    etiming_Twup_Honda_KW2000_Mazda  = 60,
    etiming_Twup_Toyota_KW2000_10400_Mazda  = 61,
    etiming_Twup_Toyota_KW2000_9600_Mazda  = 62,
    etiming_TwupHonda_00_Mazda  = 63,
    etiming_TimingP_Normal_Mazda  = 64,
    etiming_TimingP_CANNormal_Mazda  = 65,
    etiming_TimingW_Normal_Mazda  = 66,
    etiming_TwupGeneral_Mazda  = 67,
    etiming_Twup_GM_KW9600_Mazda  = 68,
    etiming_TimingP_Volvo_D2_Mazda  = 69,
    etiming_TimingP_Volvo_GGD_Mazda  = 70,
    etiming_TimingP_Volvo_KW_Mazda  = 71,
    etiming_TimingW_Volvo_D2_Mazda  = 72,
    etiming_Twup_Volvo_KW_Mazda  = 73,
    etiming_Twup_Volvo_GGD_Mazda  = 74,
    etiming_Twup_Volvo_D2_Mazda  = 75,
    etiming_TimingW_Volvo_GGD_Mazda  = 76,
    etiming_TimingW_Volvo_KW_Mazda  = 77,
    etiming_TimingP_BMW_KW2000_Mazda  = 78,
    etiming_TimingP_Mercedes_Benz_CAN_Mazda  = 79,
    etiming_TimingP_Mercedes_Benz_CAN_UDS_Mazda  = 80,
    etiming_TimingP_Nissan_DDL1_Mazda  = 81,
}enumTiming_Mazda;


typedef enum _enumErasetype_Mazda{
    eerasetype_UNKNOWN_Mazda   = 0,
}enumErasetype_Mazda;


typedef enum _enumModel_Mazda{
    emodel_UNKNOWN_Mazda   = 0,
    emodel_626_Mazda  = 1,
    emodel_B_Series_Mazda  = 2,
    emodel_Millenia_Mazda  = 3,
    emodel_MPV_Mazda  = 4,
    emodel_MX_5_____Miata_Mazda  = 5,
    emodel_MX_6_Mazda  = 6,
    emodel_Protege_Mazda  = 7,
    emodel_Tribute_Mazda  = 8,
    emodel_Protege5_Mazda  = 9,
    emodel_Mazda6_Mazda  = 10,
    emodel_Mazda3_Mazda  = 11,
    emodel_RX_8_Mazda  = 12,
    emodel_Mazda5_Mazda  = 13,
    emodel_MazdaSpeed6_Mazda  = 14,
    emodel_CX_7_Mazda  = 15,
    emodel_CX_9_Mazda  = 16,
    emodel_Mazdaspeed3_Mazda  = 17,
    emodel_Mazda2_Mazda  = 18,
    emodel_CX_5_Mazda  = 19,
    emodel_Tribute_____Hybrid_Mazda  = 20,
    emodel_MX_3_Mazda  = 21,
    emodel_RX_7_Mazda  = 22,
}enumModel_Mazda;


typedef enum _enumEngine_Mazda{
    eengine_UNKNOWN_Mazda   = 0,
    eengine_L4______2_0L_Mazda  = 1,
    eengine_V6______2_5L_Mazda  = 2,
    eengine_L4______2_3L_Mazda  = 3,
    eengine_V6______3_0L_Mazda  = 4,
    eengine_V6______4_0L_Mazda  = 5,
    eengine_V6______2_3L_Mazda  = 6,
    eengine_L4______1_6L_Mazda  = 7,
    eengine_L4______1_8L_Mazda  = 8,
    eengine_L4______1_5L_Mazda  = 9,
    eengine_L4______2_5L_Mazda  = 10,
    eengine_2RTR______1_3L_Mazda  = 11,
    eengine_V6______3_7L_Mazda  = 12,
    eengine_L4______2_6L_Mazda  = 13,
    eengine_V6______1_8L_Mazda  = 14,
    eengine_L4______2_2L_Mazda  = 15,
    eengine_V6______3_5L_Mazda  = 16,
}enumEngine_Mazda;


#endif