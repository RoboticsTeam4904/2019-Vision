rftape: src/*.cpp src/*.hpp
	mkdir build
	g++ src/*.cpp src/*.hpp -I /usr/local/include/opencv4/ -l opencv_core -l opencv_imgproc -l opencv_highgui -std=c++17 -o build/rftape

clean:
	rm -rf build