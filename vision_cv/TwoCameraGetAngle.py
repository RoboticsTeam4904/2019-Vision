import math

between_cameras = 1 # ft
between_tapes = 1 # ft

# ANGLES TO THE LEFT MUST BE POSITIVE, ANGLES TO THE RIGHT MUST BE NEGATIVE
def get_theta(theta_11, theta_12, theta_21, r=between_cameras, m=between_tapes):
    k_2 = (math.pi/2) - theta_21
    k_3 = math.pi- (math.pi/2 + theta_11) + k_2
    d_11 = r * (math.sin(k_2) / math.sin(k_3))
    k_6 = theta_11 + theta_12
    print("gt k11 inp:", (d_11 * math.sin(k_6)) / m)
    k_11 = math.asin((d_11 * math.sin(k_6)) / m)

    theta_2 = math.pi - k_11 - k_6
    theta_1 = theta_11 + (math.pi / 2)
    p = math.sqrt(d_11**2 + (r**2 / 4) - r * d_11 * math.cos(theta_1))
    print("gt t31 inp:",round(d_11 * math.sin(theta_1) / (p + 0.001), 7)) #maybe don't add 0.001?
    theta_31 = math.asin(round(d_11 * math.sin(theta_1) / (p + 0.001), 7)) #maybe don't add 0.001?
    phi = theta_2 - (math.pi - theta_1 - theta_31)
    D = math.sqrt((m**2 / 4) + p**2 - m * p * math.cos(phi))
    theta_32 = math.asin((m * math.sin(phi)) / (2 * D + 0.001)) #maybe don't add 0.001?

    theta_3 = theta_31 + theta_32
    theta = (math.pi / 2) - theta_3
    return theta # Positive means turn left, negative means turn right