

#ifndef __HMAC_SME_STA_H__
#define __HMAC_SME_STA_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "oal_types.h"
#include "hmac_vap.h"
#include "hmac_mgmt_sta.h"
#undef  THIS_FILE_ID
#define THIS_FILE_ID OAM_FILE_ID_HMAC_SME_STA_H

/*****************************************************************************
  2 宏定义
*****************************************************************************/
typedef oal_void  (*hmac_sme_handle_rsp_func)(hmac_vap_stru *pst_hmac_vap, oal_uint8 *puc_msg);



/*****************************************************************************
  3 枚举定义
*****************************************************************************/
/* 上报给SME结果 类型定义 */
typedef enum
{
    HMAC_SME_SCAN_RSP,
    HMAC_SME_JOIN_RSP,
    HMAC_SME_AUTH_RSP,
    HMAC_SME_ASOC_RSP,

    HMAC_SME_RSP_BUTT
}hmac_sme_rsp_enum;
typedef oal_uint8 hmac_sme_rsp_enum_uint8;

typedef enum
{
    HMAC_AP_SME_START_RSP = 0,

    HMAC_AP_SME_RSP_BUTT
}hmac_ap_sme_rsp_enum;
typedef oal_uint8 hmac_ap_sme_rsp_enum_uint8;

/*****************************************************************************
  4 全局变量声明
*****************************************************************************/
#define     MAX_AUTH_CNT        5
#define     MAX_ASOC_CNT        5

/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
extern oal_void  hmac_send_rsp_to_sme_sta(hmac_vap_stru *pst_hmac_vap, hmac_sme_rsp_enum_uint8 en_type, oal_uint8 *puc_msg);
extern oal_void  hmac_send_rsp_to_sme_ap(hmac_vap_stru *pst_hmac_vap, hmac_ap_sme_rsp_enum_uint8 en_type, oal_uint8 *puc_msg);
oal_void  hmac_handle_scan_rsp_sta(hmac_vap_stru *pst_hmac_vap, oal_uint8 *puc_msg);
oal_void  hmac_handle_join_rsp_sta(hmac_vap_stru *pst_hmac_vap, oal_uint8 *puc_msg);
oal_void  hmac_handle_auth_rsp_sta(hmac_vap_stru *pst_hmac_vap, oal_uint8 *puc_msg);
oal_void  hmac_handle_asoc_rsp_sta(hmac_vap_stru *pst_hmac_vap, oal_uint8 *puc_msg);
oal_void  hmac_prepare_join_req(hmac_join_req_stru *pst_join_req, mac_bss_dscr_stru *pst_bss_dscr);
oal_uint32 hmac_sta_update_join_req_params(hmac_vap_stru *pst_hmac_vap, hmac_join_req_stru *pst_join_req);
oal_uint32  hmac_send_connect_result_to_dmac_sta(hmac_vap_stru *pst_hmac_vap, oal_uint32 ul_result);
extern oal_void  hmac_cfg80211_scan_comp_cb(void  *p_scan_record);
#ifdef _PRE_WLAN_FEATURE_SAE
oal_uint32 hmac_report_external_auth_req(hmac_vap_stru *pst_hmac_vap, oal_nl80211_external_auth_action en_action);
#endif /* _PRE_WLAN_FEATURE_SAE */

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of hmac_sme_sta.h */
