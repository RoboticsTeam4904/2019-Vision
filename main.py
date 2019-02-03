import rungrip
import cv2
import config

def processAndShow(image):
	cv2.imshow('unprocessed', img)
	contours = rungrip.getContour(img)
	contour = rungrip.filterContour(contours)
	centroid = rungrip.centroid(contour, img)
	rect = rungrip.rectangle(contour, img, centroid)
	cv2.imshow('processed', img)
	cv2.waitKey(0)
	cv2.destroyAllWindows()

if config.test == True:
	image = 'Images/IMG_0617.jpg'
	img = cv2.imread(image)
	processAndShow(img)

else:
	while True:
		image = videofeedback
		img = cv2.imread(image)
		processAndShow(img)