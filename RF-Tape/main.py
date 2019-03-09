import config, Constants, ImageAnalysis, GetAngle, Printing

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

    
    beta = GetAngle.getBeta(leftCamLeftTape, leftCamRightTape, rightCamLeftTape, rightCamRightTape)
    if beta != None:
        data["beta"] = beta

    finalTheta, finalDistance = TwoCameraMeasurement.finalDistanceTheta(leftCamLeftTape[2], 
            rightCamRightTape[2], leftCamLeftTape[1], rightCamRightTape[1])

    if leftCamLeftTape and rightCamRightTape:
        # Gets theta and distance measured from center of the robot to center of the tape
        finalTheta, finalDistance = TwoCameraMeasurement.finalDistanceTheta(leftCamLeftTape[2], 
                rightCamRightTape[2], leftCamLeftTape[1], rightCamRightTape[1])
        data["theta"] = finalTheta
        data["dist"] = finalDistance

        if debug:
            print("FINAL THETA (IN DEGREES): " +  str(finalTheta/math.pi * 180))
            print("FINAL DISTANCE: " + str(finalDistance))

        x, y = TwoCameraMeasurement.getXandY(finalTheta, finalDistance, beta) # returns x and y coordinate from center of tape to center of robot
        
        print("X COORDINATE", x)
        print("Y COORDINATE", y)
    else:
        x, y = 0, 0
        print("CAN'T PASS IN BETA OR FINAL DISTANCE AND THETA")
    # finalTheta finalDistance is the final theta and distance from the center of the robot to the center of the tape.

    if config.network_tables:
        NetworkTablesInterface.send_data()
    print("FINAL THETA: " +  str(finalTheta))
    print("FINAL DISTANCE: " + str(finalDistance))

    if config.save: # Save images with objects drawn in
        Printing.savePair(left_image, right_image, drawn=True)

    data = (x, y, finalTheta, beta, finalDistance, frame_num)
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
