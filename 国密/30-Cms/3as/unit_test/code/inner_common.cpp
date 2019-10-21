#include "inner_common.h"

bool IsRspType( u16 wMsgId )
{
    switch (wMsgId)
    {
    case TAS_LOGIN_RSP:
    case TAS_LOGOUT_RSP:
    case TAS_CU_ONLINE_RSP:
    case TAS_CU_OFFLINE_RSP:
    case TAS_DEVICE_ADD_RSP:
    case TAS_DEVICE_ADD_NTF_RSP:
    case TAS_DEVICE_DEL_RSP:
    case TAS_DEVICE_DEL_NTF_RSP:
    case TAS_DEVICE_MOD_RSP:
    case TAS_DEVICE_MOD_NTF_RSP:
    case TAS_DEVICE_QRY_RSP:
    case TAS_DEVICE_QRY_NTF_RSP:
    case TAS_DEVICE_MODEL_ADD_RSP:
    case TAS_DEVICE_MODEL_ADD_NTF_RSP:
    case TAS_DEVICE_MODEL_DEL_RSP:
    case TAS_DEVICE_MODEL_DEL_NTF_RSP:
    case TAS_DEVICE_MODEL_QRY_RSP:
    case TAS_DEVICE_MODEL_QRY_NTF_RSP:
    case TAS_DEVICE_CAP_INDEX_NAME_GET_RSP:
    case TAS_DEVICE_CAP_INDEX_NAME_SET_RSP:
    case TAS_DEVICE_CAP_INDEX_NAME_MOD_NTF_RSP:
    case TAS_DEVICE_CAP_INDEX_NAME_QRY_RSP:
    case TAS_DEVICE_CAP_INDEX_NAME_QRY_NTF_RSP:
    case TAS_DEVICE_MANUFACTURER_ADD_RSP:
    case TAS_DEVICE_MANUFACTURER_DEL_RSP:
    case TAS_DEVICE_MANUFACTURER_QRY_RSP:
    case TAS_DEVICE_MANUFACTURER_QRY_NTF_RSP:
    case TAS_CUSER_ADD_RSP:
    case TAS_CUSER_ADD_NTF_RSP:
    case TAS_CUSER_DEL_RSP:
    case TAS_CUSER_DEL_NTF_RSP:
    case TAS_CUSER_MOD_RSP:
    case TAS_CUSER_MOD_NTF_RSP:
    case TAS_CUSER_QRY_RSP:
    case TAS_CUSER_QRY_NTF_RSP:
    case TAS_CUSER_DEVICE_ADD_RSP:
    case TAS_CUSER_DEVICE_ADD_NTF_RSP:
    case TAS_CUSER_DEVICE_DEL_RSP:
    case TAS_CUSER_DEVICE_DEL_NTF_RSP:
    case TAS_CUSER_DEVICE_MOD_RSP:
    case TAS_CUSER_DEVICE_MOD_NTF_RSP:
    case TAS_CUSER_DEVICE_QRY_RSP:
    case TAS_CUSER_DEVICE_QRY_NTF_RSP:
    case TAS_DEVICE_GROUP_ADD_RSP:
    case TAS_DEVICE_GROUP_ADD_NTF_RSP:
    case TAS_DEVICE_GROUP_DEL_RSP:
    case TAS_DEVICE_GROUP_DEL_NTF_RSP:
    case TAS_DEVICE_GROUP_MOD_RSP:
    case TAS_DEVICE_GROUP_MOD_NTF_RSP:
    case TAS_DEVICE_GROUP_QRY_RSP:
    case TAS_DEVICE_GROUP_QRY_NTF_RSP:
    case TAS_DEVICE_GROUP_DEVICE_ADD_RSP:
    case TAS_DEVICE_GROUP_DEVICE_ADD_NTF_RSP:
    case TAS_DEVICE_GROUP_DEVICE_DEL_RSP:
    case TAS_DEVICE_GROUP_DEVICE_DEL_NTF_RSP:
    case TAS_DEVICE_GROUP_DEVICE_QRY_RSP:
    case TAS_DEVICE_GROUP_DEVICE_QRY_NTF_RSP:
    case TAS_CUSER_GROUP_ADD_RSP:
    case TAS_CUSER_GROUP_ADD_NTF_RSP:
    case TAS_CUSER_GROUP_DEL_RSP:
    case TAS_CUSER_GROUP_DEL_NTF_RSP:
    case TAS_CUSER_GROUP_MOD_RSP:
    case TAS_CUSER_GROUP_MOD_NTF_RSP:
    case TAS_CUSER_GROUP_QRY_RSP:
    case TAS_CUSER_GROUP_QRY_NTF_RSP:
    case TAS_CUSER_GROUP_DEVICE_ADD_RSP:
    case TAS_CUSER_GROUP_DEVICE_ADD_NTF_RSP:
    case TAS_CUSER_GROUP_DEVICE_DEL_RSP:
    case TAS_CUSER_GROUP_DEVICE_DEL_NTF_RSP:
    case TAS_CUSER_GROUP_DEVICE_MOD_RSP:
    case TAS_CUSER_GROUP_DEVICE_MOD_NTF_RSP:
    case TAS_CUSER_GROUP_DEVICE_QRY_RSP:
    case TAS_CUSER_GROUP_DEVICE_QRY_NTF_RSP:
    case TAS_LICENSE_UPDATE_RSP:
    case TAS_LICENSE_QRY_RSP:
    case TAS_DOMAIN_RELATION_QRY_RSP:
    case TAS_DOMAIN_RELATION_QRY_NTF_RSP:
    case TAS_DOMAIN_RELATION_ADD_NTF_RSP:
    case TAS_DOMAIN_RELATION_DEL_NTF_RSP:
    case TAS_DOMAIN_RELATION_MOD_NTF_RSP:
    case TAS_DOMAIN_NAME_GET_RSP:
    case TAS_CONFIG_TAS_SET_RSP:
    case TAS_CONFIG_TAS_GET_RSP:
    case TAS_CHILDTAS_ADD_RSP:
    case TAS_CHILDTAS_DEL_RSP:
    case TAS_CTRL_TAS_RSP:
    case TAS_TACUSER_ADD_RSP:
    case TAS_TACUSER_ADD_NTF_RSP:
    case TAS_TACUSER_DEL_RSP:
    case TAS_TACUSER_DEL_NTF_RSP:
    case TAS_TACUSER_MOD_RSP:
    case TAS_TACUSER_MOD_NTF_RSP:
    case TAS_TACUSER_QRY_RSP:
    case TAS_TACUSER_QRY_NTF_RSP:
    case TAS_TEMP_AUTHORIZATION_ADD_RSP:
    case TAS_TEMP_AUTHORIZATION_ADD_NTF_RSP:
    case TAS_TEMP_AUTHORIZATION_DEL_RSP:
    case TAS_TEMP_AUTHORIZATION_DEL_NTF_RSP:
    case TAS_TEMP_AUTHORIZATION_MOD_RSP:
    case TAS_TEMP_AUTHORIZATION_MOD_NTF_RSP:
    case TAS_TEMP_AUTHORIZATION_QRY_RSP:
    case TAS_TEMP_AUTHORIZATION_QRY_NTF_RSP:
    case TAS_SYNC_TAS_DATA_RSP:
    case TAS_CUSER_DEVICEFULLINFO_AND_PRIVILEGE_QRY_RSP:
    case TAS_CUSER_DEVICEFULLINFO_AND_PRIVILEGE_QRY_NTF_RSP:
        return true;
    default:
        return false;
    }
    return true;
}

