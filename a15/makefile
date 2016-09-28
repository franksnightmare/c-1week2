DEPS = main.h
OBJS = binary.o lsb.o shift.o truncate.o arguments.o

%.o: %.cc $(DEPS)
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(OBJS)
	g++ -std=c++11 -Wall -o main main.cc $(OBJS)
