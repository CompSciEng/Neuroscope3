#include "nwblocations.h"

NWBLocations::NWBLocations(std::string hsFileName)
{
    strLoc =  getLocationName(hsFileName, "_loc.xml");
}


QString NWBLocations::getLocationName(std::string& s, const std::string& newExt) {

   std::string new_filename = s;
   std::string::size_type i = s.rfind('.', s.length());

   if (i != std::string::npos)
      new_filename.replace(i, s.length()-i, newExt);
   else
      new_filename.append(newExt);

   QString QNewName = QString::fromUtf8(new_filename.c_str());
   return QNewName;
}

std::string NWBLocations::getDataSetName(std::string hsFileName)
{
    QString strDSN = "/processing/ecephys/LFP/lfp/data";
    QString strLoc = getLocationName(hsFileName, "_loc.xml");

    NeuroscopeXmlReader reader = NeuroscopeXmlReader();
    if(reader.parseFile(strLoc,NeuroscopeXmlReader::PARAMETER)){
        strDSN = reader.getNWBDataSetName();
    }

    std::string utf8_text = strDSN.toUtf8().constData();
    return utf8_text;
}

std::string NWBLocations::getSamplingName(std::string hsFileName)
{
    QString strSN = "/processing/ecephys/LFP/lfp/starting_time";
    QString strLoc =  getLocationName(hsFileName, "_loc.xml");

    NeuroscopeXmlReader reader = NeuroscopeXmlReader();
    if(reader.parseFile(strLoc,NeuroscopeXmlReader::PARAMETER)){
        strSN = reader.getNWBSamplingName();
    }

    std::string utf8_text = strSN.toUtf8().constData();
    return utf8_text;
}

std::string NWBLocations::getGenericText(std::string strLabel, std::string strDefault)
{
    NeuroscopeXmlReader reader = NeuroscopeXmlReader();
    if(reader.parseFile(strLoc,NeuroscopeXmlReader::PARAMETER)){
        QString qsLabel = QString::fromUtf8(strLabel.c_str());
        QString qsDefault = QString::fromUtf8(strDefault.c_str());

        QString DSN = reader.getGenericText(qsLabel, qsDefault);

        std::string utf8_text = DSN.toUtf8().constData();
        return utf8_text;
    }
    return "";
}
