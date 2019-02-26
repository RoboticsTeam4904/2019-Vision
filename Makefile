rftape: src/*.cpp src/*.hpp src/*.h
	mkdir build
	# g++ src/*.cpp src/*.hpp src/*.h -I /usr/local/include/opencv4/ -L /usr/local/lib -l opencv_core -l opencv_videoio -l opencv_imgproc -l opencv_highgui -std=c++17 -o build/rftape -w
		g++ src/*.cpp src/*.hpp src/*.h -I /usr/local/include/opencv4/ -L /usr/local/lib -l opencv_core -l opencv_videoio -l opencv_imgproc -l opencv_highgui -std=c++17 -w


clean:
	rm -rf build