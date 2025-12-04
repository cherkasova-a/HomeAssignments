PROJECT = Assignment2a
CXX = g++
CXXFLAGS = -std=c++17  -Wall
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

.PHONY: all clean

all: $(PROJECT)

$(PROJECT) : $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

%.o: %.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -f $(OBJ) $(PROJECT)
