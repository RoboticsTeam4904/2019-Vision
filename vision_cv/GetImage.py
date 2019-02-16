import Printing
import WebCam
n = 0  # Counter variable


def s():  # Take a picture from the webcam and save.
    global n
    image = WebCam.getImages()
    n += 1
    Printing.save(image[0], "THISISLEOTEST.jpg")
    print(image[0])


def e(portRead=0, expo=0.1):  # Set exposure on LINUX ONLY.
    WebCam.set(port=portRead, exposure=expo)
