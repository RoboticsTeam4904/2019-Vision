# Settings that vary between testing and runnning
# -----------------------------------------------
import cv2
cv_version = int(cv2.__version__[0])

# Image capture settings
live_image = True
two_cameras = False

# Logging/debug settings
display =  False        # Use cv2.imshow to display images
save = False            # Save images, before and after processing
save_in_folder = True   # If saving, then make a folder for all images in this run
debug = True            # Print values throughout the process
extra_debug = False     # Visualize individual contours and other small details

# Network output settings
network_tables = True
can = False
sockets = False

# Usual configuration combinations
if live_image:
    display = False
if not live_image:
    debug = True
    network_tables, can, sockets = False, False, False

# Sample images
if not live_image:
    sample_image = cv2.imread("TestImages/TEST0.png")
    sample_right_image, sample_left_image = cv2.imread("TestImages/right.jpg"), cv2.imread("TestImages/left.jpg")
