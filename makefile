all: main.o struct.o
	gcc -o output main.o struct.o

main.o: main.c struct.h
	gcc -c main.c

struct.o: struct.c struct.h
	gcc -c struct.c

run:
	./output
