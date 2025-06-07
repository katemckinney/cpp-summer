hello2: week01/hello2a.o week01/add2a.o
	g++ -o hello2 week01/hello2a.o week01/add2a.o

week01/hello2a.o: week01/hello2a.cpp
	g++ -c week01/hello2a.cpp -o week01/hello2a.o

week01/add2a.o: week01/add2a.cpp
	g++ -c week01/add2a.cpp -o week01/add2a.o

hello: week01/hello.cpp
	g++ -o hello week01/hello.cpp

sum: week01/d1.cpp
	g++ -o sum week01/d1.cpp

namespace1: week01/namespace1.cpp
	g++ -o namespace1 week01/namespace1.cpp
