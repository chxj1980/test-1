#ifndef _DAU_CONST_H_
#define _DAU_CONST_H_

// 能力字符串定义
#define DAU_NE_AGENT_CS		    "AgentCap"		// 是否为服务器网元代理
#define DAU_NE_UPGRADE_CS	    "UpgradeCap"	// 自动升级能力
#define DAU_NE_TOPO_CS		    "TopoCap"		// TOPO能力
#define DAU_NE_ISCSI_CS         "IscsiCap"      // ISCSI能力
#define DAU_NE_LOGHARVEST_CS    "LogharvestCap" // 日志收割能力
#define DAU_NE_AUTO_ADD_BY_NMS_CS      "AutoAddByNmsCap"    // 自动入网网管能力
#define DAU_NE_NEW_COMMON_MSG_CS    "NewCommonMsgCap"   //使用新的TCommonMsg，原来老的是TOpeNEAgentParam
                                                        //neagent内部做兼容性使用，外部接口别调用

#define DAU_TOPODISCOVER_CS "TopodiscoverCap" // topo发现能力，dau自身能力
// end 能力


//MainType define
#define MAIN_TYPE_PLATFORM      "PLATFORM"
#define MAIN_TYPE_PU            "PU"
#define MAIN_TYPE_STORAGE       "STORAGE"
#define MAIN_TYPE_NEAGENT       "NEAGENT"
#define MAIN_TYPE_NETWORKDEV    "NETWORKDEV"
#define MAIN_TYPE_ALARMPU       "ALARMPU"
#define MAIN_TYPE_DECODER       "DECODER"
#define MAIN_TYPE_GENERALSERVER "GENERALSERVER" //通用服务器
//end MainType define

//SubType define
//////////////////////////////////////////////////////////////////////////
#define SUB_TYPE_CMU        "CMU"
#define SUB_TYPE_VTDU       "VTDU"
#define SUB_TYPE_PUI        "PUI"
#define SUB_TYPE_CUI        "CUI"
#define SUB_TYPE_NRU        "NRU"
#define SUB_TYPE_GAS        "GAS"
#define SUB_TYPE_UAS        "UAS"
#define SUB_TYPE_3AS        "3AS"
#define SUB_TYPE_VPU        "VPU"
#define SUB_TYPE_DNS        "DNS"
#define SUB_TYPE_MTU        "MTU"
#define SUB_TYPE_TVS        "TVS"
#define SUB_TYPE_MPS        "MPS"
#define SUB_TYPE_RCS        "RCS"
#define SUB_TYPE_ALS        "ALS"

//////////////////////////////////////////////////////////////////////////
#define SUB_TYPE_IPC        "IPC"
#define SUB_TYPE_NVR        "NVR"
#define SUB_TYPE_SVR        "SVR"
#define SUB_TYPE_DEC        "DEC"
#define SUB_TYPE_ENC        "ENC"
#define SUB_TYPE_DVR        "DVR"
#define SUB_TYPE_SVR_EDU    "SVR-EDU"


//////////////////////////////////////////////////////////////////////////
#define SUB_TYPE_RAID       "RAID"
#define SUB_TYPE_CLOUD      "CLOUD"
#define SUB_TYPE_MA         "MA"
#define SUB_TYPE_KDNETDISKAG    "KDNETDISKAG"
#define SUB_TYPE_STDNETDISKAG   "STDNETDISKAG"

//////////////////////////////////////////////////////////////////////////
#define SUB_TYPE_PLATV1     "PLATV1.0AG"
#define SUB_TYPE_PLATV2     "PLATV2.0AG"
#define SUB_TYPE_NETDISKAG  "NETDISKAG"
#define SUB_TYPE_PLATHUB    "PLATHUB"
#define SUB_TYPE_LINKGATE   "LINKGATE"

//////////////////////////////////////////////////////////////////////////
#define SUB_TYPE_SWITCH     "SWITCH"
#define SUB_TYPE_ROUTER     "ROUTER"

//////////////////////////////////////////////////////////////////////////
#define SUB_TYPE_INTELLIGENTBOX     "INTELLIGENTBOX"


//////////////////////////////////////////////////////////////////////////
#define SUB_TYPE_VAS            "VAS"               //vas
#define SUB_TYPE_LOGHARVEST     "LOGHARVEST"        //日志收割服务器

//end SubType define

//错误码区间定义
#define WEB_DAU_ERROR_BEGIN		10000
#define DAU_NE_ERROR_BEGIN		15000
#define NE_AGENT_ERROR_BEGIN	20000
#define SNMP_DAU_ERROR_BEGIN    25000
#define NE_ERROR_BEGIN          30000


#endif //_DAU_CONST_H_
