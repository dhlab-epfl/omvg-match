all:directory
	g++ src/omvg-match.cpp -o bin/omvg-match -O3 -std=c++11 -I/media/dhlab-linux/lib/openMVG/src -I/usr/include/eigen3/ /media/dhlab-linux/lib/openMVG_Build/Linux-x86_64-RELEASE/*.a

directory:
	mkdir -p bin