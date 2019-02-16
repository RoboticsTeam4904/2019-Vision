import can
import struct

bus = can.Bus(
    interface="socketcan",
    channel="idk",
    receive_own_messages=False)

def send_data(x, y, theta, beta, dist):
    values = [
        # TODO: defaulted to 4 bytes, size subject to bikeshedding
        struct.pack('i', x),
        struct.pack('i', y),
        struct.pack('f', theta),
        struct.pack('f', beta),
        struct.pack('i', dist),
    ]

    payloads = [bytearray(value) for value in values]

    for i in range(len(payloads)):
        # decide on a good arbitration ID later
        message = can.Message(arbitration_id=0x1100 + i, data=payloads[i])
        bus.send(message, timeout=0.2)
