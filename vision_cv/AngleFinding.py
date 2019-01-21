import math

def analyzeInsideAnglesRectangle(points, tolerance):
    angles = []
    for i in range (-2,len(points)-2):
        angles.append(findInsideAngle(points[i], points[i+1], points[i+2]))
    if None in angles:
        print angles
        return False
    angles = [elem/math.pi * 180 for elem in angles]
    angles = [elem for elem in angles if (abs(90-elem)<tolerance)]
    if len(angles)<4:
        return False
    else:
        return True

def analyzeInsideAnglesParallelogram(points, tolerance):
    angles = []
    for i in range (-2,len(points)-2): #Negative indices index from the back of the list
        angles.append(findInsideAngle(points[i], points[i+1], points[i+2]))
    if None in angles:
        print angles
        return False
    angles = [elem/math.pi * 180 for elem in angles]
    for i in range(2):
        if abs(angles[i+2]-angles[i])>=tolerance:
            return False
    return True

def findInsideAngle(first, main, third):
    
    try:
        slope1 = slope(main, first)
    except ZeroDivisionError:
        return None
    angle1 = math.atan(slope1)
    try:
        slope2 = slope(main, third)
    except ZeroDivisionError:
        return None
    angle2 = math.atan(slope2)
    return abs(angle2-angle1)

def slope(point1, point2):
    point1 = [float(elem) for elem in point1]
    point2 = [float(elem) for elem in point2]
    m = (point2[1]-point1[1])/(point2[0]-point1[0])
    return m

def findOutside(right, bottom, tolerance):
    slopePoints = slope(right, bottom)
    angle = math.atan(slopePoints)
    angle = 90-angle
    if angle > (14.5-tolerance) and angle<(14.5 + tolerance):
        return True
    else:
        return False