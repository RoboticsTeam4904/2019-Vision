import cv2
import subprocess
import numpy as np
from PIL import Image
import config
cameras = []
for PORT in config.CAMERA_PORTS:
    cameras.append(cv2.VideoCapture(config.CAMERA_PORT))


def getImages():
    images = []
    for camera in cameras:
        retval, image = camera.read()
        if(not retval):
            raise Exception("Image reading failed for one camera")
		images.append(image)

    return images


# This function sets the exposure. LINUX ONLY
def set(resolution=False, exposure=False, gain=False, contrast=False, ):
    settingStr = "/usr/bin/v4l2-ctl -d /dev/video0"
    if resolution:
        settingStr += " --set-fmt-video=width={},height={}".format(
            resolution[0], resolution[1])
    if exposure:
        settingStr += " -c exposure_auto=1 -c exposure_auto_priority=0 -c exposure_absolute={}".format(
            exposure)
    if gain:
        settingStr += " -c gain={}".format(gain)
    if contrast:
        settingStr += " -c contrast={}".format(contrast)
    subprocess.call(settingStr, shell=True)


def getExposure():  # LINUX ONLY
    return int(subprocess.check_output("/usr/bin/v4l2-ctl -d /dev/video0 -C exposure_absolute", shell=True)[19:].strip())


def getResolution():
    resolution = getImage().shape
    return resolution[1], resolution[0]