bool IsQryNtfReqType( u16 wMsgId )
{
    switch (wMsgId)
    {
    case TAS_DEVICE_QRY_NTF_REQ:
    case TAS_DEVICE_MODEL_QRY_NTF_REQ:
    case TAS_DEVICE_CAP_INDEX_NAME_QRY_NTF_REQ:
    case TAS_DEVICE_MANUFACTURER_QRY_NTF_REQ:
    case TAS_CUSER_QRY_NTF_REQ:
    case TAS_CUSER_DEVICE_QRY_NTF_REQ:
    case TAS_DEVICE_GROUP_QRY_NTF_REQ:
    case TAS_DEVICE_GROUP_DEVICE_QRY_NTF_REQ:
    case TAS_CUSER_GROUP_QRY_NTF_REQ:
    case TAS_CUSER_GROUP_DEVICE_QRY_NTF_REQ:
    case TAS_DOMAIN_RELATION_QRY_NTF_REQ:
    case TAS_TACUSER_QRY_NTF_REQ:
    case TAS_TEMP_AUTHORIZATION_QRY_NTF_REQ:
    case TAS_CUSER_DEVICEFULLINFO_AND_PRIVILEGE_QRY_NTF_REQ:
        return true;
    default:
        return false;
    }
}

string ReplaceSessid( const s8* cstrRawdata, const string &cstrNewSessid )
{
    string str(cstrRawdata);
    string::size_type pos1, pos2;
    pos1 = str.find("<session>");
    if (string::npos == pos1)
    {
        assert(false);
        return str;
    }
    pos1 += strlen("<session>");
    pos2 = str.find("</session>");
    if (string::npos == pos2)
    {
        assert(false);
        return str;
    }
    str.replace(pos1, pos2-pos1, cstrNewSessid.c_str());
    return str;
}

