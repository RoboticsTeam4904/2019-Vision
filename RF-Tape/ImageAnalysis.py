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

def imageAnalysis(img):
	contours = GetContours.getContours(img)
	if len(contours) == 0:
		isVisibleLeft, isVisibleRight = False, False
		return (isVisibleLeft, 0, 0), (isVisibleRight, 0, 0) # Ensuring a list of three tuples 

	boxes, scores = ScoringMetric.getBoxesAndScores(contours)
	boxes_filtered = [box for (box,score) in zip(boxes,scores) if score >= Constants.MIN_THRESHOLD]

	if len(boxes_filtered) == 0:
		isVisibleLeft = False 
		isVisibleRight = False 
		print("No contours found after filtering")
		return (isVisibleLeft, 0, 0), (isVisibleRight, 0, 0)

	leftBox, rightBox = selectBoxes(boxes_filtered) # leftBox is the left contour of the vision tape

	rightDist, leftDist = None, None # Making sure right and leftDist doesn't error
	if leftBox != None:
		leftBoxHeight = leftBox[0] - leftBox[2] # Finding height of the left vision tape
		leftDist = GetDistance.getDistanceToWall(leftBoxHeight)	# Distance (d1) of camera to the wall 
		leftTheta = GetAngle.getTheta(leftBox) #
		print("LEFT TAPE FEET: \t",(leftDist/(25.4 * 12)))
		print("LEFT TAPE THETA:\t", (leftTheta))
		isVisibleLeft = True
	if rightBox != None:
		rightBoxHeight = rightBox[0] - rightBox[2] # Finding height of the right vision tape
		rightDist = GetDistance.getDistanceToWall(rightBoxHeight) # Fistance (d2) of camera to the wall
		rightTheta = GetAngle.getTheta(rightBox) 
		print("RIGHT CONTOUR FEET:\t",(rightDist/(25.4 * 12)))
		print("RIGHT TAPE THETA:  \t", (rightTheta))
		isVisibleRight = True

	if config.display or config.save:
		Printing.draw(img, contours, filtered_boxes, leftBox, rightBox)
	if config.display: # This is only run when we are not running from the TX2/linux device. When we running locallly from our laptop it will imshow details about the image
		cv2.imshow("Image", img)
		cv2.imshow("Mask", mask)
		cv2.waitKey(0)
	if config.save:
		Printing.save(img)
		Printing.save(img, contours, filtered_boxes, leftBox, rightBox)


	return (isVisibleLeft, leftDist, leftTheta), (isVisibleRight, rightDist, rightTheta) 

def selectBoxes(boxes):
	largest_box, largest_height, largest_angle = PairFinding.check_largest_tape(boxes)
	pair_box, pair_side = PairFinding.pair_finding(boxes, largest_box, largest_height, largest_angle)
	largest_side = "RIGHT" if pair_side == "LEFT" else "LEFT"
	largest_box = np.array([x.tolist() for x in largest_box], dtype=np.int32)
	if(type(pair_box) != type(None)):
		pair_box = np.array(pair_box, dtype=np.int32).reshape((4,2))
	# print(largest_box, type(largest_box))
	# print(pair_box, type(pair_box))
	cv2.drawContours(mask,[largest_box],0,(0,0,255),2) # IMPORTANT: Drawing contours around largest_height tape
	total_contour = largest_box
	if(type(pair_box) != type(None)):
		cv2.drawContours(mask,[pair_box],0,(0,255,0),2) # IMPORTANT: Drawing contours and finding matching pairs
		total_contour = np.concatenate([total_contour, pair_box])
	# print("TOTAL_CONTOUR", total_contour)	
	center_point = GetDistance.find_center_point(total_contour)
	cv2.circle(mask, center_point, 3, (255,255,255), thickness=-1)
	# cv2.rectangle(mask, (x,y), (x+w,y+h), (255,255,255))
	if pair_side == "LEFT":
		return pair_box, largest_box    
	elif pair_side == "RIGHT":
		return largest_box, pair_box
	