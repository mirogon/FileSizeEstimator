BIN=FileSizeEstimator
CXX=g++
CXXFLAGS=-std=c++11
OBJ=main.o

all: main.o
	$(CXX) main.o -o $(BIN)

main.o: src/main.cpp
	$(CXX) -c src/main.cpp $(CXXFLAGS)
	
.PHONY: clean

clean:
	rm *.o $(BIN)
