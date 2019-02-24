import cv2
import subprocess
# import config
# import Constants

# if config.two_cameras:
#     leftCamera = cv2.VideoCapture(Constants.LEFT_CAMERA_PORT)
#     rightCamera = cv2.VideoCapture(Constants.RIGHT_CAMERA_PORT)
#     configureCamera(Constants.LEFT_CAMERA_PORT, Constants.exposure, Constants.resolution)
#     configureCamera(Constants.RIGHT_CAMERA_PORT, Constants.exposure, Constants.resolution)
# else:
#     camera = cv2.VideoCapture(Constants.ONE_CAMERA_PORT)
#     configureCamera(Constants.ONE_CAMERA_PORT, Constants.exposure, Constants.resolution)

class Camera:
    def __init__(self, port, name=None):
        self.port = port
        self.camera = cv2.VideoCapture(port)

        if name == None:
            self.name = "Camera" + str(port)
        else:
            assert type(name) == str
            self.name = name

    def getImage(self):
        image_found, image = self.camera.read()
        if not image_found:
            raise TypeError("ERROR: {} failed to read image at port {}".format(name, port))
        return image

    def configure(self, exposure=False, resolution=False, gain=False, contrast=False):
        settingStr = "/usr/bin/v4l2-ctl -d /dev/video" + str(port)
        if resolution:
            settingStr += " --set-fmt-video=width={},height={}".format(resolution[0], resolution[1])
        if exposure:
            settingStr += " -c exposure_auto=1 -c exposure_auto_priority=0 -c exposure_absolute={}".format(exposure)
        if gain:
            settingStr += " -c gain={}".format(gain)
        if contrast:
            settingStr += " -c contrast={}".format(contrast)
        subprocess.call(settingStr, shell=True)

def getImages(): # This is for two camera
    assert config.two_cameras, "config.two_cameras must be True to read from two cameras"
    leftImageFound, leftImage = leftCamera.read() # leftImageFound is if the left camera is able to read anything from the camera
    rightImageFound, rightImage = rightCamera.read() # rightImageFound is if the left camera is able to read anything from the camera
    if not leftImageFound:
        raise Exception("Image reading failed for LEFT CAMERA at port {}".format(Constants.LEFT_CAMERA_PORT))
    if not rightImageFound:
        raise Exception("Image reading failed for RIGHT CAMERA at port {}".format(Constants.RIGHT_CAMERA_PORT))
    return leftImage, rightImage # This returns what the left and right cameras are reading from the webcam

def getImage(camera):
    imageFound, image = camera.read()
    if not imageFound:
        raise Exception("Image reading failed for camera at port {}".format(camera))
    return image

def configureCamera(port): # Configures camera (for Linux only) 
    