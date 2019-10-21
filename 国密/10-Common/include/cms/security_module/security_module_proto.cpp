//This file is automatically generated by C++ Program
#include "cms/security_module/security_module_proto.h"
#include <string>
#include "system/converthelper/toxml.h"
#include "system/converthelper/tostruct.h"
#include "system/converthelper/adpfromstdsettovector.h"

const std::string CSecurityModuleSipEvent::ToXml()const
{
    TiXmlElement xmlNode("CSecurityModuleSipEvent");
    ToXmlWithoutClassNameNode(xmlNode);
    TiXmlPrinter printer;
    printer.SetStreamPrinting();
    xmlNode.Accept(&printer);
    return printer.Str();
}
void CSecurityModuleSipEvent::ToXml(TiXmlDocument& xmlDoc)const
{
    TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleSipEvent");
    xmlDoc.LinkEndChild(pclass_nameNode);
    ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleSipEvent::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
}
void CSecurityModuleSipEvent::FromXml(const std::string& xml_string)
{
    TiXmlDocument xmlNode;
    xmlNode.Parse(xml_string.c_str());
    if (xmlNode.Error())
    {
        CMS_ASSERT(0&&"error Parse xml string, maybe not integrated");
        return;
    }

    TiXmlNode* pRoot = xmlNode.RootElement();
    if(!pRoot)
    {
        CMS_ASSERT(0&&"error xml format, not root of class");
        return;
    }
    FromXml(*pRoot);
}
void CSecurityModuleSipEvent::FromXml(const TiXmlNode& xmlNode)
{
    *this = CSecurityModuleSipEvent();

}

const std::string CSecurityModuleEventReq::ToXml()const
{
    TiXmlElement xmlNode("CSecurityModuleEventReq");
    ToXmlWithoutClassNameNode(xmlNode);
    TiXmlPrinter printer;
    printer.SetStreamPrinting();
    xmlNode.Accept(&printer);
    return printer.Str();
}
void CSecurityModuleEventReq::ToXml(TiXmlDocument& xmlDoc)const
{
    TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleEventReq");
    xmlDoc.LinkEndChild(pclass_nameNode);
    ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleEventReq::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
    CSecurityModuleSipEvent::ToXmlWithoutClassNameNode(xmlNode);

    if(!event.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"event","string",event);
    }

    ConvertHelper::ToXml::AddChildNode(xmlNode,"seqNum","int",seqNum);

    if(!session.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"session","string",session);
    }

}
void CSecurityModuleEventReq::FromXml(const std::string& xml_string)
{
    TiXmlDocument xmlNode;
    xmlNode.Parse(xml_string.c_str());
    if (xmlNode.Error())
    {
        CMS_ASSERT(0&&"error Parse xml string, maybe not integrated");
        return;
    }

    TiXmlNode* pRoot = xmlNode.RootElement();
    if(!pRoot)
    {
        CSecurityModuleSipEvent::FromXml(xml_string);
        return;
    }
    FromXml(*pRoot);
}
void CSecurityModuleEventReq::FromXml(const TiXmlNode& xmlNode)
{
    *this = CSecurityModuleEventReq();

    CSecurityModuleSipEvent::FromXml(xmlNode);
    if(xmlNode.ValueStr() == "CSecurityModuleSipEvent")
    {
        return;
    }
    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"event",event);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"seqNum",seqNum);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"session",session);

}

