import grip
import cv2
import numpy
import math
import config

def getContours(image):
	gripfunc = grip.GripPipeline()
	gripfunc.process(image)
	contours = gripfunc.filter_contours_output
	return contours;

def filterContours(image, contours):
	cnt = contours[0]
	for n in contours:
		if cv2.contourArea(n) >= cv2.contourArea(cnt):
			cnt = n
	if config.display:
		cv2.drawContours(image, cnt, -1, (0,0,0), 7)
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
	if rectlength > rectwidth:
		angledeg = angledeg + 90
	anglerad = numpy.radians(angledeg)
	if config.display:
		cx = centroid[0]
		cy = centroid[1]
		box = cv2.boxPoints(rect)
		box = numpy.int0(box)
		img = cv2.drawContours(image,[box],0,(25,25,245),8)
		if rectwidth > rectlength:
			img = cv2.line(image, (int(cx + math.cos(anglerad)*rectwidth/2), int(cy - math.sin(anglerad)*rectwidth/2)), (int(cx - math.cos(anglerad)*rectwidth/2), int(cy + math.sin(anglerad)*rectwidth/2)), (0,0,0), 8)
		else:
			img = cv2.line(image, (int(cx + math.cos(anglerad)*rectlength/2), int(cy - math.sin(anglerad)*rectlength/2)), (int(cx - math.cos(anglerad)*rectlength/2), int(cy + math.sin(anglerad)*rectlength/2)), (0,0,0), 8)
	return rectwidth/2, angledeg