import WebCam
import GetContours
import cv2
import numpy as np
import ScoringMetric
import Constants
import sys


def calibrate(port, minExposure=Constants.EXPOSURE_RANGE[0], maxExposure=Constants.EXPOSURE_RANGE[1]):
    max_score = 0
    max_score_exposure = 0
    for exposure in range(minExposure, maxExposure):
        WebCam.set(port=port, exposure=exposure)
        img = WebCam.getImage(port)
        contours = GetContours.getContours(img)
        if len(contours) < 2:
            continue
        boxes, scores = ScoringMetric.getBoxesAndScores(contours)
        scores = sorted(scores)
        final_score = scores[0] + scores[1] - sum(scores[2:])

        if final_score > max_score:
            max_score = final_score
            max_score_exposure = exposure

    if max_score_exposure != 0:
        print("Best exposure (camera {}): {} ".format(port, max_score_exposure))
        return max_score_exposure
    else:
        print("Exposure tuning failed for camera {} - No contours found!".format(port))
        return 0

if(__name__ == "__main__"):
    if config.two_cameras:
        calibrate(Constants.RIGHT_CAMERA_PORT)
        calibrate(Constants.LEFT_CAMERA_PORT)
    else:
        calibrate(Constants.ONE_CAMERA_PORT)