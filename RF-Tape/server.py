import socket
from time import sleep
# create and configure socket on local host
x = 1
serverSocket = socket.socket()
host = socket.gethostname()
port = 25000 #arbitrary port
serverSocket.bind( ( host, port ) )
print(x)
serverSocket.listen( 1 )
print(x)


while True:     # send wave to client
    con, addr = serverSocket.accept()
    print( "connected to client" )
    print("hi2")
    con.send(bytes( "Server wave", "UTF-8" ) )      # receive wave from client
    print("hi")
    print( message )      #wait 1 second
    sleep( 1 )
    con.close(); 
    sleep( 3 )

# class Socket:
#     def __init__(self, ip, port):
#         self.ip, self.port = self.ip, self.port
    
#     def connect(self):
#         self.socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#         self.socket.connect((self.ip, self.port))

#     def send_data(data):
#         data = str(data)
        

# message = str(angleToGoal)
# 			try:
# 				if config.socket_reconnect_rate != 0:
# 					if config.socket_reconnect_rate % frameNum == 0:
# 						clientSocket.close() # is it alright to immediately reopen?
# 						clientSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
# 						clientSocket.connect((config.ip, config.port))
# 						clientSocket.close()
# 				clientSocket.send(message)
# 			except Exception as error:
# 				if config.debug:
# 					print error