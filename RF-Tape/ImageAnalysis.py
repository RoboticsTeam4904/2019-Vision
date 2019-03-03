    import cv2
    import GetContours
    import ScoringMetric
    import config
    import Constants
    import numpy as np
    import Printing
    import PairFinding
    import GetDistance
    import GetAngle
    import math
    import time
    #TODO Remove commented out print statemnts after testing

    def imageAnalysis(img, port, isLeft=False): #Takes in one image
        print(port) 
        thresh, contours, mask = GetContours.getContours(img)
        if len(contours) == 0:
            isVisibleLeft = False
            isVisibleRight = False
            # Ensuring a list of three tuples
            return (isVisibleLeft, 0, 0, 0), (isVisibleRight, 0, 0, 0)
        boxes, box_scores = getBoxesAndScores(contours)
        # Now we draw boxes;
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
            return (isVisibleLeft, 0, 0, 0), (isVisibleRight, 0, 0, 0)

        box_scores = box_scores_filtered  # Final scores for each contour
        boxes = boxes_filtered  # Final contours for left and rightTape
        leftBox, rightBox = PairFinding.pairFinding(boxes) # leftBox is the left contour of the vision tape, rightBox is the right contour (tape) of the vision tape
        isVisibleLeft = leftBox[0]
        isVisibleRight = rightBox[0]
        leftDistToWall, rightDistToWall = None, None  # Making sure leftDistToWall and rightDistToWall doesn't error
        leftDistToTape, rightDistToTape = None, None  # Making sure leftDistToTape and  rightDistToTape doesn't error

        if leftBox[0]: #leftBox[0] is the first element of contours from the filtered contours from boxes
            leftBox = leftBox[1] 
            leftBoxHeight = leftBox[0][1] - leftBox[2][1] # Finding height of the left vision tape
            leftTheta = GetAngle.getTheta(leftBox)
            leftDistToWall = GetDistance.getDistanceToWall(leftBoxHeight)  # Distance (d1) of camera to the wall
            leftDistToTape = GetDistance.getDistanceToTape(leftBoxHeight, leftTheta)
            #print("CAMERA" + str(port) + ": LEFT DISTANCE TO WALL IN INCHES: "+
                    str(leftDistToWall))
            isVisibleLeft = True
        if rightBox[0]:
            rightBox = rightBox[1] 
            rightTheta = GetAngle.getTheta(rightBox)
            rightBoxHeight = rightBox[0][1] - rightBox[2][1]
            rightDistToWall = GetDistance.getDistanceToWall(rightBoxHeight)  # Distance (d2) of camera to the wall
            rightDistToTape = GetDistance.getDistanceToTape(rightBoxHeight, rightTheta)
            #print("CAMERA" + str(port) + ": RIGHT DISTANCE TO WALL IN INCHES: "+ str(rightDistToWall))
            isVisibleRight = True
        if not config.live_image:  # This is only run when we are not running from the TX2/linux device. When we running locallly from our laptop it will imshow details about the image
            DrawImage.drawBoxes(box_scores, mask)
        if config.save:
            Printing.save(img)
        if not isVisibleLeft:
        #print(isVisibleRight)
            return (False, 0, 0,  0), (isVisibleRight, rightDistToWall, rightDistToTape, rightTheta)
        if not isVisibleRight:
        #print(isVisibleLeft)
            return (isVisibleLeft, leftDistToWall, leftDistToTape,  leftTheta), (False, 0, 0, 0)
        #print(isVisibleLeft)
        return (isVisibleLeft, leftDistToWall, leftDistToTape, leftTheta), (isVisibleRight, rightDistToWall, rightDistToTape, rightTheta)
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
