import can # TODO: make dependency list
import struct

class CAN:
    def __init__(self):
        self.bus = can.Bus(
            interface="socketcan",
            channel="idk",
            receive_own_messages=False)

    def send_data(self, data):
        values = [struct.pack('f', data[key]) for key in data] # TODO: defaulted to 4 bytes, size subject to bikeshedding

        payloads = [bytearray(value) for value in values]

        for i in range(len(payloads)):
            # decide on a good arbitration ID later
            message = can.Message(arbitration_id=0x1100 + i, data=payloads[i])
            self.bus.send(message, timeout=0.2)
