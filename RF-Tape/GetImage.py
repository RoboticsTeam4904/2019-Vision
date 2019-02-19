import WebCam, Printing

def s():  # Take a picture from the webcam and save.
    left_image, right_image = WebCam.getImages()
    Printing.save_pair(right_image, "test")

def e(port=0, exposure=0.1): # Set exposure on LINUX ONLY.
    WebCam.set(port=port, exposure=exposure)

def d(): # Display images
    left_image, right_image = WebCam.getImages()
    Printing.display(left_image, "left")
    Printing.display(left_image, "right")