const std::string CSecurityModuleEventRsp::ToXml()const
{
    TiXmlElement xmlNode("CSecurityModuleEventRsp");
    ToXmlWithoutClassNameNode(xmlNode);
    TiXmlPrinter printer;
    printer.SetStreamPrinting();
    xmlNode.Accept(&printer);
    return printer.Str();
}
void CSecurityModuleEventRsp::ToXml(TiXmlDocument& xmlDoc)const
{
    TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleEventRsp");
    xmlDoc.LinkEndChild(pclass_nameNode);
    ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleEventRsp::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
    CSecurityModuleSipEvent::ToXmlWithoutClassNameNode(xmlNode);

    if(!event.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"event","string",event);
    }

    ConvertHelper::ToXml::AddChildNode(xmlNode,"seqNum","int",seqNum);

    if(!session.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"session","string",session);
    }

    ConvertHelper::ToXml::AddChildNode(xmlNode,"errorCode","int",errorCode);

}
void CSecurityModuleEventRsp::FromXml(const std::string& xml_string)
{
    TiXmlDocument xmlNode;
    xmlNode.Parse(xml_string.c_str());
    if (xmlNode.Error())
    {
        CMS_ASSERT(0&&"error Parse xml string, maybe not integrated");
        return;
    }

    TiXmlNode* pRoot = xmlNode.RootElement();
    if(!pRoot)
    {
        CSecurityModuleSipEvent::FromXml(xml_string);
        return;
    }
    FromXml(*pRoot);
}
void CSecurityModuleEventRsp::FromXml(const TiXmlNode& xmlNode)
{
    *this = CSecurityModuleEventRsp();

    CSecurityModuleSipEvent::FromXml(xmlNode);
    if(xmlNode.ValueStr() == "CSecurityModuleSipEvent")
    {
        return;
    }
    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"event",event);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"seqNum",seqNum);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"session",session);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"errorCode",errorCode);

}

const std::string TSecurityModuleVkek::ToXml()const
{
    TiXmlElement xmlNode("TSecurityModuleVkek");
    ToXmlWithoutClassNameNode(xmlNode);
    TiXmlPrinter printer;
    printer.SetStreamPrinting();
    xmlNode.Accept(&printer);
    return printer.Str();
}
void TSecurityModuleVkek::ToXml(TiXmlDocument& xmlDoc)const
{
    TiXmlElement* pclass_nameNode = new TiXmlElement("TSecurityModuleVkek");
    xmlDoc.LinkEndChild(pclass_nameNode);
    ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void TSecurityModuleVkek::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
    if(!vkek.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"vkek","string",vkek);
    }

    if(!version.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"version","string",version);
    }

}
void TSecurityModuleVkek::FromXml(const std::string& xml_string)
{
    TiXmlDocument xmlNode;
    xmlNode.Parse(xml_string.c_str());
    if (xmlNode.Error())
    {
        CMS_ASSERT(0&&"error Parse xml string, maybe not integrated");
        return;
    }

    TiXmlNode* pRoot = xmlNode.RootElement();
    if(!pRoot)
    {
        CMS_ASSERT(0&&"error xml format, not root of class");
        return;
    }
    FromXml(*pRoot);
}
void TSecurityModuleVkek::FromXml(const TiXmlNode& xmlNode)
{
    *this = TSecurityModuleVkek();

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"vkek",vkek);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"version",version);

}

const std::string CSecurityModuleNewVkekReq::ToXml()const
{
    TiXmlElement xmlNode("CSecurityModuleNewVkekReq");
    ToXmlWithoutClassNameNode(xmlNode);
    TiXmlPrinter printer;
    printer.SetStreamPrinting();
    xmlNode.Accept(&printer);
    return printer.Str();
}
void CSecurityModuleNewVkekReq::ToXml(TiXmlDocument& xmlDoc)const
{
    TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleNewVkekReq");
    xmlDoc.LinkEndChild(pclass_nameNode);
    ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleNewVkekReq::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
    CSecurityModuleEventReq::ToXmlWithoutClassNameNode(xmlNode);

    if(!moduleId.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"moduleId","string",moduleId);
    }

    if(!withId.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"withId","string",withId);
    }

    if(!vkekVersion.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"vkekVersion","string",vkekVersion);
    }

}
void CSecurityModuleNewVkekReq::FromXml(const std::string& xml_string)
{
    TiXmlDocument xmlNode;
    xmlNode.Parse(xml_string.c_str());
    if (xmlNode.Error())
    {
        CMS_ASSERT(0&&"error Parse xml string, maybe not integrated");
        return;
    }

    TiXmlNode* pRoot = xmlNode.RootElement();
    if(!pRoot)
    {
        CSecurityModuleEventReq::FromXml(xml_string);
        return;
    }
    FromXml(*pRoot);
}
void CSecurityModuleNewVkekReq::FromXml(const TiXmlNode& xmlNode)
{
    *this = CSecurityModuleNewVkekReq();

    CSecurityModuleEventReq::FromXml(xmlNode);
    if(xmlNode.ValueStr() == "CSecurityModuleEventReq")
    {
        return;
    }
    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"moduleId",moduleId);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"withId",withId);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"vkekVersion",vkekVersion);

}

