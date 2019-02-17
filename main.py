import rungrip
import cv2
import config
import images
from networktables import NetworkTables
import WebCam
import sys

def process(image):
	if config.display:
		cv2.imshow('unprocessed', image)
	contours = rungrip.getContours(image)
	rectAngle = -1000
	if len(contours) >= 1:
		contour = rungrip.filterContours(image, contours)
		centroid = rungrip.centroid(contour, image)
		rectAngle = rungrip.rectangle(contour, image, centroid)
		if config.display:
			if config.test:
				cv2.imshow('processed', image)
				cv2.waitKey(0)
				cv2.destroyAllWindows()
			else:
				cv2.imshow('processed', image)
				cv2.waitKey(1)
				cv2.destroyAllWindows()
	return rectAngle

if config.test:
	image = images.images[0]
	img = cv2.imread(image)
	process(img)
else:
	shuffleboard = NetworkTables.getTable('PID')
	while True:
		img = WebCam.getImage()
		angle = process(img)
		if angle == -1000:
			shuffleboard.putNumber('isThereTape?', 0)
			sys.stdout.write("Tape not visible.")
			shuffleboard.putNumber('angle', 0)
		else:
			shuffleboard.putNumber('isThereTape?', 1)
			sys.stdout.write("Angle:" + str(angle))
			shuffleboard.putNumber('angle', angle)