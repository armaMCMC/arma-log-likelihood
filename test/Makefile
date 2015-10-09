CXX = clang++
CXXFLAGS = -g -Wall -std=c++11
INC=-I..
ARMADILLO_LIBS = -larmadillo
LIBS = $(ARMADILLO_LIBS)

bin/% : %.cpp
	$(CXX) $(CXXFLAGS) $(INC) $(LIBS) $< -o $@

all: $(patsubst %.cpp, bin/%, $(wildcard *.cpp))

clean:
	rm -f bin/*
