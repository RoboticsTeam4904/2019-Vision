import WebCam
import GetContours
import cv2
import numpy as np
import ScoringMetric
import config
import sys

def calibrate(minExposure, maxExposure, WEIGHTS):
	boxes = []
	maxScore = 0
	maxScoreExposure = 0
	for exposure in range(minExposure, maxExposure):
		WebCam.set(exposure=exposure)
		img = WebCam.getImage()
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
		scores = sorted([ScoringMetric.score(boxes[i], contours[i], img, WEIGHTS)[1] for i in range(0,len(contours))])
		try:
			final_score = scores[0]+scores[1]-sum(scores[2:])
		except:
			final_score = -float("inf")
		
		if(final_score > maxScore):
			maxScore = final_score
			max_score_exposure = exposure
		
	if maxScoreExposure != 0:
		WebCam.set(exposure=maxScoreExposure)
	else:
		if config.LiveImage:
			WebCam.set(exposure=sys.argv[1])
		return "Exposure tuning failed - No contours found!"
	return "Exposure: " + str(maxScoreExposure)


