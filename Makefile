CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I include
LDFLAGS = -lm

SRCS = src/main.c src/input.c src/calculations.c
OBJS = $(SRCS:.c=.o)
TARGET = rocketCalculator

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean