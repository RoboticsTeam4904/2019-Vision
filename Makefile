<<<<<<< HEAD
rftape: src/*.cpp src/*.hpp
	rm -rf build
	mkdir build
	g++-8 src/*.cpp src/*.hpp -I /usr/local/include/opencv4/ -I /home/ubuntu/allwpilib/ntcore/src/main/native/include -I /home/ubuntu/allwpilib/wpiutil/src/main/native/include  -std=c++17 -l opencv_core -l opencv_imgproc -l opencv_videoio -l opencv_highgui -l opencv_imgcodecs -L /home/ubuntu/allwpilib/buildcmake/lib -l wpiutil -l ntcore -pthread -o build/rftape
=======
floortape: src/*.cpp src/*.hpp
	rm -rf build
	mkdir build
	g++-8 src/*.cpp src/*.hpp -I /usr/local/include/opencv4/ -I /home/ubuntu/allwpilib/ntcore/src/main/native/include -I /home/ubuntu/allwpilib/wpiutil/src/main/native/include  -std=c++17 -l opencv_core -l opencv_imgproc -l opencv_videoio -l opencv_highgui -L /home/ubuntu/allwpilib/buildcmake/lib -l wpiutil -l opencv_imgcodecs -l ntcore -pthread -o build/rftape
>>>>>>> 7af7ff6f46488cfb520ae27cd3e946318ea02dce
