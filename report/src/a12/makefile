DEPS = bignum.h
OBJS = printbig.o printsmall.o posmod.o

%.o: %.cc $(DEPS)
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(OBJS)
	g++ -std=c++11 -Wall -o main main.cc $(OBJS)
