prog: main.o fonction.o
	gcc main.o fonction.o -o prog -lc

main.o: main.c
	gcc -c main.c

fonction.o: fonction.c
	gcc -c fonction.c

clean:
	rm -f *.o

mrproper: clean
	rm -f prog

install:
	sudo cp prog /usr/bin/