const std::string CSecurityModuleNewVkekRsp::ToXml()const
{
    TiXmlElement xmlNode("CSecurityModuleNewVkekRsp");
    ToXmlWithoutClassNameNode(xmlNode);
    TiXmlPrinter printer;
    printer.SetStreamPrinting();
    xmlNode.Accept(&printer);
    return printer.Str();
}
void CSecurityModuleNewVkekRsp::ToXml(TiXmlDocument& xmlDoc)const
{
    TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleNewVkekRsp");
    xmlDoc.LinkEndChild(pclass_nameNode);
    ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleNewVkekRsp::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
    CSecurityModuleEventRsp::ToXmlWithoutClassNameNode(xmlNode);

    ConvertHelper::ToXml::AddChildNode(xmlNode,"vkek","TSecurityModuleVkek",vkek);

}
void CSecurityModuleNewVkekRsp::FromXml(const std::string& xml_string)
{
    TiXmlDocument xmlNode;
    xmlNode.Parse(xml_string.c_str());
    if (xmlNode.Error())
    {
        CMS_ASSERT(0&&"error Parse xml string, maybe not integrated");
        return;
    }

    TiXmlNode* pRoot = xmlNode.RootElement();
    if(!pRoot)
    {
        CSecurityModuleEventRsp::FromXml(xml_string);
        return;
    }
    FromXml(*pRoot);
}
void CSecurityModuleNewVkekRsp::FromXml(const TiXmlNode& xmlNode)
{
    *this = CSecurityModuleNewVkekRsp();

    CSecurityModuleEventRsp::FromXml(xmlNode);
    if(xmlNode.ValueStr() == "CSecurityModuleEventRsp")
    {
        return;
    }
    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"vkek",vkek);

}

const std::string CSecurityModuleVkekSaveReq::ToXml()const
{
    TiXmlElement xmlNode("CSecurityModuleVkekSaveReq");
    ToXmlWithoutClassNameNode(xmlNode);
    TiXmlPrinter printer;
    printer.SetStreamPrinting();
    xmlNode.Accept(&printer);
    return printer.Str();
}
void CSecurityModuleVkekSaveReq::ToXml(TiXmlDocument& xmlDoc)const
{
    TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleVkekSaveReq");
    xmlDoc.LinkEndChild(pclass_nameNode);
    ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleVkekSaveReq::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
    CSecurityModuleEventReq::ToXmlWithoutClassNameNode(xmlNode);

    if(!moduleId.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"moduleId","string",moduleId);
    }

    if(!puid.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"puid","string",puid);
    }

    ConvertHelper::ToXml::AddChildNode(xmlNode,"chnid","int",chnid);

    if(!tm_from.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"tm_from","string",tm_from);
    }

    ConvertHelper::ToXml::AddContainer(xmlNode,vkeks,"vkeks","TSecurityModuleVkek");

}
void CSecurityModuleVkekSaveReq::FromXml(const std::string& xml_string)
{
    TiXmlDocument xmlNode;
    xmlNode.Parse(xml_string.c_str());
    if (xmlNode.Error())
    {
        CMS_ASSERT(0&&"error Parse xml string, maybe not integrated");
        return;
    }

    TiXmlNode* pRoot = xmlNode.RootElement();
    if(!pRoot)
    {
        CSecurityModuleEventReq::FromXml(xml_string);
        return;
    }
    FromXml(*pRoot);
}
void CSecurityModuleVkekSaveReq::FromXml(const TiXmlNode& xmlNode)
{
    *this = CSecurityModuleVkekSaveReq();

    CSecurityModuleEventReq::FromXml(xmlNode);
    if(xmlNode.ValueStr() == "CSecurityModuleEventReq")
    {
        return;
    }
    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"moduleId",moduleId);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"puid",puid);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"chnid",chnid);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"tm_from",tm_from);

    ConvertHelper::ToStruct::ParseContainer(xmlNode,vkeks,"vkeks","TSecurityModuleVkek");

}

