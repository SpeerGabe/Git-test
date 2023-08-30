CC = g++
CFLAGS = -g -Wall -Wextra

default: main

main:	main main.o
	$(CC) $(CFlags) -o main  main.o

main.o:	main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	$(RM) main *.o *~
