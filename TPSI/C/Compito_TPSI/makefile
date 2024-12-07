all: main

main: main.o potenze.o operazioni.o
	gcc -o main main.o potenze.o operazioni.o

main.o: main.c operazioni.h potenze.h
	gcc -c -o main.o main.c

operazioni.o: operazioni.c
	gcc -c -o operazioni.o operazioni.c

potenze.o: potenze.c
	gcc -c -o potenze.o potenze.c