import config, Constants
import Printing, WebCam, NetworkTablesInterface, CANInterface, SocketsInterface
import GetContours, PairFinding, MeasureTape, TwoCameraMeasurement


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
    if config.save: # Save raw image
        Printing.save(image)

    boxes = GetContours.getBoxes(image)

    if config.save: # Save image with objects drawn in
        Printing.save(image, drawn=True)

    left_tape, right_tape = PairFinding.selectPair(boxes)
    left_data, right_data = MeasureTape.boxToMeasurements(left_tape), MeasureTape.boxToMeasurements(right_tape)
    # TODO: Implement

    data = {}
    return data


if __name__ == "__main__":
    if config.network_tables:
        nt = NetworkTablesInterface.Table()
    if config.can:
        can = CANInterface.CAN()
    if config.sockets:
        socket = SocketsInterface.Socket(Constants.ip, Constants.port, Constants.socket_reconnect_rate)
    def send_data(data):
        if config.network_tables:
            nt.send_data(data)
        if config.can:
            can.send_data(data)
        if config.sockets:
            socket.send_data(data)

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
