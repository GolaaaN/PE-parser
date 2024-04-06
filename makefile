all: parser.o main.o
	gcc -g main.o parser.o -o parser
main.o: main.c
	gcc -c main.c -o main.o
parser.o: parser.c
	gcc -c parser.c -o parser.o