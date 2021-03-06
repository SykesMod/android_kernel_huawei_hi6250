/******************************************************************************

  Copyright(C)2008,Hisilicon Co. LTD.

******************************************************************************
File Name       : ChrRelationEvent_cfg.c
Description     : 非关联事件定义表
History         :
   1.q00312157      2016-7-12     Draft Enact

******************************************************************************/

/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "ChrEventIDComm.h"

#ifdef __cplusplus
  #if __cplusplus
  extern "C"{
  #endif
#endif

/*lint -e767 */
//#define    THIS_FILE_ID        PS_FILE_ID_CHRABSOLUTEEVENT_CFG_C
/*lint +e767 */

/*****************************************************************************
  2 全局变量声明
*****************************************************************************/

#if (FEATURE_ON == FEATURE_PTM)

/* GAS 非关联直通事件定义集合 */
int g_aulGASAbosulteEvent[][2]=
{
    {GAS_STATISTIC_INFO_COLLECTION_EVENTID, GAS_NOT_SUPP_BSS_PAGING_COOR_CHR_RPT_STRU_ALARMID},
    {GAS_STATISTIC_INFO_COLLECTION_EVENTID, GAS_CUSTOM_C1_CELL_CHR_RPT_STRU_ALARMID},

};

/*Added by h00377722 for 多种场景CHR, 2017-03-14,begin*/
/* WAS 非关联直通事件定义集合 */
int g_aulWASAbosulteEvent[][2]=
{
    {WAS_STATISTIC_INFO_COLLECTION_EVENTID, WAS_RRC_ACCESS_LONG_CHR_RPT_STRU_ALARMID},
    {WAS_STATISTIC_INFO_COLLECTION_EVENTID, WAS_RRC_STATE_LAST_TIME_CHR_RPT_STRU_ALARMID},
    {WAS_STATISTIC_INFO_COLLECTION_EVENTID, WAS_WOOS_SEARCH_SECTION_CHR_RPT_STRU_ALARMID},
    {WAS_STATISTIC_INFO_COLLECTION_EVENTID, WAS_W2W_RESEL_SLOW_CHR_RPT_STRU_ALARMID},

};
/*Added by h00377722 for 多种场景CHR, 2017-03-14,end*/

/* 资源核查事件 */
int g_aulRadioResourceCheckEvent[][2]=
{
    {PS_RADIO_RESOURCE_CHECK_EVENTID, GUCNAS_RADIO_RESOURCE_CHECK_CHR_RPT_STRU_ALARMID},
    {PS_RADIO_RESOURCE_CHECK_EVENTID, CTTF_RADIO_RESOURCE_CHECK_CHR_DIRECT_RPT_STRU_ALARMID},
    {PS_RADIO_RESOURCE_CHECK_EVENTID, CAS_1X_RADIO_RESOURCE_CHECK_CHR_RPT_STRU_ALARMID},
    {PS_RADIO_RESOURCE_CHECK_EVENTID, CAS_HRPD_RADIO_RESOURCE_CHECK_CHR_RPT_STRU_ALARMID},
    {PS_RADIO_RESOURCE_CHECK_EVENTID, GAS_RADIO_RESOURCE_CHECK_CHR_RPT_STRU_ALARMID},
    {PS_RADIO_RESOURCE_CHECK_EVENTID, WAS_RADIO_RESOURCE_CHECK_CHR_RPT_STRU_ALARMID},
    /*Add by lilin 资源核查CHR 2017-3-13 begin*************/
    {PS_RADIO_RESOURCE_CHECK_EVENTID, TRRC_CHR_RRM_RESOURCE_CHECK_INFO_LIST_STRU_ALARMID},
    /*Add by lilin 资源核查CHR 2017-3-13 end*************/
    {PS_RADIO_RESOURCE_CHECK_EVENTID,LRRC_CHR_RRM_RES_CHECK_INFO_LIST_STRU_ALARMID},
};

/* TRRC 非关联直通事件定义集合 */
int g_aulTRRCAbosulteEvent[][2]=
{
    {TRRC_STATISTIC_INFO_COLLECTION_EVENTID, TRRC_OUT_OF_SYNC_CELL_UPDATE_INFO_STRU_ALARMID},
    {TRRC_STATISTIC_INFO_COLLECTION_EVENTID, TRRC_APP_COLLECT_TDS_FREQ_REPORT_STRU_ALARMID },
    {TRRC_STATISTIC_INFO_COLLECTION_EVENTID, TRRC_CS_CALL_EST_CNF_INFO_STRU_ALARMID},
    {TRRC_STATISTIC_INFO_COLLECTION_EVENTID, TRRC_CS_CALL_CONN_REQ_INFO_STRU_ALARMID},
    {TRRC_STATISTIC_INFO_COLLECTION_EVENTID, TRRC_CS_CALL_AIRMSG_INFO_STRU_ALARMID},
    {TRRC_STATISTIC_INFO_COLLECTION_EVENTID, TRRC_APP_CONFIG_PCH_CELL_INFO_REPORT_STRU_ALARMID},
};

/* TMAC 非关联直通事件定义集合 */
int g_aulTMACbosulteEvent[][2]=
{

};

/* LRRC 统计1 非关联直通事件定义集合 */
int g_aulLRRCStatictic1Event[][2]=
{
    {LRRC_STATISTIC1_INFO_COLLECTION_EVENTID, LRRC_OM_UE_CAP_FALL_REPORT_STRU_ALARMID},
    {LRRC_STATISTIC1_INFO_COLLECTION_EVENTID, LRRC_OM_USER_PLANE_ERR_REL_REPORT_STRU_ALARMID},

};

/* LRRC 统计2 非关联直通事件定义集合 */
int g_aulLRRCStatictic2Event[][2]=
{

};

/* LL2 统计1 非关联直通事件定义集合 */
int g_aulLL2StaticticEvent[][2]=
{
    {LL2_STATISTIC_INFO_COLLECTION_EVENTID, LMAC_OM_PREAMBLE_SPEC_NOT_MATCH_INFO_STRU_ALARMID},
};

/* Volte自诊断事件 */
int g_aulLRRCVolteFaultAutoAnIndEvent[][2]=
{
    {LRRC_VOLTE_FAULT_AUTOAN_IND_EVENTID, LPS_OM_VOLTE_FAULT_AUTOAN_INFO_STRU_ALARMID},
};

int g_aulLRRCVolteStatIndEvent[][2]=
{
    {LPS_VOLTE_STAT_IND_EVENTID, LPS_OM_VOLTE_GENERAL_STAT_INFO_STRU_ALARMID},
};



/* LNAS 统计 非关联直通事件定义集合 */
int g_aulLNASStaticticEvent[][2]=
{
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_DSDS_RRM_RF_CHECKIN_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_LTE_FAKE_NODEB_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_LOAD_BALANCE_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_DSDS_RF_RECOVER_RETRY_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_GRADUAL_FORBIDDEN_OPTIMIZE_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_VOLTE_WITH_TA_CHANGE_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_NO_RAU_WITH_TAU_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_IMS_BEARER_WITH_CN_MOD_CONFLICT_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_3440_TIMEOUT_DO_NOT_REL_STRU_ALARMID},
	{LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_IMSA_ERR_INFO_EMC_TCALL_TIMEOUT_STRU_ALARMID},
	{LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_IMSA_ERR_INFO_DSDS_WAIT_BEAR_REL_TIMEOUT_STRU_ALARMID},
	{LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_IMSA_ERR_INFO_DSDS_SMS_RF_OCCUPY_STRU_ALARMID},
	{LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_IMSA_ERR_INFO_WAIT_RETRY_START_SWITCH_STRU_ALARMID},
	{LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_IMSA_ERR_INFO_HANDOVER_INITIAL_PDN_CONN_STRU_ALARMID},
	{LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_IMSA_ERR_INFO_REG_REJ_WAIT_RECOVERY_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_CNMSG_DECODE_FAIL_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_SMC_FAIL_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_LOCAL_DETACH_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_T3402_DEACTIVED_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_ATT_FAIL_ESM_NEED_DISABLE_LTE_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_MMC_REL_DRGINIT_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_MO_BAR_ATTAMPT_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_ESM_ERR_INFO_SWITCH_APN_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_ESM_ERR_INFO_CNMSG_DECODE_FAIL_STRU_ALARMID},
    {LNAS_STATISTIC_INFO_COLLECTION_EVENTID, LNAS_EMM_ERR_INFO_DETACH_NO_RF_STRU_ALARMID}
};
#endif

/*****************************************************************************
  3 函数申明
*****************************************************************************/


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

