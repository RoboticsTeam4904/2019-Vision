#include <chrono>
#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>
#include "AngleFinder.h"
#include "Config.h"
#include "networktables/NetworkTable.h"
#include "networktables/NetworkTableEntry.h"
#include "networktables/NetworkTableInstance.h"

unsigned long timeStart = 0;

int main() {
    // Inform the user of config
    std::cout 
        << "Running with DEBUG=" << DEBUG 
        << " USE_NETWORKTABLES=" << USE_NETWORKTABLES 
        << " NETWORKTABLES_PORT=" << NETWORKTABLES_PORT 
        << " TEAM_NUMBER=" << TEAM_NUMBER
        << std::endl;

    // Initialize networktables
    std::cout << "Initializing networktables using port " << NETWORKTABLES_PORT << " and team number " << TEAM_NUMBER << std::endl;
    nt::NetworkTableInstance inst = nt::NetworkTableInstance::GetDefault();
    inst.StartClientTeam(TEAM_NUMBER, NETWORKTABLES_PORT);
    nt::NetworkTableEntry tapeAngleEntry = inst.GetEntry("Vision/tapeAngle");

    // Start finding angles
    grip::GripPipeline pipeline = grip::GripPipeline();
    cv::VideoCapture camera(0);
    cv::Mat buf;
    double angle;
    while (true) {
        if (DEBUG)
            timeStart = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

        if (camera.read(buf)) {
            angle = AngleFinder::tapeAngle(buf, pipeline);
            if (USE_NETWORKTABLES)
                tapeAngleEntry.SetDouble(angle);
            if (DEBUG)
                std::cout << angle << std::endl;
        } else {
            std::cout << "Camera ded" << std::endl;
        }

        if (DEBUG)
            std::cout << "Time per frame: "
                      << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch())
                                 .count() -
                             timeStart
                      << std::endl;
    }
    return 0;
}