const std::string CSecurityModuleVkekSaveRsp::ToXml()const
{
    TiXmlElement xmlNode("CSecurityModuleVkekSaveRsp");
    ToXmlWithoutClassNameNode(xmlNode);
    TiXmlPrinter printer;
    printer.SetStreamPrinting();
    xmlNode.Accept(&printer);
    return printer.Str();
}
void CSecurityModuleVkekSaveRsp::ToXml(TiXmlDocument& xmlDoc)const
{
    TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleVkekSaveRsp");
    xmlDoc.LinkEndChild(pclass_nameNode);
    ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleVkekSaveRsp::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
    CSecurityModuleEventRsp::ToXmlWithoutClassNameNode(xmlNode);

}
void CSecurityModuleVkekSaveRsp::FromXml(const std::string& xml_string)
{
    TiXmlDocument xmlNode;
    xmlNode.Parse(xml_string.c_str());
    if (xmlNode.Error())
    {
        CMS_ASSERT(0&&"error Parse xml string, maybe not integrated");
        return;
    }

    TiXmlNode* pRoot = xmlNode.RootElement();
    if(!pRoot)
    {
        CSecurityModuleEventRsp::FromXml(xml_string);
        return;
    }
    FromXml(*pRoot);
}
void CSecurityModuleVkekSaveRsp::FromXml(const TiXmlNode& xmlNode)
{
    *this = CSecurityModuleVkekSaveRsp();

    CSecurityModuleEventRsp::FromXml(xmlNode);
    if(xmlNode.ValueStr() == "CSecurityModuleEventRsp")
    {
        return;
    }
}

const std::string CSecurityModuleNVkekQueryReq::ToXml()const
{
    TiXmlElement xmlNode("CSecurityModuleNVkekQueryReq");
    ToXmlWithoutClassNameNode(xmlNode);
    TiXmlPrinter printer;
    printer.SetStreamPrinting();
    xmlNode.Accept(&printer);
    return printer.Str();
}
void CSecurityModuleNVkekQueryReq::ToXml(TiXmlDocument& xmlDoc)const
{
    TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleNVkekQueryReq");
    xmlDoc.LinkEndChild(pclass_nameNode);
    ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleNVkekQueryReq::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
    CSecurityModuleEventReq::ToXmlWithoutClassNameNode(xmlNode);

    if(!puid.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"puid","string",puid);
    }

    ConvertHelper::ToXml::AddChildNode(xmlNode,"num","int",num);

}
void CSecurityModuleNVkekQueryReq::FromXml(const std::string& xml_string)
{
    TiXmlDocument xmlNode;
    xmlNode.Parse(xml_string.c_str());
    if (xmlNode.Error())
    {
        CMS_ASSERT(0&&"error Parse xml string, maybe not integrated");
        return;
    }

    TiXmlNode* pRoot = xmlNode.RootElement();
    if(!pRoot)
    {
        CSecurityModuleEventReq::FromXml(xml_string);
        return;
    }
    FromXml(*pRoot);
}
void CSecurityModuleNVkekQueryReq::FromXml(const TiXmlNode& xmlNode)
{
    *this = CSecurityModuleNVkekQueryReq();

    CSecurityModuleEventReq::FromXml(xmlNode);
    if(xmlNode.ValueStr() == "CSecurityModuleEventReq")
    {
        return;
    }
    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"puid",puid);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"num",num);

}

