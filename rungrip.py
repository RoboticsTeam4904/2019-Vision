import grip
import cv2

#image = 'IMG_8968.jpg' #threshold 150-250
#image = 'IMG_7133.jpg' #bad picture
image = 'IMG_6140.jpg' #threshold 210-250
#image = 'IMG_6289.jpg' #bad picture
img = cv2.imread(image)
cv2.imshow('unprocessed', img)


gripfunc = grip.GripPipelineTwo()
gripfunc.process(img)
contours = gripfunc.find_contours_output


cv2.drawContours(img, contours, -1, (25,25,245), 10)

cnt = contours[0]

#M = cv2.moments(cnt)
# print(M)
#cx = int(M['m10']/M['m00'])
#cy = int(M['m01']/M['m00'])
#cv2.circle(img, (cx,cy), 10, (70,20,200), -1)

rows,cols = img.shape[:2]
[vx,vy,x,y] = cv2.fitLine(cnt, cv2.DIST_L2,0,0.01,0.01)
lefty = int((-x*vy/vx) + y)
righty = int(((cols-x)*vy/vx)+y)
img = cv2.line(img,(cols-1,righty),(0,lefty),(0,0,0),8)

# print(x)
# print(y)
# print(vx)
# print(vy)
# print(lefty)
# print(righty)


# gripfunc = grip.GripPipeline()
# gripfunc.process(img)
# output = gripfunc.find_lines_output


# lineThickness = 8
# for line in output:
# 	cv2.line(img, (line.x1, line.y1), (line.x2, line.y2), (70,20,200), lineThickness)


cv2.imshow('processed', img)
cv2.waitKey(0)
cv2.destroyAllWindows()