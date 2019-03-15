import socket, time

# Client side
class Socket:
    def __init__(self, ip, port, reconnect_delay=1):
        self.ip_and_port = (self.ip, self.port)
        self.reconnect_delay = reconnect_delay
        self.make_socket()
        self.connect()

    def make_socket(self):
        self.socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    def connect(self):
        self.socket.connect(self.ip_and_port)

    def reconnect_until_connected(self):
        self.socket.close()
        self.make_socket()
        connected = False
        while not connected:
            try:
                self.connect()
                connected = True
            except socket.error:
                self.socket.close()
                time.sleep(self.reconnect_delay)

    def send_data_dangerously(self, data): # raises socket.error
        processed_data = bytes(str(data), "UTF-8")
        self.socket.send(processed_data)

    def send_data(self, data):
        try:
            self.send_data_dangerously(data)
        except socket.error as SocketError:
            print("Failed to send data over sockets, error: {}".format(SocketError))
            self.reconnect_until_connected()
            print("Successfully connected")
            self.send_data(data) # Recursive