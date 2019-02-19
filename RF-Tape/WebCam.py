import cv2
import subprocess
import numpy as np
from PIL import Image
import config
import Constants
import GetImage
import enum

leftCamera = cv2.VideoCapture(Constants.LEFT_CAMERA_PORT)
rightCamera = cv2.VideoCapture(Constants.RIGHT_CAMERA_PORT)

def getImages():
    leftImageFound, leftImage = leftCamera.read()
    rightImageFound, rightImage = rightCamera.read()
    if(not leftImageFound):
        raise Exception("Image reading failed for LEFT CAMERA {}".format(leftCamera))
    if(not rightImageFound):
        raise Exception("Image reading failed for RIGHT CAMERA {}".format(rightCamera))
    return leftImage, rightImage # This returns what the left and right cameras are reading from the webcam
    
def getImage(camera=0):
    retval, image = camera.read()
    if(not retval):
        raise Exception("Image reading failed for camera {}".format(camera))
    return image

# This function sets the exposure. LINUX ONLY
def set(port=0, resolution=False, exposure=False, gain=False, contrast=False):
    settingStr = "/usr/bin/v4l2-ctl -d /dev/video" + str(port)
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
