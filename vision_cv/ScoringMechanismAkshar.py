import math

def scoring_rectangle(points, weight):
    angles = []
    for i in range (-2,len(points)-2):
        angles.append(findInsideAngle(points[i], points[i+1], points[i+2]))
    if None in angles:
        print angles
        return False
    angles = [elem/math.pi * 180 for elem in angles]
    angles = [(90-elem)**2 for elem in angles] #Squared error of angles
    num = sum(angles)
    return -num/(num+weight) +1

def scoring_parallelogram(points, weight):
    angles = []
    for i in range (-2,len(points)-2): #Negative indices index from the back of the list
        angles.append(findInsideAngle(points[i], points[i+1], points[i+2]))
    if None in angles:
        print angles
        return False
    angles = [elem/math.pi * 180 for elem in angles]
    sumTotal = 0
    for i in range(2):
        sumTotal += (angles[i+2]-angles[i])**2
    return -sumTotal/(sumTotal+weight) +1

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

def findOutside(right, bottom, weight):
    slopePoints = slope(right, bottom)
    angle = math.atan(slopePoints)
    angle = 90-angle
    num = (14.5-angle)**2
    return -num/(num+weight)+1
