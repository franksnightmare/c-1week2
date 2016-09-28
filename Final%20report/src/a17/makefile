DEPS = main.ih

%.o: %.cc $(DEPS)
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc librvalue.a
	g++ -std=c++11 -Wall -o main main.cc librvalue.a
