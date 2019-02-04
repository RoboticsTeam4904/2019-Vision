import grip
import cv2
import numpy
import math
from networktables import NetworkTables
import config

def getContour(image):
	gripfunc = grip.GripPipeline()
	gripfunc.process(image)
	contours = gripfunc.filter_contours_output
	if config.display == True:
		cv2.drawContours(image, contours, -1, (0,0,0), 7)
	return contours;

def filterContour(contours):
	cnt = contours[0]
	for n in contours:
		if cv2.contourArea(n) > cv2.contourArea(cnt):
			cnt = n
	return cnt

def centroid(contour, image):
	M = cv2.moments(contour)
	# print M
	cx = int(M['m10']/M['m00'])
	cy = int(M['m01']/M['m00'])
	cv2.circle(image, (cx, cy), 15, [25,25,245], -1)
	return (cx, cy)

def rectangle(contour, image, centroid):
	rect = cv2.minAreaRect(contour)
	rectwidth = int(rect[1][1])
	rectlength = int(rect[1][0])
	angledeg = 90 - rect[2]
	if angledeg > 90:
		angledeg = angledeg - 180
	anglerad = numpy.radians(angledeg)
	if config.display == True:
		cx = centroid[0]
		cy = centroid[1]
		box = cv2.boxPoints(rect)
		box = numpy.int0(box)
		img = cv2.drawContours(image,[box],0,(25,25,245),8)
		img = cv2.line(image, (int(cx + math.cos(anglerad)*rectwidth/2), int(cy - math.sin(anglerad)*rectwidth/2)), (int(cx - math.cos(anglerad)*rectwidth/2), int(cy + math.sin(anglerad)*rectwidth/2)), (0,0,0), 8)

# shuffleboard = NetworkTables.getTable('PID')
# shuffleboard.putNumber('distance', rectwidth/2)
# shuffleboard.putNumber('angle', angledeg)