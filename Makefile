# === Compiler Settings ===
CXX = g++
CPPFLAGS = -Iinclude -Wall -Wconversion
CXXFLAGS = -std=c++17

all: \
bin/function.x bin/passdata.x bin/hw2.x bin/C1.x bin/C.x bin/forloop2.x \
bin/forloop1.x bin/forloop.x bin/dowhile3.x bin/dowhile2.x bin/dowhile1.x bin/dowhile.x \
bin/prefix1.x bin/prefix.x bin/else.x bin/ifelse.x bin/if.x bin/if1.x \
bin/while2.x bin/while1.x bin/while.x bin/if2.x bin/if3.x bin/if4.x bin/if5.x \
bin/bool1.x bin/bool.x bin/defineheader.x bin/scope_ex.x bin/scope.x \
bin/type1.x bin/char.x bin/hello.x bin/hello2a.x bin/sum.x \
bin/localvar.x bin/cin.x bin/homework2.x bin/header.x bin/debug.x \
bin/hw4.x bin/array.x bin/hw3.x bin/passbyreference.x bin/namespace2.x bin/namespace3.x \
bin/ptr1.x bin/casting.x \

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

bin/if.x: week02/if.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/if1.x: week02/if1.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/if2.x: week02/if2.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/if3.x: week02/if3.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/if4.x: week02/if4.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/if5.x: week02/if5.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/ifelse.x: week02/ifelse.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/else.x: week02/else.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/prefix.x: week02/prefix.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/prefix1.x: week02/prefix1.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/while.x: week02/while.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/while1.x: week02/while1.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/while2.x: week02/while2.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/dowhile.x: week02/dowhile.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/dowhile1.x: week02/dowhile1.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/dowhile2.x: week02/dowhile2.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/dowhile3.x: week02/dowhile3.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/forloop.x: week02/forloop.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/forloop1.x: week02/forloop1.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/forloop2.x: week02/forloop2.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/C.x: week02/C.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/C1.x: week02/C1.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/hw2.x: week02/hw2.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/passdata.x: week03/passdata.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/function.x: week03/function.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/passbyreference.x: week03/passbyreference.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/hw3.x: week03/hw3.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/array.x: week03/array.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/hw4.x: week03/hw4.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/casting.x: week04/casting.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<

bin/ptr1.x: week04/ptr1.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $<
