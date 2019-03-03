from __future__ import division
import math

between_cameras = 8.82600 # in inches
between_tapes = 4.50023 # in inches 
 
# ANGLES TO THE LEFT MUST BE POSITIVE, ANGLES TO THE RIGHT MUST BE NEGATIVE
def get_theta_3t(theta_11, theta_12, theta_21, r=between_cameras, m=between_tapes): # Final Theta from the center of the robot to the center of the tape
    k_2 = (math.pi/2.0) - theta_21
    k_3 = math.pi - (math.pi/2.0 + theta_11) - k_2
    d_11 = r * (math.sin(k_2) / math.sin(k_3))
    print("gt d11:", d_11)
    k_6 = theta_11 - theta_12
    print("gt k6:", k_6 * (180.0/math.pi))
    print("gt k11 inp:", (d_11 * math.sin(k_6)) / m)
    k_11 = math.asin((d_11 * math.sin(k_6)) / m) # THIS NEEDS TO BE FIXED (arcsin error)
    print("gt k11:", math.asin((d_11 * math.sin(k_6)) / m) * (180.0/math.pi))
    # WORKS UNTIL HERE -- Note that if point C crosses the middle perpendicular line then the arcsin should switch
    # If C is to the left, then we can use regular, else if C is to the right, then we should use 180-
    # IF CAB < CBA, then we use 180-arcsin. IF CAB > CBA, then we use regular arcsin.
    # CAB = theta_2, CBA = k_2
    theta_2 = math.pi - k_11 - k_6 
    theta_1 = theta_11 + (math.pi / 2.0)
    print("gt t1:", theta_1 * (180.0/math.pi))
    print("gt t2:", theta_2 * (180.0/math.pi))
    p = math.sqrt(d_11**2 + (r**2 / 4.0) - r * d_11 * math.cos(theta_1))
    print("gt p:", p)
    print("gt t31 inp:",d_11 * math.sin(theta_1) / p)
    if(theta_2 <= k_2):
        theta_31 = math.asin(d_11 * math.sin(theta_1) / p)
    else:
        theta_31 = math.pi - math.asin(d_11 * math.sin(theta_1) / p)

    phi = theta_2 - (math.pi - theta_1 - theta_31) # THIS IS HAVING ISSUES DUE TO DEFINITION??
    print("gt phi:", phi * (180.0/math.pi))
    D = math.sqrt((m**2 / 4.0) + p**2 - m * p * math.cos(phi))
    theta_32 = math.asin((m * math.sin(phi)) / (2.0 * D))

    theta_3 = theta_31 + theta_32
    theta = (math.pi / 2.0) - theta_3
    print("gt t31", theta_31 * (180.0/math.pi))
    print("gt t32", theta_32 * (180.0/math.pi))
    print("gt t3:", theta_3 * (180.0/math.pi))
    return theta # Positive means turn left, negative means turn right (experimental, fix)

def get_distance_3t(theta_11, theta_12, theta_21, r=between_cameras, m=between_tapes): # Finds distance with three theta's 
    k_2 = (math.pi/2) - theta_21
    k_3 = math.pi - (math.pi/2.0 + theta_11) - k_2
    d_11 = r * (math.sin(k_2) / math.sin(k_3))
    k_6 = theta_11 - theta_12
    k_11 = math.asin((d_11 * math.sin(k_6)) / m)

    theta_2 = math.pi - k_11 - k_6
    theta_1 = theta_11 + (math.pi / 2.0)
    p = math.sqrt(d_11**2 + (r**2 / 4.0) - r * d_11 * math.cos(theta_1))
    if(theta_2 <= k_2):
        theta_31 = math.asin(d_11 * math.sin(theta_1) / p)
    else:
        theta_31 = math.pi - math.asin(d_11 * math.sin(theta_1) / p)
        
    phi = theta_2 - (math.pi - theta_1 - theta_31) # DEFINITION ISSUES
    D = math.sqrt((m**2 / 4.0) + p**2 - m * p * math.cos(phi))

    return D

