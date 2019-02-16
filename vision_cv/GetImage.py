import WebCam
import Printing
import GripRunner
import ContourFinding
import SpikeFinding
import autocalibrate
n = 0  # Counter variable


def s():  # Take a picture from the webcam and save.
    global n
    image = WebCam.getImage()
    Printing.save(image, name="TEST" + str(n))
    n += 1
    print(image)


def e(exposure):  # Set exposure on LINUX ONLY.
    WebCam.set(exposure=0.1)
