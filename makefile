all: main.o listfuncs.o
	gcc -o testlist main.o listfuncs.o

main.o: main.c listfuncs.h
	gcc -c main.c

listfuncs.o: listfuncs.c listfuncs.h
	gcc -c listfuncs.c

run:
	./testlist

clean:
	rm *.o
	rm testlist
