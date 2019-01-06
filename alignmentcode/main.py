import cv2
import WebCam
image = WebCam.getImage()

cv2.imshow(name, image)
	key = cv2.waitKey(20)
	if key == 27:
		sys.exit()
