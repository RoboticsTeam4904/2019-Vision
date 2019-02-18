def getBetaWithTwoDistance(box, cameraOneDistOne, cameraTwoDistTwo, robotRadius):
    BoxHeight = box[0] - box[2]
    leftTape = boxes[0]
    rightTape = boxes[1]
	leftDist = GetDistance.getDistanceToWall(leftTape[0]) #Distance (d1) of camera to the wall 
    rightDist = GetDistance.getDistanceToWall(rightTape[1])
