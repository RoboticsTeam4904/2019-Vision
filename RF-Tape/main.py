import config, Constants
import Printing, WebCam, NetworkTablesInterface, CANInterface
import ImageAnalysis, TwoCameraMeasurement, PairFinding


def twoCameras(left_image, right_image):
    if config.save: # Save raw images
        Printing.savePair(left_image, right_image)

    left_boxes = GetContours.getBoxes(left_image)
    right_boxes = GetContours.getBoxes(right_image)

    if config.save: # Save images with objects drawn in
        Printing.savePair(left_image, right_image, drawn=True)

    LCLT_box, LCRT_box = PairFinding.selectPair(left_boxes)
    RCLT_box, RCRT_box = PairFinding.selectPair(right_boxes)

    LCLT_data, LCRT_data = MeasureTape.boxToMeasurements(LCLT_box), MeasureTape.boxToMeasurements(LCRT_box)
    RCLT_data, RCRT_data = MeasureTape.boxToMeasurements(RCLT_box), MeasureTape.boxToMeasurements(RCRT_box)

    data = TwoCameraMeasurement.extrapolateData(LCLT_data, LCRT_data, RCLT_data, RCRT_data)

    return data

def oneCamera(image):
    leftTape, rightTape = ImageAnalysis.imageAnalysis(image)

    # TODO: Implement

    if config.save: # Save image with objects drawn in
        Printing.save(image, drawn=True)
    
    data = {}
    return data


if __name__ == "__main__":
    if config.network_tables:
        nt = NetworkTablesInterface.Table()
    if config.can:
        can = CANInterface.CAN()
    def send_data(data):
        if config.network_tables:
            nt.send_data(data)
        if config.can:
            CAN.send_data(data)
        if config.sockets:
            pass # TODO: Sockets

    if config.live_image:
        if config.two_cameras:
            right_camera = WebCam.Camera(Constants.RIGHT_CAMERA_PORT)
            left_camera = WebCam.Camera(Constants.LEFT_CAMERA_PORT)
        else:
            camera = WebCam.Camera(Constants.ONE_CAMERA_PORT)
        frame_num = 1
        while True:
            if config.two_cameras:
                left_image, right_image = left_camera.getImage(), right_camera.getImage()
                data = twoCameras(left_image, right_image)
            else:
                image = camera.getImage()
                data = oneCamera(image)
            data["frame_num"] = frame_num
            send_data(data)
            frame_num += 1
    else:
        if config.two_cameras:
            data = twoCameras(config.sample_left_image, config.sample_right_image, 0)
        else:
            data = oneCamera(config.sample_image, 0)
        send_data(data)
