import config, Constants, ImageAnalysis, Printing

if config.live_image:
    import WebCam
if config.network_tables:
    import NetworkTablesInterface
    nt = NetworkTablesInterface.Table()
if config.can:
    import CANInterface
if config.two_cameras:
    import TwoCameraMeasurement


def twoCameras(left_image, right_image, data):
    if config.save: # Save raw images
        Printing.savePair(left_image, right_image)

    leftCamLeftTape, leftCamRightTape = ImageAnalysis.imageAnalysis(left_image) # leftMesaurements is a tuple of isVisible, left camera distance, left camera theta
    rightCamLeftTape, rightCamRightTape = ImageAnalysis.imageAnalysis(right_image) # rightMesaurements is a tuple of isVisible boolean, right camera distance, right camera theta

    data = TwoCameraMeasurement.extrapolateData(data)

    if config.network_tables:
        NetworkTablesInterface.send_data(data)

    if config.save: # Save images with objects drawn in
        Printing.savePair(left_image, right_image, drawn=True)

    return data

def oneCamera(image, data):
    leftTape, rightTape = ImageAnalysis.imageAnalysis(image)

    # TODO: Implement

    if config.save: # Save image with objects drawn in
        Printing.save(image, drawn=True)
    
    return data

def send_data(data):
    if config.network_tables:
        nt.send_data(data)
    if config.can:
        CANInterface.send_data(data)
    if config.sockets:
        pass # TODO: Sockets

if __name__ == "__main__":
    if config.live_image:
        if config.two_cameras:
            right_camera = WebCam.Camera(Constants.RIGHT_CAMERA_PORT)
            left_camera = WebCam.Camera(Constants.LEFT_CAMERA_PORT)
        else:
            camera = WebCam.Camera(Constants.ONE_CAMERA_PORT)
        frame_num = 1
        while True:
            data = {"frame_num": frame_num}
            if config.two_cameras:
                left_image, right_image = left_camera.getImage(), right_camera.getImage()
                data = twoCameras(left_image, right_image, data)
            else:
                image = camera.getImage()
                data = oneCamera(image, data)
            send_data(data)
            frame_num += 1
    else:
        if config.two_cameras:
            data = twoCameras(config.sample_left_image, config.sample_right_image, 0)
        else:
            data = oneCamera(config.sample_image, 0)
        send_data(data)
