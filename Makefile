CC = g++
CFLAGS = -std=c++11 -Wall
TARGET = test_runner

SRCS = test.cpp pbaTime/pbaTime.cpp tests/pbaTimeTests.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
