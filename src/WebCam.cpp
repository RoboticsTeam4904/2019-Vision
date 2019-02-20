#include <cstdlib>
#include <cstring>
#include <sstream>
#include <string>
#include "WebCam.hpp"

void webCam::set(int port, double width, double height, double exposure, double gain, double contrast)
{
    std::string settingStr = "/usr/bin/v4l2-ctl -d /dev/video";
    std::ostringstream ostr;
    ostr << port;
    std::string portStr = ostr.str();
    settingStr += portStr;
    if (width)
    {
        std::string appendString = " --set-fmt-video=width=";
        std::ostringstream ostr;
        ostr << width;
        std::string widthStr = ostr.str();
        std::string appendString2 = ",height=";
        std::ostringstream ostr;
        ostr << height;
        std::string heightStr = ostr.str();
        settingStr.append(appendString);
        settingStr.append(widthStr);
        settingStr.append(appendString2);
        settingStr.append(heightStr);

    }
    if (exposure)
    {
        std::string appendString = " -c exposure_auto=1 -c exposure_auto_priority=0 -c exposure_absolute= ";
        std::ostringstream ostr;
        ostr << exposure;
        std::string exposureStr = ostr.str();
        settingStr += appendString;
        settingStr+=exposureStr;
    }
    if (gain)
    {
        std::string appendString = " -c gain=";
        std::ostringstream ostr;
        ostr << gain;
        std::string gainStr = ostr.str();
        settingStr += appendString;
        settingStr += gainStr;
    }
    if (contrast)
    {
        std::string appendString = " -c contrast=";
        std::ostringstream ostr;
        ostr << contrast;
        std::string contrastStr = ostr.str();
        settingStr += appendString;
        settingStr += contrastStr;
    }
    const char *cstr = settingStr.c_str();
    system(cstr);
}