string ReplaceSeqno( const s8* cstrRawdata, u32 dwNewSeqno )
{
    string str(cstrRawdata);
    string::size_type pos1, pos2;
    pos1 = str.find("<seqNum>");
    pos1 += strlen("<seqNum>");
    pos2 = str.find("</seqNum>");
    s8 szBuf[20];
    sprintf(szBuf, "%u", dwNewSeqno);
    str.replace(pos1, pos2-pos1, szBuf);
    return str;
}

bool IsNtfReqType( u16 wMsgId )
{
    switch (wMsgId)
    {
    case TAS_DEVICE_ADD_NTF_REQ:
    case TAS_DEVICE_DEL_NTF_REQ:
    case TAS_DEVICE_MOD_NTF_REQ:
    case TAS_DEVICE_QRY_NTF_REQ:
    case TAS_DEVICE_MODEL_ADD_NTF_REQ:
    case TAS_DEVICE_MODEL_DEL_NTF_REQ:
    case TAS_DEVICE_MODEL_QRY_NTF_REQ:
    case TAS_DEVICE_CAP_INDEX_NAME_MOD_NTF_REQ:
    case TAS_DEVICE_CAP_INDEX_NAME_QRY_NTF_REQ:
    case TAS_DEVICE_MANUFACTURER_QRY_NTF_REQ:
    case TAS_CUSER_ADD_NTF_REQ:
    case TAS_CUSER_DEL_NTF_REQ:
    case TAS_CUSER_MOD_NTF_REQ:
    case TAS_CUSER_QRY_NTF_REQ:
    case TAS_CUSER_DEVICE_ADD_NTF_REQ:
    case TAS_CUSER_DEVICE_DEL_NTF_REQ:
    case TAS_CUSER_DEVICE_MOD_NTF_REQ:
    case TAS_CUSER_DEVICE_QRY_NTF_REQ:
    case TAS_DEVICE_GROUP_ADD_NTF_REQ:
    case TAS_DEVICE_GROUP_DEL_NTF_REQ:
    case TAS_DEVICE_GROUP_MOD_NTF_REQ:
    case TAS_DEVICE_GROUP_QRY_NTF_REQ:
    case TAS_DEVICE_GROUP_DEVICE_ADD_NTF_REQ:
    case TAS_DEVICE_GROUP_DEVICE_DEL_NTF_REQ:
    case TAS_DEVICE_GROUP_DEVICE_QRY_NTF_REQ:
    case TAS_CUSER_GROUP_ADD_NTF_REQ:
    case TAS_CUSER_GROUP_DEL_NTF_REQ:
    case TAS_CUSER_GROUP_MOD_NTF_REQ:
    case TAS_CUSER_GROUP_QRY_NTF_REQ:
    case TAS_CUSER_GROUP_DEVICE_ADD_NTF_REQ:
    case TAS_CUSER_GROUP_DEVICE_DEL_NTF_REQ:
    case TAS_CUSER_GROUP_DEVICE_MOD_NTF_REQ:
    case TAS_CUSER_GROUP_DEVICE_QRY_NTF_REQ:
    case TAS_DOMAIN_RELATION_QRY_NTF_REQ:
    case TAS_DOMAIN_RELATION_ADD_NTF_REQ:
    case TAS_DOMAIN_RELATION_DEL_NTF_REQ:
    case TAS_DOMAIN_RELATION_MOD_NTF_REQ:
    case TAS_TACUSER_ADD_NTF_REQ:
    case TAS_TACUSER_DEL_NTF_REQ:
    case TAS_TACUSER_MOD_NTF_REQ:
    case TAS_TACUSER_QRY_NTF_REQ:
    case TAS_TEMP_AUTHORIZATION_ADD_NTF_REQ:
    case TAS_TEMP_AUTHORIZATION_DEL_NTF_REQ:
    case TAS_TEMP_AUTHORIZATION_MOD_NTF_REQ:
    case TAS_TEMP_AUTHORIZATION_QRY_NTF_REQ:
    case TAS_CUSER_DEVICEFULLINFO_AND_PRIVILEGE_QRY_NTF_REQ:
        return true;
    default:
        return false;
    }
}

