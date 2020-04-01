# the compiler:
CC = gcc

# compiler flags:
#	-g	adds debugging info to the executable file
#	-Wall	turns on most, but not all, compiler warnings
CFLAGS = -g -Wall

# the build target executable
TARGET = calculu

default: $(TARGET)

$(TARGET): tests.o parser.o lists.o
	$(CC) $(CFLAGS) -o $(TARGET) tests.o parser.o queue.o sll.o stack.o

# Object file lists.o contains all "list-based" data structures:
# sll, stack, queue
lists.o: sll.o stack.o queue.o
	$(CC) $(CFLAGS) -o lists.o -c sll.o stack.o queue.o

sll.o: sll.c
	$(CC) $(CFLAGS) -c sll.c

stack.o: stack.c sll.h
	$(CC) $(CFLAGS) -c stack.c

queue.o: queue.c sll.h
	$(CC) $(CFLAGS) -c queue.c

# Object file parser.o contains math expression parsing algorithms
parser.o: parser.c lists.o
	$(CC) $(CFLAGS) -c parser.c

# Object file tests.o contains all tests
tests.o: tests.c parser.o lists.o
	$(CC) $(CFLAGS) -c tests.c

# Remove any compiled file
clean:
	$(RM) $(TARGET) *.o
