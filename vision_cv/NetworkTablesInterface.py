from networktables import NetworkTables
import config 

NetworkTables.setTeam(config.team)
NetworkTables.initialize(server=config.ip)
table = NetworkTables.getTable("Vision")
table.setUpdateRate(config.networkSpeed)

def send_data(isVisible=True, x, y, theta, beta, dist, frameNum):
    table.putBoolean("trustable", isVisible)
    table.putBoolean('x', x)
	table.putNumber('y', y)
	table.putNumber('theta', theta)
	table.putNumber('beta', beta)
    table.putNumber('distance', dist)
    table.putNumber("frameNum", frameNum)
    # TODO: send the network tables