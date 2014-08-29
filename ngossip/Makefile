all: runtest

test: test.cpp ngossip.c ngossip.h
	g++ -Wall -o test test.cpp ngossip.c -std=c++11 -lm

runtest: test
	./test abundant,cake,happy,prime