const std::string CSecurityModuleNVkekQueryRsp::ToXml()const
{
    TiXmlElement xmlNode("CSecurityModuleNVkekQueryRsp");
    ToXmlWithoutClassNameNode(xmlNode);
    TiXmlPrinter printer;
    printer.SetStreamPrinting();
    xmlNode.Accept(&printer);
    return printer.Str();
}
void CSecurityModuleNVkekQueryRsp::ToXml(TiXmlDocument& xmlDoc)const
{
    TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleNVkekQueryRsp");
    xmlDoc.LinkEndChild(pclass_nameNode);
    ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleNVkekQueryRsp::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
    CSecurityModuleEventRsp::ToXmlWithoutClassNameNode(xmlNode);

    ConvertHelper::ToXml::AddContainer(xmlNode,vkeks,"vkeks","TSecurityModuleVkek");

}
void CSecurityModuleNVkekQueryRsp::FromXml(const std::string& xml_string)
{
    TiXmlDocument xmlNode;
    xmlNode.Parse(xml_string.c_str());
    if (xmlNode.Error())
    {
        CMS_ASSERT(0&&"error Parse xml string, maybe not integrated");
        return;
    }

    TiXmlNode* pRoot = xmlNode.RootElement();
    if(!pRoot)
    {
        CSecurityModuleEventRsp::FromXml(xml_string);
        return;
    }
    FromXml(*pRoot);
}
void CSecurityModuleNVkekQueryRsp::FromXml(const TiXmlNode& xmlNode)
{
    *this = CSecurityModuleNVkekQueryRsp();

    CSecurityModuleEventRsp::FromXml(xmlNode);
    if(xmlNode.ValueStr() == "CSecurityModuleEventRsp")
    {
        return;
    }
    ConvertHelper::ToStruct::ParseContainer(xmlNode,vkeks,"vkeks","TSecurityModuleVkek");

}

const std::string CSecurityModuleVkekQueryReq::ToXml()const
{
    TiXmlElement xmlNode("CSecurityModuleVkekQueryReq");
    ToXmlWithoutClassNameNode(xmlNode);
    TiXmlPrinter printer;
    printer.SetStreamPrinting();
    xmlNode.Accept(&printer);
    return printer.Str();
}
void CSecurityModuleVkekQueryReq::ToXml(TiXmlDocument& xmlDoc)const
{
    TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleVkekQueryReq");
    xmlDoc.LinkEndChild(pclass_nameNode);
    ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleVkekQueryReq::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
    CSecurityModuleEventReq::ToXmlWithoutClassNameNode(xmlNode);

    if(!moduleId.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"moduleId","string",moduleId);
    }

    if(!puid.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"puid","string",puid);
    }

    ConvertHelper::ToXml::AddChildNode(xmlNode,"chnid","int",chnid);

    if(!tm_from.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"tm_from","string",tm_from);
    }

    if(!tm_to.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"tm_to","string",tm_to);
    }

}
void CSecurityModuleVkekQueryReq::FromXml(const std::string& xml_string)
{
    TiXmlDocument xmlNode;
    xmlNode.Parse(xml_string.c_str());
    if (xmlNode.Error())
    {
        CMS_ASSERT(0&&"error Parse xml string, maybe not integrated");
        return;
    }

    TiXmlNode* pRoot = xmlNode.RootElement();
    if(!pRoot)
    {
        CSecurityModuleEventReq::FromXml(xml_string);
        return;
    }
    FromXml(*pRoot);
}
void CSecurityModuleVkekQueryReq::FromXml(const TiXmlNode& xmlNode)
{
    *this = CSecurityModuleVkekQueryReq();

    CSecurityModuleEventReq::FromXml(xmlNode);
    if(xmlNode.ValueStr() == "CSecurityModuleEventReq")
    {
        return;
    }
    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"moduleId",moduleId);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"puid",puid);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"chnid",chnid);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"tm_from",tm_from);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"tm_to",tm_to);

}

const std::string CSecurityModuleVkekQueryRsp::ToXml()const
{
    TiXmlElement xmlNode("CSecurityModuleVkekQueryRsp");
    ToXmlWithoutClassNameNode(xmlNode);
    TiXmlPrinter printer;
    printer.SetStreamPrinting();
    xmlNode.Accept(&printer);
    return printer.Str();
}
void CSecurityModuleVkekQueryRsp::ToXml(TiXmlDocument& xmlDoc)const
{
    TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleVkekQueryRsp");
    xmlDoc.LinkEndChild(pclass_nameNode);
    ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleVkekQueryRsp::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
    CSecurityModuleEventRsp::ToXmlWithoutClassNameNode(xmlNode);

    ConvertHelper::ToXml::AddContainer(xmlNode,vkeks,"vkeks","TSecurityModuleVkek");

}
void CSecurityModuleVkekQueryRsp::FromXml(const std::string& xml_string)
{
    TiXmlDocument xmlNode;
    xmlNode.Parse(xml_string.c_str());
    if (xmlNode.Error())
    {
        CMS_ASSERT(0&&"error Parse xml string, maybe not integrated");
        return;
    }

    TiXmlNode* pRoot = xmlNode.RootElement();
    if(!pRoot)
    {
        CSecurityModuleEventRsp::FromXml(xml_string);
        return;
    }
    FromXml(*pRoot);
}
void CSecurityModuleVkekQueryRsp::FromXml(const TiXmlNode& xmlNode)
{
    *this = CSecurityModuleVkekQueryRsp();

    CSecurityModuleEventRsp::FromXml(xmlNode);
    if(xmlNode.ValueStr() == "CSecurityModuleEventRsp")
    {
        return;
    }
    ConvertHelper::ToStruct::ParseContainer(xmlNode,vkeks,"vkeks","TSecurityModuleVkek");

}

