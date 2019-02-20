from ScoringMetric import findInsideAngle
import ScoringMetric
import math
import numpy as np
import cv2

ANGLE_THRESHOLD = 0.3  # delta radians
DISTANCE_THRESHOLD = float("inf")

# What we want to do:
# Take the largest tape and check if it has a pair, then return if it does or
# do not return/return that it only has one if it doesn't. We do not want to
# return a pair if the distance if it is not relevant.

# tape_list: a list of slanted bounding boxes


def checkLargestTape(box_list):
    max_height = -float("inf")
    for box in box_list:
        top = box[0]
        bottom = box[2]
        height = top[1]-bottom[1]
        if height > max_height:
            max_height = height
            max_box = box
          # Top point in the box array of four points
    if max_box[1][1] > max_box[3][1]:
        slope_point = max_box[1]
    else:
        slope_point = max_box[3]
    inside_angle = math.atan2(
    slope_point[1]-top[1], slope_point[0]-top[0])
    inside_angle = -((math.pi/2 + inside_angle) % math.pi - math.pi/2)
    return max_box, max_height, inside_angle

# We want to find if a pair exists to the max box and return it. Other contours don't matter
# As we want to focus on the main focused tape and not just a random background one.


def pairFinding(box_list):
    largest_box, largest_height, largest_angle = checkLargestTape(box_list)
    best_match = None
    # We want to find if a match exists. It should have similar height and opposite angle.
    if largest_angle < 0:
        direction = "LEFT"
    else:
        direction = "RIGHT"

    current_min_top_dist = DISTANCE_THRESHOLD

    for check_box in box_list:
        top = check_box[0]
        if check_box[1][1] > check_box[3][1]:
            slope_point = check_box[1]
        else:
            slope_point = check_box[3]
        check_angle = math.atan2(
            slope_point[1]-top[1], slope_point[0]-top[0])
        check_angle = -((math.pi/2 + check_angle) % math.pi - math.pi/2)
        if abs(check_angle) - abs(14.5*math.pi/180) < ANGLE_THRESHOLD:
            check_direction = "RIGHT" if check_angle > 0 else "LEFT"
            if check_direction == direction:
                continue
        else:
            continue
        x_distance = check_box[3][0] - largest_box[3][0]
        if x_distance < current_min_top_dist:
            best_match = check_box
            current_min_top_dist = x_distance

    if direction == "LEFT":
        return largest_box, best_match
    elif direction == "RIGHT":
        return best_match, largest_box
