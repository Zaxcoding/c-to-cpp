all: prog20

prog20: main.o simple_array.o
	g++ main.o simple_array.o -o prog20

main.o: main.cpp simple_array.h
	g++ -c main.cpp

simple_array.o: simple_array.cpp simple_array.h
	g++ -c simple_array.cpp

clean:
	rm -f *.o prog20 *~ #*