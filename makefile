FLAFS=-fprofile-arcs -ftests-coverage
all: tests
tests: tests.o stack.o
	gcc stack.o tests.o -o tests ${FLAGS}
tests.o: tests.c
	gcc -c tests.c -o tests.o ${FLAGS}
stack.o: stack.c
	gcc -c stack.c -o stack.o ${FLAGS}
clean:
	rm -rf tests *.o
