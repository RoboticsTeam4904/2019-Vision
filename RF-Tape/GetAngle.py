import math
import cv2
import GetDistance

# Perfect width and height describe the pixel width and height when at the vertical offset and looking straight at the tape. This facilitates angle calculations.
def getTheta(box, fieldOfVision=1.229, imageWidth=640):
    # Perfect ratio is the perfect width divided by the perfect height
    top = box[0]
    left = box[1]
    bottom = box[2]
    right = box[3]
    width = float(right[0]-left[0])
    height = float(top[1]-bottom[1])
    averageX = float((left[0]+right[0])/2)
    P1 = (averageX - 320) # 
    P2 = float(imageWidth/2) #  
    try:
        theta = math.atan(P1 * math.tan(fieldOfVision/2)/P2)
    except:
        return 0
    # alpha = math.pi -beta + theta
    return theta
