import rungrip
import cv2

img = cv2.imread('Images/IMG_0617.jpg')
cv2.imshow('unprocessed', img)

contours = rungrip.getContour(img)
contour = rungrip.filterContour(contours)
centroid = rungrip.centroid(contour, img)
rect = rungrip.rectangle(contour, img, centroid)

cv2.imshow('processed', img)
cv2.waitKey(0)
cv2.destroyAllWindows()