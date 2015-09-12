
CC=g++

all: tn_fnds_yc

tn_fnds_yc: dio.o matlabfunctions.o platinum.o star.o synthesis.o test.o wavread.o
	$(CC) -g -o $@ $^ -L. -lm -lfftw3

.cpp.o:
	$(CC) -I. -Wall -g -I/usr/include -c $<

clean:
	rm -f *.o

