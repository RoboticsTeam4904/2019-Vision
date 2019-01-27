import math
import cv2
import numpy as np
def dist2d(p1, p2):
    return math.sqrt(abs(p2[0]-p1[0])**2 + abs(p2[1]-p1[1])**2)

def score(bb, weight_contour_area_values, weight_ratio, weight_area, weight_parallelogram_infunc, 
weight_parallelogram_outfunc, weight_rotation_angle_infunc, weight_rotation_angle_outfunc, orig_contours, image):
    
    # weight_rect_infunc = 1 #Unnecessary for now
    # weight_rect_outfunc = 1 #Unnecessary for now
    total_score = 0 

    
    bb = sorted(bb, key=lambda x: x[1])[::-1] #Sorts bb from top to bottom scores 
    top = bb[0]
    bottom = bb[-1]
    bb = sorted(bb, key=lambda x: x[0])
    left = bb[0]
    right = bb[-1]

    points = (top, right, bottom, left)
    if(len(set([tuple(top), tuple(bottom), tuple(left), tuple(right)])) < 4):
        return -float("inf")

    dimension = (dist2d(top, left), dist2d(top, right)) #Height, width tuple
    total_score += score_side_ratio(dimension) * weight_ratio
    total_score += score_area_ratio(dimension, points) * weight_area
    total_score += scoring_parallelogram(points, weight_parallelogram_infunc) * weight_parallelogram_outfunc
    total_score += scoring_rotation_angle(right, bottom, weight_rotation_angle_infunc) * weight_rotation_angle_outfunc
    # total_score += scoring_parallelogram(points, weight_rect_infunc) * weight_rectangle_outfunc #Unnecessary for now
    total_score += contour_area_values(orig_contours, image) * weight_contour_area_values
    return total_score

def score_side_ratio(dimension):
    #Side ratio measures ratio of height to width, which is 5.5 (h) / 2 (w) = 2.75
    h,w = dimension
    target_ratio = 2.75
    # 5.5 / 2 = 2.75
    return max((1/(((h/w)-target_ratio)**2 + 1)),(1/(((w/h)-target_ratio)**2 + 1))) # Witch of Agnesi curve.

def score_area_ratio(dimension, points):
    #Todo: put comment for what this metric does 
    t,r,b,l = points
    h,w = dimension
    target_ratio = 0.5698
    area_slanted = h*w
    area_straight = abs(t[1]-b[1])*abs(r[1]-l[1])
    score_area_ratio = (1/(abs((area_slanted/(area_straight+0.0001))-target_ratio)**2 + 1))
    return score_area_ratio

def scoring_rectangle(points, weight):
    #scoring_rectangles measures how rectanglish a contour is 
    angles = []
    for i in range(-2,len(points)-2):
        angles.append(findInsideAngle(points[i], points[i+1], points[i+2]))
    if None in angles:
        return False
    angles = [elem/math.pi * 180 for elem in angles]
    angles = [(90-elem)**2 for elem in angles] #Squared error of angles
    num = sum(angles)
    return -num/(num+weight) +1

def scoring_parallelogram(points, weight):
    #scoring_parallelogram measures how parallelogramish a contour is 
    angles = []
    for i in range(-2,len(points)-2): #Negative indices index from the back of the list
        angles.append(findInsideAngle(points[i], points[i+1], points[i+2]))
    if None in angles:
        return False
    angles = [elem/math.pi * 180 for elem in angles]
    sumTotal = 0
    for i in range(2):
        sumTotal += (angles[i+2]-angles[i])**2
    return -sumTotal/(sumTotal+weight) +1

def scoring_rotation_angle(right, bottom, weight):
    #scoring_rotation_angle measures whether two angles in a contour are 14.5 degrees
    # If they are then it is a parallelogram
    angle = slope(right, bottom)
    angle = angle/math.pi*180
    num = min(((90-14.5)-angle)**2, (14.5+90-angle)**2)
    return -num/(num+weight)+1

def findInsideAngle(first, main, third):
    #As the name suggests, findInsideAngle is a function which helps us find the inside angles of a contour 
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
    #Slope of two points in a contour 
    point1 = [float(elem) for elem in point1]
    point2 = [float(elem) for elem in point2]
    m = (point2[1]-point1[1])/(point2[0]-point1[0]+0.0001)
    return math.atan(m)

def contour_area_values(contour, image): #Todo: Fix tuning # Replace with bounding quadrilateral
    return 0
    RED_WEIGHT = 0.0
    GREEN_WEIGHT = 1.0
    BLUE_WEIGHT = 0.0
    # Find four corners of bounding box, and take top left and bottom right points.
    # Get average pixel values and divide by 255.
    return np.average(image) #average rgb threshold of each pixel from the image 