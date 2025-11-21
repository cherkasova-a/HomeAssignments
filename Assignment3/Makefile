CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wpedantic -Werror -pthread
GTEST_LIBS = -lgtest -lgtest_main

SRC = Engine.cpp Gun.cpp Transformer.cpp Autobot.cpp Decepticon.cpp Dinobot.cpp
HDR = Engine.h Gun.h Transformer.h Autobot.h Decepticon.h Dinobot.h
TESTS = test_transformer.cpp test_autobot.cpp test_decepticon.cpp test_dinobot.cpp

OBJ = $(SRC:.cpp=.o)
TEST_OBJ = $(TESTS:.cpp=.o)

all: all_tests

all_tests: $(OBJ) $(TEST_OBJ)
	$(CXX) $(OBJ) $(TEST_OBJ) $(GTEST_LIBS) -o all_tests

%.o: %.cpp $(HDR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o all_tests

.PHONY: all clean

