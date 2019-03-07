import WebCam, Printing, config, Constants

if config.two_cameras:
    left_camera = WebCam.Camera(Constants.LEFT_CAMERA_PORT)
    right_camera = WebCam.Camera(Constants.RIGHT_CAMERA_PORT)

    left_camera.configure(exposure=Constants.exposure, resolution=Constants.resolution)
    right_camera.configure(exposure=Constants.exposure, resolution=Constants.resolution)

    def s():  # Take a picture from both webcams and save.
        left_image, right_image = left_camera.getImage(), right_camera.getImage()
        Printing.save_pair(left_image, right_image, "test")

    def d(): # Display images
        left_image, right_image = left_camera.getImage(), right_camera.getImage()
        Printing.display(Printing.combine(left_image, right_image), "raw")
        Printing.display(right_image, "right")

    def e(exposure=Constants.exposure): # Set exposure on LINUX ONLY.
        left_camera.configure(exposure=exposure)
        right_camera.configure(exposure=exposure)
else:
    camera = WebCam.Camera(Constants.ONE_CAMERA_PORT)
    camera.configure(Constants.exposure, Constants.resolution)

