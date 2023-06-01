CC = g++
CFLAGS = -std=c++11 -Wall
TARGET = out
TEST_TARGET = test_runner

SRCS = main.cpp pbaTime/pbaTime.cpp
OBJS = $(SRCS:.cpp=.o)

TEST_SRCS = test.cpp pbaTime/pbaTime.cpp tests/pbaTimeTests.cpp
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

all: $(TARGET) $(TEST_TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

$(TEST_TARGET): $(TEST_OBJS)
	$(CC) $(CFLAGS) $(TEST_OBJS) -o $(TEST_TARGET)