import math


def get_distance(theta_11, theta_12, theta_21, distance_between_cameras=CONSTANT, distance_between_tapes=CONSTANT):
    k_2 = (math.pi/2) - theta_21
    k_3 = math.pi- (math.pi/2 + theta_11) + k_2
    d_11 = distance_between_cameras * (math.sin(k_2) / math.sin(k_3))
    k_6 = theta_11 + theta_12
    print("gd k11 inp:", (d_11 * math.sin(k_6)) / distance_between_tapes)
    k_11 = math.asin((d_11 * math.sin(k_6)) / distance_between_tapes)

    theta_2 = math.pi - k_11 - k_6
    theta_1 = theta_11 + (math.pi / 2)
    p = math.sqrt(d_11**2 + (distance_between_cameras**2 / 4) - distance_between_cameras * d_11 * math.cos(theta_1))
    print("gd t31 inp:",round(d_11 * math.sin(theta_1) / (p + 0.001), 7)) #maybe don't add 0.001?
    theta_31 = math.asin(round(d_11 * math.sin(theta_1) / (p + 0.001), 7)) #maybe don't add 0.001?
    phi = theta_2 - (math.pi - theta_1 - theta_31)
    final_distance = math.sqrt((distance_between_tapes**2 / 4) + p**2 - distance_between_tapes * p * math.cos(phi))
    
    return final_distance # Positive means turn left, negative means turn right

#print(get_theta(math.pi/18, -math.pi/9, 4*math.pi/18, r=1, m=1) * (180/math.pi))
#print(get_distance(math.pi/18, -math.pi/9, 4*math.pi/18, r=1, m=1))

#print(get_theta(0, -math.pi/4, math.pi/4, r=1, m=1) * (180/math.pi))
#print(get_distance(0, -math.pi/4, math.pi/4, r=1, m=1))

print(get_theta(math.pi/12, -math.pi/6, -math.pi/12, r=1, m=1) * (180/math.pi))
print(get_distance(math.pi/12, -math.pi/2, -math.pi/12, distance_between_cameras=1, distance_between_tapes=1))
