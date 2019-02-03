import grip
import cv2
import numpy
import math
from networktables import NetworkTables
import config

#image = 'Images/IMG_0006.jpg'
#image = 'Images/IMG_0617.jpg' #long
#image = 'Images/IMG_0694.jpg' #close
#image = 'Images/IMG_0771.jpg' #close
#image = 'Images/IMG_1794.jpg'
#image = 'Images/IMG_2015.jpg' #close
#image = 'Images/IMG_2065.jpg'
#image = 'Images/IMG_2278.jpg' #long
#image = 'Images/IMG_2581.jpg' #close
#image = 'Images/IMG_3246.jpg' #long
#image = 'Images/IMG_3417.jpg'
#image = 'Images/IMG_3458.jpg' #close
#image = 'Images/IMG_5222.jpg'
#image = 'Images/IMG_6140.jpg'
#image = 'Images/IMG_6289.jpg'
#image = 'Images/IMG_7133.jpg'
#image = 'Images/IMG_8539.jpg'
#image = 'Images/IMG_8968.jpg'
#image = 'Images/IMG_9615.jpg'
#image = 'Images/IMG_9801.jpg'
#image = 'Images/IMG_9850.jpg'
# img = cv2.imread(image)
# cv2.imshow('unprocessed', img)

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

# rows,cols = img.shape[:2]
# [vx,vy,x,y] = cv2.fitLine(cnt, cv2.DIST_L2,0,0.01,0.01)
# lefty = int((-x*vy/vx) + y)
# righty = int(((cols-x)*vy/vx)+y)
# img = cv2.line(img,(cols-1,righty),(0,lefty),(0,0,0),8)
# slope = -vy/vx
# print "Slope:" , slope[0]
# anglerad = -numpy.arctan2(vy, vx)
# angledeg = numpy.degrees(anglerad)
# print "Angle:" , angledeg[0]

# print "Width:" , rectwidth
# print "Length:" , rectlength

# deltay = (cy + math.sin(anglerad)*rectwidth/2) - (cy - math.sin(anglerad)*rectwidth/2)
# deltax = (cx - math.cos(anglerad)*rectwidth/2) - (cx + math.cos(anglerad)*rectwidth/2)
# if deltax == 0:
# 	slope = "Infinity"
# else:
# 	slope = -deltay/deltax
# print "Slope:" , slope
# print "Angle:" , angledeg

# shuffleboard = NetworkTables.getTable('PID')

# shuffleboard.putNumber('distance', rectwidth/2)
# shuffleboard.putNumber('angle', angledeg)

# area = cv2.contourArea(cnt)
# perimeter = cv2.arcLength(cnt, True)
# length = (perimeter/2 + math.sqrt(perimeter*perimeter/4-4*area))/2
# width = area/length
# print "Area:" , int(area)
# print "Perimeter:" , int(perimeter)
# print "Length:" , int(length)
# print "Width:" , int(width)

# epsilon = perimeter*0.01
# approx = cv2.approxPolyDP(cnt, epsilon, True)
# cv2.drawContours(img, [approx], -1, (25,25,245), 5)

# cv2.circle(img, (x[0], y[0]), 15, [50, 50, 50], -1)
# cv2.circle(img, (int(cx + math.cos(anglerad)*length/2), int(cy - math.sin(anglerad)*length/2)), 15, [38,255,54], -1)
# cv2.circle(img, (int(cx - math.cos(anglerad)*length/2), int(cy + math.sin(anglerad)*length/2)), 15, [38,255,54], -1)

# cv2.imshow('processed', img)
# cv2.waitKey(0)
# cv2.destroyAllWindows()