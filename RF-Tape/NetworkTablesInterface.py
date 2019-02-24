from networktables import NetworkTables
import Constants

NetworkTables.setTeam(Constants.team)
NetworkTables.initialize(server=Constants.ip)

class Table: # TODO: Later, use two tables, when organizing RF and floor together
    def __init__(self, name="Vision"):
        self.table = NetworkTables.getTable(name)
        self.table.setUpdateRate(Constants.networkSpeed)

    # Take in data as dictionary as to allow sending of partial information
    def send_data(data): 
        assert type(data) == dict
        self.table.putBoolean("visible", data.get("is_visible", False)) # Default "visible" to False

        # if frame_num in data: # only update frame_num if it was passed
        self.table.putNumber("RF/frame_num", data.get("frame_num", -1))
        self.table.putNumber("RF/theta", data.get("theta", 0))
        self.table.putNumber("RF/dist", data.get("dist", 0))
        self.table.putNumber("RF/beta", data.get("beta", 0))
        self.table.putNumber("RF/x", data.get("x", 0))
        self.table.putNumber("RF/y", data.get("y", 0))

    def get_floor_beta(self):
        return self.table.getNumber("Floor/beta", 0)
