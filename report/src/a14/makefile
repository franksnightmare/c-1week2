DEPS = main.h
OBJS = computequality.o computescores.o endcomment.o endline.o getinput.o printscores.o startcomment.o

%.o: %.cc $(DEPS)
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(OBJS)
	g++ -std=c++11 -Wall -o main main.cc $(OBJS)
