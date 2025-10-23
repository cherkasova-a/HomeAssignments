PROJECT = Assignment2b
CXX = g++
CXXFLAGS = -std=c++17  -Wall -Wextra
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
