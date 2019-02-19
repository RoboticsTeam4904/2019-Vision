from ScoringMetric import findInsideAngle
import ScoringMetric
import math
import numpy as np

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
        top = box[0]  # Top point in the box array of four points
    return max_box, max_height, inside_angle

# We want to find if a pair exists to the max box and return it. Other contours don't matter
# As we want to focus on the main focused tape and not just a random background one.

def pairFinding(box_list):
    global HEIGHT_THRESHOLD
    global ANGLE_THRESHOLD
    largest_box, largest_height, largest_angle = checkLargestTape(box_list)
    best_match = False
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
	check_angle = -((math.pi/2 + check_angle)%math.pi - math.pi/2)
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

    if best_match is not False:
        # print("FOUND PAIRS") # Then we just take possible_matches[0]
        if direction=="LEFT":
            return (True, largest_box), (True, best_match)
        elif direction=="RIGHT":
            return (True, best_match), (True, largest_box)
    else:
        if direction=="LEFT":
            return (True, largest_box), (False, None)
        elif direction=="RIGHT":
            return (False, None), (True, largest_box)