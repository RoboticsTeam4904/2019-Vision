import cv2
import GetContours
import numpy as np
import ScoringMetric
import config
import Printing
import main
import DrawImage
import PairFinding
import GetDistance
import GetAngle

def imageAnalysis(img, n=0):
	thresh, contours, mask = GetContours.getContours(img)
	
	if len(contours)==0:
		isVisible = False
		return None

	boxes, box_scores = getBoxes(contours)

	# Now we draw boxes;
	box_scores = sorted(box_scores, key=lambda x: x[1])[::-1]
	box_scores_filtered = []
	boxes_filtered = []
	for elem in box_scores:
		if(elem[1] >= main.MIN_THRESHOLD):
			box_scores_filtered.append(elem)
			boxes_filtered.append(elem[0])
	
	if len(box_scores_filtered) == 0:
		isVisible = False 
		print("No contours found after filtering")
		return  None
	box_scores = box_scores_filtered # Final scores for each contour
	boxes = boxes_filtered

	selectBoxes(boxes)

	# DrawImage.drawPairs(boxes)
	DrawImage.drawBoxes(box_scores, mask)
	top = box[0]
	bottom = box[2]
	boxHeight = top-bottom

	if len(contours) > 1:
		dist1 = GetDistance.getDistanceToWall(boxHeight)
		dist2 = GetDistance.getDistanceToWall(cv2.boundingRect(contours[1]))
		averaged_distance = (dist1 + dist2)/2
		print("IN FEET: ",(averaged_distance/(25.4 * 12)))
	else:
		print('NOT ENOUGH CONTOURS FOR DISTANCE')
	for i in boxes:
		print(GetAngle.getAngle(i))

	print(len(box_scores))
	if len(box_scores)==0:
		return None
	if not config.LiveImage:
		cv2.imshow("Threshold", thresh)
		cv2.imshow("Image", img)
		cv2.imshow("Mask", mask)
		cv2.waitKey(0)
	else:
		Printing.save(img, name="TEST" + str(n))
	return averaged_distance

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
		points, contour_score = ScoringMetric.score(box, contours[i], img, main.WEIGHTS)
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
	