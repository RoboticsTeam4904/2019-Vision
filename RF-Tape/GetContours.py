import cv2
import Constants, config, ScoringMetric

hsv_min = (Constants.HUE_RANGE[0], Constants.SAT_RANGE[0], Constants.VAL_RANGE[0])
hsv_max = (Constants.HUE_RANGE[1], Constants.SAT_RANGE[1], Constants.VAL_RANGE[1])

# Check if contour is of the right size
def check_contour(contour):
    x, y, w, h = cv2.boundingRect(contour)
    if (w < Constants.WIDTH_RANGE[0] or w > Constants.WIDTH_RANGE[1]):
        return False
    if (h < Constants.HEIGHT_RANGE[0] or h > Constants.HEIGHT_RANGE[1]):
        return False
    area = cv2.contourArea(contour)
    if (area < Constants.AREA_RANGE[0] or area > Constants.AREA_RANGE[1]):
        return False
    perimeter = cv2.arcLength(contour, True)
    if (perimeter < Constants.PERIMETER_RANGE[0] or perimeter > Constants.PERIMETER_RANGE[1]):
        return False
    hull = cv2.convexHull(contour)
    solid = 100 * area / cv2.contourArea(hull)
    if (solid < Constants.SOLIDITY_RANGE[0] or solid > Constants.SOLIDITY_RANGE[1]):
        return False
    ratio = (float)(w) / h
    if (ratio < Constants.RATIO_RANGE[0] or ratio > Constants.RATIO_RANGE[1]):
        return False
    return True

# find contours from a BGR numpy ndarray
def findContours(img):
    hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)  # Converts to hsv
    thresh = cv2.inRange(hsv, hsv_min, hsv_max) # Thresholds to a black and white numpy.ndarray
    if Constants.using_cv3: # im2 returned only in version 3.x
        im2, contours, hierarchy = cv2.findContours(thresh, FIND_CONTOURS_MODE, cv2.CHAIN_APPROX_SIMPLE)
    else:
        contours, hierarchy = cv2.findContours(thresh, FIND_CONTOURS_MODE, cv2.CHAIN_APPROX_SIMPLE)
    filtered_contours = [contour for contour in contours if check_contour(contour)]
    if config.display and config.debug:
        Printing.display(thresh, "Threshold")

    return filtered_contours

def getBoxes(img):
    contours = findContours(img)
    if config.debug and len(contours) == 0:
        print("No contours found") # TODO: use config.debug

	boxes = [] # Array with all of the boxes with the format (t, r, b, l) for pair finding 
	for contour in contours:
		box, score = score(contour)
        if score >= Constants.MIN_THRESHOLD:
            boxes.append(box)

    if config.debug and len(boxes) == 0:
        print("No contours found after filtering")

    return boxes
