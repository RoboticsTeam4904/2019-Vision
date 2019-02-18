import cv2
import GetContours
import numpy as np
import ScoringMetric
import config
import Constants
import Printing
import main
import DrawImage
import PairFinding
import GetDistance
import GetAngle


def imageAnalysis(img):
    thresh, contours, mask = GetContours.getContours(img)
    if len(contours) == 0:
        isVisibleLeft = False
        isVisibleRight = False
        # Ensuring a list of three tuples
        return (isVisibleLeft, 0, 0), (isVisibleRight, 0, 0)
    boxes, box_scores = getBoxesAndScores(contours)
    # Now we draw boxes;
    box_scores = sorted(box_scores, key=lambda x: x[1])[::-1]
    box_scores_filtered = []  # This is an empty array which appends all the box_scores
    boxes_filtered = []  # This is an empty array which appends all the contours
    for elem in box_scores:
        if(elem[1] >= Constants.MIN_THRESHOLD):
            box_scores_filtered.append(elem)
            boxes_filtered.append(elem[0])

    if len(box_scores_filtered) == 0:
        isVisibleLeft = False
        isVisibleRight = False
        print("No contours found after filtering")
        return (isVisibleLeft, 0, 0), (isVisibleRight, 0, 0)

    box_scores = box_scores_filtered  # Final scores for each contour
    boxes = boxes_filtered  # Final contours for left and rightTape
    # leftBox is the left contour of the vision tape
    leftBox, rightBox = PairFinding.pairFinding(boxes)

    rightDist, leftDist = None, None  # Making sure right and leftDist doesn't error
    if leftBox[0]:
        leftBox = leftBox[1]
        # Finding height of the left vision tape
        leftBoxHeight = leftBox[0] - leftBox[2]
        leftDistToWall = GetDistance.getDistanceToWall(
            leftBoxHeight)  # Distance (d1) of camera to the wall
        leftDistToTape = GetDistance.getDistanceToTape()
        leftTheta = GetAngle.getTheta(leftBox)
        print("LEFT DISTANCE TO WALL IN FEET: \t", (leftDistToWall/(25.4 * 12)))
        print("LEFT DISTANCE TO TAPE IN FEET: \t", (leftDistToTape/(25.4 * 12)))
        print("LEFT TAPE THETA:\t", (leftTheta))
        isVisibleLeft = True
    if rightBox[0]:
        rightBox = rightBox[1]
        # Finding height of the right vision tape
        rightBoxHeight = rightBox[0] - rightBox[2]
        rightDistToWall = GetDistance.getDistanceToWall(
            rightBoxHeight)  # Distance (d2) of camera to the wall
        rightDistToTape = GetDistance.getDistanceToTape(rightBoxHeight)
        rightTheta = GetAngle.getTheta(rightBox)
        print("RIGHT DISTANCE TO WALL IN FEET:\t", (rightDistToWall/(25.4 * 12)))
        print("RIGHT DISTANCE TO TAPE IN FEET: \t", (rightDistToTape/(25.4 * 12)))
        print("RIGHT TAPE THETA:  \t", (rightTheta))
        isVisibleRight = True
    if not config.LiveImage:  # This is only run when we are not running from the TX2/linux device. When we running locallly from our laptop it will imshow details about the image
        DrawImage.drawBoxes(box_scores, mask)
        cv2.imshow("Threshold", thresh)
        cv2.imshow("Image", img)
        cv2.imshow("Mask", mask)
        cv2.waitKey(0)
    if config.save:
        Printing.save(img)
    return (isVisibleLeft, leftDistToWall, leftDistToTape,  leftTheta), (isVisibleRight, rightDistToWall, rightDistToTape, rightTheta)


def getBoxesAndScores(contours):
    box_scores = []
    boxes = []
    for i in range(len(contours)):
        rect = cv2.minAreaRect(contours[i])
        if(cv2.__version__[0] == "2"):
            box = cv2.cv.BoxPoints(rect)
        else:
            box = cv2.boxPoints(rect)
        box = np.int0(box)
        points, contour_score = ScoringMetric.score(
            box, contours[i], Constants.WEIGHTS)
        # Array with all of the boxes with the format (t, r, b, l) for pair finding
        boxes.append(points)
        box_scores.append((box, contour_score))
        # cv2.drawContours(mask,[box],0,(0,255,0),2)
    return boxes, box_scores
