from ScoringMetric import findInsideAngle
import ScoringMetric
import math
import numpy as np

HEIGHT_THRESHOLD = 20 # delta pixels # TODO: Tune Threshold
ANGLE_THRESHOLD = 0.1 # delta radians

def right_or_left(angle):
    top = box[0]
    bottom = box[2]
    first = min([right, left], key = lambda t:t[1])
    final = (bottom[0]+.1,bottom[1])
    angle = ScoringMetric.slope(first,bottom) 
    if angle<0:
        angle = math.pi+angle
    if abs(75.5-angle/math.pi*180)<abs(14.5-angle/math.pi*180):
        return 'l'
    else:
        return 'r'
def choose_right_or_left(boxes):
    pairs = []
    boxes.sort(key=lambda x: x[3][0])
    if len(boxes)==1:
        return None
    list_rotations = []
    for i in boxes:
        list_rotations.append(right_or_left(i))
    for i in range(0,len(list_rotations)-1):
        if list_rotations[i]=='l' and list_rotations[i+1]=='r':
            pairs.append((boxes[i],boxes[i+1]))
    if len(pairs) == 0:
        return None
    else:
        return pairs
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
    
    #inside_angle = findInsideAngle(max_box[1], max_box[2], (max_box[2][0]+1, max_box[2][1])) # FIX ANGLE FINDING
    inside_angle = math.atan2(box[1][0]-box[2][0], box[1][1]-box[2][1]) # direct arctan?
    return max_box, max_height, inside_angle

# We want to find if a pair exists to the max box and return it. Other contours don't matter
# As we want to focus on the main focused tape and not just a random background one.
def pair_finding(box_list, box, target_height, angle):
    global HEIGHT_THRESHOLD
    global ANGLE_THRESHOLD
    # We want to find if a match exists. It should have similar height and opposite angle.
    best_match = np.array([False])
    target_angle = (math.pi/2)-angle # In radians (originally (math.pi/2)-angle)
    if(target_angle < 0):
            target_angle += math.pi
    print("THIS IS THE DIMENSIONS FOR THE BOX", box_list)
    for elem in range(len(box_list)):
        if(np.array_equal(box_list[elem], box)):
            box_list.pop(elem)
            break
            
    current_min_top_dist = float("inf")
    for check_box in box_list:
        check_height = check_box[0][1] - check_box[2][1]
        check_angle = math.atan2(box[1][0]-box[2][0], box[1][1]-box[2][1]) # direct arctan?
        if(check_angle < 0):
            check_angle += math.pi
        print("CONSIDERING BOX FOR HEIGHT", check_height, target_height)
        print("CONSIDERING BOX FOR ANGLE", check_angle, target_angle)

        if(HEIGHT_THRESHOLD > abs(check_height-target_height) and ANGLE_THRESHOLD > abs(check_angle-target_angle)):
            print("POSSIBLE MATCH", abs(check_box[0][0]-box[0][0]))
            # We have to make sure that if we have a right-side tape, the left-side tape is to the left,
            # and vice versa.
            
            if(abs(check_box[0][0]-box[0][0]) < current_min_top_dist):
                if(abs(check_angle-1.856) < abs(check_angle+0.279)):
                    # This is the left side match -- it must be more left
                    if(check_box[0][0]-box[0][0] < 0):
                        current_min_top_dist = abs(check_box[0][0]-box[0][0])
                        best_match = check_box
                    else:
                        pass
                else:
                    # This is the right side match -- it must be more right
                    if(check_box[0][0]-box[0][0] > 0):
                        current_min_top_dist = abs(check_box[0][0]-box[0][0])
                        best_match = check_box

    if best_match.any():
        print("FOUND PAIRS") # Then we just take possible_matches[0]
        return best_match
    else:
        print("NO PAIRS FOUND")
        return None

