import math
import cv2
import numpy as np
import Constants


def dist2d(p1, p2):
    return math.sqrt(abs(p2[0]-p1[0])**2 + abs(p2[1]-p1[1])**2)

def getBoxesAndScores(contours):
	box_scores = []
	boxes = []
	for contour in contours:
		rect = cv2.minAreaRect(contour)
		if Constants.using_cv3:
			box = cv2.boxPoints(rect)
		else:
			box = cv2.cv.BoxPoints(rect)
		box = np.int0(box)
		points, contour_score = score(box, contour, Constants.WEIGHTS)
		boxes.append(points) # Array with all of the boxes with the format (t, r, b, l) for pair finding 
		box_scores.append(contour_score)
	return boxes, box_scores

def score(box, contour, weights):
    total_score = 0
    # Sorts box from top to bottom scores
    box = sorted(box, key=lambda x: x[1])[::-1]
    top = box[0]
    bottom = box[-1]
    box = sorted(box, key=lambda x: x[0])[::-1]
    left = box[0]
    right = box[-1]

    points = (top, right, bottom, left)
    if len(np.unique(np.array(points))) < 4:
        return points, -float("inf")

    dimension = (dist2d(top, left), dist2d(top, right))  # Height, width tuple
    total_score += score_side_ratio(dimension) * weights["hw_ratio"]
    total_score += score_area_ratio(dimension, points) * weights["area"]
    total_score += scoring_rotation_angle(
        right, bottom, weights["rotation_angle_infunc"]) * weights["rotation_angle_outfunc"]
    total_score += filled_value(contour, box) * \
        weights["contour_area_values"]
    return points, total_score


def score_side_ratio(dimension):
    # Side ratio measures ratio of height to width, which is 5.5 (h) / 2 (w) = 2.75
    h, w = dimension
    if w == 0 or h == 0:
        return 0
    target_ratio = 2.75
    try:
        # Witch of Agnesi curve.
        return max((1/(((h/w)-target_ratio)**2 + 1)), (1/(((w/h)-target_ratio)**2 + 1)))
    except:
        return 0


def score_area_ratio(dimension, points):
    # This metric finds the area of the bounding box (parallel to y axis) and finds its ratio to the area of the slanted box.
    t, r, b, l = points
    h, w = dimension
    target_ratio = 0.5698
    area_slanted = h*w
    area_straight = abs(t[1]-b[1])*abs(r[1]-l[1])
    score_area_ratio = (
        1/(abs((area_slanted/(area_straight+0.0001))-target_ratio)**2 + 1))
    return score_area_ratio


def scoring_rotation_angle(right, bottom, weight):
    angle = slope(right, bottom)
    angle = angle/math.pi*180
    num = min(((14.5)-angle)**2, ((90-14.5)-angle)**2)
    return -num/(num+weight)+1


def findInsideAngle(first, main, third):
    # As the name suggests, findInsideAngle is a function which helps us find the inside angles of a contour
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


def filled_value(contour, box):
    # This is to remove the RGB axis

    z_img = np.zeros(shape=Constants.resolution)
    box[3], box[2] = box[2], box[3]
    box = box[::-1]
    box = np.array(box)
    max_y = max(contour, key=lambda x: x[0][1])[0][1]
    min_y = min(contour, key=lambda x: x[0][1])[0][1]
    max_x = max(contour, key=lambda x: x[0][0])[0][0]
    min_x = min(contour, key=lambda x: x[0][0])[0][0]
    cv2.drawContours(z_img, [box], 0, color=128, thickness=-1)
    cv2.drawContours(z_img, [contour], 0, color=255, thickness=-1)
    z_img = z_img[min_y:max_y, min_x:max_x]
    box_total = len(np.where(z_img == 128)[0])
    contour_total = len(np.where(z_img == 255)[0])

    return float(contour_total)/float(contour_total+box_total+.0001)
