import cv2
import random
import PairFinding

def drawBoxes(box_scores, img):
    for i in box_scores:
        for point in i[0]:
            cv2.circle(img, (point[0], point[1]), 5, (255,255,0), 2)

def drawPairs(boxes, img):
    pairBoxes = PairFinding.pair_finding(boxes)
    if pairBoxes == None:
        return "No pairs - cannot draw!"
    else:
        for i in pairBoxes:
            randomBlue = random.randint(0,255)
        randomGreen = random.randint(0,255)
        randomRed = random.randint(0,255)
        for j in i:
            cv2.circle(img, (j[0][0], j[0][1]), 5, (randomRed,randomGreen,randomBlue), 2)
            cv2.circle(img, (j[1][0], j[1][1]), 5, (randomRed,randomGreen,randomBlue), 2)
            cv2.circle(img, (j[2][0], j[2][1]), 5, (randomRed,randomGreen,randomBlue), 2)
            cv2.circle(img, (j[3][0], j[3][1]), 5, (randomRed,randomGreen,randomBlue), 2)
    