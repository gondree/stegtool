INC_OPENCV=`pkg-config --cflags opencv`
LIB_OPENCV=`pkg-config --libs opencv`
CC=g++

all: stegtool

util.o: src/util.cpp
	$(CC) src/util.cpp -c -g -Iinclude $(INC_OPENCV) -o util.o

stegtool.o: stegtool.cpp
	$(CC) stegtool.cpp -c -g -Iinclude $(INC_OPENCV) -o stegtool.o

stegtool: stegtool.o util.o
	$(CC) stegtool.o util.o  $(LIB_OPENCV) -o stegtool

clean:
	rm -f util.o stegtool.o stegtool
