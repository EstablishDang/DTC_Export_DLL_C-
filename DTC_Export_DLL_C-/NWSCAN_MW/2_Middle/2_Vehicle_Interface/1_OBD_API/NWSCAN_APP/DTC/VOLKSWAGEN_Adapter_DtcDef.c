/*
* Default_Adapter_DtcDef.c
*
*  Created on: Jul 29, 2015
*      Author: Lap Dang
*/

#include "NWSCAN_APP\LIB\PlatFormType.h"
#include "NWSCAN_APP\DTC\DTC_Config.h"
#include <2_Middle\3_Storage\2_Driver\0_FAT_Driver\FatFs\inc\ff.h>
//#include <1_Application\3_User_Interface\3_UI_Processes\Processes\04_YMME_Selection\enums.h>
//#include <1_Application\3_User_Interface\3_UI_Processes\Processes\04_YMME_Selection\YMMESelection.h>
//#include <1_Application\3_User_Interface\3_UI_Processes\Processes\04_YMME_Selection\YMME_Structure.h>
//#include <1_Application\3_User_Interface\5_Vehicle_Data_Process\Vehicle_Data_Structure.h>
//#include "NWSCAN_APP\Common\SystemData.h"
//#include <NWSCAN_APP\Adapter\Common\NwS_Struct.h>
//#include "NWSCAN_APP\Adapter\Makes\Utilities\Makes_VCI_Utilities.h"
#include "NWSCAN_APP\MW_LIB\Makes_Adapter_App.h"
#include <2_Middle\0_Middle_Utilities\AES\aes256.h>
#include "DTCDefinition.h"
#include "DTCUtilities.h"
#include <stdlib.h>
#include "DTCDefinitionConfig.h"
//#include <NWSCAN_APP/Adapter/Common/VDM_Util_DB_Parser.h>
//#include <NWSCAN_APP/Adapter/Makes/VAG/NwS_VAG_Utility.h>
/*------------------------------------------------------------------------------
*Engineer     : Lap Dang
*Function name: __DTC_YmmeSubSearch
*Input        :
*Output       :
*Description  :
*
*Historical   :
*     1. Creation Lap Dang Sep 09, 2014
-------------------------------------------------------------------------------*/
static void __DTC_YmmeSubSearch(structMFRVinProfile *p_strtMFRVinProfile,
                                structOemProfile *p_strtOemProfile, structKeyInfo *p_strtKeySubInfo)
{
  memset(p_strtKeySubInfo, 0xFF, sizeof(structKeyInfo));
  memset(p_strtKeySubInfo->bMainDTCString, 0x00,
         sizeof(p_strtKeySubInfo->bMainDTCString));
  p_strtKeySubInfo->sManufacturer = p_strtMFRVinProfile->eManufacturer;
  if ((p_strtOemProfile->Protocol == PROTOCOL_KW1281)
      || (p_strtOemProfile->Protocol == PROTOCOL_KW2000)
        || (p_strtOemProfile->Protocol == PROTOCOL_TPCAN_1_6_KW1281)
          || (p_strtOemProfile->Protocol == PROTOCOL_TPCAN_1_6_KW2000)
            || (p_strtOemProfile->Protocol == PROTOCOL_TPCAN_2_0))
    p_strtKeySubInfo->bProtocol = p_strtOemProfile->Protocol;
}
/*------------------------------------------------------------------------------
*Engineer     : Lap Dang
*Function name: __DTC_YmmeSearch
*Input        :
*Output       :
*Description  :
*
*Historical   :
*     1. Creation Lap Dang Sep 09, 2014
-------------------------------------------------------------------------------*/
static void __DTC_YmmeSearch(structMFRVinProfile * p_strtMFRVinProfile,
                             structOemProfile *p_strtOemProfile,
                             structListDTCType *pstrtListDTCType,
                             structKeyInfo *p_strtKeyInfo)
{
  memset(p_strtKeyInfo, 0xFF, sizeof(structKeyInfo));
#if VOLKSWAGEN_use_sManufacturer
  {
    p_strtKeyInfo->sManufacturer = p_strtMFRVinProfile->eManufacturer;
  }
#endif
#if VOLKSWAGEN_use_sModel
  {    
    if ((p_strtMFRVinProfile->eModel == emodel_Routan_Volkswagen)||
        (p_strtMFRVinProfile->eModel == emodel_Crafter_Volkswagen))
      p_strtKeyInfo->sModel = p_strtMFRVinProfile->eModel;
  }
#endif
#if VOLKSWAGEN_use_sSystem
  {
    if ((p_strtMFRVinProfile->eModel == emodel_Routan_Volkswagen)||
      (p_strtMFRVinProfile->eModel == emodel_Crafter_Volkswagen))
      p_strtKeyInfo->sSystem = p_strtOemProfile->sSystem;
  }
#endif
#if VOLKSWAGEN_use_sSubSystem
  {
    if (p_strtMFRVinProfile->eModel == emodel_Routan_Volkswagen)  
      p_strtKeyInfo->sSubSystem = p_strtOemProfile->sSubSystem;
  }
#endif
  if ((p_strtMFRVinProfile->eModel == emodel_Routan_Volkswagen)||
    (p_strtMFRVinProfile->eModel == emodel_Crafter_Volkswagen))
    p_strtKeyInfo->sOption3 = p_strtOemProfile->iProfileID;
}

      
/*------------------------------------------------------------------------------
*Engineer     : Lap Dang
*Function name: gf_VOLKWAGEN_Adapter_DTC_GetDef
*Input        : structMFRVinProfile * p_strtMFRVinProfile,
structOemProfile *p_strtOemProfile,
enumOBDLanguage      eMemLanguage,
void *pStrDispDtc,
uint32 sDefSize
*Output       : void *pDef,
*Description  :
*
*Historical   :
*     1. Creation Lap Dang Sep 09, 2014
-------------------------------------------------------------------------------*/
uint32 gf_VOLKSWAGEN_Adapter_DTC_GetDef(structMFRVinProfile * p_strtMFRVinProfile,
                                        structOemProfile *p_strtOemProfile,
                                        enumOBDLanguage eMemLanguage,
                                        structListDTCType *pstrtListDTCType,
                                        void *pDefOut,
                                        uint32 iDefSize,
                                        structListAddressDTC* pstrtListAddrDTC)

