all: parser.o main.o
	gcc -g parser.o main.o -o parser
main.o: main.o
	gcc -c main.c -o main.o
parser.o: parser.c
	gcc -c parser.c -o parser.o