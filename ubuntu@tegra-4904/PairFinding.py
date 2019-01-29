import ScoringMetric 
import math
def right_or_left(box):
    top = box[0]
    right = box[1]
    bottom = box[2]
    left = box[3]
    first = min([right, left], key = lambda t:t[1])
    final = (bottom[0]+.1,bottom[1])
    angle = ScoringMetric.slope(first,bottom)
    if angle<0:
        angle = math.pi+angle
    if abs(165.5-angle/math.pi*180)<abs(14.5-angle/math.pi*180):
        return 'r'
    else:
        return 'l'

def pair_finding(boxes):
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