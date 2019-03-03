import numpy as np
import sys
import os
import random
import cv2
import config

# File names
folder = "TestImages/"
default_name = "img"
drawn_name = "_drawn"
image_counts = {default_name: 0}

# Construct folder for saving images from this run
if config.save and config.save_in_folder:
	matchNum = 1
	while os.path.exists(folder + "match" + str(matchNum)):
		matchNum += 1
	folder = folder + "match" + str(matchNum) + "/"
	os.makedirs(folder)

# Colors for drawing on images
right_color, left_color = (200, 50, 150), (150, 50, 200)
white = (255, 255, 255)
colors = [(255, 255, 0), (40, 40, 150), (50, 50, 255),
           (140, 50, 10), (100, 50, 200)]


def getColor(color):
	if type(color) == int:
		return colors[color]
	elif color == "random":
		return (random.randint(40, 210), random.randint(40, 210), random.randint(40, 210))
	elif type(color) == list or type(color) == tuple:
		assert len(color) == 3
		return color
	else:
		return colors[0]  # default color


# Display sizes
default_size = (640, 360)
default_shrink_x, default_shrink_y = 0.3, 0.3
default_thickness = 5

# Display an image in a cv2 window


def display(image, name="Contours Found", doResize=True, delay=20):
	if doResize:
		image = resize(image)  # resize to default size
	cv2.imshow(name, image)		# display image
	key = cv2.waitKey(delay)  # wait for keypress (delay in ms)
	if key == 27:				# hit esc to quit
		sys.exit()

# Save image in folder. Increment number if previously saved with that name


def save(image, name=default_name, drawn=False):
        if drawn:
                name += drawn_name
        if name in image_counts:
                name += str(image_counts[name])
                if name in image_counts:
                    image_counts[name] += 1
                else:
                    image_counts[name]=1
        else:
                image_counts[name] = 1
        cv2.imwrite(folder + name + ".jpg", image)

# Save right and left images in folder. Increment number if previously saved with that name


def savePair(left_image, right_image, name=default_name, drawn=False):
	save(left_image, name + "_left", drawn)
	save(right_image, name + "_right", drawn)


def draw(image, contours, filtered_boxes, left_box, right_box):
	drawContours(image, contours=3)
	drawBoxes(image, filtered_boxes, color="random")
	drawBoxes(image, [left_box], color=left_color)
	drawBoxes(image, [right_box], color=right_color)


def drawBoxes(image, boxes, color="random"):
    for box in boxes:
		color = getColor(color)
    for point in box:
           	drawPoint(image, point, color)

def drawPairs(image, pairs):
	for (right, left) in pairs:
		drawBoxes(image, pair, color=getColor("random"))

def drawContours(image, contours, color=3, thickness=default_thickness):
	if type(contours) == np.ndarray:
		if len(contours.shape) == 3:
			contours = [contours]
	cv2.drawContours(image, contours, -1, getColor(color), thickness)

def drawPoint(image, coords, size=default_thickness, color=0):
	cv2.circle(image, coords, size, getColor(color), size)

def resize(image, size=default_size):
	return cv2.resize(image, size)

def shrink(image, scale_x=default_shrink_x, scale_y=default_shrink_y):
	return cv2.resize(image, 0, fx=scale_x, fy=scale_y)
