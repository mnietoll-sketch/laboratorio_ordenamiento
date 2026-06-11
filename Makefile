test: main.o sort.o pirate.o
	gcc main.o sort.o pirate.o -o test
main.o: main.c sort.h pirate.h
	gcc -g -c main.c
sort.o: sort.c sort.h
	gcc -g -c sort.c
pirate.o: pirate.c pirate.h
	gcc -g -c pirate.c
clean:
	rm *.o test
