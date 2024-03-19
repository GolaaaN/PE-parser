all: parser.o
	gcc -g parser.o -o parser
parser.o: parser.c
	gcc -c parser.c -o parser.o