from ScoringMetric import findInsideAngle
import ScoringMetric
import math

HEIGHT_THRESHOLD = 0.01 # delta pixels # TODO: Tune Threshold
ANGLE_THRESHOLD = 0.1 # delta radians

"""
What we want to do:
Take the largest tape and check if it has a pair, then return if it does or
do not return/return that it only has one if it doesn't. We do not want to
return a pair if the distance if it is not relevant.
"""

# tape_list: a list of slanted bounding boxes
def check_largest_tape(box_list):
    max_height = -float("inf")
    max_box = None
    for box in box_list:
        top = box[0] # Top point in the box array of four points 
        bottom = box[2]
        height = top[1]-bottom[1]
        if(height > max_height):
            max_height = height
            max_box = box
    
    inside_angle = findInsideAngle(box[1], box[2], (box[2][0]+0.0001, box[2][1]))
    return max_box, max_height, inside_angle

# We want to find if a pair exists to the max box and return it. Other contours don't matter
# As we want to focus on the main focused tape and not just a random background one.
def pair_finding(box_list, box, target_height, angle):
    global HEIGHT_THRESHOLD
    global ANGLE_THRESHOLD
    # We want to find if a match exists. It should have similar height and opposite angle.
    possible_matches = []
    target_angle = (math.pi/2)-angle # In radians
    for check_box in box_list:
        check_height = check_box[0][1] - check_box[2][1]
        check_angle = findInsideAngle(box[1], box[2], (box[2][0]+0.0001, box[2][1]))
        if(abs(check_height-target_height) < HEIGHT_THRESHOLD and abs(check_angle-target_angle) < ANGLE_THRESHOLD):
            possible_matches.append(check_box)
    return possible_matches
    if len(possible_matches) >= 1:
        print("FOUND PAIRS") # Then we just take possible_matches[0]
        return possible_matches[0]
    else:
        print("NO PAIRS FOUND")
        return None
    
def right_or_left(box):
    top = box[0]
    bottom = box[2]
    
    first = min([right, left], key = lambda t:t[1])
    final = (bottom[0]+.1,bottom[1])
    angle = ScoringMetric.slope(first,bottom)
    
    if angle<0:
        angle = math.pi+angle
    if abs(165.5-angle/math.pi*180)<abs(14.5-angle/math.pi*180):
        return 'r'
    else:
        return 'l'

