
DEPS = main.h

%.o: %.cc $(DEPS)
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc fib.o rawfib.o 
	g++ -std=c++11 -Wall -o main main.cc fib.o rawfib.o
