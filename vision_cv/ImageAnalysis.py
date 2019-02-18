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
	if len(contours)==0:
		isVisibleLeft = False
		isVisibleRight = False
		return (isVisibleLeft, 0, 0), (isVisibleRight, 0, 0) #Ensuring a list of three tuples 
	boxes, box_scores = getBoxesAndScores(contours)
	# Now we draw boxes;
	box_scores = sorted(box_scores, key=lambda x: x[1])[::-1]
	box_scores_filtered = [] #This is an empty array which appends all the box_scores 
	boxes_filtered = [] #This is an empty array which appends all the contours
	for elem in box_scores:
		if(elem[1] >= Constants.MIN_THRESHOLD):
			box_scores_filtered.append(elem)
			boxes_filtered.append(elem[0])
	
	if len(box_scores_filtered) == 0:
		isVisibleLeft = False 
		isVisibleRight = False 
		print("No contours found after filtering")
		return (isVisibleLeft, 0, 0), (isVisibleRight, 0, 0)

	box_scores = box_scores_filtered # Final scores for each contour
	boxes = boxes_filtered #Final contours for left and rightTape
	leftBox, rightBox = selectBoxes(boxes) #leftBox is the left contour of the vision tape

	rightDist, leftDist = None, None
	
	if leftBox != None:
		leftBoxHeight = leftBox[0] - leftBox[2] #Finding height of the left vision tape
		leftDist = GetDistance.getDistanceToWall(leftBoxHeight)	#Distance (d1) of camera to the wall 
		leftTheta = GetAngle.getTheta(leftBox) #
		print("LEFT TAPE FEET: \t",(leftDist/(25.4 * 12)))
		print("LEFT TAPE THETA:\t", (leftTheta))
		isVisibleLeft = True
	if rightBox != None:
		rightBoxHeight = rightBox[0] - rightBox[2] #Finding height of the right vision tape
		rightDist = GetDistance.getDistanceToWall(cv2.boundingRect(rightBoxHeight)) #Distance (d2) of camera to the wall
		rightTheta = GetAngle.getTheta(rightBox) 
		print("RIGHT CONTOUR FEET:\t",(rightDist/(25.4 * 12)))
		print("RIGHT TAPE THETA:  \t", (rightTheta))
		isVisibleRight = True

	if not config.LiveImage: #This is only run when we are not running from the TX2/linux device. When we running locallly from our laptop it will imshow details about the image
		DrawImage.drawBoxes(box_scores, mask)
		cv2.imshow("Threshold", thresh)
		cv2.imshow("Image", img)
		cv2.imshow("Mask", mask)
		cv2.waitKey(0)
	if config.save:
		Printing.save(img)
	return (isVisibleLeft, leftDist, leftTheta), (isVisibleRight, rightDist, rightTheta) 

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
		points, contour_score = ScoringMetric.score(box, contours[i], Constants.WEIGHTS)
		boxes.append(points) #Array with all of the boxes with the format (t, r, b, l) for pair finding 
		box_scores.append((box, contour_score))
		#cv2.drawContours(mask,[box],0,(0,255,0),2)
	return boxes, box_scores

def selectBoxes(boxes):
	largest_box, largest_height, largest_angle = PairFinding.check_largest_tape(boxes)
	pair_box, pair_side = PairFinding.pair_finding(boxes, largest_box, largest_height, largest_angle)
	largest_side = "RIGHT" if pair_side == "LEFT" else "LEFT"
	largest_box = np.array([x.tolist() for x in largest_box], dtype=np.int32)
	if(type(pair_box) != type(None)):
		pair_box = np.array(pair_box, dtype=np.int32).reshape((4,2))
	#print(largest_box, type(largest_box))
	#print(pair_box, type(pair_box))
	cv2.drawContours(mask,[largest_box],0,(0,0,255),2) #IMPORTANT: Drawing contours around largest_height tape
	total_contour = largest_box
	if(type(pair_box) != type(None)):
		cv2.drawContours(mask,[pair_box],0,(0,255,0),2) #IMPORTANT: Drawing contours and finding matching pairs
		total_contour = np.concatenate([total_contour, pair_box])
	#print("TOTAL_CONTOUR", total_contour)	
	center_point = GetDistance.find_center_point(total_contour)
	cv2.circle(mask, center_point, 3, (255,255,255), thickness=-1)
	#cv2.rectangle(mask, (x,y), (x+w,y+h), (255,255,255))
	if pair_side == "LEFT":
		return pair_box, largest_box    
	elif pair_side == "RIGHT":
		return largest_box, pair_box
	