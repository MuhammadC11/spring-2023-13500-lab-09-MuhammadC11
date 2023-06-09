main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o



funcs.o: funcs.cpp funcs.h coord3d.h

main.o: main.cpp funcs.h coord3d.h

tests.o: tests.cpp doctest.h funcs.h coord3d.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f main.o funcs.o tests.o main tests
