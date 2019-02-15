from networktables import NetworkTables
import config 

NetworkTables.setTeam(config.team)
NetworkTables.initialize(server=config.ip)
table = NetworkTables.getTable("Vision")
table.setUpdateRate(config.networkSpeed)

def send_data(x, y, theta, beta, dist):
    # TODO: send the network tables
    pass
