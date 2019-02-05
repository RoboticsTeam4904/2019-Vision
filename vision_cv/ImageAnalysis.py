import cv2
import GetContours
import numpy as np
import ScoringMetric
import config
import Printing
import main
import DrawImage

def imageAnalysis(img):
    n=0
    thresh, contours, mask = GetContours.getContours(img)
    if len(contours)==0:
        print(0)
        return None

    contours, mask, boxes, box_scores = getBoxes(contours, mask, img)

    # Now we draw boxes;
    box_scores = sorted(box_scores, key=lambda x: x[1])[::-1]
    box_scores_filtered = []
    for elem in box_scores:
        if(elem[1] >= main.MIN_THRESHOLD):
            box_scores_filtered.append(elem)
        else:
            break

    box_scores = box_scores_filtered # Final scores for each contour

    # DrawImage.drawPairs(boxes)
    DrawImage.drawBoxes(box_scores, mask)

    #GetDistanceAngle.distanceAngleAnalysis(boxes)
    cv2.drawContours(mask, contours, 0, (0,0,255), 2) # BGR, so this is red.

    print(len(box_scores))

    if not config.LiveImage:
        cv2.imshow("Threshold", thresh)
        cv2.imshow("Image", img)
        cv2.imshow("Mask", mask)
        cv2.waitKey(0)
    else:
        Printing.save(Printing.save(img, name="TEST" + str(n//10)))
        n+=1

def getBoxes(contours, mask, img):
    box_scores = []
    boxes = []
    for i in range(len(contours)):
        rect = cv2.minAreaRect(contours[i])
        if(cv2.__version__[0] == "2"):
            box = cv2.cv.BoxPoints(rect)
        else:
            box = cv2.boxPoints(rect)
        
        box = np.int0(box)

        points, contour_score = ScoringMetric.score(box, contours[i], img, main.WEIGHTS)
        boxes.append(points) #Array with all of the boxes with the format (t, r, b, l) for pair finding 
        box_scores.append((box, contour_score))
        cv2.drawContours(mask,[box],0,(0,255,0),2)
    return contours, mask, boxes, box_scores