{
  structListAddressDTC* pstrtListAddressDTC;
  char*pDef = (char*) pDefOut;
  uint32 iLenDef = 0;
  enumInnovaGroups eInnovaGroup;
  enumManufacturer eManufacture;
  eManufacture = p_strtMFRVinProfile->eManufacturer;
  //structAddress_DTC strtAddress_DTC;
  structKeyInfo strtKeyInfo;
  uint32 iTemp;
  enumInnovagroup *pListInnGroup;
  structDTCString *pstrtDTCString;
 
  if (eMemLanguage == 0)
    eMemLanguage = eMEM_LANGUAGE_ENGLISH;               //Default language
  if (pDef == null)
    return 0;
  else
    ((uint8*) pDef)[0] = 0;
  memset(&strtKeyInfo, 0xFF, sizeof(structKeyInfo));
  if (p_strtOemProfile->bSelInnGroup == GROUP_OBDI)
  {
    strtKeyInfo.sManufacturer= eManufacture;
    strtKeyInfo.sSystem=p_strtOemProfile->sSystem;
  }
  else
  {
    __DTC_YmmeSearch(p_strtMFRVinProfile,
                     p_strtOemProfile,
                     pstrtListDTCType,
                     &strtKeyInfo);
  }
  memset(strtKeyInfo.bMainDTCString, 0, SIZE_MAINCODE);
  memcpy(strtKeyInfo.bMainDTCString, pstrtListDTCType->bDTCString, strlen(pstrtListDTCType->bDTCString));
  pstrtDTCString = gf_DTC_GetSplitStrDTC(pstrtListDTCType);
  pListInnGroup = gf_DTC_GetListInnGroup(p_strtOemProfile);
  uint8 bIdxGroup = 0;
  if (((p_strtOemProfile->Protocol==PROTOCOL_KW1281)||(p_strtOemProfile->Protocol==PROTOCOL_KW2000)||
       (p_strtOemProfile->Protocol==PROTOCOL_TPCAN_1_6_KW1281)||(p_strtOemProfile->Protocol==PROTOCOL_TPCAN_1_6_KW2000))&&
      ((p_strtOemProfile->iProfileID==emessageid_SFT00001_Volkswagen)||(p_strtOemProfile->iProfileID==emessageid_SFT00011_Volkswagen)||(p_strtOemProfile->iProfileID==emessageid_SFT00031_Volkswagen)))
  {
    uint16 sDec_code = atoi(strtKeyInfo.bMainDTCString);
    if ((sDec_code!=0)&&(sDec_code<=4000))
    {
      uint8 bTempbk;
      enumBufferName eBufferName;
      structDtcParser strtDtcParser;
      bTempbk = p_strtOemProfile->strtOEMDTCBuffer.DtcDispType;
      p_strtOemProfile->strtOEMDTCBuffer.DtcDispType = DTC_SAE;
      strtDtcParser.bTypeParserBuffName = p_strtOemProfile->strtOEMDTCBuffer.bTypeDtcStatusType;   
      uint8 bFormatDtcbk = p_strtOemProfile->strtOEMDTCBuffer.bFormatDtc;
      uint8 strDTC[SIZE_OF_OEM_DTC];
      memcpy(&strDTC,p_strtOemProfile->strtOEMDTCBuffer.DTC,SIZE_OF_OEM_DTC);
      strtDtcParser.pDtc = gf_VDM_DTC_GetRawFromOemProfile(p_strtOemProfile,
                                                           &strtDtcParser.bFrameDtc,
                                                           pstrtListDTCType->bDTCIndex);
      strtDtcParser.bFrameDtc = 2; //SAE 5digit
      memcpy(p_strtOemProfile->strtOEMDTCBuffer.DTC,strtDtcParser.pDtc,4);
      p_strtOemProfile->strtOEMDTCBuffer.bFormatDtc=2;
      void *pStrDtcDisp = gf_VDM_DTC_GetDtcStringFromOemProfile(p_strtOemProfile,
                                                                &eBufferName,
                                                                0,
                                                                &strtDtcParser);
      memcpy(p_strtOemProfile->strtOEMDTCBuffer.DTC,&strDTC,SIZE_OF_OEM_DTC);
      p_strtOemProfile->strtOEMDTCBuffer.DtcDispType = bTempbk;
      p_strtOemProfile->strtOEMDTCBuffer.bFormatDtc = bFormatDtcbk;
      memcpy(strtKeyInfo.bMainDTCString,strtDtcParser.arrDtcOutPut,sizeof(strtKeyInfo.bMainDTCString));
      while (pListInnGroup[bIdxGroup] != einnovagroup_UNKNOWN)
      {
        eInnovaGroup = pListInnGroup[bIdxGroup];
        pstrtListAddressDTC = gf_DTC_FindListID(eInnovaGroup, &strtKeyInfo,
                                                pstrtListAddrDTC, eTRUE);
        
        if (pstrtListAddressDTC != Null)
        {
          return gf_Get_DTC_Definition(pstrtListAddressDTC, eInnovaGroup,
                                      eMemLanguage, pDef, iDefSize, eTRUE);
        }
        bIdxGroup++;
      }
    }
  }
  
  while (pListInnGroup[bIdxGroup] != einnovagroup_UNKNOWN)
  {
    eInnovaGroup = pListInnGroup[bIdxGroup];
    pstrtListAddressDTC = gf_DTC_FindListID(eInnovaGroup, &strtKeyInfo,
                                            pstrtListAddrDTC, eTRUE);
    
    if (pstrtListAddressDTC != Null)
    {
      return gf_Get_DTC_Definition(pstrtListAddressDTC, eInnovaGroup,
                                  eMemLanguage, pDef, iDefSize, eTRUE);
    }
    bIdxGroup++;
  }
  
  if (pstrtListAddressDTC == null)  //Not Found
  {
    if (gf_DTC_IsHasSubCode(pstrtDTCString))  //Has Sub COde
    {
      __DTC_YmmeSearch(p_strtMFRVinProfile, p_strtOemProfile,
                       pstrtListDTCType, &strtKeyInfo);
      
      memset(strtKeyInfo.bMainDTCString, 0, SIZE_MAINCODE);
      strcpy(strtKeyInfo.bMainDTCString, pstrtDTCString->strDefMain);
      pListInnGroup = gf_DTC_GetListInnGroup(p_strtOemProfile);
      bIdxGroup = 0;
      while (pListInnGroup[bIdxGroup] != einnovagroup_UNKNOWN)
      {
        eInnovaGroup = pListInnGroup[bIdxGroup];
        pstrtListAddressDTC = gf_DTC_FindListID(eInnovaGroup,
						&strtKeyInfo, pstrtListAddrDTC, eTRUE);
        if (pstrtListAddressDTC != null)
        {
          iLenDef = gf_Get_DTC_Definition(pstrtListAddressDTC,
                                         eInnovaGroup, 
                                         eMemLanguage, 
                                         pDef, 
                                         iDefSize, 
                                         eTRUE); 
          break;
        }
        bIdxGroup++;   
      }
      if (pstrtListAddressDTC == null) //If not found Main def , will ignore sub def also
      {
        return 0;
      }
      
      ///Found sub def
      __DTC_YmmeSubSearch(p_strtMFRVinProfile, p_strtOemProfile,
                          &strtKeyInfo);
      memset(strtKeyInfo.bMainDTCString, 0, SIZE_MAINCODE);
      strcpy(strtKeyInfo.bMainDTCString, pstrtDTCString->strDefSub);
      pListInnGroup = gf_DTC_GetListInnGroup(p_strtOemProfile);
      bIdxGroup = 0;
      while (pListInnGroup[bIdxGroup] != einnovagroup_UNKNOWN)
      {
        eInnovaGroup = pListInnGroup[bIdxGroup];
        pstrtListAddressDTC = gf_DTC_FindListID(eInnovaGroup,
						&strtKeyInfo, pstrtListAddrDTC, eFALSE);
        if (pstrtListAddressDTC != null)
        {
          pDef[iLenDef++] = ' ';
          pDef[iLenDef++] = '-';
          pDef[iLenDef++] = ' ';
          iTemp = gf_Get_DTC_Definition(pstrtListAddressDTC,
                                       eInnovaGroup, eMemLanguage,
                                       &((uint8*) pDef)[iLenDef], iDefSize, eFALSE);
          if (iTemp == 0)
          {
            iLenDef -= 3;
            pDef[iLenDef] = 0;
          }
          iLenDef += iTemp;
          return iLenDef;
        }
        bIdxGroup++;
      }
    }
  }
  return iLenDef;
}