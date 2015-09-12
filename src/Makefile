
CC=g++

all: tn_fnds

tn_fnds: dio.o matlabfunctions.o platinum.o star.o synthesis.o test.o wavread.o #fft.o
	$(CC) -g -o $@ $^ -L. -lm -lfftw3
#	$(CC) -g -o $@ $^ -L. -lm

.cpp.o:
	$(CC) -I. -Wall -g -I/usr/include -c $<

clean:
	rm -f *.o

