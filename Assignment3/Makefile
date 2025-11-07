CXX = g++
CXXFLAGS = -std=c++17 -Wall -pthread
GTEST_LIBS = -lgtest -lgtest_main

SRC = Engine.cpp Gun.cpp Transformer.cpp Autobot.cpp Decepticon.cpp Dinobot.cpp
HDR = Engine.h Gun.h Transformer.h Autobot.h Decepticon.h Dinobot.h
TESTS = test_transformer.cpp test_autobot.cpp test_decepticon.cpp test_dinobot.cpp

all: all_tests

all_tests: $(TESTS) $(SRC) $(HDR)
	$(CXX) $(CXXFLAGS) $(TESTS) $(SRC) $(GTEST_LIBS) -o all_tests

clean:
	rm -f all_tests *.o

.PHONY: all clean
