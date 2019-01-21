import cv2
import subprocess
import numpy as np
from PIL import Image
camera = cv2.VideoCapture(0)

def getImage():
	retval, image = camera.read()
	#image = cv2.imread("~/Downloads/TestImages/TEST1.jpg")
	'''file_obj = Image.open("/Users/yasnara/Downloads/TestImages/TEST93.jpg")
	data = []
	for x in range(0,640):
		a_ = []
		for y in range(0,480):
			a_.append(file_obj.getpixel((x, y)))
		data.append(a_)
	image = np.array(data)
	print(image.shape)'''

	if(not retval):
		raise Exception("Image reading failed.")
	#normalized_image = np.zeros((720,1280,3))
	#print(image.shape, normalized_image.shape)
	##normalized_image = cv2.normalize(image, None, alpha=0, beta=255, norm_type=cv2.NORM_MINMAX, dtype=cv2.CV_8UC3)
	##print(np.sum(image == normalized_image))
	#normalized_image = np.ones((640,480))
#	cv2.normalize(image, normalized_image, 0, 255, cv2.NORM_MINMAX)
	##print(normalized_image)
	##disp = Image.fromarray(normalized_image, 'RGB')
	##disp.show()
	##cv2.imwrite("~/Downloads/WC2.jpg", normalized_image)
	#return normalized_image
	return image
	

def set(resolution=False, exposure=False, gain=False, contrast=False):
	settingStr = "/usr/bin/v4l2-ctl -d /dev/video0"
	if resolution:
		settingStr += " --set-fmt-video=width={},height={}".format(resolution[0], resolution[1])
	if exposure:
		settingStr += " -c exposure_auto=1 -c exposure_auto_priority=0 -c exposure_absolute={}".format(exposure)
	if gain:
		settingStr += " -c gain={}".format(gain)
	if contrast:
		settingStr += " -c contrast={}".format(contrast)
	subprocess.call(settingStr, shell=True)

def getExposure():
	return int(subprocess.check_output("/usr/bin/v4l2-ctl -d /dev/video0 -C exposure_absolute", shell=True)[19:].strip())

def getResolution():
	resolution = getImage().shape
	return resolution[1], resolution[0]
