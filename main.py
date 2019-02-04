import rungrip
import cv2
import config
import images

def processAndShow(image):
	cv2.imshow('unprocessed', image)
	contours = rungrip.getContour(image)
	contour = rungrip.filterContour(contours)
	centroid = rungrip.centroid(contour, image)
	rect = rungrip.rectangle(contour, image, centroid)
	cv2.imshow('processed', image)
	cv2.waitKey(0)
	cv2.destroyAllWindows()

if config.test == True:
	image = images.closeImage1
	img = cv2.imread(image)
	processAndShow(img)
else:
	while True:
		image = videofeedback
		img = cv2.imread(image)
		processAndShow(img)