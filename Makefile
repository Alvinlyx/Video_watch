flag =  -I/usr/include/opencv -I/usr/include/opencv2 -L/usr/lib/x86_64-linux-gnu/
lib=-lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_legacy -lopencv_ml -lpthread 
a.o : picShow.o
	g++  -o  a.o picShow.o $(lib)

picShow.o : video_test.cpp
	g++ $(flag) -c -o picShow.o  video_test.cpp

clean: 
	rm -f *.o