# ANGLES TO THE LEFT MUST BE POSITIVE, ANGLES TO THE RIGHT MUST BE NEGATIVE
def get_theta_2t1d(theta_11, theta_12, d_11, r=between_cameras, m=between_tapes): # Finds distance with two theta's and one distance
    k_6 = theta_11 - theta_12
    print("gt k6:", k_6 * (180.0/math.pi))
    print("gt k11 inp:", (d_11 * math.sin(k_6)) / m)
    k_11 = math.asin((d_11 * math.sin(k_6)) / m)
    print("gt k11:", math.asin((d_11 * math.sin(k_6)) / m) * (180.0/math.pi))
    # WORKS UNTIL HERE

    theta_2 = math.pi - k_11 - k_6
    theta_1 = theta_11 + (math.pi / 2.0)
    p = math.sqrt(d_11**2 + (r**2 / 4.0) - r * d_11 * math.cos(theta_1))
    print("gt p:", p)
    print("gt t31 inp:",d_11 * math.sin(theta_1) / p, 10) # Maybe don't add 0.001?

    if(d_11 * math.cos(theta_1) <= r / 2.0): # arcsin vs 180-arcsin
        theta_31 = math.asin(d_11 * math.sin(theta_1) / p) # Maybe don't add 0.001?
    else:
        theta_31 = math.pi - math.asin(d_11 * math.sin(theta_1) / p)

    phi = theta_2 - (math.pi - theta_1 - theta_31) # THIS IS HAVING ISSUES DUE TO DEFINITION??
    print("gt phi:", phi * (180.0/math.pi))
    D = math.sqrt((m**2 / 4.0) + p**2 - m * p * math.cos(phi))
    theta_32 = math.asin((m * math.sin(phi)) / (2.0 * D)) # Maybe don't add 0.001?

    theta_3 = theta_31 + theta_32
    theta = (math.pi / 2.0) - theta_3
    print("gt t31", theta_31 * (180.0/math.pi))
    print("gt t32", theta_32 * (180.0/math.pi))
    return theta # Positive means turn left, negative means turn right (experimental, fix)

def get_distance_2t1d(theta_11, theta_12, d_11, r=between_cameras, m=between_tapes): # Finds distance with two theta's and one distance
    k_6 = theta_11 - theta_12
    k_11 = math.asin((d_11 * math.sin(k_6)) / m)

    theta_2 = math.pi - k_11 - k_6
    theta_1 = theta_11 + (math.pi / 2)
    p = math.sqrt(d_11**2 + (r**2 / 4.0) - r * d_11 * math.cos(theta_1))
    
    if(d_11 * math.cos(theta_1) <= r / 2.0): # arcsin vs 180-arcsin
        theta_31 = math.asin(d_11 * math.sin(theta_1) / p) # Maybe don't add 0.001?
    else:
        theta_31 = math.pi - math.asin(d_11 * math.sin(theta_1) / p)

    phi = theta_2 - (math.pi - theta_1 - theta_31) # DEFINITION ISSUES
    D = math.sqrt((m**2 / 4.0) + p**2 - m * p * math.cos(phi))

    return D

def r(deg):
    return deg*(math.pi/180.0)

# print(get_theta(math.pi/18, -math.pi/9, 4*math.pi/18, r=1, m=1) * (180/math.pi))
# print(get_distance(math.pi/18, -math.pi/9, 4*math.pi/18, r=1, m=1))

# print(get_theta(0, -math.pi/4, math.pi/4, r=1, m=1) * (180/math.pi))
# print(get_distance(0, -math.pi/4, math.pi/4, r=1, m=1))


caj = 31.78539
daj = 16.33528
cbi = 51.01101
dist_ca = 16.86381

print ("THETA 3T:", get_theta_3t(r(caj), r(daj), r(cbi)) * (180/math.pi))
print ("DIST 3T:", get_distance_3t(r(caj), r(daj), r(cbi)))

# print("THETA 2T1D:", get_theta_2t1d(r(caj), r(daj), dist_ca) * (180/math.pi))
# print("DIST 2T1D:", get_distance_2t1d(r(caj), r(daj), dist_ca))


"""
cae = -7.73
cbf = 30.77

print(get_beta(r(cae), r(cbf)) * (180/math.pi))
"""

def get_beta(theta_11, theta_21, r=between_cameras): # Using three theta's to find beta 
    k_2 = (math.pi/2) - theta_21
    k_3 = math.pi - (math.pi/2 + theta_11) - k_2
    d_11 = r * (math.sin(k_2) / math.sin(k_3))
    d_21 = r * (math.sin(math.pi/2 + theta_11) / math.sin(k_3))
    print("gb d11:", d_11)
    print("gb d21:", d_21)
    sigma = math.acos(-(d_11**2 - d_21**2 - r**2) / (2 * r * d_21))
    zeta = math.acos(-(r**2 - d_11**2 - d_21**2) / (2 * d_11 * d_21))
    print("gb sigma:", sigma * (180/math.pi))
    print("gb zeta:", zeta * (180/math.pi))
    beta = -sigma + zeta + math.pi/2 # INCORRECT
    return beta