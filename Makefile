hello2: hello2.o add2.o
	g++ -o hello2 hello2.o add2.o

hello2.o: hello2.cpp
	g++ -c hello2.cpp

add2.o: add2.cpp
	g++ -c add2.cpp
