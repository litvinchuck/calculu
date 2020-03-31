#!/bin/zsh
# gcc tests.c parser.c stack.c sll.c -o file -Wall

#TODO: Make an actual make script ffs


gcc -c -o build/tests.o tests.c -Wall
gcc -c -o build/parser.o parser.c -Wall
gcc -c -o build/queue.o queue.c -Wall
gcc -c -o build/sll.o sll.c -Wall
gcc -c -o build/stack.o stack.c -Wall

gcc -o build/main build/tests.o build/parser.o build/queue.o build/sll.o build/stack.o

