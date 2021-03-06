/******************************************************************************************************************
* Engineer    : automatic generated
* Date        : 9/11/2015
********************************************************************************************************************/

#ifndef __ENUMS_H__
#define __ENUMS_H__

#include "enums_BMW.h"
#include "enums_BYD.h"
#include "enums_Chery.h"
#include "enums_Chrysler.h"
#include "enums_Daihatsu.h"
#include "enums_Faw.h"
#include "enums_Fiat.h"
#include "enums_Ford.h"
#include "enums_GM.h"
#include "enums_Honda.h"
#include "enums_Hyundai.h"
#include "enums_Isuzu.h"
#include "enums_Jaguar_Land_Rover.h"
#include "enums_Mazda.h"
#include "enums_Mercedes_Benz.h"
#include "enums_MG.h"
#include "enums_Mitsubishi.h"
#include "enums_Nissan.h"
#include "enums_Peugeot.h"
#include "enums_Porsche.h"
#include "enums_Ssangyong.h"
#include "enums_Subaru.h"
#include "enums_Suzuki.h"
#include "enums_Toyota.h"
#include "enums_Volkswagen.h"
#include "enums_Volvo.h"    

    typedef enum _enumYear{
        eyear_UNKNOWN   = 0,
        eyear_1996  = 16,
        eyear_1997  = 17,
        eyear_1998  = 18,
        eyear_1999  = 19,
        eyear_2000  = 20,
        eyear_2001  = 21,
        eyear_2002  = 22,
        eyear_2003  = 23,
        eyear_2004  = 24,
        eyear_2005  = 25,
        eyear_2006  = 26,
        eyear_2007  = 27,
        eyear_2008  = 28,
        eyear_2009  = 29,
        eyear_2010  = 30,
        eyear_2011  = 31,
        eyear_2012  = 32,
        eyear_2013  = 33,
        eyear_2014  = 34,
        eyear_2015  = 35,
        eyear_OTHERS  = 65534,
        eyear_MAX  = 65535,
    
    }enumYear;
    
    
    typedef enum _enumManufacturer{
        emanufacturer_UNKNOWN   = 0,
        emanufacturer_BMW  = 1,
        emanufacturer_CHRYSLER  = 2,
        emanufacturer_FORD  = 3,
        emanufacturer_GM  = 4,
        emanufacturer_HONDA  = 5,
        emanufacturer_HYUNDAI  = 6,
        emanufacturer_JAGUAR  = 7,
        emanufacturer_KIA  = 8,
        emanufacturer_LAND_____ROVER  = 9,
        emanufacturer_MAZDA  = 10,
        emanufacturer_MERCEDES_BENZ  = 11,
        emanufacturer_NISSAN  = 12,
        emanufacturer_TOYOTA  = 13,
        emanufacturer_VOLKSWAGEN  = 14,
        emanufacturer_VOLVO  = 15,
        emanufacturer_ISUZU  = 16,
        emanufacturer_MITSUBISHI  = 17,
        emanufacturer_SUBARU  = 18,
        emanufacturer_SUZUKI  = 19,
        emanufacturer_PORSCHE  = 20,
        emanufacturer_OTHERS  = 65534,
        emanufacturer_MAX  = 65535,
        emanufacturer_GENNERIC  = 65535,
        emanufacturer_GENERIC  = 65535,
        emanufacturer_MERCEDES  = 11,
        emanufacturer_JAGUAR_____LAND_____ROVER  = 21,
        emanufacturer_BYD  = 22,
        emanufacturer_CHERY  = 23,
        emanufacturer_DAIHATSU  = 24,
        emanufacturer_SSANGYONG  = 25,
        emanufacturer_ROVER_____GROUP  = 26,
        emanufacturer_SAIC  = 27,
        emanufacturer_FIAT  = 28,
        emanufacturer_PEUGEOT  = 29,
        emanufacturer_DAEWOO  = 30,
        emanufacturer_LIFAN  = 31,
        emanufacturer_FAW  = 32,
        emanufacturer_MG  = 33,
    
    }enumManufacturer;
    
    
    typedef enum _enumMake{
        emake_UNKNOWN   = 0,
        emake_ACURA  = 1,
        emake_AM_____GENERAL  = 2,
        emake_AUDI  = 3,
        emake_BMW  = 4,
        emake_BUICK  = 5,
        emake_CADILLAC  = 6,
        emake_CHEVROLET  = 7,
        emake_CHRYSLER  = 8,
        emake_DAEWOO  = 9,
        emake_DODGE  = 10,
        emake_EAGLE  = 11,
        emake_FORD  = 12,
        emake_GEO  = 13,
        emake_GMC  = 14,
        emake_HONDA  = 15,
        emake_HUMMER  = 16,
        emake_HYUNDAI  = 17,
        emake_INFINITI  = 18,
        emake_JAGUAR  = 19,
        emake_JEEP  = 20,
        emake_KIA  = 21,
        emake_LAND_____ROVER  = 22,
        emake_LEXUS  = 23,
        emake_LINCOLN  = 24,
        emake_MAZDA  = 25,
        emake_MERCEDES_BENZ  = 26,
        emake_MERCURY  = 27,
        emake_MINI  = 28,
        emake_NISSAN  = 29,
        emake_OLDSMOBILE  = 30,
        emake_PLYMOUTH  = 31,
        emake_PONTIAC  = 32,
        emake_RAM  = 33,
        emake_SAAB  = 34,
        emake_SATURN  = 35,
        emake_SCION  = 36,
        emake_SRT  = 37,
        emake_TOYOTA  = 38,
        emake_VOLKSWAGEN  = 39,
        emake_VOLVO  = 40,
        emake_FIAT  = 41,
        emake_ISUZU  = 42,
        emake_MITSUBISHI  = 43,
        emake_PORSCHE  = 44,
        emake_SMART  = 45,
        emake_SUBARU  = 46,
        emake_SUZUKI  = 47,
        emake_OTHERS  = 65534,
        emake_MAX  = 65535,
        emake_BYD  = 48,
        emake_CHERY  = 49,
        emake_DAIHATSU  = 50,
        emake_SSANGYONG  = 51,
        emake_MG  = 52,
        emake_PEUGEOT  = 53,
        emake_SEAT  = 54,
        emake_BENTLEY  = 55,
        emake_ALFA_____ROMEO  = 56,
        emake_CITRO_N  = 57,
        emake_LIFAN  = 58,
        emake_FAW  = 59,
        emake_GM  = 60,
    
    }enumMake;
    
    
    typedef enum _enumVin10toyear{
        evin10toyear_UNKNOWN   = 0,
        evin10toyear_T  = 16,
        evin10toyear_V  = 17,
        evin10toyear_W  = 18,
        evin10toyear_X  = 19,
        evin10toyear_Y  = 20,
        evin10toyear_1  = 21,
        evin10toyear_2  = 22,
        evin10toyear_3  = 23,
        evin10toyear_4  = 24,
        evin10toyear_5  = 25,
        evin10toyear_6  = 26,
        evin10toyear_7  = 27,
        evin10toyear_8  = 28,
        evin10toyear_9  = 29,
        evin10toyear_A  = 30,
        evin10toyear_B  = 31,
        evin10toyear_C  = 32,
        evin10toyear_D  = 33,
        evin10toyear_E  = 34,
        evin10toyear_F  = 35,
        evin10toyear_G  = 36,
        evin10toyear_H  = 37,
        evin10toyear_J  = 38,
        evin10toyear_K  = 39,
        evin10toyear_L  = 40,
        evin10toyear_M  = 41,
        evin10toyear_N  = 42,
        evin10toyear_P  = 43,
        evin10toyear_R  = 44,
        evin10toyear_S  = 45,
    
    }enumVin10toyear;
    
    /*
    typedef enum _enumProtocol{
        eprotocol_UNKNOWN   = 0,
        eprotocol_PROTOCOL_NO  = 0,
        eprotocol_PROTOCOL_VPW  = 1,
        eprotocol_PROTOCOL_PWM  = 2,
        eprotocol_PROTOCOL_ISO9141  = 3,
        eprotocol_PROTOCOL_KW2000  = 4,
        eprotocol_PROTOCOL_CAN500KBAUD  = 5,
        eprotocol_PROTOCOL_XCAN500KBAUD  = 6,
        eprotocol_PROTOCOL_CAN250KBAUD  = 7,
        eprotocol_PROTOCOL_XCAN250KBAUD  = 8,
        eprotocol_PROTOCOL_BOSCH  = 9,
        eprotocol_PROTOCOL_RESERVE_10  = 10,
        eprotocol_PROTOCOL_RESERVE_11  = 11,
        eprotocol_PROTOCOL_RESERVE_12  = 12,
        eprotocol_PROTOCOL_RESERVE_13  = 13,
        eprotocol_PROTOCOL_RESERVE_14  = 14,
        eprotocol_PROTOCOL_KW  = 15,
        eprotocol_PROTOCOL_KW1281  = 16,
        eprotocol_PROTOCOL_MUT  = 17,
        eprotocol_PROTOCOL_CAN_C_UDS  = 18,
        eprotocol_PROTOCOL_CAN_I_UDS  = 19,
        eprotocol_PROTOCOL_RESERVE_20  = 20,
        eprotocol_PROTOCOL_CCD2  = 21,
        eprotocol_PROTOCOL_SDL  = 22,
        eprotocol_PROTOCOL_UBP  = 23,
        eprotocol_PROTOCOL_MCAN  = 24,
        eprotocol_PROTOCOL_MCAN_____UDS  = 25,
        eprotocol_PROTOCOL_H99B  = 26,
        eprotocol_PROTOCOL_95HM  = 27,
        eprotocol_PROTOCOL_92HM  = 28,
        eprotocol_PROTOCOL_CAN  = 29,
        eprotocol_PROTOCOL_RESERVE_30  = 30,
        eprotocol_PROTOCOL_RESERVE_31  = 31,
        eprotocol_PROTOCOL_CCD  = 32,
        eprotocol_PROTOCOL_SCI  = 33,
        eprotocol_PROTOCOL_RESERVE_34  = 34,
        eprotocol_PROTOCOL_RESERVE_35  = 35,
        eprotocol_PROTOCOL_RESERVE_36  = 36,
        eprotocol_PROTOCOL_RESERVE_37  = 37,
        eprotocol_PROTOCOL_RESERVE_38  = 38,
        eprotocol_PROTOCOL_RESERVE_39  = 39,
        eprotocol_PROTOCOL_RESERVE_40  = 40,
        eprotocol_PROTOCOL_RESERVE_41  = 41,
        eprotocol_PROTOCOL_OBD1  = 42,
        eprotocol_PROTOCOL_RESERVE_43  = 43,
        eprotocol_PROTOCOL_RESERVE_44  = 44,
        eprotocol_PROTOCOL_RESERVE_45  = 45,
        eprotocol_PROTOCOL_RESERVE_46  = 46,
        eprotocol_PROTOCOL_RESERVE_47  = 47,
        eprotocol_PROTOCOL_DDL1  = 48,
        eprotocol_PROTOCOL_SWCAN  = 49,
        eprotocol_PROTOCOL_RESERVE_50  = 50,
        eprotocol_PROTOCOL_MB_ISO  = 51,
        eprotocol_PROTOCOL_KWFB  = 52,
        eprotocol_PROTOCOL_BMW_CAN  = 53,
        eprotocol_PROTOCOL_TPCAN_2_0  = 54,
        eprotocol_PROTOCOL_TPCAN_1_6_KW1281  = 55,
        eprotocol_PROTOCOL_TPCAN_1_6_KW2000  = 56,
        eprotocol_PROTOCOL_KWSSM  = 57,
        eprotocol_PROTOCOL_DDL2  = 58,
        eprotocol_PROTOCOL_DS2  = 59,
        eprotocol_PROTOCOL_CAN_UDS  = 60,
        eprotocol_PROTOCOL_CANUDS  = 60,
        eprotocol_PROTOCOL_CAN_D2  = 61,
        eprotocol_PROTOCOL_CAN_GGD  = 62,
        eprotocol_PROTOCOL_ALDL  = 63,
        eprotocol_PROTOCOL_GMLAN  = 64,
        eprotocol_PROTOCOL_MAX  = 65535,
        eprotocol_PROTOCOL_CAN_C  = 65,
        eprotocol_PROTOCOL_TCAN  = 66,
        eprotocol_PROTOCOL_DS1  = 70,
        eprotocol_PROTOCOL_DS2_MID  = 71,
        eprotocol_PROTOCOL_D2  = 73,
        eprotocol_PROTOCOL_GGD  = 74,
        eprotocol_SUZUKI_SDL  = 75,
    
    }enumProtocol;
    */
    
    typedef enum _enumDlc{
        edlc_UNKNOWN   = 0,
        edlc_PIN1  = 2,
        edlc_PIN1_INV  = 3,
        edlc_PIN2  = 4,
        edlc_PIN2_INV  = 5,
        edlc_PIN3  = 6,
        edlc_PIN3_INV  = 7,
        edlc_PIN4  = 8,
        edlc_PIN4_INV  = 9,
        edlc_PIN5  = 10,
        edlc_PIN5_INV  = 11,
        edlc_PIN6  = 12,
        edlc_PIN6_INV  = 13,
        edlc_PIN7  = 14,
        edlc_PIN7_INV  = 15,
        edlc_PIN8  = 16,
        edlc_PIN8_INV  = 17,
        edlc_PIN9  = 18,
        edlc_PIN9_INV  = 19,
        edlc_PIN10  = 20,
        edlc_PIN10_INV  = 21,
        edlc_PIN11  = 22,
        edlc_PIN11_INV  = 23,
        edlc_PIN12  = 24,
        edlc_PIN12_INV  = 25,
        edlc_PIN13  = 26,
        edlc_PIN13_INV  = 27,
        edlc_PIN14  = 28,
        edlc_PIN14_INV  = 29,
        edlc_PIN15  = 30,
        edlc_PIN15_INV  = 31,
        edlc_PIN3_INV_OBD1  = 32,
        edlc_PIN7_OBD1  = 33,
        edlc_PIN15_OBD1  = 34,
        edlc_CCD_3_11  = 35,
        edlc_PIN_NA  = 255,
        edlc_PIN16  = 32,
        edlc_PIN20  = 33,
        edlc_PIN22  = 34,
        edlc_PIN23  = 35,
        edlc_PIN24  = 36,
        edlc_PIN25  = 37,
        edlc_PIN28  = 38,
        edlc_PIN30  = 39,
        edlc_PIN32  = 40,
        edlc_PIN33  = 41,
        edlc_PIN34  = 42,
        edlc_PIN35  = 43,
        edlc_PIN36  = 44,
        edlc_PIN17  = 45,
        edlc_PIN15_INV_OBD1  = 46,
        edlc_PIN9_OBD1  = 47,
        edlc_PIN2_OBD1  = 48,
        edlc_PIN8_OBD1  = 49,
        edlc_PIN14_OBD1  = 50,
        edlc_PIN11_OBD1  = 51,
        edlc_PIN6_OBD1  = 52,
    
    }enumDlc;
    
    
    typedef enum _enumDlcvoltage{
        edlcvoltage_UNKNOWN   = 0,
        edlcvoltage_LEVEL_FLOAT  = 1,
        edlcvoltage_LEVEL_5V  = 2,
        edlcvoltage_LEVEL_8V  = 3,
        edlcvoltage_LEVEL_12V  = 4,
        edlcvoltage_LEVEL_24V  = 5,
        edlcvoltage_LEVEL_36V  = 6,
    
    }enumDlcvoltage;
    
    
    typedef enum _enumPd_ReLap Dangor{
        epd_reLap Dangor_UNKNOWN   = 0,
        epd_reLap Dangor_PD_NONE  = 0,
        epd_reLap Dangor_PD_OPEN  = 1,
        epd_reLap Dangor_PD_2K8  = 2,
        epd_reLap Dangor_PD_3K9  = 3,
        epd_reLap Dangor_PD_10K  = 4,
    
    }enumPd_ReLap Dangor;
    
    
    typedef enum _enumReLap Dangor{
        ereLap Dangor_UNKNOWN   = 0,
        ereLap Dangor_PU_NONE  = 0,
        ereLap Dangor_PU_511  = 1,
        ereLap Dangor_PU_2K7  = 2,
        ereLap Dangor_PU_4K7  = 4,
        ereLap Dangor_PU_1K  = 8,
        ereLap Dangor_PU_2K  = 16,
        ereLap Dangor_4700_____OHM  = 32,
    
    }enumReLap Dangor;
    
    
    typedef enum _enumVref{
        evref_UNKNOWN   = 0,
        evref_VREF_NA  = 0,
        evref_VREF_AUTO  = 1,
        evref_VREF_1V5  = 2,
        evref_VREF_2V5  = 3,
    
    }enumVref;
    
    
    typedef enum _enumUartdata{
        euartdata_UNKNOWN   = 0,
        euartdata_DATA8BIT_NO_PARITY  = 0,
        euartdata_DATA8BIT_EVEN_PARITY  = 1,
        euartdata_DATA8BIT_ODD_PARIRY  = 2,
    
    }enumUartdata;
    
    
    typedef enum _enumChecksum{
        echecksum_UNKNOWN   = 0,
        echecksum_CS_NONE  = 0,
        echecksum_CS_NORMAL_1BYTE  = 1,
        echecksum_CS_INVERT_1BYTE  = 2,
        echecksum_CS_NORMAL_2BYTE  = 3,
        echecksum_CS_CRC_1D  = 4,
        echecksum_CS_CRC_01  = 5,
    
    }enumChecksum;
    
    
    typedef enum _enumInittype{
        einittype_UNKNOWN   = 0,
        einittype_INIT_NONE  = 0,
        einittype_INIT_FIVEBAUDS  = 1,
        einittype_INIT_FASTBAUDS  = 2,
        einittype_INIT_MAX  = 3,
        einittype__  = 255,
    
    }enumInittype;
    
    
    typedef enum _enumConnector{
        econnector_UNKNOWN   = 0,
        econnector_NONE  = 0,
        econnector_OBDII  = 1,
        econnector_GM_OBD1  = 2,
        econnector_FORD_OBD1  = 3,
        econnector_CHRYSLER_OBD1  = 4,
        econnector_TOYOTA_OBD1  = 5,
        econnector_HONDA_OBD1  = 6,
        econnector_KIA_20_PINS  = 7,
        econnector_TOYOTA_17_PINS  = 8,
        econnector_TOYOTA_22_PINS  = 9,
        econnector_BMW_20_PINS  = 10,
        econnector_NISSAN_14_PINS  = 11,
        econnector_BMW_16_PINS  = 12,
        econnector_BENZ_38_PINS  = 13,
        econnector_CHRYSLER_16_PINS  = 14,
        econnector_BENZ_14PIN_PINS  = 15,
        econnector_MAZDA_17_PINS  = 16,
        econnector_MIT_12_16_PINS  = 17,
        econnector_NISSAN_14_TSURU  = 18,
        econnector_MAX  = 65535,
        econnector_OEM  = 19,
        econnector_HYUNDAI_12  = 20,
        econnector_KIA_20  = 21,
        econnector_NISSAN_14  = 22,
        econnector_TOYOTA_17_22  = 23,
        econnector_BMW_OEM_20  = 24,
        econnector_BENZ_14  = 25,
        econnector_BMW_20  = 26,
    
    }enumConnector;
    
    
    typedef enum _enumDtcstatuse{
        edtcstatuse_UNKNOWN   = 0,
        edtcstatuse_TYPE_DTC_STATUS_NA  = 0,
        edtcstatuse_TYPE_DTC_STATUS_GENERAL  = 1,
        edtcstatuse_TYPE_DTC_STATUS_CHRYSLER_CAN  = 2,
        edtcstatuse_TYPE_DTC_STATUS_CHRYSLER_CAN_UDS  = 3,
        edtcstatuse_TYPE_DTC_STATUS_GM_GMLAN_DOC  = 4,
        edtcstatuse_TYPE_DTC_STATUS_HONDABODY_KW  = 5,
        edtcstatuse_TYPE_DTC_STATUS_HYUNDAI_1  = 6,
        edtcstatuse_TYPE_DTC_STATUS_HYUNDAI_2  = 7,
        edtcstatuse_TYPE_DTC_STATUS_VAG_0  = 8,
        edtcstatuse_TYPE_DTC_STATUS_VAG_1  = 9,
        edtcstatuse_TYPE_DTC_STATUS_VAG_2  = 10,
        edtcstatuse_TYPE_DTC_STATUS_VAG_3  = 11,
        edtcstatuse_TYPE_DTC_STATUS_VAG_4  = 12,
        edtcstatuse_TYPE_DTC_STATUS_VAG_5  = 13,
        edtcstatuse_TYPE_DTC_STATUS_VAG_6  = 14,
        edtcstatuse_TYPE_DTC_STATUS_VAG_7  = 15,
        edtcstatuse_TYPE_DTC_STATUS_VOLVO_1  = 16,
        edtcstatuse_TYPE_DTC_STATUS_MERCEDES_CANUDS  = 17,
        edtcstatuse_TYPE_DTC_STATUS_MERCEDES_KW2000_CAN  = 18,
        edtcstatuse_TYPE_DTC_STATUS_MERCEDES_KWFB  = 19,
        edtcstatuse_TYPE_DTC_STATUS_VOLVO_2  = 20,
        edtcstatuse_TYPE_DTC_STATUS_NISSAN_BYTE  = 21,
        edtcstatuse_TYPE_DTC_STATUS_NISSAN_BIT  = 22,
        edtcstatuse_TYPE_DTC_STATUS_HYUNDAI_SRS_0207  = 23,
    
    }enumDtcstatuse;
    
    
    typedef enum _enumBuffername{
        ebuffername_UNKNOWN   = 0,
        ebuffername_NONE  = 0,
        ebuffername_HISTORY  = 1,
        ebuffername_HISTORICAL  = 2,
        ebuffername_CURRENT  = 3,
        ebuffername_STORED  = 4,
        ebuffername_PENDING  = 5,
        ebuffername_MIL  = 6,
        ebuffername_READINESS  = 7,
        ebuffername_PERMANENT  = 8,
        ebuffername_TEMPORARY  = 9,
        ebuffername_FAIL_SINCE_CLEAR  = 10,
        ebuffername_KOEO  = 11,
        ebuffername_KOER  = 12,
        ebuffername_CONTINUOUS  = 13,
        ebuffername_PAST  = 14,
        ebuffername_PRESENT  = 15,
        ebuffername_CONFIRMED  = 16,
        ebuffername_CM  = 17,
        ebuffername_DCHECK  = 18,
        ebuffername_NOTPRESENT  = 19,
        ebuffername_ACTIVE  = 20,
        ebuffername_MEMORY  = 21,
        ebuffername_INTERMITTENT  = 22,
        ebuffername_INVALID  = 23,
        ebuffername_STATIC  = 24,
        ebuffername_ON_DEMAND  = 25,
        ebuffername_CURRENT_DTC_SINCE_POWER_UP  = 26,
        ebuffername_DTC_SUPPORTED_BY_CALIBRATION  = 27,
        ebuffername_TEST_NOT_PASSED_SINCE_CURRENT_POWER_UP  = 28,
        ebuffername_TEST_NOT_PASSED_SINCE_DTC_CLEARED  = 29,
        ebuffername_KOEO_INJECTOR  = 30,
        ebuffername_KOER_GLOWPLUG  = 31,
        ebuffername_MAX  = 255,
        ebuffername_LATCHED  = 32,
        ebuffername_NOT_____ACTIVE  = 33,
        ebuffername_TEST_____NOT_____PASS_____SINCE_____CODE_____CLEARED  = 34,
        ebuffername_FAILED_____SINCE_____CLEAR  = 35,
        ebuffername_MIL_HISTORY  = 36,
        ebuffername_LAST_____TEST_____FAILED  = 37,
        ebuffername_CURRENT_HISTORY  = 38,
        ebuffername_RECORD  = 39,
        ebuffername_STORAGE  = 40,
        ebuffername_CHASSIS  = 41,
        ebuffername_REGION  = 42,
        ebuffername_CURRENT_____DTC  = 43,
        ebuffername_HISTORY_____DTC  = 44,
        ebuffername_CHASSI_____DTC  = 45,
        ebuffername_REGION_____DTC  = 46,
    
    }enumBuffername;
    
    
    typedef enum _enumDtcdisplaytype{
        edtcdisplaytype_UNKNOWN   = 0,
        edtcdisplaytype_DTC_1BYTE_HB_LB  = 1,
        edtcdisplaytype_DTC_DEC  = 2,
        edtcdisplaytype_DTC_DEC_2DIGIT  = 3,
        edtcdisplaytype_DTC_DEC_3DIGIT  = 4,
        edtcdisplaytype_DTC_DEC_4DIGIT  = 5,
        edtcdisplaytype_DTC_DEC_5DIGIT  = 6,
        edtcdisplaytype_DTC_HEX  = 7,
        edtcdisplaytype_DTC_HEX_2DIGIT  = 8,
        edtcdisplaytype_DTC_HEX_3DIGIT  = 9,
        edtcdisplaytype_DTC_HEX_4DIGIT  = 10,
        edtcdisplaytype_DTC_HEX_5DIGIT  = 11,
        edtcdisplaytype_DTC_HEX_6DIGIT  = 12,
        edtcdisplaytype_DTC_MAIN_DEC_SUB_1BYTE_DEC  = 13,
        edtcdisplaytype_DTC_MAIN_DEC_SUB_1BYTE_DEC_2  = 14,
        edtcdisplaytype_DTC_MAIN_DEC_SUB_1BYTE_DEC_3  = 15,
        edtcdisplaytype_DTC_MAIN_DEC_SUB_1BYTE_HEX  = 16,
        edtcdisplaytype_DTC_MAIN_DEC_SUB_1BYTE_HEX_NO_TRIM  = 17,
        edtcdisplaytype_DTC_MAIN_HEX_SUB_1BYTE_DEC  = 18,
        edtcdisplaytype_DTC_MAIN_HEX_SUB_1BYTE_DEC_2  = 19,
        edtcdisplaytype_DTC_MAIN_HEX_SUB_1BYTE_DEC_3  = 20,
        edtcdisplaytype_DTC_MAIN_HEX_SUB_1BYTE_HEX  = 21,
        edtcdisplaytype_DTC_MAIN_HEX_SUB_1BYTE_HEX_NO_TRIM  = 22,
        edtcdisplaytype_DTC_MAIN_SAE_SUB_1BYTE_DEC  = 23,
        edtcdisplaytype_DTC_MAIN_SAE_SUB_1BYTE_DEC_NO_TRIM  = 24,
        edtcdisplaytype_DTC_MAIN_SAE_SUB_1BYTE_HEX  = 25,
        edtcdisplaytype_DTC_MAIN_SAE_SUB_1BYTE_HEX_NO_TRIM  = 26,
        edtcdisplaytype_DTC_OEM_SPECIAL  = 27,
        edtcdisplaytype_DTC_SAE  = 28,
        edtcdisplaytype_DTC_HONDA_HEX_1BYTE  = 29,
        edtcdisplaytype_DTC_MAIN_DEC_5DIGIT_SUB_DEC_3  = 30,
        edtcdisplaytype_DTC_HONDA_MAIN_SUB_HEX  = 31,
        edtcdisplaytype_DTC_MAIN_HEX_SUB_1BYTE_DEC_NO_TRIM  = 32,
    
    }enumDtcdisplaytype;
    
    
    typedef enum _enumInnovagroup{
        einnovagroup_UNKNOWN   = 0,
        einnovagroup_GROUP_OBDII  = 1,
        einnovagroup_GROUP_ABS  = 2,
        einnovagroup_GROUP_SRS  = 4,
        einnovagroup_GROUP_ENH_TCM  = 8,
        einnovagroup_GROUP_ENH_ECM  = 16,
        einnovagroup_GROUP_ENH_PCM  = 16,
        einnovagroup_GROUP_OBDI  = 32,
        einnovagroup_INNOVA_GROUP_UNKNOW  = 255,
    
    }enumInnovagroup;
    

#endif