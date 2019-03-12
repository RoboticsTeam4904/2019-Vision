import WebCam, Printing, ImageAnalysis, Constants, sys, config

save_str = "test"

if config.two_cameras:
    left_camera = WebCam.Camera(Constants.LEFT_CAMERA_PORT)
    right_camera = WebCam.Camera(Constants.RIGHT_CAMERA_PORT)

    left_camera.configure(exposure=Constants.exposure, resolution=Constants.resolution)
    right_camera.configure(exposure=Constants.exposure, resolution=Constants.resolution)

    def s():  # Take a picture from both webcams and save.
        left_image, right_image = left_camera.getImage(), right_camera.getImage()
        Printing.save_pair(left_image, right_image, save_str)

    def d(): # Display images
        left_image, right_image = left_camera.getImage(), right_camera.getImage()
        Printing.display(Printing.combine(left_image, right_image), "raw")

    def dp(): # Display processed images
        left_image, right_image = left_camera.getImage(), right_camera.getImage()
        PairFinding.pairFinding(GetContours.getBoxes(left_image))
        PairFinding.pairFinding(GetContours.getBoxes(right_image))
        Printing.display(Printing.combine(left_image, right_image), "processed")

    def e(exposure=Constants.exposure): # Set exposure on LINUX ONLY.
        left_camera.configure(exposure=exposure)
        right_camera.configure(exposure=exposure)
else:
    camera = WebCam.Camera(Constants.ONE_CAMERA_PORT)
    camera.configure(exposure=Constants.exposure, resolution=Constants.resolution)

    def s():  # Take a picture from both webcams and save.
        image = camera.getImage()
        Printing.save(image, save_str)

    def d(): # Display image
        image = camera.getImage()
        Printing.display(image, "raw")

    def dp(): # Display processed image
        image = camera.getImage()
        PairFinding.pairFinding(GetContours.getBoxes(image))
        Printing.display(image, "processed")

    def e(exposure=Constants.exposure): # Set exposure on LINUX ONLY.
        camera.configure(exposure=exposure)

def r():
    while True:
        d()

def rp():
    while True:
        dp()