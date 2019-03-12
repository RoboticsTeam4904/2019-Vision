import subprocess, cv2

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
            raise TypeError("ERROR: {} failed to read image at port {}".format(self.name, self.port))
        return image

    # Configures camera settings (for Linux only)
    def configure(self, exposure=False, resolution=False, gain=False, contrast=False):
        settingStr = "/usr/bin/v4l2-ctl -d /dev/video" + str(self.port)
        if resolution:
            settingStr += " --set-fmt-video=width={},height={}".format(resolution[0], resolution[1])
        if exposure:
            settingStr += " -c exposure_auto=1 -c exposure_auto_priority=0 -c exposure_absolute={}".format(exposure)
        if gain:
            settingStr += " -c gain={}".format(gain)
        if contrast:
            settingStr += " -c contrast={}".format(contrast)
        subprocess.call(settingStr, shell=True)