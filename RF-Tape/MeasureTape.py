from __future__ import division
import numpy as np, math, cv2
import Constants

# One Camera getDistance approach
# knownHeightMilimeters is the height of the vision tape in millimeters, which stays constant in the code
# Focal Length 3.67 mm

# TODO: Use config
distanceConstant = 96185.4
mm_to_in = 1/254
tape_height = 1 # TODO: real value

# Camera hardware specific settings
sensor_height = 1
sensor_dist = 3.67 * mm_to_in
FOV = math.radians(70)

# Camera setup settings
img_width, img_height = Constants.resolution
# Gamma is the vertical rotaion of the camera (in radians). upwards-facing = positive gamma
gamma = 0



# TODO: compute for length, not just height
# h_pxl is the pixel height of the object (in pixels)
# h_real is the real height of the object (in inches)
# gamma is the vertical rotation of the camera (in radians)
def forwardDist(h_pxl, h_real=tape_height): # distance along camera axis in inches
    assert h_pxl != 0, "Height of object in image is 0" # breaks the loop if triggered
    h_projected = h_real * math.cos(gamma)      # height of object projected on a plane parallel to the camera
    img_portion = h_pxl / img_height            # height as a fraction of the total image height
    h_sensor = img_portion * sensor_height      # height of the object on the physical camera sensor array
    dist = sensor_dist * h_projected / h_sensor # By the magnification law of lenses
    return dist

# forward_dist is distance projected along camera axis
# theta is horizontal angle between camera axis and tape
def realDist(forward_dist, theta): # return direct distance to tape
    real_dist = forward_dist / math.cos(theta) # distance to tape is distance along camera axis over cos of angle to tape
    return real_dist

def getTheta(x_pxl):
    assert 0 < x_pxl < img_width
    half_img_portion = (x_pxl - img_width/2) / (img_width/2)
    theta = math.atan(half_img_portion * math.tan(FOV/2))
    return theta

def boxToMeasurements(box):
    if box == None:
        return None
    center_x = (box[1][0] + box[3][0])/2
    theta = getTheta(center_x)

    height = box[0][1] - box[2][1]
    forward_dist = forwardDist(height)
    real_dist = realDist(forward_dist, theta)

    return {"forward_dist": forward_dist, "real_dist": real_dist, "theta": theta}