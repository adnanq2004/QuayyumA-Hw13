all: file.o
	gcc -o filefun file.o

file.o: file.c file.h
	gcc -c file.c

run:
	./filefun
