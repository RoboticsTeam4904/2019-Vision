import WebCam, Printing, GripRunner, ContourFinding, SpikeFinding, autocalibrate
n = 0 # Counter variable
def d(): # Loop o()
    while True:
        o()

def s(): # Take a picture from the webcam and save.
    global n
    image = WebCam.getImage()
    Printing.save(image, name="TEST" + str(n))
    n += 1
    print(image)

def e(exposure): # Set exposure on LINUX ONLY.
    WebCam.set(exposure=0.1)

def o(): # Take a picture and display it with contours.
    image = WebCam.getImage()
    contours = GripRunner.run(image)
    targets = ContourFinding.filterContours(contours) # To be edited if the last filter is changed in case of algorithmic changes.
    # center, distance = SpikeFinding.findCenterandDist(targets) #if 2, join and find center, if 1, return val, if 0 return input. if adjustCoords:    center[0] -= halfWidth
    # # Printing.printResults(contours, center, distance)
    Printing.drawImage(image, contours, targets)
    Printing.display(image)
