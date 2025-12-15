CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -pedantic
LDFLAGS = -lgtest -lgtest_main -pthread

TARGET = test_matrix
SRCS = test_matrix.cpp
OBJS = $(SRCS:.cpp=.o)

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

