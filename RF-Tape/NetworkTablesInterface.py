from ntworktables import NetworkTables
import Constants 

NetworkTables.setTeam(Constants.team)
NetworkTables.initialize(server=Constants.ip)
table = NetworkTables.getTable("Vision")
table.setUpdateRate(Constants.networkSpeed)

def send_data(x, y, theta, beta, dist, frameNum, isVisible=True):
    table.putBoolean("trustable", isVisible)
    table.putBoolean('x', x)
    table.putNumber('y', y)
    table.putNumber('theta', theta)
    table.putNumber('beta', beta)
    table.putNumber('distance', dist)
    table.putNumber("frameNum", frameNum)
