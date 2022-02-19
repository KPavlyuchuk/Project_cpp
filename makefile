FLAGS=-fprofile-arcs -ftest-coverage
all: tests
tests: tests.o stack.o
	g++ stack.o tests.o -o tests ${FLAGS}
tests.o: tests.c
	g++ -c tests.c -o tests.o ${FLAGS}
stack.o: stack.c
	g++ -c stack.c -o stack.o ${FLAGS}
clean:
	rm -rf tests *.o *.gcno *.gcda
