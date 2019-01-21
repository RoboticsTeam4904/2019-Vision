import math

def dist2d(p1, p2):
    return math.sqrt(abs(p2[0]-p1[0])**2 + abs(p2[1]-p1[1])**2)

def score(bb):
    weight_ratio = 1
    weight_area = 1
    total_score = 0 
    
    bb = sorted(bb, key=lambda x: x[1])[::-1]
    top = bb.pop(0)
    bb = sorted(bb, key=lambda x: x[1])
    bottom = bb.pop(0)
    bb = sorted(bb, key=lambda x: x[0])
    left = bb.pop(0)
    bb = sorted(bb, key=lambda x: x[0])[::-1]
    right = bb.pop(0)

    print(top, bottom, left, right)
    if(len(set([tuple(top), tuple(bottom), tuple(left), tuple(right)])) < 4):
        return ()

    width = dist2d(top, right)
    height = dist2d(top, left)
    print(width, height)

    total_score += score_side_ratio(height, width, weight_ratio)
    total_score += score_area_ratio(height, width, top, bottom, left, right, weight_area)

    return (top, bottom, left, right)

def score_side_ratio(h, w, weight):
    target_ratio = 2.75
    # 5.5 / 2 = 2.75
    return weight*(1/(((h/w)-target_ratio)**2 + 1)) # Witch of Agnesi curve.

def score_area_ratio(h, w, t, b, l, r, weight):
    target_ratio = 0.75

    area_slanted = h*w
    area_straight = abs(t[1]-b[1])*abs(r[1]-l[1])
    score_area_ratio = weight*(1/(abs((area_slanted/area_straight)-target_ratio)**2 + 1))
