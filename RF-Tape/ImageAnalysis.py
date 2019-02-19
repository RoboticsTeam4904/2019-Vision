import cv2
import GetContours
import numpy as np
import ScoringMetric
import config
import Constants
import Printing
import main
import PairFinding
import GetDistance
import GetAngle
import math

def imageAnalysis(img):
    contours = GetContours.getContours(img)
    if len(contours) == 0:
        isVisibleLeft, isVisibleRight = False, False
        return (isVisibleLeft, 0, 0), (isVisibleRight, 0, 0) # Ensuring a list of three tuples

    boxes, scores = ScoringMetric.getBoxesAndScores(contours)
    boxes_filtered = [box for (box,score) in zip(boxes,scores) if score >= Constants.MIN_THRESHOLD]

    if len(boxes_filtered) == 0:
        isVisibleLeft, isVisibleRight = False, False
        print("No contours found after filtering")
        return (isVisibleLeft, 0, 0), (isVisibleRight, 0, 0)

        # leftBox is the left contour of the vision tape, rightBox is the right contour (tape) of the vision tape
    leftBox, rightBox = PairFinding.pairFinding(boxes_filtered)

    isVisibleLeft, isVisibleRight = leftBox[0], rightBox[0] #leftBox[0] is the first element of contours from the filtered contours from boxes
    leftDistToWall, rightDistToWall = None, None  # Making sure leftDistToWall and rightDistToWall doesn't error
    leftDistToTape, rightDistToTape = None, None  # Making sure leftDistToTape and  rightDistToTape doesn't error

    if isVisibleLeft:
        leftBox = leftBox[1] 
        leftBoxHeight = leftBox[0][1] - leftBox[2][1] # Finding height of the left vision tape
        leftTheta = GetAngle.getTheta(leftBox)
        leftDistToWall = GetDistance.getDistanceToWall(leftBoxHeight)  # Distance (d1) of camera to the wall
        leftDistToTape = GetDistance.getDistanceToTape(leftBoxHeight, leftTheta)
        print("LEFT DISTANCE TO WALL IN INCHES: "+
              str(leftDistToWall))
        print("LEFT DISTANCE TO TAPE IN INCHES: "+
              str(leftDistToTape))
        print("TAPE OF LEFT THETA: " +  str(leftTheta/math.pi * 180))

    if isVisibleRight:
        rightBox = rightBox[1] 
        rightTheta = GetAngle.getTheta(rightBox)
        rightBoxHeight = rightBox[0][1] - rightBox[2][1]
        rightDistToWall = GetDistance.getDistanceToWall(rightBoxHeight)  # Distance (d2) of camera to the wall
        rightDistToTape = GetDistance.getDistanceToTape(rightBoxHeight, rightTheta)
        print("RIGHT DISTANCE TO WALL IN INCHES: "+
              str(rightDistToWall))
        print("RIGHT DISTANCE TO TAPE IN INCHES: "+
              str(rightDistToTape))
        print("RIGHT TAPE THETA: " + str(rightTheta/math.pi * 180))

	return (isVisibleLeft, leftDist, leftTheta), (isVisibleRight, rightDist, rightTheta) 