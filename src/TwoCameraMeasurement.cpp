#include <cmath>
#include <optional>
#include <vector>
#include "TwoCameraMeasurement.hpp"

double TwoCameraMeasurement::finalDistanceTheta(double thetaLeftCamLeftTape,
                                                double thetaRightCamRightTape,
                                                double distLeftCamLeftTape,
                                                double distRightCamRightTape) 

{
    //X Coordinates
    double left_x = distLeftCamLeftTape * sin(thetaLeftCamLeftTape);
    double right_x = distLeftCamRightTape * sin(thetaLeftCamRightTape);
    //Y Coordinates
    double left_y = distLeftCamLeftTape * cos(thetaLeftCamLeftTape);
    double right_y = distLeftCamRightTape * cos(thetaLeftCamRightTape);
    double averageX = (left_x + right_x) / 2; 
    double averageY = (left_y + right_y) / 2;

    double finalTheta = atan(averageX/averageY);
    double distFinal = sqrt((averageX**2) + (averageY**2));

    return finalTheta, distFinal;
}

double TwoCameraMeasurement::getXandY(finalTheta, distFinal, beta) {
    double x = distFinal * sin(finalTheta - beta);
    double y = distFinal * cos(finalTheta - beta);
    return x , y;
}