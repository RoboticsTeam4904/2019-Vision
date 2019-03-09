import cv2
import GetContours
import ScoringMetric
import config
import Constants
import numpy as np
import Printing
import PairFinding
import MeasureTape
import math

def imageAnalysis(img):
    left_data, right_data = None, None

    boxes = GetContours.getBoxes(img)

    if len(boxes) != 0:
        left_box, right_box = PairFinding.pairFinding(boxes)

        if leftBox != None:
            left_data = boxToMeasurements(left_box)
        if right_box != None:
            right_data = boxToMeasurements(right_box)

    return left_data, right_data

def boxToMeasurements(box):
    height = box[0][1] - box[2][1] # Finding height of the left vision tape
    theta = MeasureTape.getTheta(box)
    forward_dist = MeasureTape.forwardDist(height)  # Portion of distance of camera to tape along center of vision
    real_dist = MeasureTape.realDist(forward_dist, theta)

    return {"forward_dist": forward_dist, "real_dist": real_dist, "theta": theta}

        # print("LEFT DISTANCE TO WALL IN INCHES: "+
        #       str(leftDistToWall))
        # print("LEFT DISTANCE TO TAPE IN INCHES: "+
        #       str(leftDistToTape))
        # print("TAPE OF LEFT THETA: " +  str(leftTheta/math.pi * 180))
        # print("RIGHT DISTANCE TO WALL IN INCHES: "+
        #       str(rightDistToWall))
        # print("RIGHT DISTANCE TO TAPE IN INCHES: "+
        #       str(rightDistToTape))
        # print("RIGHT TAPE THETA: " + str(rightTheta/math.pi * 180))
        # print("\t CAMERA ------" + str(port) + ": LEFT DISTANCE TO WALL IN INCHES: "+
        #       str(leftDistToWall))
        # print("CAMERA" + str(port) + ": TO LEFT TAPE IN INCHES: "+
        #       str(leftDistToTape))
        # print("CAMERA"+ str(port) + "THETA TO LEFT TAPE:" + str(leftTheta/math.pi * 180))