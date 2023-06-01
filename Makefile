CC = g++
CFLAGS = -std=c++11 -Wall

TARGET = program
SRCS = main.cpp pbaTime/pbaTime.cpp
OBJS = $(SRCS:.cpp=.o)

TEST_SRCS = tests/pbaTimeTests.cpp
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

.PHONY: all clean build test

all: build

build: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(TEST_SRCS:.cpp=.o): $(TEST_SRCS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TEST_OBJS) $(TARGET)

test: $(TEST_OBJS)
	$(CC) $(CFLAGS) $(TEST_OBJS) -o test_runner
	./test_runner

.PHONY: build test clean