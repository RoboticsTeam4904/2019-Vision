#include <cstring>
#include <string>
#include "WebCam.hpp"

void webCam::set(double exposure, int port, double width, double height, double gain, double contrast) {
    std::string setting = "/usr/bin/v4l2-ctl -d /dev/video";
    setting += std::to_string(port);

    if (width) setting += " --set-fmt-video=width=" + std::to_string(width) + ",height=" + std::to_string(height);
    if (exposure) setting += " -c exposure_auto=1 -c exposure_auto_priority=0 -c exposure_absolute= " + std::to_string(exposure);
    if (gain) setting += " -c gain=" + std::to_string(gain);
    if (contrast) setting += " -c contrast=" + std::to_string(contrast);
    
    system(setting.c_str());
}