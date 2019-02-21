rftape: src/*.cpp src/*.hpp src/*.h
	mkdir build
	g++ src/*.cpp src/*.hpp src/*.h -I /usr/local/include/opencv4/ -l opencv_core -l opencv_videoio -l opencv_imgproc -l opencv_highgui -std=c++17

clean:
	rm -rf build