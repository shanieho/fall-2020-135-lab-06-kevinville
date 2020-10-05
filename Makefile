main: main.o funcs.o caesar.o decrypt.o
	g++ -o main main.o funcs.o caesar.o decrypt.o

tests: tests.o funcs.o caesar.o viginere.o decrypt.o
	g++ -o tests tests.o funcs.o caesar.o viginere.o decrypt.o

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h caesar.h viginere.h decrypt.h

caesar.o: caesar.cpp caesar.h 

viginere.o: viginere.cpp viginere.h

decrypt.o: decrypt.cpp decrypt.h viginere.cpp viginere.h

tests.o: tests.cpp  doctest.h funcs.h caesar.h viginere.h decrypt.o

clean:
	rm *.o

help:
	@echo  make main : make executable named main
	@echo make tests : make test suite named tests

