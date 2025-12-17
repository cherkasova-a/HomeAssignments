CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -pedantic
LDFLAGS = -lgtest -lgtest_main -pthread

TARGET = test_matrix
SRCS = test_matrix.cpp Rational.cpp
OBJS = test_matrix.o Rational.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all run clean

