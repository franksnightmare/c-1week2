DEPS = ex10.ih
OBJ = arguments.o process.o readfile.o capitalizefile.o lowercasefile.o usage.o

%.o: %.cc $(DEPS)
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(OBJ)
	g++ -std=c++11 -Wall -o main main.cc $(OBJ)
