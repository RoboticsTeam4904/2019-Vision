import ScoringMetric 

def right_or_left(box):
    top = box[0]
    right = box[1]
    bottom = box[2]
    left = box[3]
    first = min([right, left], key = lambda t:t[1])
    final = (bottom[0]+.1,bottom[1])
    angle = ScoringMetric.findInsideAngle(first, bottom, final)
    if abs(175.5-angle)<abs(14.5-angle):
        return 'l'
    else:
        return 'r'

def pair_finding(boxes):
    pairs = []
    if len(boxes)==1:
        return None
    list_rotations = []
    for i in boxes:
        list_rotations.append(right_or_left(i))
    for i in range(0,len(list_rotations)-1):
        if list_rotations[i]=='l' and list_rotations[i+1]=='r':
            pairs.append((boxes[i],boxes[i+1]))
    if len(pairs)==0:
        return None
    else:
        return pairs