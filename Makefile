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

globalvar: week01/main.o week01/mymath1.o
	g++ -o globalvar week01/main.o week01/mymath1.o

week01/main.o: week01/main.cpp week01/mymath1.h
	g++ -c week01/main.cpp -o week01/main.o

week01/mymath1.o: week01/mymath1.cpp week01/mymath1.h
	g++ -c week01/mymath1.cpp -o week01/mymath1.o

namespace2:week01/namespace2.cpp
	g++ -o namespace2 week01/namespace2.cpp

namespace3:week01/namespace3.cpp
	g++ -o namespace3 week01/namespace3.cpp

homework2: week01/homework2.cpp
	g++ -o homework2 week01/homework2.cpp
