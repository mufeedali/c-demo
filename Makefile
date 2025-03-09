CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: main

main: main.o utils.o math_operations.o string_utils.o
	$(CC) $(CFLAGS) -o main main.o utils.o math_operations.o string_utils.o

main.o: main.c utils.h math_operations.h string_utils.h
	$(CC) $(CFLAGS) -c main.c

utils.o: utils.c utils.h
	$(CC) $(CFLAGS) -c utils.c

math_operations.o: math_operations.c math_operations.h
	$(CC) $(CFLAGS) -c math_operations.c

string_utils.o: string_utils.c string_utils.h utils.h
	$(CC) $(CFLAGS) -c string_utils.c

clean:
	rm -f main *.o

.PHONY: all clean
