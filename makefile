CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

Main : Main.o CharString.o
	$(CC) $(LFLAGS) Main.o CharString.o -o Main

Main.o : Main.cpp CharString.cpp
	$(CC) $(CFLAGS) Main.cpp

CharString.o : CharString.cpp CharString.h
	$(CC) $(CFLAGS) CharString.cpp

clean:
	\rm *.o Main