const std::string CSecurityModuleCertificateQueryReq::ToXml()const
{
    TiXmlElement xmlNode("CSecurityModuleCertificateQueryReq");
    ToXmlWithoutClassNameNode(xmlNode);
    TiXmlPrinter printer;
    printer.SetStreamPrinting();
    xmlNode.Accept(&printer);
    return printer.Str();
}
void CSecurityModuleCertificateQueryReq::ToXml(TiXmlDocument& xmlDoc)const
{
    TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleCertificateQueryReq");
    xmlDoc.LinkEndChild(pclass_nameNode);
    ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleCertificateQueryReq::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
    CSecurityModuleEventReq::ToXmlWithoutClassNameNode(xmlNode);

    if(!moduleId.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"moduleId","string",moduleId);
    }

    if(!id.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"id","string",id);
    }

}
void CSecurityModuleCertificateQueryReq::FromXml(const std::string& xml_string)
{
    TiXmlDocument xmlNode;
    xmlNode.Parse(xml_string.c_str());
    if (xmlNode.Error())
    {
        CMS_ASSERT(0&&"error Parse xml string, maybe not integrated");
        return;
    }

    TiXmlNode* pRoot = xmlNode.RootElement();
    if(!pRoot)
    {
        CSecurityModuleEventReq::FromXml(xml_string);
        return;
    }
    FromXml(*pRoot);
}
void CSecurityModuleCertificateQueryReq::FromXml(const TiXmlNode& xmlNode)
{
    *this = CSecurityModuleCertificateQueryReq();

    CSecurityModuleEventReq::FromXml(xmlNode);
    if(xmlNode.ValueStr() == "CSecurityModuleEventReq")
    {
        return;
    }
    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"moduleId",moduleId);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"id",id);

}

const std::string CSecurityModuleCertificateQueryRsp::ToXml()const
{
    TiXmlElement xmlNode("CSecurityModuleCertificateQueryRsp");
    ToXmlWithoutClassNameNode(xmlNode);
    TiXmlPrinter printer;
    printer.SetStreamPrinting();
    xmlNode.Accept(&printer);
    return printer.Str();
}
void CSecurityModuleCertificateQueryRsp::ToXml(TiXmlDocument& xmlDoc)const
{
    TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleCertificateQueryRsp");
    xmlDoc.LinkEndChild(pclass_nameNode);
    ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleCertificateQueryRsp::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
    CSecurityModuleEventRsp::ToXmlWithoutClassNameNode(xmlNode);

    if(!signatureCert.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"signatureCert","string",signatureCert);
    }

    if(!encryptCert.empty())
    {
        ConvertHelper::ToXml::AddChildNode(xmlNode,"encryptCert","string",encryptCert);
    }

}
void CSecurityModuleCertificateQueryRsp::FromXml(const std::string& xml_string)
{
    TiXmlDocument xmlNode;
    xmlNode.Parse(xml_string.c_str());
    if (xmlNode.Error())
    {
        CMS_ASSERT(0&&"error Parse xml string, maybe not integrated");
        return;
    }

    TiXmlNode* pRoot = xmlNode.RootElement();
    if(!pRoot)
    {
        CSecurityModuleEventRsp::FromXml(xml_string);
        return;
    }
    FromXml(*pRoot);
}
void CSecurityModuleCertificateQueryRsp::FromXml(const TiXmlNode& xmlNode)
{
    *this = CSecurityModuleCertificateQueryRsp();

    CSecurityModuleEventRsp::FromXml(xmlNode);
    if(xmlNode.ValueStr() == "CSecurityModuleEventRsp")
    {
        return;
    }
    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"signatureCert",signatureCert);

    ConvertHelper::ToStruct::ParseChildNode(xmlNode,"encryptCert",encryptCert);

}

