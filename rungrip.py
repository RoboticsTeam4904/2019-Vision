import grip
import cv2

#image = 'IMG_0006.jpg'
#image = 'IMG_1794.jpg'
#image = 'IMG_2065.jpg'
#image = 'IMG_3417.jpg'
#image = 'IMG_5222.jpg'
#image = 'IMG_6140.jpg'
#image = 'IMG_6289.jpg'
#image = 'IMG_7133.jpg'
#image = 'IMG_8539.jpg'
#image = 'IMG_8968.jpg'
#image = 'IMG_9615.jpg'
#image = 'IMG_9801.jpg'
#image = 'IMG_9850.jpg'
img = cv2.imread(image)
cv2.imshow('unprocessed', img)

gripfunc = grip.GripPipeline()
gripfunc.process(img)
contours = gripfunc.filter_contours_output

cv2.drawContours(img, contours, -1, (25,25,245), 10)

cnt = contours[0]

rows,cols = img.shape[:2]
[vx,vy,x,y] = cv2.fitLine(cnt, cv2.DIST_L2,0,0.01,0.01)
lefty = int((-x*vy/vx) + y)
righty = int(((cols-x)*vy/vx)+y)
img = cv2.line(img,(cols-1,righty),(0,lefty),(0,0,0),8)

cv2.imshow('processed', img)
cv2.waitKey(0)
cv2.destroyAllWindows()