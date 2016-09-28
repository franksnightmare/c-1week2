DEPS = main.ih

%.o: %.cc $(DEPS)
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc arguments.o process.o compresschar.o decompresschar.o
	g++ -std=c++11 -Wall -o main main.cc arguments.o process.o compresschar.o decompresschar.o
