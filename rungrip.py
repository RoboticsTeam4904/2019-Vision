import grip
import cv2
import numpy
import matplotlib.pyplot as plt
import math
import shapely
import scipy

#image = 'Images/IMG_0006.jpg'
#image = 'Images/IMG_1794.jpg'
#image = 'Images/IMG_2065.jpg'
#image = 'Images/IMG_3417.jpg'
#image = 'Images/IMG_5222.jpg'
image = 'Images/IMG_6140.jpg'
#image = 'Images/IMG_6289.jpg'
#image = 'Images/IMG_7133.jpg'
#image = 'Images/IMG_8539.jpg'
#image = 'Images/IMG_8968.jpg'
#image = 'Images/IMG_9615.jpg'
#image = 'Images/IMG_9801.jpg'
#image = 'Images/IMG_9850.jpg'
img = cv2.imread(image)
cv2.imshow('unprocessed', img)

gripfunc = grip.GripPipeline()
gripfunc.process(img)
contours = gripfunc.filter_contours_output

cv2.drawContours(img, contours, -1, (25,25,245), 10)

cnt = contours[0]

rows,cols = img.shape[:2]
[vx,vy,x0,y0] = cv2.fitLine(cnt, cv2.DIST_L2,0,0.01,0.01)
lefty = int((-x0*vy/vx) + y0)
righty = int(((cols-x0)*vy/vx)+y0)
img = cv2.line(img,(cols-1,righty),(0,lefty),(0,0,0),8)

slope = -vy/vx
print(slope)
anglerad = numpy.arctan2(vy, vx)
angledeg = numpy.degrees(anglerad)
print(angledeg)

#for contour 
def p_0(num,t) :
    esc_p = numpy.sum((((-1)**n)*(numpy.exp(t)**n)*((math.factorial(n)*((n+1)**0.5))**-1)) for n in range(1,num,1))
    return esc_p+1

tau = numpy.arange(-2,3,0.1)

x,y= numpy.meshgrid(tau,tau)
cs = plt.contour(x, y, numpy.log(p_0(51, y)/p_0(51, x)),[0.2],colors='k')

p=0.75
logp = (numpy.log(p*numpy.exp(tau)))
plt.plot(tau,logp)

from shapely.geometry import LineString
v1 = cs.collections[0].get_paths()[0].vertices

ls1 = LineString(v1)
ls2 = LineString(numpy.c_[tau, logp])
points = ls1.intersection(ls2)
x, y = points.x, points.y

from scipy import optimize

def f(p):
    x, y = p
    e1 = numpy.log(0.75*numpy.exp(x)) - y
    e2 = numpy.log(p_0(51, y)/p_0(51, x)) - 0.2
    return e1, e2

x2, y2 = optimize.fsolve(f, (x, y))

cv2.circle(img, (int(x), int(y)), 100, (245,25,25), -1)
cv2.circle(img, (int(x2), int(y2)), 100, (25,245,25), -1)
#plt.plot(x, y, "ro")
#plt.plot(x2, y2, "gx")

print x, y
print x2, y2

cv2.imshow('processed', img)
cv2.waitKey(0)
cv2.destroyAllWindows()