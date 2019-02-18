import WebCam
import GetContours
import cv2
import numpy as np
import ScoringMetric
import Constants
import sys


def calibrate(port, minExposure, maxExposure, WEIGHTS):
    boxes = []
    maxScore = 0
    max_score_exposure = 0
    for exposure in range(minExposure, maxExposure):
        WebCam.set(port=port, exposure=exposure)
        img = WebCam.getImage(port)
        _, contours, _ = GetContours.getContours(img)
        if len(contours)==0:
            continue
        for i in range(len(contours)):
            rect = cv2.minAreaRect(contours[i])
            if(cv2.__version__[0] == "2"):
                box = cv2.cv.BoxPoints(rect)
            else:
                box = cv2.boxPoints(rect)

            box = np.int0(box)
            boxes.append(box)
        scores = sorted([ScoringMetric.score(boxes[i], contours[i], img, WEIGHTS)[
                        1] for i in range(0, len(contours))], reverse=True)
        try:
            final_score = scores[0]+scores[1]-sum(scores[2:])
        except:
            final_score = -float("inf")

        if(final_score > maxScore):
            maxScore = final_score
            max_score_exposure = exposure

    if max_score_exposure != 0:
        WebCam.set(port=port, exposure=max_score_exposure)
    else:
        WebCam.set(port=port, exposure=sys.argv[1])
        return "Exposure tuning failed - No contours found!"
    return "Exposure: " + str(max_score_exposure)

if(__name__ == "__main__"):
    print("Camera 0: " + calibrate(0, Constants.MIN_EXPOSURE, Constants.MAX_EXPOSURE, Constants.WEIGHTS))
    print("Camera 1: " + calibrate(1, Constants.MIN_EXPOSURE, Constants.MAX_EXPOSURE, Constants.WEIGHTS))
