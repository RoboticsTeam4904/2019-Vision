import math
import cv2
import numpy as np

def dist2d(point1, point2):
    return math.sqrt(abs(point2[0]-point1[0])**2 + abs(point2[1]-point1[1])**2) # Euclidean distance over x, y

def score(box, contour, image, weights):
    total_score = 0
    box = sorted(box, key=lambda x: x[1])[::-1] #Sorts box from top to bottom scores
    top = box[0]
    bottom = box[-1]
    box = sorted(box, key=lambda x: x[0])
    left = box[0]
    right = box[-1]

    points = (top, right, bottom, left)
    if len(np.unique(np.array(points))) < 4:
        return -float("inf")

    dimension = (dist2d(top, left), dist2d(top, right)) #Height, width tuple
    total_score += score_side_ratio(dimension) * weights["ratio"]
    total_score += score_area_ratio(dimension, points) * weights["area"]
    total_score += scoring_rotation_angle(right, bottom, weights["rotation_angle_infunc"]) * weights["rotation_angle_outfunc"]
    # total_score += scoring_parallelogram(points, weight_rect_infunc) * weight_rectangle_outfunc #Unnecessary for now
    total_score += filled_value(contour, box, image) * weights["contour_area_values"]
    return points, total_score

def score_side_ratio(dimension):
    #Side ratio measures ratio of height to width, which is 5.5 (h) / 2 (w) = 2.75
    h, w = dimension
    target_ratio = 2.75
    # 5.5 / 2 = 2.75
    return 1/(((h/w)-target_ratio)**2 + 1) # Witch of Agnesi curve.

def score_area_ratio(dimension, points):
    #Todo: put comment for what this metric does 
    t, r, b, l = points
    h, w = dimension
    target_ratio = 0.5698
    area_slanted = h * w
    area_straight = abs(t[1]-b[1]) * abs(r[1]-l[1])
    ratio_score = (1/(abs((area_slanted/(area_straight+0.0001))-target_ratio)**2 + 1)) # Must prevent x/0 error.
    return ratio_score

def scoring_rotation_angle(right, bottom, weight):
    # scoring_rotation_angle measures whether two angles in a contour are 14.5 degrees
    # If they are then it is a parallelogram
    angle = slope(right, bottom)
    angle = angle/math.pi*180
    num = min(((75.5)-angle)**2, (104.5-angle)**2) # constants are 90-14.5, 90+14.5, respectively
    return -num/(num+weight)+1

def findInsideAngle(first, main, third):
    # findInsideAngle is a function which helps us find the inside angles of a contour 
    try:
        angle1 = slope(main, first)
    except ZeroDivisionError:
        return None
    try:
        angle2 = slope(main, third)
    except ZeroDivisionError:
        return None
    return abs(angle2-angle1)

def slope(point1, point2):
    # Slope of two points in a contour 
    point1 = [float(elem) for elem in point1]
    point2 = [float(elem) for elem in point2]
    m = (point2[1]-point1[1])/(point2[0]-point1[0]+0.0001)
    return math.atan(m)

def filled_value(contour, box, image): # Debug later
    #dim_x, dim_y = image.shape[1], image.shape[0]
    z_img = np.zeros_like(image)
    box[3], box[2] = box[2], box[3]
    box = box[::-1]
    box = np.array(box)

    cv2.drawContours(z_img, [box], 0, color=128, thickness=-1)
    cv2.drawContours(z_img, [contour], 0, color=255, thickness=-1)
    
    box_total = len(np.where(z_img == 128))
    contour_total = len(np.where(z_img == 255))
    
    '''
    print "FV:", contour_total/(contour_total+box_total)
    print contour_total
    print box_total
    cv2.imshow("test", z_img)
    key = cv2.waitKey(0)
    if key == 27:
        #sys.exit()
        pass
    '''
    
    return float(contour_total)/float((contour_total+box_total))

