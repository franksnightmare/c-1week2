DEPS = main.ih
OBJS = arguments.o process.o compresschar.o decompresschar.o readfile.o readcipher.o

%.o: %.cc $(DEPS)
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(OBJS)
	g++ -std=c++11 -Wall -o main main.cc $(OBJS)
