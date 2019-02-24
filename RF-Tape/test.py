import numpy as np, cv2
import Printing
img1 = cv2.imread("motion_profiling.JPG")
img2 = cv2.imread("IMG_3469.JPG")

h1, w1 = img1.shape[0], img1.shape[1]
h2, w2 = img2.shape[0], img2.shape[1]


scale = np.true_divide(h1,h2)
new_img2 = cv2.resize(img2, (0,0), fx=scale, fy=scale)

print("img1 {},\timg2 {}\tnew_img2 {}".format(img1.shape, img2.shape, new_img2.shape))
new = np.concatenate((img1, new_img2), axis=1) # concatenate along 2nd axis (horizontally)


Printing.display(img1, "img1", doResize=False)
Printing.display(img2, "img2", doResize=False)
# Printing.display(new_img2, "new_img2", doResize=False)
Printing.display(Printing.combine(img1, img2), "new", doResize=False, delay=0)
