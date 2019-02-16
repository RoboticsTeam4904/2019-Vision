import rungrip
import cv2
import config
import images
from networktables import NetworkTables
import WebCam

def process(image):
	if config.display:
		cv2.imshow('unprocessed', image)
	contours = rungrip.getContours(image)
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
				cv2.waitKey(10)
		return rectAngle
	else:
		return (0, 0)

if config.test:
	image = images.images[0]
	img = cv2.imread(image)
	process(img)
else:
	shuffleboard = NetworkTables.getTable('PID')
	while True:
		img = WebCam.getImage()
		randomvariablebecausecaseywantsit = process(img)
		distance = randomvariablebecausecaseywantsit[0]
		angle = randomvariablebecausecaseywantsit[1]
		print "Angle:" , angle
		shuffleboard.putNumber('distance', distance)
		shuffleboard.putNumber('angle', angle)