const std::string CSecurityModuleCertificateSaveReq::ToXml()const
{
	TiXmlElement xmlNode("CSecurityModuleCertificateSaveReq");
	ToXmlWithoutClassNameNode(xmlNode);
	TiXmlPrinter printer;
	printer.SetStreamPrinting();
	xmlNode.Accept(&printer);
	return printer.Str();
}
void CSecurityModuleCertificateSaveReq::ToXml(TiXmlDocument& xmlDoc)const
{
	TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleCertificateSaveReq");
	xmlDoc.LinkEndChild(pclass_nameNode);
	ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleCertificateSaveReq::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
	CSecurityModuleEventReq::ToXmlWithoutClassNameNode(xmlNode);

	ConvertHelper::ToXml::AddChildNode(xmlNode, "type", "int", type);

	if (!ownerid.empty())
	{
		ConvertHelper::ToXml::AddChildNode(xmlNode, "ownerid", "string", ownerid);
	}

	if (!cert4sign.empty())
	{
		ConvertHelper::ToXml::AddChildNode(xmlNode, "cert4sign", "string", cert4sign);
	}

	if (!cert4encry.empty())
	{
		ConvertHelper::ToXml::AddChildNode(xmlNode, "cert4encry", "string", cert4encry);
	}

}
void CSecurityModuleCertificateSaveReq::FromXml(const std::string& xml_string)
{
	TiXmlDocument xmlNode;
	xmlNode.Parse(xml_string.c_str());
	if (xmlNode.Error())
	{
		CMS_ASSERT(0 && "error Parse xml string, maybe not integrated");
		return;
	}

	TiXmlNode* pRoot = xmlNode.RootElement();
	if (!pRoot)
	{
		CSecurityModuleEventReq::FromXml(xml_string);
		return;
	}
	FromXml(*pRoot);
}
void CSecurityModuleCertificateSaveReq::FromXml(const TiXmlNode& xmlNode)
{
	*this = CSecurityModuleCertificateSaveReq();

	CSecurityModuleEventReq::FromXml(xmlNode);
	if (xmlNode.ValueStr() == "CSecurityModuleEventReq")
	{
		return;
	}
	ConvertHelper::ToStruct::ParseChildNode(xmlNode, "type", type);

	ConvertHelper::ToStruct::ParseChildNode(xmlNode, "ownerid", ownerid);

	ConvertHelper::ToStruct::ParseChildNode(xmlNode, "cert4sign", cert4sign);

	ConvertHelper::ToStruct::ParseChildNode(xmlNode, "cert4encry", cert4encry);
}

