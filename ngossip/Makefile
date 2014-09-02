all: test ngossip

test: test.cpp libngossip.a
	g++ -Wall -std=c++11 -o test test.cpp libngossip.a

runtest: test
	./test abundant,cake,happy,prime

ngossip: main.c libngossip.a
	gcc -Wall -std=c11 -o ngossip main.c libngossip.a

libngossip.a: ngossip.c ngossip.h
	gcc -std=c11 -c ngossip.c -o ngossip.o
	ar rcs libngossip.a ngossip.o

clean:
	rm *.o lib*.a test ngossip
