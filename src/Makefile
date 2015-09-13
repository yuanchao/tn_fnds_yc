
CC=g++

all: tn_fnds_stone

tn_fnds_stone: dio.o matlabfunctions.o platinum.o star.o synthesis.o test.o wavread.o stonemask.o common.o fft.o
	$(CC) -g -o $@ $^ -L. -lm

.cpp.o:
	$(CC) -I. -Wall -g -I/usr/include -c $<

clean:
	rm -f *.o