const std::string CSecurityModuleCertificateSaveRsp::ToXml()const
{
	TiXmlElement xmlNode("CSecurityModuleCertificateSaveRsp");
	ToXmlWithoutClassNameNode(xmlNode);
	TiXmlPrinter printer;
	printer.SetStreamPrinting();
	xmlNode.Accept(&printer);
	return printer.Str();
}
void CSecurityModuleCertificateSaveRsp::ToXml(TiXmlDocument& xmlDoc)const
{
	TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleCertificateSaveRsp");
	xmlDoc.LinkEndChild(pclass_nameNode);
	ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleCertificateSaveRsp::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
	CSecurityModuleEventRsp::ToXmlWithoutClassNameNode(xmlNode);

}
void CSecurityModuleCertificateSaveRsp::FromXml(const std::string& xml_string)
{
	TiXmlDocument xmlNode;
	xmlNode.Parse(xml_string.c_str());
	if (xmlNode.Error())
	{
		CMS_ASSERT(0 && "error Parse xml string, maybe not integrated");
		return;
	}

	TiXmlNode* pRoot = xmlNode.RootElement();
	if (!pRoot)
	{
		CSecurityModuleEventRsp::FromXml(xml_string);
		return;
	}
	FromXml(*pRoot);
}
void CSecurityModuleCertificateSaveRsp::FromXml(const TiXmlNode& xmlNode)
{
	*this = CSecurityModuleCertificateSaveRsp();

	CSecurityModuleEventRsp::FromXml(xmlNode);
	if (xmlNode.ValueStr() == "CSecurityModuleEventRsp")
	{
		return;
	}
}
const std::string CSecurityModuleCertificateGetReq::ToXml()const
{
	TiXmlElement xmlNode("CSecurityModuleCertificateGetReq");
	ToXmlWithoutClassNameNode(xmlNode);
	TiXmlPrinter printer;
	printer.SetStreamPrinting();
	xmlNode.Accept(&printer);
	return printer.Str();
}
void CSecurityModuleCertificateGetReq::ToXml(TiXmlDocument& xmlDoc)const
{
	TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleCertificateGetReq");
	xmlDoc.LinkEndChild(pclass_nameNode);
	ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleCertificateGetReq::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
	CSecurityModuleEventReq::ToXmlWithoutClassNameNode(xmlNode);

	if (!ownerid.empty())
	{
		ConvertHelper::ToXml::AddChildNode(xmlNode, "ownerid", "string", ownerid);
	}

}
void CSecurityModuleCertificateGetReq::FromXml(const std::string& xml_string)
{
	TiXmlDocument xmlNode;
	xmlNode.Parse(xml_string.c_str());
	if (xmlNode.Error())
	{
		CMS_ASSERT(0 && "error Parse xml string, maybe not integrated");
		return;
	}

	TiXmlNode* pRoot = xmlNode.RootElement();
	if (!pRoot)
	{
		CSecurityModuleEventReq::FromXml(xml_string);
		return;
	}
	FromXml(*pRoot);
}
void CSecurityModuleCertificateGetReq::FromXml(const TiXmlNode& xmlNode)
{
	*this = CSecurityModuleCertificateGetReq();

	CSecurityModuleEventReq::FromXml(xmlNode);
	if (xmlNode.ValueStr() == "CSecurityModuleEventReq")
	{
		return;
	}

	ConvertHelper::ToStruct::ParseChildNode(xmlNode, "ownerid", ownerid);
}

const std::string CSecurityModuleCertificateGetRsp::ToXml()const
{
	TiXmlElement xmlNode("CSecurityModuleCertificateGetRsp");
	ToXmlWithoutClassNameNode(xmlNode);
	TiXmlPrinter printer;
	printer.SetStreamPrinting();
	xmlNode.Accept(&printer);
	return printer.Str();
}
void CSecurityModuleCertificateGetRsp::ToXml(TiXmlDocument& xmlDoc)const
{
	TiXmlElement* pclass_nameNode = new TiXmlElement("CSecurityModuleCertificateGetRsp");
	xmlDoc.LinkEndChild(pclass_nameNode);
	ToXmlWithoutClassNameNode(*pclass_nameNode);
}
void CSecurityModuleCertificateGetRsp::ToXmlWithoutClassNameNode(TiXmlNode& xmlNode)const
{
	CSecurityModuleEventRsp::ToXmlWithoutClassNameNode(xmlNode);
	if (!certContent.empty())
	{
		ConvertHelper::ToXml::AddChildNode(xmlNode, "certContent", "string", certContent);
	}
}
void CSecurityModuleCertificateGetRsp::FromXml(const std::string& xml_string)
{
	TiXmlDocument xmlNode;
	xmlNode.Parse(xml_string.c_str());
	if (xmlNode.Error())
	{
		CMS_ASSERT(0 && "error Parse xml string, maybe not integrated");
		return;
	}

	TiXmlNode* pRoot = xmlNode.RootElement();
	if (!pRoot)
	{
		CSecurityModuleEventRsp::FromXml(xml_string);
		return;
	}
	FromXml(*pRoot);
}
void CSecurityModuleCertificateGetRsp::FromXml(const TiXmlNode& xmlNode)
{
	*this = CSecurityModuleCertificateGetRsp();

	CSecurityModuleEventRsp::FromXml(xmlNode);
	if (xmlNode.ValueStr() == "CSecurityModuleEventRsp")
	{
		return;
	}
	ConvertHelper::ToStruct::ParseChildNode(xmlNode, "certContent", certContent);
}
//end of file