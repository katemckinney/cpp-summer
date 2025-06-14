# === Compiler Settings ===
CXX = g++
CPPFLAGS = -Iinclude -Wall -Wconversion
CXXFLAGS = -std=c++17

all: \
bin/bool1.x bin/bool.x bin/defineheader.x bin/scope_ex.x bin/scope.x \
bin/type1.x bin/char.x bin/hello.x bin/hello2a.x bin/sum.x \
bin/localvar.x bin/cin.x bin/homework2.x bin/header.x bin/debug.x \
bin/namespace2.x bin/namespace3.x

# === Example 1: hello2a.cpp and add2a.cpp: compiling to object files===
build/hello2a.o: week01/hello2a.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

build/add2a.o: week01/add2a.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

# === Example 1: linking hello2a.o and add2a.o and executing===
bin/hello2a.x: build/hello2a.o build/add2a.o
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $^

# === Example 2: linking and compiling to executable ===
bin/header.x: build/main.o build/mymath1.o
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $^

# === Example 2: main.cpp and mymath1.cpp: compile to oject file, include header ===
build/main.o: week01/main.cpp include/mymath1.h
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

build/mymath1.o: week01/mymath1.cpp include/mymath1.h
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

# === Example 3: char and uchar explanation ===

bin/char.x: week02/char.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

# === Example 4: type conversion, data loss ===

bin/type1.x: week02/type1.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

# === Example 5: Variable scope ===

bin/scope.x: week02/scope.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

# === Example 5: Variable scope part ii ===
bin/scope_x.x: week02/scope_x.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

# === Example 6: preprocessor in header  ===
bin/defineheader.x: build/defineheader.o
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $^

build/defineheader.o: week02/defineheader.cpp include/defineheader.h
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

# === Individual examples (no linking) ===
bin/hello.x: week01/hello.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/sum.x: week01/d1.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/debug.x: week01/debug.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/localvar.x: week01/localvar.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/homework2.x: week01/homework2.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/namespace2.x: week01/namespace2.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/namespace3.x: week01/namespace3.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/cin.x: week02/cin_cout.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/bool.x: week02/bool.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/bool1.x: week02/bool1.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<
